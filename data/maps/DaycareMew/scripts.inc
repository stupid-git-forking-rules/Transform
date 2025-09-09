DaycareMew_MapScripts::
	.byte 0


DittoEnd::
# 5 "data/maps/DaycareMew/scripts.pory"
	goto_if_unset FLAG_BEAT_MEW, DittoEnd_1
# 39 "data/maps/DaycareMew/scripts.pory"
	lock
# 40 "data/maps/DaycareMew/scripts.pory"
	faceplayer
# 41 "data/maps/DaycareMew/scripts.pory"
	speakername DittoEnd_Text_0
# 42 "data/maps/DaycareMew/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_HAPPY
# 43 "data/maps/DaycareMew/scripts.pory"
	msgbox DittoEnd_Text_3, MSGBOX_DEFAULT
# 44 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 45 "data/maps/DaycareMew/scripts.pory"
	removefieldmugshot
# 46 "data/maps/DaycareMew/scripts.pory"
	release
	end

DittoEnd_1:
# 7 "data/maps/DaycareMew/scripts.pory"
	goto_if_unset FLAG_DITTO_SITRUS, DittoEnd_4
# 25 "data/maps/DaycareMew/scripts.pory"
	lock
# 26 "data/maps/DaycareMew/scripts.pory"
	faceplayer
# 27 "data/maps/DaycareMew/scripts.pory"
	speakername DittoEnd_Text_0
# 28 "data/maps/DaycareMew/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 29 "data/maps/DaycareMew/scripts.pory"
	msgbox DittoEnd_Text_2, MSGBOX_DEFAULT
# 30 "data/maps/DaycareMew/scripts.pory"
	removefieldmugshot
# 31 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 32 "data/maps/DaycareMew/scripts.pory"
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
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 13 "data/maps/DaycareMew/scripts.pory"
	msgbox DittoEnd_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/DaycareMew/scripts.pory"
	removefieldmugshot
# 15 "data/maps/DaycareMew/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 16 "data/maps/DaycareMew/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 5
# 17 "data/maps/DaycareMew/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 18 "data/maps/DaycareMew/scripts.pory"
	setflag FLAG_DITTO_SITRUS
# 19 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 20 "data/maps/DaycareMew/scripts.pory"
	release
	end


DittoEndTrigger::
# 54 "data/maps/DaycareMew/scripts.pory"
	goto_if_unset FLAG_DITTO_SITRUS, DittoEndTrigger_1
	end

DittoEndTrigger_1:
# 56 "data/maps/DaycareMew/scripts.pory"
	lock
# 57 "data/maps/DaycareMew/scripts.pory"
	playse SE_PIN
# 58 "data/maps/DaycareMew/scripts.pory"
	applymovement DittoFinale, Common_Movement_ExclamationMark
# 59 "data/maps/DaycareMew/scripts.pory"
	waitmovement DittoFinale
# 60 "data/maps/DaycareMew/scripts.pory"
	applymovement DittoFinale, DittoEndTrigger_Movement_0
# 61 "data/maps/DaycareMew/scripts.pory"
	waitmovement DittoFinale
# 62 "data/maps/DaycareMew/scripts.pory"
	applymovement DittoFinale, DittoEndTrigger_Movement_1
# 63 "data/maps/DaycareMew/scripts.pory"
	waitmovement DittoFinale
# 64 "data/maps/DaycareMew/scripts.pory"
	speakername DittoEnd_Text_0
# 65 "data/maps/DaycareMew/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 66 "data/maps/DaycareMew/scripts.pory"
	msgbox DittoEnd_Text_1, MSGBOX_DEFAULT
# 67 "data/maps/DaycareMew/scripts.pory"
	removefieldmugshot
# 68 "data/maps/DaycareMew/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 69 "data/maps/DaycareMew/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 5
# 70 "data/maps/DaycareMew/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 71 "data/maps/DaycareMew/scripts.pory"
	setflag FLAG_DITTO_SITRUS
# 72 "data/maps/DaycareMew/scripts.pory"
	speakername DittoEnd_Text_0
