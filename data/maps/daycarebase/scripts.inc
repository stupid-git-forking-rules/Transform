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
# 112 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 113 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYUTOP, EMOTE_NORMAL
# 114 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_DEFAULT
# 115 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 116 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 117 "data/maps/daycarebase/scripts.pory"
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


KecleonDialog::
# 122 "data/maps/daycarebase/scripts.pory"
	lock
# 123 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 124 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq KecleonDialog_1
# 136 "data/maps/daycarebase/scripts.pory"
	speakername KecleonDialog_Text_0
# 137 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_KECLEON, EMOTE_NORMAL
# 138 "data/maps/daycarebase/scripts.pory"
	msgbox KecleonDialog_Text_2, MSGBOX_DEFAULT
# 139 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 140 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 141 "data/maps/daycarebase/scripts.pory"
	release
	end

KecleonDialog_1:
# 126 "data/maps/daycarebase/scripts.pory"
	speakername KecleonDialog_Text_0
# 127 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_KECLEON, EMOTE_NORMAL
# 128 "data/maps/daycarebase/scripts.pory"
	msgbox KecleonDialog_Text_1, MSGBOX_DEFAULT
# 129 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 130 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 131 "data/maps/daycarebase/scripts.pory"
	release
	end


AzumarillDialog::
# 148 "data/maps/daycarebase/scripts.pory"
	lock
# 149 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 150 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq AzumarillDialog_1
# 162 "data/maps/daycarebase/scripts.pory"
	speakername AzumarillDialog_Text_0
# 163 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_AZUMARILL, EMOTE_ANGRY
# 164 "data/maps/daycarebase/scripts.pory"
	msgbox AzumarillDialog_Text_2, MSGBOX_DEFAULT
# 165 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 166 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 167 "data/maps/daycarebase/scripts.pory"
	release
	end

AzumarillDialog_1:
# 152 "data/maps/daycarebase/scripts.pory"
	speakername AzumarillDialog_Text_0
# 153 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_AZUMARILL, EMOTE_NORMAL
# 154 "data/maps/daycarebase/scripts.pory"
	msgbox AzumarillDialog_Text_1, MSGBOX_DEFAULT
# 155 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 156 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 157 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareOldManDialog::
# 173 "data/maps/daycarebase/scripts.pory"
	lock
# 174 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 175 "data/maps/daycarebase/scripts.pory"
	goto_if_unset FLAG_BEAT_MEW, DaycareOldManDialog_1
# 207 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq DaycareOldManDialog_7
# 397 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 398 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_1, MSGBOX_DEFAULT
# 399 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 400 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_1:
# 177 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_OLDMAN_INTRO, DaycareOldManDialog_4
# 197 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 198 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_2, MSGBOX_DEFAULT
# 199 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 200 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_OLDMAN_INTRO
# 201 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_4:
# 179 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq DaycareOldManDialog_10
# 188 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 189 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_1, MSGBOX_DEFAULT
# 190 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 191 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_7:
# 209 "data/maps/daycarebase/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 210 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 211 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_0
# 212 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 213 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, Common_Movement_ExclamationMark
# 214 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 215 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 216 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_3, MSGBOX_YESNO
# 217 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 218 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareOldManDialog_13
# 308 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 309 "data/maps/daycarebase/scripts.pory"
	playse SE_M_SCRATCH
# 310 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_14, MSGBOX_DEFAULT
# 311 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 312 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 313 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 314 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_5, MSGBOX_DEFAULT
# 315 "data/maps/daycarebase/scripts.pory"
	removeobject BrendanBiking
# 316 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_HIDE_BRENDAN_BIKE
# 317 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 318 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 319 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP
# 320 "data/maps/daycarebase/scripts.pory"
	waitse
# 321 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP_MAX
# 322 "data/maps/daycarebase/scripts.pory"
	waitse
# 323 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 324 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_6, MSGBOX_DEFAULT
# 325 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 326 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 327 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 328 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_7, MSGBOX_AUTOCLOSE
# 329 "data/maps/daycarebase/scripts.pory"
	special SpawnCameraObject
# 330 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_1
# 331 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 332 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_2
# 333 "data/maps/daycarebase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DaycareOldManDialog_Movement_2
# 334 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 335 "data/maps/daycarebase/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 336 "data/maps/daycarebase/scripts.pory"
	delay 60
# 337 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 24
# 338 "data/maps/daycarebase/scripts.pory"
	delay 60
# 339 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SHOW_BRENDAN_OUTRO
# 340 "data/maps/daycarebase/scripts.pory"
	addobject Brendan
# 341 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK, 24
# 342 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_3
# 343 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 344 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 345 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, Common_Movement_ExclamationMark
# 346 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 347 "data/maps/daycarebase/scripts.pory"
	delay 30
# 348 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_4
# 349 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 350 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_5
# 351 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 352 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 353 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_8, MSGBOX_DEFAULT
# 354 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 355 "data/maps/daycarebase/scripts.pory"
	delay 30
# 356 "data/maps/daycarebase/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 357 "data/maps/daycarebase/scripts.pory"
	delay 60
# 358 "data/maps/daycarebase/scripts.pory"
	special CountLuckyEggs
# 359 "data/maps/daycarebase/scripts.pory"
	special GetWhiteoutCount
# 360 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_0, VAR_WHITEOUT_COUNT
# 361 "data/maps/daycarebase/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_0
# 362 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_1, VAR_LUCKYEGG_COUNT
# 363 "data/maps/daycarebase/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_1
# 364 "data/maps/daycarebase/scripts.pory"
	compare VAR_TEMP_0 == 0, 0
	goto_if_ne DaycareOldManDialog_53
