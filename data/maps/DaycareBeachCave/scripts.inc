DaycareBeachCave_MapScripts::
	.byte 0


WiggletDialog::
# 6 "data/maps/DaycareBeachCave/scripts.pory"
	lock
# 7 "data/maps/DaycareBeachCave/scripts.pory"
	faceplayer
# 8 "data/maps/DaycareBeachCave/scripts.pory"
	speakername WiggletDialog_Text_0
# 9 "data/maps/DaycareBeachCave/scripts.pory"
	msgbox WiggletDialog_Text_1, MSGBOX_DEFAULT
# 10 "data/maps/DaycareBeachCave/scripts.pory"
	waitmessage
# 11 "data/maps/DaycareBeachCave/scripts.pory"
	release
	end


TotodiileDialog::
# 16 "data/maps/DaycareBeachCave/scripts.pory"
	lock
# 17 "data/maps/DaycareBeachCave/scripts.pory"
	applymovement Totodile, TotodiileDialog_Movement_0
# 18 "data/maps/DaycareBeachCave/scripts.pory"
	waitmovement Totodile
# 19 "data/maps/DaycareBeachCave/scripts.pory"
	playse SE_PIN
# 20 "data/maps/DaycareBeachCave/scripts.pory"
	applymovement Totodile, Common_Movement_ExclamationMark
# 21 "data/maps/DaycareBeachCave/scripts.pory"
	waitmovement Totodile
# 22 "data/maps/DaycareBeachCave/scripts.pory"
	speakername TotodiileDialog_Text_0
# 23 "data/maps/DaycareBeachCave/scripts.pory"
	createfieldmugshot MUGSHOT_TOTODILE, EMOTE_NORMAL
# 24 "data/maps/DaycareBeachCave/scripts.pory"
	msgbox TotodiileDialog_Text_1, MSGBOX_DEFAULT
# 25 "data/maps/DaycareBeachCave/scripts.pory"
	playse SE_PIN
# 26 "data/maps/DaycareBeachCave/scripts.pory"
	applymovement Totodile, Common_Movement_ExclamationMark
# 27 "data/maps/DaycareBeachCave/scripts.pory"
	waitmovement Totodile
# 28 "data/maps/DaycareBeachCave/scripts.pory"
	msgbox TotodiileDialog_Text_2, MSGBOX_DEFAULT
# 29 "data/maps/DaycareBeachCave/scripts.pory"
	waitmessage
# 30 "data/maps/DaycareBeachCave/scripts.pory"
	removefieldmugshot
# 31 "data/maps/DaycareBeachCave/scripts.pory"
	release
	end


ChinchouDialog::
# 37 "data/maps/DaycareBeachCave/scripts.pory"
	lock
# 38 "data/maps/DaycareBeachCave/scripts.pory"
	faceplayer
# 39 "data/maps/DaycareBeachCave/scripts.pory"
	goto_if_set FLAG_TRANS_CHINCHOU, ChinchouDialog_1
# 51 "data/maps/DaycareBeachCave/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 52 "data/maps/DaycareBeachCave/scripts.pory"
	applymovement Chinchou, TotodiileDialog_Movement_0
# 53 "data/maps/DaycareBeachCave/scripts.pory"
	waitmovement Chinchou
# 54 "data/maps/DaycareBeachCave/scripts.pory"
	playse SE_PIN
# 55 "data/maps/DaycareBeachCave/scripts.pory"
	applymovement Chinchou, Common_Movement_ExclamationMark
# 56 "data/maps/DaycareBeachCave/scripts.pory"
	waitmovement Chinchou
# 57 "data/maps/DaycareBeachCave/scripts.pory"
	speakername ChinchouDialog_Text_0
# 58 "data/maps/DaycareBeachCave/scripts.pory"
	createfieldmugshot MUGSHOT_CHINCHOU, EMOTE_HAPPY
# 59 "data/maps/DaycareBeachCave/scripts.pory"
	msgbox ChinchouDialog_Text_2, MSGBOX_DEFAULT
# 60 "data/maps/DaycareBeachCave/scripts.pory"
	waitmessage
# 61 "data/maps/DaycareBeachCave/scripts.pory"
	removefieldmugshot
# 62 "data/maps/DaycareBeachCave/scripts.pory"
	setflag FLAG_TRANS_CHINCHOU
# 63 "data/maps/DaycareBeachCave/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 64 "data/maps/DaycareBeachCave/scripts.pory"
	playse MUS_LEVEL_UP
# 65 "data/maps/DaycareBeachCave/scripts.pory"
	msgbox ChinchouDialog_Text_3, MSGBOX_DEFAULT
# 66 "data/maps/DaycareBeachCave/scripts.pory"
	waitmessage
