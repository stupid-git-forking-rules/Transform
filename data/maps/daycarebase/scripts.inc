daycarebase_MapScripts::
# 2 "data/maps/daycarebase/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Daycare_OnTransition
# 3 "data/maps/daycarebase/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, daycarebase_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

daycarebase_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/daycarebase/scripts.pory"
	map_script_2 VAR_INTRO_PLAYED, 0, DaycareIntro
	.2byte 0


DaycareIntro::
# 7 "data/maps/daycarebase/scripts.pory"
	lock
# 8 "data/maps/daycarebase/scripts.pory"
	special EnableNationalPokedex
# 9 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 10 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareIntro_Text_1, MSGBOX_AUTOCLOSE
# 11 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 12 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_OLDMAN_INTRO
# 13 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareManIntro, DaycareIntro_Movement_0
# 14 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareManIntro
# 15 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareManIntro, DaycareIntro_Movement_1
# 16 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareManIntro
# 17 "data/maps/daycarebase/scripts.pory"
	removeobject DaycareManIntro
# 18 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_HIDE_INTRO_DAYCAREMAN
# 19 "data/maps/daycarebase/scripts.pory"
	applymovement LOCALID_PLAYER, DaycareIntro_Movement_2
# 20 "data/maps/daycarebase/scripts.pory"
	applymovement VaporeonIntro, DaycareIntro_Movement_3
# 21 "data/maps/daycarebase/scripts.pory"
	waitmovement LOCALID_PLAYER
# 22 "data/maps/daycarebase/scripts.pory"
	waitmovement VaporeonIntro
# 23 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_VAPOREON, EMOTE_ANGRY
# 24 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_2
# 25 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareIntro_Text_3, MSGBOX_AUTOCLOSE
# 25 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 26 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 27 "data/maps/daycarebase/scripts.pory"
	applymovement VaporeonIntro, DaycareIntro_Movement_4
# 28 "data/maps/daycarebase/scripts.pory"
	playse SE_FLEE
# 29 "data/maps/daycarebase/scripts.pory"
	waitmovement VaporeonIntro
# 30 "data/maps/daycarebase/scripts.pory"
	waitse
# 31 "data/maps/daycarebase/scripts.pory"
	removeobject VaporeonIntro
# 32 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_HIDE_VAPOREON_INTRO
# 33 "data/maps/daycarebase/scripts.pory"
	setvar VAR_INTRO_PLAYED, 1
# 34 "data/maps/daycarebase/scripts.pory"
	release
	end


Daycare_OnTransition::
# 39 "data/maps/daycarebase/scripts.pory"
	setrespawn HEAL_LOCATION_DAYCAREBASE
	end


ShrinkToPikachuCave::
# 44 "data/maps/daycarebase/scripts.pory"
	lock
# 45 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinkToPikachuCave_1
# 61 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_1, MSGBOX_DEFAULT
# 62 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 63 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinkToPikachuCave_1:
# 47 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_0, MSGBOX_YESNO
# 48 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinkToPikachuCave_4
# 54 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 55 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinkToPikachuCave_4:
# 50 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_PIKACHU_SHRINK_CAVE, 0
	return


ShrinktoMausholdCave::
# 69 "data/maps/daycarebase/scripts.pory"
	lock
# 70 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinktoMausholdCave_1
# 86 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_1, MSGBOX_DEFAULT
# 87 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 88 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinktoMausholdCave_1:
# 72 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_0, MSGBOX_YESNO
# 73 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinktoMausholdCave_4
# 79 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 80 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinktoMausholdCave_4:
# 75 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_MAUSHOLD_SHRINK, 0
	return


MimikyuDialog::
# 94 "data/maps/daycarebase/scripts.pory"
	lock
# 95 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 96 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq MimikyuDialog_1
# 110 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_PIKACHU
	goto_if_eq MimikyuDialog_2
# 143 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 144 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYUTOP, EMOTE_NORMAL
# 145 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_DEFAULT
# 146 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 147 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 148 "data/maps/daycarebase/scripts.pory"
	release
	end

MimikyuDialog_1:
# 98 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 99 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYUTOP, EMOTE_NORMAL
# 100 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_DEFAULT
# 101 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 102 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_2
# 103 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYU, EMOTE_ANGRY
# 104 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_3, MSGBOX_DEFAULT
# 105 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 106 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 107 "data/maps/daycarebase/scripts.pory"
	release
	end

MimikyuDialog_2:
# 112 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_MIMIKYU_LUCKYEGG, MimikyuDialog_6
# 124 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 125 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYUTOP, EMOTE_NORMAL
# 126 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_DEFAULT
# 127 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 128 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_2
# 129 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYU, EMOTE_ANGRY
# 130 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_5, MSGBOX_DEFAULT
# 131 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 132 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 133 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 134 "data/maps/daycarebase/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 135 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_MIMIKYU_LUCKYEGG
# 136 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 137 "data/maps/daycarebase/scripts.pory"
	release
	end

MimikyuDialog_6:
# 114 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_2
# 115 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYU, EMOTE_ANGRY
# 116 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_4, MSGBOX_DEFAULT
# 117 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 118 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 119 "data/maps/daycarebase/scripts.pory"
	release
	end


KecleonDialog::
# 153 "data/maps/daycarebase/scripts.pory"
	lock
# 154 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 155 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq KecleonDialog_1
# 167 "data/maps/daycarebase/scripts.pory"
	speakername KecleonDialog_Text_0
# 168 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_KECLEON, EMOTE_NORMAL
# 169 "data/maps/daycarebase/scripts.pory"
	msgbox KecleonDialog_Text_2, MSGBOX_DEFAULT
# 170 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 171 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 172 "data/maps/daycarebase/scripts.pory"
	release
	end

KecleonDialog_1:
# 157 "data/maps/daycarebase/scripts.pory"
	speakername KecleonDialog_Text_0
# 158 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_KECLEON, EMOTE_NORMAL
# 159 "data/maps/daycarebase/scripts.pory"
	msgbox KecleonDialog_Text_1, MSGBOX_DEFAULT
# 160 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 161 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 162 "data/maps/daycarebase/scripts.pory"
	release
	end


AzumarillDialog::
# 179 "data/maps/daycarebase/scripts.pory"
	lock
# 180 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 181 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq AzumarillDialog_1
# 193 "data/maps/daycarebase/scripts.pory"
	speakername AzumarillDialog_Text_0
# 194 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_AZUMARILL, EMOTE_ANGRY
# 195 "data/maps/daycarebase/scripts.pory"
	msgbox AzumarillDialog_Text_2, MSGBOX_DEFAULT
# 196 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 197 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 198 "data/maps/daycarebase/scripts.pory"
	release
	end

AzumarillDialog_1:
# 183 "data/maps/daycarebase/scripts.pory"
	speakername AzumarillDialog_Text_0
