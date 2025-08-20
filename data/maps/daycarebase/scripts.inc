daycarebase_MapScripts::
# 2 "data/maps/daycarebase/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Daycare_OnTransition
# 3 "data/maps/daycarebase/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, daycarebase_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

daycarebase_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/daycarebase/scripts.pory"
	map_script_2 VAR_TEMP_A, 0, DaycareIntro
	.2byte 0


DaycareIntro::
# 7 "data/maps/daycarebase/scripts.pory"
	lock
# 8 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 9 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareIntro_Text_1, MSGBOX_AUTOCLOSE
# 10 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 11 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_OLDMAN_INTRO
# 12 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareManIntro, DaycareIntro_Movement_0
# 13 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareManIntro
# 14 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareManIntro, DaycareIntro_Movement_1
# 15 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareManIntro
# 16 "data/maps/daycarebase/scripts.pory"
	removeobject DaycareManIntro
# 17 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_HIDE_INTRO_DAYCAREMAN
# 18 "data/maps/daycarebase/scripts.pory"
	applymovement LOCALID_PLAYER, DaycareIntro_Movement_2
# 19 "data/maps/daycarebase/scripts.pory"
	applymovement VaporeonIntro, DaycareIntro_Movement_3
# 20 "data/maps/daycarebase/scripts.pory"
	waitmovement LOCALID_PLAYER
# 21 "data/maps/daycarebase/scripts.pory"
	waitmovement VaporeonIntro
# 22 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_2
# 23 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareIntro_Text_3, MSGBOX_AUTOCLOSE
# 24 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 25 "data/maps/daycarebase/scripts.pory"
	playse SE_FLEE
# 26 "data/maps/daycarebase/scripts.pory"
	waitse
# 27 "data/maps/daycarebase/scripts.pory"
	applymovement VaporeonIntro, DaycareIntro_Movement_4
# 28 "data/maps/daycarebase/scripts.pory"
	waitmovement VaporeonIntro
# 29 "data/maps/daycarebase/scripts.pory"
	removeobject VaporeonIntro
# 30 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_HIDE_VAPOREON_INTRO
# 31 "data/maps/daycarebase/scripts.pory"
	setvar VAR_TEMP_A, 1
# 32 "data/maps/daycarebase/scripts.pory"
	release
	end


Daycare_OnTransition::
# 37 "data/maps/daycarebase/scripts.pory"
	setrespawn HEAL_LOCATION_DAYCAREBASE
	end


ShrinkToPikachuCave::
# 42 "data/maps/daycarebase/scripts.pory"
	lockall
# 43 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinkToPikachuCave_1
# 59 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_1, MSGBOX_DEFAULT
# 60 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 61 "data/maps/daycarebase/scripts.pory"
	releaseall
	end

ShrinkToPikachuCave_1:
# 45 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_0, MSGBOX_YESNO
# 46 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinkToPikachuCave_4
# 52 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 53 "data/maps/daycarebase/scripts.pory"
	releaseall
	end

ShrinkToPikachuCave_4:
# 48 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_PIKACHU_SHRINK_CAVE, 0
	return


ShrinktoMausholdCave::
# 67 "data/maps/daycarebase/scripts.pory"
	lockall
# 68 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinktoMausholdCave_1
# 84 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_1, MSGBOX_DEFAULT
# 85 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 86 "data/maps/daycarebase/scripts.pory"
	releaseall
	end

ShrinktoMausholdCave_1:
# 70 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_0, MSGBOX_YESNO
# 71 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinktoMausholdCave_4
# 77 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 78 "data/maps/daycarebase/scripts.pory"
	releaseall
	end

ShrinktoMausholdCave_4:
# 73 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_MAUSHOLD_SHRINK, 0
	return


MimikyuDialog::
# 92 "data/maps/daycarebase/scripts.pory"
	lock
# 93 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 94 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq MimikyuDialog_1
# 106 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 107 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_DEFAULT
# 108 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 109 "data/maps/daycarebase/scripts.pory"
	release
	end

MimikyuDialog_1:
# 96 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 97 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_DEFAULT
# 98 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_2
# 99 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_3, MSGBOX_DEFAULT
# 100 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 101 "data/maps/daycarebase/scripts.pory"
	release
	end


KecleonDialog::
# 114 "data/maps/daycarebase/scripts.pory"
	lock
# 115 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 116 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq KecleonDialog_1
# 126 "data/maps/daycarebase/scripts.pory"
	speakername KecleonDialog_Text_0
# 127 "data/maps/daycarebase/scripts.pory"
	msgbox KecleonDialog_Text_2, MSGBOX_DEFAULT
# 128 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 129 "data/maps/daycarebase/scripts.pory"
	release
	end

KecleonDialog_1:
# 118 "data/maps/daycarebase/scripts.pory"
	speakername KecleonDialog_Text_0
# 119 "data/maps/daycarebase/scripts.pory"
	msgbox KecleonDialog_Text_1, MSGBOX_DEFAULT
# 120 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 121 "data/maps/daycarebase/scripts.pory"
	release
	end


