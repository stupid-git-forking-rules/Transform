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
# 59 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_TRANS_CUTIEFLY, ShrinkToPikachuCave_4
ShrinkToPikachuCave_3:
# 77 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_2, MSGBOX_DEFAULT
# 78 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 79 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinkToPikachuCave_1:
# 47 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_0, MSGBOX_YESNO
# 48 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinkToPikachuCave_8
# 54 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 55 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinkToPikachuCave_2:
# 61 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_1, MSGBOX_YESNO
# 62 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinkToPikachuCave_11
# 70 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 71 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinkToPikachuCave_4:
# 59 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_ne ShrinkToPikachuCave_2
	goto ShrinkToPikachuCave_3

ShrinkToPikachuCave_8:
# 50 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_PIKACHU_SHRINK_CAVE, 0
	return

ShrinkToPikachuCave_11:
# 64 "data/maps/daycarebase/scripts.pory"
	dittotransform SPECIES_CUTIEFLY
# 65 "data/maps/daycarebase/scripts.pory"
	delay 30
# 66 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_PIKACHU_SHRINK_CAVE, 0
	return


ShrinkToPikachuCave2::
# 85 "data/maps/daycarebase/scripts.pory"
	lock
# 86 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinkToPikachuCave2_1
# 100 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_TRANS_CUTIEFLY, ShrinkToPikachuCave2_4
ShrinkToPikachuCave2_3:
# 118 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_2, MSGBOX_DEFAULT
# 119 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 120 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinkToPikachuCave2_1:
# 88 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_0, MSGBOX_YESNO
# 89 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinkToPikachuCave2_8
# 95 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 96 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinkToPikachuCave2_2:
# 102 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_1, MSGBOX_YESNO
# 103 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinkToPikachuCave2_11
# 111 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 112 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinkToPikachuCave2_4:
# 100 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_ne ShrinkToPikachuCave2_2
	goto ShrinkToPikachuCave2_3

ShrinkToPikachuCave2_8:
# 91 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_PIKACHU_SHRINK_CAVE, 1
	return

ShrinkToPikachuCave2_11:
# 105 "data/maps/daycarebase/scripts.pory"
	dittotransform SPECIES_CUTIEFLY
# 106 "data/maps/daycarebase/scripts.pory"
	delay 30
# 107 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_PIKACHU_SHRINK_CAVE, 1
	return


ShrinktoMausholdCave::
# 126 "data/maps/daycarebase/scripts.pory"
	lock
# 127 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinktoMausholdCave_1
# 141 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_TRANS_CUTIEFLY, ShrinktoMausholdCave_4
ShrinktoMausholdCave_3:
# 159 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_2, MSGBOX_DEFAULT
# 160 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 161 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinktoMausholdCave_1:
# 129 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_0, MSGBOX_YESNO
# 130 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinktoMausholdCave_8
# 136 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 137 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinktoMausholdCave_2:
# 143 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_1, MSGBOX_YESNO
# 144 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinktoMausholdCave_11
# 152 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 153 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinktoMausholdCave_4:
# 141 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_ne ShrinktoMausholdCave_2
	goto ShrinktoMausholdCave_3

ShrinktoMausholdCave_8:
# 132 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_MAUSHOLD_SHRINK, 0
	return

ShrinktoMausholdCave_11:
# 146 "data/maps/daycarebase/scripts.pory"
	dittotransform SPECIES_CUTIEFLY
# 147 "data/maps/daycarebase/scripts.pory"
	delay 30
# 148 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_MAUSHOLD_SHRINK, 0
	return


MimikyuDialog::
# 167 "data/maps/daycarebase/scripts.pory"
	lock
# 168 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 169 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq MimikyuDialog_1
# 183 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_PIKACHU
	goto_if_eq MimikyuDialog_2
# 216 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 217 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYUTOP, EMOTE_NORMAL
# 218 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_DEFAULT
# 219 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 220 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 221 "data/maps/daycarebase/scripts.pory"
	release
	end

MimikyuDialog_1:
# 171 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 172 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYUTOP, EMOTE_NORMAL
# 173 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_DEFAULT
# 174 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 175 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_2
# 176 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYU, EMOTE_ANGRY
# 177 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_3, MSGBOX_DEFAULT
# 178 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 179 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 180 "data/maps/daycarebase/scripts.pory"
	release
	end

MimikyuDialog_2:
# 185 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_MIMIKYU_LUCKYEGG, MimikyuDialog_6
# 197 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 198 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYUTOP, EMOTE_NORMAL
# 199 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_DEFAULT
# 200 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 201 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_2
# 202 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYU, EMOTE_ANGRY
# 203 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_5, MSGBOX_DEFAULT
# 204 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 205 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 206 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 207 "data/maps/daycarebase/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 208 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_MIMIKYU_LUCKYEGG
# 209 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 210 "data/maps/daycarebase/scripts.pory"
	release
	end

MimikyuDialog_6:
# 187 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_2
# 188 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYU, EMOTE_ANGRY
# 189 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_4, MSGBOX_DEFAULT
# 190 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 191 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 192 "data/maps/daycarebase/scripts.pory"
	release
	end


KecleonDialog::
# 226 "data/maps/daycarebase/scripts.pory"
	lock
# 227 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 228 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq KecleonDialog_1
# 240 "data/maps/daycarebase/scripts.pory"
	speakername KecleonDialog_Text_0
# 241 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_KECLEON, EMOTE_NORMAL
# 242 "data/maps/daycarebase/scripts.pory"
	msgbox KecleonDialog_Text_2, MSGBOX_DEFAULT
# 243 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 244 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 245 "data/maps/daycarebase/scripts.pory"
	release
	end

KecleonDialog_1:
# 230 "data/maps/daycarebase/scripts.pory"
	speakername KecleonDialog_Text_0
# 231 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_KECLEON, EMOTE_NORMAL
# 232 "data/maps/daycarebase/scripts.pory"
	msgbox KecleonDialog_Text_1, MSGBOX_DEFAULT
# 233 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 234 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 235 "data/maps/daycarebase/scripts.pory"
	release
	end


AzumarillDialog::
# 252 "data/maps/daycarebase/scripts.pory"
	lock
# 253 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 254 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq AzumarillDialog_1
# 266 "data/maps/daycarebase/scripts.pory"
	speakername AzumarillDialog_Text_0
# 267 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_AZUMARILL, EMOTE_ANGRY
# 268 "data/maps/daycarebase/scripts.pory"
	msgbox AzumarillDialog_Text_2, MSGBOX_DEFAULT
