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
# 88 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_2, MSGBOX_DEFAULT
# 89 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 90 "data/maps/daycarebase/scripts.pory"
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
	checkpartymove MOVE_STICKY_WEB
# 62 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_ne ShrinkToPikachuCave_11
# 80 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_2, MSGBOX_DEFAULT
# 81 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 82 "data/maps/daycarebase/scripts.pory"
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
	msgbox ShrinkToPikachuCave_Text_1, MSGBOX_YESNO
# 65 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinkToPikachuCave_14
# 73 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 74 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinkToPikachuCave_14:
# 67 "data/maps/daycarebase/scripts.pory"
	dittotransform SPECIES_CUTIEFLY
# 68 "data/maps/daycarebase/scripts.pory"
	delay 30
# 69 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_PIKACHU_SHRINK_CAVE, 0
	return


ShrinkToPikachuCave2::
# 96 "data/maps/daycarebase/scripts.pory"
	lock
# 97 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinkToPikachuCave2_1
# 111 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_TRANS_CUTIEFLY, ShrinkToPikachuCave2_4
ShrinkToPikachuCave2_3:
# 140 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_2, MSGBOX_DEFAULT
# 141 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 142 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinkToPikachuCave2_1:
# 99 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_0, MSGBOX_YESNO
# 100 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinkToPikachuCave2_8
# 106 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 107 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinkToPikachuCave2_2:
# 113 "data/maps/daycarebase/scripts.pory"
	checkpartymove MOVE_STICKY_WEB
# 114 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_ne ShrinkToPikachuCave2_11
# 132 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_2, MSGBOX_DEFAULT
# 133 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 134 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinkToPikachuCave2_4:
# 111 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_ne ShrinkToPikachuCave2_2
	goto ShrinkToPikachuCave2_3

ShrinkToPikachuCave2_8:
# 102 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_PIKACHU_SHRINK_CAVE, 1
	return

ShrinkToPikachuCave2_11:
# 116 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_1, MSGBOX_YESNO
# 117 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinkToPikachuCave2_14
# 125 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 126 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinkToPikachuCave2_14:
# 119 "data/maps/daycarebase/scripts.pory"
	dittotransform SPECIES_CUTIEFLY
# 120 "data/maps/daycarebase/scripts.pory"
	delay 30
# 121 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_PIKACHU_SHRINK_CAVE, 1
	return


ShrinktoMausholdCave::
# 148 "data/maps/daycarebase/scripts.pory"
	lock
# 149 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinktoMausholdCave_1
# 163 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_TRANS_CUTIEFLY, ShrinktoMausholdCave_4
ShrinktoMausholdCave_3:
# 192 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_2, MSGBOX_DEFAULT
# 193 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 194 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinktoMausholdCave_1:
# 151 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_0, MSGBOX_YESNO
# 152 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinktoMausholdCave_8
# 158 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 159 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinktoMausholdCave_2:
# 165 "data/maps/daycarebase/scripts.pory"
	checkpartymove MOVE_DAZZLING_GLEAM
# 166 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_ne ShrinktoMausholdCave_11
# 184 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_2, MSGBOX_DEFAULT
# 185 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 186 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinktoMausholdCave_4:
# 163 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_ne ShrinktoMausholdCave_2
	goto ShrinktoMausholdCave_3

ShrinktoMausholdCave_8:
# 154 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_MAUSHOLD_SHRINK, 0
	return

ShrinktoMausholdCave_11:
# 168 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_1, MSGBOX_YESNO
# 169 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinktoMausholdCave_14
# 177 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 178 "data/maps/daycarebase/scripts.pory"
	release
	end

ShrinktoMausholdCave_14:
# 171 "data/maps/daycarebase/scripts.pory"
	dittotransform SPECIES_CUTIEFLY
# 172 "data/maps/daycarebase/scripts.pory"
	delay 30
# 173 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_MAUSHOLD_SHRINK, 0
	return


MimikyuDialog::
# 200 "data/maps/daycarebase/scripts.pory"
	lock
# 201 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 202 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq MimikyuDialog_1
# 216 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_PIKACHU
	goto_if_eq MimikyuDialog_2
# 249 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 250 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYUTOP, EMOTE_NORMAL
# 251 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_DEFAULT
# 252 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 253 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 254 "data/maps/daycarebase/scripts.pory"
	release
	end

MimikyuDialog_1:
# 204 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 205 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYUTOP, EMOTE_NORMAL
# 206 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_DEFAULT
# 207 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 208 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_2
# 209 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYU, EMOTE_ANGRY
# 210 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_3, MSGBOX_DEFAULT
# 211 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 212 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 213 "data/maps/daycarebase/scripts.pory"
	release
	end

MimikyuDialog_2:
# 218 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_MIMIKYU_LUCKYEGG, MimikyuDialog_6
# 230 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 231 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYUTOP, EMOTE_NORMAL
# 232 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_DEFAULT
# 233 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 234 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_2
# 235 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYU, EMOTE_ANGRY
# 236 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_5, MSGBOX_DEFAULT
# 237 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 238 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 239 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 240 "data/maps/daycarebase/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 241 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_MIMIKYU_LUCKYEGG
# 242 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 243 "data/maps/daycarebase/scripts.pory"
	release
	end

MimikyuDialog_6:
# 220 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_2
# 221 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_MIMIKYU, EMOTE_ANGRY
# 222 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_4, MSGBOX_DEFAULT
# 223 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 224 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 225 "data/maps/daycarebase/scripts.pory"
	release
	end


KecleonDialog::
# 259 "data/maps/daycarebase/scripts.pory"
	lock
# 260 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 261 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq KecleonDialog_1
# 273 "data/maps/daycarebase/scripts.pory"
	speakername KecleonDialog_Text_0
# 274 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_KECLEON, EMOTE_NORMAL
# 275 "data/maps/daycarebase/scripts.pory"
	msgbox KecleonDialog_Text_2, MSGBOX_DEFAULT
# 276 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 277 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 278 "data/maps/daycarebase/scripts.pory"
	release
	end

KecleonDialog_1:
# 263 "data/maps/daycarebase/scripts.pory"
	speakername KecleonDialog_Text_0
# 264 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_KECLEON, EMOTE_NORMAL
# 265 "data/maps/daycarebase/scripts.pory"
	msgbox KecleonDialog_Text_1, MSGBOX_DEFAULT
# 266 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 267 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 268 "data/maps/daycarebase/scripts.pory"
	release
	end


AzumarillDialog::
# 285 "data/maps/daycarebase/scripts.pory"
	lock
