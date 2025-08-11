daycarebase_MapScripts::
# 2 "data/maps/daycarebase/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Daycare_OnTransition
	.byte 0


Daycare_OnTransition::
# 6 "data/maps/daycarebase/scripts.pory"
	setrespawn HEAL_LOCATION_DAYCAREBASE
	end


ShrinkToPikachuCave::
# 11 "data/maps/daycarebase/scripts.pory"
	lockall
# 12 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinkToPikachuCave_1
# 28 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_1, MSGBOX_DEFAULT
# 29 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 30 "data/maps/daycarebase/scripts.pory"
	releaseall
	end

ShrinkToPikachuCave_1:
# 14 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_0, MSGBOX_YESNO
# 15 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinkToPikachuCave_4
# 21 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 22 "data/maps/daycarebase/scripts.pory"
	releaseall
	end

ShrinkToPikachuCave_4:
# 17 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_PIKACHU_SHRINK_CAVE, 0
	return


ShrinktoMausholdCave::
# 36 "data/maps/daycarebase/scripts.pory"
	lockall
# 37 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinktoMausholdCave_1
# 53 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_1, MSGBOX_DEFAULT
# 54 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 55 "data/maps/daycarebase/scripts.pory"
	releaseall
	end

ShrinktoMausholdCave_1:
# 39 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_0, MSGBOX_YESNO
# 40 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinktoMausholdCave_4
# 46 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 47 "data/maps/daycarebase/scripts.pory"
	releaseall
	end

ShrinktoMausholdCave_4:
# 42 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_MAUSHOLD_SHRINK, 0
	return


MimikyuDialog::
# 61 "data/maps/daycarebase/scripts.pory"
	lock
# 62 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 63 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq MimikyuDialog_1
# 75 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 76 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_DEFAULT
# 77 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 78 "data/maps/daycarebase/scripts.pory"
	release
	end

MimikyuDialog_1:
# 65 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 66 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_DEFAULT
# 67 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_2
# 68 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_3, MSGBOX_DEFAULT
# 69 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 70 "data/maps/daycarebase/scripts.pory"
	release
	end


KecleonDialog::
# 83 "data/maps/daycarebase/scripts.pory"
	lock
# 84 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 85 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq KecleonDialog_1
# 95 "data/maps/daycarebase/scripts.pory"
	speakername KecleonDialog_Text_0
# 96 "data/maps/daycarebase/scripts.pory"
	msgbox KecleonDialog_Text_2, MSGBOX_DEFAULT
# 97 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 98 "data/maps/daycarebase/scripts.pory"
	release
	end

KecleonDialog_1:
# 87 "data/maps/daycarebase/scripts.pory"
	speakername KecleonDialog_Text_0
# 88 "data/maps/daycarebase/scripts.pory"
	msgbox KecleonDialog_Text_1, MSGBOX_DEFAULT
# 89 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 90 "data/maps/daycarebase/scripts.pory"
	release
	end


AzumarillDialog::
# 105 "data/maps/daycarebase/scripts.pory"
	lock
# 106 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 107 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq AzumarillDialog_1
# 117 "data/maps/daycarebase/scripts.pory"
	speakername AzumarillDialog_Text_0
# 118 "data/maps/daycarebase/scripts.pory"
	msgbox AzumarillDialog_Text_2, MSGBOX_DEFAULT
# 119 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 120 "data/maps/daycarebase/scripts.pory"
	release
	end

AzumarillDialog_1:
# 109 "data/maps/daycarebase/scripts.pory"
	speakername AzumarillDialog_Text_0
# 110 "data/maps/daycarebase/scripts.pory"
	msgbox AzumarillDialog_Text_1, MSGBOX_DEFAULT
# 111 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 112 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareOldManDialog::
# 126 "data/maps/daycarebase/scripts.pory"
	lock
