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


ShrinkToPikachuCave2::
# 69 "data/maps/daycarebase/scripts.pory"
	lock
# 70 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinkToPikachuCave2_1
# 86 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_1, MSGBOX_DEFAULT
# 87 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 88 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinkToPikachuCave2_1:
# 72 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_0, MSGBOX_YESNO
# 73 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinkToPikachuCave2_4
# 79 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 80 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinkToPikachuCave2_4:
# 75 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_PIKACHU_SHRINK_CAVE, 1
	return


ShrinktoMausholdCave::
# 94 "data/maps/daycarebase/scripts.pory"
	lock
# 95 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinktoMausholdCave_1
# 113 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_1, MSGBOX_DEFAULT
# 114 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 115 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinktoMausholdCave_1:
# 97 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_0, MSGBOX_YESNO
# 98 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinktoMausholdCave_4
# 106 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 107 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinktoMausholdCave_4:
# 100 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_MAUSHOLD_SHRINK, 0
# 101 "data/maps/daycarebase/scripts.pory"
	applymovement LOCALID_PLAYER, ShrinktoMausholdCave_Movement_0
# 102 "data/maps/daycarebase/scripts.pory"
	waitmovement LOCALID_PLAYER
	return


MimikyuDialog::
# 121 "data/maps/daycarebase/scripts.pory"
	lock
# 122 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 123 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq MimikyuDialog_1
# 137 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_PIKACHU
	goto_if_eq MimikyuDialog_2
# 170 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 171 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYUTOP, EMOTE_NORMAL
# 172 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_DEFAULT
# 173 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 174 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 175 "data/maps/daycarebase/scripts.pory"
	release
	end

MimikyuDialog_1:
# 125 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 126 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYUTOP, EMOTE_NORMAL
# 127 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_DEFAULT
# 128 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 129 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_2
# 130 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYU, EMOTE_ANGRY
# 131 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_3, MSGBOX_DEFAULT
# 132 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 133 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 134 "data/maps/daycarebase/scripts.pory"
	release
	end

MimikyuDialog_2:
# 139 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_MIMIKYU_LUCKYEGG, MimikyuDialog_6
# 151 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 152 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYUTOP, EMOTE_NORMAL
# 153 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_DEFAULT
# 154 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 155 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_2
# 156 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYU, EMOTE_ANGRY
# 157 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_5, MSGBOX_DEFAULT
# 158 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 159 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 160 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 161 "data/maps/daycarebase/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 162 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_MIMIKYU_LUCKYEGG
# 163 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 164 "data/maps/daycarebase/scripts.pory"
	release
	end

MimikyuDialog_6:
# 141 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_2
# 142 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYU, EMOTE_ANGRY
# 143 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_4, MSGBOX_DEFAULT
# 144 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 145 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 146 "data/maps/daycarebase/scripts.pory"
	release
	end


KecleonDialog::
# 180 "data/maps/daycarebase/scripts.pory"
	lock
# 181 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 182 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq KecleonDialog_1
# 194 "data/maps/daycarebase/scripts.pory"
	speakername KecleonDialog_Text_0
# 195 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_KECLEON, EMOTE_NORMAL
# 196 "data/maps/daycarebase/scripts.pory"
	msgbox KecleonDialog_Text_2, MSGBOX_DEFAULT
# 197 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 198 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 199 "data/maps/daycarebase/scripts.pory"
	release
	end

KecleonDialog_1:
# 184 "data/maps/daycarebase/scripts.pory"
	speakername KecleonDialog_Text_0
# 185 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_KECLEON, EMOTE_NORMAL
# 186 "data/maps/daycarebase/scripts.pory"
	msgbox KecleonDialog_Text_1, MSGBOX_DEFAULT
# 187 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 188 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 189 "data/maps/daycarebase/scripts.pory"
	release
	end


AzumarillDialog::
# 206 "data/maps/daycarebase/scripts.pory"
	lock
# 207 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 208 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq AzumarillDialog_1
# 220 "data/maps/daycarebase/scripts.pory"
	speakername AzumarillDialog_Text_0
# 221 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_AZUMARILL, EMOTE_ANGRY
# 222 "data/maps/daycarebase/scripts.pory"
	msgbox AzumarillDialog_Text_2, MSGBOX_DEFAULT
# 223 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 224 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 225 "data/maps/daycarebase/scripts.pory"
	release
	end

AzumarillDialog_1:
# 210 "data/maps/daycarebase/scripts.pory"
	speakername AzumarillDialog_Text_0
# 211 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_AZUMARILL, EMOTE_NORMAL
# 212 "data/maps/daycarebase/scripts.pory"
	msgbox AzumarillDialog_Text_1, MSGBOX_DEFAULT
# 213 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 214 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 215 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareOldManDialog::
# 231 "data/maps/daycarebase/scripts.pory"
	lock
# 232 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 233 "data/maps/daycarebase/scripts.pory"
	goto_if_unset FLAG_BEAT_MEW, DaycareOldManDialog_1
# 265 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq DaycareOldManDialog_7
# 477 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 478 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_1, MSGBOX_DEFAULT
# 479 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 480 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_1:
# 235 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_OLDMAN_INTRO, DaycareOldManDialog_4
# 255 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 256 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_2, MSGBOX_DEFAULT
# 257 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 258 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_OLDMAN_INTRO
# 259 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_4:
# 237 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq DaycareOldManDialog_10
# 246 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 247 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_1, MSGBOX_DEFAULT
# 248 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 249 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_7:
# 267 "data/maps/daycarebase/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 268 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 269 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_0
# 270 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 271 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, Common_Movement_ExclamationMark
# 272 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 273 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 274 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_3, MSGBOX_YESNO
# 275 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 276 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareOldManDialog_13
# 377 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 378 "data/maps/daycarebase/scripts.pory"
	playse SE_M_SCRATCH
# 379 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_15, MSGBOX_DEFAULT
# 380 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 381 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 382 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 383 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_5, MSGBOX_DEFAULT
# 384 "data/maps/daycarebase/scripts.pory"
	removeobject BrendanBiking
# 385 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_HIDE_BRENDAN_BIKE
# 386 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 387 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 388 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP
# 389 "data/maps/daycarebase/scripts.pory"
	waitse
