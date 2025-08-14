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
	goto_if_unset FLAG_BEAT_MEW, DaycareOldManDialog_1
# 160 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq DaycareOldManDialog_7
# 259 "data/maps/daycarebase/scripts.pory"
	speakername DaycareOldManDialog_Text_0
# 260 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_2, MSGBOX_DEFAULT
# 261 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 262 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_1:
# 130 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_OLDMAN_INTRO, DaycareOldManDialog_4
# 150 "data/maps/daycarebase/scripts.pory"
	speakername DaycareOldManDialog_Text_0
# 151 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_3, MSGBOX_DEFAULT
# 152 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 153 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_OLDMAN_INTRO
# 154 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_4:
# 132 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq DaycareOldManDialog_10
# 141 "data/maps/daycarebase/scripts.pory"
	speakername DaycareOldManDialog_Text_0
# 142 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_2, MSGBOX_DEFAULT
# 143 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 144 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_7:
# 162 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 163 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_0
# 164 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 165 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, Common_Movement_ExclamationMark
# 166 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 167 "data/maps/daycarebase/scripts.pory"
	speakername DaycareOldManDialog_Text_0
# 168 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_4, MSGBOX_YESNO
# 169 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 170 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareOldManDialog_13
# 215 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 216 "data/maps/daycarebase/scripts.pory"
	playse SE_M_SCRATCH
# 217 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_10, MSGBOX_DEFAULT
# 218 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 219 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 220 "data/maps/daycarebase/scripts.pory"
	speakername DaycareOldManDialog_Text_0
# 221 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_6, MSGBOX_DEFAULT
# 222 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 223 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 224 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP
# 225 "data/maps/daycarebase/scripts.pory"
	waitse
# 226 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP_MAX
# 227 "data/maps/daycarebase/scripts.pory"
	waitse
# 228 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 229 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_7, MSGBOX_DEFAULT
# 230 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 231 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 232 "data/maps/daycarebase/scripts.pory"
	speakername DaycareOldManDialog_Text_0
# 233 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_8, MSGBOX_AUTOCLOSE
# 234 "data/maps/daycarebase/scripts.pory"
	special SpawnCameraObject
# 235 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_1
# 236 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 237 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_2
# 238 "data/maps/daycarebase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DaycareOldManDialog_Movement_2
# 239 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 240 "data/maps/daycarebase/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 241 "data/maps/daycarebase/scripts.pory"
	delay 60
# 242 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 24
# 243 "data/maps/daycarebase/scripts.pory"
	delay 60
# 244 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK, 24
# 245 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_3
# 246 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 247 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_4
# 248 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 249 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_5
# 250 "data/maps/daycarebase/scripts.pory"
	speakername DaycareOldManDialog_Text_0
# 251 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_9, MSGBOX_DEFAULT
# 252 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 60
# 253 "data/maps/daycarebase/scripts.pory"
	delay 60
# 254 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_BEAT_MEW
# 255 "data/maps/daycarebase/scripts.pory"
	special GameClear
	return

DaycareOldManDialog_10:
# 134 "data/maps/daycarebase/scripts.pory"
	speakername DaycareOldManDialog_Text_0
# 135 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_1, MSGBOX_DEFAULT
# 136 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 137 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_13:
# 172 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 173 "data/maps/daycarebase/scripts.pory"
	playse SE_ITEMFINDER
# 174 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_5, MSGBOX_DEFAULT
# 175 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 176 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 177 "data/maps/daycarebase/scripts.pory"
	speakername DaycareOldManDialog_Text_0
# 178 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_6, MSGBOX_DEFAULT
# 179 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 180 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 181 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP
# 182 "data/maps/daycarebase/scripts.pory"
	waitse
# 183 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP_MAX
# 184 "data/maps/daycarebase/scripts.pory"
	waitse
# 185 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 186 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_7, MSGBOX_DEFAULT
# 187 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 188 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 189 "data/maps/daycarebase/scripts.pory"
	speakername DaycareOldManDialog_Text_0