DaycareOldManDialog_50:
# 369 "data/maps/daycarebase/scripts.pory"
	compare VAR_TEMP_0 == 0, 0
	goto_if_ne DaycareOldManDialog_49
DaycareOldManDialog_46:
# 374 "data/maps/daycarebase/scripts.pory"
	compare VAR_TEMP_0 == 0, 0
	goto_if_ne DaycareOldManDialog_45
DaycareOldManDialog_43:
# 379 "data/maps/daycarebase/scripts.pory"
	compare VAR_TEMP_0 != 0, 0
	goto_if_ne DaycareOldManDialog_42
DaycareOldManDialog_41:
# 386 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_13, MSGBOX_DEFAULT
# 387 "data/maps/daycarebase/scripts.pory"
	waitmessage
DaycareOldManDialog_36:
# 389 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 390 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_BEAT_MEW
# 391 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SHOW_BRENDAN_OUTRO
# 392 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_HIDE_BRENDAN_BIKE
# 393 "data/maps/daycarebase/scripts.pory"
	special GameClear
	return

DaycareOldManDialog_10:
# 181 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 182 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_0, MSGBOX_DEFAULT
# 183 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 184 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_13:
# 220 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 221 "data/maps/daycarebase/scripts.pory"
	playse SE_ITEMFINDER
# 222 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_4, MSGBOX_DEFAULT
# 223 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 224 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 225 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 226 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_5, MSGBOX_DEFAULT
# 227 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 228 "data/maps/daycarebase/scripts.pory"
	removeobject BrendanBiking
# 229 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_HIDE_BRENDAN_BIKE
# 230 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 231 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP
# 232 "data/maps/daycarebase/scripts.pory"
	waitse
# 233 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP_MAX
# 234 "data/maps/daycarebase/scripts.pory"
	waitse
# 235 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 236 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_6, MSGBOX_DEFAULT
# 237 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 238 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 239 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 240 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_7, MSGBOX_AUTOCLOSE
# 241 "data/maps/daycarebase/scripts.pory"
	special SpawnCameraObject
# 242 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_1
# 243 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 244 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_2
# 245 "data/maps/daycarebase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DaycareOldManDialog_Movement_2
# 246 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 247 "data/maps/daycarebase/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 248 "data/maps/daycarebase/scripts.pory"
	delay 60
# 249 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 24
# 250 "data/maps/daycarebase/scripts.pory"
	delay 60
# 251 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SHOW_BRENDAN_OUTRO
# 252 "data/maps/daycarebase/scripts.pory"
	addobject Brendan
# 253 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK, 24
# 254 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_3
# 255 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 256 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 257 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, Common_Movement_ExclamationMark
# 258 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 259 "data/maps/daycarebase/scripts.pory"
	delay 30
# 260 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_4
# 261 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 262 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_5
# 263 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 264 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 265 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_8, MSGBOX_DEFAULT
# 266 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 267 "data/maps/daycarebase/scripts.pory"
	delay 30
# 268 "data/maps/daycarebase/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 269 "data/maps/daycarebase/scripts.pory"
	delay 60
# 270 "data/maps/daycarebase/scripts.pory"
	special CountLuckyEggs
# 271 "data/maps/daycarebase/scripts.pory"
	special GetWhiteoutCount
# 272 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_0, VAR_WHITEOUT_COUNT
# 273 "data/maps/daycarebase/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_0
# 274 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_1, VAR_LUCKYEGG_COUNT
# 275 "data/maps/daycarebase/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_1
# 276 "data/maps/daycarebase/scripts.pory"
	compare VAR_TEMP_0 == 0, 0
	goto_if_ne DaycareOldManDialog_33
DaycareOldManDialog_30:
# 281 "data/maps/daycarebase/scripts.pory"
	compare VAR_TEMP_0 == 0, 0
	goto_if_ne DaycareOldManDialog_29
DaycareOldManDialog_26:
# 286 "data/maps/daycarebase/scripts.pory"
	compare VAR_TEMP_0 == 0, 0
	goto_if_ne DaycareOldManDialog_25
DaycareOldManDialog_23:
# 291 "data/maps/daycarebase/scripts.pory"
	compare VAR_TEMP_0 != 0, 0
	goto_if_ne DaycareOldManDialog_22
DaycareOldManDialog_21:
# 298 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_13, MSGBOX_DEFAULT
# 299 "data/maps/daycarebase/scripts.pory"
	waitmessage
DaycareOldManDialog_16:
# 301 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 302 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_BEAT_MEW
# 303 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SHOW_BRENDAN_OUTRO
# 304 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_HIDE_BRENDAN_BIKE
# 305 "data/maps/daycarebase/scripts.pory"
	special GameClear
	return

DaycareOldManDialog_17:
# 278 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_9, MSGBOX_DEFAULT
# 279 "data/maps/daycarebase/scripts.pory"
	waitmessage
	goto DaycareOldManDialog_16

DaycareOldManDialog_18:
# 283 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_10, MSGBOX_DEFAULT
# 284 "data/maps/daycarebase/scripts.pory"
	waitmessage
	goto DaycareOldManDialog_16

DaycareOldManDialog_19:
# 288 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_11, MSGBOX_DEFAULT
# 289 "data/maps/daycarebase/scripts.pory"
	waitmessage
	goto DaycareOldManDialog_16