# 390 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP_MAX
# 391 "data/maps/daycarebase/scripts.pory"
	waitse
# 392 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 393 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_6, MSGBOX_DEFAULT
# 394 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 395 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 396 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 397 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_7, MSGBOX_AUTOCLOSE
# 398 "data/maps/daycarebase/scripts.pory"
	special SpawnCameraObject
# 399 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_1
# 400 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 401 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_2
# 402 "data/maps/daycarebase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DaycareOldManDialog_Movement_2
# 403 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 404 "data/maps/daycarebase/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 405 "data/maps/daycarebase/scripts.pory"
	delay 60
# 406 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 24
# 407 "data/maps/daycarebase/scripts.pory"
	delay 60
# 408 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SHOW_BRENDAN_OUTRO
# 409 "data/maps/daycarebase/scripts.pory"
	addobject Brendan
# 410 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK, 24
# 411 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_3
# 412 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 413 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 414 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, Common_Movement_ExclamationMark
# 415 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 416 "data/maps/daycarebase/scripts.pory"
	delay 30
# 417 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_4
# 418 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 419 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_5
# 420 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 421 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 422 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_8, MSGBOX_DEFAULT
# 423 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 424 "data/maps/daycarebase/scripts.pory"
	delay 30
# 425 "data/maps/daycarebase/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 426 "data/maps/daycarebase/scripts.pory"
	delay 60
# 427 "data/maps/daycarebase/scripts.pory"
	special CountLuckyEggs
# 428 "data/maps/daycarebase/scripts.pory"
	special GetWhiteoutCount
# 429 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_0, VAR_WHITEOUT_COUNT
# 430 "data/maps/daycarebase/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_0
# 431 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_1, VAR_LUCKYEGG_COUNT
# 432 "data/maps/daycarebase/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_1
# 433 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_61
DaycareOldManDialog_58:
# 439 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_57
DaycareOldManDialog_54:
# 445 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_53
DaycareOldManDialog_51:
# 451 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_ne DaycareOldManDialog_50
DaycareOldManDialog_48:
# 457 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_ne DaycareOldManDialog_47
DaycareOldManDialog_46:
# 465 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_14, MSGBOX_DEFAULT
# 466 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 467 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
DaycareOldManDialog_40:
# 469 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 470 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_BEAT_MEW
# 471 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SHOW_BRENDAN_OUTRO
# 472 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_HIDE_BRENDAN_BIKE
# 473 "data/maps/daycarebase/scripts.pory"
	special GameClear
	return

DaycareOldManDialog_10:
# 239 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 240 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_0, MSGBOX_DEFAULT
# 241 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 242 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_13:
# 278 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 279 "data/maps/daycarebase/scripts.pory"
	playse SE_ITEMFINDER
# 280 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_4, MSGBOX_DEFAULT
# 281 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 282 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 283 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 284 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_5, MSGBOX_DEFAULT
# 285 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 286 "data/maps/daycarebase/scripts.pory"
	removeobject BrendanBiking
# 287 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_HIDE_BRENDAN_BIKE
# 288 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 289 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP
# 290 "data/maps/daycarebase/scripts.pory"
	waitse
# 291 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP_MAX
# 292 "data/maps/daycarebase/scripts.pory"
	waitse
# 293 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 294 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_6, MSGBOX_DEFAULT
# 295 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 296 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 297 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 298 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_7, MSGBOX_AUTOCLOSE
# 299 "data/maps/daycarebase/scripts.pory"
	special SpawnCameraObject
# 300 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_1
# 301 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 302 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_2
# 303 "data/maps/daycarebase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DaycareOldManDialog_Movement_2
# 304 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 305 "data/maps/daycarebase/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 306 "data/maps/daycarebase/scripts.pory"
	delay 60
# 307 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 24
# 308 "data/maps/daycarebase/scripts.pory"
	delay 60
# 309 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SHOW_BRENDAN_OUTRO
# 310 "data/maps/daycarebase/scripts.pory"
	addobject Brendan
# 311 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK, 24
# 312 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_3
# 313 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 314 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 315 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, Common_Movement_ExclamationMark
# 316 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 317 "data/maps/daycarebase/scripts.pory"
	delay 30
# 318 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_4
# 319 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 320 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_5
# 321 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 322 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 323 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_8, MSGBOX_DEFAULT
# 324 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 325 "data/maps/daycarebase/scripts.pory"
	delay 30
# 326 "data/maps/daycarebase/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 327 "data/maps/daycarebase/scripts.pory"
	delay 60
# 328 "data/maps/daycarebase/scripts.pory"
	special CountLuckyEggs
# 329 "data/maps/daycarebase/scripts.pory"
	special GetWhiteoutCount
# 330 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_0, VAR_WHITEOUT_COUNT
# 331 "data/maps/daycarebase/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_0
# 332 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_1, VAR_LUCKYEGG_COUNT
# 333 "data/maps/daycarebase/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_1
# 334 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_37
DaycareOldManDialog_34:
# 340 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_33
DaycareOldManDialog_30:
# 346 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_29
DaycareOldManDialog_27:
# 352 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_ne DaycareOldManDialog_26
DaycareOldManDialog_24:
# 358 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_ne DaycareOldManDialog_23
DaycareOldManDialog_22:
# 366 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_14, MSGBOX_DEFAULT
# 367 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 368 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
DaycareOldManDialog_16:
# 370 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 371 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_BEAT_MEW
# 372 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SHOW_BRENDAN_OUTRO
# 373 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_HIDE_BRENDAN_BIKE
# 374 "data/maps/daycarebase/scripts.pory"
	special GameClear
	return

DaycareOldManDialog_17:
# 336 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_9, MSGBOX_DEFAULT
# 337 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 338 "data/maps/daycarebase/scripts.pory"
	special ForceShinyDitto
	goto DaycareOldManDialog_16

DaycareOldManDialog_18:
# 342 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_10, MSGBOX_DEFAULT
# 343 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 344 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_16

DaycareOldManDialog_19:
# 348 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_11, MSGBOX_DEFAULT
# 349 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 350 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_16