# 127 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 128 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_OLDMAN_INTRO, DaycareOldManDialog_1
# 136 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_EGG_OBTAINED, DaycareOldManDialog_2
# 163 "data/maps/daycarebase/scripts.pory"
	speakername DaycareOldManDialog_Text_0
# 164 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_6, MSGBOX_DEFAULT
# 165 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 166 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_OLDMAN_INTRO
# 167 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_1:
# 130 "data/maps/daycarebase/scripts.pory"
	speakername DaycareOldManDialog_Text_0
# 131 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_1, MSGBOX_DEFAULT
# 132 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 133 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_2:
# 138 "data/maps/daycarebase/scripts.pory"
	speakername DaycareOldManDialog_Text_0
# 139 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_2, MSGBOX_YESNO
# 140 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareOldManDialog_6
# 152 "data/maps/daycarebase/scripts.pory"
	speakername DaycareOldManDialog_Text_0
# 153 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_5, MSGBOX_DEFAULT
# 154 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_4, MSGBOX_DEFAULT
# 155 "data/maps/daycarebase/scripts.pory"
	playse MUS_LEVEL_UP
# 156 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 157 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_6:
# 142 "data/maps/daycarebase/scripts.pory"
	speakername DaycareOldManDialog_Text_0
# 143 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_3, MSGBOX_DEFAULT
# 144 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_4, MSGBOX_DEFAULT
# 145 "data/maps/daycarebase/scripts.pory"
	playse MUS_LEVEL_UP
# 146 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 147 "data/maps/daycarebase/scripts.pory"
	release
	end


VaporeonDialog::
# 173 "data/maps/daycarebase/scripts.pory"
	lock
# 174 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 175 "data/maps/daycarebase/scripts.pory"
	speakername VaporeonDialog_Text_0
# 176 "data/maps/daycarebase/scripts.pory"
	msgbox VaporeonDialog_Text_1
# 177 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 178 "data/maps/daycarebase/scripts.pory"
	release
	end


LaprasDialog::
# 184 "data/maps/daycarebase/scripts.pory"
	lock
# 185 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 186 "data/maps/daycarebase/scripts.pory"
	speakername LaprasDialog_Text_0
# 187 "data/maps/daycarebase/scripts.pory"
	msgbox LaprasDialog_Text_1
# 188 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 189 "data/maps/daycarebase/scripts.pory"
	release
	end


LinooneDialog::
# 194 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq LinooneDialog_1
# 206 "data/maps/daycarebase/scripts.pory"
	lock
# 207 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 208 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 209 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_2
# 210 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 211 "data/maps/daycarebase/scripts.pory"
	release
	end

LinooneDialog_1:
# 196 "data/maps/daycarebase/scripts.pory"
	lock
# 197 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 198 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 199 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_1
# 200 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 201 "data/maps/daycarebase/scripts.pory"
	release
	end


BulbsaurDialog::
# 217 "data/maps/daycarebase/scripts.pory"
	lock
# 218 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 219 "data/maps/daycarebase/scripts.pory"
	speakername BulbsaurDialog_Text_0
# 220 "data/maps/daycarebase/scripts.pory"
	msgbox BulbsaurDialog_Text_1, MSGBOX_DEFAULT
# 221 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 222 "data/maps/daycarebase/scripts.pory"
	release
	end


CombeeDialog::
# 227 "data/maps/daycarebase/scripts.pory"
	lock
# 228 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 229 "data/maps/daycarebase/scripts.pory"
	speakername CombeeDialog_Text_0
# 230 "data/maps/daycarebase/scripts.pory"
	msgbox CombeeDialog_Text_1, MSGBOX_DEFAULT
# 231 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 232 "data/maps/daycarebase/scripts.pory"
	release
	end


Porygon2Dialog::
# 237 "data/maps/daycarebase/scripts.pory"
	lock
# 238 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 239 "data/maps/daycarebase/scripts.pory"
	speakername Porygon2Dialog_Text_0
# 240 "data/maps/daycarebase/scripts.pory"
	msgbox Porygon2Dialog_Text_1, MSGBOX_DEFAULT
