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
	createfieldmugshot MUGSHOT_GROVYLE, EMOTE_NORMAL
# 10 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox GrovyleDialog_Text_1, MSGBOX_DEFAULT
# 11 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 12 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 13 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end


BattleVsWeavile::
# 19 "data/maps/DaycareTreehouse/scripts.pory"
	goto_if_set FLAG_TRANS_WEAVILE, BattleVsWeavile_2
# 23 "data/maps/DaycareTreehouse/scripts.pory"
	goto_if_unset FLAG_TRANS_ARCANINE, BattleVsWeavile_3
# 54 "data/maps/DaycareTreehouse/scripts.pory"
	lock
# 55 "data/maps/DaycareTreehouse/scripts.pory"
	playbgm MUS_NONE, FALSE
# 56 "data/maps/DaycareTreehouse/scripts.pory"
	playmoncry SPECIES_WEAVILE, CRY_MODE_NORMAL
# 57 "data/maps/DaycareTreehouse/scripts.pory"
	waitmoncry
# 58 "data/maps/DaycareTreehouse/scripts.pory"
	playse SE_PIN
# 59 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 60 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 61 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_0
# 62 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 63 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_1
# 64 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 65 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_2
# 66 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 67 "data/maps/DaycareTreehouse/scripts.pory"
	playse SE_M_SCRATCH
# 68 "data/maps/DaycareTreehouse/scripts.pory"
	waitse
# 69 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_3
# 70 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 71 "data/maps/DaycareTreehouse/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 72 "data/maps/DaycareTreehouse/scripts.pory"
	speakername BattleVsWeavile_Text_0
# 73 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_WEAVILE, EMOTE_ANGRY
# 74 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox BattleVsWeavile_Text_2, MSGBOX_AUTOCLOSE
# 75 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 76 "data/maps/DaycareTreehouse/scripts.pory"
	setwildbattle SPECIES_WEAVILE, 25
# 77 "data/maps/DaycareTreehouse/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 78 "data/maps/DaycareTreehouse/scripts.pory"
	dowildbattle
# 79 "data/maps/DaycareTreehouse/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 80 "data/maps/DaycareTreehouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsWeavile_6
	return

BattleVsWeavile_2:
	end

BattleVsWeavile_3:
# 25 "data/maps/DaycareTreehouse/scripts.pory"
	lock
# 26 "data/maps/DaycareTreehouse/scripts.pory"
	playbgm MUS_NONE, FALSE
# 27 "data/maps/DaycareTreehouse/scripts.pory"
	playmoncry SPECIES_WEAVILE, CRY_MODE_NORMAL
# 28 "data/maps/DaycareTreehouse/scripts.pory"
	waitmoncry
# 29 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 30 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 31 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_0
# 32 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 33 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_1
# 34 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 35 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_2
# 36 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 37 "data/maps/DaycareTreehouse/scripts.pory"
	playse SE_M_SCRATCH
# 38 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_3
# 39 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 40 "data/maps/DaycareTreehouse/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 41 "data/maps/DaycareTreehouse/scripts.pory"
	speakername BattleVsWeavile_Text_0
# 42 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_WEAVILE, EMOTE_ANGRY
# 43 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox BattleVsWeavile_Text_1, MSGBOX_AUTOCLOSE
# 44 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 45 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 46 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_4
# 47 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 48 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_5
# 49 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 50 "data/maps/DaycareTreehouse/scripts.pory"
	fadenewbgm MUS_PMD_JUNGLE
# 51 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

BattleVsWeavile_6:
# 82 "data/maps/DaycareTreehouse/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 83 "data/maps/DaycareTreehouse/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 84 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_TRANS_WEAVILE
# 85 "data/maps/DaycareTreehouse/scripts.pory"
	dittotransform SPECIES_WEAVILE
# 86 "data/maps/DaycareTreehouse/scripts.pory"
	playse MUS_LEVEL_UP
# 87 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox BattleVsWeavile_Text_3, MSGBOX_DEFAULT
# 88 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 89 "data/maps/DaycareTreehouse/scripts.pory"
	dittotransform VAR_TEMP_0