AzumarillDialog::
# 136 "data/maps/daycarebase/scripts.pory"
	lock
# 137 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 138 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq AzumarillDialog_1
# 148 "data/maps/daycarebase/scripts.pory"
	speakername AzumarillDialog_Text_0
# 149 "data/maps/daycarebase/scripts.pory"
	msgbox AzumarillDialog_Text_2, MSGBOX_DEFAULT
# 150 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 151 "data/maps/daycarebase/scripts.pory"
	release
	end

AzumarillDialog_1:
# 140 "data/maps/daycarebase/scripts.pory"
	speakername AzumarillDialog_Text_0
# 141 "data/maps/daycarebase/scripts.pory"
	msgbox AzumarillDialog_Text_1, MSGBOX_DEFAULT
# 142 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 143 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareOldManDialog::
# 157 "data/maps/daycarebase/scripts.pory"
	lock
# 158 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 159 "data/maps/daycarebase/scripts.pory"
	goto_if_unset FLAG_BEAT_MEW, DaycareOldManDialog_1
# 191 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq DaycareOldManDialog_7
# 299 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 300 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_1, MSGBOX_DEFAULT
# 301 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 302 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_1:
# 161 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_OLDMAN_INTRO, DaycareOldManDialog_4
# 181 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 182 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_2, MSGBOX_DEFAULT
# 183 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 184 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_OLDMAN_INTRO
# 185 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_4:
# 163 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq DaycareOldManDialog_10
# 172 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 173 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_1, MSGBOX_DEFAULT
# 174 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 175 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_7:
# 193 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 194 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_0
# 195 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 196 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, Common_Movement_ExclamationMark
# 197 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 198 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 199 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_3, MSGBOX_YESNO
# 200 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 201 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareOldManDialog_13
# 255 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 256 "data/maps/daycarebase/scripts.pory"
	playse SE_M_SCRATCH
# 257 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_9, MSGBOX_DEFAULT
# 258 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 259 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 260 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 261 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_5, MSGBOX_DEFAULT
# 262 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 263 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 264 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP
# 265 "data/maps/daycarebase/scripts.pory"
	waitse
# 266 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP_MAX
# 267 "data/maps/daycarebase/scripts.pory"
	waitse
# 268 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 269 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_6, MSGBOX_DEFAULT
# 270 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 271 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 272 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 273 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_7, MSGBOX_AUTOCLOSE
# 274 "data/maps/daycarebase/scripts.pory"
	special SpawnCameraObject
# 275 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_1
# 276 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 277 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_2
# 278 "data/maps/daycarebase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DaycareOldManDialog_Movement_2
# 279 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 280 "data/maps/daycarebase/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 281 "data/maps/daycarebase/scripts.pory"
	delay 60
# 282 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 24
# 283 "data/maps/daycarebase/scripts.pory"
	delay 60
# 284 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK, 24
# 285 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_6
# 286 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 287 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_7
# 288 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 289 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareIntro_Movement_2
# 290 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 291 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_8, MSGBOX_DEFAULT
# 292 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 60
# 293 "data/maps/daycarebase/scripts.pory"
	delay 60
# 294 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_BEAT_MEW
# 295 "data/maps/daycarebase/scripts.pory"
	special GameClear
	return

DaycareOldManDialog_10:
# 165 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 166 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_0, MSGBOX_DEFAULT
# 167 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 168 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_13:
# 203 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 204 "data/maps/daycarebase/scripts.pory"
	playse SE_ITEMFINDER
# 205 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_4, MSGBOX_DEFAULT
# 206 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 207 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 208 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 209 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_5, MSGBOX_DEFAULT
# 210 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 211 "data/maps/daycarebase/scripts.pory"
	removeobject BrendanBiking
# 212 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_HIDE_BRENDAN_BIKE
# 213 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 214 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP
# 215 "data/maps/daycarebase/scripts.pory"
	waitse
# 216 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP_MAX
# 217 "data/maps/daycarebase/scripts.pory"
	waitse
# 218 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 219 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_6, MSGBOX_DEFAULT
# 220 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 221 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 222 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 223 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_7, MSGBOX_AUTOCLOSE
# 224 "data/maps/daycarebase/scripts.pory"
	special SpawnCameraObject
# 225 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_1
# 226 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 227 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_2
# 228 "data/maps/daycarebase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DaycareOldManDialog_Movement_2
# 229 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 230 "data/maps/daycarebase/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 231 "data/maps/daycarebase/scripts.pory"
	delay 60
# 232 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 24
# 233 "data/maps/daycarebase/scripts.pory"
	delay 60
# 234 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SHOW_BRENDAN_OUTRO
# 235 "data/maps/daycarebase/scripts.pory"
	addobject Brendan
# 236 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK, 24
# 237 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_3
# 238 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 239 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 240 "data/maps/daycarebase/scripts.pory"
	waitse