# 190 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_8, MSGBOX_AUTOCLOSE
# 191 "data/maps/daycarebase/scripts.pory"
	special SpawnCameraObject
# 192 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_1
# 193 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 194 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_2
# 195 "data/maps/daycarebase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DaycareOldManDialog_Movement_2
# 196 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 197 "data/maps/daycarebase/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 198 "data/maps/daycarebase/scripts.pory"
	delay 60
# 199 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 24
# 200 "data/maps/daycarebase/scripts.pory"
	delay 60
# 201 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK, 24
# 202 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_3
# 203 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 204 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_4
# 205 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 206 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_5
# 207 "data/maps/daycarebase/scripts.pory"
	speakername DaycareOldManDialog_Text_0
# 208 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_9, MSGBOX_DEFAULT
# 209 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 60
# 210 "data/maps/daycarebase/scripts.pory"
	delay 60
# 211 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_BEAT_MEW
# 212 "data/maps/daycarebase/scripts.pory"
	special GameClear
	return


VaporeonDialog::
# 273 "data/maps/daycarebase/scripts.pory"
	lock
# 274 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 275 "data/maps/daycarebase/scripts.pory"
	speakername VaporeonDialog_Text_0
# 276 "data/maps/daycarebase/scripts.pory"
	msgbox VaporeonDialog_Text_1
# 277 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 278 "data/maps/daycarebase/scripts.pory"
	release
	end


LaprasDialog::
# 284 "data/maps/daycarebase/scripts.pory"
	lock
# 285 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 286 "data/maps/daycarebase/scripts.pory"
	speakername LaprasDialog_Text_0
# 287 "data/maps/daycarebase/scripts.pory"
	msgbox LaprasDialog_Text_1
# 288 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 289 "data/maps/daycarebase/scripts.pory"
	release
	end


LinooneDialog::
# 294 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq LinooneDialog_1
# 306 "data/maps/daycarebase/scripts.pory"
	lock
# 307 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 308 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 309 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_2
# 310 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 311 "data/maps/daycarebase/scripts.pory"
	release
	end

LinooneDialog_1:
# 296 "data/maps/daycarebase/scripts.pory"
	lock
# 297 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 298 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 299 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_1
# 300 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 301 "data/maps/daycarebase/scripts.pory"
	release
	end


BulbsaurDialog::
# 317 "data/maps/daycarebase/scripts.pory"
	lock
# 318 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 319 "data/maps/daycarebase/scripts.pory"
	speakername BulbsaurDialog_Text_0
# 320 "data/maps/daycarebase/scripts.pory"
	msgbox BulbsaurDialog_Text_1, MSGBOX_DEFAULT
# 321 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 322 "data/maps/daycarebase/scripts.pory"
	release
	end


CombeeDialog::
# 327 "data/maps/daycarebase/scripts.pory"
	lock
# 328 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 329 "data/maps/daycarebase/scripts.pory"
	speakername CombeeDialog_Text_0
# 330 "data/maps/daycarebase/scripts.pory"
	msgbox CombeeDialog_Text_1, MSGBOX_DEFAULT
# 331 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 332 "data/maps/daycarebase/scripts.pory"
	release
	end


Porygon2Dialog::
# 337 "data/maps/daycarebase/scripts.pory"
	lock
# 338 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 339 "data/maps/daycarebase/scripts.pory"
	speakername Porygon2Dialog_Text_0
# 340 "data/maps/daycarebase/scripts.pory"
	msgbox Porygon2Dialog_Text_1, MSGBOX_DEFAULT
# 341 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 342 "data/maps/daycarebase/scripts.pory"
	release
	end


ScytherDialog::
# 347 "data/maps/daycarebase/scripts.pory"
	lock
# 348 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 349 "data/maps/daycarebase/scripts.pory"
	speakername ScytherDialog_Text_0
