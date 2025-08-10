#ifndef GUARD_TRANSFORM_H
#define GUARD_TRANSFORM_H

bool32 PlayerIsDitto(void);
void BeginPlayerTransformEffect(u8 type);
u16 GetValidTransformationSpeciesFromParty(u8 partyId);
u8 BlitTransformationIconToWindow(u16 speciesId, u8 windowId, u16 x, u16 y, void *paletteDest);

void TryCreatePokemonAvatarSpriteBob(void);
void Task_CreatePokemonAvatarBob(u8 taskId);
void Task_PokemonAvatar_HandleBob(u8 taskId);
void UpdatePlayerTransformAnimation(u8 taskId);

u16 ReturnAvatarMugshotId(u16 avatarId);
u16 ReturnAvatarGraphicsId(u16 avatarId);
u16 ReturnAvatarTrainerFrontPicId(u16 avatarId);
u16 ReturnAvatarTrainerBackPicId(u16 avatarId);

typedef void (*TransformFunc)(u8);

void SetPlayerAvatarTransformation(u16 speciesId);
void TrySetPlayerAvatarTransformation(u16 speciesId);
TransformFunc GetTransformationFunc(u16 speciesId);

#define TRANSFORM_TYPE_PLAYER_SPECIES 1

extern EWRAM_DATA u8 gPlayerTransformEffectActive;

enum {
    AVATAR_POKEMON_CHOICE,
};

struct Transformation
{
    TransformFunc fieldUseFunc;
    u8 name[ITEM_NAME_LENGTH];
    const u32 *iconPic;
    const u16 *iconPalette;
    u16 battleSpecies;
    u16 ability;
    u16 moves[4];
};


#endif // GUARD_TRANSFORM_H