# 241 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, Common_Movement_ExclamationMark
# 242 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 243 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_4
# 244 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 245 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_5
# 246 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 247 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 248 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_8, MSGBOX_DEFAULT
# 249 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 60
# 250 "data/maps/daycarebase/scripts.pory"
	delay 60
# 251 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_BEAT_MEW
# 252 "data/maps/daycarebase/scripts.pory"
	special GameClear
	return


VaporeonDialog::
# 313 "data/maps/daycarebase/scripts.pory"
	lock
# 314 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 315 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_2
# 316 "data/maps/daycarebase/scripts.pory"
	msgbox VaporeonDialog_Text_0
# 317 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 318 "data/maps/daycarebase/scripts.pory"
	release
	end


LaprasDialog::
# 324 "data/maps/daycarebase/scripts.pory"
	lock
# 325 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 326 "data/maps/daycarebase/scripts.pory"
	speakername LaprasDialog_Text_0
# 327 "data/maps/daycarebase/scripts.pory"
	msgbox LaprasDialog_Text_1
# 328 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 329 "data/maps/daycarebase/scripts.pory"
	release
	end


LinooneDialog::
# 334 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq LinooneDialog_1
# 346 "data/maps/daycarebase/scripts.pory"
	lock
# 347 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 348 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 349 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_2
# 350 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 351 "data/maps/daycarebase/scripts.pory"
	release
	end

LinooneDialog_1:
# 336 "data/maps/daycarebase/scripts.pory"
	lock
# 337 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 338 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 339 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_1
# 340 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 341 "data/maps/daycarebase/scripts.pory"
	release
	end


BulbsaurDialog::
# 357 "data/maps/daycarebase/scripts.pory"
	lock
# 358 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 359 "data/maps/daycarebase/scripts.pory"
	speakername BulbsaurDialog_Text_0
# 360 "data/maps/daycarebase/scripts.pory"
	msgbox BulbsaurDialog_Text_1, MSGBOX_DEFAULT
# 361 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 362 "data/maps/daycarebase/scripts.pory"
	release
	end


CombeeDialog::
# 367 "data/maps/daycarebase/scripts.pory"
	lock
# 368 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 369 "data/maps/daycarebase/scripts.pory"
	speakername CombeeDialog_Text_0
# 370 "data/maps/daycarebase/scripts.pory"
	msgbox CombeeDialog_Text_1, MSGBOX_DEFAULT
# 371 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 372 "data/maps/daycarebase/scripts.pory"
	release
	end


Porygon2Dialog::
# 377 "data/maps/daycarebase/scripts.pory"
	lock
# 378 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 379 "data/maps/daycarebase/scripts.pory"
	speakername Porygon2Dialog_Text_0
# 380 "data/maps/daycarebase/scripts.pory"
	msgbox Porygon2Dialog_Text_1, MSGBOX_DEFAULT
# 381 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 382 "data/maps/daycarebase/scripts.pory"
	release
	end


ScytherDialog::
# 387 "data/maps/daycarebase/scripts.pory"
	lock
# 388 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 389 "data/maps/daycarebase/scripts.pory"
	speakername ScytherDialog_Text_0
# 390 "data/maps/daycarebase/scripts.pory"
	msgbox ScytherDialog_Text_1, MSGBOX_DEFAULT
# 391 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 392 "data/maps/daycarebase/scripts.pory"
	release
	end


RioluDialog::
# 397 "data/maps/daycarebase/scripts.pory"
	lock
# 398 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 399 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_RIOLU_INTRO, RioluDialog_1
# 512 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 513 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_26
# 514 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_RIOLU_INTRO
# 515 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 516 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_1:
# 401 "data/maps/daycarebase/scripts.pory"
	lock
# 402 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 403 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 404 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_1
# 405 "data/maps/daycarebase/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 406 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RioluDialog_4
# 502 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 503 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_25, MSGBOX_AUTOCLOSE
# 504 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 505 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_4:
# 409 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_2, MSGBOX_YESNO
# 410 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RioluDialog_7
# 494 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_24
# 495 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 496 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_7:
# 412 "data/maps/daycarebase/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 413 "data/maps/daycarebase/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, RioluDialog_Text_3, RioluDialog_Text_4, RioluDialog_Text_5, RioluDialog_Text_6, RioluDialog_Text_7, RioluDialog_Text_8, RioluDialog_Text_9, MimikyuDialog_Text_0, RioluDialog_Text_10, RioluDialog_Text_11, RioluDialog_Text_12
# 414 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RioluDialog_10
# 421 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RioluDialog_11
# 428 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RioluDialog_12
# 435 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RioluDialog_13
# 442 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq RioluDialog_14
# 449 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq RioluDialog_15
# 456 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq RioluDialog_16
# 463 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq RioluDialog_17
# 470 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq RioluDialog_18
# 477 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq RioluDialog_19
# 484 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq RioluDialog_20
	return