# 350 "data/maps/daycarebase/scripts.pory"
	msgbox ScytherDialog_Text_1, MSGBOX_DEFAULT
# 351 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 352 "data/maps/daycarebase/scripts.pory"
	release
	end


RioluDialog::
# 357 "data/maps/daycarebase/scripts.pory"
	lock
# 358 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 359 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_RIOLU_INTRO, RioluDialog_1
# 472 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 473 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_26
# 474 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_RIOLU_INTRO
# 475 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 476 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_1:
# 361 "data/maps/daycarebase/scripts.pory"
	lock
# 362 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 363 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 364 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_1
# 365 "data/maps/daycarebase/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 366 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RioluDialog_4
# 462 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 463 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_25, MSGBOX_AUTOCLOSE
# 464 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 465 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_4:
# 369 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_2, MSGBOX_YESNO
# 370 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RioluDialog_7
# 454 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_24
# 455 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 456 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_7:
# 372 "data/maps/daycarebase/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 373 "data/maps/daycarebase/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, RioluDialog_Text_3, RioluDialog_Text_4, RioluDialog_Text_5, RioluDialog_Text_6, RioluDialog_Text_7, RioluDialog_Text_8, RioluDialog_Text_9, MimikyuDialog_Text_0, RioluDialog_Text_10, RioluDialog_Text_11, RioluDialog_Text_12
# 374 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RioluDialog_10
# 381 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RioluDialog_11
# 388 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RioluDialog_12
# 395 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RioluDialog_13
# 402 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq RioluDialog_14
# 409 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq RioluDialog_15
# 416 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq RioluDialog_16
# 423 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq RioluDialog_17
# 430 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq RioluDialog_18
# 437 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq RioluDialog_19
# 444 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq RioluDialog_20
	return

RioluDialog_10:
# 376 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_13, MSGBOX_DEFAULT
# 377 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 378 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_11:
# 383 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_14, MSGBOX_DEFAULT
# 384 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 385 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_12:
# 390 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_15, MSGBOX_DEFAULT
# 391 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 392 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_13:
# 397 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_16, MSGBOX_DEFAULT
# 398 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 399 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_14:
# 404 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_17, MSGBOX_DEFAULT
# 405 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 406 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_15:
# 411 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_18, MSGBOX_DEFAULT
# 412 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 413 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_16:
# 418 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_19, MSGBOX_DEFAULT
# 419 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 420 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_17:
# 425 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_20, MSGBOX_DEFAULT
# 426 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 427 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_18:
# 432 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_21, MSGBOX_DEFAULT
# 433 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 434 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_19:
# 439 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_22, MSGBOX_DEFAULT
# 440 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 441 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_20:
# 446 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_23, MSGBOX_DEFAULT
# 447 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 448 "data/maps/daycarebase/scripts.pory"
	release
	end


BattleVsPikachu::
# 483 "data/maps/daycarebase/scripts.pory"
	lock
# 485 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_TRANS_PIKACHU, BattleVsPikachu_2
# 495 "data/maps/daycarebase/scripts.pory"
	applymovement Pikachu, DaycareOldManDialog_Movement_0
# 496 "data/maps/daycarebase/scripts.pory"
	waitmovement Pikachu
# 497 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 498 "data/maps/daycarebase/scripts.pory"
	applymovement Pikachu, Common_Movement_ExclamationMark
# 499 "data/maps/daycarebase/scripts.pory"
	waitmovement Pikachu
# 500 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 501 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_1, MSGBOX_AUTOCLOSE
# 502 "data/maps/daycarebase/scripts.pory"
	setwildbattle SPECIES_PIKACHU, 25
# 503 "data/maps/daycarebase/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 504 "data/maps/daycarebase/scripts.pory"
	dowildbattle
# 505 "data/maps/daycarebase/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 506 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsPikachu_4
	return

