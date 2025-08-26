DaycareMew_MapScripts::
	.byte 0


DittoEnd::
# 5 "data/maps/DaycareMew/scripts.pory"
	goto_if_unset FLAG_BEAT_MEW, DittoEnd_1
# 35 "data/maps/DaycareMew/scripts.pory"
	lock
# 36 "data/maps/DaycareMew/scripts.pory"
	faceplayer
# 37 "data/maps/DaycareMew/scripts.pory"
	speakername DittoEnd_Text_0
# 38 "data/maps/DaycareMew/scripts.pory"
	msgbox DittoEnd_Text_3, MSGBOX_DEFAULT
# 39 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 40 "data/maps/DaycareMew/scripts.pory"
	release
	end

DittoEnd_1:
# 7 "data/maps/DaycareMew/scripts.pory"
	goto_if_unset FLAG_DITTO_SITRUS, DittoEnd_4
# 23 "data/maps/DaycareMew/scripts.pory"
	lock
# 24 "data/maps/DaycareMew/scripts.pory"
	faceplayer
# 25 "data/maps/DaycareMew/scripts.pory"
	speakername DittoEnd_Text_0
# 26 "data/maps/DaycareMew/scripts.pory"
	msgbox DittoEnd_Text_2, MSGBOX_DEFAULT
# 27 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 28 "data/maps/DaycareMew/scripts.pory"
	release
	end

DittoEnd_4:
# 9 "data/maps/DaycareMew/scripts.pory"
	lock
# 10 "data/maps/DaycareMew/scripts.pory"
	faceplayer
# 11 "data/maps/DaycareMew/scripts.pory"
	speakername DittoEnd_Text_0
# 12 "data/maps/DaycareMew/scripts.pory"
	msgbox DittoEnd_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/DaycareMew/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 14 "data/maps/DaycareMew/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 5
# 15 "data/maps/DaycareMew/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 16 "data/maps/DaycareMew/scripts.pory"
	setflag FLAG_DITTO_SITRUS
# 17 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 18 "data/maps/DaycareMew/scripts.pory"
	release
	end


DittoEndTrigger::
# 48 "data/maps/DaycareMew/scripts.pory"
	goto_if_unset FLAG_DITTO_SITRUS, DittoEndTrigger_1
	end

DittoEndTrigger_1:
# 50 "data/maps/DaycareMew/scripts.pory"
	lock
# 51 "data/maps/DaycareMew/scripts.pory"
	playse SE_PIN
# 52 "data/maps/DaycareMew/scripts.pory"
	applymovement DittoFinale, Common_Movement_ExclamationMark
# 53 "data/maps/DaycareMew/scripts.pory"
	waitmovement DittoFinale
# 54 "data/maps/DaycareMew/scripts.pory"
	applymovement DittoFinale, DittoEndTrigger_Movement_0
# 55 "data/maps/DaycareMew/scripts.pory"
	waitmovement DittoFinale
# 56 "data/maps/DaycareMew/scripts.pory"
	applymovement DittoFinale, DittoEndTrigger_Movement_1
# 57 "data/maps/DaycareMew/scripts.pory"
	waitmovement DittoFinale
# 58 "data/maps/DaycareMew/scripts.pory"
	speakername DittoEnd_Text_0
# 59 "data/maps/DaycareMew/scripts.pory"
	msgbox DittoEnd_Text_1, MSGBOX_DEFAULT
# 60 "data/maps/DaycareMew/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 61 "data/maps/DaycareMew/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 5
# 62 "data/maps/DaycareMew/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 63 "data/maps/DaycareMew/scripts.pory"
	setflag FLAG_DITTO_SITRUS
# 64 "data/maps/DaycareMew/scripts.pory"
	applymovement DittoFinale, DittoEndTrigger_Movement_2
# 65 "data/maps/DaycareMew/scripts.pory"
	waitmovement DittoFinale
# 66 "data/maps/DaycareMew/scripts.pory"
	applymovement DittoFinale, DittoEndTrigger_Movement_3
# 67 "data/maps/DaycareMew/scripts.pory"
	waitmovement DittoFinale
# 68 "data/maps/DaycareMew/scripts.pory"
	applymovement DittoFinale, DittoEndTrigger_Movement_4
# 69 "data/maps/DaycareMew/scripts.pory"
	waitmovement DittoFinale
# 70 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 71 "data/maps/DaycareMew/scripts.pory"
	release
	end


DittoEndTriggerTwo::
# 83 "data/maps/DaycareMew/scripts.pory"
	goto_if_set FLAG_BEAT_MEW, DittoEndTriggerTwo_1
	end

DittoEndTriggerTwo_1:
# 85 "data/maps/DaycareMew/scripts.pory"
	goto_if_unset FLAG_DITTO_END_TRIGGER, DittoEndTriggerTwo_4
	end

DittoEndTriggerTwo_4:
# 87 "data/maps/DaycareMew/scripts.pory"
	lock
# 88 "data/maps/DaycareMew/scripts.pory"
	playse SE_PIN
# 89 "data/maps/DaycareMew/scripts.pory"
	applymovement DittoFinale, Common_Movement_ExclamationMark
# 90 "data/maps/DaycareMew/scripts.pory"
	waitmovement DittoFinale