RioluDialog_10:
# 416 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_13, MSGBOX_DEFAULT
# 417 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 418 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_11:
# 423 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_14, MSGBOX_DEFAULT
# 424 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 425 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_12:
# 430 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_15, MSGBOX_DEFAULT
# 431 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 432 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_13:
# 437 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_16, MSGBOX_DEFAULT
# 438 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 439 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_14:
# 444 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_17, MSGBOX_DEFAULT
# 445 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 446 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_15:
# 451 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_18, MSGBOX_DEFAULT
# 452 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 453 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_16:
# 458 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_19, MSGBOX_DEFAULT
# 459 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 460 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_17:
# 465 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_20, MSGBOX_DEFAULT
# 466 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 467 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_18:
# 472 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_21, MSGBOX_DEFAULT
# 473 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 474 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_19:
# 479 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_22, MSGBOX_DEFAULT
# 480 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 481 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_20:
# 486 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_23, MSGBOX_DEFAULT
# 487 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 488 "data/maps/daycarebase/scripts.pory"
	release
	end


BattleVsPikachu::
# 523 "data/maps/daycarebase/scripts.pory"
	lock
# 525 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_TRANS_PIKACHU, BattleVsPikachu_2
# 535 "data/maps/daycarebase/scripts.pory"
	applymovement Pikachu, DaycareOldManDialog_Movement_0
# 536 "data/maps/daycarebase/scripts.pory"
	waitmovement Pikachu
# 537 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 538 "data/maps/daycarebase/scripts.pory"
	applymovement Pikachu, Common_Movement_ExclamationMark
# 539 "data/maps/daycarebase/scripts.pory"
	waitmovement Pikachu
# 540 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 541 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_1, MSGBOX_AUTOCLOSE
# 542 "data/maps/daycarebase/scripts.pory"
	setwildbattle SPECIES_PIKACHU, 25
# 543 "data/maps/daycarebase/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 544 "data/maps/daycarebase/scripts.pory"
	dowildbattle
# 545 "data/maps/daycarebase/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 546 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsPikachu_4
	return

BattleVsPikachu_2:
# 527 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 528 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 529 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_0, MSGBOX_DEFAULT
# 530 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 531 "data/maps/daycarebase/scripts.pory"
	release
	end

BattleVsPikachu_4:
# 548 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 549 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_TRANS_PIKACHU
# 550 "data/maps/daycarebase/scripts.pory"
	dittotransform SPECIES_PIKACHU
# 551 "data/maps/daycarebase/scripts.pory"
	playse MUS_LEVEL_UP
# 552 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_2, MSGBOX_DEFAULT
# 553 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 554 "data/maps/daycarebase/scripts.pory"
	dittotransform VAR_TEMP_0
# 555 "data/maps/daycarebase/scripts.pory"
	givemon SPECIES_PIKACHU, 25, move1 = MOVE_NUZZLE, move2 = MOVE_IRON_TAIL, move3 = MOVE_SPARK, move4 = MOVE_FLASH
# 556 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 557 "data/maps/daycarebase/scripts.pory"
	release
	end


ChanseyHeal::
# 563 "data/maps/daycarebase/scripts.pory"
	lock
# 564 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 565 "data/maps/daycarebase/scripts.pory"
	speakername ChanseyHeal_Text_0
# 566 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_1, MSGBOX_YESNO
# 567 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 568 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyHeal_1
# 594 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_4, MSGBOX_AUTOCLOSE
# 595 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 596 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_1:
# 570 "data/maps/daycarebase/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 571 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyHeal_4
# 586 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_3, MSGBOX_AUTOCLOSE
# 587 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 588 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_4:
# 573 "data/maps/daycarebase/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 574 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 575 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_HEAL
# 576 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 577 "data/maps/daycarebase/scripts.pory"
	special HealPlayerParty
# 578 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 579 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_2, MSGBOX_AUTOCLOSE
# 580 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 581 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_Ditto::
# 603 "data/maps/daycarebase/scripts.pory"
	lock
# 604 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 605 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_DITTO_INTRO, DaycareBase_Ditto_1
# 654 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_0
# 655 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_4, MSGBOX_DEFAULT
# 655 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 656 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_DITTO_INTRO
# 657 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 658 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_1:
# 607 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_XFORMS_TALKED_TO_DITTO, DaycareBase_Ditto_4
# 627 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_0
# 628 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_3, MSGBOX_DEFAULT
# 628 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 629 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_XFORMS_TALKED_TO_DITTO
# 630 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_1, MSGBOX_YESNO
# 631 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareBase_Ditto_10
# 642 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_2, MSGBOX_AUTOCLOSE
# 643 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 644 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 645 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 646 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_4:
# 609 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_0
# 610 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_1, MSGBOX_YESNO
# 611 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareBase_Ditto_7
# 620 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_2, MSGBOX_AUTOCLOSE
# 621 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 622 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_7:
# 613 "data/maps/daycarebase/scripts.pory"
	special OpenPCMoveMons
# 614 "data/maps/daycarebase/scripts.pory"
	waitstate
# 615 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_10:
# 633 "data/maps/daycarebase/scripts.pory"
	special OpenPCMoveMons
# 634 "data/maps/daycarebase/scripts.pory"
	waitstate
