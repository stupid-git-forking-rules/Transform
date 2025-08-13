DaycareMewFinale_MapScripts::
	.byte 0


MewFinalBattleTrigger::
# 4 "data/maps/DaycareMewFinale/scripts.pory"
	goto_if_unset FLAG_BEAT_MEW, MewFinalBattleTrigger_1
	end

MewFinalBattleTrigger_1:
# 6 "data/maps/DaycareMewFinale/scripts.pory"
	lock
# 7 "data/maps/DaycareMewFinale/scripts.pory"
	dittotransform SPECIES_DITTO
# 8 "data/maps/DaycareMewFinale/scripts.pory"
	applymovement LOCALID_PLAYER, MewFinalBattleTrigger_Movement_0
# 9 "data/maps/DaycareMewFinale/scripts.pory"
	waitmovement LOCALID_PLAYER
# 10 "data/maps/DaycareMewFinale/scripts.pory"
	playse SE_PIN
# 11 "data/maps/DaycareMewFinale/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 12 "data/maps/DaycareMewFinale/scripts.pory"
	waitmovement LOCALID_PLAYER
# 13 "data/maps/DaycareMewFinale/scripts.pory"
	delay 45
# 14 "data/maps/DaycareMewFinale/scripts.pory"
	applymovement LOCALID_PLAYER, MewFinalBattleTrigger_Movement_1
# 15 "data/maps/DaycareMewFinale/scripts.pory"
	waitmovement LOCALID_PLAYER
# 16 "data/maps/DaycareMewFinale/scripts.pory"
	speakername MewFinalBattleTrigger_Text_0
# 17 "data/maps/DaycareMewFinale/scripts.pory"
	msgbox MewFinalBattleTrigger_Text_1, MSGBOX_AUTOCLOSE
# 18 "data/maps/DaycareMewFinale/scripts.pory"
	setwildbattle SPECIES_MEW, 25, IsShiny = TRUE, move1 = MOVE_SWIFT, move2 = MOVE_PSYCHIC, move3 = MOVE_CONFUSE_RAY, move4 = MOVE_ANCIENT_POWER
# 19 "data/maps/DaycareMewFinale/scripts.pory"
	settotemboost B_POSITION_PLAYER_LEFT, 3, 3, 3, 3, 3, 3, 0
# 20 "data/maps/DaycareMewFinale/scripts.pory"
	dowildbattle
# 21 "data/maps/DaycareMewFinale/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 22 "data/maps/DaycareMewFinale/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MewFinalBattleTrigger_4
	return

MewFinalBattleTrigger_4:
# 24 "data/maps/DaycareMewFinale/scripts.pory"
	speakername MewFinalBattleTrigger_Text_0
# 25 "data/maps/DaycareMewFinale/scripts.pory"
	msgbox MewFinalBattleTrigger_Text_2, MSGBOX_DEFAULT
# 26 "data/maps/DaycareMewFinale/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 27 "data/maps/DaycareMewFinale/scripts.pory"
	giveitem ITEM_AIR_BALLOON
# 28 "data/maps/DaycareMewFinale/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 29 "data/maps/DaycareMewFinale/scripts.pory"
	msgbox MewFinalBattleTrigger_Text_3, MSGBOX_DEFAULT
# 30 "data/maps/DaycareMewFinale/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 31 "data/maps/DaycareMewFinale/scripts.pory"
	waitfanfare
# 32 "data/maps/DaycareMewFinale/scripts.pory"
	waitmessage
# 33 "data/maps/DaycareMewFinale/scripts.pory"
	playse SE_M_TELEPORT
# 34 "data/maps/DaycareMewFinale/scripts.pory"
	applymovement Mew, MewFinalBattleTrigger_Movement_2
# 35 "data/maps/DaycareMewFinale/scripts.pory"
	waitmovement Mew
# 36 "data/maps/DaycareMewFinale/scripts.pory"
	removeobject Mew
# 37 "data/maps/DaycareMewFinale/scripts.pory"
	setflag FLAG_BEAT_MEW
# 38 "data/maps/DaycareMewFinale/scripts.pory"
	release
	end


# 8 "data/maps/DaycareMewFinale/scripts.pory"
MewFinalBattleTrigger_Movement_0:
# 8 "data/maps/DaycareMewFinale/scripts.pory"
	walk_up
# 8 "data/maps/DaycareMewFinale/scripts.pory"
	walk_up
# 8 "data/maps/DaycareMewFinale/scripts.pory"
	walk_up
	step_end

# 14 "data/maps/DaycareMewFinale/scripts.pory"
MewFinalBattleTrigger_Movement_1:
# 14 "data/maps/DaycareMewFinale/scripts.pory"
	walk_fast_up
# 14 "data/maps/DaycareMewFinale/scripts.pory"
	walk_fast_up
# 14 "data/maps/DaycareMewFinale/scripts.pory"
	walk_fast_up
	step_end

# 34 "data/maps/DaycareMewFinale/scripts.pory"
MewFinalBattleTrigger_Movement_2:
# 34 "data/maps/DaycareMewFinale/scripts.pory"
	slide_up
# 34 "data/maps/DaycareMewFinale/scripts.pory"
	slide_up
# 34 "data/maps/DaycareMewFinale/scripts.pory"
	slide_up
# 34 "data/maps/DaycareMewFinale/scripts.pory"
	slide_up
# 34 "data/maps/DaycareMewFinale/scripts.pory"
	slide_up
# 34 "data/maps/DaycareMewFinale/scripts.pory"
	slide_up
# 34 "data/maps/DaycareMewFinale/scripts.pory"
	slide_up
# 34 "data/maps/DaycareMewFinale/scripts.pory"
	slide_up
	step_end

MewFinalBattleTrigger_Text_0:
# 16 "data/maps/DaycareMewFinale/scripts.pory"
	.string "Mew$"

MewFinalBattleTrigger_Text_1:
# 17 "data/maps/DaycareMewFinale/scripts.pory"
	.string "Welcome Ditto.\pAre you ready to recieve your Egg?\pConsider this your final\nchallenge.$"

MewFinalBattleTrigger_Text_2:
# 25 "data/maps/DaycareMewFinale/scripts.pory"
	.string "Congratulations for overcoming\nthis tremendous challenge.\pYou have earned this.\n$"

MewFinalBattleTrigger_Text_3:
# 29 "data/maps/DaycareMewFinale/scripts.pory"
	.string "Ditto learned the secret of\nwhere Eggs come from!$"