DaycareOldManDialog_20:
# 293 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_12, MSGBOX_DEFAULT
# 294 "data/maps/daycarebase/scripts.pory"
	waitmessage
	goto DaycareOldManDialog_16

DaycareOldManDialog_22:
# 291 "data/maps/daycarebase/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq DaycareOldManDialog_20
	goto DaycareOldManDialog_21

DaycareOldManDialog_25:
# 286 "data/maps/daycarebase/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq DaycareOldManDialog_19
	goto DaycareOldManDialog_23

DaycareOldManDialog_28:
# 281 "data/maps/daycarebase/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_gt DaycareOldManDialog_18
	goto DaycareOldManDialog_26

DaycareOldManDialog_29:
# 281 "data/maps/daycarebase/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_ne DaycareOldManDialog_28
	goto DaycareOldManDialog_26

DaycareOldManDialog_33:
# 276 "data/maps/daycarebase/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq DaycareOldManDialog_17
	goto DaycareOldManDialog_30

DaycareOldManDialog_37:
# 366 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_9, MSGBOX_DEFAULT
# 367 "data/maps/daycarebase/scripts.pory"
	waitmessage
	goto DaycareOldManDialog_36

DaycareOldManDialog_38:
# 371 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_10, MSGBOX_DEFAULT
# 372 "data/maps/daycarebase/scripts.pory"
	waitmessage
	goto DaycareOldManDialog_36

DaycareOldManDialog_39:
# 376 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_11, MSGBOX_DEFAULT
# 377 "data/maps/daycarebase/scripts.pory"
	waitmessage
	goto DaycareOldManDialog_36

DaycareOldManDialog_40:
# 381 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_12, MSGBOX_DEFAULT
# 382 "data/maps/daycarebase/scripts.pory"
	waitmessage
	goto DaycareOldManDialog_36

DaycareOldManDialog_42:
# 379 "data/maps/daycarebase/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq DaycareOldManDialog_40
	goto DaycareOldManDialog_41

DaycareOldManDialog_45:
# 374 "data/maps/daycarebase/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq DaycareOldManDialog_39
	goto DaycareOldManDialog_43

DaycareOldManDialog_48:
# 369 "data/maps/daycarebase/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_gt DaycareOldManDialog_38
	goto DaycareOldManDialog_46

DaycareOldManDialog_49:
# 369 "data/maps/daycarebase/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_ne DaycareOldManDialog_48
	goto DaycareOldManDialog_46

DaycareOldManDialog_53:
# 364 "data/maps/daycarebase/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq DaycareOldManDialog_37
	goto DaycareOldManDialog_50


VaporeonDialog::
# 411 "data/maps/daycarebase/scripts.pory"
	lock
# 412 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 413 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_2
# 414 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_VAPOREON, EMOTE_ANGRY
# 415 "data/maps/daycarebase/scripts.pory"
	msgbox VaporeonDialog_Text_0, MSGBOX_NPC
# 416 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 417 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 418 "data/maps/daycarebase/scripts.pory"
	release
	end


LaprasDialog::
# 424 "data/maps/daycarebase/scripts.pory"
	lock
# 425 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 426 "data/maps/daycarebase/scripts.pory"
	speakername LaprasDialog_Text_0
# 427 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_LAPRAS, EMOTE_HAPPY
# 428 "data/maps/daycarebase/scripts.pory"
	msgbox LaprasDialog_Text_1, MSGBOX_DEFAULT
# 429 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 430 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 431 "data/maps/daycarebase/scripts.pory"
	release
	end


LinooneDialog::
# 436 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq LinooneDialog_1
# 450 "data/maps/daycarebase/scripts.pory"
	lock
# 451 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 452 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 453 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_LINOONE, EMOTE_NORMAL
# 454 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_2
# 455 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 456 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 457 "data/maps/daycarebase/scripts.pory"
	release
	end

LinooneDialog_1:
# 438 "data/maps/daycarebase/scripts.pory"
	lock
# 439 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 440 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 441 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_LINOONE, EMOTE_NORMAL
# 442 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_1
# 443 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 444 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 445 "data/maps/daycarebase/scripts.pory"
	release
	end


BulbsaurDialog::
# 463 "data/maps/daycarebase/scripts.pory"
	lock
# 464 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 465 "data/maps/daycarebase/scripts.pory"
	speakername BulbsaurDialog_Text_0
# 466 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_BULBASAUR, EMOTE_NORMAL
# 467 "data/maps/daycarebase/scripts.pory"
	msgbox BulbsaurDialog_Text_1, MSGBOX_NPC
# 468 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 469 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 470 "data/maps/daycarebase/scripts.pory"
	release
	end


CombeeDialog::
# 475 "data/maps/daycarebase/scripts.pory"
	lock
# 476 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 477 "data/maps/daycarebase/scripts.pory"
	speakername CombeeDialog_Text_0
# 478 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_COMBEE, EMOTE_NORMAL
# 479 "data/maps/daycarebase/scripts.pory"
	msgbox CombeeDialog_Text_1, MSGBOX_NPC
# 480 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 481 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 482 "data/maps/daycarebase/scripts.pory"
	release
	end


Porygon2Dialog::
# 487 "data/maps/daycarebase/scripts.pory"
	lock
# 488 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 489 "data/maps/daycarebase/scripts.pory"
	speakername Porygon2Dialog_Text_0
# 490 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PORYGON2, EMOTE_NORMAL
# 491 "data/maps/daycarebase/scripts.pory"
	msgbox Porygon2Dialog_Text_1, MSGBOX_NPC