DaycareOldManDialog_20:
# 354 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_12, MSGBOX_DEFAULT
# 355 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 356 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_16

DaycareOldManDialog_21:
# 360 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_13, MSGBOX_DEFAULT
# 361 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 362 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_16

DaycareOldManDialog_23:
# 358 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_eq DaycareOldManDialog_21
	goto DaycareOldManDialog_22

DaycareOldManDialog_26:
# 352 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_eq DaycareOldManDialog_20
	goto DaycareOldManDialog_24

DaycareOldManDialog_29:
# 346 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_eq DaycareOldManDialog_19
	goto DaycareOldManDialog_27

DaycareOldManDialog_32:
# 340 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_gt DaycareOldManDialog_18
	goto DaycareOldManDialog_30

DaycareOldManDialog_33:
# 340 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_ne DaycareOldManDialog_32
	goto DaycareOldManDialog_30

DaycareOldManDialog_37:
# 334 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_eq DaycareOldManDialog_17
	goto DaycareOldManDialog_34

DaycareOldManDialog_41:
# 435 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_9, MSGBOX_DEFAULT
# 436 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 437 "data/maps/daycarebase/scripts.pory"
	special ForceShinyDitto
	goto DaycareOldManDialog_40

DaycareOldManDialog_42:
# 441 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_10, MSGBOX_DEFAULT
# 442 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 443 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_40

DaycareOldManDialog_43:
# 447 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_11, MSGBOX_DEFAULT
# 448 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 449 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_40

DaycareOldManDialog_44:
# 453 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_12, MSGBOX_DEFAULT
# 454 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 455 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_40

DaycareOldManDialog_45:
# 459 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_13, MSGBOX_DEFAULT
# 460 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 461 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_40

DaycareOldManDialog_47:
# 457 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_eq DaycareOldManDialog_45
	goto DaycareOldManDialog_46

DaycareOldManDialog_50:
# 451 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_eq DaycareOldManDialog_44
	goto DaycareOldManDialog_48

DaycareOldManDialog_53:
# 445 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_eq DaycareOldManDialog_43
	goto DaycareOldManDialog_51

DaycareOldManDialog_56:
# 439 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_gt DaycareOldManDialog_42
	goto DaycareOldManDialog_54

DaycareOldManDialog_57:
# 439 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_ne DaycareOldManDialog_56
	goto DaycareOldManDialog_54

DaycareOldManDialog_61:
# 433 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_eq DaycareOldManDialog_41
	goto DaycareOldManDialog_58


VaporeonDialog::
# 491 "data/maps/daycarebase/scripts.pory"
	lock
# 492 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 493 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_2
# 494 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_VAPOREON, EMOTE_ANGRY
# 495 "data/maps/daycarebase/scripts.pory"
	msgbox VaporeonDialog_Text_0, MSGBOX_NPC
# 496 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 497 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 498 "data/maps/daycarebase/scripts.pory"
	release
	end


LaprasDialog::
# 504 "data/maps/daycarebase/scripts.pory"
	lock
# 505 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 506 "data/maps/daycarebase/scripts.pory"
	speakername LaprasDialog_Text_0
# 507 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_LAPRAS, EMOTE_HAPPY
# 508 "data/maps/daycarebase/scripts.pory"
	msgbox LaprasDialog_Text_1, MSGBOX_DEFAULT
# 509 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 510 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 511 "data/maps/daycarebase/scripts.pory"
	release
	end


LinooneDialog::
# 516 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq LinooneDialog_1
# 530 "data/maps/daycarebase/scripts.pory"
	lock
# 531 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 532 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 533 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_LINOONE, EMOTE_NORMAL
# 534 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_2
# 535 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 536 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 537 "data/maps/daycarebase/scripts.pory"
	release
	end

LinooneDialog_1:
# 518 "data/maps/daycarebase/scripts.pory"
	lock
# 519 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 520 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 521 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_LINOONE, EMOTE_NORMAL
# 522 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_1
# 523 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 524 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 525 "data/maps/daycarebase/scripts.pory"
	release
	end


BulbsaurDialog::
# 543 "data/maps/daycarebase/scripts.pory"
	lock
# 544 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 545 "data/maps/daycarebase/scripts.pory"
	speakername BulbsaurDialog_Text_0
# 546 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_BULBASAUR, EMOTE_NORMAL
# 547 "data/maps/daycarebase/scripts.pory"
	msgbox BulbsaurDialog_Text_1, MSGBOX_NPC
# 548 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 549 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 550 "data/maps/daycarebase/scripts.pory"
	release
	end


CombeeDialog::
# 555 "data/maps/daycarebase/scripts.pory"
	lock
# 556 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 557 "data/maps/daycarebase/scripts.pory"
	speakername CombeeDialog_Text_0
# 558 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_COMBEE, EMOTE_NORMAL
# 559 "data/maps/daycarebase/scripts.pory"
	msgbox CombeeDialog_Text_1, MSGBOX_NPC
# 560 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 561 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 562 "data/maps/daycarebase/scripts.pory"
	release
	end


Porygon2Dialog::
# 567 "data/maps/daycarebase/scripts.pory"
	lock
# 568 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 569 "data/maps/daycarebase/scripts.pory"
	speakername Porygon2Dialog_Text_0
# 570 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PORYGON2, EMOTE_NORMAL
# 571 "data/maps/daycarebase/scripts.pory"
	msgbox Porygon2Dialog_Text_1, MSGBOX_NPC
# 572 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 573 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 574 "data/maps/daycarebase/scripts.pory"
	release
	end


ScytherDialog::
# 579 "data/maps/daycarebase/scripts.pory"
	lock
# 580 "data/maps/daycarebase/scripts.pory"
	applymovement scyther, DaycareOldManDialog_Movement_0
# 581 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_DITTO_IS_SHINY, ScytherDialog_3
ScytherDialog_2:
# 596 "data/maps/daycarebase/scripts.pory"
	speakername ScytherDialog_Text_0
# 597 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_SCYTHER, EMOTE_NORMAL
# 598 "data/maps/daycarebase/scripts.pory"
	msgbox ScytherDialog_Text_3, MSGBOX_DEFAULT