# 269 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 270 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 271 "data/maps/daycarebase/scripts.pory"
	release
	end

AzumarillDialog_1:
# 256 "data/maps/daycarebase/scripts.pory"
	speakername AzumarillDialog_Text_0
# 257 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_AZUMARILL, EMOTE_NORMAL
# 258 "data/maps/daycarebase/scripts.pory"
	msgbox AzumarillDialog_Text_1, MSGBOX_DEFAULT
# 259 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 260 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 261 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareOldManDialog::
# 277 "data/maps/daycarebase/scripts.pory"
	lock
# 278 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 279 "data/maps/daycarebase/scripts.pory"
	goto_if_unset FLAG_BEAT_MEW, DaycareOldManDialog_1
# 311 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq DaycareOldManDialog_7
# 523 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 524 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_1, MSGBOX_DEFAULT
# 525 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 526 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_1:
# 281 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_OLDMAN_INTRO, DaycareOldManDialog_4
# 301 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 302 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_2, MSGBOX_DEFAULT
# 303 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 304 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_OLDMAN_INTRO
# 305 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_4:
# 283 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq DaycareOldManDialog_10
# 292 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 293 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_1, MSGBOX_DEFAULT
# 294 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 295 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_7:
# 313 "data/maps/daycarebase/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 314 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 315 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_0
# 316 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 317 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, Common_Movement_ExclamationMark
# 318 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 319 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 320 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_3, MSGBOX_YESNO
# 321 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 322 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareOldManDialog_13
# 423 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 424 "data/maps/daycarebase/scripts.pory"
	playse SE_M_SCRATCH
# 425 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_15, MSGBOX_DEFAULT
# 426 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 427 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 428 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 429 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_5, MSGBOX_DEFAULT
# 430 "data/maps/daycarebase/scripts.pory"
	removeobject BrendanBiking
# 431 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_HIDE_BRENDAN_BIKE
# 432 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 433 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 434 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP
# 435 "data/maps/daycarebase/scripts.pory"
	waitse
# 436 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP_MAX
# 437 "data/maps/daycarebase/scripts.pory"
	waitse
# 438 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 439 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_6, MSGBOX_DEFAULT
# 440 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 441 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 442 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 443 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_7, MSGBOX_AUTOCLOSE
# 444 "data/maps/daycarebase/scripts.pory"
	special SpawnCameraObject
# 445 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_1
# 446 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 447 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_2
# 448 "data/maps/daycarebase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DaycareOldManDialog_Movement_2
# 449 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 450 "data/maps/daycarebase/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 451 "data/maps/daycarebase/scripts.pory"
	delay 60
# 452 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 24
# 453 "data/maps/daycarebase/scripts.pory"
	delay 60
# 454 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SHOW_BRENDAN_OUTRO
# 455 "data/maps/daycarebase/scripts.pory"
	addobject Brendan
# 456 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK, 24
# 457 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_3
# 458 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 459 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 460 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, Common_Movement_ExclamationMark
# 461 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 462 "data/maps/daycarebase/scripts.pory"
	delay 30
# 463 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_4
# 464 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 465 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_5
# 466 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 467 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 468 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_8, MSGBOX_DEFAULT
# 469 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 470 "data/maps/daycarebase/scripts.pory"
	delay 30
# 471 "data/maps/daycarebase/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 472 "data/maps/daycarebase/scripts.pory"
	delay 60
# 473 "data/maps/daycarebase/scripts.pory"
	special CountLuckyEggs
# 474 "data/maps/daycarebase/scripts.pory"
	special GetWhiteoutCount
# 475 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_0, VAR_WHITEOUT_COUNT
# 476 "data/maps/daycarebase/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_0
# 477 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_1, VAR_LUCKYEGG_COUNT
# 478 "data/maps/daycarebase/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_1
# 479 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_61
DaycareOldManDialog_58:
# 485 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_57
DaycareOldManDialog_54:
# 491 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_53
DaycareOldManDialog_51:
# 497 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_ne DaycareOldManDialog_50
DaycareOldManDialog_48:
# 503 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_ne DaycareOldManDialog_47
DaycareOldManDialog_46:
# 511 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_14, MSGBOX_DEFAULT
# 512 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 513 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
DaycareOldManDialog_40:
# 515 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 516 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_BEAT_MEW
# 517 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SHOW_BRENDAN_OUTRO
# 518 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_HIDE_BRENDAN_BIKE
# 519 "data/maps/daycarebase/scripts.pory"
	special GameClear
	return

DaycareOldManDialog_10:
# 285 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 286 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_0, MSGBOX_DEFAULT
# 287 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 288 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_13:
# 324 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 325 "data/maps/daycarebase/scripts.pory"
	playse SE_ITEMFINDER
# 326 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_4, MSGBOX_DEFAULT
# 327 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 328 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 329 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 330 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_5, MSGBOX_DEFAULT
# 331 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 332 "data/maps/daycarebase/scripts.pory"
	removeobject BrendanBiking
# 333 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_HIDE_BRENDAN_BIKE
# 334 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 335 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP
# 336 "data/maps/daycarebase/scripts.pory"
	waitse
# 337 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP_MAX
# 338 "data/maps/daycarebase/scripts.pory"
	waitse
# 339 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 340 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_6, MSGBOX_DEFAULT
# 341 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 342 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 343 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 344 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_7, MSGBOX_AUTOCLOSE
# 345 "data/maps/daycarebase/scripts.pory"
	special SpawnCameraObject
# 346 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_1
# 347 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 348 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_2
# 349 "data/maps/daycarebase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DaycareOldManDialog_Movement_2
# 350 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 351 "data/maps/daycarebase/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 352 "data/maps/daycarebase/scripts.pory"
	delay 60
# 353 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 24
# 354 "data/maps/daycarebase/scripts.pory"
	delay 60
# 355 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SHOW_BRENDAN_OUTRO
# 356 "data/maps/daycarebase/scripts.pory"
	addobject Brendan
# 357 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK, 24
# 358 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_3
# 359 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 360 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 361 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, Common_Movement_ExclamationMark
# 362 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 363 "data/maps/daycarebase/scripts.pory"
	delay 30
# 364 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_4
# 365 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 366 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_5
# 367 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 368 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 369 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_8, MSGBOX_DEFAULT
# 370 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 371 "data/maps/daycarebase/scripts.pory"
	delay 30