# 635 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 636 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 637 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_FindLuckyEgg::
# 666 "data/maps/daycarebase/scripts.pory"
	lock
# 667 "data/maps/daycarebase/scripts.pory"
	finditem ITEM_LUCKY_EGG
# 668 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 669 "data/maps/daycarebase/scripts.pory"
	release
	end


# 12 "data/maps/daycarebase/scripts.pory"
DaycareIntro_Movement_0:
# 12 "data/maps/daycarebase/scripts.pory"
	walk_right
	step_end

# 14 "data/maps/daycarebase/scripts.pory"
DaycareIntro_Movement_1:
# 14 "data/maps/daycarebase/scripts.pory"
	walk_down
# 14 "data/maps/daycarebase/scripts.pory"
	walk_down
# 14 "data/maps/daycarebase/scripts.pory"
	walk_down
# 14 "data/maps/daycarebase/scripts.pory"
	walk_down
# 14 "data/maps/daycarebase/scripts.pory"
	walk_down
# 14 "data/maps/daycarebase/scripts.pory"
	walk_down
# 14 "data/maps/daycarebase/scripts.pory"
	walk_down
	step_end

# 18 "data/maps/daycarebase/scripts.pory"
DaycareIntro_Movement_2:
# 18 "data/maps/daycarebase/scripts.pory"
	face_right
	step_end

# 19 "data/maps/daycarebase/scripts.pory"
DaycareIntro_Movement_3:
# 19 "data/maps/daycarebase/scripts.pory"
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

# 194 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_0:
# 194 "data/maps/daycarebase/scripts.pory"
	face_player
	step_end

# 225 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_1:
# 225 "data/maps/daycarebase/scripts.pory"
	face_down
	step_end

# 227 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_2:
# 227 "data/maps/daycarebase/scripts.pory"
	walk_down
# 227 "data/maps/daycarebase/scripts.pory"
	walk_down
	step_end

# 237 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_3:
# 237 "data/maps/daycarebase/scripts.pory"
	walk_right
# 237 "data/maps/daycarebase/scripts.pory"
	walk_right
# 237 "data/maps/daycarebase/scripts.pory"
	walk_right
# 237 "data/maps/daycarebase/scripts.pory"
	walk_right
# 237 "data/maps/daycarebase/scripts.pory"
	walk_right
	step_end

# 243 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_4:
# 243 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 243 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 243 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 243 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 243 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
	step_end

# 245 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_5:
# 245 "data/maps/daycarebase/scripts.pory"
	walk_fast_up
	step_end

# 285 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_6:
# 285 "data/maps/daycarebase/scripts.pory"
	walk_fast_up
# 285 "data/maps/daycarebase/scripts.pory"
	walk_fast_up
# 285 "data/maps/daycarebase/scripts.pory"
	walk_fast_up
# 285 "data/maps/daycarebase/scripts.pory"
	walk_fast_up
# 285 "data/maps/daycarebase/scripts.pory"
	walk_fast_up
# 285 "data/maps/daycarebase/scripts.pory"
	walk_fast_up
	step_end

# 287 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_7:
# 287 "data/maps/daycarebase/scripts.pory"
	walk_left
# 287 "data/maps/daycarebase/scripts.pory"
	walk_left
# 287 "data/maps/daycarebase/scripts.pory"
	walk_left
# 287 "data/maps/daycarebase/scripts.pory"
	walk_left
# 287 "data/maps/daycarebase/scripts.pory"
	walk_left
# 287 "data/maps/daycarebase/scripts.pory"
	walk_left
# 287 "data/maps/daycarebase/scripts.pory"
	walk_left
# 287 "data/maps/daycarebase/scripts.pory"
	walk_left
# 287 "data/maps/daycarebase/scripts.pory"
	walk_left
	step_end

DaycareIntro_Text_0:
# 8 "data/maps/daycarebase/scripts.pory"
	.string "Daycare Man$"

DaycareIntro_Text_1:
# 9 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pDespite what trainers may see from\nRoute 117, the Daycare is a vast\larea filled with biomes for nearly\levery type of Pokémon!\pExplore the Daycare and interact\nwith many of the Pokémon we are\lraising.\pYou never know what friends you\nwill make along the way!\pNow, I do expect you to be holding\nan Egg at some point... Every Ditto\lI've raised has produced one.\pNow you two, run along and do what\nyou need to do to get that Egg!\pWhen you're holding an Egg,\ncome back and talk to me and\lwe can get it to your trainer.$"

DaycareIntro_Text_2:
# 22 "data/maps/daycarebase/scripts.pory"
	.string "Vaporeon$"

DaycareIntro_Text_3:
# 23 "data/maps/daycarebase/scripts.pory"
	.string "I don't care what the Daycare Man\nsays, I'm NOT into you.\pJust because Brendan put us in here\ntogether, doesn't mean I have to\llike you.\pYou'll just have to find your Egg\nsome other way.$"

ShrinkToPikachuCave_Text_0:
# 45 "data/maps/daycarebase/scripts.pory"
	.string "There is a tiny hole that you can\nsqueeze through.\pWould you like to squeeze through it?$"