# 599 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 600 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 601 "data/maps/daycarebase/scripts.pory"
	release
	end

ScytherDialog_1:
# 583 "data/maps/daycarebase/scripts.pory"
	speakername ScytherDialog_Text_0
# 584 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_SCYTHER, EMOTE_NORMAL
# 585 "data/maps/daycarebase/scripts.pory"
	msgbox ScytherDialog_Text_1, MSGBOX_DEFAULT
# 586 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 587 "data/maps/daycarebase/scripts.pory"
	applymovement scyther, Common_Movement_ExclamationMark
# 588 "data/maps/daycarebase/scripts.pory"
	waitmovement scyther
# 589 "data/maps/daycarebase/scripts.pory"
	msgbox ScytherDialog_Text_2
# 590 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 591 "data/maps/daycarebase/scripts.pory"
	release
	end

ScytherDialog_3:
# 581 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq ScytherDialog_1
	goto ScytherDialog_2


RioluDialog::
# 607 "data/maps/daycarebase/scripts.pory"
	lock
# 608 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 609 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_RIOLU_INTRO, RioluDialog_1
# 744 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 745 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 746 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_28, MSGBOX_DEFAULT
# 747 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_RIOLU_INTRO
# 748 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 749 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 750 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_1:
# 611 "data/maps/daycarebase/scripts.pory"
	lock
# 612 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 613 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 614 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 615 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_1, MSGBOX_DEFAULT
# 616 "data/maps/daycarebase/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 617 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 618 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RioluDialog_4
# 731 "data/maps/daycarebase/scripts.pory"
	lock
# 732 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 733 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 734 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_27, MSGBOX_AUTOCLOSE
# 735 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 736 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 737 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_4:
# 620 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 621 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_2, MSGBOX_DEFAULT
# 622 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 623 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_3, MSGBOX_YESNO
# 624 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RioluDialog_7
# 721 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 722 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_26
# 723 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 724 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 725 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_7:
# 626 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 627 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_4, MSGBOX_DEFAULT
# 628 "data/maps/daycarebase/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 629 "data/maps/daycarebase/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, RioluDialog_Text_5, RioluDialog_Text_6, RioluDialog_Text_7, RioluDialog_Text_8, RioluDialog_Text_9, RioluDialog_Text_10, RioluDialog_Text_11, MimikyuDialog_Text_0, RioluDialog_Text_12, RioluDialog_Text_13, RioluDialog_Text_14
# 630 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RioluDialog_10
# 638 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RioluDialog_11
# 646 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RioluDialog_12
# 654 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RioluDialog_13
# 662 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq RioluDialog_14
# 670 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq RioluDialog_15
# 678 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq RioluDialog_16
# 686 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq RioluDialog_17
# 694 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq RioluDialog_18
# 702 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq RioluDialog_19
# 710 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq RioluDialog_20
	return

RioluDialog_10:
# 632 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_15, MSGBOX_DEFAULT
# 633 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 634 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 635 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_11:
# 640 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_16, MSGBOX_DEFAULT
# 641 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 642 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 643 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_12:
# 648 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_17, MSGBOX_DEFAULT
# 649 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 650 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 651 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_13:
# 656 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_18, MSGBOX_DEFAULT
# 657 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 658 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 659 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_14:
# 664 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_19, MSGBOX_DEFAULT
# 665 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 666 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 667 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_15:
# 672 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_20, MSGBOX_DEFAULT
# 673 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 674 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 675 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_16:
# 680 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_21, MSGBOX_DEFAULT
# 681 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 682 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 683 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_17:
# 688 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_22, MSGBOX_DEFAULT
# 689 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 690 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 691 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_18:
# 696 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_23, MSGBOX_DEFAULT
# 697 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 698 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 699 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_19:
# 704 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_24, MSGBOX_DEFAULT
# 705 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 706 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 707 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_20:
# 712 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_25, MSGBOX_DEFAULT
# 713 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 714 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 715 "data/maps/daycarebase/scripts.pory"
	release
	end


BattleVsPikachu::
# 757 "data/maps/daycarebase/scripts.pory"
	lock
# 759 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_TRANS_PIKACHU, BattleVsPikachu_2
# 771 "data/maps/daycarebase/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 772 "data/maps/daycarebase/scripts.pory"
	applymovement Pikachu, DaycareOldManDialog_Movement_0
# 773 "data/maps/daycarebase/scripts.pory"
	waitmovement Pikachu
# 774 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 775 "data/maps/daycarebase/scripts.pory"
	applymovement Pikachu, Common_Movement_ExclamationMark
# 776 "data/maps/daycarebase/scripts.pory"
	waitmovement Pikachu
# 777 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 778 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PIKACHU, EMOTE_NORMAL
# 779 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_1, MSGBOX_AUTOCLOSE
# 780 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 781 "data/maps/daycarebase/scripts.pory"
	setwildbattle SPECIES_PIKACHU, 25
# 782 "data/maps/daycarebase/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 783 "data/maps/daycarebase/scripts.pory"
	dowildbattle
# 784 "data/maps/daycarebase/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 785 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsPikachu_4
	return

BattleVsPikachu_2:
# 761 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 762 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 763 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PIKACHU, EMOTE_NORMAL
# 764 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_0, MSGBOX_DEFAULT
# 765 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 766 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 767 "data/maps/daycarebase/scripts.pory"
	release
	end

BattleVsPikachu_4:
# 787 "data/maps/daycarebase/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 788 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 789 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_TRANS_PIKACHU
# 790 "data/maps/daycarebase/scripts.pory"
	delay 15
# 791 "data/maps/daycarebase/scripts.pory"
	dittotransform SPECIES_PIKACHU
# 792 "data/maps/daycarebase/scripts.pory"
	playse MUS_LEVEL_UP
# 793 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_2, MSGBOX_DEFAULT
# 794 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 795 "data/maps/daycarebase/scripts.pory"
	dittotransform VAR_TEMP_0
# 796 "data/maps/daycarebase/scripts.pory"
	givemon SPECIES_PIKACHU, 25, move1 = MOVE_NUZZLE, move2 = MOVE_IRON_TAIL, move3 = MOVE_SPARK, move4 = MOVE_FLASH
