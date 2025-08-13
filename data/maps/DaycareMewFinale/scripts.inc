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
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 11 "data/maps/DaycareMewFinale/scripts.pory"
	waitmovement LOCALID_PLAYER
# 12 "data/maps/DaycareMewFinale/scripts.pory"
	speakername MewFinalBattleTrigger_Text_0
# 13 "data/maps/DaycareMewFinale/scripts.pory"
	msgbox MewFinalBattleTrigger_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/DaycareMewFinale/scripts.pory"
	setwildbattle SPECIES_MEW, 25, IsShiny = TRUE
# 15 "data/maps/DaycareMewFinale/scripts.pory"
	dowildbattle
# 16 "data/maps/DaycareMewFinale/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 17 "data/maps/DaycareMewFinale/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MewFinalBattleTrigger_4
	return

MewFinalBattleTrigger_4:
# 19 "data/maps/DaycareMewFinale/scripts.pory"
	speakername MewFinalBattleTrigger_Text_0
# 20 "data/maps/DaycareMewFinale/scripts.pory"
	msgbox MewFinalBattleTrigger_Text_2, MSGBOX_DEFAULT
# 21 "data/maps/DaycareMewFinale/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 22 "data/maps/DaycareMewFinale/scripts.pory"
	giveitem ITEM_AIR_BALLOON
# 23 "data/maps/DaycareMewFinale/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 24 "data/maps/DaycareMewFinale/scripts.pory"
	msgbox MewFinalBattleTrigger_Text_3, MSGBOX_DEFAULT
# 25 "data/maps/DaycareMewFinale/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 26 "data/maps/DaycareMewFinale/scripts.pory"
	waitfanfare
# 27 "data/maps/DaycareMewFinale/scripts.pory"
	waitmessage
# 28 "data/maps/DaycareMewFinale/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 29 "data/maps/DaycareMewFinale/scripts.pory"
	playse SE_DOOR
# 30 "data/maps/DaycareMewFinale/scripts.pory"
	setflag FLAG_BEAT_MEW
# 31 "data/maps/DaycareMewFinale/scripts.pory"
	removeobject Mew
# 32 "data/maps/DaycareMewFinale/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 33 "data/maps/DaycareMewFinale/scripts.pory"
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
# 8 "data/maps/DaycareMewFinale/scripts.pory"
	walk_up
# 8 "data/maps/DaycareMewFinale/scripts.pory"
	walk_up
# 8 "data/maps/DaycareMewFinale/scripts.pory"
	walk_up
	step_end

MewFinalBattleTrigger_Text_0:
# 12 "data/maps/DaycareMewFinale/scripts.pory"
	.string "Mew$"

MewFinalBattleTrigger_Text_1:
# 13 "data/maps/DaycareMewFinale/scripts.pory"
	.string "Welcome Ditto.\pAre you ready to recieve your Egg?\pConsider this your final\nchallenge.$"

MewFinalBattleTrigger_Text_2:
# 20 "data/maps/DaycareMewFinale/scripts.pory"
	.string "Congratulations for overcoming\nthis tremendous challenge.\pThat battle was truly something.\pYou have earned this.\n$"

MewFinalBattleTrigger_Text_3:
# 24 "data/maps/DaycareMewFinale/scripts.pory"
	.string "Ditto learned the secret of\nwhere Eggs come from!$"