# 286 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 287 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq AzumarillDialog_1
# 299 "data/maps/daycarebase/scripts.pory"
	speakername AzumarillDialog_Text_0
# 300 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_AZUMARILL, EMOTE_ANGRY
# 301 "data/maps/daycarebase/scripts.pory"
	msgbox AzumarillDialog_Text_2, MSGBOX_DEFAULT
# 302 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 303 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 304 "data/maps/daycarebase/scripts.pory"
	release
	end

AzumarillDialog_1:
# 289 "data/maps/daycarebase/scripts.pory"
	speakername AzumarillDialog_Text_0
# 290 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_AZUMARILL, EMOTE_NORMAL
# 291 "data/maps/daycarebase/scripts.pory"
	msgbox AzumarillDialog_Text_1, MSGBOX_DEFAULT
# 292 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 293 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 294 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareOldManDialog::
# 310 "data/maps/daycarebase/scripts.pory"
	lock
# 311 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 312 "data/maps/daycarebase/scripts.pory"
	goto_if_unset FLAG_BEAT_MEW, DaycareOldManDialog_1
# 344 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq DaycareOldManDialog_7
# 556 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 557 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_1, MSGBOX_DEFAULT
# 558 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 559 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_1:
# 314 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_OLDMAN_INTRO, DaycareOldManDialog_4
# 334 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 335 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_2, MSGBOX_DEFAULT
# 336 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 337 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_OLDMAN_INTRO
# 338 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_4:
# 316 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq DaycareOldManDialog_10
# 325 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 326 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_1, MSGBOX_DEFAULT
# 327 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 328 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_7:
# 346 "data/maps/daycarebase/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 347 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 348 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_0
# 349 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 350 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, Common_Movement_ExclamationMark
# 351 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 352 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 353 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_3, MSGBOX_YESNO
# 354 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 355 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareOldManDialog_13
# 456 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 457 "data/maps/daycarebase/scripts.pory"
	playse SE_M_SCRATCH
# 458 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_15, MSGBOX_DEFAULT
# 459 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 460 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 461 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 462 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_5, MSGBOX_DEFAULT
# 463 "data/maps/daycarebase/scripts.pory"
	removeobject BrendanBiking
# 464 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_HIDE_BRENDAN_BIKE
# 465 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 466 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 467 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP
# 468 "data/maps/daycarebase/scripts.pory"
	waitse
# 469 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP_MAX
# 470 "data/maps/daycarebase/scripts.pory"
	waitse
# 471 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 472 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_6, MSGBOX_DEFAULT
# 473 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 474 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 475 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 476 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_7, MSGBOX_AUTOCLOSE
# 477 "data/maps/daycarebase/scripts.pory"
	special SpawnCameraObject
# 478 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_1
# 479 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 480 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_2
# 481 "data/maps/daycarebase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DaycareOldManDialog_Movement_2
# 482 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 483 "data/maps/daycarebase/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 484 "data/maps/daycarebase/scripts.pory"
	delay 60
# 485 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 24
# 486 "data/maps/daycarebase/scripts.pory"
	delay 60
# 487 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SHOW_BRENDAN_OUTRO
# 488 "data/maps/daycarebase/scripts.pory"
	addobject Brendan
# 489 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK, 24
# 490 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_3
# 491 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 492 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 493 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, Common_Movement_ExclamationMark
# 494 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 495 "data/maps/daycarebase/scripts.pory"
	delay 30
# 496 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_4
# 497 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 498 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_5
# 499 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 500 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 501 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_8, MSGBOX_DEFAULT
# 502 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 503 "data/maps/daycarebase/scripts.pory"
	delay 30
# 504 "data/maps/daycarebase/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 505 "data/maps/daycarebase/scripts.pory"
	delay 60
# 506 "data/maps/daycarebase/scripts.pory"
	special CountLuckyEggs
# 507 "data/maps/daycarebase/scripts.pory"
	special GetWhiteoutCount
# 508 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_0, VAR_WHITEOUT_COUNT
# 509 "data/maps/daycarebase/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_0
# 510 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_1, VAR_LUCKYEGG_COUNT
# 511 "data/maps/daycarebase/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_1
# 512 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_61
DaycareOldManDialog_58:
# 518 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_57
DaycareOldManDialog_54:
# 524 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_53
DaycareOldManDialog_51:
# 530 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_ne DaycareOldManDialog_50
DaycareOldManDialog_48:
# 536 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_ne DaycareOldManDialog_47
DaycareOldManDialog_46:
# 544 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_14, MSGBOX_DEFAULT
# 545 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 546 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
DaycareOldManDialog_40:
# 548 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 549 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_BEAT_MEW
# 550 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SHOW_BRENDAN_OUTRO
# 551 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_HIDE_BRENDAN_BIKE
# 552 "data/maps/daycarebase/scripts.pory"
	special GameClear
	return

DaycareOldManDialog_10:
# 318 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 319 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_0, MSGBOX_DEFAULT
# 320 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 321 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_13:
# 357 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 358 "data/maps/daycarebase/scripts.pory"
	playse SE_ITEMFINDER
# 359 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_4, MSGBOX_DEFAULT
# 360 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 361 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 362 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 363 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_5, MSGBOX_DEFAULT
# 364 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 365 "data/maps/daycarebase/scripts.pory"
	removeobject BrendanBiking
# 366 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_HIDE_BRENDAN_BIKE
# 367 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 368 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP
# 369 "data/maps/daycarebase/scripts.pory"
	waitse
# 370 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP_MAX
# 371 "data/maps/daycarebase/scripts.pory"
	waitse
# 372 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 373 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_6, MSGBOX_DEFAULT
# 374 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 375 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 376 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 377 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_7, MSGBOX_AUTOCLOSE
# 378 "data/maps/daycarebase/scripts.pory"
	special SpawnCameraObject
# 379 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_1
# 380 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 381 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_2
# 382 "data/maps/daycarebase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DaycareOldManDialog_Movement_2
# 383 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 384 "data/maps/daycarebase/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 385 "data/maps/daycarebase/scripts.pory"
	delay 60
# 386 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 24
# 387 "data/maps/daycarebase/scripts.pory"
	delay 60
# 388 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SHOW_BRENDAN_OUTRO
# 389 "data/maps/daycarebase/scripts.pory"
	addobject Brendan
# 390 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK, 24
# 391 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_3
# 392 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 393 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 394 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, Common_Movement_ExclamationMark
# 395 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 396 "data/maps/daycarebase/scripts.pory"
	delay 30
# 397 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_4
# 398 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 399 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_5
# 400 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 401 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 402 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_8, MSGBOX_DEFAULT
# 403 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 404 "data/maps/daycarebase/scripts.pory"
	delay 30