# 797 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 798 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PIKACHU, EMOTE_HAPPY
# 799 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_3, MSGBOX_DEFAULT
# 800 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 801 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 802 "data/maps/daycarebase/scripts.pory"
	fadenewbgm MUS_PMD_HEARTWARMING
# 803 "data/maps/daycarebase/scripts.pory"
	release
	end


ChanseyHeal::
# 809 "data/maps/daycarebase/scripts.pory"
	lock
# 810 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 811 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_CHANSEY_INTRO, ChanseyHeal_1
# 859 "data/maps/daycarebase/scripts.pory"
	lock
# 860 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 861 "data/maps/daycarebase/scripts.pory"
	speakername ChanseyHeal_Text_0
# 862 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 863 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_6, MSGBOX_DEFAULT
# 864 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 865 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_CHANSEY_INTRO
# 866 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 867 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_1:
# 813 "data/maps/daycarebase/scripts.pory"
	speakername ChanseyHeal_Text_0
# 814 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 815 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_1, MSGBOX_DEFAULT
# 816 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 817 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_2, MSGBOX_YESNO
# 818 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 819 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyHeal_4
# 849 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 850 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_5, MSGBOX_AUTOCLOSE
# 851 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 852 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 853 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_4:
# 821 "data/maps/daycarebase/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 822 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyHeal_7
# 839 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 840 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_4, MSGBOX_AUTOCLOSE
# 841 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 842 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 843 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_7:
# 824 "data/maps/daycarebase/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 825 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 826 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 827 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_HEAL
# 828 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 829 "data/maps/daycarebase/scripts.pory"
	special HealPlayerParty
# 830 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 831 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_3, MSGBOX_AUTOCLOSE
# 832 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 833 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 834 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_Ditto::
# 874 "data/maps/daycarebase/scripts.pory"
	lock
# 875 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 876 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_DITTO_INTRO, DaycareBase_Ditto_1
# 916 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_1
# 917 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 918 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_4, MSGBOX_DEFAULT
# 919 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 920 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_DITTO_INTRO
# 921 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 922 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 923 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_1:
# 878 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_XFORMS_TALKED_TO_DITTO, DaycareBase_Ditto_4
# 904 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_1
# 905 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 906 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_3, MSGBOX_DEFAULT
# 907 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 908 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 909 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_4:
# 880 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_0, MSGBOX_YESNO
# 881 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareBase_Ditto_7
# 892 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_1
# 893 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 894 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_2, MSGBOX_AUTOCLOSE
# 895 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 896 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 897 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 898 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 899 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_7:
# 883 "data/maps/daycarebase/scripts.pory"
	dittotransform SPECIES_DITTO
# 884 "data/maps/daycarebase/scripts.pory"
	special OpenPCMoveMons
# 885 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 886 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 887 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycarebaseDitto_intro_trigger::
# 930 "data/maps/daycarebase/scripts.pory"
	goto_if_unset FLAG_DITTO_INTRO, DaycarebaseDitto_intro_trigger_1
	end

DaycarebaseDitto_intro_trigger_1:
# 932 "data/maps/daycarebase/scripts.pory"
	lock
# 933 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 934 "data/maps/daycarebase/scripts.pory"
	applymovement DittoIntro, Common_Movement_ExclamationMark
# 935 "data/maps/daycarebase/scripts.pory"
	waitmovement DittoIntro
# 936 "data/maps/daycarebase/scripts.pory"
	applymovement DittoIntro, DaycareIntro_Movement_2
# 937 "data/maps/daycarebase/scripts.pory"
	waitmovement DittoIntro
# 938 "data/maps/daycarebase/scripts.pory"
	applymovement LOCALID_PLAYER, DaycareIntro_Movement_3
# 939 "data/maps/daycarebase/scripts.pory"
	waitmovement LOCALID_PLAYER
# 940 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_1
# 941 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 942 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_4, MSGBOX_DEFAULT
# 943 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 944 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 945 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_DITTO_INTRO
# 946 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_FindLuckyEgg::
# 956 "data/maps/daycarebase/scripts.pory"
	finditem ITEM_LUCKY_EGG
	return


DaycareBase_FindLuckyEgg1::
# 960 "data/maps/daycarebase/scripts.pory"
	lock
# 961 "data/maps/daycarebase/scripts.pory"
	removeobject luckyegg1
# 962 "data/maps/daycarebase/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 963 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 964 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_ITEM_DAYCARE_BASE1
# 965 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_FindLuckyEgg2::
# 970 "data/maps/daycarebase/scripts.pory"
	lock
# 971 "data/maps/daycarebase/scripts.pory"
	removeobject luckyegg2
# 972 "data/maps/daycarebase/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 973 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 974 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_ITEM_DAYCARE_EAST1
# 975 "data/maps/daycarebase/scripts.pory"
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

# 101 "data/maps/daycarebase/scripts.pory"
ShrinktoMausholdCave_Movement_0:
# 101 "data/maps/daycarebase/scripts.pory"
	face_up
	step_end

# 269 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_0:
# 269 "data/maps/daycarebase/scripts.pory"
	face_player
	step_end

# 300 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_1:
# 300 "data/maps/daycarebase/scripts.pory"
	face_down
	step_end

# 302 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_2:
# 302 "data/maps/daycarebase/scripts.pory"
	walk_down
# 302 "data/maps/daycarebase/scripts.pory"
	walk_down
	step_end

# 312 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_3:
# 312 "data/maps/daycarebase/scripts.pory"
	walk_right
# 312 "data/maps/daycarebase/scripts.pory"
	walk_right
# 312 "data/maps/daycarebase/scripts.pory"
	walk_right
# 312 "data/maps/daycarebase/scripts.pory"
	walk_right
# 312 "data/maps/daycarebase/scripts.pory"
	walk_right
	step_end

# 318 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_4:
# 318 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 318 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 318 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 318 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 318 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
	step_end

# 320 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_5:
# 320 "data/maps/daycarebase/scripts.pory"
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
# 125 "data/maps/daycarebase/scripts.pory"
	.string "Pikachu$"

