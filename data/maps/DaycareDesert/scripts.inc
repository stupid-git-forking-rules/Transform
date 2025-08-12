DaycareDesert_MapScripts::
	.byte 0


CacneaDialog::
# 4 "data/maps/DaycareDesert/scripts.pory"
	lock
# 5 "data/maps/DaycareDesert/scripts.pory"
	speakername CacneaDialog_Text_0
# 6 "data/maps/DaycareDesert/scripts.pory"
	msgbox CacneaDialog_Text_1, MSGBOX_DEFAULT
# 7 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 8 "data/maps/DaycareDesert/scripts.pory"
	release
	end


TrapinchDialog::
# 13 "data/maps/DaycareDesert/scripts.pory"
	lock
# 14 "data/maps/DaycareDesert/scripts.pory"
	faceplayer
# 15 "data/maps/DaycareDesert/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_RHYHORN
	goto_if_ne TrapinchDialog_1
# 25 "data/maps/DaycareDesert/scripts.pory"
	speakername TrapinchDialog_Text_0
# 26 "data/maps/DaycareDesert/scripts.pory"
	msgbox TrapinchDialog_Text_2, MSGBOX_DEFAULT
# 27 "data/maps/DaycareDesert/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 28 "data/maps/DaycareDesert/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 29 "data/maps/DaycareDesert/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 30 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 31 "data/maps/DaycareDesert/scripts.pory"
	release
	end

TrapinchDialog_1:
# 17 "data/maps/DaycareDesert/scripts.pory"
	speakername TrapinchDialog_Text_0
# 18 "data/maps/DaycareDesert/scripts.pory"
	msgbox TrapinchDialog_Text_1, MSGBOX_DEFAULT
# 19 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 20 "data/maps/DaycareDesert/scripts.pory"
	release
	end


StunfiskDialog::
# 38 "data/maps/DaycareDesert/scripts.pory"
	lock
# 39 "data/maps/DaycareDesert/scripts.pory"
	faceplayer
# 40 "data/maps/DaycareDesert/scripts.pory"
	speakername StunfiskDialog_Text_0
# 41 "data/maps/DaycareDesert/scripts.pory"
	msgbox StunfiskDialog_Text_1, MSGBOX_DEFAULT
# 42 "data/maps/DaycareDesert/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 43 "data/maps/DaycareDesert/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 44 "data/maps/DaycareDesert/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 45 "data/maps/DaycareDesert/scripts.pory"
	speakername StunfiskDialog_Text_2
# 46 "data/maps/DaycareDesert/scripts.pory"
	msgbox StunfiskDialog_Text_3, MSGBOX_DEFAULT
# 47 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 48 "data/maps/DaycareDesert/scripts.pory"
	release
	end


BaltoyDialog::
# 53 "data/maps/DaycareDesert/scripts.pory"
	lock
# 54 "data/maps/DaycareDesert/scripts.pory"
	faceplayer
# 55 "data/maps/DaycareDesert/scripts.pory"
	speakername BaltoyDialog_Text_0
# 56 "data/maps/DaycareDesert/scripts.pory"
	msgbox BaltoyDialog_Text_1, MSGBOX_DEFAULT
# 57 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 58 "data/maps/DaycareDesert/scripts.pory"
	release
	end


SandshrewDialog::
# 63 "data/maps/DaycareDesert/scripts.pory"
	lock
# 64 "data/maps/DaycareDesert/scripts.pory"
	faceplayer
# 65 "data/maps/DaycareDesert/scripts.pory"
	speakername SandshrewDialog_Text_0
# 66 "data/maps/DaycareDesert/scripts.pory"
	msgbox SandshrewDialog_Text_1, MSGBOX_DEFAULT
# 67 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 68 "data/maps/DaycareDesert/scripts.pory"
	release
	end


VibravaDialog::
# 73 "data/maps/DaycareDesert/scripts.pory"
	lock
# 74 "data/maps/DaycareDesert/scripts.pory"
	faceplayer
# 75 "data/maps/DaycareDesert/scripts.pory"
	speakername VibravaDialog_Text_0
# 76 "data/maps/DaycareDesert/scripts.pory"
	msgbox VibravaDialog_Text_1, MSGBOX_DEFAULT
# 77 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 78 "data/maps/DaycareDesert/scripts.pory"
	release
	end


RhyhornDialog::
# 83 "data/maps/DaycareDesert/scripts.pory"
	lock
# 84 "data/maps/DaycareDesert/scripts.pory"
	faceplayer
# 85 "data/maps/DaycareDesert/scripts.pory"
	goto_if_set FLAG_TRANS_RYHORN, RhyhornDialog_1
# 95 "data/maps/DaycareDesert/scripts.pory"
	playse SE_PIN
# 96 "data/maps/DaycareDesert/scripts.pory"
	applymovement Rhyhorn, Common_Movement_ExclamationMark
# 97 "data/maps/DaycareDesert/scripts.pory"
	waitmovement Rhyhorn
# 98 "data/maps/DaycareDesert/scripts.pory"
	speakername RhyhornDialog_Text_0
# 99 "data/maps/DaycareDesert/scripts.pory"
	msgbox RhyhornDialog_Text_2, MSGBOX_DEFAULT
# 100 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 101 "data/maps/DaycareDesert/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 102 "data/maps/DaycareDesert/scripts.pory"
	setflag FLAG_TRANS_RYHORN