# 241 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 242 "data/maps/daycarebase/scripts.pory"
	release
	end


ScytherDialog::
# 247 "data/maps/daycarebase/scripts.pory"
	lock
# 248 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 249 "data/maps/daycarebase/scripts.pory"
	speakername ScytherDialog_Text_0
# 250 "data/maps/daycarebase/scripts.pory"
	msgbox ScytherDialog_Text_1, MSGBOX_DEFAULT
# 251 "data/maps/daycarebase/scripts.pory"
	givemon SPECIES_LURANTIS, 100, item = ITEM_LEFTOVERS, ball = ITEM_MASTER_BALL, nature = NATURE_TIMID, hpIv = 31, atkIv = 31, defIv = 31, speedIv = 31, spAtkIv = 31, spDefIv = 31, hpEv = 4, spAtkEv = 252, speedEv = 252, move1 = MOVE_PSYSTRIKE, move2 = MOVE_SHADOW_BALL, move3 = MOVE_AURA_SPHERE, move4 = MOVE_RECOVER, isShiny = TRUE
# 252 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 253 "data/maps/daycarebase/scripts.pory"
	release
	end


RioluDialog::
# 258 "data/maps/daycarebase/scripts.pory"
	lock
# 259 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 260 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_RIOLU_INTRO, RioluDialog_1
# 373 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 374 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_26
# 375 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_RIOLU_INTRO
# 376 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 377 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_1:
# 262 "data/maps/daycarebase/scripts.pory"
	lock
# 263 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 264 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 265 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_1
# 266 "data/maps/daycarebase/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 267 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RioluDialog_4
# 363 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 364 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_25, MSGBOX_AUTOCLOSE
# 365 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 366 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_4:
# 270 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_2, MSGBOX_YESNO
# 271 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RioluDialog_7
# 355 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_24
# 356 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 357 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_7:
# 273 "data/maps/daycarebase/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 274 "data/maps/daycarebase/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, RioluDialog_Text_3, RioluDialog_Text_4, RioluDialog_Text_5, RioluDialog_Text_6, RioluDialog_Text_7, RioluDialog_Text_8, RioluDialog_Text_9, MimikyuDialog_Text_0, RioluDialog_Text_10, RioluDialog_Text_11, RioluDialog_Text_12
# 275 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RioluDialog_10
# 282 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RioluDialog_11
# 289 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RioluDialog_12
# 296 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RioluDialog_13
# 303 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq RioluDialog_14
# 310 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq RioluDialog_15
# 317 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq RioluDialog_16
# 324 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq RioluDialog_17
# 331 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq RioluDialog_18
# 338 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq RioluDialog_19
# 345 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq RioluDialog_20
	return

RioluDialog_10:
# 277 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_13, MSGBOX_DEFAULT
# 278 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 279 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_11:
# 284 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_14, MSGBOX_DEFAULT
# 285 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 286 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_12:
# 291 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_15, MSGBOX_DEFAULT
# 292 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 293 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_13:
# 298 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_16, MSGBOX_DEFAULT
# 299 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 300 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_14:
# 305 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_17, MSGBOX_DEFAULT
# 306 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 307 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_15:
# 312 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_18, MSGBOX_DEFAULT
# 313 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 314 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_16:
# 319 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_19, MSGBOX_DEFAULT
# 320 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 321 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_17:
# 326 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_20, MSGBOX_DEFAULT
# 327 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 328 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_18:
# 333 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_21, MSGBOX_DEFAULT
# 334 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 335 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_19:
# 340 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_22, MSGBOX_DEFAULT
# 341 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 342 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_20:
# 347 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_23, MSGBOX_DEFAULT
# 348 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 349 "data/maps/daycarebase/scripts.pory"
	release
	end


BattleVsPikachu::
# 384 "data/maps/daycarebase/scripts.pory"
	lock
