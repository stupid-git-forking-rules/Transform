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
	msgbox TotodiileDialog_Text_1, MSGBOX_DEFAULT
# 24 "data/maps/DaycareBeachCave/scripts.pory"
	playse SE_PIN
# 25 "data/maps/DaycareBeachCave/scripts.pory"
	applymovement Totodile, Common_Movement_ExclamationMark
# 26 "data/maps/DaycareBeachCave/scripts.pory"
	waitmovement Totodile
# 27 "data/maps/DaycareBeachCave/scripts.pory"
	msgbox TotodiileDialog_Text_2, MSGBOX_DEFAULT
# 28 "data/maps/DaycareBeachCave/scripts.pory"
	waitmessage
# 29 "data/maps/DaycareBeachCave/scripts.pory"
	release
	end


ChinchouDialog::
# 35 "data/maps/DaycareBeachCave/scripts.pory"
	lock
# 36 "data/maps/DaycareBeachCave/scripts.pory"
	faceplayer
# 37 "data/maps/DaycareBeachCave/scripts.pory"
	goto_if_set FLAG_TRANS_CHINCHOU, ChinchouDialog_1
# 49 "data/maps/DaycareBeachCave/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 50 "data/maps/DaycareBeachCave/scripts.pory"
	applymovement Chinchou, TotodiileDialog_Movement_0
# 51 "data/maps/DaycareBeachCave/scripts.pory"
	waitmovement Chinchou
# 52 "data/maps/DaycareBeachCave/scripts.pory"
	playse SE_PIN
# 53 "data/maps/DaycareBeachCave/scripts.pory"
	applymovement Chinchou, Common_Movement_ExclamationMark
# 54 "data/maps/DaycareBeachCave/scripts.pory"
	waitmovement Chinchou
# 55 "data/maps/DaycareBeachCave/scripts.pory"
	speakername ChinchouDialog_Text_0
# 56 "data/maps/DaycareBeachCave/scripts.pory"
	createfieldmugshot MUGSHOT_CHINCHOU, EMOTE_HAPPY
# 57 "data/maps/DaycareBeachCave/scripts.pory"
	msgbox ChinchouDialog_Text_2, MSGBOX_DEFAULT
# 58 "data/maps/DaycareBeachCave/scripts.pory"
	waitmessage
# 59 "data/maps/DaycareBeachCave/scripts.pory"
	removefieldmugshot
# 60 "data/maps/DaycareBeachCave/scripts.pory"
	setflag FLAG_TRANS_CHINCHOU
# 61 "data/maps/DaycareBeachCave/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 62 "data/maps/DaycareBeachCave/scripts.pory"
	playse MUS_LEVEL_UP
# 63 "data/maps/DaycareBeachCave/scripts.pory"
	msgbox ChinchouDialog_Text_3, MSGBOX_DEFAULT
# 64 "data/maps/DaycareBeachCave/scripts.pory"
	waitmessage
# 65 "data/maps/DaycareBeachCave/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 66 "data/maps/DaycareBeachCave/scripts.pory"
	speakername ChinchouDialog_Text_0
# 67 "data/maps/DaycareBeachCave/scripts.pory"
	createfieldmugshot MUGSHOT_CHINCHOU, EMOTE_HAPPY
# 68 "data/maps/DaycareBeachCave/scripts.pory"
	msgbox ChinchouDialog_Text_4, MSGBOX_DEFAULT
# 69 "data/maps/DaycareBeachCave/scripts.pory"
	givemon SPECIES_CHINCHOU, 25, move1 = MOVE_THUNDER_WAVE, move2 = MOVE_DISCHARGE, move3 = MOVE_DIVE, move4 = MOVE_DAZZLING_GLEAM
# 70 "data/maps/DaycareBeachCave/scripts.pory"
	waitmessage
# 71 "data/maps/DaycareBeachCave/scripts.pory"
	removefieldmugshot
