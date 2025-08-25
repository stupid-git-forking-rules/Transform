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
# 23 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 24 "data/maps/daycarebase/scripts.pory"
	applymovement VaporeonIntro, DaycareIntro_Movement_4
# 25 "data/maps/daycarebase/scripts.pory"
	playse SE_FLEE
# 26 "data/maps/daycarebase/scripts.pory"
	waitmovement VaporeonIntro
# 27 "data/maps/daycarebase/scripts.pory"
	waitse
# 28 "data/maps/daycarebase/scripts.pory"
	removeobject VaporeonIntro
# 29 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_HIDE_VAPOREON_INTRO
# 30 "data/maps/daycarebase/scripts.pory"
	setvar VAR_INTRO_PLAYED, 1
# 31 "data/maps/daycarebase/scripts.pory"
	release
	end


Daycare_OnTransition::
# 36 "data/maps/daycarebase/scripts.pory"
	setrespawn HEAL_LOCATION_DAYCAREBASE
	end


ShrinkToPikachuCave::
# 41 "data/maps/daycarebase/scripts.pory"
	lockall
# 42 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinkToPikachuCave_1
# 58 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_1, MSGBOX_DEFAULT
# 59 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 60 "data/maps/daycarebase/scripts.pory"
	releaseall
	end

ShrinkToPikachuCave_1:
# 44 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_0, MSGBOX_YESNO
# 45 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinkToPikachuCave_4
# 51 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 52 "data/maps/daycarebase/scripts.pory"
	releaseall
	end

ShrinkToPikachuCave_4:
# 47 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_PIKACHU_SHRINK_CAVE, 0
	return


ShrinktoMausholdCave::
# 66 "data/maps/daycarebase/scripts.pory"
	lockall
# 67 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinktoMausholdCave_1
# 83 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_1, MSGBOX_DEFAULT
# 84 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 85 "data/maps/daycarebase/scripts.pory"
	releaseall
	end

ShrinktoMausholdCave_1:
# 69 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_0, MSGBOX_YESNO
# 70 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinktoMausholdCave_4
# 76 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 77 "data/maps/daycarebase/scripts.pory"
	releaseall
	end

ShrinktoMausholdCave_4:
# 72 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_MAUSHOLD_SHRINK, 0
	return


MimikyuDialog::
# 91 "data/maps/daycarebase/scripts.pory"
	lock
# 92 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 93 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq MimikyuDialog_1
# 105 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 106 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_DEFAULT
# 107 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 108 "data/maps/daycarebase/scripts.pory"
	release
	end

MimikyuDialog_1:
# 95 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 96 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_DEFAULT
# 97 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_2
# 98 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_3, MSGBOX_DEFAULT
# 99 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 100 "data/maps/daycarebase/scripts.pory"
	release
	end


KecleonDialog::
# 113 "data/maps/daycarebase/scripts.pory"
	lock
# 114 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 115 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq KecleonDialog_1
# 125 "data/maps/daycarebase/scripts.pory"
	speakername KecleonDialog_Text_0
# 126 "data/maps/daycarebase/scripts.pory"
	msgbox KecleonDialog_Text_2, MSGBOX_DEFAULT
# 127 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 128 "data/maps/daycarebase/scripts.pory"
	release
	end

KecleonDialog_1:
# 117 "data/maps/daycarebase/scripts.pory"
	speakername KecleonDialog_Text_0
# 118 "data/maps/daycarebase/scripts.pory"
	msgbox KecleonDialog_Text_1, MSGBOX_DEFAULT
# 119 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 120 "data/maps/daycarebase/scripts.pory"
	release
	end


AzumarillDialog::
# 135 "data/maps/daycarebase/scripts.pory"
	lock
# 136 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 137 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq AzumarillDialog_1
# 147 "data/maps/daycarebase/scripts.pory"
	speakername AzumarillDialog_Text_0
# 148 "data/maps/daycarebase/scripts.pory"
	msgbox AzumarillDialog_Text_2, MSGBOX_DEFAULT
# 149 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 150 "data/maps/daycarebase/scripts.pory"
	release
	end

AzumarillDialog_1:
# 139 "data/maps/daycarebase/scripts.pory"
	speakername AzumarillDialog_Text_0
# 140 "data/maps/daycarebase/scripts.pory"
	msgbox AzumarillDialog_Text_1, MSGBOX_DEFAULT