# 385 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 386 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_TRANS_PIKACHU, BattleVsPikachu_2
# 394 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 395 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_1, MSGBOX_DEFAULT
# 396 "data/maps/daycarebase/scripts.pory"
	setwildbattle SPECIES_PIKACHU, 25
# 397 "data/maps/daycarebase/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 398 "data/maps/daycarebase/scripts.pory"
	dowildbattle
# 399 "data/maps/daycarebase/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 400 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsPikachu_4
	return

BattleVsPikachu_2:
# 388 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 389 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_0, MSGBOX_DEFAULT
# 390 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 391 "data/maps/daycarebase/scripts.pory"
	release
	end

BattleVsPikachu_4:
# 402 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 403 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_TRANS_PIKACHU
# 404 "data/maps/daycarebase/scripts.pory"
	dittotransform SPECIES_PIKACHU
# 405 "data/maps/daycarebase/scripts.pory"
	playse MUS_LEVEL_UP
# 406 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_2, MSGBOX_DEFAULT
# 407 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 408 "data/maps/daycarebase/scripts.pory"
	dittotransform VAR_TEMP_0
# 409 "data/maps/daycarebase/scripts.pory"
	givemon SPECIES_PIKACHU, 25, move1 = MOVE_NUZZLE, move2 = MOVE_IRON_TAIL, move3 = MOVE_SPARK, move4 = MOVE_FLASH
# 410 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 411 "data/maps/daycarebase/scripts.pory"
	release
	end


ChanseyHeal::
# 417 "data/maps/daycarebase/scripts.pory"
	lock
# 418 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 419 "data/maps/daycarebase/scripts.pory"
	speakername ChanseyHeal_Text_0
# 420 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_1, MSGBOX_YESNO
# 421 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 422 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyHeal_1
# 448 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_4, MSGBOX_AUTOCLOSE
# 449 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 450 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_1:
# 424 "data/maps/daycarebase/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 425 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyHeal_4
# 440 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_3, MSGBOX_AUTOCLOSE
# 441 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 442 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_4:
# 427 "data/maps/daycarebase/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 428 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 429 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_HEAL
# 430 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 431 "data/maps/daycarebase/scripts.pory"
	special HealPlayerParty
# 432 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 433 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_2, MSGBOX_AUTOCLOSE
# 434 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 435 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_FindLuckyEgg::
# 457 "data/maps/daycarebase/scripts.pory"
	lock
# 458 "data/maps/daycarebase/scripts.pory"
	finditem ITEM_LUCKY_EGG
# 459 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 460 "data/maps/daycarebase/scripts.pory"
	release
	end


ShrinkToPikachuCave_Text_0:
# 14 "data/maps/daycarebase/scripts.pory"
	.string "There is a tiny hole that you can\nsqueeze through.\pWould you like to squeeze through it?$"

ShrinkToPikachuCave_Text_1:
# 28 "data/maps/daycarebase/scripts.pory"
	.string "There is a tiny hole.\pA small Pokémon may be able to\nsqueeze through it.$"

MimikyuDialog_Text_0:
# 65 "data/maps/daycarebase/scripts.pory"
	.string "Pikachu$"

MimikyuDialog_Text_1:
# 66 "data/maps/daycarebase/scripts.pory"
	.string "Hey!\pI'm just a normal Pikachu in my usual\nspot!$"

MimikyuDialog_Text_2:
# 67 "data/maps/daycarebase/scripts.pory"
	.string "Mimikyu$"

MimikyuDialog_Text_3:
# 68 "data/maps/daycarebase/scripts.pory"
	.string "Oh...\nYou caught me.\pI wish I could disguise myself as\nwell as you can...\pMaybe then people would like me more...$"

KecleonDialog_Text_0:
# 87 "data/maps/daycarebase/scripts.pory"
	.string "Kecleon$"

KecleonDialog_Text_1:
# 88 "data/maps/daycarebase/scripts.pory"
	.string "Where do eggs come from?\pMy trainer left me here a long time\nago and I've yet to find one.\pDo you know?\pI've always heard of Dittos\nholding onto eggs...$"