# 72 "data/maps/DaycareBeachCave/scripts.pory"
	fadenewbgm MUS_PMD_LAKE
# 73 "data/maps/DaycareBeachCave/scripts.pory"
	release
	end

ChinchouDialog_1:
# 39 "data/maps/DaycareBeachCave/scripts.pory"
	speakername ChinchouDialog_Text_0
# 40 "data/maps/DaycareBeachCave/scripts.pory"
	createfieldmugshot MUGSHOT_CHINCHOU, EMOTE_HAPPY
# 41 "data/maps/DaycareBeachCave/scripts.pory"
	msgbox ChinchouDialog_Text_1, MSGBOX_DEFAULT
# 42 "data/maps/DaycareBeachCave/scripts.pory"
	waitmessage
# 43 "data/maps/DaycareBeachCave/scripts.pory"
	removefieldmugshot
# 44 "data/maps/DaycareBeachCave/scripts.pory"
	release
	end


ChinchouTransformTrigger::
# 79 "data/maps/DaycareBeachCave/scripts.pory"
	goto_if_set FLAG_CHINCHOU_TRIGGER, ChinchouTransformTrigger_1
# 85 "data/maps/DaycareBeachCave/scripts.pory"
	goto_if_set FLAG_TRANS_CHINCHOU, ChinchouTransformTrigger_4
	return

ChinchouTransformTrigger_1:
	end

ChinchouTransformTrigger_4:
# 87 "data/maps/DaycareBeachCave/scripts.pory"
	lock
# 88 "data/maps/DaycareBeachCave/scripts.pory"
	special SpawnCameraObject
# 89 "data/maps/DaycareBeachCave/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 90 "data/maps/DaycareBeachCave/scripts.pory"
	dittotransform SPECIES_CHINCHOU
# 91 "data/maps/DaycareBeachCave/scripts.pory"
	delay 60
# 92 "data/maps/DaycareBeachCave/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ChinchouTransformTrigger_Movement_0
# 93 "data/maps/DaycareBeachCave/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 94 "data/maps/DaycareBeachCave/scripts.pory"
	playse SE_PIN
# 95 "data/maps/DaycareBeachCave/scripts.pory"
	applymovement Chinchou, ChinchouTransformTrigger_Movement_1
# 96 "data/maps/DaycareBeachCave/scripts.pory"
	waitmovement Chinchou
# 97 "data/maps/DaycareBeachCave/scripts.pory"
	applymovement Chinchou, Common_Movement_ExclamationMark
# 98 "data/maps/DaycareBeachCave/scripts.pory"
	waitmovement Chinchou
# 99 "data/maps/DaycareBeachCave/scripts.pory"
	createfieldmugshot MUGSHOT_CHINCHOU, EMOTE_ELATED
# 100 "data/maps/DaycareBeachCave/scripts.pory"
	speakername ChinchouDialog_Text_0
# 101 "data/maps/DaycareBeachCave/scripts.pory"
	msgbox ChinchouTransformTrigger_Text_0, MSGBOX_AUTOCLOSE
# 102 "data/maps/DaycareBeachCave/scripts.pory"
	waitmessage
# 103 "data/maps/DaycareBeachCave/scripts.pory"
	removefieldmugshot
# 104 "data/maps/DaycareBeachCave/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ChinchouTransformTrigger_Movement_2
# 105 "data/maps/DaycareBeachCave/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 106 "data/maps/DaycareBeachCave/scripts.pory"
	special RemoveCameraObject
# 107 "data/maps/DaycareBeachCave/scripts.pory"
	delay 30
# 108 "data/maps/DaycareBeachCave/scripts.pory"
	dittotransform VAR_TEMP_0
# 109 "data/maps/DaycareBeachCave/scripts.pory"
	setflag FLAG_CHINCHOU_TRIGGER
# 110 "data/maps/DaycareBeachCave/scripts.pory"
	release
	end


