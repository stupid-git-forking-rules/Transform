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
# 52 "data/maps/DaycareTreehouse/scripts.pory"
	lock
# 53 "data/maps/DaycareTreehouse/scripts.pory"
	playbgm MUS_NONE, FALSE
# 54 "data/maps/DaycareTreehouse/scripts.pory"
	playmoncry SPECIES_WEAVILE, CRY_MODE_NORMAL
# 55 "data/maps/DaycareTreehouse/scripts.pory"
	waitmoncry
# 56 "data/maps/DaycareTreehouse/scripts.pory"
	playse SE_PIN
# 57 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 58 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 59 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_0
# 60 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 61 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_1
# 62 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 63 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_2
# 64 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 65 "data/maps/DaycareTreehouse/scripts.pory"
	playse SE_M_SCRATCH
# 66 "data/maps/DaycareTreehouse/scripts.pory"
	waitse
# 67 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_3
# 68 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 69 "data/maps/DaycareTreehouse/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 70 "data/maps/DaycareTreehouse/scripts.pory"
	speakername BattleVsWeavile_Text_0
# 71 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_WEAVILE, EMOTE_ANGRY
# 72 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox BattleVsWeavile_Text_2, MSGBOX_AUTOCLOSE
# 73 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 74 "data/maps/DaycareTreehouse/scripts.pory"
	setwildbattle SPECIES_WEAVILE, 25
# 75 "data/maps/DaycareTreehouse/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 76 "data/maps/DaycareTreehouse/scripts.pory"
	dowildbattle
# 77 "data/maps/DaycareTreehouse/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 78 "data/maps/DaycareTreehouse/scripts.pory"
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
	createfieldmugshot MUGSHOT_WEAVILE, EMOTE_ANGRY
# 41 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox BattleVsWeavile_Text_1, MSGBOX_AUTOCLOSE
# 42 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 43 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 44 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_4
# 45 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 46 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_5
# 47 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 48 "data/maps/DaycareTreehouse/scripts.pory"
	fadenewbgm MUS_PMD_JUNGLE
# 49 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

BattleVsWeavile_6:
# 80 "data/maps/DaycareTreehouse/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 81 "data/maps/DaycareTreehouse/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 82 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_TRANS_WEAVILE
# 83 "data/maps/DaycareTreehouse/scripts.pory"
	dittotransform SPECIES_WEAVILE
# 84 "data/maps/DaycareTreehouse/scripts.pory"
	playse MUS_LEVEL_UP
# 85 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox BattleVsWeavile_Text_3, MSGBOX_DEFAULT
# 86 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 87 "data/maps/DaycareTreehouse/scripts.pory"
	dittotransform VAR_TEMP_0
# 88 "data/maps/DaycareTreehouse/scripts.pory"
	givemon SPECIES_WEAVILE, 25, move1 = MOVE_ICE_SHARD, move2 = MOVE_ICE_PUNCH, move3 = MOVE_SHADOW_CLAW, move4 = MOVE_BRICK_BREAK
# 89 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 90 "data/maps/DaycareTreehouse/scripts.pory"
	speakername BattleVsWeavile_Text_0
# 91 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_WEAVILE, EMOTE_NORMAL
# 92 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox BattleVsWeavile_Text_4, MSGBOX_AUTOCLOSE
# 93 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 94 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 95 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_4
# 96 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 97 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_5
# 98 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 99 "data/maps/DaycareTreehouse/scripts.pory"
	fadenewbgm MUS_PMD_JUNGLE
# 100 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end


ChanseyDaycareTreehouseHeal::
# 106 "data/maps/DaycareTreehouse/scripts.pory"
	lock
# 107 "data/maps/DaycareTreehouse/scripts.pory"
	faceplayer
# 108 "data/maps/DaycareTreehouse/scripts.pory"
	speakername ChanseyDaycareTreehouseHeal_Text_0
# 109 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 110 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox ChanseyDaycareTreehouseHeal_Text_1, MSGBOX_DEFAULT
# 111 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 112 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox ChanseyDaycareTreehouseHeal_Text_2, MSGBOX_YESNO
# 113 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 114 "data/maps/DaycareTreehouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyDaycareTreehouseHeal_1
# 144 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 145 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox ChanseyDaycareTreehouseHeal_Text_5, MSGBOX_AUTOCLOSE
# 146 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 147 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 148 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

ChanseyDaycareTreehouseHeal_1:
# 116 "data/maps/DaycareTreehouse/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 117 "data/maps/DaycareTreehouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyDaycareTreehouseHeal_4
# 134 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 135 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox ChanseyDaycareTreehouseHeal_Text_4, MSGBOX_AUTOCLOSE
# 136 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 137 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 138 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

ChanseyDaycareTreehouseHeal_4:
# 119 "data/maps/DaycareTreehouse/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 120 "data/maps/DaycareTreehouse/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 121 "data/maps/DaycareTreehouse/scripts.pory"
	playfanfare MUS_HEAL
# 122 "data/maps/DaycareTreehouse/scripts.pory"
	waitfanfare
# 123 "data/maps/DaycareTreehouse/scripts.pory"
	special HealPlayerParty
# 124 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 125 "data/maps/DaycareTreehouse/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 126 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox ChanseyDaycareTreehouseHeal_Text_3, MSGBOX_AUTOCLOSE
# 127 "data/maps/DaycareTreehouse/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 128 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 129 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end