# 103 "data/maps/DaycareDesert/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 104 "data/maps/DaycareDesert/scripts.pory"
	dittotransform SPECIES_RHYHORN
# 105 "data/maps/DaycareDesert/scripts.pory"
	playse MUS_LEVEL_UP
# 106 "data/maps/DaycareDesert/scripts.pory"
	msgbox RhyhornDialog_Text_3, MSGBOX_DEFAULT
# 107 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 108 "data/maps/DaycareDesert/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 109 "data/maps/DaycareDesert/scripts.pory"
	speakername RhyhornDialog_Text_0
# 110 "data/maps/DaycareDesert/scripts.pory"
	msgbox RhyhornDialog_Text_4, MSGBOX_DEFAULT
# 111 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 112 "data/maps/DaycareDesert/scripts.pory"
	dittotransform VAR_TEMP_0
# 113 "data/maps/DaycareDesert/scripts.pory"
	givemon SPECIES_RHYHORN, 25, move1 = MOVE_ROCK_THROW, move2 = MOVE_HORN_ATTACK, move3 = MOVE_ROCK_POLISH, move4 = MOVE_ROCK_SMASH
# 114 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 115 "data/maps/DaycareDesert/scripts.pory"
	release
	end

RhyhornDialog_1:
# 87 "data/maps/DaycareDesert/scripts.pory"
	speakername RhyhornDialog_Text_0
# 88 "data/maps/DaycareDesert/scripts.pory"
	msgbox RhyhornDialog_Text_1, MSGBOX_DEFAULT
# 89 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 90 "data/maps/DaycareDesert/scripts.pory"
	release
	end


CacneaDialog_Text_0:
# 5 "data/maps/DaycareDesert/scripts.pory"
	.string "Cacnea$"

CacneaDialog_Text_1:
# 6 "data/maps/DaycareDesert/scripts.pory"
	.string "Don't blow my cover.\pThey totally think I'm a plant.\n$"

TrapinchDialog_Text_0:
# 17 "data/maps/DaycareDesert/scripts.pory"
	.string "Trapinch$"

TrapinchDialog_Text_1:
# 18 "data/maps/DaycareDesert/scripts.pory"
	.string "Don't even think about coming near\nmy sand pit!$"

TrapinchDialog_Text_2:
# 26 "data/maps/DaycareDesert/scripts.pory"
	.string "Oh, hey Rhyhorn!\pBeautiful weather today isn't it?\pThis fell into my sandtrap the\nthe other day...\pWhy don't you take it?\n$"

StunfiskDialog_Text_0:
# 40 "data/maps/DaycareDesert/scripts.pory"
	.string "Stunfisk$"

StunfiskDialog_Text_1:
# 41 "data/maps/DaycareDesert/scripts.pory"
	.string "You found me!\pHere, take this.\n$"

StunfiskDialog_Text_2:
# 45 "data/maps/DaycareDesert/scripts.pory"
	.string "Larvitar$"

StunfiskDialog_Text_3:
# 46 "data/maps/DaycareDesert/scripts.pory"
	.string "Not many Pokémon know how to\nsurf in the desert.$"

BaltoyDialog_Text_0:
# 55 "data/maps/DaycareDesert/scripts.pory"
	.string "Baltoy$"

BaltoyDialog_Text_1:
# 56 "data/maps/DaycareDesert/scripts.pory"
	.string "I've heard there is a secret cave\nsomewhere here in the desert.\pRumor has it that it a Pokémon\nneeds to know a move not many\ldesert Pokémon can learn...$"

SandshrewDialog_Text_0:
# 65 "data/maps/DaycareDesert/scripts.pory"
	.string "Sandshrew$"

SandshrewDialog_Text_1:
# 66 "data/maps/DaycareDesert/scripts.pory"
	.string "Rhyhorn may have a tough exterior,\nbut he is the nicest Pokémon in\lthe desert!\pHe's a pacifist and doesn't like\nto battle.$"

VibravaDialog_Text_0:
# 75 "data/maps/DaycareDesert/scripts.pory"
	.string "Vibrava$"

VibravaDialog_Text_1:
# 76 "data/maps/DaycareDesert/scripts.pory"
	.string "Surf?\pNever heard of it.\pI just fly over water.\n$"

RhyhornDialog_Text_0:
# 87 "data/maps/DaycareDesert/scripts.pory"
	.string "Rhyhorn$"

RhyhornDialog_Text_1:
# 88 "data/maps/DaycareDesert/scripts.pory"
	.string "Keep on trucking little Ditto!\pHead over and see my old friend\nCutiefly.\pShe loves flowers.\n$"

RhyhornDialog_Text_2:
# 99 "data/maps/DaycareDesert/scripts.pory"
	.string "Hey there little Ditto!\pI'm not much of a fighter, but\nI can see that you're determined!\pYou could probaby get some use out\nof my armor plated exterior...\pTell you what.\pWhy don't you transform into me,\nthat way you make use of my\lstrength!$"

RhyhornDialog_Text_3:
# 106 "data/maps/DaycareDesert/scripts.pory"
	.string "You have gained the ability to\ntranform into Ryhorn!$"

RhyhornDialog_Text_4:
# 110 "data/maps/DaycareDesert/scripts.pory"
	.string "Ho_ho!\pLooking tougher already!\n$"