# 184 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_AZUMARILL, EMOTE_NORMAL
# 185 "data/maps/daycarebase/scripts.pory"
	msgbox AzumarillDialog_Text_1, MSGBOX_DEFAULT
# 186 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 187 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 188 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareOldManDialog::
# 204 "data/maps/daycarebase/scripts.pory"
	lock
# 205 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 206 "data/maps/daycarebase/scripts.pory"
	goto_if_unset FLAG_BEAT_MEW, DaycareOldManDialog_1
# 238 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq DaycareOldManDialog_7
# 450 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 451 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_1, MSGBOX_DEFAULT
# 452 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 453 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_1:
# 208 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_OLDMAN_INTRO, DaycareOldManDialog_4
# 228 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 229 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_2, MSGBOX_DEFAULT
# 230 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 231 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_OLDMAN_INTRO
# 232 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_4:
# 210 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq DaycareOldManDialog_10
# 219 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 220 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_1, MSGBOX_DEFAULT
# 221 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 222 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_7:
# 240 "data/maps/daycarebase/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 241 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 242 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_0
# 243 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 244 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, Common_Movement_ExclamationMark
# 245 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 246 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 247 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_3, MSGBOX_YESNO
# 248 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 249 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareOldManDialog_13
# 350 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 351 "data/maps/daycarebase/scripts.pory"
	playse SE_M_SCRATCH
# 352 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_15, MSGBOX_DEFAULT
# 353 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 354 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 355 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 356 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_5, MSGBOX_DEFAULT
# 357 "data/maps/daycarebase/scripts.pory"
	removeobject BrendanBiking
# 358 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_HIDE_BRENDAN_BIKE
# 359 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 360 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 361 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP
# 362 "data/maps/daycarebase/scripts.pory"
	waitse
# 363 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP_MAX
# 364 "data/maps/daycarebase/scripts.pory"
	waitse
# 365 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 366 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_6, MSGBOX_DEFAULT
# 367 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 368 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 369 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 370 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_7, MSGBOX_AUTOCLOSE
# 371 "data/maps/daycarebase/scripts.pory"
	special SpawnCameraObject
# 372 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_1
# 373 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 374 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_2
# 375 "data/maps/daycarebase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DaycareOldManDialog_Movement_2
# 376 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 377 "data/maps/daycarebase/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 378 "data/maps/daycarebase/scripts.pory"
	delay 60
# 379 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 24
# 380 "data/maps/daycarebase/scripts.pory"
	delay 60
# 381 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SHOW_BRENDAN_OUTRO
# 382 "data/maps/daycarebase/scripts.pory"
	addobject Brendan
# 383 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK, 24
# 384 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_3
# 385 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 386 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 387 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, Common_Movement_ExclamationMark
# 388 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 389 "data/maps/daycarebase/scripts.pory"
	delay 30
# 390 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_4
# 391 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 392 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_5
# 393 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 394 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 395 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_8, MSGBOX_DEFAULT
# 396 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 397 "data/maps/daycarebase/scripts.pory"
	delay 30
# 398 "data/maps/daycarebase/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 399 "data/maps/daycarebase/scripts.pory"
	delay 60
# 400 "data/maps/daycarebase/scripts.pory"
	special CountLuckyEggs
# 401 "data/maps/daycarebase/scripts.pory"
	special GetWhiteoutCount
# 402 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_0, VAR_WHITEOUT_COUNT
# 403 "data/maps/daycarebase/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_0
# 404 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_1, VAR_LUCKYEGG_COUNT
# 405 "data/maps/daycarebase/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_1
# 406 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_61
DaycareOldManDialog_58:
# 412 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_57
DaycareOldManDialog_54:
# 418 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_53
DaycareOldManDialog_51:
# 424 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_ne DaycareOldManDialog_50
DaycareOldManDialog_48:
# 430 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_ne DaycareOldManDialog_47
DaycareOldManDialog_46:
# 438 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_14, MSGBOX_DEFAULT
# 439 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 440 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
DaycareOldManDialog_40:
# 442 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 443 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_BEAT_MEW
# 444 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SHOW_BRENDAN_OUTRO
# 445 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_HIDE_BRENDAN_BIKE
# 446 "data/maps/daycarebase/scripts.pory"
	special GameClear
	return

DaycareOldManDialog_10:
# 212 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 213 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_0, MSGBOX_DEFAULT
# 214 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 215 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_13:
# 251 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 252 "data/maps/daycarebase/scripts.pory"
	playse SE_ITEMFINDER
# 253 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_4, MSGBOX_DEFAULT
# 254 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 255 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 256 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 257 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_5, MSGBOX_DEFAULT
# 258 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 259 "data/maps/daycarebase/scripts.pory"
	removeobject BrendanBiking
# 260 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_HIDE_BRENDAN_BIKE
# 261 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 262 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP
# 263 "data/maps/daycarebase/scripts.pory"
	waitse
# 264 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP_MAX
# 265 "data/maps/daycarebase/scripts.pory"
	waitse
# 266 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 267 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_6, MSGBOX_DEFAULT
# 268 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 269 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 270 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 271 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_7, MSGBOX_AUTOCLOSE
# 272 "data/maps/daycarebase/scripts.pory"
	special SpawnCameraObject
# 273 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_1
# 274 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 275 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_2
# 276 "data/maps/daycarebase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DaycareOldManDialog_Movement_2
# 277 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 278 "data/maps/daycarebase/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 279 "data/maps/daycarebase/scripts.pory"
	delay 60
# 280 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 24
# 281 "data/maps/daycarebase/scripts.pory"
	delay 60
# 282 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SHOW_BRENDAN_OUTRO
# 283 "data/maps/daycarebase/scripts.pory"
	addobject Brendan
# 284 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK, 24
# 285 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_3
# 286 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 287 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 288 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, Common_Movement_ExclamationMark
# 289 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 290 "data/maps/daycarebase/scripts.pory"
	delay 30
# 291 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_4
# 292 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 293 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_5
# 294 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 295 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 296 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_8, MSGBOX_DEFAULT
# 297 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 298 "data/maps/daycarebase/scripts.pory"
	delay 30
# 299 "data/maps/daycarebase/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 300 "data/maps/daycarebase/scripts.pory"
	delay 60
# 301 "data/maps/daycarebase/scripts.pory"
	special CountLuckyEggs
# 302 "data/maps/daycarebase/scripts.pory"
	special GetWhiteoutCount