# 141 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 142 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareOldManDialog::
# 156 "data/maps/daycarebase/scripts.pory"
	lock
# 157 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 158 "data/maps/daycarebase/scripts.pory"
	goto_if_unset FLAG_BEAT_MEW, DaycareOldManDialog_1
# 190 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq DaycareOldManDialog_7
# 314 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 315 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_1, MSGBOX_DEFAULT
# 316 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 317 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_1:
# 160 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_OLDMAN_INTRO, DaycareOldManDialog_4
# 180 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 181 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_2, MSGBOX_DEFAULT
# 182 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 183 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_OLDMAN_INTRO
# 184 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_4:
# 162 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq DaycareOldManDialog_10
# 171 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 172 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_1, MSGBOX_DEFAULT
# 173 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 174 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_7:
# 192 "data/maps/daycarebase/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
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
# 258 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 259 "data/maps/daycarebase/scripts.pory"
	playse SE_M_SCRATCH
# 260 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_9, MSGBOX_DEFAULT
# 261 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 262 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 263 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 264 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_5, MSGBOX_DEFAULT
# 265 "data/maps/daycarebase/scripts.pory"
	removeobject BrendanBiking
# 266 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_HIDE_BRENDAN_BIKE
# 267 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 268 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 269 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP
# 270 "data/maps/daycarebase/scripts.pory"
	waitse
# 271 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP_MAX
# 272 "data/maps/daycarebase/scripts.pory"
	waitse
# 273 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 274 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_6, MSGBOX_DEFAULT
# 275 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 276 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 277 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 278 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_7, MSGBOX_AUTOCLOSE
# 279 "data/maps/daycarebase/scripts.pory"
	special SpawnCameraObject
# 280 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_1
# 281 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 282 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_2
# 283 "data/maps/daycarebase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DaycareOldManDialog_Movement_2
# 284 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 285 "data/maps/daycarebase/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 286 "data/maps/daycarebase/scripts.pory"
	delay 60
# 287 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 24
# 288 "data/maps/daycarebase/scripts.pory"
	delay 60
# 289 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SHOW_BRENDAN_OUTRO
# 290 "data/maps/daycarebase/scripts.pory"
	addobject Brendan
# 291 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK, 24
# 292 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_3
# 293 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 294 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 295 "data/maps/daycarebase/scripts.pory"
	waitse
# 296 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, Common_Movement_ExclamationMark
# 297 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 298 "data/maps/daycarebase/scripts.pory"
	delay 30
# 299 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_4
# 300 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 301 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_5
# 302 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 303 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 304 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_8, MSGBOX_DEFAULT
# 305 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 60
# 306 "data/maps/daycarebase/scripts.pory"
	delay 60
# 307 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_BEAT_MEW
# 308 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SHOW_BRENDAN_OUTRO
# 309 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_HIDE_BRENDAN_BIKE
# 310 "data/maps/daycarebase/scripts.pory"
	special GameClear
	return

DaycareOldManDialog_10:
# 164 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 165 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_0, MSGBOX_DEFAULT
# 166 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 167 "data/maps/daycarebase/scripts.pory"
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
	delay 30
# 244 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_4
# 245 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 246 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_5
# 247 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 248 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 249 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_8, MSGBOX_DEFAULT
# 250 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 60
# 251 "data/maps/daycarebase/scripts.pory"
	delay 60
# 252 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_BEAT_MEW
# 253 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SHOW_BRENDAN_OUTRO
# 254 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_HIDE_BRENDAN_BIKE
# 255 "data/maps/daycarebase/scripts.pory"
	special GameClear
	return


VaporeonDialog::
# 328 "data/maps/daycarebase/scripts.pory"
	lock
# 329 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 330 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_2
# 331 "data/maps/daycarebase/scripts.pory"
	msgbox VaporeonDialog_Text_0, MSGBOX_DEFAULT
# 331 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 332 "data/maps/daycarebase/scripts.pory"
	release
	end


LaprasDialog::
# 338 "data/maps/daycarebase/scripts.pory"
	lock
# 339 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 340 "data/maps/daycarebase/scripts.pory"
	speakername LaprasDialog_Text_0
# 341 "data/maps/daycarebase/scripts.pory"
	msgbox LaprasDialog_Text_1