# 73 "data/maps/DaycareMew/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 74 "data/maps/DaycareMew/scripts.pory"
	msgbox DittoEnd_Text_2, MSGBOX_AUTOCLOSE
# 75 "data/maps/DaycareMew/scripts.pory"
	removefieldmugshot
# 76 "data/maps/DaycareMew/scripts.pory"
	applymovement DittoFinale, DittoEndTrigger_Movement_2
# 77 "data/maps/DaycareMew/scripts.pory"
	waitmovement DittoFinale
# 78 "data/maps/DaycareMew/scripts.pory"
	applymovement DittoFinale, DittoEndTrigger_Movement_3
# 79 "data/maps/DaycareMew/scripts.pory"
	waitmovement DittoFinale
# 80 "data/maps/DaycareMew/scripts.pory"
	applymovement DittoFinale, DittoEndTrigger_Movement_4
# 81 "data/maps/DaycareMew/scripts.pory"
	waitmovement DittoFinale
# 82 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 83 "data/maps/DaycareMew/scripts.pory"
	release
	end


DittoEndTriggerTwo::
# 95 "data/maps/DaycareMew/scripts.pory"
	goto_if_set FLAG_BEAT_MEW, DittoEndTriggerTwo_1
	end

DittoEndTriggerTwo_1:
# 97 "data/maps/DaycareMew/scripts.pory"
	goto_if_unset FLAG_DITTO_END_TRIGGER, DittoEndTriggerTwo_4
	end

DittoEndTriggerTwo_4:
# 99 "data/maps/DaycareMew/scripts.pory"
	lock
# 100 "data/maps/DaycareMew/scripts.pory"
	playse SE_PIN
# 101 "data/maps/DaycareMew/scripts.pory"
	applymovement DittoFinale, Common_Movement_ExclamationMark
# 102 "data/maps/DaycareMew/scripts.pory"
	waitmovement DittoFinale
# 103 "data/maps/DaycareMew/scripts.pory"
	applymovement DittoFinale, DittoEndTriggerTwo_Movement_0
# 104 "data/maps/DaycareMew/scripts.pory"
	waitmovement DittoFinale
# 105 "data/maps/DaycareMew/scripts.pory"
	speakername DittoEnd_Text_0
# 106 "data/maps/DaycareMew/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_HAPPY
# 107 "data/maps/DaycareMew/scripts.pory"
	msgbox DittoEnd_Text_3, MSGBOX_DEFAULT
# 108 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 109 "data/maps/DaycareMew/scripts.pory"
	removefieldmugshot
# 110 "data/maps/DaycareMew/scripts.pory"
	setflag FLAG_DITTO_END_TRIGGER
# 111 "data/maps/DaycareMew/scripts.pory"
	release
	end


ChanseyHealMew::
# 127 "data/maps/DaycareMew/scripts.pory"
	lock
# 128 "data/maps/DaycareMew/scripts.pory"
	faceplayer
# 129 "data/maps/DaycareMew/scripts.pory"
	speakername ChanseyHealMew_Text_0
# 130 "data/maps/DaycareMew/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 131 "data/maps/DaycareMew/scripts.pory"
	msgbox ChanseyHealMew_Text_1, MSGBOX_DEFAULT
# 132 "data/maps/DaycareMew/scripts.pory"
	removefieldmugshot
# 133 "data/maps/DaycareMew/scripts.pory"
	msgbox ChanseyHealMew_Text_2, MSGBOX_YESNO
# 134 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 135 "data/maps/DaycareMew/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyHealMew_1
# 165 "data/maps/DaycareMew/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 166 "data/maps/DaycareMew/scripts.pory"
	msgbox ChanseyHealMew_Text_5, MSGBOX_AUTOCLOSE
# 167 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 168 "data/maps/DaycareMew/scripts.pory"
	removefieldmugshot
# 169 "data/maps/DaycareMew/scripts.pory"
	release
	end

