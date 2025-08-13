DaycareTreehouse_MapScripts::
	.byte 0


GrovyleDialog::
# 6 "data/maps/DaycareTreehouse/scripts.pory"
	lock
# 7 "data/maps/DaycareTreehouse/scripts.pory"
	faceplayer
# 8 "data/maps/DaycareTreehouse/scripts.pory"
	speakername GrovyleDialog_Text_0
# 9 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox GrovyleDialog_Text_1, MSGBOX_DEFAULT
# 10 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 11 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end


BattleVsWeavile::
# 17 "data/maps/DaycareTreehouse/scripts.pory"
	goto_if_set FLAG_TRANS_WEAVILE, BattleVsWeavile_2
# 21 "data/maps/DaycareTreehouse/scripts.pory"
	goto_if_unset FLAG_TRANS_ARCANINE, BattleVsWeavile_3
# 47 "data/maps/DaycareTreehouse/scripts.pory"
	lock
# 48 "data/maps/DaycareTreehouse/scripts.pory"
	playmoncry SPECIES_WEAVILE, CRY_MODE_NORMAL
# 49 "data/maps/DaycareTreehouse/scripts.pory"
	waitmoncry
# 50 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 51 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 52 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_0
# 53 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 54 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_1
# 55 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 56 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_2
# 57 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 58 "data/maps/DaycareTreehouse/scripts.pory"
	playse SE_M_SCRATCH
# 59 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_3
# 60 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 61 "data/maps/DaycareTreehouse/scripts.pory"
	speakername BattleVsWeavile_Text_0
# 62 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox BattleVsWeavile_Text_2, MSGBOX_AUTOCLOSE
# 63 "data/maps/DaycareTreehouse/scripts.pory"
	setwildbattle SPECIES_WEAVILE, 25
# 64 "data/maps/DaycareTreehouse/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 65 "data/maps/DaycareTreehouse/scripts.pory"
	dowildbattle
# 66 "data/maps/DaycareTreehouse/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 67 "data/maps/DaycareTreehouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsWeavile_6
	return

BattleVsWeavile_2:
	end

BattleVsWeavile_3:
# 23 "data/maps/DaycareTreehouse/scripts.pory"
	lock
# 24 "data/maps/DaycareTreehouse/scripts.pory"
	playmoncry SPECIES_WEAVILE, CRY_MODE_NORMAL
# 25 "data/maps/DaycareTreehouse/scripts.pory"
	waitmoncry
# 26 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 27 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 28 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_0
# 29 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 30 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_1
# 31 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 32 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_2
# 33 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 34 "data/maps/DaycareTreehouse/scripts.pory"
	playse SE_M_SCRATCH
# 35 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_3
# 36 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 37 "data/maps/DaycareTreehouse/scripts.pory"
	speakername BattleVsWeavile_Text_0
# 38 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox BattleVsWeavile_Text_1, MSGBOX_DEFAULT
# 39 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 40 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_4
# 41 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 42 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_5
# 43 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 44 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

BattleVsWeavile_6:
# 69 "data/maps/DaycareTreehouse/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 70 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_TRANS_WEAVILE
# 71 "data/maps/DaycareTreehouse/scripts.pory"
	dittotransform SPECIES_WEAVILE
# 72 "data/maps/DaycareTreehouse/scripts.pory"
	playse MUS_LEVEL_UP
# 73 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox BattleVsWeavile_Text_3, MSGBOX_DEFAULT
# 74 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 75 "data/maps/DaycareTreehouse/scripts.pory"
	dittotransform VAR_TEMP_0
# 76 "data/maps/DaycareTreehouse/scripts.pory"
	givemon SPECIES_WEAVILE, 25, move1 = MOVE_ICE_SHARD, move2 = MOVE_ICE_PUNCH, move3 = MOVE_SHADOW_CLAW, move4 = MOVE_BRICK_BREAK
# 77 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 78 "data/maps/DaycareTreehouse/scripts.pory"
	speakername BattleVsWeavile_Text_0
# 79 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox BattleVsWeavile_Text_4, MSGBOX_DEFAULT
# 80 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 81 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_4
# 82 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 83 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_5
# 84 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 85 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end


ChanseyDaycareTreehouseHeal::
# 91 "data/maps/DaycareTreehouse/scripts.pory"
	lock
# 92 "data/maps/DaycareTreehouse/scripts.pory"
	faceplayer
# 93 "data/maps/DaycareTreehouse/scripts.pory"
	speakername ChanseyDaycareTreehouseHeal_Text_0
# 94 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox ChanseyDaycareTreehouseHeal_Text_1, MSGBOX_YESNO
# 95 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 96 "data/maps/DaycareTreehouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyDaycareTreehouseHeal_1
# 122 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox ChanseyDaycareTreehouseHeal_Text_4, MSGBOX_AUTOCLOSE
# 123 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 124 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

ChanseyDaycareTreehouseHeal_1:
# 98 "data/maps/DaycareTreehouse/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 99 "data/maps/DaycareTreehouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyDaycareTreehouseHeal_4
# 114 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox ChanseyDaycareTreehouseHeal_Text_3, MSGBOX_AUTOCLOSE
# 115 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 116 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