# 342 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 343 "data/maps/daycarebase/scripts.pory"
	release
	end


LinooneDialog::
# 348 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq LinooneDialog_1
# 360 "data/maps/daycarebase/scripts.pory"
	lock
# 361 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 362 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 363 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_2
# 364 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 365 "data/maps/daycarebase/scripts.pory"
	release
	end

LinooneDialog_1:
# 350 "data/maps/daycarebase/scripts.pory"
	lock
# 351 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 352 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 353 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_1
# 354 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 355 "data/maps/daycarebase/scripts.pory"
	release
	end


BulbsaurDialog::
# 371 "data/maps/daycarebase/scripts.pory"
	lock
# 372 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 373 "data/maps/daycarebase/scripts.pory"
	speakername BulbsaurDialog_Text_0
# 374 "data/maps/daycarebase/scripts.pory"
	msgbox BulbsaurDialog_Text_1, MSGBOX_DEFAULT
# 375 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 376 "data/maps/daycarebase/scripts.pory"
	release
	end


CombeeDialog::
# 381 "data/maps/daycarebase/scripts.pory"
	lock
# 382 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 383 "data/maps/daycarebase/scripts.pory"
	speakername CombeeDialog_Text_0
# 384 "data/maps/daycarebase/scripts.pory"
	msgbox CombeeDialog_Text_1, MSGBOX_DEFAULT
# 385 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 386 "data/maps/daycarebase/scripts.pory"
	release
	end


Porygon2Dialog::
# 391 "data/maps/daycarebase/scripts.pory"
	lock
# 392 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 393 "data/maps/daycarebase/scripts.pory"
	speakername Porygon2Dialog_Text_0
# 394 "data/maps/daycarebase/scripts.pory"
	msgbox Porygon2Dialog_Text_1, MSGBOX_DEFAULT
# 395 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 396 "data/maps/daycarebase/scripts.pory"
	release
	end


ScytherDialog::
# 401 "data/maps/daycarebase/scripts.pory"
	lock
# 402 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 403 "data/maps/daycarebase/scripts.pory"
	speakername ScytherDialog_Text_0
# 404 "data/maps/daycarebase/scripts.pory"
	msgbox ScytherDialog_Text_1, MSGBOX_DEFAULT
# 405 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 406 "data/maps/daycarebase/scripts.pory"
	release
	end


RioluDialog::
# 411 "data/maps/daycarebase/scripts.pory"
	lock
# 412 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 413 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_RIOLU_INTRO, RioluDialog_1
# 526 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 527 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_26
# 528 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_RIOLU_INTRO
# 529 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 530 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_1:
# 415 "data/maps/daycarebase/scripts.pory"
	lock
# 416 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 417 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 418 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_1
# 419 "data/maps/daycarebase/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 420 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RioluDialog_4
# 516 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 517 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_25, MSGBOX_AUTOCLOSE
# 518 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 519 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_4:
# 423 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_2, MSGBOX_YESNO
# 424 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RioluDialog_7
# 508 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_24
# 509 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 510 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_7:
# 426 "data/maps/daycarebase/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 427 "data/maps/daycarebase/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, RioluDialog_Text_3, RioluDialog_Text_4, RioluDialog_Text_5, RioluDialog_Text_6, RioluDialog_Text_7, RioluDialog_Text_8, RioluDialog_Text_9, MimikyuDialog_Text_0, RioluDialog_Text_10, RioluDialog_Text_11, RioluDialog_Text_12
# 428 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RioluDialog_10
# 435 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RioluDialog_11
# 442 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RioluDialog_12
# 449 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RioluDialog_13
# 456 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq RioluDialog_14
# 463 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq RioluDialog_15
# 470 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq RioluDialog_16
# 477 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq RioluDialog_17
# 484 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq RioluDialog_18
# 491 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq RioluDialog_19
# 498 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq RioluDialog_20
	return