# 67 "data/maps/DaycareBeachCave/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 68 "data/maps/DaycareBeachCave/scripts.pory"
	speakername ChinchouDialog_Text_0
# 69 "data/maps/DaycareBeachCave/scripts.pory"
	createfieldmugshot MUGSHOT_CHINCHOU, EMOTE_HAPPY
# 70 "data/maps/DaycareBeachCave/scripts.pory"
	msgbox ChinchouDialog_Text_4, MSGBOX_DEFAULT
# 71 "data/maps/DaycareBeachCave/scripts.pory"
	givemon SPECIES_CHINCHOU, 25, move1 = MOVE_THUNDER_WAVE, move2 = MOVE_DISCHARGE, move3 = MOVE_DIVE, move4 = MOVE_DAZZLING_GLEAM
# 72 "data/maps/DaycareBeachCave/scripts.pory"
	waitmessage
# 73 "data/maps/DaycareBeachCave/scripts.pory"
	removefieldmugshot
# 74 "data/maps/DaycareBeachCave/scripts.pory"
	fadenewbgm MUS_PMD_LAKE
# 75 "data/maps/DaycareBeachCave/scripts.pory"
	release
	end

ChinchouDialog_1:
# 41 "data/maps/DaycareBeachCave/scripts.pory"
	speakername ChinchouDialog_Text_0
# 42 "data/maps/DaycareBeachCave/scripts.pory"
	createfieldmugshot MUGSHOT_CHINCHOU, EMOTE_HAPPY
# 43 "data/maps/DaycareBeachCave/scripts.pory"
	msgbox ChinchouDialog_Text_1, MSGBOX_DEFAULT
# 44 "data/maps/DaycareBeachCave/scripts.pory"
	waitmessage
# 45 "data/maps/DaycareBeachCave/scripts.pory"
	removefieldmugshot
# 46 "data/maps/DaycareBeachCave/scripts.pory"
	release
	end


ChinchouTransformTrigger::
# 81 "data/maps/DaycareBeachCave/scripts.pory"
	goto_if_set FLAG_CHINCHOU_TRIGGER, ChinchouTransformTrigger_1
# 87 "data/maps/DaycareBeachCave/scripts.pory"
	goto_if_set FLAG_TRANS_CHINCHOU, ChinchouTransformTrigger_4
	return

ChinchouTransformTrigger_1:
	end

ChinchouTransformTrigger_4:
# 89 "data/maps/DaycareBeachCave/scripts.pory"
	lock
# 90 "data/maps/DaycareBeachCave/scripts.pory"
	special SpawnCameraObject
# 91 "data/maps/DaycareBeachCave/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 92 "data/maps/DaycareBeachCave/scripts.pory"
	dittotransform SPECIES_CHINCHOU
# 93 "data/maps/DaycareBeachCave/scripts.pory"
	delay 60
# 94 "data/maps/DaycareBeachCave/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ChinchouTransformTrigger_Movement_0
# 95 "data/maps/DaycareBeachCave/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 96 "data/maps/DaycareBeachCave/scripts.pory"
	playse SE_PIN
# 97 "data/maps/DaycareBeachCave/scripts.pory"
	applymovement Chinchou, ChinchouTransformTrigger_Movement_1
# 98 "data/maps/DaycareBeachCave/scripts.pory"
	waitmovement Chinchou
# 99 "data/maps/DaycareBeachCave/scripts.pory"
	applymovement Chinchou, Common_Movement_ExclamationMark
# 100 "data/maps/DaycareBeachCave/scripts.pory"
	waitmovement Chinchou
# 101 "data/maps/DaycareBeachCave/scripts.pory"
	createfieldmugshot MUGSHOT_CHINCHOU, EMOTE_ELATED
# 102 "data/maps/DaycareBeachCave/scripts.pory"
	speakername ChinchouDialog_Text_0
# 103 "data/maps/DaycareBeachCave/scripts.pory"
	msgbox ChinchouTransformTrigger_Text_0, MSGBOX_AUTOCLOSE
# 104 "data/maps/DaycareBeachCave/scripts.pory"
	waitmessage
# 105 "data/maps/DaycareBeachCave/scripts.pory"
	removefieldmugshot
# 106 "data/maps/DaycareBeachCave/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ChinchouTransformTrigger_Movement_2
# 107 "data/maps/DaycareBeachCave/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 108 "data/maps/DaycareBeachCave/scripts.pory"
	special RemoveCameraObject
# 109 "data/maps/DaycareBeachCave/scripts.pory"
	delay 30
# 110 "data/maps/DaycareBeachCave/scripts.pory"
	dittotransform VAR_TEMP_0
