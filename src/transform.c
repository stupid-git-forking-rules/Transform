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

void SetPlayerAvatar(void)
{
    gSaveBlock2Ptr->playerGfxType = VarGet(VAR_RESULT);
    gSaveBlock2Ptr->playerGender  = VarGet(VAR_RESULT) % 2;
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