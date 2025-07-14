#include "global.h"
#include "transform.h"
#include "event_data.h"
#include "mystery_gift.h"
#include "util.h"
#include "constants/event_objects.h"
#include "constants/map_scripts.h"
#include "main_menu.h"
#include "main.h"
#include "random.h"
#include "battle_setup.h"
#include "string_util.h"
#include "strings.h"
#include "pokemon_storage_system.h"
#include "task.h"
#include "field_weather.h"
#include "new_game.h"
#include "start_menu.h"
#include "constants/metatile_labels.h"
#include "fieldmap.h"
#include "field_screen_effect.h"
#include "overworld.h"
#include "event_scripts.h"
#include "sound.h"
#include "constants/songs.h"
#include "constants/trainers.h"
#include "data.h"
#include "constants/battle.h"
#include "event_object_movement.h"
#include "script_pokemon_util.h"
#include "palette.h"
#include "decompress.h"
#include "window.h"
#include "text.h"
#include "menu.h"
#include "gpu_regs.h"
#include "constants/weather.h"
#include "global.fieldmap.h"
#include "tilesets.h"
#include "constants/decorations.h"
#include "decoration_inventory.h"
#include "decoration.h"
#include "pokedex.h"
#include "pokedex_plus_hgss.h"
#include "field_player_avatar.h"
#include "naming_screen.h"
#include "config/general.h"
#include "item.h"
#include "constants/vars.h"
#include "event_object_lock.h"


//
// 	Player Avatar System Code
//

struct PitAvatarInfo {
    u16 mugshotId;
    u16 graphicsId;
    u16 trainerFrontPicId;
    u16 trainerBackPicId;
};

#define PIT_AVATAR_COUNT ARRAY_COUNT(sPitAvatars)
static const struct PitAvatarInfo sPitAvatars[] = {

    {
        .mugshotId = AVATAR_POKEMON_CHOICE,
        .graphicsId = 0xFFFF,
        .trainerFrontPicId = 0xFFFF,
        .trainerBackPicId = TRAINER_BACK_PIC_DUMMY,
    },

};

u16 ReturnAvatarMugshotId(u16 avatarId)
{
    return sPitAvatars[avatarId].mugshotId;
}

u16 ReturnAvatarGraphicsId(u16 avatarId)
{
    u16 graphicsId = OBJ_EVENT_GFX_VAR_D; // Directly assign the variable graphic ID
    VarSet(VAR_OBJ_GFX_ID_D, gSaveBlock2Ptr->pokemonAvatarSpecies + OBJ_EVENT_MON);
    TryCreatePokemonAvatarSpriteBob();

    return graphicsId;
}

u16 ReturnAvatarTrainerFrontPicId(u16 avatarId)
{
    return sPitAvatars[avatarId].trainerFrontPicId;
}

u16 ReturnAvatarTrainerBackPicId(u16 avatarId)
{
    return sPitAvatars[avatarId].trainerBackPicId;
}

EWRAM_DATA u8 gPlayerTransformEffectActive = FALSE;

void BeginPlayerTransformEffect(u8 type)
{
    struct Sprite *sprite = &gSprites[gPlayerAvatar.spriteId];
    if (sprite)
    {
        sprite->data[0] = 0; 
        sprite->data[1] = type; 
        sprite->oam.priority = 1; 
        gPlayerTransformEffectActive = TRUE; 
        u8 taskId = CreateTask(UpdatePlayerTransformAnimation, 0xFF);
    }
}

void EndPlayerTransformAnimation(struct Sprite *sprite, u8 taskId)
{
    gPlayerTransformEffectActive = FALSE;
    REG_MOSAIC = 0;
    sprite->oam.mosaic = FALSE;
    sprite->oam.priority = 2;
    sprite->data[0] = 0;
    sprite->data[1] = 0;

    struct ObjectEvent *playerObjectEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    ObjectEventSetGraphicsId(playerObjectEvent, GetPlayerAvatarGraphicsIdByStateId(PLAYER_AVATAR_STATE_NORMAL));
    ObjectEventTurn(playerObjectEvent, playerObjectEvent->movementDirection);
    SetPlayerAvatarStateMask(PLAYER_AVATAR_FLAG_ON_FOOT);
    ObjectEventSetHeldMovement(playerObjectEvent, GetFaceDirectionMovementAction(playerObjectEvent->facingDirection));
    gPlayerAvatar.preventStep = FALSE;
    UnlockPlayerFieldControls();
    return DestroyTask(taskId);
}