# 405 "data/maps/daycarebase/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 406 "data/maps/daycarebase/scripts.pory"
	delay 60
# 407 "data/maps/daycarebase/scripts.pory"
	special CountLuckyEggs
# 408 "data/maps/daycarebase/scripts.pory"
	special GetWhiteoutCount
# 409 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_0, VAR_WHITEOUT_COUNT
# 410 "data/maps/daycarebase/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_0
# 411 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_1, VAR_LUCKYEGG_COUNT
# 412 "data/maps/daycarebase/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_1
# 413 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_37
DaycareOldManDialog_34:
# 419 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_33
DaycareOldManDialog_30:
# 425 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_eq DaycareOldManDialog_29
DaycareOldManDialog_27:
# 431 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_ne DaycareOldManDialog_26
DaycareOldManDialog_24:
# 437 "data/maps/daycarebase/scripts.pory"
	compare VAR_WHITEOUT_COUNT, 0
	goto_if_ne DaycareOldManDialog_23
DaycareOldManDialog_22:
# 445 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_14, MSGBOX_DEFAULT
# 446 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 447 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
DaycareOldManDialog_16:
# 449 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 450 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_BEAT_MEW
# 451 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SHOW_BRENDAN_OUTRO
# 452 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_HIDE_BRENDAN_BIKE
# 453 "data/maps/daycarebase/scripts.pory"
	special GameClear
	return

DaycareOldManDialog_17:
# 415 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_9, MSGBOX_DEFAULT
# 416 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 417 "data/maps/daycarebase/scripts.pory"
	special ForceShinyDitto
	goto DaycareOldManDialog_16

DaycareOldManDialog_18:
# 421 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_10, MSGBOX_DEFAULT
# 422 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 423 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_16

DaycareOldManDialog_19:
# 427 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_11, MSGBOX_DEFAULT
# 428 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 429 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_16

DaycareOldManDialog_20:
# 433 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_12, MSGBOX_DEFAULT
# 434 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 435 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_16

DaycareOldManDialog_21:
# 439 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_13, MSGBOX_DEFAULT
# 440 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 441 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_16

DaycareOldManDialog_23:
# 437 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_eq DaycareOldManDialog_21
	goto DaycareOldManDialog_22

DaycareOldManDialog_26:
# 431 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_eq DaycareOldManDialog_20
	goto DaycareOldManDialog_24

DaycareOldManDialog_29:
# 425 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_eq DaycareOldManDialog_19
	goto DaycareOldManDialog_27

DaycareOldManDialog_32:
# 419 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_gt DaycareOldManDialog_18
	goto DaycareOldManDialog_30

DaycareOldManDialog_33:
# 419 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_ne DaycareOldManDialog_32
	goto DaycareOldManDialog_30

DaycareOldManDialog_37:
# 413 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_eq DaycareOldManDialog_17
	goto DaycareOldManDialog_34

DaycareOldManDialog_41:
# 514 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_9, MSGBOX_DEFAULT
# 515 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 516 "data/maps/daycarebase/scripts.pory"
	special ForceShinyDitto
	goto DaycareOldManDialog_40

DaycareOldManDialog_42:
# 520 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_10, MSGBOX_DEFAULT
# 521 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 522 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_40

DaycareOldManDialog_43:
# 526 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_11, MSGBOX_DEFAULT
# 527 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 528 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_40

DaycareOldManDialog_44:
# 532 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_12, MSGBOX_DEFAULT
# 533 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 534 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_40

DaycareOldManDialog_45:
# 538 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_13, MSGBOX_DEFAULT
# 539 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 540 "data/maps/daycarebase/scripts.pory"
	special RemoveForceShinyDitto
	goto DaycareOldManDialog_40

DaycareOldManDialog_47:
# 536 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_eq DaycareOldManDialog_45
	goto DaycareOldManDialog_46

DaycareOldManDialog_50:
# 530 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_eq DaycareOldManDialog_44
	goto DaycareOldManDialog_48

DaycareOldManDialog_53:
# 524 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_eq DaycareOldManDialog_43
	goto DaycareOldManDialog_51

DaycareOldManDialog_56:
# 518 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 0
	goto_if_gt DaycareOldManDialog_42
	goto DaycareOldManDialog_54

DaycareOldManDialog_57:
# 518 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_ne DaycareOldManDialog_56
	goto DaycareOldManDialog_54

DaycareOldManDialog_61:
# 512 "data/maps/daycarebase/scripts.pory"
	compare VAR_LUCKYEGG_COUNT, 18
	goto_if_eq DaycareOldManDialog_41
	goto DaycareOldManDialog_58


VaporeonDialog::
# 570 "data/maps/daycarebase/scripts.pory"
	lock
# 571 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 572 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_2
# 573 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_VAPOREON, EMOTE_ANGRY
# 574 "data/maps/daycarebase/scripts.pory"
	msgbox VaporeonDialog_Text_0, MSGBOX_NPC
# 575 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 576 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 577 "data/maps/daycarebase/scripts.pory"
	release
	end


LaprasDialog::
# 583 "data/maps/daycarebase/scripts.pory"
	lock
# 584 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 585 "data/maps/daycarebase/scripts.pory"
	speakername LaprasDialog_Text_0
# 586 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_LAPRAS, EMOTE_HAPPY
# 587 "data/maps/daycarebase/scripts.pory"
	msgbox LaprasDialog_Text_1, MSGBOX_DEFAULT
# 588 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 589 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 590 "data/maps/daycarebase/scripts.pory"
	release
	end


LinooneDialog::
# 595 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq LinooneDialog_1
# 609 "data/maps/daycarebase/scripts.pory"
	lock
# 610 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 611 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 612 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_LINOONE, EMOTE_NORMAL
# 613 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_2
# 614 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 615 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 616 "data/maps/daycarebase/scripts.pory"
	release
	end

LinooneDialog_1:
# 597 "data/maps/daycarebase/scripts.pory"
	lock
# 598 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 599 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 600 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_LINOONE, EMOTE_NORMAL
# 601 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_1
# 602 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 603 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 604 "data/maps/daycarebase/scripts.pory"
	release
	end


BulbsaurDialog::
# 622 "data/maps/daycarebase/scripts.pory"
	lock
# 623 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 624 "data/maps/daycarebase/scripts.pory"
	speakername BulbsaurDialog_Text_0
# 625 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_BULBASAUR, EMOTE_NORMAL
# 626 "data/maps/daycarebase/scripts.pory"
	msgbox BulbsaurDialog_Text_1, MSGBOX_NPC