MimikyuDialog_Text_1:
# 127 "data/maps/daycarebase/scripts.pory"
	.string "Hey!\pI'm just a normal Pikachu in my usual\nspot!$"

MimikyuDialog_Text_2:
# 129 "data/maps/daycarebase/scripts.pory"
	.string "Mimikyu$"

MimikyuDialog_Text_3:
# 131 "data/maps/daycarebase/scripts.pory"
	.string "Oh...\nYou caught me.\pI wish I could disguise myself as\nwell as you can...\pMaybe then people would like me more...$"

MimikyuDialog_Text_4:
# 143 "data/maps/daycarebase/scripts.pory"
	.string "I've always looked up to you\nPikachu.\pI hope my disguise doesn't insult\nyou..$"

MimikyuDialog_Text_5:
# 157 "data/maps/daycarebase/scripts.pory"
	.string "Oh!\nA real life Pikachu!\pYou are my idol.\pPlease take this.\n$"

KecleonDialog_Text_0:
# 184 "data/maps/daycarebase/scripts.pory"
	.string "Kecleon$"

KecleonDialog_Text_1:
# 186 "data/maps/daycarebase/scripts.pory"
	.string "Where do Eggs come from?\pMy trainer left me here a long time\nago and I've yet to find one.\pDo you know?\pI've always heard of Dittos\nholding onto Eggs...$"

KecleonDialog_Text_2:
# 196 "data/maps/daycarebase/scripts.pory"
	.string "Where do Eggs come from?\pMy trainer left me here a long time\nago and I've yet to find one.$"

AzumarillDialog_Text_0:
# 210 "data/maps/daycarebase/scripts.pory"
	.string "Azumarill$"

AzumarillDialog_Text_1:
# 212 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pYou'll fit in well here.$"

AzumarillDialog_Text_2:
# 222 "data/maps/daycarebase/scripts.pory"
	.string "Oh!\nThank goodness you aren't a Ditto...\pMy trainer keeps putting me in here\nwith Dittos hoping we'll find an\lEgg.\pThey gave me this Sea Incence,\nbut I'm not sure how that would\lhelp us on our hunt...$"

DaycareOldManDialog_Text_0:
# 240 "data/maps/daycarebase/scripts.pory"
	.string "Back from exploring the Daycare?\pAh!\nBut where is your Egg?\pKeep doing whatever it is you\nDittos do and come back when\lyou have one!$"

DaycareOldManDialog_Text_1:
# 247 "data/maps/daycarebase/scripts.pory"
	.string "Why, who are you?\pI'm looking for a Ditto.\n$"

DaycareOldManDialog_Text_2:
# 256 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pDespite what trainers may see from\nRoute 117, the Daycare is a vast\larea filled with biomes for nearly\levery type of Pokémon!\pExplore the Daycare and interact\nwith many of the Pokémon we are\lraising.\pYou never know what friends you\nwill make along the way!\pNow, I do expect you to be holding\nan Egg at some point... Every Ditto\lI've raised has produced one.\pWhen you're holding an Egg,\ncome back and talk to me and\lwe can get it to your trainer.$"

DaycareOldManDialog_Text_3:
# 274 "data/maps/daycarebase/scripts.pory"
	.string "Why what do we have here?\nGoodness!\pYou're holding an Egg!\pWherever did you get this?\pIt's the darndest thing.\pYou Pokémon always seem to find\nthese Eggs, but I can never figure\lout where they come from.\pWould you like to give me the Egg\nso that I may give it to your\lTrainer?$"

DaycareOldManDialog_Text_4:
# 280 "data/maps/daycarebase/scripts.pory"
	.string "Ditto handed over the Egg.\n$"

DaycareOldManDialog_Text_5:
# 284 "data/maps/daycarebase/scripts.pory"
	.string "Thank your for the Egg!\pAs a reward, take this EXP!\n$"

DaycareOldManDialog_Text_6:
# 294 "data/maps/daycarebase/scripts.pory"
	.string "Ditto grew to level 26.\n$"

DaycareOldManDialog_Text_7:
# 298 "data/maps/daycarebase/scripts.pory"
	.string "With this Egg, I can now fulfill\nmy duties.$"

DaycareOldManDialog_Text_8:
# 323 "data/maps/daycarebase/scripts.pory"
	.string "Ah, it's you!\pWe were raising your Pokémon\nand my goodness, were we surprised!\pYour Pokémon had an Egg!\pWe don't know how it got there,\nbut your Pokémon had it.\pYou do want it, yes?\n$"

DaycareOldManDialog_Text_9:
# 336 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR BLUE}{SHADOW LIGHT_BLUE}0\n{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Lucky Eggs found: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_2}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pAmazing!\pYou beat the game with 0 whiteouts\nand found all of the Lucky Eggs!\pCongratulations!\pStart a new game for a reward!$"

DaycareOldManDialog_Text_10:
# 342 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR BLUE}{SHADOW LIGHT_BLUE}0{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_2}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pAmazing!\pYou beat the game with 0 whiteouts!\pKeep searching for the remaining\nLucky Eggs and defeat Mew again to\l100% the game!$"

DaycareOldManDialog_Text_11:
# 348 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR BLUE}{SHADOW LIGHT_BLUE}0{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {COLOR RED}{SHADOW LIGHT_RED}0{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pAmazing!\pYou beat the game with 0 whiteouts!\pKeep searching for the remaining\nLucky Eggs and defeat Mew again to\l100% the game!$"

DaycareOldManDialog_Text_12:
# 354 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {COLOR RED}{SHADOW LIGHT_RED}0{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pGreat job!\pYou can continue this save and\nfind the remaining Lucky eggs.\pChallenge Mew again and speak\nto the Daycare Man.\pStart a new run to try to win\nwithout whiting out.$"

DaycareOldManDialog_Text_13:
# 360 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_2}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pGreat Job!\nYou found all of the Lucky Eggs!\pStart a new run to try to win\nwithout whiting out.$"

DaycareOldManDialog_Text_14:
# 366 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_2}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pGreat job!\pYou can continue this save and\nfind the remaining Lucky eggs.\pChallenge Mew again and speak\nto the Daycare Man.\pStart a new run to try to win\nwithout whiting out.$"