ChanseyDaycareTreehouseHeal_4:
# 101 "data/maps/DaycareTreehouse/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 102 "data/maps/DaycareTreehouse/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 103 "data/maps/DaycareTreehouse/scripts.pory"
	playfanfare MUS_HEAL
# 104 "data/maps/DaycareTreehouse/scripts.pory"
	waitfanfare
# 105 "data/maps/DaycareTreehouse/scripts.pory"
	special HealPlayerParty
# 106 "data/maps/DaycareTreehouse/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 107 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox ChanseyDaycareTreehouseHeal_Text_2, MSGBOX_AUTOCLOSE
# 108 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 109 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end


DaycareTreehouseDittoOpenXforms::
# 131 "data/maps/DaycareTreehouse/scripts.pory"
	lock
# 132 "data/maps/DaycareTreehouse/scripts.pory"
	faceplayer
# 133 "data/maps/DaycareTreehouse/scripts.pory"
	goto_if_set FLAG_XFORMS_TALKED_TO_DITTO, DaycareTreehouseDittoOpenXforms_1
# 154 "data/maps/DaycareTreehouse/scripts.pory"
	speakername DaycareTreehouseDittoOpenXforms_Text_0
# 155 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_3, MSGBOX_DEFAULT
# 155 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 156 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_XFORMS_TALKED_TO_DITTO
# 157 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_1, MSGBOX_YESNO
# 158 "data/maps/DaycareTreehouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareTreehouseDittoOpenXforms_7
# 169 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 170 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 171 "data/maps/DaycareTreehouse/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 172 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 173 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

DaycareTreehouseDittoOpenXforms_1:
# 135 "data/maps/DaycareTreehouse/scripts.pory"
	speakername DaycareTreehouseDittoOpenXforms_Text_0
# 136 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_1, MSGBOX_YESNO
# 137 "data/maps/DaycareTreehouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareTreehouseDittoOpenXforms_4
# 146 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 147 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 148 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

DaycareTreehouseDittoOpenXforms_4:
# 139 "data/maps/DaycareTreehouse/scripts.pory"
	special OpenPCMoveMons
# 140 "data/maps/DaycareTreehouse/scripts.pory"
	waitstate
# 141 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

DaycareTreehouseDittoOpenXforms_7:
# 160 "data/maps/DaycareTreehouse/scripts.pory"
	special OpenPCMoveMons
# 161 "data/maps/DaycareTreehouse/scripts.pory"
	waitstate
# 162 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 163 "data/maps/DaycareTreehouse/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 164 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end


# 28 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_0:
# 28 "data/maps/DaycareTreehouse/scripts.pory"
	face_up
	step_end

# 30 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_1:
# 30 "data/maps/DaycareTreehouse/scripts.pory"
	lock_facing_direction
	step_end

# 32 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_2:
# 32 "data/maps/DaycareTreehouse/scripts.pory"
	walk_fast_down
	step_end

# 35 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_3:
# 35 "data/maps/DaycareTreehouse/scripts.pory"
	jump_2_down
	step_end

# 40 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_4:
# 40 "data/maps/DaycareTreehouse/scripts.pory"
	walk_fast_up
# 40 "data/maps/DaycareTreehouse/scripts.pory"
	walk_fast_up
	step_end

# 42 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_5:
# 42 "data/maps/DaycareTreehouse/scripts.pory"
	walk_in_place_down
	step_end

GrovyleDialog_Text_0:
# 8 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Grovyle$"

GrovyleDialog_Text_1:
# 9 "data/maps/DaycareTreehouse/scripts.pory"
	.string "A lot of us here in the Jungle\nbiome are very agile, but none\lare quite as shifty as Weavile.\pHe is particular about who he\nchallenges to battle so don't\lbe surprised if he turns you\laway.$"

BattleVsWeavile_Text_0:
# 37 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Weavile$"

BattleVsWeavile_Text_1:
# 38 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You want to challenge me?\pNot a chance weakling.\pCcme back when you can keep up...\nor don't come back at all.$"

BattleVsWeavile_Text_2:
# 62 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You look quick.\pNow we're talking.\pLet's see if you're fast or just\nflashy.$"

BattleVsWeavile_Text_3:
# 73 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You have gained the ability to\ntransform into Weavile!$"

BattleVsWeavile_Text_4:
# 79 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Godspeed challenger.\n$"

ChanseyDaycareTreehouseHeal_Text_0:
# 93 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Chansey$"

ChanseyDaycareTreehouseHeal_Text_1:
# 94 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.\pWould you like to heal?$"

ChanseyDaycareTreehouseHeal_Text_2:
# 107 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyDaycareTreehouseHeal_Text_3:
# 114 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyDaycareTreehouseHeal_Text_4:
# 122 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Oh, okay then.$"

DaycareTreehouseDittoOpenXforms_Text_0:
# 135 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Ditto$"

DaycareTreehouseDittoOpenXforms_Text_1:
# 136 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Would you like to change out your\ntransformation options?$"

DaycareTreehouseDittoOpenXforms_Text_2:
# 146 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Come back anytime!$"

DaycareTreehouseDittoOpenXforms_Text_3:
# 155 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Ditto!\pYou can only remember four\ntransformations at a time.\pWe Dittos can act as a way to\nswap out which transformations\lyou have active at anytime!\pYou'll find us scattered around\nthe Daycare.\pNow...\n$"