RioluDialog_10:
# 430 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_13, MSGBOX_DEFAULT
# 431 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 432 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_11:
# 437 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_14, MSGBOX_DEFAULT
# 438 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 439 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_12:
# 444 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_15, MSGBOX_DEFAULT
# 445 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 446 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_13:
# 451 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_16, MSGBOX_DEFAULT
# 452 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 453 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_14:
# 458 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_17, MSGBOX_DEFAULT
# 459 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 460 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_15:
# 465 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_18, MSGBOX_DEFAULT
# 466 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 467 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_16:
# 472 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_19, MSGBOX_DEFAULT
# 473 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 474 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_17:
# 479 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_20, MSGBOX_DEFAULT
# 480 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 481 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_18:
# 486 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_21, MSGBOX_DEFAULT
# 487 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 488 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_19:
# 493 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_22, MSGBOX_DEFAULT
# 494 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 495 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_20:
# 500 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_23, MSGBOX_DEFAULT
# 501 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 502 "data/maps/daycarebase/scripts.pory"
	release
	end


BattleVsPikachu::
# 537 "data/maps/daycarebase/scripts.pory"
	lock
# 539 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_TRANS_PIKACHU, BattleVsPikachu_2
# 549 "data/maps/daycarebase/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 550 "data/maps/daycarebase/scripts.pory"
	applymovement Pikachu, DaycareOldManDialog_Movement_0
# 551 "data/maps/daycarebase/scripts.pory"
	waitmovement Pikachu
# 552 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 553 "data/maps/daycarebase/scripts.pory"
	applymovement Pikachu, Common_Movement_ExclamationMark
# 554 "data/maps/daycarebase/scripts.pory"
	waitmovement Pikachu
# 555 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 556 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_1, MSGBOX_AUTOCLOSE
# 557 "data/maps/daycarebase/scripts.pory"
	setwildbattle SPECIES_PIKACHU, 25
# 558 "data/maps/daycarebase/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 559 "data/maps/daycarebase/scripts.pory"
	dowildbattle
# 560 "data/maps/daycarebase/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 561 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsPikachu_4
	return

BattleVsPikachu_2:
# 541 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 542 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 543 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_0, MSGBOX_DEFAULT
# 544 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 545 "data/maps/daycarebase/scripts.pory"
	release
	end

BattleVsPikachu_4:
# 563 "data/maps/daycarebase/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 564 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 565 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_TRANS_PIKACHU
# 566 "data/maps/daycarebase/scripts.pory"
	dittotransform SPECIES_PIKACHU
# 567 "data/maps/daycarebase/scripts.pory"
	playse MUS_LEVEL_UP
# 568 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_2, MSGBOX_DEFAULT
# 569 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 570 "data/maps/daycarebase/scripts.pory"
	dittotransform VAR_TEMP_0
# 571 "data/maps/daycarebase/scripts.pory"
	givemon SPECIES_PIKACHU, 25, move1 = MOVE_NUZZLE, move2 = MOVE_IRON_TAIL, move3 = MOVE_SPARK, move4 = MOVE_FLASH
# 572 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 573 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_3, MSGBOX_DEFAULT
# 574 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 575 "data/maps/daycarebase/scripts.pory"
	fadenewbgm MUS_PMD_HEARTWARMING
# 576 "data/maps/daycarebase/scripts.pory"
	release
	end


ChanseyHeal::
# 582 "data/maps/daycarebase/scripts.pory"
	lock
# 583 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 584 "data/maps/daycarebase/scripts.pory"
	speakername ChanseyHeal_Text_0
# 585 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_1, MSGBOX_YESNO
# 586 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 587 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyHeal_1
# 613 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_4, MSGBOX_AUTOCLOSE
# 614 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 615 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_1:
# 589 "data/maps/daycarebase/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 590 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyHeal_4
# 605 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_3, MSGBOX_AUTOCLOSE
# 606 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 607 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_4:
# 592 "data/maps/daycarebase/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 593 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 594 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_HEAL
# 595 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 596 "data/maps/daycarebase/scripts.pory"
	special HealPlayerParty
# 597 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 598 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_2, MSGBOX_AUTOCLOSE
# 599 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 600 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_Ditto::
# 622 "data/maps/daycarebase/scripts.pory"
	lock
# 623 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 624 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_DITTO_INTRO, DaycareBase_Ditto_1
# 677 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_0
# 678 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_4, MSGBOX_DEFAULT
# 678 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 679 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_DITTO_INTRO
# 680 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 681 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_1:
# 626 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_XFORMS_TALKED_TO_DITTO, DaycareBase_Ditto_4
# 650 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_0
# 651 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_3, MSGBOX_DEFAULT
# 651 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 652 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_XFORMS_TALKED_TO_DITTO
# 653 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_1, MSGBOX_YESNO
# 654 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareBase_Ditto_10
# 665 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_2, MSGBOX_AUTOCLOSE
# 666 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 667 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 668 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 669 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_4:
# 628 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_0
# 629 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_1, MSGBOX_YESNO
# 630 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareBase_Ditto_7
# 641 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_2, MSGBOX_AUTOCLOSE
# 642 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 643 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 644 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 645 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_7:
# 632 "data/maps/daycarebase/scripts.pory"
	special OpenPCMoveMons