DaycareTreehouseDittoOpenXforms::
# 155 "data/maps/DaycareTreehouse/scripts.pory"
	lock
# 156 "data/maps/DaycareTreehouse/scripts.pory"
	faceplayer
# 157 "data/maps/DaycareTreehouse/scripts.pory"
	goto_if_set FLAG_DITTO_INTRO, DaycareTreehouseDittoOpenXforms_1
# 216 "data/maps/DaycareTreehouse/scripts.pory"
	speakername DaycareTreehouseDittoOpenXforms_Text_0
# 217 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 218 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_4, MSGBOX_DEFAULT
# 218 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 219 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_DITTO_INTRO
# 220 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 221 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 222 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

DaycareTreehouseDittoOpenXforms_1:
# 159 "data/maps/DaycareTreehouse/scripts.pory"
	goto_if_set FLAG_XFORMS_TALKED_TO_DITTO, DaycareTreehouseDittoOpenXforms_4
# 185 "data/maps/DaycareTreehouse/scripts.pory"
	speakername DaycareTreehouseDittoOpenXforms_Text_0
# 186 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 187 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_3, MSGBOX_DEFAULT
# 187 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 188 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_XFORMS_TALKED_TO_DITTO
# 189 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 190 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_1, MSGBOX_YESNO
# 191 "data/maps/DaycareTreehouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareTreehouseDittoOpenXforms_10
# 202 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 203 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 204 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 205 "data/maps/DaycareTreehouse/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 206 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 207 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 208 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

DaycareTreehouseDittoOpenXforms_4:
# 161 "data/maps/DaycareTreehouse/scripts.pory"
	speakername DaycareTreehouseDittoOpenXforms_Text_0
# 162 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_1, MSGBOX_YESNO
# 163 "data/maps/DaycareTreehouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareTreehouseDittoOpenXforms_7
# 174 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 175 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 176 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 177 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 178 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 179 "data/maps/DaycareTreehouse/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 180 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

DaycareTreehouseDittoOpenXforms_7:
# 165 "data/maps/DaycareTreehouse/scripts.pory"
	special OpenPCMoveMons
# 166 "data/maps/DaycareTreehouse/scripts.pory"
	waitstate
# 167 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 168 "data/maps/DaycareTreehouse/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 169 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

DaycareTreehouseDittoOpenXforms_10:
# 193 "data/maps/DaycareTreehouse/scripts.pory"
	special OpenPCMoveMons
# 194 "data/maps/DaycareTreehouse/scripts.pory"
	waitstate
# 195 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 196 "data/maps/DaycareTreehouse/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 197 "data/maps/DaycareTreehouse/scripts.pory"
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

# 44 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_4:
# 44 "data/maps/DaycareTreehouse/scripts.pory"
	walk_fast_up
# 44 "data/maps/DaycareTreehouse/scripts.pory"
	walk_fast_up
	step_end

# 46 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_5:
# 46 "data/maps/DaycareTreehouse/scripts.pory"
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
# 41 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You want to challenge me?\pNot a chance weakling.\pCome back when you can keep up...\nor don't come back at all.$"

BattleVsWeavile_Text_2:
# 72 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You look quick.\pNow we're talking.\pLet's see if you're fast or just\nflashy.$"

BattleVsWeavile_Text_3:
# 85 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You have gained the ability to\ntransform into Weavile!$"

BattleVsWeavile_Text_4:
# 92 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Godspeed challenger.\n$"

ChanseyDaycareTreehouseHeal_Text_0:
# 108 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Chansey$"

ChanseyDaycareTreehouseHeal_Text_1:
# 110 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.$"

ChanseyDaycareTreehouseHeal_Text_2:
# 112 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Would you like to heal?$"

ChanseyDaycareTreehouseHeal_Text_3:
# 126 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyDaycareTreehouseHeal_Text_4:
# 135 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyDaycareTreehouseHeal_Text_5:
# 145 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Oh, okay then.$"

DaycareTreehouseDittoOpenXforms_Text_0:
# 161 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Ditto$"

DaycareTreehouseDittoOpenXforms_Text_1:
# 162 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Would you like to change out your\ntransformation options?$"

DaycareTreehouseDittoOpenXforms_Text_2:
# 175 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Come back anytime!$"

DaycareTreehouseDittoOpenXforms_Text_3:
# 187 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Ditto!\pYou can only remember four\ntransformations at a time.\pWe Dittos can act as a way to\nswap out which transformations\lyou have active at anytime!\pYou'll find us scattered around\nthe Daycare.\pNow...\n$"

DaycareTreehouseDittoOpenXforms_Text_4:
# 218 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Hello there fellow Ditto!\pDaycare Man asked you to get an Egg\nfor him, did he?\pWell, you're about to learn the\nthe secret of how we Dittos are\lalways found holding Eggs.\pIt'll be quite the adventure!\pDon't forget, you are a Ditto,\nso you can transform into any\lPokémon you defeat in battle!\pThis does only apply to Pokémon\nwho are not already using\lTransform...\pPress the {SELECT_BUTTON} button to\nopen your transformation menu.\pIf you open your Transformation\nParty, you'll see which Pokémon\lyou can transform into!$"