# 492 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 493 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 494 "data/maps/daycarebase/scripts.pory"
	release
	end


ScytherDialog::
# 499 "data/maps/daycarebase/scripts.pory"
	lock
# 500 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 501 "data/maps/daycarebase/scripts.pory"
	speakername ScytherDialog_Text_0
# 502 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_SCYTHER, EMOTE_NORMAL
# 503 "data/maps/daycarebase/scripts.pory"
	msgbox ScytherDialog_Text_1, MSGBOX_DEFAULT
# 504 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 505 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 506 "data/maps/daycarebase/scripts.pory"
	release
	end


RioluDialog::
# 511 "data/maps/daycarebase/scripts.pory"
	lock
# 512 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 513 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_RIOLU_INTRO, RioluDialog_1
# 657 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 658 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 659 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_27, MSGBOX_DEFAULT
# 660 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_RIOLU_INTRO
# 661 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 662 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 663 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_1:
# 515 "data/maps/daycarebase/scripts.pory"
	lock
# 516 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 517 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 518 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 519 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_1, MSGBOX_DEFAULT
# 520 "data/maps/daycarebase/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 521 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 522 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RioluDialog_4
# 644 "data/maps/daycarebase/scripts.pory"
	lock
# 645 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 646 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 647 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_26, MSGBOX_AUTOCLOSE
# 648 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 649 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 650 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_4:
# 524 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 525 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_2, MSGBOX_DEFAULT
# 526 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 527 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_3, MSGBOX_YESNO
# 528 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RioluDialog_7
# 634 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 635 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_25
# 636 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 637 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 638 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_7:
# 530 "data/maps/daycarebase/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 531 "data/maps/daycarebase/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, RioluDialog_Text_4, RioluDialog_Text_5, RioluDialog_Text_6, RioluDialog_Text_7, RioluDialog_Text_8, RioluDialog_Text_9, RioluDialog_Text_10, MimikyuDialog_Text_0, RioluDialog_Text_11, RioluDialog_Text_12, RioluDialog_Text_13
# 532 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RioluDialog_10
# 541 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RioluDialog_11
# 550 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RioluDialog_12
# 559 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RioluDialog_13
# 568 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq RioluDialog_14
# 577 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq RioluDialog_15
# 586 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq RioluDialog_16
# 595 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq RioluDialog_17
# 604 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq RioluDialog_18
# 613 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq RioluDialog_19
# 622 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq RioluDialog_20
	return

RioluDialog_10:
# 534 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 535 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_14, MSGBOX_DEFAULT
# 536 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 537 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 538 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_11:
# 543 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 544 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_15, MSGBOX_DEFAULT
# 545 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 546 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 547 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_12:
# 552 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 553 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_16, MSGBOX_DEFAULT
# 554 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 555 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 556 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_13:
# 561 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 562 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_17, MSGBOX_DEFAULT
# 563 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 564 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 565 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_14:
# 570 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 571 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_18, MSGBOX_DEFAULT
# 572 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 573 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 574 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_15:
# 579 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 580 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_19, MSGBOX_DEFAULT
# 581 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 582 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 583 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_16:
# 588 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 589 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_20, MSGBOX_DEFAULT
# 590 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 591 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 592 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_17:
# 597 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 598 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_21, MSGBOX_DEFAULT
# 599 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 600 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 601 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_18:
# 606 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 607 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_22, MSGBOX_DEFAULT
# 608 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 609 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 610 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_19:
# 615 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 616 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_23, MSGBOX_DEFAULT
# 617 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 618 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 619 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_20:
# 624 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 625 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_24, MSGBOX_DEFAULT
# 626 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 627 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 628 "data/maps/daycarebase/scripts.pory"
	release
	end


BattleVsPikachu::
# 670 "data/maps/daycarebase/scripts.pory"
	lock
# 672 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_TRANS_PIKACHU, BattleVsPikachu_2
# 684 "data/maps/daycarebase/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 685 "data/maps/daycarebase/scripts.pory"
	applymovement Pikachu, DaycareOldManDialog_Movement_0
# 686 "data/maps/daycarebase/scripts.pory"
	waitmovement Pikachu
# 687 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 688 "data/maps/daycarebase/scripts.pory"
	applymovement Pikachu, Common_Movement_ExclamationMark
# 689 "data/maps/daycarebase/scripts.pory"
	waitmovement Pikachu
# 690 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 691 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PIKACHU, EMOTE_NORMAL
# 692 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_1, MSGBOX_AUTOCLOSE
# 693 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 694 "data/maps/daycarebase/scripts.pory"
	setwildbattle SPECIES_PIKACHU, 25
# 695 "data/maps/daycarebase/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 696 "data/maps/daycarebase/scripts.pory"
	dowildbattle
# 697 "data/maps/daycarebase/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 698 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsPikachu_4
	return

BattleVsPikachu_2:
# 674 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 675 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 676 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PIKACHU, EMOTE_NORMAL
# 677 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_0, MSGBOX_DEFAULT
# 678 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 679 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 680 "data/maps/daycarebase/scripts.pory"
	release
	end

BattleVsPikachu_4:
# 700 "data/maps/daycarebase/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 701 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 702 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_TRANS_PIKACHU
# 703 "data/maps/daycarebase/scripts.pory"
	delay 15
# 704 "data/maps/daycarebase/scripts.pory"
	dittotransform SPECIES_PIKACHU
# 705 "data/maps/daycarebase/scripts.pory"
	playse MUS_LEVEL_UP
