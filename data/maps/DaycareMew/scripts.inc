DaycareMew_MapScripts::
	.byte 0


DittoEnd::
# 4 "data/maps/DaycareMew/scripts.pory"
	goto_if_unset FLAG_BEAT_MEW, DittoEnd_1
# 34 "data/maps/DaycareMew/scripts.pory"
	lock
# 35 "data/maps/DaycareMew/scripts.pory"
	faceplayer
# 36 "data/maps/DaycareMew/scripts.pory"
	speakername DittoEnd_Text_0
# 37 "data/maps/DaycareMew/scripts.pory"
	msgbox DittoEnd_Text_3, MSGBOX_DEFAULT
# 38 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 39 "data/maps/DaycareMew/scripts.pory"
	release
	end

DittoEnd_1:
# 6 "data/maps/DaycareMew/scripts.pory"
	goto_if_unset FLAG_DITTO_SITRUS, DittoEnd_4
# 22 "data/maps/DaycareMew/scripts.pory"
	lock
# 23 "data/maps/DaycareMew/scripts.pory"
	faceplayer
# 24 "data/maps/DaycareMew/scripts.pory"
	speakername DittoEnd_Text_0
# 25 "data/maps/DaycareMew/scripts.pory"
	msgbox DittoEnd_Text_2, MSGBOX_DEFAULT
# 26 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 27 "data/maps/DaycareMew/scripts.pory"
	release
	end

DittoEnd_4:
# 8 "data/maps/DaycareMew/scripts.pory"
	lock
# 9 "data/maps/DaycareMew/scripts.pory"
	faceplayer
# 10 "data/maps/DaycareMew/scripts.pory"
	speakername DittoEnd_Text_0
# 11 "data/maps/DaycareMew/scripts.pory"
	msgbox DittoEnd_Text_1, MSGBOX_DEFAULT
# 12 "data/maps/DaycareMew/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 13 "data/maps/DaycareMew/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 5
# 14 "data/maps/DaycareMew/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 15 "data/maps/DaycareMew/scripts.pory"
	setflag FLAG_DITTO_SITRUS
# 16 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 17 "data/maps/DaycareMew/scripts.pory"
	release
	end


ChanseyHealMew::
# 45 "data/maps/DaycareMew/scripts.pory"
	lock
# 46 "data/maps/DaycareMew/scripts.pory"
	faceplayer
# 47 "data/maps/DaycareMew/scripts.pory"
	speakername ChanseyHealMew_Text_0
# 48 "data/maps/DaycareMew/scripts.pory"
	msgbox ChanseyHealMew_Text_1, MSGBOX_YESNO
# 49 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 50 "data/maps/DaycareMew/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyHealMew_1
# 76 "data/maps/DaycareMew/scripts.pory"
	msgbox ChanseyHealMew_Text_4, MSGBOX_AUTOCLOSE
# 77 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 78 "data/maps/DaycareMew/scripts.pory"
	release
	end

ChanseyHealMew_1:
# 52 "data/maps/DaycareMew/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 53 "data/maps/DaycareMew/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyHealMew_4
# 68 "data/maps/DaycareMew/scripts.pory"
	msgbox ChanseyHealMew_Text_3, MSGBOX_AUTOCLOSE
# 69 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 70 "data/maps/DaycareMew/scripts.pory"
	release
	end

ChanseyHealMew_4:
# 55 "data/maps/DaycareMew/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 56 "data/maps/DaycareMew/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 57 "data/maps/DaycareMew/scripts.pory"
	playfanfare MUS_HEAL
# 58 "data/maps/DaycareMew/scripts.pory"
	waitfanfare
# 59 "data/maps/DaycareMew/scripts.pory"
	special HealPlayerParty
# 60 "data/maps/DaycareMew/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 61 "data/maps/DaycareMew/scripts.pory"
	msgbox ChanseyHealMew_Text_2, MSGBOX_AUTOCLOSE
# 62 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 63 "data/maps/DaycareMew/scripts.pory"
	release
	end


DittoEnd_Text_0:
# 10 "data/maps/DaycareMew/scripts.pory"
	.string "Ditto$"

DittoEnd_Text_1:
# 11 "data/maps/DaycareMew/scripts.pory"
	.string "This is it.\pAfter you walk through this\ndoorway, you will learn the\lsecret of how we Dittos get\lour Eggs.\pTake these.\nThey'll come in handy.$"

DittoEnd_Text_2:
# 25 "data/maps/DaycareMew/scripts.pory"
	.string "Hold on to one of those berries.\nTrust me.$"

DittoEnd_Text_3:
# 37 "data/maps/DaycareMew/scripts.pory"
	.string "Congratulations!\pNow you know how we Dittos\nget our Eggs!\pThis knowledge is sacred amonst\nthe Daycare Dittos, so keep this\lto yourself.\pComplete your obligation and hand\nthat Egg off to the Daycare Man.$"

ChanseyHealMew_Text_0:
# 47 "data/maps/DaycareMew/scripts.pory"
	.string "Chansey$"

ChanseyHealMew_Text_1:
# 48 "data/maps/DaycareMew/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.\pWould you like to heal?$"

ChanseyHealMew_Text_2:
# 61 "data/maps/DaycareMew/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyHealMew_Text_3:
# 68 "data/maps/DaycareMew/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyHealMew_Text_4:
# 76 "data/maps/DaycareMew/scripts.pory"
	.string "Oh, okay then.$"
