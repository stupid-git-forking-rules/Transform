DaycareTreehouse_MapScripts::
# 2 "data/maps/DaycareTreehouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DaycareTreehouse_OnTransition
	.byte 0


DaycareTreehouse_OnTransition::
# 6 "data/maps/DaycareTreehouse/scripts.pory"
	setrespawn HEAL_LOCATION_DAYCARE_TREEHOUSE
	end


GrovyleDialog::
# 11 "data/maps/DaycareTreehouse/scripts.pory"
	lock
# 12 "data/maps/DaycareTreehouse/scripts.pory"
	faceplayer
# 13 "data/maps/DaycareTreehouse/scripts.pory"
	speakername GrovyleDialog_Text_0
# 14 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_GROVYLE, EMOTE_NORMAL
# 15 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox GrovyleDialog_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 17 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 18 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end


BattleVsWeavile::
# 24 "data/maps/DaycareTreehouse/scripts.pory"
	goto_if_set FLAG_TRANS_WEAVILE, BattleVsWeavile_2
# 28 "data/maps/DaycareTreehouse/scripts.pory"
	goto_if_unset FLAG_TRANS_ARCANINE, BattleVsWeavile_3
# 59 "data/maps/DaycareTreehouse/scripts.pory"
	lock
# 60 "data/maps/DaycareTreehouse/scripts.pory"
	playbgm MUS_NONE, FALSE
# 61 "data/maps/DaycareTreehouse/scripts.pory"
	playmoncry SPECIES_WEAVILE, CRY_MODE_NORMAL
# 62 "data/maps/DaycareTreehouse/scripts.pory"
	waitmoncry
# 63 "data/maps/DaycareTreehouse/scripts.pory"
	playse SE_PIN
# 64 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 65 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 66 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_0
# 67 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 68 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_1
# 69 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 70 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_2
# 71 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 72 "data/maps/DaycareTreehouse/scripts.pory"
	playse SE_M_SCRATCH
# 73 "data/maps/DaycareTreehouse/scripts.pory"
	waitse
# 74 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_3
# 75 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 76 "data/maps/DaycareTreehouse/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 77 "data/maps/DaycareTreehouse/scripts.pory"
	speakername BattleVsWeavile_Text_0
# 78 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_WEAVILE, EMOTE_ANGRY
# 79 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox BattleVsWeavile_Text_2, MSGBOX_AUTOCLOSE
# 80 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 81 "data/maps/DaycareTreehouse/scripts.pory"
	setwildbattle SPECIES_WEAVILE, 25, item = ITEM_QUICK_CLAW, move1 = MOVE_FAKE_OUT, move2 = MOVE_DIG, move3 = MOVE_ICE_SHARD, move4 = MOVE_ICE_PUNCH
# 82 "data/maps/DaycareTreehouse/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 83 "data/maps/DaycareTreehouse/scripts.pory"
	dowildbattle
# 84 "data/maps/DaycareTreehouse/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 85 "data/maps/DaycareTreehouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsWeavile_6
	return

BattleVsWeavile_2:
	end

BattleVsWeavile_3:
# 30 "data/maps/DaycareTreehouse/scripts.pory"
	lock
# 31 "data/maps/DaycareTreehouse/scripts.pory"
	playbgm MUS_NONE, FALSE
# 32 "data/maps/DaycareTreehouse/scripts.pory"
	playmoncry SPECIES_WEAVILE, CRY_MODE_NORMAL
# 33 "data/maps/DaycareTreehouse/scripts.pory"
	waitmoncry
# 34 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 35 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 36 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_0
# 37 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 38 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_1
# 39 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 40 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsWeavile_Movement_2
# 41 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement LOCALID_PLAYER
# 42 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_3
# 43 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 44 "data/maps/DaycareTreehouse/scripts.pory"
	playse SE_M_SCRATCH
# 45 "data/maps/DaycareTreehouse/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 46 "data/maps/DaycareTreehouse/scripts.pory"
	speakername BattleVsWeavile_Text_0
# 47 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_WEAVILE, EMOTE_ANGRY
# 48 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox BattleVsWeavile_Text_1, MSGBOX_AUTOCLOSE
# 49 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 50 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 51 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_4
# 52 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 53 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_5
# 54 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 55 "data/maps/DaycareTreehouse/scripts.pory"
	fadenewbgm MUS_PMD_JUNGLE
# 56 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

BattleVsWeavile_6:
# 87 "data/maps/DaycareTreehouse/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 88 "data/maps/DaycareTreehouse/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 89 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_TRANS_WEAVILE
# 90 "data/maps/DaycareTreehouse/scripts.pory"
	delay 15
# 91 "data/maps/DaycareTreehouse/scripts.pory"
	dittotransform SPECIES_WEAVILE
# 92 "data/maps/DaycareTreehouse/scripts.pory"
	playse MUS_LEVEL_UP