# 303 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_0, VAR_WHITEOUT_COUNT
# 304 "data/maps/daycarebase/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_0
# 305 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_1, VAR_LUCKYEGG_COUNT
# 306 "data/maps/daycarebase/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_1
# 307 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_37
DaycareOldManDialog_34:
# 313 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_33
DaycareOldManDialog_30:
# 319 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_29
DaycareOldManDialog_27:
# 325 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_ne DaycareOldManDialog_26
DaycareOldManDialog_24:
# 331 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_ne DaycareOldManDialog_23
DaycareOldManDialog_22:
# 339 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_14, MSGBOX_DEFAULT
# 340 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 341 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
DaycareOldManDialog_16:
# 343 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 344 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_BEAT_MEW
# 345 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SHOW_BRENDAN_OUTRO
# 346 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_HIDE_BRENDAN_BIKE
# 347 "data/maps/daycarebase/scripts.pory"
	special GameClear
	return

DaycareOldManDialog_17:
# 309 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_9, MSGBOX_DEFAULT
# 310 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 311 "data/maps/daycarebase/scripts.pory"
	special ForceShinyDitto
	goto DaycareOldManDialog_16

DaycareOldManDialog_18:
# 315 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_10, MSGBOX_DEFAULT
# 316 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 317 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_16

DaycareOldManDialog_19:
# 321 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_11, MSGBOX_DEFAULT
# 322 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 323 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_16

DaycareOldManDialog_20:
# 327 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_12, MSGBOX_DEFAULT
# 328 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 329 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_16

DaycareOldManDialog_21:
# 333 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_13, MSGBOX_DEFAULT
# 334 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 335 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_16

DaycareOldManDialog_23:
# 331 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_eq DaycareOldManDialog_21
	goto DaycareOldManDialog_22

DaycareOldManDialog_26:
# 325 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_eq DaycareOldManDialog_20
	goto DaycareOldManDialog_24

DaycareOldManDialog_29:
# 319 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_eq DaycareOldManDialog_19
	goto DaycareOldManDialog_27

DaycareOldManDialog_32:
# 313 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_gt DaycareOldManDialog_18
	goto DaycareOldManDialog_30

DaycareOldManDialog_33:
# 313 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_ne DaycareOldManDialog_32
	goto DaycareOldManDialog_30

DaycareOldManDialog_37:
# 307 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_eq DaycareOldManDialog_17
	goto DaycareOldManDialog_34

DaycareOldManDialog_41:
# 408 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_9, MSGBOX_DEFAULT
# 409 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 410 "data/maps/daycarebase/scripts.pory"
	special ForceShinyDitto
	goto DaycareOldManDialog_40

DaycareOldManDialog_42:
# 414 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_10, MSGBOX_DEFAULT
# 415 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 416 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_40

DaycareOldManDialog_43:
# 420 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_11, MSGBOX_DEFAULT
# 421 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 422 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_40

DaycareOldManDialog_44:
# 426 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_12, MSGBOX_DEFAULT
# 427 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 428 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_40

DaycareOldManDialog_45:
# 432 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_13, MSGBOX_DEFAULT
# 433 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 434 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_40

DaycareOldManDialog_47:
# 430 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_eq DaycareOldManDialog_45
	goto DaycareOldManDialog_46

DaycareOldManDialog_50:
# 424 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_eq DaycareOldManDialog_44
	goto DaycareOldManDialog_48

DaycareOldManDialog_53:
# 418 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_eq DaycareOldManDialog_43
	goto DaycareOldManDialog_51

DaycareOldManDialog_56:
# 412 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_gt DaycareOldManDialog_42
	goto DaycareOldManDialog_54

DaycareOldManDialog_57:
# 412 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_ne DaycareOldManDialog_56
	goto DaycareOldManDialog_54

DaycareOldManDialog_61:
# 406 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_eq DaycareOldManDialog_41
	goto DaycareOldManDialog_58


VaporeonDialog::
# 464 "data/maps/daycarebase/scripts.pory"
	lock
# 465 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 466 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_2
# 467 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_VAPOREON, EMOTE_ANGRY
# 468 "data/maps/daycarebase/scripts.pory"
	msgbox VaporeonDialog_Text_0, MSGBOX_NPC
# 469 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 470 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 471 "data/maps/daycarebase/scripts.pory"
	release
	end


LaprasDialog::
# 477 "data/maps/daycarebase/scripts.pory"
	lock
# 478 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 479 "data/maps/daycarebase/scripts.pory"
	speakername LaprasDialog_Text_0
# 480 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_LAPRAS, EMOTE_HAPPY
# 481 "data/maps/daycarebase/scripts.pory"
	msgbox LaprasDialog_Text_1, MSGBOX_DEFAULT
# 482 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 483 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 484 "data/maps/daycarebase/scripts.pory"
	release
	end


LinooneDialog::
# 489 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq LinooneDialog_1
# 503 "data/maps/daycarebase/scripts.pory"
	lock
# 504 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 505 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 506 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_LINOONE, EMOTE_NORMAL
# 507 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_2
# 508 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 509 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 510 "data/maps/daycarebase/scripts.pory"
	release
	end

LinooneDialog_1:
# 491 "data/maps/daycarebase/scripts.pory"
	lock
# 492 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 493 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 494 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_LINOONE, EMOTE_NORMAL
# 495 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_1
# 496 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 497 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 498 "data/maps/daycarebase/scripts.pory"
	release
	end


BulbsaurDialog::
# 516 "data/maps/daycarebase/scripts.pory"
	lock
# 517 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 518 "data/maps/daycarebase/scripts.pory"
	speakername BulbsaurDialog_Text_0
# 519 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_BULBASAUR, EMOTE_NORMAL
# 520 "data/maps/daycarebase/scripts.pory"
	msgbox BulbsaurDialog_Text_1, MSGBOX_NPC
# 521 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 522 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 523 "data/maps/daycarebase/scripts.pory"
	release
	end


CombeeDialog::
# 528 "data/maps/daycarebase/scripts.pory"
	lock
# 529 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 530 "data/maps/daycarebase/scripts.pory"
	speakername CombeeDialog_Text_0
# 531 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_COMBEE, EMOTE_NORMAL
# 532 "data/maps/daycarebase/scripts.pory"
	msgbox CombeeDialog_Text_1, MSGBOX_NPC
# 533 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 534 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 535 "data/maps/daycarebase/scripts.pory"
	release
	end


Porygon2Dialog::
# 540 "data/maps/daycarebase/scripts.pory"
	lock
# 541 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 542 "data/maps/daycarebase/scripts.pory"
	speakername Porygon2Dialog_Text_0
# 543 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PORYGON2, EMOTE_NORMAL
# 544 "data/maps/daycarebase/scripts.pory"
	msgbox Porygon2Dialog_Text_1, MSGBOX_NPC
# 545 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 546 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 547 "data/maps/daycarebase/scripts.pory"
	release
	end


ScytherDialog::
# 552 "data/maps/daycarebase/scripts.pory"
	lock
# 553 "data/maps/daycarebase/scripts.pory"
	applymovement scyther, DaycareOldManDialog_Movement_0