DaycareOldManDialog_Text_15:
# 379 "data/maps/daycarebase/scripts.pory"
	.string "The Daycare Man ripped the Egg\nfrom Ditto's clutches.$"

VaporeonDialog_Text_0:
# 495 "data/maps/daycarebase/scripts.pory"
	.string "Ugh!\nYou again.\pEveryone here keeps asking me to\nhelp them search for Eggs.\pCan't a Vaporeon just relax?$"

LaprasDialog_Text_0:
# 506 "data/maps/daycarebase/scripts.pory"
	.string "Lapras$"

LaprasDialog_Text_1:
# 508 "data/maps/daycarebase/scripts.pory"
	.string "I love the Daycare!\pIt's so peaceful and quiet here.\pI can just float around all day\nand relax.\pThose waterfalls are pretty\nvicious, I won't go near them.\pI've heard that Dragonair can\neasily scale even the largest\lof waterfalls!$"

LinooneDialog_Text_0:
# 520 "data/maps/daycarebase/scripts.pory"
	.string "Linoone$"

LinooneDialog_Text_1:
# 522 "data/maps/daycarebase/scripts.pory"
	.string "The Daycare is huge!\pIt's a bit scary to expore,\nso I stay up here.\pRiolu is way more brave than I\nam and has explored the entirety\lof the Daycare.\pYou should talk with Riolu if\nyou get lost!\pI'm sure they can help!\n$"

LinooneDialog_Text_2:
# 534 "data/maps/daycarebase/scripts.pory"
	.string "Those Dittos really freak me out.\pThey could be any one of use right\nnow...\pEven you!... or me!\n$"

BulbsaurDialog_Text_0:
# 545 "data/maps/daycarebase/scripts.pory"
	.string "Bulbasaur$"

BulbsaurDialog_Text_1:
# 547 "data/maps/daycarebase/scripts.pory"
	.string "You want to know where Eggs\ncome from?\pI heard that a Pokémon needs\nto go on a great adventure to\lmeet a shapeshifting Pokémon.\pIf you can best them, they will\ngive you an egg!\pAt least, that's what Venusaur\ntold me...$"

CombeeDialog_Text_0:
# 557 "data/maps/daycarebase/scripts.pory"
	.string "Combee$"

CombeeDialog_Text_1:
# 559 "data/maps/daycarebase/scripts.pory"
	.string "I've been in this Daycare\nfor ages!\pI've flown all around and\npollenated so many flowers\lbut I still haven't gained a\lsingle level.\pI'm beginning to believe gaining\nEXP here is nothing more\lthan a big ole myth!$"

Porygon2Dialog_Text_0:
# 569 "data/maps/daycarebase/scripts.pory"
	.string "Porygon2$"

Porygon2Dialog_Text_1:
# 571 "data/maps/daycarebase/scripts.pory"
	.string "Another Ditto...\pI'm actually a Ditto too,\nI just prefer this look.\pThe Daycare population must be at\nleast 75 percent Dittos!\pMost Dittos will take on different\nforms.\pYou won't be able to transform\ninto a form that another Ditto has\ltaken on though.$"

ScytherDialog_Text_0:
# 583 "data/maps/daycarebase/scripts.pory"
	.string "Scyther$"

ScytherDialog_Text_1:
# 585 "data/maps/daycarebase/scripts.pory"
	.string "One in every {COLOR BLUE}{SHADOW LIGHT_BLUE}fifty {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Dittos that I\nsee here are blue.$"

ScytherDialog_Text_2:
# 589 "data/maps/daycarebase/scripts.pory"
	.string "Oh hey!\pYou're one of the blue ones!\pYou must've gotten really lucky!$"

ScytherDialog_Text_3:
# 598 "data/maps/daycarebase/scripts.pory"
	.string "One in every {COLOR BLUE}{SHADOW LIGHT_BLUE}fifty {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Dittos that I\nsee here are blue.\pThere must be some reason trainers\nput so many in here...$"

RioluDialog_Text_0:
# 613 "data/maps/daycarebase/scripts.pory"
	.string "Riolu$"

RioluDialog_Text_1:
# 615 "data/maps/daycarebase/scripts.pory"
	.string "Back with a Lucky Egg?\n$"

RioluDialog_Text_2:
# 621 "data/maps/daycarebase/scripts.pory"
	.string "Great!\pI can tell about the habitat and\nability of a Pokémon in the Daycare.$"

RioluDialog_Text_3:
# 623 "data/maps/daycarebase/scripts.pory"
	.string "Would you like to exchange a\nLucky Egg?$"

RioluDialog_Text_4:
# 627 "data/maps/daycarebase/scripts.pory"
	.string "Which Pokémon would you like to\nknow more about?$"

RioluDialog_Text_5:
# 629 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine$"

RioluDialog_Text_6:
# 629 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou$"

RioluDialog_Text_7:
# 629 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly$"

RioluDialog_Text_8:
# 629 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair$"

RioluDialog_Text_9:
# 629 "data/maps/daycarebase/scripts.pory"
	.string "Marill$"

RioluDialog_Text_10:
# 629 "data/maps/daycarebase/scripts.pory"
	.string "Machamp$"

RioluDialog_Text_11:
# 629 "data/maps/daycarebase/scripts.pory"
	.string "Noivern$"

RioluDialog_Text_12:
# 629 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn$"

RioluDialog_Text_13:
# 629 "data/maps/daycarebase/scripts.pory"
	.string "Lurantis$"

RioluDialog_Text_14:
# 629 "data/maps/daycarebase/scripts.pory"
	.string "Weavile$"

RioluDialog_Text_15:
# 632 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine can be found deep in the\nVolcano.\pIt can run really fast and scale\nhills that would normally be to\lslippery to climb!$"

RioluDialog_Text_16:
# 640 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou can be found in a cave\non the water in the desert.\pIt can dive deep underwater.\n$"

RioluDialog_Text_17:
# 648 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly can be found in the\nDaycare's flowers to the west.\pIt's a tiny Pokémon that can\nfit through small openings.$"

RioluDialog_Text_18:
# 656 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair can be found at the lake.\pIt can be a bit cryptic so it\nmay be difficult to reach.\pIt can scale large waterfalls\nwith ease.$"

