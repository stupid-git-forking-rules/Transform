#ifndef GUARD_TRANSFORM_H
#define GUARD_TRANSFORM_H

void TryCreatePokemonAvatarSpriteBob(void);
void Task_CreatePokemonAvatarBob(u8 taskId);
void Task_PokemonAvatar_HandleBob(u8 taskId);


u16 ReturnAvatarMugshotId(u16 avatarId);
u16 ReturnAvatarGraphicsId(u16 avatarId);
u16 ReturnAvatarTrainerFrontPicId(u16 avatarId);
u16 ReturnAvatarTrainerBackPicId(u16 avatarId);


enum {
    AVATAR_POKEMON_CHOICE,
};


#endif // GUARD_TRANSFORM_H