# 372 "data/maps/daycarebase/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 373 "data/maps/daycarebase/scripts.pory"
	delay 60
# 374 "data/maps/daycarebase/scripts.pory"
	special CountLuckyEggs
# 375 "data/maps/daycarebase/scripts.pory"
	special GetWhiteoutCount
# 376 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_0, VAR_WHITEOUT_COUNT
# 377 "data/maps/daycarebase/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_0
# 378 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_1, VAR_LUCKYEGG_COUNT
# 379 "data/maps/daycarebase/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_1
# 380 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_37
DaycareOldManDialog_34:
# 386 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_33
DaycareOldManDialog_30:
# 392 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_29
DaycareOldManDialog_27:
# 398 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_ne DaycareOldManDialog_26
DaycareOldManDialog_24:
# 404 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_ne DaycareOldManDialog_23
DaycareOldManDialog_22:
# 412 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_14, MSGBOX_DEFAULT
# 413 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 414 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
DaycareOldManDialog_16:
# 416 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 417 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_BEAT_MEW
# 418 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SHOW_BRENDAN_OUTRO
# 419 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_HIDE_BRENDAN_BIKE
# 420 "data/maps/daycarebase/scripts.pory"
	special GameClear
	return

DaycareOldManDialog_17:
# 382 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_9, MSGBOX_DEFAULT
# 383 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 384 "data/maps/daycarebase/scripts.pory"
	special ForceShinyDitto
	goto DaycareOldManDialog_16

DaycareOldManDialog_18:
# 388 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_10, MSGBOX_DEFAULT
# 389 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 390 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_16

DaycareOldManDialog_19:
# 394 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_11, MSGBOX_DEFAULT
# 395 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 396 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_16

DaycareOldManDialog_20:
# 400 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_12, MSGBOX_DEFAULT
# 401 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 402 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_16

DaycareOldManDialog_21:
# 406 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_13, MSGBOX_DEFAULT
# 407 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 408 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_16

DaycareOldManDialog_23:
# 404 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_eq DaycareOldManDialog_21
	goto DaycareOldManDialog_22

DaycareOldManDialog_26:
# 398 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_eq DaycareOldManDialog_20
	goto DaycareOldManDialog_24

DaycareOldManDialog_29:
# 392 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_eq DaycareOldManDialog_19
	goto DaycareOldManDialog_27

DaycareOldManDialog_32:
# 386 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_gt DaycareOldManDialog_18
	goto DaycareOldManDialog_30

DaycareOldManDialog_33:
# 386 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_ne DaycareOldManDialog_32
	goto DaycareOldManDialog_30

DaycareOldManDialog_37:
# 380 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_eq DaycareOldManDialog_17
	goto DaycareOldManDialog_34

DaycareOldManDialog_41:
# 481 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_9, MSGBOX_DEFAULT
# 482 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 483 "data/maps/daycarebase/scripts.pory"
	special ForceShinyDitto
	goto DaycareOldManDialog_40

DaycareOldManDialog_42:
# 487 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_10, MSGBOX_DEFAULT
# 488 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 489 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_40

DaycareOldManDialog_43:
# 493 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_11, MSGBOX_DEFAULT
# 494 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 495 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_40

DaycareOldManDialog_44:
# 499 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_12, MSGBOX_DEFAULT
# 500 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 501 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_40

DaycareOldManDialog_45:
# 505 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_13, MSGBOX_DEFAULT
# 506 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 507 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_40

DaycareOldManDialog_47:
# 503 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_eq DaycareOldManDialog_45
	goto DaycareOldManDialog_46

DaycareOldManDialog_50:
# 497 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_eq DaycareOldManDialog_44
	goto DaycareOldManDialog_48

DaycareOldManDialog_53:
# 491 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_eq DaycareOldManDialog_43
	goto DaycareOldManDialog_51

DaycareOldManDialog_56:
# 485 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_gt DaycareOldManDialog_42
	goto DaycareOldManDialog_54

DaycareOldManDialog_57:
# 485 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_ne DaycareOldManDialog_56
	goto DaycareOldManDialog_54

DaycareOldManDialog_61:
# 479 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_eq DaycareOldManDialog_41
	goto DaycareOldManDialog_58


VaporeonDialog::
# 537 "data/maps/daycarebase/scripts.pory"
	lock
# 538 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 539 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_2
# 540 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_VAPOREON, EMOTE_ANGRY
# 541 "data/maps/daycarebase/scripts.pory"
	msgbox VaporeonDialog_Text_0, MSGBOX_NPC
# 542 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 543 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 544 "data/maps/daycarebase/scripts.pory"
	release
	end


LaprasDialog::
# 550 "data/maps/daycarebase/scripts.pory"
	lock
# 551 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 552 "data/maps/daycarebase/scripts.pory"
	speakername LaprasDialog_Text_0
# 553 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_LAPRAS, EMOTE_HAPPY
# 554 "data/maps/daycarebase/scripts.pory"
	msgbox LaprasDialog_Text_1, MSGBOX_DEFAULT
# 555 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 556 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 557 "data/maps/daycarebase/scripts.pory"
	release
	end


LinooneDialog::
# 562 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq LinooneDialog_1
# 576 "data/maps/daycarebase/scripts.pory"
	lock
# 577 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 578 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 579 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_LINOONE, EMOTE_NORMAL
# 580 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_2
# 581 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 582 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 583 "data/maps/daycarebase/scripts.pory"
	release
	end

LinooneDialog_1:
# 564 "data/maps/daycarebase/scripts.pory"
	lock
# 565 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 566 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 567 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_LINOONE, EMOTE_NORMAL
# 568 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_1
# 569 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 570 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 571 "data/maps/daycarebase/scripts.pory"
	release
	end


BulbsaurDialog::
# 589 "data/maps/daycarebase/scripts.pory"
	lock
# 590 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 591 "data/maps/daycarebase/scripts.pory"
	speakername BulbsaurDialog_Text_0
# 592 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_BULBASAUR, EMOTE_NORMAL
# 593 "data/maps/daycarebase/scripts.pory"
	msgbox BulbsaurDialog_Text_1, MSGBOX_NPC
# 594 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 595 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 596 "data/maps/daycarebase/scripts.pory"
	release
	end


CombeeDialog::
# 601 "data/maps/daycarebase/scripts.pory"
	lock
# 602 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 603 "data/maps/daycarebase/scripts.pory"
	speakername CombeeDialog_Text_0