RioluDialog_Text_19:
# 664 "data/maps/daycarebase/scripts.pory"
	.string "Marill can be found at the lake,\nusually by the shore.\pIt's a bit shy so it may be hiding.\pIt can float in any body of water.\n$"

RioluDialog_Text_20:
# 672 "data/maps/daycarebase/scripts.pory"
	.string "Machamp likes to train deep in\nthe mountains.\pIt is a very tough and solitary\nPokémon.\pIts strength can move large\nboulders.$"

RioluDialog_Text_21:
# 680 "data/maps/daycarebase/scripts.pory"
	.string "Noivern hangs out in a dark\ncave above the Daycare Falls.\pIt's quite a powerful Pokémon,\nso be prepared for a fight.\pIt can soar through the air,\nreaching places unreachable by\lnon_flying types.$"

RioluDialog_Text_22:
# 688 "data/maps/daycarebase/scripts.pory"
	.string "Pikachu is standing on that cliff\nright over there.\pIts electricity can light up even\nthe darkest of caves.$"

RioluDialog_Text_23:
# 696 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn lives in the desert.\pIt's quite a friendly Pokémon,\nbut don't upset it!\pIt is strong enough to smash\nsolid rocks!$"

RioluDialog_Text_24:
# 704 "data/maps/daycarebase/scripts.pory"
	.string "Lurantis has been spending time\nacross the water in the mountains.\pIts sharp limbs can cut through\nsmall trees.$"

RioluDialog_Text_25:
# 712 "data/maps/daycarebase/scripts.pory"
	.string "Weavile is quite the ninja.\pIt spends time in the tall trees\nin the jungle.\pIt demands a fierce challenger\nto battle it.\pIts agility allows it to cross\neven the smallest of walkways.$"

RioluDialog_Text_26:
# 722 "data/maps/daycarebase/scripts.pory"
	.string "Oh.\pWhat else are you gonna do\nwith that egg?$"

RioluDialog_Text_27:
# 734 "data/maps/daycarebase/scripts.pory"
	.string "No?\nCome back when you do!$"

RioluDialog_Text_28:
# 746 "data/maps/daycarebase/scripts.pory"
	.string "Hiya!\pI'm Riolu!\pI've visited every biome the\nDaycare has to offer.\lI know it like the back of my paw!\pIf you need guidance on where a\ncertain Pokémon might be,\lI'm your Pokémon!\pAlthough I won't do it for free...\pBring me Lucky Eggs, and I'll tell\nyou what I know.$"

BattleVsPikachu_Text_0:
# 764 "data/maps/daycarebase/scripts.pory"
	.string "You really lit me up.\pBest of luck on your journey!\n$"

BattleVsPikachu_Text_1:
# 779 "data/maps/daycarebase/scripts.pory"
	.string "A Ditto!\pYou must be on your quest to obtain\nyour egg.\pDefeat me in battle and I'll allow\nyou to transform into me!$"

BattleVsPikachu_Text_2:
# 793 "data/maps/daycarebase/scripts.pory"
	.string "You have gained the ability to\ntransform into Pikachu!$"

BattleVsPikachu_Text_3:
# 799 "data/maps/daycarebase/scripts.pory"
	.string "How electrifying!\pElectric_type moves are powerful\nagainst Water_type Pokémon.\pThey typically spend their time in\nthe Lake Biome here.$"

ChanseyHeal_Text_0:
# 813 "data/maps/daycarebase/scripts.pory"
	.string "Chansey$"

ChanseyHeal_Text_1:
# 815 "data/maps/daycarebase/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.$"

ChanseyHeal_Text_2:
# 817 "data/maps/daycarebase/scripts.pory"
	.string "Would you like to heal?$"

ChanseyHeal_Text_3:
# 831 "data/maps/daycarebase/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyHeal_Text_4:
# 840 "data/maps/daycarebase/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyHeal_Text_5:
# 850 "data/maps/daycarebase/scripts.pory"
	.string "Oh, okay then.$"

ChanseyHeal_Text_6:
# 863 "data/maps/daycarebase/scripts.pory"
	.string "You look new!\pHave you found any Lucky Eggs yet?\pThey aren't quite the Mythical Egg\nyou are in search of, but many\lPokémon around the daycare will\loffer trades or services for them!\pDon't be afraid to use them!\pI'll offer to bring you back to\nfull health for just one!$"

DaycareBase_Ditto_Text_0:
# 880 "data/maps/daycarebase/scripts.pory"
	.string "Would you like to change out your\ntransformation options?$"

DaycareBase_Ditto_Text_1:
# 892 "data/maps/daycarebase/scripts.pory"
	.string "Ditto$"

DaycareBase_Ditto_Text_2:
# 894 "data/maps/daycarebase/scripts.pory"
	.string "Come back anytime!$"

DaycareBase_Ditto_Text_3:
# 906 "data/maps/daycarebase/scripts.pory"
	.string "Ditto!\pYou can transform into any\lPokémon you defeat in battle!\pThis does only apply to Pokémon\nwho are not already using\lTransform...\pPress the {SELECT_BUTTON} button to\nopen your transformation menu.\pYou can also view more information\nabout the Pokémon you can\ltransform into by opening your\lTransformation Party from the\l{START_BUTTON} menu.\pTo swap out your transformation\noptions, press the {L_BUTTON} button!$"

DaycareBase_Ditto_Text_4:
# 918 "data/maps/daycarebase/scripts.pory"
	.string "Hello there fellow Ditto!\pDaycare Man asked you to get an Egg\nfor him, did he?\pWell, you're about to learn the\nthe secret of how we Dittos are\lalways found holding Eggs.\pIt'll be quite the adventure!\pDon't forget, you are a Ditto,\nso you can transform into any\lPokémon you defeat in battle!\pThis does only apply to Pokémon\nwho are not already using\lTransform...\pPress the {SELECT_BUTTON} button to\nopen your transformation menu.\pYou can also view more information\nabout the Pokémon you can\ltransform into by opening your\lTransformation Party from the\l{START_BUTTON} menu.\pTo swap out your transformation\noptions, press the {L_BUTTON} button!$"