ShrinkToPikachuCave_Text_1:
# 59 "data/maps/daycarebase/scripts.pory"
	.string "There is a tiny hole.\pA small Pokémon may be able to\nsqueeze through it.$"

MimikyuDialog_Text_0:
# 96 "data/maps/daycarebase/scripts.pory"
	.string "Pikachu$"

MimikyuDialog_Text_1:
# 97 "data/maps/daycarebase/scripts.pory"
	.string "Hey!\pI'm just a normal Pikachu in my usual\nspot!$"

MimikyuDialog_Text_2:
# 98 "data/maps/daycarebase/scripts.pory"
	.string "Mimikyu$"

MimikyuDialog_Text_3:
# 99 "data/maps/daycarebase/scripts.pory"
	.string "Oh...\nYou caught me.\pI wish I could disguise myself as\nwell as you can...\pMaybe then people would like me more...$"

KecleonDialog_Text_0:
# 118 "data/maps/daycarebase/scripts.pory"
	.string "Kecleon$"

KecleonDialog_Text_1:
# 119 "data/maps/daycarebase/scripts.pory"
	.string "Where do eggs come from?\pMy trainer left me here a long time\nago and I've yet to find one.\pDo you know?\pI've always heard of Dittos\nholding onto eggs...$"

KecleonDialog_Text_2:
# 127 "data/maps/daycarebase/scripts.pory"
	.string "Where do eggs come from?\pMy trainer left me here a long time\nago and I've yet to find one.$"

AzumarillDialog_Text_0:
# 140 "data/maps/daycarebase/scripts.pory"
	.string "Azumarill$"

AzumarillDialog_Text_1:
# 141 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pYou'll fit in well here.$"

AzumarillDialog_Text_2:
# 149 "data/maps/daycarebase/scripts.pory"
	.string "Oh!\nThank goodness you aren't a Ditto...\pMy trainer keeps putting me in here\nwith Dittos hoping we'll breed.\pThey even gave me this Sea Incence\nto set the mood...\pThey're just not my type.$"

DaycareOldManDialog_Text_0:
# 166 "data/maps/daycarebase/scripts.pory"
	.string "Back from exploring the Daycare?\pAh!\nBut where is your egg!\pKeep doing whatever it is you\nDittos do and come back when\lyou have one!$"

DaycareOldManDialog_Text_1:
# 173 "data/maps/daycarebase/scripts.pory"
	.string "Why, who are you?\pI'm looking for a Ditto.\n$"

DaycareOldManDialog_Text_2:
# 182 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pDespite what trainers may see from\nRoute 117, the Daycare is a vast\larea filled with biomes for nearly\levery type of Pokémon!\pExplore the Daycare and interact\nwith many of the Pokémon we are\lraising.\pYou never know what friends you\nwill make along the way!\pNow, I do expect you to be holding\nan Egg at some point... Every Ditto\lI've raised has produced one.\pWhen you're holding an Egg,\ncome back and talk to me and\lwe can get it to your trainer.$"

DaycareOldManDialog_Text_3:
# 199 "data/maps/daycarebase/scripts.pory"
	.string "Why what do we have here?\nGoodness!\pYou're holding an Egg!\pWherever did you get this?\pIt's the darndest thing.\pYou Pokémon always seem to find\nthese eggs, but I can never figure\lout where they come from.\pWould you like to give me the Egg\nso that I may give it to your\lTrainer?$"

DaycareOldManDialog_Text_4:
# 205 "data/maps/daycarebase/scripts.pory"
	.string "Ditto handed over the Egg.\n$"

DaycareOldManDialog_Text_5:
# 209 "data/maps/daycarebase/scripts.pory"
	.string "Thank your for the Egg!\pAs a reward, take this experience!\n$"

DaycareOldManDialog_Text_6:
# 219 "data/maps/daycarebase/scripts.pory"
	.string "Ditto grew to level 26.\n$"

DaycareOldManDialog_Text_7:
# 223 "data/maps/daycarebase/scripts.pory"
	.string "With this Egg, I can now fulfill\nmy duties.$"

DaycareOldManDialog_Text_8:
# 248 "data/maps/daycarebase/scripts.pory"
	.string "Ah, it's you!\pWe were raising your Pokémon\nand my goodness, were we surprised!\pYour Pokémon had an Egg!\pWe don't know how it got there,\nbut your Pokémon had it.\pYou do want it, yes?\n$"

DaycareOldManDialog_Text_9:
# 257 "data/maps/daycarebase/scripts.pory"
	.string "The Daycare Man ripped the Egg\nfrom Ditto's clutches.$"

VaporeonDialog_Text_0:
# 316 "data/maps/daycarebase/scripts.pory"
	.string "Ew!\pGet away from me.\pI know it's you Ditto.\pGoodness,\nwhy is everyone so into me?$"

LaprasDialog_Text_0:
# 326 "data/maps/daycarebase/scripts.pory"
	.string "Lapras$"