BattleVsPikachu_2:
# 487 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 488 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 489 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_0, MSGBOX_DEFAULT
# 490 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 491 "data/maps/daycarebase/scripts.pory"
	release
	end

BattleVsPikachu_4:
# 508 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 509 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_TRANS_PIKACHU
# 510 "data/maps/daycarebase/scripts.pory"
	dittotransform SPECIES_PIKACHU
# 511 "data/maps/daycarebase/scripts.pory"
	playse MUS_LEVEL_UP
# 512 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_2, MSGBOX_DEFAULT
# 513 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 514 "data/maps/daycarebase/scripts.pory"
	dittotransform VAR_TEMP_0
# 515 "data/maps/daycarebase/scripts.pory"
	givemon SPECIES_PIKACHU, 25, move1 = MOVE_NUZZLE, move2 = MOVE_IRON_TAIL, move3 = MOVE_SPARK, move4 = MOVE_FLASH
# 516 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 517 "data/maps/daycarebase/scripts.pory"
	release
	end


ChanseyHeal::
# 523 "data/maps/daycarebase/scripts.pory"
	lock
# 524 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 525 "data/maps/daycarebase/scripts.pory"
	speakername ChanseyHeal_Text_0
# 526 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_1, MSGBOX_YESNO
# 527 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 528 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyHeal_1
# 554 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_4, MSGBOX_AUTOCLOSE
# 555 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 556 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_1:
# 530 "data/maps/daycarebase/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 531 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyHeal_4
# 546 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_3, MSGBOX_AUTOCLOSE
# 547 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 548 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_4:
# 533 "data/maps/daycarebase/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 534 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 535 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_HEAL
# 536 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 537 "data/maps/daycarebase/scripts.pory"
	special HealPlayerParty
# 538 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 539 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_2, MSGBOX_AUTOCLOSE
# 540 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 541 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_FindLuckyEgg::
# 563 "data/maps/daycarebase/scripts.pory"
	lock
# 564 "data/maps/daycarebase/scripts.pory"
	finditem ITEM_LUCKY_EGG
# 565 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 566 "data/maps/daycarebase/scripts.pory"
	release
	end


# 163 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_0:
# 163 "data/maps/daycarebase/scripts.pory"
	face_player
	step_end

# 192 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_1:
# 192 "data/maps/daycarebase/scripts.pory"
	face_down
	step_end

# 194 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_2:
# 194 "data/maps/daycarebase/scripts.pory"
	walk_down
# 194 "data/maps/daycarebase/scripts.pory"
	walk_down
	step_end

# 202 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_3:
# 202 "data/maps/daycarebase/scripts.pory"
	walk_fast_up
# 202 "data/maps/daycarebase/scripts.pory"
	walk_fast_up
# 202 "data/maps/daycarebase/scripts.pory"
	walk_fast_up
# 202 "data/maps/daycarebase/scripts.pory"
	walk_fast_up
# 202 "data/maps/daycarebase/scripts.pory"
	walk_fast_up
# 202 "data/maps/daycarebase/scripts.pory"
	walk_fast_up
	step_end

# 204 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_4:
# 204 "data/maps/daycarebase/scripts.pory"
	walk_left
# 204 "data/maps/daycarebase/scripts.pory"
	walk_left
# 204 "data/maps/daycarebase/scripts.pory"
	walk_left
# 204 "data/maps/daycarebase/scripts.pory"
	walk_left
# 204 "data/maps/daycarebase/scripts.pory"
	walk_left
# 204 "data/maps/daycarebase/scripts.pory"
	walk_left
# 204 "data/maps/daycarebase/scripts.pory"
	walk_left
# 204 "data/maps/daycarebase/scripts.pory"
	walk_left
# 204 "data/maps/daycarebase/scripts.pory"
	walk_left
	step_end

# 206 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_5:
# 206 "data/maps/daycarebase/scripts.pory"
	face_right
	step_end

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
# 134 "data/maps/daycarebase/scripts.pory"
	.string "Daycare Man$"