# 627 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 628 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 629 "data/maps/daycarebase/scripts.pory"
	release
	end


CombeeDialog::
# 634 "data/maps/daycarebase/scripts.pory"
	lock
# 635 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 636 "data/maps/daycarebase/scripts.pory"
	speakername CombeeDialog_Text_0
# 637 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_COMBEE, EMOTE_NORMAL
# 638 "data/maps/daycarebase/scripts.pory"
	msgbox CombeeDialog_Text_1, MSGBOX_NPC
# 639 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 640 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 641 "data/maps/daycarebase/scripts.pory"
	release
	end


Porygon2Dialog::
# 646 "data/maps/daycarebase/scripts.pory"
	lock
# 647 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 648 "data/maps/daycarebase/scripts.pory"
	speakername Porygon2Dialog_Text_0
# 649 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PORYGON2, EMOTE_NORMAL
# 650 "data/maps/daycarebase/scripts.pory"
	msgbox Porygon2Dialog_Text_1, MSGBOX_NPC
# 651 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 652 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 653 "data/maps/daycarebase/scripts.pory"
	release
	end


ScytherDialog::
# 658 "data/maps/daycarebase/scripts.pory"
	lock
# 659 "data/maps/daycarebase/scripts.pory"
	applymovement scyther, DaycareOldManDialog_Movement_0
# 660 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_DITTO_IS_SHINY, ScytherDialog_3
ScytherDialog_2:
# 676 "data/maps/daycarebase/scripts.pory"
	speakername ScytherDialog_Text_0
# 677 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_SCYTHER, EMOTE_NORMAL
# 678 "data/maps/daycarebase/scripts.pory"
	msgbox ScytherDialog_Text_3, MSGBOX_DEFAULT
# 679 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 680 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 681 "data/maps/daycarebase/scripts.pory"
	release
	end

ScytherDialog_1:
# 662 "data/maps/daycarebase/scripts.pory"
	speakername ScytherDialog_Text_0
# 663 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_SCYTHER, EMOTE_NORMAL
# 664 "data/maps/daycarebase/scripts.pory"
	msgbox ScytherDialog_Text_1, MSGBOX_DEFAULT
# 665 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 666 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 667 "data/maps/daycarebase/scripts.pory"
	applymovement scyther, Common_Movement_ExclamationMark
# 668 "data/maps/daycarebase/scripts.pory"
	waitmovement scyther
# 669 "data/maps/daycarebase/scripts.pory"
	msgbox ScytherDialog_Text_2
# 670 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 671 "data/maps/daycarebase/scripts.pory"
	release
	end

ScytherDialog_3:
# 660 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq ScytherDialog_1
	goto ScytherDialog_2


RioluDialog::
# 687 "data/maps/daycarebase/scripts.pory"
	lock
# 688 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 689 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_RIOLU_INTRO, RioluDialog_1
# 824 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 825 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 826 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_28, MSGBOX_DEFAULT
# 827 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_RIOLU_INTRO
# 828 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 829 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 830 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_1:
# 691 "data/maps/daycarebase/scripts.pory"
	lock
# 692 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 693 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 694 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 695 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_1, MSGBOX_DEFAULT
# 696 "data/maps/daycarebase/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 697 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 698 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RioluDialog_4
# 811 "data/maps/daycarebase/scripts.pory"
	lock
# 812 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 813 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 814 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_27, MSGBOX_AUTOCLOSE
# 815 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 816 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 817 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_4:
# 700 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 701 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_2, MSGBOX_DEFAULT
# 702 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 703 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_3, MSGBOX_YESNO
# 704 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RioluDialog_7
# 801 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 802 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_26
# 803 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 804 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 805 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_7:
# 706 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 707 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_4, MSGBOX_DEFAULT
# 708 "data/maps/daycarebase/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 709 "data/maps/daycarebase/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, RioluDialog_Text_5, RioluDialog_Text_6, RioluDialog_Text_7, RioluDialog_Text_8, RioluDialog_Text_9, RioluDialog_Text_10, RioluDialog_Text_11, MimikyuDialog_Text_0, RioluDialog_Text_12, RioluDialog_Text_13, RioluDialog_Text_14
# 710 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RioluDialog_10
# 718 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RioluDialog_11
# 726 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RioluDialog_12
# 734 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RioluDialog_13
# 742 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq RioluDialog_14
# 750 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq RioluDialog_15
# 758 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq RioluDialog_16
# 766 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq RioluDialog_17
# 774 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq RioluDialog_18
# 782 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq RioluDialog_19
# 790 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq RioluDialog_20
	return

RioluDialog_10:
# 712 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_15, MSGBOX_DEFAULT
# 713 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 714 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 715 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_11:
# 720 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_16, MSGBOX_DEFAULT
# 721 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 722 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 723 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_12:
# 728 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_17, MSGBOX_DEFAULT
# 729 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 730 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 731 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_13:
# 736 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_18, MSGBOX_DEFAULT
# 737 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 738 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 739 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_14:
# 744 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_19, MSGBOX_DEFAULT
# 745 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 746 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 747 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_15:
# 752 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_20, MSGBOX_DEFAULT
# 753 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 754 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 755 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_16:
# 760 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_21, MSGBOX_DEFAULT
# 761 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 762 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 763 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_17:
# 768 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_22, MSGBOX_DEFAULT
# 769 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 770 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 771 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_18:
# 776 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_23, MSGBOX_DEFAULT
# 777 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 778 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 779 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_19:
# 784 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_24, MSGBOX_DEFAULT
# 785 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 786 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 787 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_20:
# 792 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_25, MSGBOX_DEFAULT
# 793 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 794 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 795 "data/maps/daycarebase/scripts.pory"
	release
	end


BattleVsPikachu::
# 837 "data/maps/daycarebase/scripts.pory"
	lock
# 839 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_TRANS_PIKACHU, BattleVsPikachu_2
# 851 "data/maps/daycarebase/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 852 "data/maps/daycarebase/scripts.pory"
	applymovement Pikachu, DaycareOldManDialog_Movement_0
# 853 "data/maps/daycarebase/scripts.pory"
	waitmovement Pikachu
# 854 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 855 "data/maps/daycarebase/scripts.pory"
	applymovement Pikachu, Common_Movement_ExclamationMark
# 856 "data/maps/daycarebase/scripts.pory"
	waitmovement Pikachu
# 857 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 858 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PIKACHU, EMOTE_NORMAL
# 859 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_1, MSGBOX_AUTOCLOSE
# 860 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 861 "data/maps/daycarebase/scripts.pory"
	setwildbattle SPECIES_PIKACHU, 25
