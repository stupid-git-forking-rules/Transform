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
	goto_if_set FLAG_TRAPINCH_EGG, TrapinchDialog_2
# 34 "data/maps/DaycareDesert/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_RHYHORN
	goto_if_eq TrapinchDialog_4
# 48 "data/maps/DaycareDesert/scripts.pory"
	speakername TrapinchDialog_Text_0
# 49 "data/maps/DaycareDesert/scripts.pory"
	msgbox TrapinchDialog_Text_2, MSGBOX_DEFAULT
# 50 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 51 "data/maps/DaycareDesert/scripts.pory"
	release
	end

TrapinchDialog_2:
# 17 "data/maps/DaycareDesert/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_RHYHORN
	goto_if_eq TrapinchDialog_7
# 27 "data/maps/DaycareDesert/scripts.pory"
	speakername TrapinchDialog_Text_0
# 28 "data/maps/DaycareDesert/scripts.pory"
	msgbox TrapinchDialog_Text_2, MSGBOX_DEFAULT
# 29 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 30 "data/maps/DaycareDesert/scripts.pory"
	release
	end

TrapinchDialog_4:
# 36 "data/maps/DaycareDesert/scripts.pory"
	speakername TrapinchDialog_Text_0
# 37 "data/maps/DaycareDesert/scripts.pory"
	msgbox TrapinchDialog_Text_3, MSGBOX_DEFAULT
# 38 "data/maps/DaycareDesert/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 39 "data/maps/DaycareDesert/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 40 "data/maps/DaycareDesert/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 41 "data/maps/DaycareDesert/scripts.pory"
	setflag FLAG_TRAPINCH_EGG
# 42 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 43 "data/maps/DaycareDesert/scripts.pory"
	release
	end

TrapinchDialog_7:
# 19 "data/maps/DaycareDesert/scripts.pory"
	speakername TrapinchDialog_Text_0
# 20 "data/maps/DaycareDesert/scripts.pory"
	msgbox TrapinchDialog_Text_1, MSGBOX_DEFAULT
# 21 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 22 "data/maps/DaycareDesert/scripts.pory"
	release
	end


StunfiskDialog::
# 58 "data/maps/DaycareDesert/scripts.pory"
	lock
# 59 "data/maps/DaycareDesert/scripts.pory"
	faceplayer
# 60 "data/maps/DaycareDesert/scripts.pory"
	speakername StunfiskDialog_Text_0
# 61 "data/maps/DaycareDesert/scripts.pory"
	msgbox StunfiskDialog_Text_1, MSGBOX_DEFAULT
# 62 "data/maps/DaycareDesert/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 63 "data/maps/DaycareDesert/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 64 "data/maps/DaycareDesert/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 65 "data/maps/DaycareDesert/scripts.pory"
	speakername StunfiskDialog_Text_0
# 66 "data/maps/DaycareDesert/scripts.pory"
	msgbox StunfiskDialog_Text_2, MSGBOX_DEFAULT
# 67 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 68 "data/maps/DaycareDesert/scripts.pory"
	release
	end


BaltoyDialog::
# 73 "data/maps/DaycareDesert/scripts.pory"
	lock
# 74 "data/maps/DaycareDesert/scripts.pory"
	faceplayer
# 75 "data/maps/DaycareDesert/scripts.pory"
	speakername BaltoyDialog_Text_0
# 76 "data/maps/DaycareDesert/scripts.pory"
	msgbox BaltoyDialog_Text_1, MSGBOX_DEFAULT
# 77 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 78 "data/maps/DaycareDesert/scripts.pory"
	release
	end


SandshrewDialog::
# 83 "data/maps/DaycareDesert/scripts.pory"
	lock
# 84 "data/maps/DaycareDesert/scripts.pory"
	faceplayer
# 85 "data/maps/DaycareDesert/scripts.pory"
	speakername SandshrewDialog_Text_0