# 706 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_2, MSGBOX_DEFAULT
# 707 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 708 "data/maps/daycarebase/scripts.pory"
	dittotransform VAR_TEMP_0
# 709 "data/maps/daycarebase/scripts.pory"
	givemon SPECIES_PIKACHU, 25, move1 = MOVE_NUZZLE, move2 = MOVE_IRON_TAIL, move3 = MOVE_SPARK, move4 = MOVE_FLASH
# 710 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 711 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PIKACHU, EMOTE_HAPPY
# 712 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_3, MSGBOX_DEFAULT
# 713 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 714 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 715 "data/maps/daycarebase/scripts.pory"
	fadenewbgm MUS_PMD_HEARTWARMING
# 716 "data/maps/daycarebase/scripts.pory"
	release
	end


ChanseyHeal::
# 722 "data/maps/daycarebase/scripts.pory"
	lock
# 723 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 724 "data/maps/daycarebase/scripts.pory"
	speakername ChanseyHeal_Text_0
# 725 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 726 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_1, MSGBOX_DEFAULT
# 727 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 728 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_2, MSGBOX_YESNO
# 729 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 730 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyHeal_1
# 760 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 761 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_5, MSGBOX_AUTOCLOSE
# 762 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 763 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 764 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_1:
# 732 "data/maps/daycarebase/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 733 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyHeal_4
# 750 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 751 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_4, MSGBOX_AUTOCLOSE
# 752 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 753 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 754 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_4:
# 735 "data/maps/daycarebase/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 736 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 737 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 738 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_HEAL
# 739 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 740 "data/maps/daycarebase/scripts.pory"
	special HealPlayerParty
# 741 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 742 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_3, MSGBOX_AUTOCLOSE
# 743 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 744 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 745 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_Ditto::
# 771 "data/maps/daycarebase/scripts.pory"
	lock
# 772 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 773 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_DITTO_INTRO, DaycareBase_Ditto_1
# 835 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_1
# 836 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 837 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_4, MSGBOX_DEFAULT
# 837 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 838 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_DITTO_INTRO
# 839 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 840 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 841 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_1:
# 775 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_XFORMS_TALKED_TO_DITTO, DaycareBase_Ditto_4
# 802 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_1
# 803 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 804 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_3, MSGBOX_DEFAULT
# 804 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 805 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_XFORMS_TALKED_TO_DITTO
# 806 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 807 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 808 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 809 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_0, MSGBOX_YESNO
# 810 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareBase_Ditto_10
# 820 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_1
# 821 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 822 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_2, MSGBOX_AUTOCLOSE
# 823 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 824 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 825 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 826 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 827 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_4:
# 777 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_0, MSGBOX_YESNO
# 778 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareBase_Ditto_7
# 790 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_1
# 791 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 792 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_2, MSGBOX_AUTOCLOSE
# 793 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 794 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 795 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 796 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 797 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_7:
# 780 "data/maps/daycarebase/scripts.pory"
	dittotransform SPECIES_DITTO
# 781 "data/maps/daycarebase/scripts.pory"
	special OpenPCMoveMons
# 782 "data/maps/daycarebase/scripts.pory"
	waitstate
# 783 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 784 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 785 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_10:
# 812 "data/maps/daycarebase/scripts.pory"
	dittotransform SPECIES_DITTO
# 813 "data/maps/daycarebase/scripts.pory"
	special OpenPCMoveMons
# 814 "data/maps/daycarebase/scripts.pory"
	waitstate
# 815 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycarebaseDitto_intro_trigger::
# 848 "data/maps/daycarebase/scripts.pory"
	goto_if_unset FLAG_DITTO_INTRO, DaycarebaseDitto_intro_trigger_1
	end

DaycarebaseDitto_intro_trigger_1:
# 850 "data/maps/daycarebase/scripts.pory"
	lock
# 851 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 852 "data/maps/daycarebase/scripts.pory"
	applymovement DittoIntro, Common_Movement_ExclamationMark
# 853 "data/maps/daycarebase/scripts.pory"
	waitmovement DittoIntro
# 854 "data/maps/daycarebase/scripts.pory"
	applymovement DittoIntro, DaycareIntro_Movement_2
# 855 "data/maps/daycarebase/scripts.pory"
	waitmovement DittoIntro
# 856 "data/maps/daycarebase/scripts.pory"
	applymovement LOCALID_PLAYER, DaycareIntro_Movement_3
# 857 "data/maps/daycarebase/scripts.pory"
	waitmovement LOCALID_PLAYER
# 858 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_1
# 859 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 860 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_4, MSGBOX_DEFAULT
# 860 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 861 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_DITTO_INTRO
# 862 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 863 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 864 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_FindLuckyEgg::
# 874 "data/maps/daycarebase/scripts.pory"
	lock
# 875 "data/maps/daycarebase/scripts.pory"
	finditem ITEM_LUCKY_EGG
# 876 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 877 "data/maps/daycarebase/scripts.pory"
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

# 211 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_0:
# 211 "data/maps/daycarebase/scripts.pory"
	face_player
	step_end

# 242 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_1:
# 242 "data/maps/daycarebase/scripts.pory"
	face_down
	step_end

# 244 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_2:
# 244 "data/maps/daycarebase/scripts.pory"
	walk_down
# 244 "data/maps/daycarebase/scripts.pory"
	walk_down
	step_end

# 254 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_3:
# 254 "data/maps/daycarebase/scripts.pory"
	walk_right
# 254 "data/maps/daycarebase/scripts.pory"
	walk_right