DaycareOldManDialog_Text_1:
# 135 "data/maps/daycarebase/scripts.pory"
	.string "Back from exploring the Daycare?\pAh!\nBut where is your egg!\pKeep doing whatever it is you\nDittos do and come back when\lyou have one!$"

DaycareOldManDialog_Text_2:
# 142 "data/maps/daycarebase/scripts.pory"
	.string "Why, who are you?\pI'm looking for a Ditto.\n$"

DaycareOldManDialog_Text_3:
# 151 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pDespite what trainers may see from\nRoute 117, the Daycare is a vast\larea filled with biomes for nearly\levery type of Pokémon!\pExplore the Daycare and interact\nwith many of the Pokémon we are\lraising.\pYou never know what friends you\nwill make along the way!\pNow, I do expect you to be holding\nan Egg at some point... Every Ditto\lI've raised has produced one.\pWhen you're holding an Egg,\ncome back and talk to me and\lwe can get it to your trainer.$"

DaycareOldManDialog_Text_4:
# 168 "data/maps/daycarebase/scripts.pory"
	.string "Why what do we have here?\nGoodness!\pYou're holding an Egg!\pWherever did you get this?\pIt's the darndest thing.\pYou Pokémon always seem to find\nthese eggs, but I can never figure\lout where they come from.\pWould you like to give me the Egg\nso that I may give it to your\lTrainer?$"

DaycareOldManDialog_Text_5:
# 174 "data/maps/daycarebase/scripts.pory"
	.string "Ditto handed over the Egg.\n$"

DaycareOldManDialog_Text_6:
# 178 "data/maps/daycarebase/scripts.pory"
	.string "Thank your for the Egg!\pAs a reward, take this experience!\n$"

DaycareOldManDialog_Text_7:
# 186 "data/maps/daycarebase/scripts.pory"
	.string "Ditto grew to level 26.\n$"

DaycareOldManDialog_Text_8:
# 190 "data/maps/daycarebase/scripts.pory"
	.string "With this Egg, I can now fulfill\nmy duties.$"

DaycareOldManDialog_Text_9:
# 208 "data/maps/daycarebase/scripts.pory"
	.string "Ah, it's you!\pWe were raising your Pokémon\nand my goodness, were we surprised!\pYour Pokémon had an Egg!\pWe don't know how it got there,\nbut your Pokémon had it.\pYou do want it, yes?\n$"

DaycareOldManDialog_Text_10:
# 217 "data/maps/daycarebase/scripts.pory"
	.string "The Daycare Man ripped the Egg\nfrom Ditto's clutches.$"

VaporeonDialog_Text_0:
# 275 "data/maps/daycarebase/scripts.pory"
	.string "Vaporeon$"

VaporeonDialog_Text_1:
# 276 "data/maps/daycarebase/scripts.pory"
	.string "Ew!\pGet away from me.\pI know it's you Ditto.\pGoodness,\nwhy is everyone so into me?$"

LaprasDialog_Text_0:
# 286 "data/maps/daycarebase/scripts.pory"
	.string "Lapras$"

LaprasDialog_Text_1:
# 287 "data/maps/daycarebase/scripts.pory"
	.string "I love the Daycare!\pIt's so peaceful and quiet here.\pI can just float around all day\nand relax.\pThose waterfalls are pretty\nvicious, I won't go near them.\pI've heard that Dragonair can\neasily scale even the largest\lof waterfalls!$"

LinooneDialog_Text_0:
# 298 "data/maps/daycarebase/scripts.pory"
	.string "Linoone$"

LinooneDialog_Text_1:
# 299 "data/maps/daycarebase/scripts.pory"
	.string "The Daycare is huge!\pIt's a bit scary to expore,\nso I stay up here.\pRiolu is way more brave than I\nam and has explored the entirety\lof the Daycare.\pYou should talk with Riolu if\nyou get lost!\pI'm sure they can help!\n$"

