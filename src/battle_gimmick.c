#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_interface.h"
#include "battle_gimmick.h"
#include "battle_z_move.h"
#include "battle_setup.h"
#include "battle_util.h"
#include "item.h"
#include "palette.h"
#include "pokemon.h"
#include "sprite.h"
#include "util.h"
#include "test_runner.h"

#include "data/gimmicks.h"

// Populates gBattleStruct->gimmick.usableGimmick for each battler.
void AssignUsableGimmicks(void)
{
    u32 battler, gimmick;
    for (battler = 0; battler < gBattlersCount; ++battler)
    {
        gBattleStruct->gimmick.usableGimmick[battler] = GIMMICK_NONE;
        for (gimmick = 0; gimmick < GIMMICKS_COUNT; ++gimmick)
        {
            if (CanActivateGimmick(battler, gimmick))
            {
                gBattleStruct->gimmick.usableGimmick[battler] = gimmick;
                break;
            }
        }
    }
}

// Returns whether a battler is able to use a gimmick. Checks consumption and gimmick specific functions.
bool32 CanActivateGimmick(u32 battler, enum Gimmick gimmick)
{
    return gGimmicksInfo[gimmick].CanActivate != NULL && gGimmicksInfo[gimmick].CanActivate(battler);
}

// Returns whether the player has a gimmick selected while in the move selection menu.
bool32 IsGimmickSelected(u32 battler, enum Gimmick gimmick)
{
    // There's no player select in tests, but some gimmicks need to test choice before they are fully activated.
    if (TESTING)
        return (gBattleStruct->gimmick.toActivate & (1u << battler)) && gBattleStruct->gimmick.usableGimmick[battler] == gimmick;
    else
        return gBattleStruct->gimmick.usableGimmick[battler] == gimmick && gBattleStruct->gimmick.playerSelect;
}

// Sets a battler as having a gimmick active using their party index.
void SetActiveGimmick(u32 battler, enum Gimmick gimmick)
{
    gBattleStruct->gimmick.activeGimmick[GetBattlerSide(battler)][gBattlerPartyIndexes[battler]] = gimmick;
}

// Returns a battler's active gimmick, if any.
enum Gimmick GetActiveGimmick(u32 battler)
{
    return gBattleStruct->gimmick.activeGimmick[GetBattlerSide(battler)][gBattlerPartyIndexes[battler]];
}

// Returns whether a trainer mon is intended to use an unrestrictive gimmick via .useGimmick (i.e Tera).
bool32 ShouldTrainerBattlerUseGimmick(u32 battler, enum Gimmick gimmick)
{
    // There are no trainer party settings in battles, but the AI needs to know which gimmick to use.
    if (TESTING)
    {
        return gimmick == TestRunner_Battle_GetChosenGimmick(GetBattlerSide(battler), gBattlerPartyIndexes[battler]);
    }
    // The player can bypass these checks because they can choose through the controller.
    else if (IsOnPlayerSide(battler)
         && !((gBattleTypeFlags & BATTLE_TYPE_MULTI) && battler == B_POSITION_PLAYER_RIGHT))
    {
        return TRUE;
    }
    // Check the trainer party data to see if a gimmick is intended.
    else
    {
        if (gimmick == GIMMICK_TERA && gBattleStruct->opponentMonCanTera & 1 << gBattlerPartyIndexes[battler])
            return TRUE;
        if (gimmick == GIMMICK_DYNAMAX && gBattleStruct->opponentMonCanDynamax & 1 << gBattlerPartyIndexes[battler])
            return TRUE;
    }

    return FALSE;
}

// Returns whether a trainer has used a gimmick during a battle.
bool32 HasTrainerUsedGimmick(u32 battler, enum Gimmick gimmick)
{
    // Check whether partner battler has used gimmick or plans to during turn.
    if (IsDoubleBattle()
        && IsPartnerMonFromSameTrainer(battler)
        && (gBattleStruct->gimmick.activated[BATTLE_PARTNER(battler)][gimmick]
        || ((gBattleStruct->gimmick.toActivate & (1u << BATTLE_PARTNER(battler))
        && gBattleStruct->gimmick.usableGimmick[BATTLE_PARTNER(battler)] == gimmick))))
    {
        return TRUE;
    }
    // Otherwise, return whether current battler has used gimmick.
    else
    {
        return gBattleStruct->gimmick.activated[battler][gimmick];
    }
}