# 254 "data/maps/daycarebase/scripts.pory"
	walk_right
# 254 "data/maps/daycarebase/scripts.pory"
	walk_right
# 254 "data/maps/daycarebase/scripts.pory"
	walk_right
	step_end

# 260 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_4:
# 260 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 260 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 260 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 260 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 260 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
	step_end

# 262 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_5:
# 262 "data/maps/daycarebase/scripts.pory"
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

KecleonDialog_Text_0:
# 126 "data/maps/daycarebase/scripts.pory"
	.string "Kecleon$"

KecleonDialog_Text_1:
# 128 "data/maps/daycarebase/scripts.pory"
	.string "Where do Eggs come from?\pMy trainer left me here a long time\nago and I've yet to find one.\pDo you know?\pI've always heard of Dittos\nholding onto Eggs...$"

KecleonDialog_Text_2:
# 138 "data/maps/daycarebase/scripts.pory"
	.string "Where do Eggs come from?\pMy trainer left me here a long time\nago and I've yet to find one.$"

AzumarillDialog_Text_0:
# 152 "data/maps/daycarebase/scripts.pory"
	.string "Azumarill$"

AzumarillDialog_Text_1:
# 154 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pYou'll fit in well here.$"

AzumarillDialog_Text_2:
# 164 "data/maps/daycarebase/scripts.pory"
	.string "Oh!\nThank goodness you aren't a Ditto...\pMy trainer keeps putting me in here\nwith Dittos hoping we'll find an\lEgg.\pThey gave me this Sea Incence,\nbut I'm not sure how that would\lhelp us on our hunt...$"

DaycareOldManDialog_Text_0:
# 182 "data/maps/daycarebase/scripts.pory"
	.string "Back from exploring the Daycare?\pAh!\nBut where is your Egg!\pKeep doing whatever it is you\nDittos do and come back when\lyou have one!$"

DaycareOldManDialog_Text_1:
# 189 "data/maps/daycarebase/scripts.pory"
	.string "Why, who are you?\pI'm looking for a Ditto.\n$"

DaycareOldManDialog_Text_2:
# 198 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pDespite what trainers may see from\nRoute 117, the Daycare is a vast\larea filled with biomes for nearly\levery type of Pokémon!\pExplore the Daycare and interact\nwith many of the Pokémon we are\lraising.\pYou never know what friends you\nwill make along the way!\pNow, I do expect you to be holding\nan Egg at some point... Every Ditto\lI've raised has produced one.\pWhen you're holding an Egg,\ncome back and talk to me and\lwe can get it to your trainer.$"

DaycareOldManDialog_Text_3:
# 216 "data/maps/daycarebase/scripts.pory"
	.string "Why what do we have here?\nGoodness!\pYou're holding an Egg!\pWherever did you get this?\pIt's the darndest thing.\pYou Pokémon always seem to find\nthese Eggs, but I can never figure\lout where they come from.\pWould you like to give me the Egg\nso that I may give it to your\lTrainer?$"

DaycareOldManDialog_Text_4:
# 222 "data/maps/daycarebase/scripts.pory"
	.string "Ditto handed over the Egg.\n$"

DaycareOldManDialog_Text_5:
# 226 "data/maps/daycarebase/scripts.pory"
	.string "Thank your for the Egg!\pAs a reward, take this EXP!\n$"

DaycareOldManDialog_Text_6:
# 236 "data/maps/daycarebase/scripts.pory"
	.string "Ditto grew to level 26.\n$"

DaycareOldManDialog_Text_7:
# 240 "data/maps/daycarebase/scripts.pory"
	.string "With this Egg, I can now fulfill\nmy duties.$"

DaycareOldManDialog_Text_8:
# 265 "data/maps/daycarebase/scripts.pory"
	.string "Ah, it's you!\pWe were raising your Pokémon\nand my goodness, were we surprised!\pYour Pokémon had an Egg!\pWe don't know how it got there,\nbut your Pokémon had it.\pYou do want it, yes?\n$"

DaycareOldManDialog_Text_9:
# 278 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR BLUE}{SHADOW LIGHT_BLUE}0\n{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Lucky Eggs found: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_2}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/17\pAmazing!\pYou beat the game with 0 whiteouts\nand found all of the Lucky Eggs!\pCongratulations!$"

DaycareOldManDialog_Text_10:
# 283 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR BLUE}{SHADOW LIGHT_BLUE}0{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_2}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/17\pAmazing!\pYou beat the game with 0 whiteouts!\pKeep searching for the remaining\nLucky Eggs and defeat Mew again to\l100% the game!$"

DaycareOldManDialog_Text_11:
# 288 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR BLUE}{SHADOW LIGHT_BLUE}0{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {COLOR RED}{SHADOW LIGHT_RED}0{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/17\pAmazing!\pYou beat the game with 0 whiteouts!\pKeep searching for the remaining\nLucky Eggs and defeat Mew again to\l100% the game!$"

DaycareOldManDialog_Text_12:
# 293 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {COLOR RED}{SHADOW LIGHT_RED}0{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/17\pAmazing!\pYou beat the game with 0 whiteouts!\pKeep searching for the remaining\nLucky Eggs and defeat Mew again to\l100% the game!$"

DaycareOldManDialog_Text_13:
# 298 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {STR_VAR_2}/17\pGreat Job!\pStart a new run to try to win\nwithout whiting out, and find\lall of the Lucky Eggs.$"

DaycareOldManDialog_Text_14:
# 310 "data/maps/daycarebase/scripts.pory"
	.string "The Daycare Man ripped the Egg\nfrom Ditto's clutches.$"