# 554 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_DITTO_IS_SHINY, ScytherDialog_3
ScytherDialog_2:
# 569 "data/maps/daycarebase/scripts.pory"
	speakername ScytherDialog_Text_0
# 570 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_SCYTHER, EMOTE_NORMAL
# 571 "data/maps/daycarebase/scripts.pory"
	msgbox ScytherDialog_Text_3, MSGBOX_DEFAULT
# 572 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 573 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 574 "data/maps/daycarebase/scripts.pory"
	release
	end

ScytherDialog_1:
# 556 "data/maps/daycarebase/scripts.pory"
	speakername ScytherDialog_Text_0
# 557 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_SCYTHER, EMOTE_NORMAL
# 558 "data/maps/daycarebase/scripts.pory"
	msgbox ScytherDialog_Text_1, MSGBOX_DEFAULT
# 559 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 560 "data/maps/daycarebase/scripts.pory"
	applymovement scyther, Common_Movement_ExclamationMark
# 561 "data/maps/daycarebase/scripts.pory"
	waitmovement scyther
# 562 "data/maps/daycarebase/scripts.pory"
	msgbox ScytherDialog_Text_2
# 563 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 564 "data/maps/daycarebase/scripts.pory"
	release
	end

ScytherDialog_3:
# 554 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq ScytherDialog_1
	goto ScytherDialog_2


RioluDialog::
# 580 "data/maps/daycarebase/scripts.pory"
	lock
# 581 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 582 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_RIOLU_INTRO, RioluDialog_1
# 717 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 718 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 719 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_28, MSGBOX_DEFAULT
# 720 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_RIOLU_INTRO
# 721 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 722 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 723 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_1:
# 584 "data/maps/daycarebase/scripts.pory"
	lock
# 585 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 586 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 587 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 588 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_1, MSGBOX_DEFAULT
# 589 "data/maps/daycarebase/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 590 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 591 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RioluDialog_4
# 704 "data/maps/daycarebase/scripts.pory"
	lock
# 705 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 706 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 707 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_27, MSGBOX_AUTOCLOSE
# 708 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 709 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 710 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_4:
# 593 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 594 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_2, MSGBOX_DEFAULT
# 595 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 596 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_3, MSGBOX_YESNO
# 597 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RioluDialog_7
# 694 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 695 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_26
# 696 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 697 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 698 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_7:
# 599 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 600 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_4, MSGBOX_DEFAULT
# 601 "data/maps/daycarebase/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 602 "data/maps/daycarebase/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, RioluDialog_Text_5, RioluDialog_Text_6, RioluDialog_Text_7, RioluDialog_Text_8, RioluDialog_Text_9, RioluDialog_Text_10, RioluDialog_Text_11, MimikyuDialog_Text_0, RioluDialog_Text_12, RioluDialog_Text_13, RioluDialog_Text_14
# 603 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RioluDialog_10
# 611 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RioluDialog_11
# 619 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RioluDialog_12
# 627 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RioluDialog_13
# 635 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq RioluDialog_14
# 643 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq RioluDialog_15
# 651 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq RioluDialog_16
# 659 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq RioluDialog_17
# 667 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq RioluDialog_18
# 675 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq RioluDialog_19
# 683 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq RioluDialog_20
	return

RioluDialog_10:
# 605 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_15, MSGBOX_DEFAULT
# 606 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 607 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 608 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_11:
# 613 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_16, MSGBOX_DEFAULT
# 614 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 615 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 616 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_12:
# 621 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_17, MSGBOX_DEFAULT
# 622 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 623 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 624 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_13:
# 629 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_18, MSGBOX_DEFAULT
# 630 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 631 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 632 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_14:
# 637 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_19, MSGBOX_DEFAULT
# 638 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 639 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 640 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_15:
# 645 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_20, MSGBOX_DEFAULT
# 646 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 647 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 648 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_16:
# 653 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_21, MSGBOX_DEFAULT
# 654 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 655 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 656 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_17:
# 661 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_22, MSGBOX_DEFAULT
# 662 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 663 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 664 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_18:
# 669 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_23, MSGBOX_DEFAULT
# 670 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 671 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 672 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_19:
# 677 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_24, MSGBOX_DEFAULT
# 678 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 679 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 680 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_20:
# 685 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_25, MSGBOX_DEFAULT
# 686 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 687 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 688 "data/maps/daycarebase/scripts.pory"
	release
	end


BattleVsPikachu::
# 730 "data/maps/daycarebase/scripts.pory"
	lock
# 732 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_TRANS_PIKACHU, BattleVsPikachu_2
# 744 "data/maps/daycarebase/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 745 "data/maps/daycarebase/scripts.pory"
	applymovement Pikachu, DaycareOldManDialog_Movement_0
# 746 "data/maps/daycarebase/scripts.pory"
	waitmovement Pikachu
# 747 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 748 "data/maps/daycarebase/scripts.pory"
	applymovement Pikachu, Common_Movement_ExclamationMark
# 749 "data/maps/daycarebase/scripts.pory"
	waitmovement Pikachu
# 750 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 751 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PIKACHU, EMOTE_NORMAL
# 752 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_1, MSGBOX_AUTOCLOSE
# 753 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 754 "data/maps/daycarebase/scripts.pory"
	setwildbattle SPECIES_PIKACHU, 25
# 755 "data/maps/daycarebase/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 756 "data/maps/daycarebase/scripts.pory"
	dowildbattle
# 757 "data/maps/daycarebase/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 758 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsPikachu_4
	return

BattleVsPikachu_2:
# 734 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 735 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 736 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PIKACHU, EMOTE_NORMAL
# 737 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_0, MSGBOX_DEFAULT
# 738 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 739 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 740 "data/maps/daycarebase/scripts.pory"
	release
	end

BattleVsPikachu_4:
# 760 "data/maps/daycarebase/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 761 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 762 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_TRANS_PIKACHU
# 763 "data/maps/daycarebase/scripts.pory"
	delay 15
# 764 "data/maps/daycarebase/scripts.pory"
	dittotransform SPECIES_PIKACHU
# 765 "data/maps/daycarebase/scripts.pory"
	playse MUS_LEVEL_UP
# 766 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_2, MSGBOX_DEFAULT
# 767 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 768 "data/maps/daycarebase/scripts.pory"
	dittotransform VAR_TEMP_0
# 769 "data/maps/daycarebase/scripts.pory"
	givemon SPECIES_PIKACHU, 25, move1 = MOVE_NUZZLE, move2 = MOVE_IRON_TAIL, move3 = MOVE_SPARK, move4 = MOVE_FLASH
# 770 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 771 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PIKACHU, EMOTE_HAPPY
# 772 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_3, MSGBOX_DEFAULT
# 773 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 774 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 775 "data/maps/daycarebase/scripts.pory"
	fadenewbgm MUS_PMD_HEARTWARMING
