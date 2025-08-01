#ifndef GUARD_ITEM_USE_H
#define GUARD_ITEM_USE_H

void ItemUseOutOfBattle_Mail(u8 taskId);
void ItemUseOutOfBattle_Bike(u8 taskId);
void ItemUseOutOfBattle_Rod(u8 taskId);
void ItemUseOutOfBattle_Itemfinder(u8 taskId);
void ItemUseOutOfBattle_PokeblockCase(u8 taskId);
void ItemUseOutOfBattle_CoinCase(u8 taskId);
void ItemUseOutOfBattle_PokemonBoxLink(u8 taskId);
void ItemUseOutOfBattle_PowderJar(u8 taskId);
void ItemUseOutOfBattle_SSTicket(u8 taskId);
void ItemUseOutOfBattle_WailmerPail(u8 taskId);
void ItemUseOutOfBattle_Medicine(u8 taskId);
void ItemUseOutOfBattle_AbilityCapsule(u8 taskId);
void ItemUseOutOfBattle_AbilityPatch(u8 taskId);
void ItemUseOutOfBattle_Mint(u8 taskId);
void ItemUseOutOfBattle_ResetEVs(u8 taskId);
void ItemUseOutOfBattle_ReduceEV(u8 taskId);
void ItemUseOutOfBattle_SacredAsh(u8 taskId);
void ItemUseOutOfBattle_PPRecovery(u8 taskId);
void ItemUseOutOfBattle_PPUp(u8 taskId);
void ItemUseOutOfBattle_RareCandy(u8 taskId);
void ItemUseOutOfBattle_DynamaxCandy(u8 taskId);
void ItemUseOutOfBattle_TMHM(u8 taskId);
void ItemUseOutOfBattle_Repel(u8 taskId);
void ItemUseOutOfBattle_Lure(u8 taskId);
void ItemUseOutOfBattle_EscapeRope(u8 taskId);
void ItemUseOutOfBattle_BlackWhiteFlute(u8 taskId);
void ItemUseOutOfBattle_EvolutionStone(u8 taskId);
void ItemUseOutOfBattle_Berry(u8 taskId);
void ItemUseOutOfBattle_EnigmaBerry(u8 taskId);
void ItemUseOutOfBattle_FormChange(u8 taskId);
void ItemUseOutOfBattle_FormChange_ConsumedOnUse(u8 taskId);
void ItemUseOutOfBattle_RotomCatalog(u8 taskId);
void ItemUseOutOfBattle_ZygardeCube(u8 taskId);
void ItemUseOutOfBattle_Fusion(u8 taskId);
void ItemUseOutOfBattle_Honey(u8 taskId);
void ItemUseOutOfBattle_CannotUse(u8 taskId);
void ItemUseOutOfBattle_ExpShare(u8 taskId);
void ItemUseInBattle_BagMenu(u8 taskId);
void ItemUseInBattle_PartyMenu(u8 taskId);
void ItemUseInBattle_PartyMenuChooseMove(u8 taskId);
void Task_UseDigEscapeRopeOnField(u8 taskId);
bool8 CanUseDigOrEscapeRopeOnCurMap(void);
u8 CheckIfItemIsTMHMOrEvolutionStone(u16 itemId);
void FieldUseFunc_VsSeeker(u8 taskId);
void Task_ItemUse_CloseMessageBoxAndReturnToField_VsSeeker(u8 taskId);
void DisplayDadsAdviceCannotUseItemMessage(u8 taskId, bool8 isUsingRegisteredKeyItemOnField);
void ItemUseOutOfBattle_PokeFlute(u8 taskId);
void ItemUseOutOfBattle_TownMap(u8 taskId);

//transform functions
void ItemUseOutOfBattle_FlyTransform(u8 taskId);
void ItemUseOutOfBattle_SurfTransform(u8 taskId);
void ItemUseOutOfBattle_StrengthTransform(u8 taskId);
void ItemUseOutOfBattle_DittoTransform(u8 taskId);
void ItemUseOutOfBattle_ShrinkTransform(u8 taskId);
void ItemUseOutOfBattle_MachBikeTransform(u8 taskId);
void ItemUseOutOfBattle_WaterfallTransform(u8 taskId);
void ItemUseOutOfBattle_DiveTransform(u8 taskId);
void ItemUseOutOfBattle_AcroBikeTransform(u8 taskId);
void ItemUseOutOfBattle_FlashTransform(u8 taskId);
void ItemUseOutOfBattle_CutTransform(u8 taskId);
void ItemUseOutOfBattle_RockSmashTransform(u8 taskId);
void ItemUseOnFieldCB_FlyTransform(u8 taskId);
void ItemUseOnFieldCB_SurfTransform(u8 taskId);
void ItemUseOnFieldCB_StrengthTransform(u8 taskId);
void ItemUseOnFieldCB_DittoTransform(u8 taskId);
void ItemUseOnFieldCB_ShrinkTransform(u8 taskId);
void ItemUseOnFieldCB_MachBikeTransform(u8 taskId);
void ItemUseOnFieldCB_WaterfallTransform(u8 taskId);
void ItemUseOnFieldCB_DiveTransform(u8 taskId);
void ItemUseOnFieldCB_AcroBikeTransform(u8 taskId);
void ItemUseOnFieldCB_FlashTransform(u8 taskId);
void ItemUseOnFieldCB_CutTransform(u8 taskId);
void ItemUseOnFieldCB_RockSmashTransform(u8 taskId);



enum {
    BALL_THROW_UNABLE_TWO_MONS,
    BALL_THROW_UNABLE_NO_ROOM,
    BALL_THROW_UNABLE_SEMI_INVULNERABLE,
    BALL_THROW_ABLE,
    BALL_THROW_UNABLE_DISABLED_FLAG,
};

bool32 CanThrowBall(void);
bool32 CannotUseItemsInBattle(u16 itemId, struct Pokemon *mon);

#endif // GUARD_ITEM_USE_H