# 604 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_COMBEE, EMOTE_NORMAL
# 605 "data/maps/daycarebase/scripts.pory"
	msgbox CombeeDialog_Text_1, MSGBOX_NPC
# 606 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 607 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 608 "data/maps/daycarebase/scripts.pory"
	release
	end


Porygon2Dialog::
# 613 "data/maps/daycarebase/scripts.pory"
	lock
# 614 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 615 "data/maps/daycarebase/scripts.pory"
	speakername Porygon2Dialog_Text_0
# 616 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PORYGON2, EMOTE_NORMAL
# 617 "data/maps/daycarebase/scripts.pory"
	msgbox Porygon2Dialog_Text_1, MSGBOX_NPC
# 618 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 619 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 620 "data/maps/daycarebase/scripts.pory"
	release
	end


ScytherDialog::
# 625 "data/maps/daycarebase/scripts.pory"
	lock
# 626 "data/maps/daycarebase/scripts.pory"
	applymovement scyther, DaycareOldManDialog_Movement_0
# 627 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_DITTO_IS_SHINY, ScytherDialog_3
ScytherDialog_2:
# 643 "data/maps/daycarebase/scripts.pory"
	speakername ScytherDialog_Text_0
# 644 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_SCYTHER, EMOTE_NORMAL
# 645 "data/maps/daycarebase/scripts.pory"
	msgbox ScytherDialog_Text_3, MSGBOX_DEFAULT
# 646 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 647 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 648 "data/maps/daycarebase/scripts.pory"
	release
	end

ScytherDialog_1:
# 629 "data/maps/daycarebase/scripts.pory"
	speakername ScytherDialog_Text_0
# 630 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_SCYTHER, EMOTE_NORMAL
# 631 "data/maps/daycarebase/scripts.pory"
	msgbox ScytherDialog_Text_1, MSGBOX_DEFAULT
# 632 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 633 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 634 "data/maps/daycarebase/scripts.pory"
	applymovement scyther, Common_Movement_ExclamationMark
# 635 "data/maps/daycarebase/scripts.pory"
	waitmovement scyther
# 636 "data/maps/daycarebase/scripts.pory"
	msgbox ScytherDialog_Text_2
# 637 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 638 "data/maps/daycarebase/scripts.pory"
	release
	end

ScytherDialog_3:
# 627 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq ScytherDialog_1
	goto ScytherDialog_2


RioluDialog::
# 654 "data/maps/daycarebase/scripts.pory"
	lock
# 655 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 656 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_RIOLU_INTRO, RioluDialog_1
# 791 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 792 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 793 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_28, MSGBOX_DEFAULT
# 794 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_RIOLU_INTRO
# 795 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 796 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 797 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_1:
# 658 "data/maps/daycarebase/scripts.pory"
	lock
# 659 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 660 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 661 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 662 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_1, MSGBOX_DEFAULT
# 663 "data/maps/daycarebase/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 664 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 665 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RioluDialog_4
# 778 "data/maps/daycarebase/scripts.pory"
	lock
# 779 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 780 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 781 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_27, MSGBOX_AUTOCLOSE
# 782 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 783 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 784 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_4:
# 667 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 668 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_2, MSGBOX_DEFAULT
# 669 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 670 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_3, MSGBOX_YESNO
# 671 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RioluDialog_7
# 768 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 769 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_26
# 770 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 771 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 772 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_7:
# 673 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 674 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_4, MSGBOX_DEFAULT
# 675 "data/maps/daycarebase/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 676 "data/maps/daycarebase/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, RioluDialog_Text_5, RioluDialog_Text_6, RioluDialog_Text_7, RioluDialog_Text_8, RioluDialog_Text_9, RioluDialog_Text_10, RioluDialog_Text_11, MimikyuDialog_Text_0, RioluDialog_Text_12, RioluDialog_Text_13, RioluDialog_Text_14
# 677 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RioluDialog_10
# 685 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RioluDialog_11
# 693 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RioluDialog_12
# 701 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RioluDialog_13
# 709 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq RioluDialog_14
# 717 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq RioluDialog_15
# 725 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq RioluDialog_16
# 733 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq RioluDialog_17
# 741 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq RioluDialog_18
# 749 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq RioluDialog_19
# 757 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq RioluDialog_20
	return

RioluDialog_10:
# 679 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_15, MSGBOX_DEFAULT
# 680 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 681 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 682 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_11:
# 687 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_16, MSGBOX_DEFAULT
# 688 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 689 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 690 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_12:
# 695 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_17, MSGBOX_DEFAULT
# 696 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 697 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 698 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_13:
# 703 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_18, MSGBOX_DEFAULT
# 704 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 705 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 706 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_14:
# 711 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_19, MSGBOX_DEFAULT
# 712 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 713 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 714 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_15:
# 719 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_20, MSGBOX_DEFAULT
# 720 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 721 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 722 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_16:
# 727 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_21, MSGBOX_DEFAULT
# 728 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 729 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 730 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_17:
# 735 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_22, MSGBOX_DEFAULT
# 736 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 737 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 738 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_18:
# 743 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_23, MSGBOX_DEFAULT
# 744 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 745 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 746 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_19:
# 751 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_24, MSGBOX_DEFAULT
# 752 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 753 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 754 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_20:
# 759 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_25, MSGBOX_DEFAULT
# 760 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 761 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 762 "data/maps/daycarebase/scripts.pory"
	release
	end


BattleVsPikachu::
# 804 "data/maps/daycarebase/scripts.pory"
	lock
# 806 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_TRANS_PIKACHU, BattleVsPikachu_2
# 818 "data/maps/daycarebase/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 819 "data/maps/daycarebase/scripts.pory"
	applymovement Pikachu, DaycareOldManDialog_Movement_0
# 820 "data/maps/daycarebase/scripts.pory"
	waitmovement Pikachu
# 821 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 822 "data/maps/daycarebase/scripts.pory"
	applymovement Pikachu, Common_Movement_ExclamationMark
# 823 "data/maps/daycarebase/scripts.pory"
	waitmovement Pikachu
# 824 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 825 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PIKACHU, EMOTE_NORMAL
# 826 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_1, MSGBOX_AUTOCLOSE
# 827 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 828 "data/maps/daycarebase/scripts.pory"
	setwildbattle SPECIES_PIKACHU, 25
# 829 "data/maps/daycarebase/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 830 "data/maps/daycarebase/scripts.pory"
	dowildbattle
# 831 "data/maps/daycarebase/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 832 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsPikachu_4
	return