# 776 "data/maps/daycarebase/scripts.pory"
	release
	end


ChanseyHeal::
# 782 "data/maps/daycarebase/scripts.pory"
	lock
# 783 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 784 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_CHANSEY_INTRO, ChanseyHeal_1
# 832 "data/maps/daycarebase/scripts.pory"
	lock
# 833 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 834 "data/maps/daycarebase/scripts.pory"
	speakername ChanseyHeal_Text_0
# 835 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 836 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_6, MSGBOX_DEFAULT
# 837 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 838 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_CHANSEY_INTRO
# 839 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 840 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_1:
# 786 "data/maps/daycarebase/scripts.pory"
	speakername ChanseyHeal_Text_0
# 787 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 788 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_1, MSGBOX_DEFAULT
# 789 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 790 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_2, MSGBOX_YESNO
# 791 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 792 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyHeal_4
# 822 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 823 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_5, MSGBOX_AUTOCLOSE
# 824 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 825 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 826 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_4:
# 794 "data/maps/daycarebase/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 795 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyHeal_7
# 812 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 813 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_4, MSGBOX_AUTOCLOSE
# 814 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 815 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 816 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_7:
# 797 "data/maps/daycarebase/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 798 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 799 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 800 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_HEAL
# 801 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 802 "data/maps/daycarebase/scripts.pory"
	special HealPlayerParty
# 803 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 804 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_3, MSGBOX_AUTOCLOSE
# 805 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 806 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 807 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_Ditto::
# 847 "data/maps/daycarebase/scripts.pory"
	lock
# 848 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 849 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_DITTO_INTRO, DaycareBase_Ditto_1
# 889 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_1
# 890 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 891 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_4, MSGBOX_DEFAULT
# 892 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 893 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_DITTO_INTRO
# 894 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 895 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 896 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_1:
# 851 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_XFORMS_TALKED_TO_DITTO, DaycareBase_Ditto_4
# 877 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_1
# 878 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 879 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_3, MSGBOX_DEFAULT
# 880 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 881 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 882 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_4:
# 853 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_0, MSGBOX_YESNO
# 854 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareBase_Ditto_7
# 865 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_1
# 866 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 867 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_2, MSGBOX_AUTOCLOSE
# 868 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 869 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 870 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 871 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 872 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_7:
# 856 "data/maps/daycarebase/scripts.pory"
	dittotransform SPECIES_DITTO
# 857 "data/maps/daycarebase/scripts.pory"
	special OpenPCMoveMons
# 858 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 859 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 860 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycarebaseDitto_intro_trigger::
# 903 "data/maps/daycarebase/scripts.pory"
	goto_if_unset FLAG_DITTO_INTRO, DaycarebaseDitto_intro_trigger_1
	end

DaycarebaseDitto_intro_trigger_1:
# 905 "data/maps/daycarebase/scripts.pory"
	lock
# 906 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 907 "data/maps/daycarebase/scripts.pory"
	applymovement DittoIntro, Common_Movement_ExclamationMark
# 908 "data/maps/daycarebase/scripts.pory"
	waitmovement DittoIntro
# 909 "data/maps/daycarebase/scripts.pory"
	applymovement DittoIntro, DaycareIntro_Movement_2
# 910 "data/maps/daycarebase/scripts.pory"
	waitmovement DittoIntro
# 911 "data/maps/daycarebase/scripts.pory"
	applymovement LOCALID_PLAYER, DaycareIntro_Movement_3
# 912 "data/maps/daycarebase/scripts.pory"
	waitmovement LOCALID_PLAYER
# 913 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_1
# 914 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 915 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_4, MSGBOX_DEFAULT
# 916 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 917 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 918 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_FindLuckyEgg::
# 928 "data/maps/daycarebase/scripts.pory"
	finditem ITEM_LUCKY_EGG
	return


DaycareBase_FindLuckyEgg1::
# 932 "data/maps/daycarebase/scripts.pory"
	lock
# 933 "data/maps/daycarebase/scripts.pory"
	removeobject luckyegg1
# 934 "data/maps/daycarebase/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 935 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 936 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_ITEM_DAYCARE_BASE1
# 937 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_FindLuckyEgg2::
# 942 "data/maps/daycarebase/scripts.pory"
	lock
# 943 "data/maps/daycarebase/scripts.pory"
	removeobject luckyegg2
# 944 "data/maps/daycarebase/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 945 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 946 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_ITEM_DAYCARE_EAST1
# 947 "data/maps/daycarebase/scripts.pory"
	release
	end


# 13 "data/maps/daycarebase/scripts.pory"
DaycareIntro_Movement_0:
# 13 "data/maps/daycarebase/scripts.pory"
	walk_right
	step_end

# 15 "data/maps/daycarebase/scripts.pory"
DaycareIntro_Movement_1:
# 15 "data/maps/daycarebase/scripts.pory"
	walk_down
# 15 "data/maps/daycarebase/scripts.pory"
	walk_down
# 15 "data/maps/daycarebase/scripts.pory"
	walk_down
# 15 "data/maps/daycarebase/scripts.pory"
	walk_down
# 15 "data/maps/daycarebase/scripts.pory"
	walk_down
# 15 "data/maps/daycarebase/scripts.pory"
	walk_down
# 15 "data/maps/daycarebase/scripts.pory"
	walk_down
	step_end

# 19 "data/maps/daycarebase/scripts.pory"
DaycareIntro_Movement_2:
# 19 "data/maps/daycarebase/scripts.pory"
	face_right
	step_end

# 20 "data/maps/daycarebase/scripts.pory"
DaycareIntro_Movement_3:
# 20 "data/maps/daycarebase/scripts.pory"
	face_left
	step_end

# 27 "data/maps/daycarebase/scripts.pory"
DaycareIntro_Movement_4:
# 27 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 27 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 27 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 27 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 27 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 27 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 27 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 27 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
	step_end

# 242 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_0:
# 242 "data/maps/daycarebase/scripts.pory"
	face_player
	step_end

# 273 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_1:
# 273 "data/maps/daycarebase/scripts.pory"
	face_down
	step_end

# 275 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_2:
# 275 "data/maps/daycarebase/scripts.pory"
	walk_down
# 275 "data/maps/daycarebase/scripts.pory"
	walk_down
	step_end

# 285 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_3:
# 285 "data/maps/daycarebase/scripts.pory"
	walk_right
# 285 "data/maps/daycarebase/scripts.pory"
	walk_right
# 285 "data/maps/daycarebase/scripts.pory"
	walk_right
# 285 "data/maps/daycarebase/scripts.pory"
	walk_right
# 285 "data/maps/daycarebase/scripts.pory"
	walk_right
	step_end

# 291 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_4:
# 291 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 291 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 291 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 291 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 291 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
	step_end