# 86 "data/maps/DaycareDesert/scripts.pory"
	msgbox SandshrewDialog_Text_1, MSGBOX_DEFAULT
# 87 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 88 "data/maps/DaycareDesert/scripts.pory"
	release
	end


VibravaDialog::
# 93 "data/maps/DaycareDesert/scripts.pory"
	lock
# 94 "data/maps/DaycareDesert/scripts.pory"
	faceplayer
# 95 "data/maps/DaycareDesert/scripts.pory"
	speakername VibravaDialog_Text_0
# 96 "data/maps/DaycareDesert/scripts.pory"
	msgbox VibravaDialog_Text_1, MSGBOX_DEFAULT
# 97 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 98 "data/maps/DaycareDesert/scripts.pory"
	release
	end


RhyhornDialog::
# 103 "data/maps/DaycareDesert/scripts.pory"
	lock
# 104 "data/maps/DaycareDesert/scripts.pory"
	faceplayer
# 105 "data/maps/DaycareDesert/scripts.pory"
	goto_if_set FLAG_TRANS_RYHORN, RhyhornDialog_1
# 115 "data/maps/DaycareDesert/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 116 "data/maps/DaycareDesert/scripts.pory"
	applymovement Rhyhorn, RhyhornDialog_Movement_0
# 117 "data/maps/DaycareDesert/scripts.pory"
	waitmovement Rhyhorn
# 118 "data/maps/DaycareDesert/scripts.pory"
	playse SE_PIN
# 119 "data/maps/DaycareDesert/scripts.pory"
	applymovement Rhyhorn, Common_Movement_ExclamationMark
# 120 "data/maps/DaycareDesert/scripts.pory"
	waitmovement Rhyhorn
# 121 "data/maps/DaycareDesert/scripts.pory"
	speakername RhyhornDialog_Text_0
# 122 "data/maps/DaycareDesert/scripts.pory"
	msgbox RhyhornDialog_Text_2, MSGBOX_DEFAULT
# 123 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 124 "data/maps/DaycareDesert/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 125 "data/maps/DaycareDesert/scripts.pory"
	setflag FLAG_TRANS_RYHORN
# 126 "data/maps/DaycareDesert/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 127 "data/maps/DaycareDesert/scripts.pory"
	dittotransform SPECIES_RHYHORN
# 128 "data/maps/DaycareDesert/scripts.pory"
	playse MUS_LEVEL_UP
# 129 "data/maps/DaycareDesert/scripts.pory"
	msgbox RhyhornDialog_Text_3, MSGBOX_DEFAULT
# 130 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 131 "data/maps/DaycareDesert/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 132 "data/maps/DaycareDesert/scripts.pory"
	speakername RhyhornDialog_Text_0
# 133 "data/maps/DaycareDesert/scripts.pory"
	msgbox RhyhornDialog_Text_4, MSGBOX_DEFAULT
# 134 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 135 "data/maps/DaycareDesert/scripts.pory"
	dittotransform VAR_TEMP_0
# 136 "data/maps/DaycareDesert/scripts.pory"
	givemon SPECIES_RHYHORN, 25, move1 = MOVE_ROCK_THROW, move2 = MOVE_HORN_ATTACK, move3 = MOVE_ROCK_POLISH, move4 = MOVE_ROCK_SMASH
# 137 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 138 "data/maps/DaycareDesert/scripts.pory"
	fadenewbgm MUS_PMD_DESERT
# 139 "data/maps/DaycareDesert/scripts.pory"
	release
	end

RhyhornDialog_1:
# 107 "data/maps/DaycareDesert/scripts.pory"
	speakername RhyhornDialog_Text_0
# 108 "data/maps/DaycareDesert/scripts.pory"
	msgbox RhyhornDialog_Text_1, MSGBOX_DEFAULT
# 109 "data/maps/DaycareDesert/scripts.pory"
	waitmessage
# 110 "data/maps/DaycareDesert/scripts.pory"
	release
	end