# 93 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox BattleVsWeavile_Text_3, MSGBOX_DEFAULT
# 94 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 95 "data/maps/DaycareTreehouse/scripts.pory"
	dittotransform VAR_TEMP_0
# 96 "data/maps/DaycareTreehouse/scripts.pory"
	givemon SPECIES_WEAVILE, 25, move1 = MOVE_ICE_SHARD, move2 = MOVE_ICE_PUNCH, move3 = MOVE_SHADOW_CLAW, move4 = MOVE_BRICK_BREAK
# 97 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 98 "data/maps/DaycareTreehouse/scripts.pory"
	speakername BattleVsWeavile_Text_0
# 99 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_WEAVILE, EMOTE_NORMAL
# 100 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox BattleVsWeavile_Text_4, MSGBOX_AUTOCLOSE
# 101 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 102 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 103 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_4
# 104 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 105 "data/maps/DaycareTreehouse/scripts.pory"
	applymovement Weavile, BattleVsWeavile_Movement_5
# 106 "data/maps/DaycareTreehouse/scripts.pory"
	waitmovement Weavile
# 107 "data/maps/DaycareTreehouse/scripts.pory"
	fadenewbgm MUS_PMD_JUNGLE
# 108 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end


ChanseyDaycareTreehouseHeal::
# 114 "data/maps/DaycareTreehouse/scripts.pory"
	lock
# 115 "data/maps/DaycareTreehouse/scripts.pory"
	faceplayer
# 116 "data/maps/DaycareTreehouse/scripts.pory"
	speakername ChanseyDaycareTreehouseHeal_Text_0
# 117 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 118 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox ChanseyDaycareTreehouseHeal_Text_1, MSGBOX_DEFAULT
# 119 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 120 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox ChanseyDaycareTreehouseHeal_Text_2, MSGBOX_YESNO
# 121 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 122 "data/maps/DaycareTreehouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyDaycareTreehouseHeal_1
# 152 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 153 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox ChanseyDaycareTreehouseHeal_Text_5, MSGBOX_AUTOCLOSE
# 154 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 155 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 156 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

ChanseyDaycareTreehouseHeal_1:
# 124 "data/maps/DaycareTreehouse/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 125 "data/maps/DaycareTreehouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyDaycareTreehouseHeal_4
# 142 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 143 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox ChanseyDaycareTreehouseHeal_Text_4, MSGBOX_AUTOCLOSE
# 144 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 145 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 146 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

ChanseyDaycareTreehouseHeal_4:
# 127 "data/maps/DaycareTreehouse/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 128 "data/maps/DaycareTreehouse/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 129 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 130 "data/maps/DaycareTreehouse/scripts.pory"
	playfanfare MUS_HEAL
# 131 "data/maps/DaycareTreehouse/scripts.pory"
	waitfanfare
# 132 "data/maps/DaycareTreehouse/scripts.pory"
	special HealPlayerParty
# 133 "data/maps/DaycareTreehouse/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 134 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox ChanseyDaycareTreehouseHeal_Text_3, MSGBOX_AUTOCLOSE
# 135 "data/maps/DaycareTreehouse/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 136 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 137 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end


DaycareTreehouseDittoOpenXforms::
# 163 "data/maps/DaycareTreehouse/scripts.pory"
	lock
# 164 "data/maps/DaycareTreehouse/scripts.pory"
	faceplayer
# 165 "data/maps/DaycareTreehouse/scripts.pory"
	goto_if_set FLAG_DITTO_INTRO, DaycareTreehouseDittoOpenXforms_1
# 205 "data/maps/DaycareTreehouse/scripts.pory"
	speakername DaycareTreehouseDittoOpenXforms_Text_1
# 206 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 207 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_4, MSGBOX_DEFAULT
# 208 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 209 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_DITTO_INTRO
# 210 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 211 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 212 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

DaycareTreehouseDittoOpenXforms_1:
# 167 "data/maps/DaycareTreehouse/scripts.pory"
	goto_if_set FLAG_XFORMS_TALKED_TO_DITTO, DaycareTreehouseDittoOpenXforms_4
# 193 "data/maps/DaycareTreehouse/scripts.pory"
	speakername DaycareTreehouseDittoOpenXforms_Text_1
# 194 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 195 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_3, MSGBOX_DEFAULT
# 196 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 197 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 198 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

DaycareTreehouseDittoOpenXforms_4:
# 169 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_0, MSGBOX_YESNO
# 170 "data/maps/DaycareTreehouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareTreehouseDittoOpenXforms_7
# 181 "data/maps/DaycareTreehouse/scripts.pory"
	speakername DaycareTreehouseDittoOpenXforms_Text_1
# 182 "data/maps/DaycareTreehouse/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 183 "data/maps/DaycareTreehouse/scripts.pory"
	msgbox DaycareTreehouseDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 184 "data/maps/DaycareTreehouse/scripts.pory"
	waitmessage