KecleonDialog_Text_2:
# 96 "data/maps/daycarebase/scripts.pory"
	.string "Where do eggs come from?\pMy trainer left me here a long time\nago and I've yet to find one.$"

AzumarillDialog_Text_0:
# 109 "data/maps/daycarebase/scripts.pory"
	.string "Azumarill$"

AzumarillDialog_Text_1:
# 110 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pYou'll fit in well here.$"

AzumarillDialog_Text_2:
# 118 "data/maps/daycarebase/scripts.pory"
	.string "Oh!\nThank goodness you aren't a Ditto...\pMy trainer keeps putting me in here\nwith Dittos hoping we'll breed.\pThey even gave me this Sea Incence\nto set the mood...\pThey're just not my type.$"

DaycareOldManDialog_Text_0:
# 130 "data/maps/daycarebase/scripts.pory"
	.string "Daycare Man$"

DaycareOldManDialog_Text_1:
# 131 "data/maps/daycarebase/scripts.pory"
	.string "Back from exploring the Daycare?\pAh!\nBut where is your egg!\pKeep doing whatever it is you\nDittos do and come back when\lyou have one!$"

DaycareOldManDialog_Text_2:
# 139 "data/maps/daycarebase/scripts.pory"
	.string "Why what do we have here?\nGoodness!\pYou're holding an Egg!\pWherever did you get this?\pIt's the darndest thing.\pYou Pokémon always seem to find\nthese eggs, but I can never figure\lout where they come from.\pWould you like to give me the Egg\nso that I may give it to your\lTrainer?$"

DaycareOldManDialog_Text_3:
# 143 "data/maps/daycarebase/scripts.pory"
	.string "Thank your for the Egg!\pAs a reward, take this experience!\n$"

DaycareOldManDialog_Text_4:
# 144 "data/maps/daycarebase/scripts.pory"
	.string "Ditto gained 1 level!$"

DaycareOldManDialog_Text_5:
# 153 "data/maps/daycarebase/scripts.pory"
	.string "Oh, I see...\pGIMME THAT EGG!!\pThank your for the Egg!\pAs a reward, take this experience!\n$"

DaycareOldManDialog_Text_6:
# 164 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pDespite what trainers may see from\nRoute 117, the Daycare is a vast\larea filled with biomes for nearly\levery type of Pokémon!\pExplore the Daycare and interact\nwith many of the Pokémon we are\lraising.\pYou never know what friends you\nwill make along the way!\pNow, I do expect you to be holding\nan Egg at some point... Every Ditto\lI've raised has produced one.\pWhen you're holding an Egg,\ncome back and talk to me and\lwe can get it to your trainer.$"

VaporeonDialog_Text_0:
# 175 "data/maps/daycarebase/scripts.pory"
	.string "Vaporeon$"

VaporeonDialog_Text_1:
# 176 "data/maps/daycarebase/scripts.pory"
	.string "Ew!\pGet away from me.\pI know it's you Ditto.\pGoodness,\nwhy is everyone so into me?$"

LaprasDialog_Text_0:
# 186 "data/maps/daycarebase/scripts.pory"
	.string "Lapras$"

LaprasDialog_Text_1:
# 187 "data/maps/daycarebase/scripts.pory"
	.string "I love the Daycare!\pIt's so peaceful and quiet here.\pI can just float around all day\nand relax.\pThose waterfalls are pretty\nvicious, I won't go near them.\pI've heard that Dragonair can\neasily scale even the largest\lof waterfalls!$"

LinooneDialog_Text_0:
# 198 "data/maps/daycarebase/scripts.pory"
	.string "Linoone$"

LinooneDialog_Text_1:
# 199 "data/maps/daycarebase/scripts.pory"
	.string "The Daycare is huge!\pIt's a bit scary to expore,\nso I stay up here.\pRiolu is way more brave than I\nam and has explored the entirety\lof the Daycare.\pYou should talk with Riolu if\nyou get lost!\pI'm sure they can help!\n$"