BattleVsPikachu_2:
# 808 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 809 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 810 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PIKACHU, EMOTE_NORMAL
# 811 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_0, MSGBOX_DEFAULT
# 812 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 813 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 814 "data/maps/daycarebase/scripts.pory"
	release
	end

BattleVsPikachu_4:
# 834 "data/maps/daycarebase/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 835 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 836 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_TRANS_PIKACHU
# 837 "data/maps/daycarebase/scripts.pory"
	delay 15
# 838 "data/maps/daycarebase/scripts.pory"
	dittotransform SPECIES_PIKACHU
# 839 "data/maps/daycarebase/scripts.pory"
	playse MUS_LEVEL_UP
# 840 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_2, MSGBOX_DEFAULT
# 841 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 842 "data/maps/daycarebase/scripts.pory"
	dittotransform VAR_TEMP_0
# 843 "data/maps/daycarebase/scripts.pory"
	givemon SPECIES_PIKACHU, 25, move1 = MOVE_NUZZLE, move2 = MOVE_IRON_TAIL, move3 = MOVE_SPARK, move4 = MOVE_FLASH
# 844 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 845 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PIKACHU, EMOTE_HAPPY
# 846 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_3, MSGBOX_DEFAULT
# 847 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 848 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 849 "data/maps/daycarebase/scripts.pory"
	fadenewbgm MUS_PMD_HEARTWARMING
# 850 "data/maps/daycarebase/scripts.pory"
	release
	end


ChanseyHeal::
# 856 "data/maps/daycarebase/scripts.pory"
	lock
# 857 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 858 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_CHANSEY_INTRO, ChanseyHeal_1
# 906 "data/maps/daycarebase/scripts.pory"
	lock
# 907 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 908 "data/maps/daycarebase/scripts.pory"
	speakername ChanseyHeal_Text_0
# 909 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 910 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_6, MSGBOX_DEFAULT
# 911 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 912 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_CHANSEY_INTRO
# 913 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 914 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_1:
# 860 "data/maps/daycarebase/scripts.pory"
	speakername ChanseyHeal_Text_0
# 861 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 862 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_1, MSGBOX_DEFAULT
# 863 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 864 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_2, MSGBOX_YESNO
# 865 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 866 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyHeal_4
# 896 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 897 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_5, MSGBOX_AUTOCLOSE
# 898 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 899 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 900 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_4:
# 868 "data/maps/daycarebase/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 869 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyHeal_7
# 886 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 887 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_4, MSGBOX_AUTOCLOSE
# 888 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 889 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 890 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_7:
# 871 "data/maps/daycarebase/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 872 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 873 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 874 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_HEAL
# 875 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 876 "data/maps/daycarebase/scripts.pory"
	special HealPlayerParty
# 877 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 878 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_3, MSGBOX_AUTOCLOSE
# 879 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 880 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 881 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_Ditto::
# 921 "data/maps/daycarebase/scripts.pory"
	lock
# 922 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 923 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_DITTO_INTRO, DaycareBase_Ditto_1
# 963 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_1
# 964 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 965 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_4, MSGBOX_DEFAULT
# 966 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 967 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_DITTO_INTRO
# 968 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 969 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 970 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_1:
# 925 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_XFORMS_TALKED_TO_DITTO, DaycareBase_Ditto_4
# 951 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_1
# 952 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 953 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_3, MSGBOX_DEFAULT
# 954 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 955 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 956 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_4:
# 927 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_0, MSGBOX_YESNO
# 928 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareBase_Ditto_7
# 939 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_1
# 940 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 941 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_2, MSGBOX_AUTOCLOSE
# 942 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 943 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 944 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 945 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 946 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_7:
# 930 "data/maps/daycarebase/scripts.pory"
	dittotransform SPECIES_DITTO
# 931 "data/maps/daycarebase/scripts.pory"
	special OpenPCMoveMons
# 932 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 933 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 934 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycarebaseDitto_intro_trigger::
# 977 "data/maps/daycarebase/scripts.pory"
	goto_if_unset FLAG_DITTO_INTRO, DaycarebaseDitto_intro_trigger_1
	end

DaycarebaseDitto_intro_trigger_1:
# 979 "data/maps/daycarebase/scripts.pory"
	lock
# 980 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 981 "data/maps/daycarebase/scripts.pory"
	applymovement DittoIntro, Common_Movement_ExclamationMark
# 982 "data/maps/daycarebase/scripts.pory"
	waitmovement DittoIntro
# 983 "data/maps/daycarebase/scripts.pory"
	applymovement DittoIntro, DaycareIntro_Movement_2
# 984 "data/maps/daycarebase/scripts.pory"
	waitmovement DittoIntro
# 985 "data/maps/daycarebase/scripts.pory"
	applymovement LOCALID_PLAYER, DaycareIntro_Movement_3
# 986 "data/maps/daycarebase/scripts.pory"
	waitmovement LOCALID_PLAYER
# 987 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_1
# 988 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 989 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_4, MSGBOX_DEFAULT
# 990 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 991 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 992 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_DITTO_INTRO
# 993 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_FindLuckyEgg::
# 1003 "data/maps/daycarebase/scripts.pory"
	finditem ITEM_LUCKY_EGG
	return


DaycareBase_FindLuckyEgg1::
# 1007 "data/maps/daycarebase/scripts.pory"
	lock
# 1008 "data/maps/daycarebase/scripts.pory"
	removeobject luckyegg1
# 1009 "data/maps/daycarebase/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 1010 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 1011 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_ITEM_DAYCARE_BASE1
# 1012 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_FindLuckyEgg2::
# 1017 "data/maps/daycarebase/scripts.pory"
	lock
# 1018 "data/maps/daycarebase/scripts.pory"
	removeobject luckyegg2
# 1019 "data/maps/daycarebase/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 1020 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 1021 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_ITEM_DAYCARE_EAST1
# 1022 "data/maps/daycarebase/scripts.pory"
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

# 315 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_0:
# 315 "data/maps/daycarebase/scripts.pory"
	face_player
	step_end

# 346 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_1:
# 346 "data/maps/daycarebase/scripts.pory"
	face_down
	step_end

# 348 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_2:
# 348 "data/maps/daycarebase/scripts.pory"
	walk_down
# 348 "data/maps/daycarebase/scripts.pory"
	walk_down
	step_end

# 358 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_3:
# 358 "data/maps/daycarebase/scripts.pory"
	walk_right
# 358 "data/maps/daycarebase/scripts.pory"
	walk_right