# 633 "data/maps/daycarebase/scripts.pory"
	waitstate
# 634 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 635 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 636 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_10:
# 656 "data/maps/daycarebase/scripts.pory"
	special OpenPCMoveMons
# 657 "data/maps/daycarebase/scripts.pory"
	waitstate
# 658 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 659 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 660 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_FindLuckyEgg::
# 689 "data/maps/daycarebase/scripts.pory"
	lock
# 690 "data/maps/daycarebase/scripts.pory"
	finditem ITEM_LUCKY_EGG
# 691 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 692 "data/maps/daycarebase/scripts.pory"
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

# 24 "data/maps/daycarebase/scripts.pory"
DaycareIntro_Movement_4:
# 24 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 24 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 24 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 24 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 24 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 24 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 24 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 24 "data/maps/daycarebase/scripts.pory"
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

# 244 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_4:
# 244 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 244 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 244 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 244 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 244 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
	step_end

# 246 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_5:
# 246 "data/maps/daycarebase/scripts.pory"
	walk_fast_up
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
	.string "I don't care what the Daycare Man\nsays, I'm not interested going on\lan Egg hunt.\pJust because Brendan put us in here\ntogether doesn't mean I have to\lhelp you.\pI'm going for a swim.\pYou'll just have to find that Egg\non your own.$"

ShrinkToPikachuCave_Text_0:
# 44 "data/maps/daycarebase/scripts.pory"
	.string "There is a tiny hole that you can\nsqueeze through.\pWould you like to squeeze through it?$"

ShrinkToPikachuCave_Text_1:
# 58 "data/maps/daycarebase/scripts.pory"
	.string "There is a tiny hole.\pA small Pokémon may be able to\nsqueeze through it.$"

MimikyuDialog_Text_0:
# 95 "data/maps/daycarebase/scripts.pory"
	.string "Pikachu$"

MimikyuDialog_Text_1:
# 96 "data/maps/daycarebase/scripts.pory"
	.string "Hey!\pI'm just a normal Pikachu in my usual\nspot!$"

MimikyuDialog_Text_2:
# 97 "data/maps/daycarebase/scripts.pory"
	.string "Mimikyu$"

MimikyuDialog_Text_3:
# 98 "data/maps/daycarebase/scripts.pory"
	.string "Oh...\nYou caught me.\pI wish I could disguise myself as\nwell as you can...\pMaybe then people would like me more...$"

KecleonDialog_Text_0:
# 117 "data/maps/daycarebase/scripts.pory"
	.string "Kecleon$"

KecleonDialog_Text_1:
# 118 "data/maps/daycarebase/scripts.pory"
	.string "Where do Eggs come from?\pMy trainer left me here a long time\nago and I've yet to find one.\pDo you know?\pI've always heard of Dittos\nholding onto Eggs...$"

KecleonDialog_Text_2:
# 126 "data/maps/daycarebase/scripts.pory"
	.string "Where do Eggs come from?\pMy trainer left me here a long time\nago and I've yet to find one.$"

AzumarillDialog_Text_0:
# 139 "data/maps/daycarebase/scripts.pory"
	.string "Azumarill$"

AzumarillDialog_Text_1:
# 140 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pYou'll fit in well here.$"

AzumarillDialog_Text_2:
# 148 "data/maps/daycarebase/scripts.pory"
	.string "Oh!\nThank goodness you aren't a Ditto...\pMy trainer keeps putting me in here\nwith Dittos hoping we'll find an\lEgg.\pThey gave me this Sea Incence,\nbut I'm not sure how that would\lhelp us on our hunt...$"

DaycareOldManDialog_Text_0:
# 165 "data/maps/daycarebase/scripts.pory"
	.string "Back from exploring the Daycare?\pAh!\nBut where is your Egg!\pKeep doing whatever it is you\nDittos do and come back when\lyou have one!$"

