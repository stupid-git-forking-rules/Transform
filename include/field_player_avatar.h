#ifndef GUARD_FIELD_PLAYER_AVATAR_H
#define GUARD_FIELD_PLAYER_AVATAR_H

void PlayerStep(u8 direction, u16 newKeys, u16 heldKeys);
bool8 TryDoMetatileBehaviorForcedMovement();
void ClearPlayerAvatarInfo(void);
void SetPlayerAvatarExtraStateTransition(u16 graphicsId, u8 transitionFlag);
u8 GetPlayerAvatarGenderByGraphicsId(u16 gfxId);
u8 TestPlayerAvatarFlags(u8 flag);
u8 GetPlayerAvatarSpriteId(void);
void PlayerGetDestCoords(s16 *x, s16 *y);
u8 GetPlayerFacingDirection(void);
u8 GetPlayerMovementDirection(void);
u8 PlayerGetCopyableMovement(void);
void PlayerWalkNormal(u8 direction);
void PlayerWalkFast(u8 direction);
void PlayerRideWaterCurrent(u8 direction);
void PlayerWalkFaster(u8 direction);
void PlayerOnBikeCollide(u8 direction);
void PlayerFaceDirection(u8 direction);
void PlayerTurnInPlace(u8 direction);
void PlayerJumpLedge(u8 direction);
void PlayerIdleWheelie(u8 direction);
void PlayerStartWheelie(u8 direction);
void PlayerEndWheelie(u8 direction);
void PlayerStandingHoppingWheelie(u8 direction);
void PlayerMovingHoppingWheelie(u8 direction);
void PlayerLedgeHoppingWheelie(u8 direction);
void PlayerAcroTurnJump(u8 direction);
void PlayerSetAnimId(u8 movementActionId, u8 copyableMovement);
bool8 IsPlayerCollidingWithFarawayIslandMew(u8 direction);
void PlayerOnBikeCollideWithFarawayIslandMew(u8 direction);
u8 CheckForObjectEventCollision(struct ObjectEvent *objectEvent, s16 x, s16 y, u8 direction, u8 metatileBehavior);
bool8 TryPushBoulder(s16, s16, u8); //qol_field_moves
u8 PlayerGetElevation(void);
void SetPlayerAvatarTransitionFlags(u16 transitionFlags);
void CancelPlayerForcedMovement(void);
void InitPlayerAvatar(s16 x, s16 y, u8 direction, u8 gender);
void PlayerFreeze(void);
void StopPlayerAvatar(void);
void SetSpinStartFacingDir(u8 direction);
void GetXYCoordsOneStepInFrontOfPlayer(s16 *xPtr, s16 *yPtr);
u16 GetRivalAvatarGraphicsIdByStateIdAndGender(u8 state, u8 gender);
void SetPlayerAvatarFieldMove(void);
u16 GetPlayerAvatarGraphicsIdByCurrentState(void);
void SetPlayerAvatarStateMask(u8 flags);
u16 GetPlayerAvatarGraphicsIdByStateId(u8 state);
u8 GetJumpSpecialMovementAction(u32);
bool8 PartyHasMonWithSurf(void);
bool8 IsPlayerFacingSurfableFishableWater(void);
bool8 IsPlayerFacingSurfableFishableWater2(u8 collision);
bool8 IsPlayerSurfingNorth(void);
void SetPlayerAvatarWatering(u8 direction);
u8 GetPlayerAvatarFlags(void);
void UpdatePlayerAvatarTransitionState(void);
u16 GetFRLGAvatarGraphicsIdByGender(u8 gender);
u16 GetRSAvatarGraphicsIdByGender(u8 gender);
void PlayerWheelieInPlace(u8 direction);
void PlayerWheelieMove(u8 direction);
void PlayerPopWheelieWhileMoving(u8 direction);
void PlayerUseAcroBikeOnBumpySlope(u8 direction);
void PlayerEndWheelieWhileMoving(u8 direction);
void DoPlayerSpinEntrance(void);
void DoPlayerSpinExit(void);
bool32 IsPlayerSpinEntranceActive(void);
bool32 IsPlayerSpinExitActive(void);
void SetPlayerInvisibility(bool8 invisible);
u8 player_get_pos_including_state_based_drift(s16 *x, s16 *y);
void StartFishing(u8 rod);
void ForcePlayerToPerformMovementAction(void); // qol_field_moves
extern bool8 gRunToggleBtnSet; // added for the run toggle button
bool8 ObjectMovingOnRockStairs(struct ObjectEvent *objectEvent, u8 direction);
//sideways stairs
u8 GetRightSideStairsDirection(u8 direction);
u8 GetLeftSideStairsDirection(u8 direction);
void UpdateSpinData(void);
void ResetSpinTimer(void);
bool32 CanTriggerSpinEvolution();
void PlayerAvatarTransition_Normal(struct ObjectEvent *objectEvent);


#endif // GUARD_FIELD_PLAYER_AVATAR_H