# 358 "data/maps/daycarebase/scripts.pory"
	walk_right
# 358 "data/maps/daycarebase/scripts.pory"
	walk_right
# 358 "data/maps/daycarebase/scripts.pory"
	walk_right
	step_end

# 364 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_4:
# 364 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 364 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 364 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 364 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 364 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
	step_end

# 366 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_5:
# 366 "data/maps/daycarebase/scripts.pory"
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
	.string "There is a tiny hole.\pA small Pokémon may be able to\nsqueeze through it.\pWould you like to transform into\nCutiefly to squeeze through it?$"

ShrinkToPikachuCave_Text_2:
# 77 "data/maps/daycarebase/scripts.pory"
	.string "There is a tiny hole.\pA small Pokémon may be able to\nsqueeze through it.$"

MimikyuDialog_Text_0:
# 171 "data/maps/daycarebase/scripts.pory"
	.string "Pikachu$"

MimikyuDialog_Text_1:
# 173 "data/maps/daycarebase/scripts.pory"
	.string "Hey!\pI'm just a normal Pikachu in my usual\nspot!$"

MimikyuDialog_Text_2:
# 175 "data/maps/daycarebase/scripts.pory"
	.string "Mimikyu$"

MimikyuDialog_Text_3:
# 177 "data/maps/daycarebase/scripts.pory"
	.string "Oh...\nYou caught me.\pI wish I could disguise myself as\nwell as you can...\pMaybe then people would like me more...$"

MimikyuDialog_Text_4:
# 189 "data/maps/daycarebase/scripts.pory"
	.string "I've always looked up to you\nPikachu.\pI hope my disguise doesn't insult\nyou..$"

MimikyuDialog_Text_5:
# 203 "data/maps/daycarebase/scripts.pory"
	.string "Oh!\nA real life Pikachu!\pYou are my idol.\pPlease take this.\n$"

KecleonDialog_Text_0:
# 230 "data/maps/daycarebase/scripts.pory"
	.string "Kecleon$"

KecleonDialog_Text_1:
# 232 "data/maps/daycarebase/scripts.pory"
	.string "Where do Eggs come from?\pMy trainer left me here a long time\nago and I've yet to find one.\pDo you know?\pI've always heard of Dittos\nholding onto Eggs...$"

KecleonDialog_Text_2:
# 242 "data/maps/daycarebase/scripts.pory"
	.string "Where do Eggs come from?\pMy trainer left me here a long time\nago and I've yet to find one.$"

AzumarillDialog_Text_0:
# 256 "data/maps/daycarebase/scripts.pory"
	.string "Azumarill$"

AzumarillDialog_Text_1:
# 258 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pYou'll fit in well here.$"

AzumarillDialog_Text_2:
# 268 "data/maps/daycarebase/scripts.pory"
	.string "Oh!\nThank goodness you aren't a Ditto...\pMy trainer keeps putting me in here\nwith Dittos hoping we'll find an\lEgg.\pThey gave me this Sea Incence,\nbut I'm not sure how that would\lhelp us on our hunt...$"

DaycareOldManDialog_Text_0:
# 286 "data/maps/daycarebase/scripts.pory"
	.string "Back from exploring the Daycare?\pAh!\nBut where is your Egg?\pKeep doing whatever it is you\nDittos do and come back when\lyou have one!$"

DaycareOldManDialog_Text_1:
# 293 "data/maps/daycarebase/scripts.pory"
	.string "Why, who are you?\pI'm looking for a Ditto.\n$"

DaycareOldManDialog_Text_2:
# 302 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pDespite what trainers may see from\nRoute 117, the Daycare is a vast\larea filled with biomes for nearly\levery type of Pokémon!\pExplore the Daycare and interact\nwith many of the Pokémon we are\lraising.\pYou never know what friends you\nwill make along the way!\pNow, I do expect you to be holding\nan Egg at some point... Every Ditto\lI've raised has produced one.\pWhen you're holding an Egg,\ncome back and talk to me and\lwe can get it to your trainer.$"

DaycareOldManDialog_Text_3:
# 320 "data/maps/daycarebase/scripts.pory"
	.string "Why what do we have here?\nGoodness!\pYou're holding an Egg!\pWherever did you get this?\pIt's the darndest thing.\pYou Pokémon always seem to find\nthese Eggs, but I can never figure\lout where they come from.\pWould you like to give me the Egg\nso that I may give it to your\lTrainer?$"

DaycareOldManDialog_Text_4:
# 326 "data/maps/daycarebase/scripts.pory"
	.string "Ditto handed over the Egg.\n$"

DaycareOldManDialog_Text_5:
# 330 "data/maps/daycarebase/scripts.pory"
	.string "Thank your for the Egg!\pAs a reward, take this EXP!\n$"

DaycareOldManDialog_Text_6:
# 340 "data/maps/daycarebase/scripts.pory"
	.string "Ditto grew to level 26.\n$"

DaycareOldManDialog_Text_7:
# 344 "data/maps/daycarebase/scripts.pory"
	.string "With this Egg, I can now fulfill\nmy duties.$"

DaycareOldManDialog_Text_8:
# 369 "data/maps/daycarebase/scripts.pory"
	.string "Ah, it's you!\pWe were raising your Pokémon\nand my goodness, were we surprised!\pYour Pokémon had an Egg!\pWe don't know how it got there,\nbut your Pokémon had it.\pYou do want it, yes?\n$"

DaycareOldManDialog_Text_9:
# 382 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR BLUE}{SHADOW LIGHT_BLUE}0\n{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Lucky Eggs found: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_2}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pAmazing!\pYou beat the game with 0 whiteouts\nand found all of the Lucky Eggs!\pCongratulations!\pStart a new game for a reward!$"

DaycareOldManDialog_Text_10:
# 388 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR BLUE}{SHADOW LIGHT_BLUE}0{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_2}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pAmazing!\pYou beat the game with 0 whiteouts!\pKeep searching for the remaining\nLucky Eggs and defeat Mew again to\l100% the game!$"

DaycareOldManDialog_Text_11:
# 394 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR BLUE}{SHADOW LIGHT_BLUE}0{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {COLOR RED}{SHADOW LIGHT_RED}0{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pAmazing!\pYou beat the game with 0 whiteouts!\pKeep searching for the remaining\nLucky Eggs and defeat Mew again to\l100% the game!$"

DaycareOldManDialog_Text_12:
# 400 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {COLOR RED}{SHADOW LIGHT_RED}0{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pGreat job!\pYou can continue this save and\nfind the remaining Lucky eggs.\pChallenge Mew again and speak\nto the Daycare Man.\pStart a new run to try to win\nwithout whiting out.$"

