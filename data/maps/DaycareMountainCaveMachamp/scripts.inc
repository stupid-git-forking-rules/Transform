DaycareMountainCaveMachamp_MapScripts::
	.byte 0


BattleVsMachamp::
# 4 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	goto_if_set FLAG_TRANS_MACHAMP, BattleVsMachamp_2
# 8 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	lock
# 9 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	playbgm MUS_NONE, FALSE
# 10 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	playmoncry SPECIES_MACHAMP, CRY_MODE_NORMAL
# 11 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	waitmoncry
# 12 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	playse SE_PIN
# 13 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 14 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	waitmovement LOCALID_PLAYER
# 15 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsMachamp_Movement_0
# 16 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	waitmovement LOCALID_PLAYER
# 17 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsMachamp_Movement_1
# 18 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	waitmovement LOCALID_PLAYER
# 19 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsMachamp_Movement_2
# 20 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	waitmovement LOCALID_PLAYER
# 21 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	playse SE_M_VITAL_THROW
# 22 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	applymovement Machamp, BattleVsMachamp_Movement_3
# 23 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	waitmovement Machamp
# 24 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 25 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	speakername BattleVsMachamp_Text_0
# 26 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	createfieldmugshot MUGSHOT_MACHAMP, EMOTE_NORMAL
# 27 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	msgbox BattleVsMachamp_Text_1, MSGBOX_AUTOCLOSE
# 28 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	removefieldmugshot
# 29 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	setwildbattle SPECIES_MACHAMP, 25
# 30 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 31 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	dowildbattle
# 32 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 33 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsMachamp_4
	return

BattleVsMachamp_2:
	end

BattleVsMachamp_4:
# 35 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 36 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 37 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	setflag FLAG_TRANS_MACHAMP
# 38 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	delay 15
# 39 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	dittotransform SPECIES_MACHAMP
# 40 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	playse MUS_LEVEL_UP
# 41 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	msgbox BattleVsMachamp_Text_2, MSGBOX_DEFAULT
# 42 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	waitmessage
# 43 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	dittotransform VAR_TEMP_0
# 44 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	givemon SPECIES_MACHAMP, 25, move1 = MOVE_STRENGTH, move2 = MOVE_FIRE_PUNCH, move3 = MOVE_CROSS_CHOP, move4 = MOVE_THUNDER_PUNCH
# 45 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	waitmessage
# 46 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	createfieldmugshot MUGSHOT_MACHAMP, EMOTE_NORMAL
# 47 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	speakername BattleVsMachamp_Text_0
# 48 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	msgbox BattleVsMachamp_Text_3, MSGBOX_AUTOCLOSE
# 49 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	removefieldmugshot
# 50 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	waitmessage
# 51 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	playse SE_LEDGE
# 52 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	applymovement Machamp, BattleVsMachamp_Movement_4
# 53 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	waitmovement Machamp
# 54 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	applymovement Machamp, BattleVsMachamp_Movement_5
# 55 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	waitmovement Machamp
# 56 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	fadenewbgm MUS_PMD_MOUNTAIN
# 57 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	release
	end


# 15 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
BattleVsMachamp_Movement_0:
# 15 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	face_up
	step_end

# 17 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
BattleVsMachamp_Movement_1:
# 17 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	lock_facing_direction
	step_end

# 19 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
BattleVsMachamp_Movement_2:
# 19 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	walk_fast_down
	step_end

# 22 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
BattleVsMachamp_Movement_3:
# 22 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	jump_2_down
	step_end

# 52 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
BattleVsMachamp_Movement_4:
# 52 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	jump_2_up
	step_end

# 54 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
BattleVsMachamp_Movement_5:
# 54 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	walk_in_place_down
	step_end

BattleVsMachamp_Text_0:
# 25 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	.string "Machamp$"

BattleVsMachamp_Text_1:
# 27 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	.string "You need my strength to pass\nthrough that cave atop the cliff?\pYou'll need to prove that you can\nhandle it.\pCome on.\nLet's battle it out.\pShow me your strength!\n$"

BattleVsMachamp_Text_2:
# 41 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	.string "You have gained the ability to\ntransform into Machamp!$"

BattleVsMachamp_Text_3:
# 48 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	.string "With great power comes great\nresponsibility.\pGo on!\nFind your Egg!$"