DaycareOldManDialog_Text_1:
# 172 "data/maps/daycarebase/scripts.pory"
	.string "Why, who are you?\pI'm looking for a Ditto.\n$"

DaycareOldManDialog_Text_2:
# 181 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pDespite what trainers may see from\nRoute 117, the Daycare is a vast\larea filled with biomes for nearly\levery type of Pokémon!\pExplore the Daycare and interact\nwith many of the Pokémon we are\lraising.\pYou never know what friends you\nwill make along the way!\pNow, I do expect you to be holding\nan Egg at some point... Every Ditto\lI've raised has produced one.\pWhen you're holding an Egg,\ncome back and talk to me and\lwe can get it to your trainer.$"

DaycareOldManDialog_Text_3:
# 199 "data/maps/daycarebase/scripts.pory"
	.string "Why what do we have here?\nGoodness!\pYou're holding an Egg!\pWherever did you get this?\pIt's the darndest thing.\pYou Pokémon always seem to find\nthese Eggs, but I can never figure\lout where they come from.\pWould you like to give me the Egg\nso that I may give it to your\lTrainer?$"

DaycareOldManDialog_Text_4:
# 205 "data/maps/daycarebase/scripts.pory"
	.string "Ditto handed over the Egg.\n$"

DaycareOldManDialog_Text_5:
# 209 "data/maps/daycarebase/scripts.pory"
	.string "Thank your for the Egg!\pAs a reward, take this EXP!\n$"

DaycareOldManDialog_Text_6:
# 219 "data/maps/daycarebase/scripts.pory"
	.string "Ditto grew to level 26.\n$"

DaycareOldManDialog_Text_7:
# 223 "data/maps/daycarebase/scripts.pory"
	.string "With this Egg, I can now fulfill\nmy duties.$"

DaycareOldManDialog_Text_8:
# 249 "data/maps/daycarebase/scripts.pory"
	.string "Ah, it's you!\pWe were raising your Pokémon\nand my goodness, were we surprised!\pYour Pokémon had an Egg!\pWe don't know how it got there,\nbut your Pokémon had it.\pYou do want it, yes?\n$"

DaycareOldManDialog_Text_9:
# 260 "data/maps/daycarebase/scripts.pory"
	.string "The Daycare Man ripped the Egg\nfrom Ditto's clutches.$"

VaporeonDialog_Text_0:
# 331 "data/maps/daycarebase/scripts.pory"
	.string "Ugh!\pWhy does everyone keep asking me\nto help them search for Eggs?\pCan't you see I'm busy?\n$"

LaprasDialog_Text_0:
# 340 "data/maps/daycarebase/scripts.pory"
	.string "Lapras$"

LaprasDialog_Text_1:
# 341 "data/maps/daycarebase/scripts.pory"
	.string "I love the Daycare!\pIt's so peaceful and quiet here.\pI can just float around all day\nand relax.\pThose waterfalls are pretty\nvicious, I won't go near them.\pI've heard that Dragonair can\neasily scale even the largest\lof waterfalls!$"

LinooneDialog_Text_0:
# 352 "data/maps/daycarebase/scripts.pory"
	.string "Linoone$"

LinooneDialog_Text_1:
# 353 "data/maps/daycarebase/scripts.pory"
	.string "The Daycare is huge!\pIt's a bit scary to expore,\nso I stay up here.\pRiolu is way more brave than I\nam and has explored the entirety\lof the Daycare.\pYou should talk with Riolu if\nyou get lost!\pI'm sure they can help!\n$"

LinooneDialog_Text_2:
# 363 "data/maps/daycarebase/scripts.pory"
	.string "Those Dittos really freak me out.\pThey could be any one of use right\nnow...\pEven you!... or me!\n$"

BulbsaurDialog_Text_0:
# 373 "data/maps/daycarebase/scripts.pory"
	.string "Bulbasaur$"

BulbsaurDialog_Text_1:
# 374 "data/maps/daycarebase/scripts.pory"
	.string "You want to know where Eggs\ncome from?\pI heard that a Pokémon needs\nto go on a great adventure to\lmeet a shapeshifting Pokémon.\pIf you can best them, they will\ngive you an egg!\pAt least, that's what Venusaur\ntold me...$"

CombeeDialog_Text_0:
# 383 "data/maps/daycarebase/scripts.pory"
	.string "Combee$"