LinooneDialog_Text_2:
# 209 "data/maps/daycarebase/scripts.pory"
	.string "Those Dittos really freak me out.\pThey could be any one of use right\nnow...\pEven you!... or me!\n$"

BulbsaurDialog_Text_0:
# 219 "data/maps/daycarebase/scripts.pory"
	.string "Bulbasaur$"

BulbsaurDialog_Text_1:
# 220 "data/maps/daycarebase/scripts.pory"
	.string "You want to know where Eggs\ncome from?\pI heard that a Pokémon needs\nto go on a great adventure to\lmeet a shapeshifting Pokémon.\pIf you can best them, they will\ngive you an egg!\pAt least, that's what Venusaur\ntold me...$"

CombeeDialog_Text_0:
# 229 "data/maps/daycarebase/scripts.pory"
	.string "Combee$"

CombeeDialog_Text_1:
# 230 "data/maps/daycarebase/scripts.pory"
	.string "I've been in this Daycare\nfor ages!\pI've flown all around and\npollenated so many flowers\lbut I still haven't gained a\lsingle level.\pI'm beginning to believe gaining\nexperience here is nothing more\lthan a big ole myth!$"

Porygon2Dialog_Text_0:
# 239 "data/maps/daycarebase/scripts.pory"
	.string "Porygon2$"

Porygon2Dialog_Text_1:
# 240 "data/maps/daycarebase/scripts.pory"
	.string "Another Ditto...\pI'm actually a Ditto too,\nI just prefer this look.\pThe Daycare population must be at\nleast 75 percent Dittos!\pMost Dittos will take on different\nforms.\pYou won't be able to transform\ninto a form that another Ditto has\ltaken on though.$"

ScytherDialog_Text_0:
# 249 "data/maps/daycarebase/scripts.pory"
	.string "Scyther$"

ScytherDialog_Text_1:
# 250 "data/maps/daycarebase/scripts.pory"
	.string "One in every fifty Dittos that I\nsee here are blue.\pMust be all those shiny hunters\ntrying to capitalize on Gen 2\lmechanics.\pWhen will they learn that this is\nGen3...$"

RioluDialog_Text_0:
# 264 "data/maps/daycarebase/scripts.pory"
	.string "Riolu$"

RioluDialog_Text_1:
# 265 "data/maps/daycarebase/scripts.pory"
	.string "Back with a Lucky Egg?\n$"

RioluDialog_Text_2:
# 270 "data/maps/daycarebase/scripts.pory"
	.string "Great!\pI can tell about the habitat and\nability of a Pokémon in the Daycare.\pWould you like to exchange a\nLucky Egg?$"

RioluDialog_Text_3:
# 274 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine$"

RioluDialog_Text_4:
# 274 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou$"

RioluDialog_Text_5:
# 274 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly$"

RioluDialog_Text_6:
# 274 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair$"

RioluDialog_Text_7:
# 274 "data/maps/daycarebase/scripts.pory"
	.string "Marill$"

RioluDialog_Text_8:
# 274 "data/maps/daycarebase/scripts.pory"
	.string "Machamp$"

RioluDialog_Text_9:
# 274 "data/maps/daycarebase/scripts.pory"
	.string "Noivern$"

RioluDialog_Text_10:
# 274 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn$"

RioluDialog_Text_11:
# 274 "data/maps/daycarebase/scripts.pory"
	.string "Lurantis$"

RioluDialog_Text_12:
# 274 "data/maps/daycarebase/scripts.pory"
	.string "Weavile$"

RioluDialog_Text_13:
# 277 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine can be found deep in the\nVolcano.\pIt can run really fast and scale\nhills that would normally be to\lslippery to climb!$"

RioluDialog_Text_14:
# 284 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou can be found in a cave\non the water in the desert.\pIt can dive deep underwater.\n$"