# 862 "data/maps/daycarebase/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 863 "data/maps/daycarebase/scripts.pory"
	dowildbattle
# 864 "data/maps/daycarebase/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 865 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsPikachu_4
	return

BattleVsPikachu_2:
# 841 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 842 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 843 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PIKACHU, EMOTE_NORMAL
# 844 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_0, MSGBOX_DEFAULT
# 845 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 846 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 847 "data/maps/daycarebase/scripts.pory"
	release
	end

BattleVsPikachu_4:
# 867 "data/maps/daycarebase/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 868 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 869 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_TRANS_PIKACHU
# 870 "data/maps/daycarebase/scripts.pory"
	delay 15
# 871 "data/maps/daycarebase/scripts.pory"
	dittotransform SPECIES_PIKACHU
# 872 "data/maps/daycarebase/scripts.pory"
	playse MUS_LEVEL_UP
# 873 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_2, MSGBOX_DEFAULT
# 874 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 875 "data/maps/daycarebase/scripts.pory"
	dittotransform VAR_TEMP_0
# 876 "data/maps/daycarebase/scripts.pory"
	givemon SPECIES_PIKACHU, 25, move1 = MOVE_NUZZLE, move2 = MOVE_IRON_TAIL, move3 = MOVE_SPARK, move4 = MOVE_FLASH
# 877 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 878 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PIKACHU, EMOTE_HAPPY
# 879 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_3, MSGBOX_DEFAULT
# 880 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 881 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 882 "data/maps/daycarebase/scripts.pory"
	fadenewbgm MUS_PMD_HEARTWARMING
# 883 "data/maps/daycarebase/scripts.pory"
	release
	end


ChanseyHeal::
# 889 "data/maps/daycarebase/scripts.pory"
	lock
# 890 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 891 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_CHANSEY_INTRO, ChanseyHeal_1
# 939 "data/maps/daycarebase/scripts.pory"
	lock
# 940 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 941 "data/maps/daycarebase/scripts.pory"
	speakername ChanseyHeal_Text_0
# 942 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 943 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_6, MSGBOX_DEFAULT
# 944 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 945 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_CHANSEY_INTRO
# 946 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 947 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_1:
# 893 "data/maps/daycarebase/scripts.pory"
	speakername ChanseyHeal_Text_0
# 894 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 895 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_1, MSGBOX_DEFAULT
# 896 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 897 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_2, MSGBOX_YESNO
# 898 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 899 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyHeal_4
# 929 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 930 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_5, MSGBOX_AUTOCLOSE
# 931 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 932 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 933 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_4:
# 901 "data/maps/daycarebase/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 902 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyHeal_7
# 919 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 920 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_4, MSGBOX_AUTOCLOSE
# 921 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 922 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 923 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_7:
# 904 "data/maps/daycarebase/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 905 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 906 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 907 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_HEAL
# 908 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 909 "data/maps/daycarebase/scripts.pory"
	special HealPlayerParty
# 910 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 911 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_3, MSGBOX_AUTOCLOSE
# 912 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 913 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 914 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_Ditto::
# 954 "data/maps/daycarebase/scripts.pory"
	lock
# 955 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 956 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_DITTO_INTRO, DaycareBase_Ditto_1
# 996 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_1
# 997 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 998 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_4, MSGBOX_DEFAULT
# 999 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 1000 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_DITTO_INTRO
# 1001 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 1002 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 1003 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_1:
# 958 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_XFORMS_TALKED_TO_DITTO, DaycareBase_Ditto_4
# 984 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_1
# 985 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 986 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_3, MSGBOX_DEFAULT
# 987 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 988 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 989 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_4:
# 960 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_0, MSGBOX_YESNO
# 961 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareBase_Ditto_7
# 972 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_1
# 973 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 974 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_2, MSGBOX_AUTOCLOSE
# 975 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 976 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 977 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 978 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 979 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_7:
# 963 "data/maps/daycarebase/scripts.pory"
	dittotransform SPECIES_DITTO
# 964 "data/maps/daycarebase/scripts.pory"
	special OpenPCMoveMons
# 965 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 966 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 967 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycarebaseDitto_intro_trigger::
# 1010 "data/maps/daycarebase/scripts.pory"
	goto_if_unset FLAG_DITTO_INTRO, DaycarebaseDitto_intro_trigger_1
	end

DaycarebaseDitto_intro_trigger_1:
# 1012 "data/maps/daycarebase/scripts.pory"
	lock
# 1013 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 1014 "data/maps/daycarebase/scripts.pory"
	applymovement DittoIntro, Common_Movement_ExclamationMark
# 1015 "data/maps/daycarebase/scripts.pory"
	waitmovement DittoIntro
# 1016 "data/maps/daycarebase/scripts.pory"
	applymovement DittoIntro, DaycareIntro_Movement_2
# 1017 "data/maps/daycarebase/scripts.pory"
	waitmovement DittoIntro
# 1018 "data/maps/daycarebase/scripts.pory"
	applymovement LOCALID_PLAYER, DaycareIntro_Movement_3
# 1019 "data/maps/daycarebase/scripts.pory"
	waitmovement LOCALID_PLAYER
# 1020 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_1
# 1021 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 1022 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_4, MSGBOX_DEFAULT
# 1023 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 1024 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 1025 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_DITTO_INTRO
# 1026 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_FindLuckyEgg::
# 1036 "data/maps/daycarebase/scripts.pory"
	finditem ITEM_LUCKY_EGG
	return


DaycareBase_FindLuckyEgg1::
# 1040 "data/maps/daycarebase/scripts.pory"
	lock
# 1041 "data/maps/daycarebase/scripts.pory"
	removeobject luckyegg1
# 1042 "data/maps/daycarebase/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 1043 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 1044 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_ITEM_DAYCARE_BASE1
# 1045 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_FindLuckyEgg2::
# 1050 "data/maps/daycarebase/scripts.pory"
	lock
# 1051 "data/maps/daycarebase/scripts.pory"
	removeobject luckyegg2
# 1052 "data/maps/daycarebase/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 1053 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 1054 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_ITEM_DAYCARE_EAST1
# 1055 "data/maps/daycarebase/scripts.pory"
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

# 348 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_0:
# 348 "data/maps/daycarebase/scripts.pory"
	face_player
	step_end

# 379 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_1:
# 379 "data/maps/daycarebase/scripts.pory"
	face_down
	step_end

# 381 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_2:
# 381 "data/maps/daycarebase/scripts.pory"
	walk_down
# 381 "data/maps/daycarebase/scripts.pory"
	walk_down
	step_end