DaycareOldManDialog_Text_13:
# 406 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_2}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pGreat Job!\nYou found all of the Lucky Eggs!\pStart a new run to try to win\nwithout whiting out.$"

DaycareOldManDialog_Text_14:
# 412 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_2}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pGreat job!\pYou can continue this save and\nfind the remaining Lucky eggs.\pChallenge Mew again and speak\nto the Daycare Man.\pStart a new run to try to win\nwithout whiting out.$"

DaycareOldManDialog_Text_15:
# 425 "data/maps/daycarebase/scripts.pory"
	.string "The Daycare Man ripped the Egg\nfrom Ditto's clutches.$"

VaporeonDialog_Text_0:
# 541 "data/maps/daycarebase/scripts.pory"
	.string "Ugh!\nYou again.\pEveryone here keeps asking me to\nhelp them search for Eggs.\pCan't a Vaporeon just relax?$"

LaprasDialog_Text_0:
# 552 "data/maps/daycarebase/scripts.pory"
	.string "Lapras$"

LaprasDialog_Text_1:
# 554 "data/maps/daycarebase/scripts.pory"
	.string "I love the Daycare!\pIt's so peaceful and quiet here.\pI can just float around all day\nand relax.\pThose waterfalls are pretty\nvicious, I won't go near them.\pI've heard that Dragonair can\neasily scale even the largest\lof waterfalls!$"

LinooneDialog_Text_0:
# 566 "data/maps/daycarebase/scripts.pory"
	.string "Linoone$"

LinooneDialog_Text_1:
# 568 "data/maps/daycarebase/scripts.pory"
	.string "The Daycare is huge!\pIt's a bit scary to expore,\nso I stay up here.\pRiolu is way more brave than I\nam and has explored the entirety\lof the Daycare.\pYou should talk with Riolu if\nyou get lost!\pI'm sure they can help!\n$"

LinooneDialog_Text_2:
# 580 "data/maps/daycarebase/scripts.pory"
	.string "Those Dittos really freak me out.\pThey could be any one of us right\nnow...\pEven you!... or me!\n$"

BulbsaurDialog_Text_0:
# 591 "data/maps/daycarebase/scripts.pory"
	.string "Bulbasaur$"

BulbsaurDialog_Text_1:
# 593 "data/maps/daycarebase/scripts.pory"
	.string "You want to know where Eggs\ncome from?\pI heard that a Pokémon needs\nto go on a great adventure to\lmeet a shapeshifting Pokémon.\pIf you can best them, they will\ngive you an egg!\pAt least, that's what Venusaur\ntold me...$"

CombeeDialog_Text_0:
# 603 "data/maps/daycarebase/scripts.pory"
	.string "Combee$"

CombeeDialog_Text_1:
# 605 "data/maps/daycarebase/scripts.pory"
	.string "I've been in this Daycare\nfor ages!\pI've flown all around and\npollenated so many flowers\lbut I still haven't gained a\lsingle level.\pI'm beginning to believe gaining\nEXP here is nothing more\lthan a big ole myth!$"

Porygon2Dialog_Text_0:
# 615 "data/maps/daycarebase/scripts.pory"
	.string "Porygon2$"

Porygon2Dialog_Text_1:
# 617 "data/maps/daycarebase/scripts.pory"
	.string "Another Ditto...\pI'm actually a Ditto too,\nI just prefer this look.\pThe Daycare population must be at\nleast 75 percent Dittos!\pMost Dittos will take on different\nforms.\pYou won't be able to transform\ninto a form that another Ditto has\ltaken on though.$"

ScytherDialog_Text_0:
# 629 "data/maps/daycarebase/scripts.pory"
	.string "Scyther$"

ScytherDialog_Text_1:
# 631 "data/maps/daycarebase/scripts.pory"
	.string "One in every {COLOR BLUE}{SHADOW LIGHT_BLUE}fifty {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Dittos that I\nsee here are blue.$"

ScytherDialog_Text_2:
# 636 "data/maps/daycarebase/scripts.pory"
	.string "Oh hey!\pYou're one of the blue ones!\pYou must've gotten really lucky!$"

ScytherDialog_Text_3:
# 645 "data/maps/daycarebase/scripts.pory"
	.string "One in every {COLOR BLUE}{SHADOW LIGHT_BLUE}fifty {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Dittos that I\nsee here are blue.\pThere must be some reason trainers\nput so many in here...$"

RioluDialog_Text_0:
# 660 "data/maps/daycarebase/scripts.pory"
	.string "Riolu$"

RioluDialog_Text_1:
# 662 "data/maps/daycarebase/scripts.pory"
	.string "Back with a Lucky Egg?\n$"

RioluDialog_Text_2:
# 668 "data/maps/daycarebase/scripts.pory"
	.string "Great!\pI can tell about the habitat and\nability of a Pokémon in the Daycare.$"

RioluDialog_Text_3:
# 670 "data/maps/daycarebase/scripts.pory"
	.string "Would you like to exchange a\nLucky Egg?$"

RioluDialog_Text_4:
# 674 "data/maps/daycarebase/scripts.pory"
	.string "Which Pokémon would you like to\nknow more about?$"

RioluDialog_Text_5:
# 676 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine$"

RioluDialog_Text_6:
# 676 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou$"

RioluDialog_Text_7:
# 676 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly$"

RioluDialog_Text_8:
# 676 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair$"

RioluDialog_Text_9:
# 676 "data/maps/daycarebase/scripts.pory"
	.string "Marill$"

RioluDialog_Text_10:
# 676 "data/maps/daycarebase/scripts.pory"
	.string "Machamp$"

RioluDialog_Text_11:
# 676 "data/maps/daycarebase/scripts.pory"
	.string "Noivern$"

RioluDialog_Text_12:
# 676 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn$"

RioluDialog_Text_13:
# 676 "data/maps/daycarebase/scripts.pory"
	.string "Lurantis$"

RioluDialog_Text_14:
# 676 "data/maps/daycarebase/scripts.pory"
	.string "Weavile$"

RioluDialog_Text_15:
# 679 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine can be found deep in the\nVolcano.\pIt can run really fast and scale\nhills that would normally be tooS\lslippery to climb!$"

RioluDialog_Text_16:
# 687 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou can be found in a cave\non the water in the desert.\pIt can dive deep underwater.\n$"