// Main update logic for the player transform effect 
void UpdatePlayerTransformAnimation(u8 taskId)
{
    struct ObjectEvent *playerObjectEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    struct Sprite *sprite = &gSprites[gPlayerAvatar.spriteId];
    u8 frames = sprite->data[0];
    u8 stretch;

    sprite->oam.mosaic = TRUE;

    if (frames < 8)
        stretch = frames >> 1;
    else if (frames < 16)
        stretch = (16 - frames) >> 1;
    else // Animation finished
        return EndPlayerTransformAnimation(sprite, taskId);

    SetGpuReg(REG_OFFSET_MOSAIC, (stretch << 12) | (stretch << 8));

    if (frames == 8)
        ObjectEventSetGraphicsId(playerObjectEvent, GetPlayerAvatarGraphicsIdByStateId(PLAYER_AVATAR_STATE_NORMAL));
    
    sprite->data[0]++; // Increment frames
}

void SetPlayerAvatar(void)
{
    u16 choiceIndex = VarGet(VAR_RESULT);
    u16 speciesId = SPECIES_NONE;

    switch (choiceIndex)
    {
        case 0: speciesId = SPECIES_DITTO; break;
        case 1: speciesId = SPECIES_MARILL; break;
        case 2: speciesId = SPECIES_RHYHORN; break;
        case 3: speciesId = SPECIES_JOLTIK; break;
        case 4: speciesId = SPECIES_NOIVERN; break;
    }
    gSaveBlock2Ptr->pokemonAvatarSpecies = speciesId;

    BeginPlayerTransformEffect(TRANSFORM_TYPE_PLAYER_SPECIES);
}

void TryCreatePokemonAvatarSpriteBob(void)
{   
    if(!(FuncIsActiveTask(Task_CreatePokemonAvatarBob) || FuncIsActiveTask(Task_PokemonAvatar_HandleBob)))
        CreateTask(Task_CreatePokemonAvatarBob, 0);
}

void Task_CreatePokemonAvatarBob(u8 taskId)
{
    if(gMain.callback2 == CB2_Overworld)
    {
        gTasks[taskId].func = Task_PokemonAvatar_HandleBob;
    }
}

#define STEP_FRAME_DURATION 6
void Task_PokemonAvatar_HandleBob(u8 taskId)
{
    struct ObjectEvent *playerObj = &gObjectEvents[gPlayerAvatar.objectEventId];
    struct Sprite *playerSprite = &gSprites[playerObj->spriteId];
    u8 movementActionId = playerObj->movementActionId;
    s16 *data = gTasks[taskId].data;

    switch(movementActionId)
    {
        case MOVEMENT_ACTION_WALK_FAST_DOWN:  
        case MOVEMENT_ACTION_WALK_FAST_UP:    
        case MOVEMENT_ACTION_WALK_FAST_LEFT:  
        case MOVEMENT_ACTION_WALK_FAST_RIGHT: 
        case MOVEMENT_ACTION_WALK_NORMAL_DOWN:  
        case MOVEMENT_ACTION_WALK_NORMAL_UP:    
        case MOVEMENT_ACTION_WALK_NORMAL_LEFT:  
        case MOVEMENT_ACTION_WALK_NORMAL_RIGHT: 
            break;
        default:
            playerSprite->y2 = 1;
            data[0] = 0;
            return;
    }

    if(data[0] == 0)
    {
        playerSprite->y2 = 1;
    }

    if(data[0] == STEP_FRAME_DURATION)
    {
        playerSprite->y2 -= 1;
    }

    if(data[0] == (STEP_FRAME_DURATION * 2))
    {
        playerSprite->y2 += 1;
        data[0] = 0;
        return;
    }

    data[0]++;

}