LaprasDialog_Text_1:
# 327 "data/maps/daycarebase/scripts.pory"
	.string "I love the Daycare!\pIt's so peaceful and quiet here.\pI can just float around all day\nand relax.\pThose waterfalls are pretty\nvicious, I won't go near them.\pI've heard that Dragonair can\neasily scale even the largest\lof waterfalls!$"

LinooneDialog_Text_0:
# 338 "data/maps/daycarebase/scripts.pory"
	.string "Linoone$"

LinooneDialog_Text_1:
# 339 "data/maps/daycarebase/scripts.pory"
	.string "The Daycare is huge!\pIt's a bit scary to expore,\nso I stay up here.\pRiolu is way more brave than I\nam and has explored the entirety\lof the Daycare.\pYou should talk with Riolu if\nyou get lost!\pI'm sure they can help!\n$"

LinooneDialog_Text_2:
# 349 "data/maps/daycarebase/scripts.pory"
	.string "Those Dittos really freak me out.\pThey could be any one of use right\nnow...\pEven you!... or me!\n$"

BulbsaurDialog_Text_0:
# 359 "data/maps/daycarebase/scripts.pory"
	.string "Bulbasaur$"

BulbsaurDialog_Text_1:
# 360 "data/maps/daycarebase/scripts.pory"
	.string "You want to know where Eggs\ncome from?\pI heard that a Pokémon needs\nto go on a great adventure to\lmeet a shapeshifting Pokémon.\pIf you can best them, they will\ngive you an egg!\pAt least, that's what Venusaur\ntold me...$"

CombeeDialog_Text_0:
# 369 "data/maps/daycarebase/scripts.pory"
	.string "Combee$"

CombeeDialog_Text_1:
# 370 "data/maps/daycarebase/scripts.pory"
	.string "I've been in this Daycare\nfor ages!\pI've flown all around and\npollenated so many flowers\lbut I still haven't gained a\lsingle level.\pI'm beginning to believe gaining\nexperience here is nothing more\lthan a big ole myth!$"

Porygon2Dialog_Text_0:
# 379 "data/maps/daycarebase/scripts.pory"
	.string "Porygon2$"

Porygon2Dialog_Text_1:
# 380 "data/maps/daycarebase/scripts.pory"
	.string "Another Ditto...\pI'm actually a Ditto too,\nI just prefer this look.\pThe Daycare population must be at\nleast 75 percent Dittos!\pMost Dittos will take on different\nforms.\pYou won't be able to transform\ninto a form that another Ditto has\ltaken on though.$"

ScytherDialog_Text_0:
# 389 "data/maps/daycarebase/scripts.pory"
	.string "Scyther$"

ScytherDialog_Text_1:
# 390 "data/maps/daycarebase/scripts.pory"
	.string "One in every fifty Dittos that I\nsee here are blue.\pMust be all those shiny hunters\ntrying to capitalize on Gen 2\lmechanics.\pWhen will they learn that this is\nGen3...$"

RioluDialog_Text_0:
# 403 "data/maps/daycarebase/scripts.pory"
	.string "Riolu$"

RioluDialog_Text_1:
# 404 "data/maps/daycarebase/scripts.pory"
	.string "Back with a Lucky Egg?\n$"

RioluDialog_Text_2:
# 409 "data/maps/daycarebase/scripts.pory"
	.string "Great!\pI can tell about the habitat and\nability of a Pokémon in the Daycare.\pWould you like to exchange a\nLucky Egg?$"

RioluDialog_Text_3:
# 413 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine$"

RioluDialog_Text_4:
# 413 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou$"

RioluDialog_Text_5:
# 413 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly$"

RioluDialog_Text_6:
# 413 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair$"

RioluDialog_Text_7:
# 413 "data/maps/daycarebase/scripts.pory"
	.string "Marill$"

RioluDialog_Text_8:
# 413 "data/maps/daycarebase/scripts.pory"
	.string "Machamp$"

RioluDialog_Text_9:
# 413 "data/maps/daycarebase/scripts.pory"
	.string "Noivern$"

RioluDialog_Text_10:
# 413 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn$"

RioluDialog_Text_11:
# 413 "data/maps/daycarebase/scripts.pory"
	.string "Lurantis$"

RioluDialog_Text_12:
# 413 "data/maps/daycarebase/scripts.pory"
	.string "Weavile$"

RioluDialog_Text_13:
# 416 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine can be found deep in the\nVolcano.\pIt can run really fast and scale\nhills that would normally be to\lslippery to climb!$"

RioluDialog_Text_14:
# 423 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou can be found in a cave\non the water in the desert.\pIt can dive deep underwater.\n$"

RioluDialog_Text_15:
# 430 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly can be found in the\nDaycare's flowers to the west.\pIt's a tiny Pokémon that can\nfit through small openings.$"

RioluDialog_Text_16:
# 437 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair can be found at the lake.\pIt can be a bit cryptic so it\nmay be difficult to reach.\pIt can scale large waterfalls\nwith ease.$"

