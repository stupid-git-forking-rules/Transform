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
# 50 "data/maps/DaycareTreehouse/scripts.pory"
	lock
# 51 "data/maps/DaycareTreehouse/scripts.pory"
	playbgm MUS_NONE, FALSE
# 52 "data/maps/DaycareTreehouse/scripts.pory"
	playmoncry SPECIES_WEAVILE, CRY_MODE_NORMAL
# 53 "data/maps/DaycareTreehouse/scripts.pory"
	waitmoncry
# 54 "data/maps/DaycareTreehouse/scripts.pory"
	playse SE_PIN
# 55 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 56 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 57 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_0
# 58 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 59 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_1
# 60 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 61 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_2
# 62 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 63 "data/maps/DaycareTreehouse/scripts.pory"
	playse SE_M_SCRATCH
# 64 "data/maps/DaycareTreehouse/scripts.pory"
	waitse
# 65 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_3
# 66 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 67 "data/maps/DaycareTreehouse/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 68 "data/maps/DaycareTreehouse/scripts.pory"
	speakername BattleVsWeavile_Text_0
# 69 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox BattleVsWeavile_Text_2, MSGBOX_AUTOCLOSE
# 70 "data/maps/DaycareTreehouse/scripts.pory"
	setwildbattle SPECIES_WEAVILE, 25
# 71 "data/maps/DaycareTreehouse/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 72 "data/maps/DaycareTreehouse/scripts.pory"
	dowildbattle
# 73 "data/maps/DaycareTreehouse/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 74 "data/maps/DaycareTreehouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsWeavile_6
	return

BattleVsWeavile_2:
	end

BattleVsWeavile_3:
# 23 "data/maps/DaycareTreehouse/scripts.pory"
	lock
# 24 "data/maps/DaycareTreehouse/scripts.pory"
	playbgm MUS_NONE, FALSE
# 25 "data/maps/DaycareTreehouse/scripts.pory"
	playmoncry SPECIES_WEAVILE, CRY_MODE_NORMAL
# 26 "data/maps/DaycareTreehouse/scripts.pory"
	waitmoncry
# 27 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 28 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 29 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_0
# 30 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 31 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_1
# 32 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 33 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_2
# 34 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 35 "data/maps/DaycareTreehouse/scripts.pory"
	playse SE_M_SCRATCH
# 36 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_3
# 37 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 38 "data/maps/DaycareTreehouse/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 39 "data/maps/DaycareTreehouse/scripts.pory"
	speakername BattleVsWeavile_Text_0
# 40 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox BattleVsWeavile_Text_1, MSGBOX_DEFAULT
# 41 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 42 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_4
# 43 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 44 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_5
# 45 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 46 "data/maps/DaycareTreehouse/scripts.pory"
	playbgm MUS_PMD_JUNGLE, FALSE
# 47 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

BattleVsWeavile_6:
# 76 "data/maps/DaycareTreehouse/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 77 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_TRANS_WEAVILE
# 78 "data/maps/DaycareTreehouse/scripts.pory"
	dittotransform SPECIES_WEAVILE
# 79 "data/maps/DaycareTreehouse/scripts.pory"
	playse MUS_LEVEL_UP
# 80 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox BattleVsWeavile_Text_3, MSGBOX_DEFAULT
# 81 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 82 "data/maps/DaycareTreehouse/scripts.pory"
	dittotransform VAR_TEMP_0
# 83 "data/maps/DaycareTreehouse/scripts.pory"
	givemon SPECIES_WEAVILE, 25, move1 = MOVE_ICE_SHARD, move2 = MOVE_ICE_PUNCH, move3 = MOVE_SHADOW_CLAW, move4 = MOVE_BRICK_BREAK
# 84 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 85 "data/maps/DaycareTreehouse/scripts.pory"
	speakername BattleVsWeavile_Text_0
# 86 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox BattleVsWeavile_Text_4, MSGBOX_DEFAULT
# 87 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 88 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_4
# 89 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 90 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_5
# 91 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 92 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end


ChanseyDaycareTreehouseHeal::
# 98 "data/maps/DaycareTreehouse/scripts.pory"
	lock
# 99 "data/maps/DaycareTreehouse/scripts.pory"
	faceplayer
# 100 "data/maps/DaycareTreehouse/scripts.pory"
	speakername ChanseyDaycareTreehouseHeal_Text_0
# 101 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox ChanseyDaycareTreehouseHeal_Text_1, MSGBOX_YESNO
# 102 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 103 "data/maps/DaycareTreehouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyDaycareTreehouseHeal_1
# 129 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox ChanseyDaycareTreehouseHeal_Text_4, MSGBOX_AUTOCLOSE
# 130 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 131 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

ChanseyDaycareTreehouseHeal_1:
# 105 "data/maps/DaycareTreehouse/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 106 "data/maps/DaycareTreehouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyDaycareTreehouseHeal_4
# 121 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox ChanseyDaycareTreehouseHeal_Text_3, MSGBOX_AUTOCLOSE
# 122 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 123 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

ChanseyDaycareTreehouseHeal_4:
# 108 "data/maps/DaycareTreehouse/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 109 "data/maps/DaycareTreehouse/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 110 "data/maps/DaycareTreehouse/scripts.pory"
	playfanfare MUS_HEAL
