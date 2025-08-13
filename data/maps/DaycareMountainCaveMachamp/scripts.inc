DaycareMountainCaveMachamp_MapScripts::
	.byte 0


BattleVsMachamp::
# 4 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	goto_if_set FLAG_TRANS_MACHAMP, BattleVsMachamp_2
# 8 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	lock
# 9 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	playmoncry SPECIES_MACHAMP, CRY_MODE_NORMAL
# 10 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	waitmoncry
# 11 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 12 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	waitmovement LOCALID_PLAYER
# 13 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsMachamp_Movement_0
# 14 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	waitmovement LOCALID_PLAYER
# 15 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsMachamp_Movement_1
# 16 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	waitmovement LOCALID_PLAYER
# 17 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsMachamp_Movement_2
# 18 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	waitmovement LOCALID_PLAYER
# 19 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	playse SE_M_VITAL_THROW
# 20 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	applymovement Machamp, BattleVsMachamp_Movement_3
# 21 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	waitmovement Machamp
# 22 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	speakername BattleVsMachamp_Text_0
# 23 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	msgbox BattleVsMachamp_Text_1, MSGBOX_AUTOCLOSE
# 24 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	setwildbattle SPECIES_MACHAMP, 25
# 25 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 26 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	dowildbattle
# 27 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 28 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsMachamp_4
	return

BattleVsMachamp_2:
	end

BattleVsMachamp_4:
# 30 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 31 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	setflag FLAG_TRANS_MACHAMP
# 32 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	dittotransform SPECIES_MACHAMP
# 33 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	playse MUS_LEVEL_UP
# 34 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	msgbox BattleVsMachamp_Text_2, MSGBOX_DEFAULT
# 35 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	waitmessage
# 36 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	dittotransform VAR_TEMP_0
# 37 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	givemon SPECIES_MACHAMP, 25, move1 = MOVE_DYNAMIC_PUNCH, move2 = MOVE_KARATE_CHOP, move3 = MOVE_BULK_UP, move4 = MOVE_SEISMIC_TOSS
# 38 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	waitmessage
# 39 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	speakername BattleVsMachamp_Text_0
# 40 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	msgbox BattleVsMachamp_Text_3, MSGBOX_DEFAULT
# 41 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	waitmessage
# 42 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	applymovement Machamp, BattleVsMachamp_Movement_4
# 43 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	waitmovement Machamp
# 44 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	applymovement Machamp, BattleVsMachamp_Movement_5
# 45 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	waitmovement Machamp
# 46 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	release
	end


# 13 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
BattleVsMachamp_Movement_0:
# 13 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	face_up
	step_end

# 15 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
BattleVsMachamp_Movement_1:
# 15 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	lock_facing_direction
	step_end

# 17 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
BattleVsMachamp_Movement_2:
# 17 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	walk_fast_down
	step_end

# 20 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
BattleVsMachamp_Movement_3:
# 20 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	jump_2_down
	step_end

# 42 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
BattleVsMachamp_Movement_4:
# 42 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	jump_2_up
	step_end

# 44 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
BattleVsMachamp_Movement_5:
# 44 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	walk_in_place_down
	step_end

BattleVsMachamp_Text_0:
# 22 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	.string "Machamp$"

BattleVsMachamp_Text_1:
# 23 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	.string "You need my strength to pass\nthrough that cave atop the cliff?\pYou'll need to prove that you can\nhandle it.$"

BattleVsMachamp_Text_2:
# 34 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	.string "You have gained the ability to\ntransform into Machamp!$"

BattleVsMachamp_Text_3:
# 40 "data/maps/DaycareMountainCaveMachamp/scripts.pory"
	.string "With great power comes great\nresponsibility.\pGo on!\nFind your Egg!$"