# 293 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_5:
# 293 "data/maps/daycarebase/scripts.pory"
	walk_fast_up
	step_end

DaycareIntro_Text_0:
# 9 "data/maps/daycarebase/scripts.pory"
	.string "Daycare Man$"

DaycareIntro_Text_1:
# 10 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pDespite what trainers may see from\nRoute 117, the Daycare is a vast\larea filled with biomes for nearly\levery type of Pokémon!\pExplore the Daycare and interact\nwith many of the Pokémon we are\lraising.\pYou never know what friends you\nwill make along the way!\pNow, I do expect you to be holding\nan Egg at some point... Every Ditto\lI've raised has produced one.\pNow you two, run along and do what\nyou need to do to get that Egg!\pWhen you're holding an Egg,\ncome back and talk to me and\lwe can get it to your trainer.$"

DaycareIntro_Text_2:
# 24 "data/maps/daycarebase/scripts.pory"
	.string "Vaporeon$"

DaycareIntro_Text_3:
# 25 "data/maps/daycarebase/scripts.pory"
	.string "I don't care what the Daycare Man\nsays, I'm not interested going on\lan Egg hunt.\pJust because Brendan put us in here\ntogether doesn't mean I have to\lhelp you.\pI'm going for a swim.\pYou'll just have to find that Egg\non your own.$"

ShrinkToPikachuCave_Text_0:
# 47 "data/maps/daycarebase/scripts.pory"
	.string "There is a tiny hole that you can\nsqueeze through.\pWould you like to squeeze through it?$"

ShrinkToPikachuCave_Text_1:
# 61 "data/maps/daycarebase/scripts.pory"
	.string "There is a tiny hole.\pA small Pokémon may be able to\nsqueeze through it.$"

MimikyuDialog_Text_0:
# 98 "data/maps/daycarebase/scripts.pory"
	.string "Pikachu$"

MimikyuDialog_Text_1:
# 100 "data/maps/daycarebase/scripts.pory"
	.string "Hey!\pI'm just a normal Pikachu in my usual\nspot!$"

MimikyuDialog_Text_2:
# 102 "data/maps/daycarebase/scripts.pory"
	.string "Mimikyu$"

MimikyuDialog_Text_3:
# 104 "data/maps/daycarebase/scripts.pory"
	.string "Oh...\nYou caught me.\pI wish I could disguise myself as\nwell as you can...\pMaybe then people would like me more...$"

MimikyuDialog_Text_4:
# 116 "data/maps/daycarebase/scripts.pory"
	.string "I've always looked up to you\nPikachu.\pI hope my disguise doesn't insult\nyou..$"

MimikyuDialog_Text_5:
# 130 "data/maps/daycarebase/scripts.pory"
	.string "Oh!\nA real life Pikachu!\pYou are my idol.\pPlease take this.\n$"

KecleonDialog_Text_0:
# 157 "data/maps/daycarebase/scripts.pory"
	.string "Kecleon$"

KecleonDialog_Text_1:
# 159 "data/maps/daycarebase/scripts.pory"
	.string "Where do Eggs come from?\pMy trainer left me here a long time\nago and I've yet to find one.\pDo you know?\pI've always heard of Dittos\nholding onto Eggs...$"

KecleonDialog_Text_2:
# 169 "data/maps/daycarebase/scripts.pory"
	.string "Where do Eggs come from?\pMy trainer left me here a long time\nago and I've yet to find one.$"

AzumarillDialog_Text_0:
# 183 "data/maps/daycarebase/scripts.pory"
	.string "Azumarill$"

AzumarillDialog_Text_1:
# 185 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pYou'll fit in well here.$"

AzumarillDialog_Text_2:
# 195 "data/maps/daycarebase/scripts.pory"
	.string "Oh!\nThank goodness you aren't a Ditto...\pMy trainer keeps putting me in here\nwith Dittos hoping we'll find an\lEgg.\pThey gave me this Sea Incence,\nbut I'm not sure how that would\lhelp us on our hunt...$"

DaycareOldManDialog_Text_0:
# 213 "data/maps/daycarebase/scripts.pory"
	.string "Back from exploring the Daycare?\pAh!\nBut where is your Egg?\pKeep doing whatever it is you\nDittos do and come back when\lyou have one!$"

DaycareOldManDialog_Text_1:
# 220 "data/maps/daycarebase/scripts.pory"
	.string "Why, who are you?\pI'm looking for a Ditto.\n$"

DaycareOldManDialog_Text_2:
# 229 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pDespite what trainers may see from\nRoute 117, the Daycare is a vast\larea filled with biomes for nearly\levery type of Pokémon!\pExplore the Daycare and interact\nwith many of the Pokémon we are\lraising.\pYou never know what friends you\nwill make along the way!\pNow, I do expect you to be holding\nan Egg at some point... Every Ditto\lI've raised has produced one.\pWhen you're holding an Egg,\ncome back and talk to me and\lwe can get it to your trainer.$"

DaycareOldManDialog_Text_3:
# 247 "data/maps/daycarebase/scripts.pory"
	.string "Why what do we have here?\nGoodness!\pYou're holding an Egg!\pWherever did you get this?\pIt's the darndest thing.\pYou Pokémon always seem to find\nthese Eggs, but I can never figure\lout where they come from.\pWould you like to give me the Egg\nso that I may give it to your\lTrainer?$"

DaycareOldManDialog_Text_4:
# 253 "data/maps/daycarebase/scripts.pory"
	.string "Ditto handed over the Egg.\n$"

DaycareOldManDialog_Text_5:
# 257 "data/maps/daycarebase/scripts.pory"
	.string "Thank your for the Egg!\pAs a reward, take this EXP!\n$"

DaycareOldManDialog_Text_6:
# 267 "data/maps/daycarebase/scripts.pory"
	.string "Ditto grew to level 26.\n$"

DaycareOldManDialog_Text_7:
# 271 "data/maps/daycarebase/scripts.pory"
	.string "With this Egg, I can now fulfill\nmy duties.$"

DaycareOldManDialog_Text_8:
# 296 "data/maps/daycarebase/scripts.pory"
	.string "Ah, it's you!\pWe were raising your Pokémon\nand my goodness, were we surprised!\pYour Pokémon had an Egg!\pWe don't know how it got there,\nbut your Pokémon had it.\pYou do want it, yes?\n$"

DaycareOldManDialog_Text_9:
# 309 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR BLUE}{SHADOW LIGHT_BLUE}0\n{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Lucky Eggs found: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_2}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pAmazing!\pYou beat the game with 0 whiteouts\nand found all of the Lucky Eggs!\pCongratulations!\pStart a new game for a reward!$"