# 111 "data/maps/DaycareBeachCave/scripts.pory"
	setflag FLAG_CHINCHOU_TRIGGER
# 112 "data/maps/DaycareBeachCave/scripts.pory"
	release
	end


# 17 "data/maps/DaycareBeachCave/scripts.pory"
TotodiileDialog_Movement_0:
# 17 "data/maps/DaycareBeachCave/scripts.pory"
	face_player
	step_end

# 94 "data/maps/DaycareBeachCave/scripts.pory"
ChinchouTransformTrigger_Movement_0:
# 94 "data/maps/DaycareBeachCave/scripts.pory"
	walk_down
# 94 "data/maps/DaycareBeachCave/scripts.pory"
	walk_down
# 94 "data/maps/DaycareBeachCave/scripts.pory"
	walk_down
# 94 "data/maps/DaycareBeachCave/scripts.pory"
	walk_down
# 94 "data/maps/DaycareBeachCave/scripts.pory"
	walk_down
# 94 "data/maps/DaycareBeachCave/scripts.pory"
	walk_down
# 94 "data/maps/DaycareBeachCave/scripts.pory"
	walk_down
# 94 "data/maps/DaycareBeachCave/scripts.pory"
	walk_down
# 94 "data/maps/DaycareBeachCave/scripts.pory"
	walk_down
	step_end

# 97 "data/maps/DaycareBeachCave/scripts.pory"
ChinchouTransformTrigger_Movement_1:
# 97 "data/maps/DaycareBeachCave/scripts.pory"
	face_up
	step_end

# 106 "data/maps/DaycareBeachCave/scripts.pory"
ChinchouTransformTrigger_Movement_2:
# 106 "data/maps/DaycareBeachCave/scripts.pory"
	walk_up
# 106 "data/maps/DaycareBeachCave/scripts.pory"
	walk_up
# 106 "data/maps/DaycareBeachCave/scripts.pory"
	walk_up
# 106 "data/maps/DaycareBeachCave/scripts.pory"
	walk_up
# 106 "data/maps/DaycareBeachCave/scripts.pory"
	walk_up
# 106 "data/maps/DaycareBeachCave/scripts.pory"
	walk_up
# 106 "data/maps/DaycareBeachCave/scripts.pory"
	walk_up
# 106 "data/maps/DaycareBeachCave/scripts.pory"
	walk_up
# 106 "data/maps/DaycareBeachCave/scripts.pory"
	walk_up
	step_end

WiggletDialog_Text_0:
# 8 "data/maps/DaycareBeachCave/scripts.pory"
	.string "Wigglet$"

WiggletDialog_Text_1:
# 9 "data/maps/DaycareBeachCave/scripts.pory"
	.string "Pst!\nListen closely.\pYou're looking for an Egg, right?\pI've heard there's another\ntransforming Pokémon just like you\lwho holds the key to finding that\lEgg!$"

TotodiileDialog_Text_0:
# 22 "data/maps/DaycareBeachCave/scripts.pory"
	.string "Totodile$"

TotodiileDialog_Text_1:
# 24 "data/maps/DaycareBeachCave/scripts.pory"
	.string "Wah!\pHow'd you find this cave?\p...$"

TotodiileDialog_Text_2:
# 28 "data/maps/DaycareBeachCave/scripts.pory"
	.string "Did that Baltoy tip you off?\nI've been pretty good about\lsneaking in here.\pIt's been my private getaway...\nplease don't tell anyone about\lthis place.$"

ChinchouDialog_Text_0:
# 41 "data/maps/DaycareBeachCave/scripts.pory"
	.string "Chinchou$"

ChinchouDialog_Text_1:
# 43 "data/maps/DaycareBeachCave/scripts.pory"
	.string "As you near your goal, you\nbest prepare yourself.\pAn opponent much like yourself\nawaits.\pThis blue Pokémon has also\nmastered transformation.$"

ChinchouDialog_Text_2:
# 59 "data/maps/DaycareBeachCave/scripts.pory"
	.string "You must be the new Ditto.\pGreat job finding this cave!\pNo need to fear. I am not looking\nfor a fight.\pI think I could help on your\nadventure by lending you my diving\lablities.\pGo on, Ditto, use Transform!\n$"

ChinchouDialog_Text_3:
# 65 "data/maps/DaycareBeachCave/scripts.pory"
	.string "You have gained the ability to\ntransform into Chinchou!$"

ChinchouDialog_Text_4:
# 70 "data/maps/DaycareBeachCave/scripts.pory"
	.string "A little shy?\pThat's alright.\nAnother time then.$"

ChinchouTransformTrigger_Text_0:
# 103 "data/maps/DaycareBeachCave/scripts.pory"
	.string "There it is!\pLooking more electric already!\n$"