# 391 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_3:
# 391 "data/maps/daycarebase/scripts.pory"
	walk_right
# 391 "data/maps/daycarebase/scripts.pory"
	walk_right
# 391 "data/maps/daycarebase/scripts.pory"
	walk_right
# 391 "data/maps/daycarebase/scripts.pory"
	walk_right
# 391 "data/maps/daycarebase/scripts.pory"
	walk_right
	step_end

# 397 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_4:
# 397 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 397 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 397 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 397 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 397 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
	step_end

# 399 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_5:
# 399 "data/maps/daycarebase/scripts.pory"
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
# 64 "data/maps/daycarebase/scripts.pory"
	.string "There is a tiny hole.\pA small Pokémon may be able to\nsqueeze through it.\pWould you like to transform into\nCutiefly to squeeze through it?$"

ShrinkToPikachuCave_Text_2:
# 80 "data/maps/daycarebase/scripts.pory"
	.string "There is a tiny hole.\pA small Pokémon may be able to\nsqueeze through it.$"

MimikyuDialog_Text_0:
# 204 "data/maps/daycarebase/scripts.pory"
	.string "Pikachu$"

MimikyuDialog_Text_1:
# 206 "data/maps/daycarebase/scripts.pory"
	.string "Hey!\pI'm just a normal Pikachu in my usual\nspot!$"

MimikyuDialog_Text_2:
# 208 "data/maps/daycarebase/scripts.pory"
	.string "Mimikyu$"

MimikyuDialog_Text_3:
# 210 "data/maps/daycarebase/scripts.pory"
	.string "Oh...\nYou caught me.\pI wish I could disguise myself as\nwell as you can...\pMaybe then people would like me more...$"

MimikyuDialog_Text_4:
# 222 "data/maps/daycarebase/scripts.pory"
	.string "I've always looked up to you\nPikachu.\pI hope my disguise doesn't insult\nyou..$"

MimikyuDialog_Text_5:
# 236 "data/maps/daycarebase/scripts.pory"
	.string "Oh!\nA real life Pikachu!\pYou are my idol.\pPlease take this.\n$"

KecleonDialog_Text_0:
# 263 "data/maps/daycarebase/scripts.pory"
	.string "Kecleon$"

KecleonDialog_Text_1:
# 265 "data/maps/daycarebase/scripts.pory"
	.string "Where do Eggs come from?\pMy trainer left me here a long time\nago and I've yet to find one.\pDo you know?\pI've always heard of Dittos\nholding onto Eggs...$"

KecleonDialog_Text_2:
# 275 "data/maps/daycarebase/scripts.pory"
	.string "Where do Eggs come from?\pMy trainer left me here a long time\nago and I've yet to find one.$"

AzumarillDialog_Text_0:
# 289 "data/maps/daycarebase/scripts.pory"
	.string "Azumarill$"

AzumarillDialog_Text_1:
# 291 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pYou'll fit in well here.$"

AzumarillDialog_Text_2:
# 301 "data/maps/daycarebase/scripts.pory"
	.string "Oh!\nThank goodness you aren't a Ditto...\pMy trainer keeps putting me in here\nwith Dittos hoping we'll find an\lEgg.\pThey gave me this Sea Incence,\nbut I'm not sure how that would\lhelp us on our hunt...$"

DaycareOldManDialog_Text_0:
# 319 "data/maps/daycarebase/scripts.pory"
	.string "Back from exploring the Daycare?\pAh!\nBut where is your Egg?\pKeep doing whatever it is you\nDittos do and come back when\lyou have one!$"

DaycareOldManDialog_Text_1:
# 326 "data/maps/daycarebase/scripts.pory"
	.string "Why, who are you?\pI'm looking for a Ditto.\n$"

DaycareOldManDialog_Text_2:
# 335 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pDespite what trainers may see from\nRoute 117, the Daycare is a vast\larea filled with biomes for nearly\levery type of Pokémon!\pExplore the Daycare and interact\nwith many of the Pokémon we are\lraising.\pYou never know what friends you\nwill make along the way!\pNow, I do expect you to be holding\nan Egg at some point... Every Ditto\lI've raised has produced one.\pWhen you're holding an Egg,\ncome back and talk to me and\lwe can get it to your trainer.$"

DaycareOldManDialog_Text_3:
# 353 "data/maps/daycarebase/scripts.pory"
	.string "Why what do we have here?\nGoodness!\pYou're holding an Egg!\pWherever did you get this?\pIt's the darndest thing.\pYou Pokémon always seem to find\nthese Eggs, but I can never figure\lout where they come from.\pWould you like to give me the Egg\nso that I may give it to your\lTrainer?$"

DaycareOldManDialog_Text_4:
# 359 "data/maps/daycarebase/scripts.pory"
	.string "Ditto handed over the Egg.\n$"

DaycareOldManDialog_Text_5:
# 363 "data/maps/daycarebase/scripts.pory"
	.string "Thank your for the Egg!\pAs a reward, take this EXP!\n$"

DaycareOldManDialog_Text_6:
# 373 "data/maps/daycarebase/scripts.pory"
	.string "Ditto grew to level 26.\n$"

DaycareOldManDialog_Text_7:
# 377 "data/maps/daycarebase/scripts.pory"
	.string "With this Egg, I can now fulfill\nmy duties.$"

DaycareOldManDialog_Text_8:
# 402 "data/maps/daycarebase/scripts.pory"
	.string "Ah, it's you!\pWe were raising your Pokémon\nand my goodness, were we surprised!\pYour Pokémon had an Egg!\pWe don't know how it got there,\nbut your Pokémon had it.\pYou do want it, yes?\n$"

DaycareOldManDialog_Text_9:
# 415 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR BLUE}{SHADOW LIGHT_BLUE}0\n{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Lucky Eggs found: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_2}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pAmazing!\pYou beat the game with 0 whiteouts\nand found all of the Lucky Eggs!\pCongratulations!\pStart a new game for a reward!$"

DaycareOldManDialog_Text_10:
# 421 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR BLUE}{SHADOW LIGHT_BLUE}0{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_2}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pAmazing!\pYou beat the game with 0 whiteouts!\pKeep searching for the remaining\nLucky Eggs and defeat Mew again to\l100% the game!$"

DaycareOldManDialog_Text_11:
# 427 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR BLUE}{SHADOW LIGHT_BLUE}0{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {COLOR RED}{SHADOW LIGHT_RED}0{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pAmazing!\pYou beat the game with 0 whiteouts!\pKeep searching for the remaining\nLucky Eggs and defeat Mew again to\l100% the game!$"