// Sets a gimmick as used by a trainer with checks for Multi Battles.
void SetGimmickAsActivated(u32 battler, enum Gimmick gimmick)
{
    gBattleStruct->gimmick.activated[battler][gimmick] = TRUE;
    if (IsDoubleBattle() && IsPartnerMonFromSameTrainer(battler))
        gBattleStruct->gimmick.activated[BATTLE_PARTNER(battler)][gimmick] = TRUE;
}

#define SINGLES_GIMMICK_TRIGGER_POS_X_OPTIMAL (30)
#define SINGLES_GIMMICK_TRIGGER_POS_X_PRIORITY (31)
#define SINGLES_GIMMICK_TRIGGER_POS_X_SLIDE (15)
#define SINGLES_GIMMICK_TRIGGER_POS_Y_DIFF (-11)

#define DOUBLES_GIMMICK_TRIGGER_POS_X_OPTIMAL (30)
#define DOUBLES_GIMMICK_TRIGGER_POS_X_PRIORITY (31)
#define DOUBLES_GIMMICK_TRIGGER_POS_X_SLIDE (15)
#define DOUBLES_GIMMICK_TRIGGER_POS_Y_DIFF (-4)

#define tBattler    data[0]
#define tHide       data[1]

void ChangeGimmickTriggerSprite(u32 spriteId, u32 animId)
{
    StartSpriteAnim(&gSprites[spriteId], animId);
}

void CreateGimmickTriggerSprite(u32 battler)
{
    const struct GimmickInfo * gimmick = &gGimmicksInfo[gBattleStruct->gimmick.usableGimmick[battler]];

    // Exit if there shouldn't be a sprite produced.
    if (!IsOnPlayerSide(battler)
     || gBattleStruct->gimmick.usableGimmick[battler] == GIMMICK_NONE
     || gimmick->triggerSheet == NULL
     || HasTrainerUsedGimmick(battler, gBattleStruct->gimmick.usableGimmick[battler]))
    {
        return;
    }

    LoadSpritePalette(gimmick->triggerPal);
    if (GetSpriteTileStartByTag(TAG_GIMMICK_TRIGGER_TILE) == 0xFFFF)
        LoadSpriteSheet(gimmick->triggerSheet);

    if (gBattleStruct->gimmick.triggerSpriteId == 0xFF)
    {
        if (IsDoubleBattle())
            gBattleStruct->gimmick.triggerSpriteId = CreateSprite(gimmick->triggerTemplate,
                                                                  gSprites[gHealthboxSpriteIds[battler]].x - DOUBLES_GIMMICK_TRIGGER_POS_X_SLIDE,
                                                                  gSprites[gHealthboxSpriteIds[battler]].y - DOUBLES_GIMMICK_TRIGGER_POS_Y_DIFF, 0);
        else
            gBattleStruct->gimmick.triggerSpriteId = CreateSprite(gimmick->triggerTemplate,
                                                                  gSprites[gHealthboxSpriteIds[battler]].x - SINGLES_GIMMICK_TRIGGER_POS_X_SLIDE,
                                                                  gSprites[gHealthboxSpriteIds[battler]].y - SINGLES_GIMMICK_TRIGGER_POS_Y_DIFF, 0);
    }

    gSprites[gBattleStruct->gimmick.triggerSpriteId].tBattler = battler;
    gSprites[gBattleStruct->gimmick.triggerSpriteId].tHide = FALSE;

    ChangeGimmickTriggerSprite(gBattleStruct->gimmick.triggerSpriteId, 0);
}

bool32 IsGimmickTriggerSpriteActive(void)
{
    if (GetSpriteTileStartByTag(TAG_GIMMICK_TRIGGER_TILE) == 0xFFFF)
        return FALSE;
    else if (IndexOfSpritePaletteTag(TAG_GIMMICK_TRIGGER_PAL) != 0xFF)
        return TRUE;
    else
        return FALSE;
}

void HideGimmickTriggerSprite(void)
{
    if (gBattleStruct->gimmick.triggerSpriteId != 0xFF)
    {
        ChangeGimmickTriggerSprite(gBattleStruct->gimmick.triggerSpriteId, 0);
        gSprites[gBattleStruct->gimmick.triggerSpriteId].tHide = TRUE;
    }
}