CombeeDialog_Text_1:
# 384 "data/maps/daycarebase/scripts.pory"
	.string "I've been in this Daycare\nfor ages!\pI've flown all around and\npollenated so many flowers\lbut I still haven't gained a\lsingle level.\pI'm beginning to believe gaining\nEXP here is nothing more\lthan a big ole myth!$"

Porygon2Dialog_Text_0:
# 393 "data/maps/daycarebase/scripts.pory"
	.string "Porygon2$"

Porygon2Dialog_Text_1:
# 394 "data/maps/daycarebase/scripts.pory"
	.string "Another Ditto...\pI'm actually a Ditto too,\nI just prefer this look.\pThe Daycare population must be at\nleast 75 percent Dittos!\pMost Dittos will take on different\nforms.\pYou won't be able to transform\ninto a form that another Ditto has\ltaken on though.$"

ScytherDialog_Text_0:
# 403 "data/maps/daycarebase/scripts.pory"
	.string "Scyther$"

ScytherDialog_Text_1:
# 404 "data/maps/daycarebase/scripts.pory"
	.string "One in every fifty Dittos that I\nsee here are blue.\pMust be all those shiny hunters\ntrying to capitalize on Gen 2\lmechanics.\pWhen will they learn that this is\nGen3...$"

RioluDialog_Text_0:
# 417 "data/maps/daycarebase/scripts.pory"
	.string "Riolu$"

RioluDialog_Text_1:
# 418 "data/maps/daycarebase/scripts.pory"
	.string "Back with a Lucky Egg?\n$"

RioluDialog_Text_2:
# 423 "data/maps/daycarebase/scripts.pory"
	.string "Great!\pI can tell about the habitat and\nability of a Pokémon in the Daycare.\pWould you like to exchange a\nLucky Egg?$"

RioluDialog_Text_3:
# 427 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine$"

RioluDialog_Text_4:
# 427 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou$"

RioluDialog_Text_5:
# 427 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly$"

RioluDialog_Text_6:
# 427 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair$"

RioluDialog_Text_7:
# 427 "data/maps/daycarebase/scripts.pory"
	.string "Marill$"

RioluDialog_Text_8:
# 427 "data/maps/daycarebase/scripts.pory"
	.string "Machamp$"

RioluDialog_Text_9:
# 427 "data/maps/daycarebase/scripts.pory"
	.string "Noivern$"

RioluDialog_Text_10:
# 427 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn$"

RioluDialog_Text_11:
# 427 "data/maps/daycarebase/scripts.pory"
	.string "Lurantis$"

RioluDialog_Text_12:
# 427 "data/maps/daycarebase/scripts.pory"
	.string "Weavile$"

RioluDialog_Text_13:
# 430 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine can be found deep in the\nVolcano.\pIt can run really fast and scale\nhills that would normally be to\lslippery to climb!$"

RioluDialog_Text_14:
# 437 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou can be found in a cave\non the water in the desert.\pIt can dive deep underwater.\n$"

RioluDialog_Text_15:
# 444 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly can be found in the\nDaycare's flowers to the west.\pIt's a tiny Pokémon that can\nfit through small openings.$"

RioluDialog_Text_16:
# 451 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair can be found at the lake.\pIt can be a bit cryptic so it\nmay be difficult to reach.\pIt can scale large waterfalls\nwith ease.$"

RioluDialog_Text_17:
# 458 "data/maps/daycarebase/scripts.pory"
	.string "Marill can be found at the lake,\nusually by the shore.\pIt's a bit shy so it may be hiding.\pIt can float in any body of water.\n$"

RioluDialog_Text_18:
# 465 "data/maps/daycarebase/scripts.pory"
	.string "Machamp likes to train deep in\nthe mountains.\pIt is a very tough and solitary\nPokémon.\pIts strength can move large\nboulders.$"

RioluDialog_Text_19:
# 472 "data/maps/daycarebase/scripts.pory"
	.string "Noivern hangs out in a dark\ncave above the Daycare Falls.\pIt's quite a powerful Pokémon,\nso be prepared for a fight.\pIt can soar through the air,\nreaching places unreachable by\lnon_flying types.$"

RioluDialog_Text_20:
# 479 "data/maps/daycarebase/scripts.pory"
	.string "Pikachu is standing on that cliff\nright over there.\pIts electricity can light up even\nthe darkest of caves.$"