# 17 "data/maps/DaycareBeachCave/scripts.pory"
TotodiileDialog_Movement_0:
# 17 "data/maps/DaycareBeachCave/scripts.pory"
	face_player
	step_end

# 92 "data/maps/DaycareBeachCave/scripts.pory"
ChinchouTransformTrigger_Movement_0:
# 92 "data/maps/DaycareBeachCave/scripts.pory"
	walk_down
# 92 "data/maps/DaycareBeachCave/scripts.pory"
	walk_down
# 92 "data/maps/DaycareBeachCave/scripts.pory"
	walk_down
# 92 "data/maps/DaycareBeachCave/scripts.pory"
	walk_down
# 92 "data/maps/DaycareBeachCave/scripts.pory"
	walk_down
# 92 "data/maps/DaycareBeachCave/scripts.pory"
	walk_down
# 92 "data/maps/DaycareBeachCave/scripts.pory"
	walk_down
# 92 "data/maps/DaycareBeachCave/scripts.pory"
	walk_down
# 92 "data/maps/DaycareBeachCave/scripts.pory"
	walk_down
	step_end

# 95 "data/maps/DaycareBeachCave/scripts.pory"
ChinchouTransformTrigger_Movement_1:
# 95 "data/maps/DaycareBeachCave/scripts.pory"
	face_up
	step_end

# 104 "data/maps/DaycareBeachCave/scripts.pory"
ChinchouTransformTrigger_Movement_2:
# 104 "data/maps/DaycareBeachCave/scripts.pory"
	walk_up
# 104 "data/maps/DaycareBeachCave/scripts.pory"
	walk_up
# 104 "data/maps/DaycareBeachCave/scripts.pory"
	walk_up
# 104 "data/maps/DaycareBeachCave/scripts.pory"
	walk_up
# 104 "data/maps/DaycareBeachCave/scripts.pory"
	walk_up
# 104 "data/maps/DaycareBeachCave/scripts.pory"
	walk_up
# 104 "data/maps/DaycareBeachCave/scripts.pory"
	walk_up
# 104 "data/maps/DaycareBeachCave/scripts.pory"
	walk_up
# 104 "data/maps/DaycareBeachCave/scripts.pory"
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
# 23 "data/maps/DaycareBeachCave/scripts.pory"
	.string "Wah!\pHow'd you find this cave?\p...$"

TotodiileDialog_Text_2:
# 27 "data/maps/DaycareBeachCave/scripts.pory"
	.string "Did that Baltoy tip you off?\nI've been pretty good about\lsneaking in here.\pIt's been my private getaway...\nplease don't tell anyone about\lthis place.$"

ChinchouDialog_Text_0:
# 39 "data/maps/DaycareBeachCave/scripts.pory"
	.string "Chinchou$"

ChinchouDialog_Text_1:
# 41 "data/maps/DaycareBeachCave/scripts.pory"
	.string "As you near your goal, you\nbest prepare yourself.\pAn opponent much like yourself\nawaits.\pThis blue Pokémon has also\nmastered transformation.$"

ChinchouDialog_Text_2:
# 57 "data/maps/DaycareBeachCave/scripts.pory"
	.string "You must be the new Ditto.\pGreat job finding this cave!\pNo need to fear. I am not looking\nfor a fight.\pI think I could help on your\nadventure by lending you my diving\lablities.\pGo on, Ditto, use Transform!\n$"

ChinchouDialog_Text_3:
# 63 "data/maps/DaycareBeachCave/scripts.pory"
	.string "You have gained the ability to\ntransform into Chinchou!$"

ChinchouDialog_Text_4:
# 68 "data/maps/DaycareBeachCave/scripts.pory"
	.string "A little shy?\pThat's alright.\nAnother time then.$"

ChinchouTransformTrigger_Text_0:
# 101 "data/maps/DaycareBeachCave/scripts.pory"
	.string "There it is!\pLooking more electric already!\n$"