void DestroyGimmickTriggerSprite(void)
{
    FreeSpritePaletteByTag(TAG_GIMMICK_TRIGGER_PAL);
    FreeSpriteTilesByTag(TAG_GIMMICK_TRIGGER_TILE);
    if (gBattleStruct->gimmick.triggerSpriteId != 0xFF)
        DestroySprite(&gSprites[gBattleStruct->gimmick.triggerSpriteId]);
    gBattleStruct->gimmick.triggerSpriteId = 0xFF;
}

static void SpriteCb_GimmickTrigger(struct Sprite *sprite)
{
    s32 xSlide, xPriority, xOptimal;
    s32 yDiff;
    s32 xHealthbox = gSprites[gHealthboxSpriteIds[sprite->tBattler]].x;

    if (IsDoubleBattle())
    {
        xSlide = DOUBLES_GIMMICK_TRIGGER_POS_X_SLIDE;
        xPriority = DOUBLES_GIMMICK_TRIGGER_POS_X_PRIORITY;
        xOptimal = DOUBLES_GIMMICK_TRIGGER_POS_X_OPTIMAL;
        yDiff = DOUBLES_GIMMICK_TRIGGER_POS_Y_DIFF;
    }
    else
    {
        xSlide = SINGLES_GIMMICK_TRIGGER_POS_X_SLIDE;
        xPriority = SINGLES_GIMMICK_TRIGGER_POS_X_PRIORITY;
        xOptimal = SINGLES_GIMMICK_TRIGGER_POS_X_OPTIMAL;
        yDiff = SINGLES_GIMMICK_TRIGGER_POS_Y_DIFF;
    }

    if (sprite->tHide)
    {
        if (sprite->x < xHealthbox - xSlide)
            sprite->x++;

        if (sprite->x >= xHealthbox - xPriority - 6)
            sprite->oam.priority = 2;
        else
            sprite->oam.priority = 1;

        sprite->y = gSprites[gHealthboxSpriteIds[sprite->tBattler]].y - yDiff;
        sprite->y2 = gSprites[gHealthboxSpriteIds[sprite->tBattler]].y2 - yDiff;
        if (sprite->x == xHealthbox - xSlide)
            DestroyGimmickTriggerSprite();
    }
    else
    {
        // Edge case: in doubles, if selecting move and next mon's action too fast, the second battler's gimmick icon uses the x from the first battler's gimmick icon
        if (sprite->y != gSprites[gHealthboxSpriteIds[sprite->tBattler]].y - yDiff)
            sprite->x = xHealthbox - xSlide;

        if (sprite->x > xHealthbox - xOptimal - 6)
            sprite->x--;

        if (sprite->x >= xHealthbox - xPriority - 6)
            sprite->oam.priority = 2;
        else
            sprite->oam.priority = 1;

        sprite->y = gSprites[gHealthboxSpriteIds[sprite->tBattler]].y - yDiff;
        sprite->y2 = gSprites[gHealthboxSpriteIds[sprite->tBattler]].y2 - yDiff;
    }
}

#undef tBattler
#undef tHide

// for sprite data fields
#define tBattler        data[0]
#define tPosX           data[2]
#define tLevelXDelta    data[3] // X position depends whether level has 3, 2 or 1 digit

// data fields for healthboxMain
// oam.affineParam holds healthboxRight spriteId
#define hMain_Battler               data[6]

void LoadIndicatorSpritesGfx(void)
{
    LoadSpritePalette(&sSpritePalette_MiscIndicator);
    LoadSpritePalette(&sSpritePalette_MegaIndicator);
    LoadSpritePalette(&sSpritePalette_TeraIndicator);
}

static void SpriteCb_GimmickIndicator(struct Sprite *sprite)
{
    u32 battler = sprite->tBattler;

    sprite->x = gSprites[gHealthboxSpriteIds[battler]].x + sprite->tPosX + sprite->tLevelXDelta;
    sprite->x2 = gSprites[gHealthboxSpriteIds[battler]].x2;
    sprite->y2 = gSprites[gHealthboxSpriteIds[battler]].y2;
}