RioluDialog_Text_15:
# 291 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly can be found in the\nDaycare's flowers to the west.\pIt's a tiny Pokémon that can\nfit through small openings.$"

RioluDialog_Text_16:
# 298 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair can be found at the lake.\pIt can be a bit cryptic so it\nmay be difficult to reach.\pIt can scale large waterfalls\nwith ease.$"

RioluDialog_Text_17:
# 305 "data/maps/daycarebase/scripts.pory"
	.string "Marill can be found at the lake,\nusually by the shore.\pIt's a bit shy so it may be hiding.\pIt can float in any body of water.\n$"

RioluDialog_Text_18:
# 312 "data/maps/daycarebase/scripts.pory"
	.string "Machamp likes to train deep in\nthe mountains.\pIt is a very tough and solitary\nPokémon.\pIts strength can move large\nboulders.$"

RioluDialog_Text_19:
# 319 "data/maps/daycarebase/scripts.pory"
	.string "Noivern hangs out in a dark\ncave above the Daycare Falls.\pIt's quite a powerful Pokémon,\nso be prepared for a fight.\pIt can soar through the air,\nreaching places unreachable by\lnon_flying types.$"

RioluDialog_Text_20:
# 326 "data/maps/daycarebase/scripts.pory"
	.string "Pikachu is standing on that cliff\nright over there.\pIts electricity can light up even\nthe darkest of caves.$"

RioluDialog_Text_21:
# 333 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn lives in the desert.\pIt's quite a friendly Pokémon,\nbut don't upset it!\pIt is strong enough to smash\nsolid rocks!$"

RioluDialog_Text_22:
# 340 "data/maps/daycarebase/scripts.pory"
	.string "Lurantis has been spending time\nacross the water in the mountains.\pIts sharp limbs can cut through\nsmall trees.$"

RioluDialog_Text_23:
# 347 "data/maps/daycarebase/scripts.pory"
	.string "Weavile is quite the ninja.\pIt spends time in the tall trees\nin the jungle.\pIt demands a fierce challenger\nto battle it.\pIts agility allows it to cross\neven the smallest of walkways.$"

RioluDialog_Text_24:
# 355 "data/maps/daycarebase/scripts.pory"
	.string "Oh.\pWhat else are you gonna do\nwith that egg?$"

RioluDialog_Text_25:
# 364 "data/maps/daycarebase/scripts.pory"
	.string "No?\nCome back when you do!$"

RioluDialog_Text_26:
# 374 "data/maps/daycarebase/scripts.pory"
	.string "Hiya!\pI'm Riolu!\pI've visited every biome the\nDaycare has to offer.\lI know it like the back of my paw!\pIf you need guidance on where a\ncertain Pokémon might be,\lI'm your Pokémon!\pAlthough I won't do it for free...\pBring me Lucky Eggs, and I'll tell\nyou what I know.$"

BattleVsPikachu_Text_0:
# 389 "data/maps/daycarebase/scripts.pory"
	.string "You really lit me up.\pBest of luck on your journey!\n$"

BattleVsPikachu_Text_1:
# 395 "data/maps/daycarebase/scripts.pory"
	.string "A ditto!\pYou must be on your quest to obtain\nyour egg.\pDefeat me in battle and I'll allow\nyou to transform into me!$"

BattleVsPikachu_Text_2:
# 406 "data/maps/daycarebase/scripts.pory"
	.string "You have gained the ability to\ntranform into Pikachu!$"

ChanseyHeal_Text_0:
# 419 "data/maps/daycarebase/scripts.pory"
	.string "Chansey$"

ChanseyHeal_Text_1:
# 420 "data/maps/daycarebase/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.\pWould you like to heal?$"

ChanseyHeal_Text_2:
# 433 "data/maps/daycarebase/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyHeal_Text_3:
# 440 "data/maps/daycarebase/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyHeal_Text_4:
# 448 "data/maps/daycarebase/scripts.pory"
	.string "Oh, okay then.$"