DaycareOldManDialog_Text_10:
# 315 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR BLUE}{SHADOW LIGHT_BLUE}0{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_2}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pAmazing!\pYou beat the game with 0 whiteouts!\pKeep searching for the remaining\nLucky Eggs and defeat Mew again to\l100% the game!$"

DaycareOldManDialog_Text_11:
# 321 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR BLUE}{SHADOW LIGHT_BLUE}0{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {COLOR RED}{SHADOW LIGHT_RED}0{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pAmazing!\pYou beat the game with 0 whiteouts!\pKeep searching for the remaining\nLucky Eggs and defeat Mew again to\l100% the game!$"

DaycareOldManDialog_Text_12:
# 327 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {COLOR RED}{SHADOW LIGHT_RED}0{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pGreat job!\pYou can continue this save and\nfind the remaining Lucky eggs.\pChallenge Mew again and speak\nto the Daycare Man.\pStart a new run to try to win\nwithout whiting out.$"

DaycareOldManDialog_Text_13:
# 333 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_2}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pGreat Job!\nYou found all of the Lucky Eggs!\pStart a new run to try to win\nwithout whiting out.$"

DaycareOldManDialog_Text_14:
# 339 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_2}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pGreat job!\pYou can continue this save and\nfind the remaining Lucky eggs.\pChallenge Mew again and speak\nto the Daycare Man.\pStart a new run to try to win\nwithout whiting out.$"

DaycareOldManDialog_Text_15:
# 352 "data/maps/daycarebase/scripts.pory"
	.string "The Daycare Man ripped the Egg\nfrom Ditto's clutches.$"

VaporeonDialog_Text_0:
# 468 "data/maps/daycarebase/scripts.pory"
	.string "Ugh!\nYou again.\pEveryone here keeps asking me to\nhelp them search for Eggs.\pCan't a Vaporeon just relax?$"

LaprasDialog_Text_0:
# 479 "data/maps/daycarebase/scripts.pory"
	.string "Lapras$"

LaprasDialog_Text_1:
# 481 "data/maps/daycarebase/scripts.pory"
	.string "I love the Daycare!\pIt's so peaceful and quiet here.\pI can just float around all day\nand relax.\pThose waterfalls are pretty\nvicious, I won't go near them.\pI've heard that Dragonair can\neasily scale even the largest\lof waterfalls!$"

LinooneDialog_Text_0:
# 493 "data/maps/daycarebase/scripts.pory"
	.string "Linoone$"

LinooneDialog_Text_1:
# 495 "data/maps/daycarebase/scripts.pory"
	.string "The Daycare is huge!\pIt's a bit scary to expore,\nso I stay up here.\pRiolu is way more brave than I\nam and has explored the entirety\lof the Daycare.\pYou should talk with Riolu if\nyou get lost!\pI'm sure they can help!\n$"

LinooneDialog_Text_2:
# 507 "data/maps/daycarebase/scripts.pory"
	.string "Those Dittos really freak me out.\pThey could be any one of use right\nnow...\pEven you!... or me!\n$"

BulbsaurDialog_Text_0:
# 518 "data/maps/daycarebase/scripts.pory"
	.string "Bulbasaur$"

BulbsaurDialog_Text_1:
# 520 "data/maps/daycarebase/scripts.pory"
	.string "You want to know where Eggs\ncome from?\pI heard that a Pokémon needs\nto go on a great adventure to\lmeet a shapeshifting Pokémon.\pIf you can best them, they will\ngive you an egg!\pAt least, that's what Venusaur\ntold me...$"

CombeeDialog_Text_0:
# 530 "data/maps/daycarebase/scripts.pory"
	.string "Combee$"

CombeeDialog_Text_1:
# 532 "data/maps/daycarebase/scripts.pory"
	.string "I've been in this Daycare\nfor ages!\pI've flown all around and\npollenated so many flowers\lbut I still haven't gained a\lsingle level.\pI'm beginning to believe gaining\nEXP here is nothing more\lthan a big ole myth!$"

Porygon2Dialog_Text_0:
# 542 "data/maps/daycarebase/scripts.pory"
	.string "Porygon2$"

Porygon2Dialog_Text_1:
# 544 "data/maps/daycarebase/scripts.pory"
	.string "Another Ditto...\pI'm actually a Ditto too,\nI just prefer this look.\pThe Daycare population must be at\nleast 75 percent Dittos!\pMost Dittos will take on different\nforms.\pYou won't be able to transform\ninto a form that another Ditto has\ltaken on though.$"

ScytherDialog_Text_0:
# 556 "data/maps/daycarebase/scripts.pory"
	.string "Scyther$"

ScytherDialog_Text_1:
# 558 "data/maps/daycarebase/scripts.pory"
	.string "One in every {COLOR BLUE}{SHADOW LIGHT_BLUE}fifty {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Dittos that I\nsee here are blue.$"

ScytherDialog_Text_2:
# 562 "data/maps/daycarebase/scripts.pory"
	.string "Oh hey!\pYou're one of the blue ones!\pYou must've gotten really lucky!$"

ScytherDialog_Text_3:
# 571 "data/maps/daycarebase/scripts.pory"
	.string "One in every {COLOR BLUE}{SHADOW LIGHT_BLUE}fifty {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Dittos that I\nsee here are blue.\pThere must be some reason trainers\nput so many in here...$"

RioluDialog_Text_0:
# 586 "data/maps/daycarebase/scripts.pory"
	.string "Riolu$"

RioluDialog_Text_1:
# 588 "data/maps/daycarebase/scripts.pory"
	.string "Back with a Lucky Egg?\n$"

RioluDialog_Text_2:
# 594 "data/maps/daycarebase/scripts.pory"
	.string "Great!\pI can tell about the habitat and\nability of a Pokémon in the Daycare.$"

RioluDialog_Text_3:
# 596 "data/maps/daycarebase/scripts.pory"
	.string "Would you like to exchange a\nLucky Egg?$"

RioluDialog_Text_4:
# 600 "data/maps/daycarebase/scripts.pory"
	.string "Which Pokémon would you like to\nknow more about?$"

RioluDialog_Text_5:
# 602 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine$"

RioluDialog_Text_6:
# 602 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou$"

RioluDialog_Text_7:
# 602 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly$"

RioluDialog_Text_8:
# 602 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair$"

RioluDialog_Text_9:
# 602 "data/maps/daycarebase/scripts.pory"
	.string "Marill$"

RioluDialog_Text_10:
# 602 "data/maps/daycarebase/scripts.pory"
	.string "Machamp$"

RioluDialog_Text_11:
# 602 "data/maps/daycarebase/scripts.pory"
	.string "Noivern$"

RioluDialog_Text_12:
# 602 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn$"

RioluDialog_Text_13:
# 602 "data/maps/daycarebase/scripts.pory"
	.string "Lurantis$"

RioluDialog_Text_14:
# 602 "data/maps/daycarebase/scripts.pory"
	.string "Weavile$"