ChanseyHealMew_1:
# 137 "data/maps/DaycareMew/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 138 "data/maps/DaycareMew/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyHealMew_4
# 155 "data/maps/DaycareMew/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 156 "data/maps/DaycareMew/scripts.pory"
	msgbox ChanseyHealMew_Text_4, MSGBOX_AUTOCLOSE
# 157 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 158 "data/maps/DaycareMew/scripts.pory"
	removefieldmugshot
# 159 "data/maps/DaycareMew/scripts.pory"
	release
	end

ChanseyHealMew_4:
# 140 "data/maps/DaycareMew/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 141 "data/maps/DaycareMew/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 142 "data/maps/DaycareMew/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 143 "data/maps/DaycareMew/scripts.pory"
	playfanfare MUS_HEAL
# 144 "data/maps/DaycareMew/scripts.pory"
	waitfanfare
# 145 "data/maps/DaycareMew/scripts.pory"
	special HealPlayerParty
# 146 "data/maps/DaycareMew/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 147 "data/maps/DaycareMew/scripts.pory"
	msgbox ChanseyHealMew_Text_3, MSGBOX_AUTOCLOSE
# 148 "data/maps/DaycareMew/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 149 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 150 "data/maps/DaycareMew/scripts.pory"
	release
	end


# 60 "data/maps/DaycareMew/scripts.pory"
DittoEndTrigger_Movement_0:
# 60 "data/maps/DaycareMew/scripts.pory"
	walk_left
# 60 "data/maps/DaycareMew/scripts.pory"
	walk_left
	step_end

# 62 "data/maps/DaycareMew/scripts.pory"
DittoEndTrigger_Movement_1:
# 62 "data/maps/DaycareMew/scripts.pory"
	walk_down
	step_end

# 76 "data/maps/DaycareMew/scripts.pory"
DittoEndTrigger_Movement_2:
# 76 "data/maps/DaycareMew/scripts.pory"
	walk_up
	step_end

# 78 "data/maps/DaycareMew/scripts.pory"
DittoEndTrigger_Movement_3:
# 78 "data/maps/DaycareMew/scripts.pory"
	walk_right
# 78 "data/maps/DaycareMew/scripts.pory"
	walk_right
	step_end

# 80 "data/maps/DaycareMew/scripts.pory"
DittoEndTrigger_Movement_4:
# 80 "data/maps/DaycareMew/scripts.pory"
	walk_in_place_down
	step_end

# 103 "data/maps/DaycareMew/scripts.pory"
DittoEndTriggerTwo_Movement_0:
# 103 "data/maps/DaycareMew/scripts.pory"
	face_player
	step_end

DittoEnd_Text_0:
# 11 "data/maps/DaycareMew/scripts.pory"
	.string "Ditto$"

DittoEnd_Text_1:
# 13 "data/maps/DaycareMew/scripts.pory"
	.string "This is it.\pAfter you walk through this\ndoorway, you will learn the\lsecret of how we Dittos get\lour Eggs.\pTake these.\nThey'll come in handy.$"

DittoEnd_Text_2:
# 29 "data/maps/DaycareMew/scripts.pory"
	.string "Hold on to one of those berries.\nTrust me.$"

DittoEnd_Text_3:
# 43 "data/maps/DaycareMew/scripts.pory"
	.string "Congratulations!\pNow you know how we Dittos\nget our Eggs!\pThis knowledge is sacred amonst\nthe Daycare Dittos, so keep this\lto yourself.\pComplete your obligation and hand\nthat Egg off to the Daycare Man.$"

ChanseyHealMew_Text_0:
# 129 "data/maps/DaycareMew/scripts.pory"
	.string "Chansey$"

ChanseyHealMew_Text_1:
# 131 "data/maps/DaycareMew/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.$"

ChanseyHealMew_Text_2:
# 133 "data/maps/DaycareMew/scripts.pory"
	.string "Would you like to heal?$"

ChanseyHealMew_Text_3:
# 147 "data/maps/DaycareMew/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyHealMew_Text_4:
# 156 "data/maps/DaycareMew/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyHealMew_Text_5:
# 166 "data/maps/DaycareMew/scripts.pory"
	.string "Oh, okay then.$"