RioluDialog_Text_21:
# 486 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn lives in the desert.\pIt's quite a friendly Pokémon,\nbut don't upset it!\pIt is strong enough to smash\nsolid rocks!$"

RioluDialog_Text_22:
# 493 "data/maps/daycarebase/scripts.pory"
	.string "Lurantis has been spending time\nacross the water in the mountains.\pIts sharp limbs can cut through\nsmall trees.$"

RioluDialog_Text_23:
# 500 "data/maps/daycarebase/scripts.pory"
	.string "Weavile is quite the ninja.\pIt spends time in the tall trees\nin the jungle.\pIt demands a fierce challenger\nto battle it.\pIts agility allows it to cross\neven the smallest of walkways.$"

RioluDialog_Text_24:
# 508 "data/maps/daycarebase/scripts.pory"
	.string "Oh.\pWhat else are you gonna do\nwith that egg?$"

RioluDialog_Text_25:
# 517 "data/maps/daycarebase/scripts.pory"
	.string "No?\nCome back when you do!$"

RioluDialog_Text_26:
# 527 "data/maps/daycarebase/scripts.pory"
	.string "Hiya!\pI'm Riolu!\pI've visited every biome the\nDaycare has to offer.\lI know it like the back of my paw!\pIf you need guidance on where a\ncertain Pokémon might be,\lI'm your Pokémon!\pAlthough I won't do it for free...\pBring me Lucky Eggs, and I'll tell\nyou what I know.$"

BattleVsPikachu_Text_0:
# 543 "data/maps/daycarebase/scripts.pory"
	.string "You really lit me up.\pBest of luck on your journey!\n$"

BattleVsPikachu_Text_1:
# 556 "data/maps/daycarebase/scripts.pory"
	.string "A Ditto!\pYou must be on your quest to obtain\nyour egg.\pDefeat me in battle and I'll allow\nyou to transform into me!$"

BattleVsPikachu_Text_2:
# 568 "data/maps/daycarebase/scripts.pory"
	.string "You have gained the ability to\ntransform into Pikachu!$"

BattleVsPikachu_Text_3:
# 573 "data/maps/daycarebase/scripts.pory"
	.string "How electrifying!\pElectric_type moves are powerful\nagainst Water_type Pokémon.\pThey typically spend their time in\nthe Lake Biome here.$"

ChanseyHeal_Text_0:
# 584 "data/maps/daycarebase/scripts.pory"
	.string "Chansey$"

ChanseyHeal_Text_1:
# 585 "data/maps/daycarebase/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.\pWould you like to heal?$"

ChanseyHeal_Text_2:
# 598 "data/maps/daycarebase/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyHeal_Text_3:
# 605 "data/maps/daycarebase/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyHeal_Text_4:
# 613 "data/maps/daycarebase/scripts.pory"
	.string "Oh, okay then.$"

DaycareBase_Ditto_Text_0:
# 628 "data/maps/daycarebase/scripts.pory"
	.string "Ditto$"

DaycareBase_Ditto_Text_1:
# 629 "data/maps/daycarebase/scripts.pory"
	.string "Would you like to change out your\ntransformation options?$"

DaycareBase_Ditto_Text_2:
# 641 "data/maps/daycarebase/scripts.pory"
	.string "Come back anytime!$"

DaycareBase_Ditto_Text_3:
# 651 "data/maps/daycarebase/scripts.pory"
	.string "Ditto!\pYou can only remember four\ntransformations at a time.\pWe Dittos can act as a way to\nswap out which transformations\lyou have active at anytime!\pYou'll find us scattered around\nthe Daycare.\pNow...\n$"

DaycareBase_Ditto_Text_4:
# 678 "data/maps/daycarebase/scripts.pory"
	.string "Hello there fellow Ditto!\pDaycare Man asked you to get an Egg\nfor him, did he?\pWell, you're about to learn the\nthe secret of how we Dittos are\lalways found holding Eggs.\pIt'll be quite the adventure!\pDon't forget, you are a Ditto,\nso you can transform into any\lPokémon you defeat in battle!\pThis does only apply to Pokémon\nwho are not already using\lTransform...\pPress the {SELECT_BUTTON} button to\nopen your transformation menu.\pIf you open your Transformation\nParty, you'll see which Pokémon\lyou can transform into!$"