RioluDialog_Text_17:
# 695 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly can be found in the\nDaycare's flowers to the west.\pIt's a tiny Pokémon that can\nfit through small openings.$"

RioluDialog_Text_18:
# 703 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair can be found at the lake.\pIt can be a bit cryptic so it\nmay be difficult to reach.\pIt can scale large waterfalls\nwith ease.$"

RioluDialog_Text_19:
# 711 "data/maps/daycarebase/scripts.pory"
	.string "Marill can be found at the lake,\nusually by the shore.\pIt's a bit shy so it may be hiding.\pIt can float in any body of water.\n$"

RioluDialog_Text_20:
# 719 "data/maps/daycarebase/scripts.pory"
	.string "Machamp likes to train deep in\nthe mountains.\pIt is a very tough and solitary\nPokémon.\pIts strength can move large\nboulders.$"

RioluDialog_Text_21:
# 727 "data/maps/daycarebase/scripts.pory"
	.string "Noivern hangs out in a dark\ncave above the Daycare Falls.\pIt's quite a powerful Pokémon,\nso be prepared for a fight.\pIt can soar through the air,\nreaching places unreachable by\lnon_flying types.$"

RioluDialog_Text_22:
# 735 "data/maps/daycarebase/scripts.pory"
	.string "Pikachu is standing on that cliff\nright over there.\pIts electricity can light up even\nthe darkest of caves.$"

RioluDialog_Text_23:
# 743 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn lives in the desert.\pIt's quite a friendly Pokémon,\nbut don't upset it!\pIt is strong enough to smash\nsolid rocks!$"

RioluDialog_Text_24:
# 751 "data/maps/daycarebase/scripts.pory"
	.string "Lurantis has been spending time\nacross the water in the mountains.\pIts sharp limbs can cut through\nsmall trees.$"

RioluDialog_Text_25:
# 759 "data/maps/daycarebase/scripts.pory"
	.string "Weavile is quite the ninja.\pIt spends time in the tall trees\nin the jungle.\pIt demands a fierce challenger\nto battle it.\pIts agility allows it to cross\neven the smallest of walkways.$"

RioluDialog_Text_26:
# 769 "data/maps/daycarebase/scripts.pory"
	.string "Oh.\pWhat else are you gonna do\nwith that egg?$"

RioluDialog_Text_27:
# 781 "data/maps/daycarebase/scripts.pory"
	.string "No?\nCome back when you do!$"

RioluDialog_Text_28:
# 793 "data/maps/daycarebase/scripts.pory"
	.string "Hiya!\pI'm Riolu!\pI've visited every biome the\nDaycare has to offer.\lI know it like the back of my paw!\pIf you need guidance on where a\ncertain Pokémon might be,\lI'm your Pokémon!\pAlthough I won't do it for free...\pBring me Lucky Eggs, and I'll tell\nyou what I know.$"

BattleVsPikachu_Text_0:
# 811 "data/maps/daycarebase/scripts.pory"
	.string "You really lit me up.\pBest of luck on your journey!\n$"

BattleVsPikachu_Text_1:
# 826 "data/maps/daycarebase/scripts.pory"
	.string "A Ditto!\pYou must be on your quest to obtain\nyour egg.\pDefeat me in battle and I'll allow\nyou to transform into me!$"

BattleVsPikachu_Text_2:
# 840 "data/maps/daycarebase/scripts.pory"
	.string "You have gained the ability to\ntransform into Pikachu!$"

BattleVsPikachu_Text_3:
# 846 "data/maps/daycarebase/scripts.pory"
	.string "How electrifying!\pElectric_type moves are powerful\nagainst Water_type Pokémon.\pThey typically spend their time in\nthe Lake Biome here.$"

ChanseyHeal_Text_0:
# 860 "data/maps/daycarebase/scripts.pory"
	.string "Chansey$"

ChanseyHeal_Text_1:
# 862 "data/maps/daycarebase/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.$"

ChanseyHeal_Text_2:
# 864 "data/maps/daycarebase/scripts.pory"
	.string "Would you like to heal?$"

ChanseyHeal_Text_3:
# 878 "data/maps/daycarebase/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyHeal_Text_4:
# 887 "data/maps/daycarebase/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyHeal_Text_5:
# 897 "data/maps/daycarebase/scripts.pory"
	.string "Oh, okay then.$"

ChanseyHeal_Text_6:
# 910 "data/maps/daycarebase/scripts.pory"
	.string "You look new!\pHave you found any Lucky Eggs yet?\pThey aren't quite the Mythical Egg\nyou are in search of, but many\lPokémon around the daycare will\loffer trades or services for them!\pDon't be afraid to use them!\pI'll offer to bring you back to\nfull health for just one!$"

DaycareBase_Ditto_Text_0:
# 927 "data/maps/daycarebase/scripts.pory"
	.string "Would you like to change out your\ntransformation options?$"

DaycareBase_Ditto_Text_1:
# 939 "data/maps/daycarebase/scripts.pory"
	.string "Ditto$"

DaycareBase_Ditto_Text_2:
# 941 "data/maps/daycarebase/scripts.pory"
	.string "Come back anytime!$"

DaycareBase_Ditto_Text_3:
# 953 "data/maps/daycarebase/scripts.pory"
	.string "Ditto!\pYou can transform into any\lPokémon you defeat in battle!\pThis does only apply to Pokémon\nwho are not already using\lTransform...\p{SELECT_BUTTON} button to\nopen your transformation menu.\pYou can also view more information\nabout the Pokémon you can\ltransform into by opening your\lTransformation Party from the\l{START_BUTTON} menu.\pTo swap out your transformation\noptions, press the {L_BUTTON} button!$"

DaycareBase_Ditto_Text_4:
# 965 "data/maps/daycarebase/scripts.pory"
	.string "Hello there fellow Ditto!\pDaycare Man asked you to get an Egg\nfor him, did he?\pWell, you're about to learn the\nthe secret of how we Dittos are\lalways found holding Eggs.\pIt'll be quite the adventure!\pDon't forget, you are a Ditto,\nso you can transform into any\lPokémon you defeat in battle!\pThis does only apply to Pokémon\nwho are not already using\lTransform...\pPress the {SELECT_BUTTON} button to\nopen your transformation menu.\pYou can also view more information\nabout the Pokémon you can\ltransform into by opening your\lTransformation Party from the\l{START_BUTTON} menu.\pTo swap out your transformation\noptions, press the {L_BUTTON} button!$"
