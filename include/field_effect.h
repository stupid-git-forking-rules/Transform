#ifndef GUARD_FIELD_EFFECTS_H
#define GUARD_FIELD_EFFECTS_H

extern const struct SpritePalette gNewGameBirchObjectPaletteInfo;
extern const struct SpriteTemplate gNewGameBirchObjectTemplate;
extern const struct OamData gNewGameBirchOamAttributes;

extern s32 gFieldEffectArguments[8];
extern void (*gPostMenuFieldCallback)(void);
extern bool8 (*gFieldCallback2)(void);

u32 FieldEffectStart(u8 id);
bool8 FieldEffectActiveListContains(u8 id);
void FieldEffectActiveListClear(void);
void ReturnToFieldFromFlyMapSelect(void);
void FieldCallback_UseFly(void);
u8 AddNewGameBirchObject(s16 x, s16 y, u8 subpriority);
void FieldEffectStop(struct Sprite *sprite, u8 id);
u8 CreateTrainerSprite(u8 trainerSpriteID, s16 x, s16 y, u8 subpriority, u8 *buffer);
void FldEff_TeleportWarpOut(void);
void FieldEffectActiveListRemove(u8 id);
void MultiplyInvertedPaletteRGBComponents(u16 i, u8 r, u8 g, u8 b);
void FieldEffectActiveListAdd(u8 id);
void FieldEffectScript_LoadTiles(u8 **script);
void FieldEffectScript_LoadFadedPalette(u8 **script);
void FieldEffectScript_LoadPalette(u8 **script);
void FieldEffectScript_CallNative(u8 **script, u32 *val);
void FieldEffectFreeGraphicsResources(struct Sprite *sprite);
void FieldEffectFreeTilesIfUnused(u16 tileStart);
void FieldEffectFreePaletteIfUnused(u8 paletteNum);
bool8 FieldEffectCmd_loadtiles(u8 **script, u32 *val);
bool8 FieldEffectCmd_loadfadedpal(u8 **script, u32 *val);
bool8 FieldEffectCmd_loadpal(u8 **script, u32 *val);
bool8 FieldEffectCmd_callnative(u8 **script, u32 *val);
bool8 FieldEffectCmd_end(u8 **script, u32 *val);
bool8 FieldEffectCmd_loadgfx_callnative(u8 **script, u32 *val);
bool8 FieldEffectCmd_loadtiles_callnative(u8 **script, u32 *val);
bool8 FieldEffectCmd_loadfadedpal_callnative(u8 **script, u32 *val);
void FieldCB_FallWarpExit(void);
void StartEscalatorWarp(u8 metatileBehavior, u8 priority);
void StartLavaridgeGymB1FWarp(u8 priority);
void StartLavaridgeGym1FWarp(u8 priority);

void SpriteCB_AshPuff(struct Sprite *sprite);
void SpriteCB_AshLaunch(struct Sprite *sprite);

void MultiplyPaletteRGBComponents(u16 i, u8 r, u8 g, u8 b);
void FreeResourcesAndDestroySprite(struct Sprite *sprite, u8 spriteId);
u8 CreateMonSprite_PicBox(u16 species, s16 x, s16 y, u8 subpriority);
void StartEscapeRopeFieldEffect(void);
void FieldEffectFreeGraphicsResources(struct Sprite *sprite);


// Start qol_field_moves
#include "task.h"

void Task_SurfFieldEffect(u8);
void SurfFieldEffect_Init(struct Task *);
void SurfFieldEffect_JumpOnSurfBlob(struct Task *);
void SurfFieldEffect_End(struct Task *);

bool8 WaterfallFieldEffect_Init(struct Task *task, struct ObjectEvent *objectEvent);
bool8 WaterfallFieldEffect_RideUp(struct Task *task, struct ObjectEvent *objectEvent);
bool8 WaterfallFieldEffect_ContinueRideOrEnd(struct Task *task, struct ObjectEvent *objectEvent);
void Task_UseWaterfall(u8);

void Task_UseDive(u8);
bool8 DiveFieldEffect_Init(struct Task *);
bool8 DiveFieldEffect_TryWarp(struct Task *);
// End qol_field_moves

#endif // GUARD_FIELD_EFFECTS_H