# 90 "data/maps/DaycareTreehouse/scripts.pory"
	givemon SPECIES_WEAVILE, 25, move1 = MOVE_ICE_SHARD, move2 = MOVE_ICE_PUNCH, move3 = MOVE_SHADOW_CLAW, move4 = MOVE_BRICK_BREAK
# 91 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 92 "data/maps/DaycareTreehouse/scripts.pory"
	speakername BattleVsWeavile_Text_0
# 93 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_WEAVILE, EMOTE_NORMAL
# 94 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox BattleVsWeavile_Text_4, MSGBOX_AUTOCLOSE
# 95 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 96 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 97 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_4
# 98 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 99 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_5
# 100 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 101 "data/maps/DaycareTreehouse/scripts.pory"
	fadenewbgm MUS_PMD_JUNGLE
# 102 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end


ChanseyDaycareTreehouseHeal::
# 108 "data/maps/DaycareTreehouse/scripts.pory"
	lock
# 109 "data/maps/DaycareTreehouse/scripts.pory"
	faceplayer
# 110 "data/maps/DaycareTreehouse/scripts.pory"
	speakername ChanseyDaycareTreehouseHeal_Text_0
# 111 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 112 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox ChanseyDaycareTreehouseHeal_Text_1, MSGBOX_DEFAULT
# 113 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 114 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox ChanseyDaycareTreehouseHeal_Text_2, MSGBOX_YESNO
# 115 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 116 "data/maps/DaycareTreehouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyDaycareTreehouseHeal_1
# 146 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 147 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox ChanseyDaycareTreehouseHeal_Text_5, MSGBOX_AUTOCLOSE
# 148 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 149 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 150 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

ChanseyDaycareTreehouseHeal_1:
# 118 "data/maps/DaycareTreehouse/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 119 "data/maps/DaycareTreehouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyDaycareTreehouseHeal_4
# 136 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 137 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox ChanseyDaycareTreehouseHeal_Text_4, MSGBOX_AUTOCLOSE
# 138 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 139 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 140 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

ChanseyDaycareTreehouseHeal_4:
# 121 "data/maps/DaycareTreehouse/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 122 "data/maps/DaycareTreehouse/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 123 "data/maps/DaycareTreehouse/scripts.pory"
	playfanfare MUS_HEAL
# 124 "data/maps/DaycareTreehouse/scripts.pory"
	waitfanfare
# 125 "data/maps/DaycareTreehouse/scripts.pory"
	special HealPlayerParty
# 126 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 127 "data/maps/DaycareTreehouse/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 128 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox ChanseyDaycareTreehouseHeal_Text_3, MSGBOX_AUTOCLOSE
# 129 "data/maps/DaycareTreehouse/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 130 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 131 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end


DaycareTreehouseDittoOpenXforms::
# 157 "data/maps/DaycareTreehouse/scripts.pory"
	lock
# 158 "data/maps/DaycareTreehouse/scripts.pory"
	faceplayer
# 159 "data/maps/DaycareTreehouse/scripts.pory"
	goto_if_set FLAG_DITTO_INTRO, DaycareTreehouseDittoOpenXforms_1
# 218 "data/maps/DaycareTreehouse/scripts.pory"
	speakername DaycareTreehouseDittoOpenXforms_Text_0
# 219 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 220 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_4, MSGBOX_DEFAULT
# 220 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 221 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_DITTO_INTRO
# 222 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 223 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 224 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

DaycareTreehouseDittoOpenXforms_1:
# 161 "data/maps/DaycareTreehouse/scripts.pory"
	goto_if_set FLAG_XFORMS_TALKED_TO_DITTO, DaycareTreehouseDittoOpenXforms_4
# 187 "data/maps/DaycareTreehouse/scripts.pory"
	speakername DaycareTreehouseDittoOpenXforms_Text_0
# 188 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 189 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_3, MSGBOX_DEFAULT
# 189 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 190 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_XFORMS_TALKED_TO_DITTO
# 191 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 192 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_1, MSGBOX_YESNO
# 193 "data/maps/DaycareTreehouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareTreehouseDittoOpenXforms_10
# 204 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 205 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 206 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 207 "data/maps/DaycareTreehouse/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 208 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 209 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 210 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

DaycareTreehouseDittoOpenXforms_4:
# 163 "data/maps/DaycareTreehouse/scripts.pory"
	speakername DaycareTreehouseDittoOpenXforms_Text_0