LinooneDialog_Text_2:
# 309 "data/maps/daycarebase/scripts.pory"
	.string "Those Dittos really freak me out.\pThey could be any one of use right\nnow...\pEven you!... or me!\n$"

BulbsaurDialog_Text_0:
# 319 "data/maps/daycarebase/scripts.pory"
	.string "Bulbasaur$"

BulbsaurDialog_Text_1:
# 320 "data/maps/daycarebase/scripts.pory"
	.string "You want to know where Eggs\ncome from?\pI heard that a Pokémon needs\nto go on a great adventure to\lmeet a shapeshifting Pokémon.\pIf you can best them, they will\ngive you an egg!\pAt least, that's what Venusaur\ntold me...$"

CombeeDialog_Text_0:
# 329 "data/maps/daycarebase/scripts.pory"
	.string "Combee$"

CombeeDialog_Text_1:
# 330 "data/maps/daycarebase/scripts.pory"
	.string "I've been in this Daycare\nfor ages!\pI've flown all around and\npollenated so many flowers\lbut I still haven't gained a\lsingle level.\pI'm beginning to believe gaining\nexperience here is nothing more\lthan a big ole myth!$"

Porygon2Dialog_Text_0:
# 339 "data/maps/daycarebase/scripts.pory"
	.string "Porygon2$"

Porygon2Dialog_Text_1:
# 340 "data/maps/daycarebase/scripts.pory"
	.string "Another Ditto...\pI'm actually a Ditto too,\nI just prefer this look.\pThe Daycare population must be at\nleast 75 percent Dittos!\pMost Dittos will take on different\nforms.\pYou won't be able to transform\ninto a form that another Ditto has\ltaken on though.$"

ScytherDialog_Text_0:
# 349 "data/maps/daycarebase/scripts.pory"
	.string "Scyther$"

ScytherDialog_Text_1:
# 350 "data/maps/daycarebase/scripts.pory"
	.string "One in every fifty Dittos that I\nsee here are blue.\pMust be all those shiny hunters\ntrying to capitalize on Gen 2\lmechanics.\pWhen will they learn that this is\nGen3...$"

RioluDialog_Text_0:
# 363 "data/maps/daycarebase/scripts.pory"
	.string "Riolu$"

RioluDialog_Text_1:
# 364 "data/maps/daycarebase/scripts.pory"
	.string "Back with a Lucky Egg?\n$"

RioluDialog_Text_2:
# 369 "data/maps/daycarebase/scripts.pory"
	.string "Great!\pI can tell about the habitat and\nability of a Pokémon in the Daycare.\pWould you like to exchange a\nLucky Egg?$"

RioluDialog_Text_3:
# 373 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine$"

RioluDialog_Text_4:
# 373 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou$"

RioluDialog_Text_5:
# 373 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly$"

RioluDialog_Text_6:
# 373 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair$"

RioluDialog_Text_7:
# 373 "data/maps/daycarebase/scripts.pory"
	.string "Marill$"

RioluDialog_Text_8:
# 373 "data/maps/daycarebase/scripts.pory"
	.string "Machamp$"

RioluDialog_Text_9:
# 373 "data/maps/daycarebase/scripts.pory"
	.string "Noivern$"

RioluDialog_Text_10:
# 373 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn$"

RioluDialog_Text_11:
# 373 "data/maps/daycarebase/scripts.pory"
	.string "Lurantis$"

RioluDialog_Text_12:
# 373 "data/maps/daycarebase/scripts.pory"
	.string "Weavile$"

RioluDialog_Text_13:
# 376 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine can be found deep in the\nVolcano.\pIt can run really fast and scale\nhills that would normally be to\lslippery to climb!$"

RioluDialog_Text_14:
# 383 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou can be found in a cave\non the water in the desert.\pIt can dive deep underwater.\n$"