# 91 "data/maps/DaycareMew/scripts.pory"
	applymovement DittoFinale, DittoEndTriggerTwo_Movement_0
# 92 "data/maps/DaycareMew/scripts.pory"
	waitmovement DittoFinale
# 93 "data/maps/DaycareMew/scripts.pory"
	speakername DittoEnd_Text_0
# 94 "data/maps/DaycareMew/scripts.pory"
	msgbox DittoEnd_Text_3, MSGBOX_DEFAULT
# 95 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 96 "data/maps/DaycareMew/scripts.pory"
	setflag FLAG_DITTO_END_TRIGGER
# 97 "data/maps/DaycareMew/scripts.pory"
	release
	end


ChanseyHealMew::
# 113 "data/maps/DaycareMew/scripts.pory"
	lock
# 114 "data/maps/DaycareMew/scripts.pory"
	faceplayer
# 115 "data/maps/DaycareMew/scripts.pory"
	speakername ChanseyHealMew_Text_0
# 116 "data/maps/DaycareMew/scripts.pory"
	msgbox ChanseyHealMew_Text_1, MSGBOX_YESNO
# 117 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 118 "data/maps/DaycareMew/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyHealMew_1
# 144 "data/maps/DaycareMew/scripts.pory"
	msgbox ChanseyHealMew_Text_4, MSGBOX_AUTOCLOSE
# 145 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 146 "data/maps/DaycareMew/scripts.pory"
	release
	end

ChanseyHealMew_1:
# 120 "data/maps/DaycareMew/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 121 "data/maps/DaycareMew/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyHealMew_4
# 136 "data/maps/DaycareMew/scripts.pory"
	msgbox ChanseyHealMew_Text_3, MSGBOX_AUTOCLOSE
# 137 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 138 "data/maps/DaycareMew/scripts.pory"
	release
	end

ChanseyHealMew_4:
# 123 "data/maps/DaycareMew/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 124 "data/maps/DaycareMew/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 125 "data/maps/DaycareMew/scripts.pory"
	playfanfare MUS_HEAL
# 126 "data/maps/DaycareMew/scripts.pory"
	waitfanfare
# 127 "data/maps/DaycareMew/scripts.pory"
	special HealPlayerParty
# 128 "data/maps/DaycareMew/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 129 "data/maps/DaycareMew/scripts.pory"
	msgbox ChanseyHealMew_Text_2, MSGBOX_AUTOCLOSE
# 130 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 131 "data/maps/DaycareMew/scripts.pory"
	release
	end


# 54 "data/maps/DaycareMew/scripts.pory"
DittoEndTrigger_Movement_0:
# 54 "data/maps/DaycareMew/scripts.pory"
	walk_left
# 54 "data/maps/DaycareMew/scripts.pory"
	walk_left
	step_end

# 56 "data/maps/DaycareMew/scripts.pory"
DittoEndTrigger_Movement_1:
# 56 "data/maps/DaycareMew/scripts.pory"
	walk_down
	step_end

# 64 "data/maps/DaycareMew/scripts.pory"
DittoEndTrigger_Movement_2:
# 64 "data/maps/DaycareMew/scripts.pory"
	walk_up
	step_end

# 66 "data/maps/DaycareMew/scripts.pory"
DittoEndTrigger_Movement_3:
# 66 "data/maps/DaycareMew/scripts.pory"
	walk_right
# 66 "data/maps/DaycareMew/scripts.pory"
	walk_right
	step_end

# 68 "data/maps/DaycareMew/scripts.pory"
DittoEndTrigger_Movement_4:
# 68 "data/maps/DaycareMew/scripts.pory"
	walk_in_place_down
	step_end

# 91 "data/maps/DaycareMew/scripts.pory"
DittoEndTriggerTwo_Movement_0:
# 91 "data/maps/DaycareMew/scripts.pory"
	face_player
	step_end

DittoEnd_Text_0:
# 11 "data/maps/DaycareMew/scripts.pory"
	.string "Ditto$"

DittoEnd_Text_1:
# 12 "data/maps/DaycareMew/scripts.pory"
	.string "This is it.\pAfter you walk through this\ndoorway, you will learn the\lsecret of how we Dittos get\lour Eggs.\pTake these.\nThey'll come in handy.$"

DittoEnd_Text_2:
# 26 "data/maps/DaycareMew/scripts.pory"
	.string "Hold on to one of those berries.\nTrust me.$"

DittoEnd_Text_3:
# 38 "data/maps/DaycareMew/scripts.pory"
	.string "Congratulations!\pNow you know how we Dittos\nget our Eggs!\pThis knowledge is sacred amonst\nthe Daycare Dittos, so keep this\lto yourself.\pComplete your obligation and hand\nthat Egg off to the Daycare Man.$"

ChanseyHealMew_Text_0:
# 115 "data/maps/DaycareMew/scripts.pory"
	.string "Chansey$"

ChanseyHealMew_Text_1:
# 116 "data/maps/DaycareMew/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.\pWould you like to heal?$"

ChanseyHealMew_Text_2:
# 129 "data/maps/DaycareMew/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyHealMew_Text_3:
# 136 "data/maps/DaycareMew/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyHealMew_Text_4:
# 144 "data/maps/DaycareMew/scripts.pory"
	.string "Oh, okay then.$"