RioluDialog_Text_15:
# 605 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine can be found deep in the\nVolcano.\pIt can run really fast and scale\nhills that would normally be to\lslippery to climb!$"

RioluDialog_Text_16:
# 613 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou can be found in a cave\non the water in the desert.\pIt can dive deep underwater.\n$"

RioluDialog_Text_17:
# 621 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly can be found in the\nDaycare's flowers to the west.\pIt's a tiny Pokémon that can\nfit through small openings.$"

RioluDialog_Text_18:
# 629 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair can be found at the lake.\pIt can be a bit cryptic so it\nmay be difficult to reach.\pIt can scale large waterfalls\nwith ease.$"

RioluDialog_Text_19:
# 637 "data/maps/daycarebase/scripts.pory"
	.string "Marill can be found at the lake,\nusually by the shore.\pIt's a bit shy so it may be hiding.\pIt can float in any body of water.\n$"

RioluDialog_Text_20:
# 645 "data/maps/daycarebase/scripts.pory"
	.string "Machamp likes to train deep in\nthe mountains.\pIt is a very tough and solitary\nPokémon.\pIts strength can move large\nboulders.$"

RioluDialog_Text_21:
# 653 "data/maps/daycarebase/scripts.pory"
	.string "Noivern hangs out in a dark\ncave above the Daycare Falls.\pIt's quite a powerful Pokémon,\nso be prepared for a fight.\pIt can soar through the air,\nreaching places unreachable by\lnon_flying types.$"

RioluDialog_Text_22:
# 661 "data/maps/daycarebase/scripts.pory"
	.string "Pikachu is standing on that cliff\nright over there.\pIts electricity can light up even\nthe darkest of caves.$"

RioluDialog_Text_23:
# 669 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn lives in the desert.\pIt's quite a friendly Pokémon,\nbut don't upset it!\pIt is strong enough to smash\nsolid rocks!$"

RioluDialog_Text_24:
# 677 "data/maps/daycarebase/scripts.pory"
	.string "Lurantis has been spending time\nacross the water in the mountains.\pIts sharp limbs can cut through\nsmall trees.$"

RioluDialog_Text_25:
# 685 "data/maps/daycarebase/scripts.pory"
	.string "Weavile is quite the ninja.\pIt spends time in the tall trees\nin the jungle.\pIt demands a fierce challenger\nto battle it.\pIts agility allows it to cross\neven the smallest of walkways.$"

RioluDialog_Text_26:
# 695 "data/maps/daycarebase/scripts.pory"
	.string "Oh.\pWhat else are you gonna do\nwith that egg?$"

RioluDialog_Text_27:
# 707 "data/maps/daycarebase/scripts.pory"
	.string "No?\nCome back when you do!$"

RioluDialog_Text_28:
# 719 "data/maps/daycarebase/scripts.pory"
	.string "Hiya!\pI'm Riolu!\pI've visited every biome the\nDaycare has to offer.\lI know it like the back of my paw!\pIf you need guidance on where a\ncertain Pokémon might be,\lI'm your Pokémon!\pAlthough I won't do it for free...\pBring me Lucky Eggs, and I'll tell\nyou what I know.$"

BattleVsPikachu_Text_0:
# 737 "data/maps/daycarebase/scripts.pory"
	.string "You really lit me up.\pBest of luck on your journey!\n$"

BattleVsPikachu_Text_1:
# 752 "data/maps/daycarebase/scripts.pory"
	.string "A Ditto!\pYou must be on your quest to obtain\nyour egg.\pDefeat me in battle and I'll allow\nyou to transform into me!$"

BattleVsPikachu_Text_2:
# 766 "data/maps/daycarebase/scripts.pory"
	.string "You have gained the ability to\ntransform into Pikachu!$"

BattleVsPikachu_Text_3:
# 772 "data/maps/daycarebase/scripts.pory"
	.string "How electrifying!\pElectric_type moves are powerful\nagainst Water_type Pokémon.\pThey typically spend their time in\nthe Lake Biome here.$"

ChanseyHeal_Text_0:
# 786 "data/maps/daycarebase/scripts.pory"
	.string "Chansey$"

ChanseyHeal_Text_1:
# 788 "data/maps/daycarebase/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.$"

ChanseyHeal_Text_2:
# 790 "data/maps/daycarebase/scripts.pory"
	.string "Would you like to heal?$"

ChanseyHeal_Text_3:
# 804 "data/maps/daycarebase/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyHeal_Text_4:
# 813 "data/maps/daycarebase/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyHeal_Text_5:
# 823 "data/maps/daycarebase/scripts.pory"
	.string "Oh, okay then.$"

ChanseyHeal_Text_6:
# 836 "data/maps/daycarebase/scripts.pory"
	.string "You look new!\pHave you found any Lucky Eggs yet?\pThey aren't quite the Mythical Egg\nyou are in search of, but many\lPokémon around the daycare will\loffer trades or services for them!\pDon't be afraid to use them!\pI'll offer to bring you back to\nfull health for just one!$"

DaycareBase_Ditto_Text_0:
# 853 "data/maps/daycarebase/scripts.pory"
	.string "Would you like to change out your\ntransformation options?$"

DaycareBase_Ditto_Text_1:
# 865 "data/maps/daycarebase/scripts.pory"
	.string "Ditto$"

DaycareBase_Ditto_Text_2:
# 867 "data/maps/daycarebase/scripts.pory"
	.string "Come back anytime!$"

DaycareBase_Ditto_Text_3:
# 879 "data/maps/daycarebase/scripts.pory"
	.string "Ditto!\pYou can transform into any\lPokémon you defeat in battle!\pThis does only apply to Pokémon\nwho are not already using\lTransform...\pPress the {SELECT_BUTTON} button to\nopen your transformation menu.\pYou can also view more information\nabout the Pokémon you can\ltransform into by opening your\lTransformation Party from the\l{START_BUTTON} menu.\pTo swap out your transformation\noptions, press the {L_BUTTON} button!$"

DaycareBase_Ditto_Text_4:
# 891 "data/maps/daycarebase/scripts.pory"
	.string "Hello there fellow Ditto!\pDaycare Man asked you to get an Egg\nfor him, did he?\pWell, you're about to learn the\nthe secret of how we Dittos are\lalways found holding Eggs.\pIt'll be quite the adventure!\pDon't forget, you are a Ditto,\nso you can transform into any\lPokémon you defeat in battle!\pThis does only apply to Pokémon\nwho are not already using\lTransform...\pPress the {SELECT_BUTTON} button to\nopen your transformation menu.\pYou can also view more information\nabout the Pokémon you can\ltransform into by opening your\lTransformation Party from the\l{START_BUTTON} menu.\pTo swap out your transformation\noptions, press the {L_BUTTON} button!$"