VaporeonDialog_Text_0:
# 415 "data/maps/daycarebase/scripts.pory"
	.string "Ugh!\pWhy does everyone keep asking me\nto help them search for Eggs?\pCan't you see I'm busy?\n$"

LaprasDialog_Text_0:
# 426 "data/maps/daycarebase/scripts.pory"
	.string "Lapras$"

LaprasDialog_Text_1:
# 428 "data/maps/daycarebase/scripts.pory"
	.string "I love the Daycare!\pIt's so peaceful and quiet here.\pI can just float around all day\nand relax.\pThose waterfalls are pretty\nvicious, I won't go near them.\pI've heard that Dragonair can\neasily scale even the largest\lof waterfalls!$"

LinooneDialog_Text_0:
# 440 "data/maps/daycarebase/scripts.pory"
	.string "Linoone$"

LinooneDialog_Text_1:
# 442 "data/maps/daycarebase/scripts.pory"
	.string "The Daycare is huge!\pIt's a bit scary to expore,\nso I stay up here.\pRiolu is way more brave than I\nam and has explored the entirety\lof the Daycare.\pYou should talk with Riolu if\nyou get lost!\pI'm sure they can help!\n$"

LinooneDialog_Text_2:
# 454 "data/maps/daycarebase/scripts.pory"
	.string "Those Dittos really freak me out.\pThey could be any one of use right\nnow...\pEven you!... or me!\n$"

BulbsaurDialog_Text_0:
# 465 "data/maps/daycarebase/scripts.pory"
	.string "Bulbasaur$"

BulbsaurDialog_Text_1:
# 467 "data/maps/daycarebase/scripts.pory"
	.string "You want to know where Eggs\ncome from?\pI heard that a Pokémon needs\nto go on a great adventure to\lmeet a shapeshifting Pokémon.\pIf you can best them, they will\ngive you an egg!\pAt least, that's what Venusaur\ntold me...$"

CombeeDialog_Text_0:
# 477 "data/maps/daycarebase/scripts.pory"
	.string "Combee$"

CombeeDialog_Text_1:
# 479 "data/maps/daycarebase/scripts.pory"
	.string "I've been in this Daycare\nfor ages!\pI've flown all around and\npollenated so many flowers\lbut I still haven't gained a\lsingle level.\pI'm beginning to believe gaining\nEXP here is nothing more\lthan a big ole myth!$"

Porygon2Dialog_Text_0:
# 489 "data/maps/daycarebase/scripts.pory"
	.string "Porygon2$"

Porygon2Dialog_Text_1:
# 491 "data/maps/daycarebase/scripts.pory"
	.string "Another Ditto...\pI'm actually a Ditto too,\nI just prefer this look.\pThe Daycare population must be at\nleast 75 percent Dittos!\pMost Dittos will take on different\nforms.\pYou won't be able to transform\ninto a form that another Ditto has\ltaken on though.$"

ScytherDialog_Text_0:
# 501 "data/maps/daycarebase/scripts.pory"
	.string "Scyther$"

ScytherDialog_Text_1:
# 503 "data/maps/daycarebase/scripts.pory"
	.string "One in every {COLOR BLUE}{SHADOW LIGHT_BLUE}fifty {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Dittos that I\nsee here are blue.\pMust be all those shiny hunters\ntrying to capitalize on Gen 2\lmechanics.\pWhen will they learn that this is\nGen 3?...$"

RioluDialog_Text_0:
# 517 "data/maps/daycarebase/scripts.pory"
	.string "Riolu$"

RioluDialog_Text_1:
# 519 "data/maps/daycarebase/scripts.pory"
	.string "Back with a Lucky Egg?\n$"

RioluDialog_Text_2:
# 525 "data/maps/daycarebase/scripts.pory"
	.string "Great!\pI can tell about the habitat and\nability of a Pokémon in the Daycare.$"

RioluDialog_Text_3:
# 527 "data/maps/daycarebase/scripts.pory"
	.string "Would you like to exchange a\nLucky Egg?$"

RioluDialog_Text_4:
# 531 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine$"

RioluDialog_Text_5:
# 531 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou$"

RioluDialog_Text_6:
# 531 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly$"

RioluDialog_Text_7:
# 531 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair$"

RioluDialog_Text_8:
# 531 "data/maps/daycarebase/scripts.pory"
	.string "Marill$"

RioluDialog_Text_9:
# 531 "data/maps/daycarebase/scripts.pory"
	.string "Machamp$"

RioluDialog_Text_10:
# 531 "data/maps/daycarebase/scripts.pory"
	.string "Noivern$"

RioluDialog_Text_11:
# 531 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn$"

RioluDialog_Text_12:
# 531 "data/maps/daycarebase/scripts.pory"
	.string "Lurantis$"

RioluDialog_Text_13:
# 531 "data/maps/daycarebase/scripts.pory"
	.string "Weavile$"

RioluDialog_Text_14:
# 535 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine can be found deep in the\nVolcano.\pIt can run really fast and scale\nhills that would normally be to\lslippery to climb!$"

RioluDialog_Text_15:
# 544 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou can be found in a cave\non the water in the desert.\pIt can dive deep underwater.\n$"

RioluDialog_Text_16:
# 553 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly can be found in the\nDaycare's flowers to the west.\pIt's a tiny Pokémon that can\nfit through small openings.$"