DaycareOldManDialog_Text_12:
# 433 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {COLOR RED}{SHADOW LIGHT_RED}0{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pGreat job!\pYou can continue this save and\nfind the remaining Lucky eggs.\pChallenge Mew again and speak\nto the Daycare Man.\pStart a new run to try to win\nwithout whiting out.$"

DaycareOldManDialog_Text_13:
# 439 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_2}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pGreat Job!\nYou found all of the Lucky Eggs!\pStart a new run to try to win\nwithout whiting out.$"

DaycareOldManDialog_Text_14:
# 445 "data/maps/daycarebase/scripts.pory"
	.string "Pokémon Transform Stats:\pNumber of Whiteouts: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\nLucky Eggs found: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_2}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}/18\pGreat job!\pYou can continue this save and\nfind the remaining Lucky eggs.\pChallenge Mew again and speak\nto the Daycare Man.\pStart a new run to try to win\nwithout whiting out.$"

DaycareOldManDialog_Text_15:
# 458 "data/maps/daycarebase/scripts.pory"
	.string "The Daycare Man ripped the Egg\nfrom Ditto's clutches.$"

VaporeonDialog_Text_0:
# 574 "data/maps/daycarebase/scripts.pory"
	.string "Ugh!\nYou again.\pEveryone here keeps asking me to\nhelp them search for Eggs.\pCan't a Vaporeon just relax?$"

LaprasDialog_Text_0:
# 585 "data/maps/daycarebase/scripts.pory"
	.string "Lapras$"

LaprasDialog_Text_1:
# 587 "data/maps/daycarebase/scripts.pory"
	.string "I love the Daycare!\pIt's so peaceful and quiet here.\pI can just float around all day\nand relax.\pThose waterfalls are pretty\nvicious, I won't go near them.\pI've heard that Dragonair can\neasily scale even the largest\lof waterfalls!$"

LinooneDialog_Text_0:
# 599 "data/maps/daycarebase/scripts.pory"
	.string "Linoone$"

LinooneDialog_Text_1:
# 601 "data/maps/daycarebase/scripts.pory"
	.string "The Daycare is huge!\pIt's a bit scary to expore,\nso I stay up here.\pRiolu is way more brave than I\nam and has explored the entirety\lof the Daycare.\pYou should talk with Riolu if\nyou get lost!\pI'm sure they can help!\n$"

LinooneDialog_Text_2:
# 613 "data/maps/daycarebase/scripts.pory"
	.string "Those Dittos really freak me out.\pThey could be any one of us right\nnow...\pEven you!... or me!\n$"

BulbsaurDialog_Text_0:
# 624 "data/maps/daycarebase/scripts.pory"
	.string "Bulbasaur$"

BulbsaurDialog_Text_1:
# 626 "data/maps/daycarebase/scripts.pory"
	.string "You want to know where Eggs\ncome from?\pI heard that a Pokémon needs\nto go on a great adventure to\lmeet a shapeshifting Pokémon.\pIf you can best them, they will\ngive you an egg!\pAt least, that's what Venusaur\ntold me...$"

CombeeDialog_Text_0:
# 636 "data/maps/daycarebase/scripts.pory"
	.string "Combee$"

CombeeDialog_Text_1:
# 638 "data/maps/daycarebase/scripts.pory"
	.string "I've been in this Daycare\nfor ages!\pI've flown all around and\npollenated so many flowers\lbut I still haven't gained a\lsingle level.\pI'm beginning to believe gaining\nEXP here is nothing more\lthan a big ole myth!$"

Porygon2Dialog_Text_0:
# 648 "data/maps/daycarebase/scripts.pory"
	.string "Porygon2$"

Porygon2Dialog_Text_1:
# 650 "data/maps/daycarebase/scripts.pory"
	.string "Another Ditto...\pI'm actually a Ditto too,\nI just prefer this look.\pThe Daycare population must be at\nleast 75 percent Dittos!\pMost Dittos will take on different\nforms.\pYou won't be able to transform\ninto a form that another Ditto has\ltaken on though.$"

ScytherDialog_Text_0:
# 662 "data/maps/daycarebase/scripts.pory"
	.string "Scyther$"

ScytherDialog_Text_1:
# 664 "data/maps/daycarebase/scripts.pory"
	.string "One in every {COLOR BLUE}{SHADOW LIGHT_BLUE}fifty {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Dittos that I\nsee here are blue.$"

ScytherDialog_Text_2:
# 669 "data/maps/daycarebase/scripts.pory"
	.string "Oh hey!\pYou're one of the blue ones!\pYou must've gotten really lucky!$"

ScytherDialog_Text_3:
# 678 "data/maps/daycarebase/scripts.pory"
	.string "One in every {COLOR BLUE}{SHADOW LIGHT_BLUE}fifty {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Dittos that I\nsee here are blue.\pThere must be some reason trainers\nput so many in here...$"

RioluDialog_Text_0:
# 693 "data/maps/daycarebase/scripts.pory"
	.string "Riolu$"

RioluDialog_Text_1:
# 695 "data/maps/daycarebase/scripts.pory"
	.string "Back with a Lucky Egg?\n$"

RioluDialog_Text_2:
# 701 "data/maps/daycarebase/scripts.pory"
	.string "Great!\pI can tell about the habitat and\nability of a Pokémon in the Daycare.$"

RioluDialog_Text_3:
# 703 "data/maps/daycarebase/scripts.pory"
	.string "Would you like to exchange a\nLucky Egg?$"

RioluDialog_Text_4:
# 707 "data/maps/daycarebase/scripts.pory"
	.string "Which Pokémon would you like to\nknow more about?$"

RioluDialog_Text_5:
# 709 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine$"

RioluDialog_Text_6:
# 709 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou$"

RioluDialog_Text_7:
# 709 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly$"

RioluDialog_Text_8:
# 709 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair$"

RioluDialog_Text_9:
# 709 "data/maps/daycarebase/scripts.pory"
	.string "Marill$"

RioluDialog_Text_10:
# 709 "data/maps/daycarebase/scripts.pory"
	.string "Machamp$"

RioluDialog_Text_11:
# 709 "data/maps/daycarebase/scripts.pory"
	.string "Noivern$"

RioluDialog_Text_12:
# 709 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn$"

RioluDialog_Text_13:
# 709 "data/maps/daycarebase/scripts.pory"
	.string "Lurantis$"

RioluDialog_Text_14:
# 709 "data/maps/daycarebase/scripts.pory"
	.string "Weavile$"

RioluDialog_Text_15:
# 712 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine can be found deep in the\nVolcano.\pIt can run really fast and scale\nhills that would normally be tooS\lslippery to climb!$"