RioluDialog_Text_17:
# 444 "data/maps/daycarebase/scripts.pory"
	.string "Marill can be found at the lake,\nusually by the shore.\pIt's a bit shy so it may be hiding.\pIt can float in any body of water.\n$"

RioluDialog_Text_18:
# 451 "data/maps/daycarebase/scripts.pory"
	.string "Machamp likes to train deep in\nthe mountains.\pIt is a very tough and solitary\nPokémon.\pIts strength can move large\nboulders.$"

RioluDialog_Text_19:
# 458 "data/maps/daycarebase/scripts.pory"
	.string "Noivern hangs out in a dark\ncave above the Daycare Falls.\pIt's quite a powerful Pokémon,\nso be prepared for a fight.\pIt can soar through the air,\nreaching places unreachable by\lnon_flying types.$"

RioluDialog_Text_20:
# 465 "data/maps/daycarebase/scripts.pory"
	.string "Pikachu is standing on that cliff\nright over there.\pIts electricity can light up even\nthe darkest of caves.$"

RioluDialog_Text_21:
# 472 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn lives in the desert.\pIt's quite a friendly Pokémon,\nbut don't upset it!\pIt is strong enough to smash\nsolid rocks!$"

RioluDialog_Text_22:
# 479 "data/maps/daycarebase/scripts.pory"
	.string "Lurantis has been spending time\nacross the water in the mountains.\pIts sharp limbs can cut through\nsmall trees.$"

RioluDialog_Text_23:
# 486 "data/maps/daycarebase/scripts.pory"
	.string "Weavile is quite the ninja.\pIt spends time in the tall trees\nin the jungle.\pIt demands a fierce challenger\nto battle it.\pIts agility allows it to cross\neven the smallest of walkways.$"

RioluDialog_Text_24:
# 494 "data/maps/daycarebase/scripts.pory"
	.string "Oh.\pWhat else are you gonna do\nwith that egg?$"

RioluDialog_Text_25:
# 503 "data/maps/daycarebase/scripts.pory"
	.string "No?\nCome back when you do!$"

RioluDialog_Text_26:
# 513 "data/maps/daycarebase/scripts.pory"
	.string "Hiya!\pI'm Riolu!\pI've visited every biome the\nDaycare has to offer.\lI know it like the back of my paw!\pIf you need guidance on where a\ncertain Pokémon might be,\lI'm your Pokémon!\pAlthough I won't do it for free...\pBring me Lucky Eggs, and I'll tell\nyou what I know.$"

BattleVsPikachu_Text_0:
# 529 "data/maps/daycarebase/scripts.pory"
	.string "You really lit me up.\pBest of luck on your journey!\n$"

BattleVsPikachu_Text_1:
# 541 "data/maps/daycarebase/scripts.pory"
	.string "A Ditto!\pYou must be on your quest to obtain\nyour egg.\pDefeat me in battle and I'll allow\nyou to transform into me!$"

BattleVsPikachu_Text_2:
# 552 "data/maps/daycarebase/scripts.pory"
	.string "You have gained the ability to\ntransform into Pikachu!$"

ChanseyHeal_Text_0:
# 565 "data/maps/daycarebase/scripts.pory"
	.string "Chansey$"

ChanseyHeal_Text_1:
# 566 "data/maps/daycarebase/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.\pWould you like to heal?$"

ChanseyHeal_Text_2:
# 579 "data/maps/daycarebase/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyHeal_Text_3:
# 586 "data/maps/daycarebase/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyHeal_Text_4:
# 594 "data/maps/daycarebase/scripts.pory"
	.string "Oh, okay then.$"

DaycareBase_Ditto_Text_0:
# 609 "data/maps/daycarebase/scripts.pory"
	.string "Ditto$"

DaycareBase_Ditto_Text_1:
# 610 "data/maps/daycarebase/scripts.pory"
	.string "Would you like to change out your\ntransformation options?$"

DaycareBase_Ditto_Text_2:
# 620 "data/maps/daycarebase/scripts.pory"
	.string "Come back anytime!$"

DaycareBase_Ditto_Text_3:
# 628 "data/maps/daycarebase/scripts.pory"
	.string "Ditto!\pYou can only remember four\ntransformations at a time.\pWe Dittos can act as a way to\nswap out which transformations\lyou have active at anytime!\pYou'll find us scattered around\nthe Daycare.\pNow...\n$"

DaycareBase_Ditto_Text_4:
# 655 "data/maps/daycarebase/scripts.pory"
	.string "Hello there fellow Ditto!\pDaycare Man asked you to get an Egg\nfor him, did he?\pWell, you're about to learn the\nthe secret of how we Dittos are\lalways found holding Eggs.\pIt'll be quite the adventure!\pDon't forget, you are a Ditto,\nso you can transform into any\lPokémon you defeat in battle!\pThis does only apply to Pokémon\nwho are not already using\lTransform...\pPress the {SELECT_BUTTON} button to\nopen your transformation menu.\pIf you open your Transformation\nParty, you'll see which Pokémon\lyou can transform into!$"
