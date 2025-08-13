DaycareMew_MapScripts::
	.byte 0


DittoEnd::
# 4 "data/maps/DaycareMew/scripts.pory"
	goto_if_unset FLAG_BEAT_MEW, DittoEnd_1
# 33 "data/maps/DaycareMew/scripts.pory"
	lock
# 34 "data/maps/DaycareMew/scripts.pory"
	faceplayer
# 35 "data/maps/DaycareMew/scripts.pory"
	speakername DittoEnd_Text_0
# 36 "data/maps/DaycareMew/scripts.pory"
	msgbox DittoEnd_Text_3, MSGBOX_DEFAULT
# 37 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 38 "data/maps/DaycareMew/scripts.pory"
	release
	end

DittoEnd_1:
# 6 "data/maps/DaycareMew/scripts.pory"
	goto_if_unset FLAG_DITTO_SITRUS, DittoEnd_4
# 21 "data/maps/DaycareMew/scripts.pory"
	lock
# 22 "data/maps/DaycareMew/scripts.pory"
	faceplayer
# 23 "data/maps/DaycareMew/scripts.pory"
	speakername DittoEnd_Text_0
# 24 "data/maps/DaycareMew/scripts.pory"
	msgbox DittoEnd_Text_2, MSGBOX_DEFAULT
# 25 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 26 "data/maps/DaycareMew/scripts.pory"
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
	waitmessage
# 16 "data/maps/DaycareMew/scripts.pory"
	release
	end


ChanseyHealMew::
# 44 "data/maps/DaycareMew/scripts.pory"
	lock
# 45 "data/maps/DaycareMew/scripts.pory"
	faceplayer
# 46 "data/maps/DaycareMew/scripts.pory"
	speakername ChanseyHealMew_Text_0
# 47 "data/maps/DaycareMew/scripts.pory"
	msgbox ChanseyHealMew_Text_1, MSGBOX_YESNO
# 48 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 49 "data/maps/DaycareMew/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyHealMew_1
# 75 "data/maps/DaycareMew/scripts.pory"
	msgbox ChanseyHealMew_Text_4, MSGBOX_AUTOCLOSE
# 76 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 77 "data/maps/DaycareMew/scripts.pory"
	release
	end

ChanseyHealMew_1:
# 51 "data/maps/DaycareMew/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 52 "data/maps/DaycareMew/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyHealMew_4
# 67 "data/maps/DaycareMew/scripts.pory"
	msgbox ChanseyHealMew_Text_3, MSGBOX_AUTOCLOSE
# 68 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 69 "data/maps/DaycareMew/scripts.pory"
	release
	end

ChanseyHealMew_4:
# 54 "data/maps/DaycareMew/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 55 "data/maps/DaycareMew/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 56 "data/maps/DaycareMew/scripts.pory"
	playfanfare MUS_HEAL
# 57 "data/maps/DaycareMew/scripts.pory"
	waitfanfare
# 58 "data/maps/DaycareMew/scripts.pory"
	special HealPlayerParty
# 59 "data/maps/DaycareMew/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 60 "data/maps/DaycareMew/scripts.pory"
	msgbox ChanseyHealMew_Text_2, MSGBOX_AUTOCLOSE
# 61 "data/maps/DaycareMew/scripts.pory"
	waitmessage
# 62 "data/maps/DaycareMew/scripts.pory"
	release
	end


DittoEnd_Text_0:
# 10 "data/maps/DaycareMew/scripts.pory"
	.string "Ditto$"

DittoEnd_Text_1:
# 11 "data/maps/DaycareMew/scripts.pory"
	.string "This is it.\pAfter you walk through this\ndoorway, you will learn the\lsecret of how we Dittos get\lour Eggs.\pTake these.\nThey'll come in handy$"

DittoEnd_Text_2:
# 24 "data/maps/DaycareMew/scripts.pory"
	.string "Hold on to one of those berries.\nTrust me.$"

DittoEnd_Text_3:
# 36 "data/maps/DaycareMew/scripts.pory"
	.string "Congratulations!\pNow you know how we Dittos\nget our Eggs!\pThis knowledge is sacred amonst\nthe Daycare Dittos, so keep this\lto yourself.\pComplete your obligation and hand\nthat Egg off to the Daycare Man.$"

ChanseyHealMew_Text_0:
# 46 "data/maps/DaycareMew/scripts.pory"
	.string "Chansey$"

ChanseyHealMew_Text_1:
# 47 "data/maps/DaycareMew/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.\pWould you like to heal?$"

ChanseyHealMew_Text_2:
# 60 "data/maps/DaycareMew/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyHealMew_Text_3:
# 67 "data/maps/DaycareMew/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyHealMew_Text_4:
# 75 "data/maps/DaycareMew/scripts.pory"
	.string "Oh, okay then.$"