RioluDialog_Text_16:
# 720 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou can be found in a cave\non the water in the desert.\pIt can dive deep underwater.\n$"

RioluDialog_Text_17:
# 728 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly can be found in the\nDaycare's flowers to the west.\pIt's a tiny Pokémon that can\nfit through small openings.$"

RioluDialog_Text_18:
# 736 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair can be found at the lake.\pIt can be a bit cryptic so it\nmay be difficult to reach.\pIt can scale large waterfalls\nwith ease.$"

RioluDialog_Text_19:
# 744 "data/maps/daycarebase/scripts.pory"
	.string "Marill can be found at the lake,\nusually by the shore.\pIt's a bit shy so it may be hiding.\pIt can float in any body of water.\n$"

RioluDialog_Text_20:
# 752 "data/maps/daycarebase/scripts.pory"
	.string "Machamp likes to train deep in\nthe mountains.\pIt is a very tough and solitary\nPokémon.\pIts strength can move large\nboulders.$"

RioluDialog_Text_21:
# 760 "data/maps/daycarebase/scripts.pory"
	.string "Noivern hangs out in a dark\ncave above the Daycare Falls.\pIt's quite a powerful Pokémon,\nso be prepared for a fight.\pIt can soar through the air,\nreaching places unreachable by\lnon_flying types.$"

RioluDialog_Text_22:
# 768 "data/maps/daycarebase/scripts.pory"
	.string "Pikachu is standing on that cliff\nright over there.\pIts electricity can light up even\nthe darkest of caves.$"

RioluDialog_Text_23:
# 776 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn lives in the desert.\pIt's quite a friendly Pokémon,\nbut don't upset it!\pIt is strong enough to smash\nsolid rocks!$"

RioluDialog_Text_24:
# 784 "data/maps/daycarebase/scripts.pory"
	.string "Lurantis has been spending time\nacross the water in the mountains.\pIts sharp limbs can cut through\nsmall trees.$"

RioluDialog_Text_25:
# 792 "data/maps/daycarebase/scripts.pory"
	.string "Weavile is quite the ninja.\pIt spends time in the tall trees\nin the jungle.\pIt demands a fierce challenger\nto battle it.\pIts agility allows it to cross\neven the smallest of walkways.$"

RioluDialog_Text_26:
# 802 "data/maps/daycarebase/scripts.pory"
	.string "Oh.\pWhat else are you gonna do\nwith that egg?$"

RioluDialog_Text_27:
# 814 "data/maps/daycarebase/scripts.pory"
	.string "No?\nCome back when you do!$"

RioluDialog_Text_28:
# 826 "data/maps/daycarebase/scripts.pory"
	.string "Hiya!\pI'm Riolu!\pI've visited every biome the\nDaycare has to offer.\lI know it like the back of my paw!\pIf you need guidance on where a\ncertain Pokémon might be,\lI'm your Pokémon!\pAlthough I won't do it for free...\pBring me Lucky Eggs, and I'll tell\nyou what I know.$"

BattleVsPikachu_Text_0:
# 844 "data/maps/daycarebase/scripts.pory"
	.string "You really lit me up.\pBest of luck on your journey!\n$"

BattleVsPikachu_Text_1:
# 859 "data/maps/daycarebase/scripts.pory"
	.string "A Ditto!\pYou must be on your quest to obtain\nyour egg.\pDefeat me in battle and I'll allow\nyou to transform into me!$"

BattleVsPikachu_Text_2:
# 873 "data/maps/daycarebase/scripts.pory"
	.string "You have gained the ability to\ntransform into Pikachu!$"

BattleVsPikachu_Text_3:
# 879 "data/maps/daycarebase/scripts.pory"
	.string "How electrifying!\pElectric_type moves are powerful\nagainst Water_type Pokémon.\pThey typically spend their time in\nthe Lake Biome here.$"

ChanseyHeal_Text_0:
# 893 "data/maps/daycarebase/scripts.pory"
	.string "Chansey$"

ChanseyHeal_Text_1:
# 895 "data/maps/daycarebase/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.$"

ChanseyHeal_Text_2:
# 897 "data/maps/daycarebase/scripts.pory"
	.string "Would you like to heal?$"

ChanseyHeal_Text_3:
# 911 "data/maps/daycarebase/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyHeal_Text_4:
# 920 "data/maps/daycarebase/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyHeal_Text_5:
# 930 "data/maps/daycarebase/scripts.pory"
	.string "Oh, okay then.$"

ChanseyHeal_Text_6:
# 943 "data/maps/daycarebase/scripts.pory"
	.string "You look new!\pHave you found any Lucky Eggs yet?\pThey aren't quite the Mythical Egg\nyou are in search of, but many\lPokémon around the daycare will\loffer trades or services for them!\pDon't be afraid to use them!\pI'll offer to bring you back to\nfull health for just one!$"

DaycareBase_Ditto_Text_0:
# 960 "data/maps/daycarebase/scripts.pory"
	.string "Would you like to change out your\ntransformation options?$"

DaycareBase_Ditto_Text_1:
# 972 "data/maps/daycarebase/scripts.pory"
	.string "Ditto$"

DaycareBase_Ditto_Text_2:
# 974 "data/maps/daycarebase/scripts.pory"
	.string "Come back anytime!$"

DaycareBase_Ditto_Text_3:
# 986 "data/maps/daycarebase/scripts.pory"
	.string "Ditto!\pYou can transform into any\lPokémon you defeat in battle!\pThis does only apply to Pokémon\nwho are not already using\lTransform...\p{SELECT_BUTTON} button to\nopen your transformation menu.\pYou can also view more information\nabout the Pokémon you can\ltransform into by opening your\lTransformation Party from the\l{START_BUTTON} menu.\pTo swap out your transformation\noptions, press the {L_BUTTON} button!$"

DaycareBase_Ditto_Text_4:
# 998 "data/maps/daycarebase/scripts.pory"
	.string "Hello there fellow Ditto!\pDaycare Man asked you to get an Egg\nfor him, did he?\pWell, you're about to learn the\nthe secret of how we Dittos are\lalways found holding Eggs.\pIt'll be quite the adventure!\pDon't forget, you are a Ditto,\nso you can transform into any\lPokémon you defeat in battle!\pThis does only apply to Pokémon\nwho are not already using\lTransform...\pPress the {SELECT_BUTTON} button to\nopen your transformation menu.\pYou can also view more information\nabout the Pokémon you can\ltransform into by opening your\lTransformation Party from the\l{START_BUTTON} menu.\pTo swap out your transformation\noptions, press the {L_BUTTON} button!$"