# 164 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_1, MSGBOX_YESNO
# 165 "data/maps/DaycareTreehouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareTreehouseDittoOpenXforms_7
# 176 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 177 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 178 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 179 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 180 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 181 "data/maps/DaycareTreehouse/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 182 "data/maps/DaycareTreehouse/scripts.pory"
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

DaycareTreehouseDittoOpenXforms_10:
# 195 "data/maps/DaycareTreehouse/scripts.pory"
	special OpenPCMoveMons
# 196 "data/maps/DaycareTreehouse/scripts.pory"
	waitstate
# 197 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 198 "data/maps/DaycareTreehouse/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 199 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end


# 31 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_0:
# 31 "data/maps/DaycareTreehouse/scripts.pory"
	face_up
	step_end

# 33 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_1:
# 33 "data/maps/DaycareTreehouse/scripts.pory"
	lock_facing_direction
	step_end

# 35 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_2:
# 35 "data/maps/DaycareTreehouse/scripts.pory"
	walk_fast_down
	step_end

# 38 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_3:
# 38 "data/maps/DaycareTreehouse/scripts.pory"
	jump_2_down
	step_end

# 46 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_4:
# 46 "data/maps/DaycareTreehouse/scripts.pory"
	walk_fast_up
# 46 "data/maps/DaycareTreehouse/scripts.pory"
	walk_fast_up
	step_end

# 48 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_5:
# 48 "data/maps/DaycareTreehouse/scripts.pory"
	walk_in_place_down
	step_end

GrovyleDialog_Text_0:
# 8 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Grovyle$"

GrovyleDialog_Text_1:
# 10 "data/maps/DaycareTreehouse/scripts.pory"
	.string "A lot of us here in the Jungle\nbiome are very agile, but none\lare quite as shifty as Weavile.\pHe is particular about who he\nchallenges to battle so don't\lbe surprised if he turns you\laway.$"

BattleVsWeavile_Text_0:
# 41 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Weavile$"

BattleVsWeavile_Text_1:
# 43 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You want to challenge me?\pNot a chance weakling.\pCome back when you can keep up...\nor don't come back at all.$"

BattleVsWeavile_Text_2:
# 74 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You look quick.\pNow we're talking.\pLet's see if you're fast or just\nflashy.$"

BattleVsWeavile_Text_3:
# 87 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You have gained the ability to\ntransform into Weavile!$"

BattleVsWeavile_Text_4:
# 94 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Godspeed challenger.\n$"

ChanseyDaycareTreehouseHeal_Text_0:
# 110 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Chansey$"

ChanseyDaycareTreehouseHeal_Text_1:
# 112 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.$"

ChanseyDaycareTreehouseHeal_Text_2:
# 114 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Would you like to heal?$"

ChanseyDaycareTreehouseHeal_Text_3:
# 128 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyDaycareTreehouseHeal_Text_4:
# 137 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyDaycareTreehouseHeal_Text_5:
# 147 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Oh, okay then.$"

DaycareTreehouseDittoOpenXforms_Text_0:
# 163 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Ditto$"

DaycareTreehouseDittoOpenXforms_Text_1:
# 164 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Would you like to change out your\ntransformation options?$"

DaycareTreehouseDittoOpenXforms_Text_2:
# 177 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Come back anytime!$"

DaycareTreehouseDittoOpenXforms_Text_3:
# 189 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Ditto!\pYou can only remember four\ntransformations at a time.\pWe Dittos can act as a way to\nswap out which transformations\lyou have active at anytime!\pYou'll find us scattered around\nthe Daycare.\pNow...\n$"

DaycareTreehouseDittoOpenXforms_Text_4:
# 220 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Hello there fellow Ditto!\pDaycare Man asked you to get an Egg\nfor him, did he?\pWell, you're about to learn the\nthe secret of how we Dittos are\lalways found holding Eggs.\pIt'll be quite the adventure!\pDon't forget, you are a Ditto,\nso you can transform into any\lPokémon you defeat in battle!\pThis does only apply to Pokémon\nwho are not already using\lTransform...\pPress the {SELECT_BUTTON} button to\nopen your transformation menu.\pIf you open your Transformation\nParty, you'll see which Pokémon\lyou can transform into!$"