# 116 "data/maps/DaycareDesert/scripts.pory"
RhyhornDialog_Movement_0:
# 116 "data/maps/DaycareDesert/scripts.pory"
	face_player
	step_end

CacneaDialog_Text_0:
# 5 "data/maps/DaycareDesert/scripts.pory"
	.string "Cacnea$"

CacneaDialog_Text_1:
# 6 "data/maps/DaycareDesert/scripts.pory"
	.string "Don't blow my cover.\pThey totally think I'm a plant.\n$"

TrapinchDialog_Text_0:
# 19 "data/maps/DaycareDesert/scripts.pory"
	.string "Trapinch$"

TrapinchDialog_Text_1:
# 20 "data/maps/DaycareDesert/scripts.pory"
	.string "Oh, hey Rhyhorn!\pBeautiful weather today isn't it?$"

TrapinchDialog_Text_2:
# 28 "data/maps/DaycareDesert/scripts.pory"
	.string "Don't even think about coming near\nmy sand pit!$"

TrapinchDialog_Text_3:
# 37 "data/maps/DaycareDesert/scripts.pory"
	.string "Oh, hey Rhyhorn!\pBeautiful weather today isn't it?\pThis fell into my sandtrap the\nthe other day...\pWhy don't you take it?\n$"

StunfiskDialog_Text_0:
# 60 "data/maps/DaycareDesert/scripts.pory"
	.string "Stunfisk$"

StunfiskDialog_Text_1:
# 61 "data/maps/DaycareDesert/scripts.pory"
	.string "You found me!\pHere, take this.\n$"

StunfiskDialog_Text_2:
# 66 "data/maps/DaycareDesert/scripts.pory"
	.string "Not many Pokémon know how to\nsurf in the desert.$"

BaltoyDialog_Text_0:
# 75 "data/maps/DaycareDesert/scripts.pory"
	.string "Baltoy$"

BaltoyDialog_Text_1:
# 76 "data/maps/DaycareDesert/scripts.pory"
	.string "I've heard there is a secret cave\nsomewhere here in the desert.\pRumor has it that it a Pokémon\nneeds to know a move not many\ldesert Pokémon can learn...$"

SandshrewDialog_Text_0:
# 85 "data/maps/DaycareDesert/scripts.pory"
	.string "Sandshrew$"

SandshrewDialog_Text_1:
# 86 "data/maps/DaycareDesert/scripts.pory"
	.string "Rhyhorn may have a tough exterior,\nbut he is the nicest Pokémon in\lthe desert!\pHe's a pacifist and doesn't like\nto battle.$"

VibravaDialog_Text_0:
# 95 "data/maps/DaycareDesert/scripts.pory"
	.string "Vibrava$"

VibravaDialog_Text_1:
# 96 "data/maps/DaycareDesert/scripts.pory"
	.string "Surf?\pNever heard of it.\pI just fly over water.\n$"

RhyhornDialog_Text_0:
# 107 "data/maps/DaycareDesert/scripts.pory"
	.string "Rhyhorn$"

RhyhornDialog_Text_1:
# 108 "data/maps/DaycareDesert/scripts.pory"
	.string "Keep on trucking little Ditto!\pHead over and see my old friend\nCutiefly.\pShe loves flowers.\n$"

RhyhornDialog_Text_2:
# 122 "data/maps/DaycareDesert/scripts.pory"
	.string "Hey there little Ditto!\pI'm not much of a fighter, but\nI can see that you're determined!\pYou could probaby get some use out\nof my armor plated exterior...\pTell you what.\pWhy don't you transform into me,\nthat way you make use of my\lstrength!$"

RhyhornDialog_Text_3:
# 129 "data/maps/DaycareDesert/scripts.pory"
	.string "You have gained the ability to\ntransform into Ryhorn!$"

RhyhornDialog_Text_4:
# 133 "data/maps/DaycareDesert/scripts.pory"
	.string "Ho_ho!\pLooking tougher already!\n$"