RioluDialog_Text_17:
# 562 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair can be found at the lake.\pIt can be a bit cryptic so it\nmay be difficult to reach.\pIt can scale large waterfalls\nwith ease.$"

RioluDialog_Text_18:
# 571 "data/maps/daycarebase/scripts.pory"
	.string "Marill can be found at the lake,\nusually by the shore.\pIt's a bit shy so it may be hiding.\pIt can float in any body of water.\n$"

RioluDialog_Text_19:
# 580 "data/maps/daycarebase/scripts.pory"
	.string "Machamp likes to train deep in\nthe mountains.\pIt is a very tough and solitary\nPokémon.\pIts strength can move large\nboulders.$"

RioluDialog_Text_20:
# 589 "data/maps/daycarebase/scripts.pory"
	.string "Noivern hangs out in a dark\ncave above the Daycare Falls.\pIt's quite a powerful Pokémon,\nso be prepared for a fight.\pIt can soar through the air,\nreaching places unreachable by\lnon_flying types.$"

RioluDialog_Text_21:
# 598 "data/maps/daycarebase/scripts.pory"
	.string "Pikachu is standing on that cliff\nright over there.\pIts electricity can light up even\nthe darkest of caves.$"

RioluDialog_Text_22:
# 607 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn lives in the desert.\pIt's quite a friendly Pokémon,\nbut don't upset it!\pIt is strong enough to smash\nsolid rocks!$"

RioluDialog_Text_23:
# 616 "data/maps/daycarebase/scripts.pory"
	.string "Lurantis has been spending time\nacross the water in the mountains.\pIts sharp limbs can cut through\nsmall trees.$"

RioluDialog_Text_24:
# 625 "data/maps/daycarebase/scripts.pory"
	.string "Weavile is quite the ninja.\pIt spends time in the tall trees\nin the jungle.\pIt demands a fierce challenger\nto battle it.\pIts agility allows it to cross\neven the smallest of walkways.$"

RioluDialog_Text_25:
# 635 "data/maps/daycarebase/scripts.pory"
	.string "Oh.\pWhat else are you gonna do\nwith that egg?$"

RioluDialog_Text_26:
# 647 "data/maps/daycarebase/scripts.pory"
	.string "No?\nCome back when you do!$"

RioluDialog_Text_27:
# 659 "data/maps/daycarebase/scripts.pory"
	.string "Hiya!\pI'm Riolu!\pI've visited every biome the\nDaycare has to offer.\lI know it like the back of my paw!\pIf you need guidance on where a\ncertain Pokémon might be,\lI'm your Pokémon!\pAlthough I won't do it for free...\pBring me Lucky Eggs, and I'll tell\nyou what I know.$"

BattleVsPikachu_Text_0:
# 677 "data/maps/daycarebase/scripts.pory"
	.string "You really lit me up.\pBest of luck on your journey!\n$"

BattleVsPikachu_Text_1:
# 692 "data/maps/daycarebase/scripts.pory"
	.string "A Ditto!\pYou must be on your quest to obtain\nyour egg.\pDefeat me in battle and I'll allow\nyou to transform into me!$"

BattleVsPikachu_Text_2:
# 706 "data/maps/daycarebase/scripts.pory"
	.string "You have gained the ability to\ntransform into Pikachu!$"

BattleVsPikachu_Text_3:
# 712 "data/maps/daycarebase/scripts.pory"
	.string "How electrifying!\pElectric_type moves are powerful\nagainst Water_type Pokémon.\pThey typically spend their time in\nthe Lake Biome here.$"

ChanseyHeal_Text_0:
# 724 "data/maps/daycarebase/scripts.pory"
	.string "Chansey$"

ChanseyHeal_Text_1:
# 726 "data/maps/daycarebase/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.$"

ChanseyHeal_Text_2:
# 728 "data/maps/daycarebase/scripts.pory"
	.string "Would you like to heal?$"

ChanseyHeal_Text_3:
# 742 "data/maps/daycarebase/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyHeal_Text_4:
# 751 "data/maps/daycarebase/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyHeal_Text_5:
# 761 "data/maps/daycarebase/scripts.pory"
	.string "Oh, okay then.$"

DaycareBase_Ditto_Text_0:
# 777 "data/maps/daycarebase/scripts.pory"
	.string "Would you like to change out your\ntransformation options?$"

DaycareBase_Ditto_Text_1:
# 790 "data/maps/daycarebase/scripts.pory"
	.string "Ditto$"

DaycareBase_Ditto_Text_2:
# 792 "data/maps/daycarebase/scripts.pory"
	.string "Come back anytime!$"

DaycareBase_Ditto_Text_3:
# 804 "data/maps/daycarebase/scripts.pory"
	.string "Ditto!\pYou can only remember four\ntransformations at a time.\pWe Dittos can act as a way to\nswap out which transformations\lyou have active at anytime!\pYou'll find us scattered around\nthe Daycare.\pNow...\n$"

DaycareBase_Ditto_Text_4:
# 837 "data/maps/daycarebase/scripts.pory"
	.string "Hello there fellow Ditto!\pDaycare Man asked you to get an Egg\nfor him, did he?\pWell, you're about to learn the\nthe secret of how we Dittos are\lalways found holding Eggs.\pIt'll be quite the adventure!\pDon't forget, you are a Ditto,\nso you can transform into any\lPokémon you defeat in battle!\pThis does only apply to Pokémon\nwho are not already using\lTransform...\pPress the {SELECT_BUTTON} button to\nopen your transformation menu.\pIf you open your Transformation\nParty, you'll see which Pokémon\lyou can transform into!$"