static inline u32 GetIndicatorSpriteId(u32 healthboxId)
{
    return gBattleStruct->gimmick.indicatorSpriteId[gSprites[healthboxId].hMain_Battler];
}

const u32 *GetIndicatorSpriteSrc(u32 battler)
{
    u32 gimmick = GetActiveGimmick(battler);

    if (IsBattlerPrimalReverted(battler))
    {
        if (gBattleMons[battler].species == SPECIES_GROUDON_PRIMAL)
            return (u32 *)&sOmegaIndicatorGfx;
        else
            return (u32 *)&sAlphaIndicatorGfx;
    }
    else if (gimmick == GIMMICK_TERA) // special case
    {
        return (u32 *)sTeraIndicatorDataPtrs[GetBattlerTeraType(battler)];
    }
    else if (gGimmicksInfo[gimmick].indicatorData != NULL)
    {
        return (u32 *)gGimmicksInfo[gimmick].indicatorData;
    }
    else
    {
        return NULL;
    }
}

u32 GetIndicatorPalTag(u32 battler)
{
    u32 gimmick = GetActiveGimmick(battler);
    if (IsBattlerPrimalReverted(battler))
        return TAG_MISC_INDICATOR_PAL;
    else if (gGimmicksInfo[gimmick].indicatorPalTag != 0)
        return gGimmicksInfo[gimmick].indicatorPalTag;
    else
        return TAG_NONE;
}

#define INDICATOR_SIZE (8 * 16 / 2)

void UpdateIndicatorVisibilityAndType(u32 healthboxId, bool32 invisible)
{
    u32 battler = gSprites[healthboxId].hMain_Battler;
    u32 palTag = GetIndicatorPalTag(battler);
    struct Sprite *sprite = &gSprites[GetIndicatorSpriteId(healthboxId)];

    if (GetIndicatorSpriteId(healthboxId) == 0) // safari zone means the player doesn't have an indicator sprite id
        return;

    if (palTag != TAG_NONE)
    {
        sprite->oam.paletteNum = IndexOfSpritePaletteTag(palTag);
        sprite->invisible = invisible;

        u32 *dst = (u32 *)(OBJ_VRAM0 + TILE_SIZE_4BPP * GetSpriteTileStartByTag(BATTLER_INDICATOR_TAG + battler));

        const u32 *src = GetIndicatorSpriteSrc(battler);

        for (u32 i = 0; i < INDICATOR_SIZE / 4; i++)
            dst[i] = src[i];
    }
    else // in case of error
    {
        sprite->invisible = TRUE;
    }
}

#undef INDICATOR_SIZE

void UpdateIndicatorOamPriority(u32 healthboxId, u32 oamPriority)
{
    gSprites[GetIndicatorSpriteId(healthboxId)].oam.priority = oamPriority;
}

void UpdateIndicatorLevelData(u32 healthboxId, u32 level)
{
    s32 xDelta = 0;

    if (level >= 100)
        xDelta -= 4;
    else if (level < 10)
        xDelta += 5;

    gSprites[GetIndicatorSpriteId(healthboxId)].tLevelXDelta = xDelta;
}

static const s8 sIndicatorPositions[][2] =
{
    [B_POSITION_PLAYER_LEFT] = {49, -9},
    [B_POSITION_OPPONENT_LEFT] = {40, -9},
    [B_POSITION_PLAYER_RIGHT] = {48, -9},
    [B_POSITION_OPPONENT_RIGHT] = {40, -9},
};

void CreateIndicatorSprite(u32 battler)
{
    u32 position, spriteId;
    s16 xHealthbox = 0, x = 0, y = 0;

    position = GetBattlerPosition(battler);
    GetBattlerHealthboxCoords(battler, &xHealthbox, &y);

    x = sIndicatorPositions[position][0];
    y += sIndicatorPositions[position][1];

    LoadSpriteSheet(&sBattler_GimmickSpritesheets[battler]);
    spriteId = CreateSprite(&(sSpriteTemplate_BattlerIndicators[battler]), 0, y, 0);
    gBattleStruct->gimmick.indicatorSpriteId[battler] = spriteId;
    gSprites[spriteId].tBattler = battler;
    gSprites[spriteId].tPosX = x;
    gSprites[spriteId].invisible = FALSE;
}

#undef tBattler
#undef tPosX
#undef tLevelXDelta

#undef hMain_Battler