RioluDialog_Text_15:
# 390 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly can be found in the\nDaycare's flowers to the west.\pIt's a tiny Pokémon that can\nfit through small openings.$"

RioluDialog_Text_16:
# 397 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair can be found at the lake.\pIt can be a bit cryptic so it\nmay be difficult to reach.\pIt can scale large waterfalls\nwith ease.$"

RioluDialog_Text_17:
# 404 "data/maps/daycarebase/scripts.pory"
	.string "Marill can be found at the lake,\nusually by the shore.\pIt's a bit shy so it may be hiding.\pIt can float in any body of water.\n$"

RioluDialog_Text_18:
# 411 "data/maps/daycarebase/scripts.pory"
	.string "Machamp likes to train deep in\nthe mountains.\pIt is a very tough and solitary\nPokémon.\pIts strength can move large\nboulders.$"

RioluDialog_Text_19:
# 418 "data/maps/daycarebase/scripts.pory"
	.string "Noivern hangs out in a dark\ncave above the Daycare Falls.\pIt's quite a powerful Pokémon,\nso be prepared for a fight.\pIt can soar through the air,\nreaching places unreachable by\lnon_flying types.$"

RioluDialog_Text_20:
# 425 "data/maps/daycarebase/scripts.pory"
	.string "Pikachu is standing on that cliff\nright over there.\pIts electricity can light up even\nthe darkest of caves.$"

RioluDialog_Text_21:
# 432 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn lives in the desert.\pIt's quite a friendly Pokémon,\nbut don't upset it!\pIt is strong enough to smash\nsolid rocks!$"

RioluDialog_Text_22:
# 439 "data/maps/daycarebase/scripts.pory"
	.string "Lurantis has been spending time\nacross the water in the mountains.\pIts sharp limbs can cut through\nsmall trees.$"

RioluDialog_Text_23:
# 446 "data/maps/daycarebase/scripts.pory"
	.string "Weavile is quite the ninja.\pIt spends time in the tall trees\nin the jungle.\pIt demands a fierce challenger\nto battle it.\pIts agility allows it to cross\neven the smallest of walkways.$"

RioluDialog_Text_24:
# 454 "data/maps/daycarebase/scripts.pory"
	.string "Oh.\pWhat else are you gonna do\nwith that egg?$"

RioluDialog_Text_25:
# 463 "data/maps/daycarebase/scripts.pory"
	.string "No?\nCome back when you do!$"

RioluDialog_Text_26:
# 473 "data/maps/daycarebase/scripts.pory"
	.string "Hiya!\pI'm Riolu!\pI've visited every biome the\nDaycare has to offer.\lI know it like the back of my paw!\pIf you need guidance on where a\ncertain Pokémon might be,\lI'm your Pokémon!\pAlthough I won't do it for free...\pBring me Lucky Eggs, and I'll tell\nyou what I know.$"

BattleVsPikachu_Text_0:
# 489 "data/maps/daycarebase/scripts.pory"
	.string "You really lit me up.\pBest of luck on your journey!\n$"

BattleVsPikachu_Text_1:
# 501 "data/maps/daycarebase/scripts.pory"
	.string "A Ditto!\pYou must be on your quest to obtain\nyour egg.\pDefeat me in battle and I'll allow\nyou to transform into me!$"

BattleVsPikachu_Text_2:
# 512 "data/maps/daycarebase/scripts.pory"
	.string "You have gained the ability to\ntransform into Pikachu!$"

ChanseyHeal_Text_0:
# 525 "data/maps/daycarebase/scripts.pory"
	.string "Chansey$"

ChanseyHeal_Text_1:
# 526 "data/maps/daycarebase/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.\pWould you like to heal?$"

ChanseyHeal_Text_2:
# 539 "data/maps/daycarebase/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyHeal_Text_3:
# 546 "data/maps/daycarebase/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyHeal_Text_4:
# 554 "data/maps/daycarebase/scripts.pory"
	.string "Oh, okay then.$"