# 111 "data/maps/DaycareTreehouse/scripts.pory"
	waitfanfare
# 112 "data/maps/DaycareTreehouse/scripts.pory"
	special HealPlayerParty
# 113 "data/maps/DaycareTreehouse/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 114 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox ChanseyDaycareTreehouseHeal_Text_2, MSGBOX_AUTOCLOSE
# 115 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 116 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end


DaycareTreehouseDittoOpenXforms::
# 138 "data/maps/DaycareTreehouse/scripts.pory"
	lock
# 139 "data/maps/DaycareTreehouse/scripts.pory"
	faceplayer
# 140 "data/maps/DaycareTreehouse/scripts.pory"
	goto_if_set FLAG_XFORMS_TALKED_TO_DITTO, DaycareTreehouseDittoOpenXforms_1
# 161 "data/maps/DaycareTreehouse/scripts.pory"
	speakername DaycareTreehouseDittoOpenXforms_Text_0
# 162 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_3, MSGBOX_DEFAULT
# 162 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 163 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_XFORMS_TALKED_TO_DITTO
# 164 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_1, MSGBOX_YESNO
# 165 "data/maps/DaycareTreehouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareTreehouseDittoOpenXforms_7
# 176 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 177 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 178 "data/maps/DaycareTreehouse/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 179 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 180 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

DaycareTreehouseDittoOpenXforms_1:
# 142 "data/maps/DaycareTreehouse/scripts.pory"
	speakername DaycareTreehouseDittoOpenXforms_Text_0
# 143 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_1, MSGBOX_YESNO
# 144 "data/maps/DaycareTreehouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareTreehouseDittoOpenXforms_4
# 153 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 154 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 155 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

DaycareTreehouseDittoOpenXforms_4:
# 146 "data/maps/DaycareTreehouse/scripts.pory"
	special OpenPCMoveMons
# 147 "data/maps/DaycareTreehouse/scripts.pory"
	waitstate
# 148 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

DaycareTreehouseDittoOpenXforms_7:
# 167 "data/maps/DaycareTreehouse/scripts.pory"
	special OpenPCMoveMons
# 168 "data/maps/DaycareTreehouse/scripts.pory"
	waitstate
# 169 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 170 "data/maps/DaycareTreehouse/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 171 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end


# 29 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_0:
# 29 "data/maps/DaycareTreehouse/scripts.pory"
	face_up
	step_end

# 31 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_1:
# 31 "data/maps/DaycareTreehouse/scripts.pory"
	lock_facing_direction
	step_end

# 33 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_2:
# 33 "data/maps/DaycareTreehouse/scripts.pory"
	walk_fast_down
	step_end

# 36 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_3:
# 36 "data/maps/DaycareTreehouse/scripts.pory"
	jump_2_down
	step_end

# 42 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_4:
# 42 "data/maps/DaycareTreehouse/scripts.pory"
	walk_fast_up
# 42 "data/maps/DaycareTreehouse/scripts.pory"
	walk_fast_up
	step_end

# 44 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_5:
# 44 "data/maps/DaycareTreehouse/scripts.pory"
	walk_in_place_down
	step_end

GrovyleDialog_Text_0:
# 8 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Grovyle$"

GrovyleDialog_Text_1:
# 9 "data/maps/DaycareTreehouse/scripts.pory"
	.string "A lot of us here in the Jungle\nbiome are very agile, but none\lare quite as shifty as Weavile.\pHe is particular about who he\nchallenges to battle so don't\lbe surprised if he turns you\laway.$"

BattleVsWeavile_Text_0:
# 39 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Weavile$"

BattleVsWeavile_Text_1:
# 40 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You want to challenge me?\pNot a chance weakling.\pCcme back when you can keep up...\nor don't come back at all.$"

BattleVsWeavile_Text_2:
# 69 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You look quick.\pNow we're talking.\pLet's see if you're fast or just\nflashy.$"

BattleVsWeavile_Text_3:
# 80 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You have gained the ability to\ntransform into Weavile!$"

BattleVsWeavile_Text_4:
# 86 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Godspeed challenger.\n$"

ChanseyDaycareTreehouseHeal_Text_0:
# 100 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Chansey$"

ChanseyDaycareTreehouseHeal_Text_1:
# 101 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.\pWould you like to heal?$"

ChanseyDaycareTreehouseHeal_Text_2:
# 114 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyDaycareTreehouseHeal_Text_3:
# 121 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyDaycareTreehouseHeal_Text_4:
# 129 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Oh, okay then.$"

DaycareTreehouseDittoOpenXforms_Text_0:
# 142 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Ditto$"

DaycareTreehouseDittoOpenXforms_Text_1:
# 143 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Would you like to change out your\ntransformation options?$"

DaycareTreehouseDittoOpenXforms_Text_2:
# 153 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Come back anytime!$"

DaycareTreehouseDittoOpenXforms_Text_3:
# 162 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Ditto!\pYou can only remember four\ntransformations at a time.\pWe Dittos can act as a way to\nswap out which transformations\lyou have active at anytime!\pYou'll find us scattered around\nthe Daycare.\pNow...\n$"