# 185 "data/maps/DaycareTreehouse/scripts.pory"
	removefieldmugshot
# 186 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 187 "data/maps/DaycareTreehouse/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 188 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end

DaycareTreehouseDittoOpenXforms_7:
# 172 "data/maps/DaycareTreehouse/scripts.pory"
	dittotransform SPECIES_DITTO
# 173 "data/maps/DaycareTreehouse/scripts.pory"
	special OpenPCMoveMons
# 174 "data/maps/DaycareTreehouse/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 175 "data/maps/DaycareTreehouse/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 176 "data/maps/DaycareTreehouse/scripts.pory"
	release
	end


# 36 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_0:
# 36 "data/maps/DaycareTreehouse/scripts.pory"
	face_up
	step_end

# 38 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_1:
# 38 "data/maps/DaycareTreehouse/scripts.pory"
	lock_facing_direction
	step_end

# 40 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_2:
# 40 "data/maps/DaycareTreehouse/scripts.pory"
	walk_fast_down
	step_end

# 42 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_3:
# 42 "data/maps/DaycareTreehouse/scripts.pory"
	jump_2_down
	step_end

# 51 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_4:
# 51 "data/maps/DaycareTreehouse/scripts.pory"
	walk_fast_up
# 51 "data/maps/DaycareTreehouse/scripts.pory"
	walk_fast_up
	step_end

# 53 "data/maps/DaycareTreehouse/scripts.pory"
BattleVsWeavile_Movement_5:
# 53 "data/maps/DaycareTreehouse/scripts.pory"
	walk_in_place_down
	step_end

GrovyleDialog_Text_0:
# 13 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Grovyle$"

GrovyleDialog_Text_1:
# 15 "data/maps/DaycareTreehouse/scripts.pory"
	.string "A lot of us here in the Jungle\nbiome are very agile, but none\lare quite as shifty as Weavile.\pHe is particular about who he\nchallenges to battle so don't\lbe surprised if he turns you\laway.$"

BattleVsWeavile_Text_0:
# 46 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Weavile$"

BattleVsWeavile_Text_1:
# 48 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You want to challenge me?\pNot a chance weakling.\pCome back when you can keep up...\nor don't come back at all.$"

BattleVsWeavile_Text_2:
# 79 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You look quick.\pNow we're talking.\pLet's see if you're fast or just\nflashy.$"

BattleVsWeavile_Text_3:
# 93 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You have gained the ability to\ntransform into Weavile!$"

BattleVsWeavile_Text_4:
# 100 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Godspeed challenger.\pYou have shown me that you aren't\nall looks.$"

ChanseyDaycareTreehouseHeal_Text_0:
# 116 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Chansey$"

ChanseyDaycareTreehouseHeal_Text_1:
# 118 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.$"

ChanseyDaycareTreehouseHeal_Text_2:
# 120 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Would you like to heal?$"

ChanseyDaycareTreehouseHeal_Text_3:
# 134 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyDaycareTreehouseHeal_Text_4:
# 143 "data/maps/DaycareTreehouse/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyDaycareTreehouseHeal_Text_5:
# 153 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Oh, okay then.$"

DaycareTreehouseDittoOpenXforms_Text_0:
# 169 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Would you like to change out your\ntransformation options?$"

DaycareTreehouseDittoOpenXforms_Text_1:
# 181 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Ditto$"

DaycareTreehouseDittoOpenXforms_Text_2:
# 183 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Come back anytime!$"

DaycareTreehouseDittoOpenXforms_Text_3:
# 195 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Ditto!\pYou can transform into any\lPokémon you defeat in battle!\pThis does only apply to Pokémon\nwho are not already using\lTransform...\pPress the {SELECT_BUTTON} button to\nopen your transformation menu.\pYou can also view more information\nabout the Pokémon you can\ltransform into by opening your\lTransformation Party from the\l{START_BUTTON} menu.\pTo swap out your transformation\noptions, press the {L_BUTTON}!$"

DaycareTreehouseDittoOpenXforms_Text_4:
# 207 "data/maps/DaycareTreehouse/scripts.pory"
	.string "Hello there fellow Ditto!\pDaycare Man asked you to get an Egg\nfor him, did he?\pWell, you're about to learn the\nthe secret of how we Dittos are\lalways found holding Eggs.\pIt'll be quite the adventure!\pDon't forget, you are a Ditto,\nso you can transform into any\lPokémon you defeat in battle!\pThis does only apply to Pokémon\nwho are not already using\lTransform...\pPress the {SELECT_BUTTON} button to\nopen your transformation menu.\pYou can also view more information\nabout the Pokémon you can\ltransform into by opening your\lTransformation Party from the\l{START_BUTTON} menu.\pTo swap out your transformation\noptions, press the {L_BUTTON}!$"
