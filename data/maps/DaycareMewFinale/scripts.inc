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
	playbgm MUS_PMD_TITLE, FALSE
# 17 "data/maps/DaycareMewFinale/scripts.pory"
	speakername MewFinalBattleTrigger_Text_0
# 18 "data/maps/DaycareMewFinale/scripts.pory"
	msgbox MewFinalBattleTrigger_Text_1, MSGBOX_AUTOCLOSE
# 19 "data/maps/DaycareMewFinale/scripts.pory"
	setwildbattle SPECIES_MEW, 25, IsShiny = TRUE, move1 = MOVE_SWIFT, move2 = MOVE_PSYCHIC, move3 = MOVE_CONFUSE_RAY, move4 = MOVE_ANCIENT_POWER
# 20 "data/maps/DaycareMewFinale/scripts.pory"
	settotemboost B_POSITION_PLAYER_LEFT, 4, 4, 4, 4, 4, 4, 0
# 21 "data/maps/DaycareMewFinale/scripts.pory"
	dowildbattle
# 22 "data/maps/DaycareMewFinale/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 23 "data/maps/DaycareMewFinale/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MewFinalBattleTrigger_4
	return

MewFinalBattleTrigger_4:
# 25 "data/maps/DaycareMewFinale/scripts.pory"
	playbgm MUS_PMD_TITLE, FALSE
# 26 "data/maps/DaycareMewFinale/scripts.pory"
	speakername MewFinalBattleTrigger_Text_0
# 27 "data/maps/DaycareMewFinale/scripts.pory"
	msgbox MewFinalBattleTrigger_Text_2, MSGBOX_DEFAULT
# 28 "data/maps/DaycareMewFinale/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 29 "data/maps/DaycareMewFinale/scripts.pory"
	giveitem ITEM_AIR_BALLOON
# 30 "data/maps/DaycareMewFinale/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 31 "data/maps/DaycareMewFinale/scripts.pory"
	msgbox MewFinalBattleTrigger_Text_3, MSGBOX_DEFAULT
# 32 "data/maps/DaycareMewFinale/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 33 "data/maps/DaycareMewFinale/scripts.pory"
	waitfanfare
# 34 "data/maps/DaycareMewFinale/scripts.pory"
	waitmessage
# 35 "data/maps/DaycareMewFinale/scripts.pory"
	speakername MewFinalBattleTrigger_Text_0
# 36 "data/maps/DaycareMewFinale/scripts.pory"
	msgbox MewFinalBattleTrigger_Text_4, MSGBOX_DEFAULT
# 37 "data/maps/DaycareMewFinale/scripts.pory"
	waitmessage
# 38 "data/maps/DaycareMewFinale/scripts.pory"
	playse SE_M_TELEPORT
# 39 "data/maps/DaycareMewFinale/scripts.pory"
	applymovement Mew, MewFinalBattleTrigger_Movement_2
# 40 "data/maps/DaycareMewFinale/scripts.pory"
	waitmovement Mew
# 41 "data/maps/DaycareMewFinale/scripts.pory"
	removeobject Mew
# 42 "data/maps/DaycareMewFinale/scripts.pory"
	fadenewbgm MUS_PMD_MEW
# 43 "data/maps/DaycareMewFinale/scripts.pory"
	setflag FLAG_BEAT_MEW
# 44 "data/maps/DaycareMewFinale/scripts.pory"
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

# 39 "data/maps/DaycareMewFinale/scripts.pory"
MewFinalBattleTrigger_Movement_2:
# 39 "data/maps/DaycareMewFinale/scripts.pory"
	slide_up
# 39 "data/maps/DaycareMewFinale/scripts.pory"
	slide_up
# 39 "data/maps/DaycareMewFinale/scripts.pory"
	slide_up
# 39 "data/maps/DaycareMewFinale/scripts.pory"
	slide_up
# 39 "data/maps/DaycareMewFinale/scripts.pory"
	slide_up
# 39 "data/maps/DaycareMewFinale/scripts.pory"
	slide_up
# 39 "data/maps/DaycareMewFinale/scripts.pory"
	slide_up
# 39 "data/maps/DaycareMewFinale/scripts.pory"
	slide_up
	step_end

MewFinalBattleTrigger_Text_0:
# 17 "data/maps/DaycareMewFinale/scripts.pory"
	.string "Mew$"

MewFinalBattleTrigger_Text_1:
# 18 "data/maps/DaycareMewFinale/scripts.pory"
	.string "Welcome Ditto.\pYou've had quite the adventure\nhaven't you?\pI see you've gathered many\ndiverse transformations.\pYou'd have to travel far and wide\nto accomplish such a feat.\pI think you are ready to receive\nyour Egg.\pConsider me your final challenge.\n$"

MewFinalBattleTrigger_Text_2:
# 27 "data/maps/DaycareMewFinale/scripts.pory"
	.string "Congratulations for overcoming\nthis tremendous challenge.\pYou have earned this.\n$"

MewFinalBattleTrigger_Text_3:
# 31 "data/maps/DaycareMewFinale/scripts.pory"
	.string "Ditto learned the secret of\nwhere Eggs come from!$"

MewFinalBattleTrigger_Text_4:
# 36 "data/maps/DaycareMewFinale/scripts.pory"
	.string "Now go on.\pDeliver that Egg to fulfill your\npurpose.$"
