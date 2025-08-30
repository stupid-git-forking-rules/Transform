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
	lockall
# 45 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinkToPikachuCave_1
# 61 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_1, MSGBOX_DEFAULT
# 62 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 63 "data/maps/daycarebase/scripts.pory"
	releaseall
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
	releaseall
	end

ShrinkToPikachuCave_4:
# 50 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_PIKACHU_SHRINK_CAVE, 0
	return


ShrinktoMausholdCave::
# 69 "data/maps/daycarebase/scripts.pory"
	lockall
# 70 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinktoMausholdCave_1
# 86 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_1, MSGBOX_DEFAULT
# 87 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 88 "data/maps/daycarebase/scripts.pory"
	releaseall
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
	releaseall
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
# 108 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 109 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_DEFAULT
# 110 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 111 "data/maps/daycarebase/scripts.pory"
	release
	end

MimikyuDialog_1:
# 98 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 99 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_DEFAULT
# 100 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_2
# 101 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_3, MSGBOX_DEFAULT
# 102 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 103 "data/maps/daycarebase/scripts.pory"
	release
	end


KecleonDialog::
# 116 "data/maps/daycarebase/scripts.pory"
	lock
# 117 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 118 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq KecleonDialog_1
# 128 "data/maps/daycarebase/scripts.pory"
	speakername KecleonDialog_Text_0
# 129 "data/maps/daycarebase/scripts.pory"
	msgbox KecleonDialog_Text_2, MSGBOX_DEFAULT
# 130 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 131 "data/maps/daycarebase/scripts.pory"
	release
	end

KecleonDialog_1:
# 120 "data/maps/daycarebase/scripts.pory"
	speakername KecleonDialog_Text_0
# 121 "data/maps/daycarebase/scripts.pory"
	msgbox KecleonDialog_Text_1, MSGBOX_DEFAULT
# 122 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 123 "data/maps/daycarebase/scripts.pory"
	release
	end


AzumarillDialog::
# 138 "data/maps/daycarebase/scripts.pory"
	lock
# 139 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 140 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq AzumarillDialog_1
# 150 "data/maps/daycarebase/scripts.pory"
	speakername AzumarillDialog_Text_0
# 151 "data/maps/daycarebase/scripts.pory"
	msgbox AzumarillDialog_Text_2, MSGBOX_DEFAULT
# 152 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 153 "data/maps/daycarebase/scripts.pory"
	release
	end

AzumarillDialog_1:
# 142 "data/maps/daycarebase/scripts.pory"
	speakername AzumarillDialog_Text_0
# 143 "data/maps/daycarebase/scripts.pory"
	msgbox AzumarillDialog_Text_1, MSGBOX_DEFAULT
# 144 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 145 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareOldManDialog::
# 159 "data/maps/daycarebase/scripts.pory"
	lock
# 160 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 161 "data/maps/daycarebase/scripts.pory"
	goto_if_unset FLAG_BEAT_MEW, DaycareOldManDialog_1
# 193 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq DaycareOldManDialog_7
# 317 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 318 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_1, MSGBOX_DEFAULT
# 319 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 320 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_1:
# 163 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_OLDMAN_INTRO, DaycareOldManDialog_4
# 183 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 184 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_2, MSGBOX_DEFAULT
# 185 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 186 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_OLDMAN_INTRO
# 187 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_4:
# 165 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq DaycareOldManDialog_10
# 174 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 175 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_1, MSGBOX_DEFAULT
# 176 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 177 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_7:
# 195 "data/maps/daycarebase/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 196 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 197 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_0
# 198 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 199 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, Common_Movement_ExclamationMark
# 200 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 201 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 202 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_3, MSGBOX_YESNO
# 203 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 204 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareOldManDialog_13
# 261 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 262 "data/maps/daycarebase/scripts.pory"
	playse SE_M_SCRATCH
# 263 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_9, MSGBOX_DEFAULT
# 264 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 265 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 266 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 267 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_5, MSGBOX_DEFAULT
# 268 "data/maps/daycarebase/scripts.pory"
	removeobject BrendanBiking
# 269 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_HIDE_BRENDAN_BIKE
# 270 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 271 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 272 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP
# 273 "data/maps/daycarebase/scripts.pory"
	waitse
# 274 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP_MAX
# 275 "data/maps/daycarebase/scripts.pory"
	waitse
# 276 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 277 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_6, MSGBOX_DEFAULT
# 278 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 279 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 280 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 281 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_7, MSGBOX_AUTOCLOSE
# 282 "data/maps/daycarebase/scripts.pory"
	special SpawnCameraObject
# 283 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_1
# 284 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 285 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_2
# 286 "data/maps/daycarebase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DaycareOldManDialog_Movement_2
# 287 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 288 "data/maps/daycarebase/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 289 "data/maps/daycarebase/scripts.pory"
	delay 60
# 290 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 24
# 291 "data/maps/daycarebase/scripts.pory"
	delay 60
# 292 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SHOW_BRENDAN_OUTRO
# 293 "data/maps/daycarebase/scripts.pory"
	addobject Brendan
# 294 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK, 24
# 295 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_3
# 296 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 297 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 298 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, Common_Movement_ExclamationMark
# 299 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 300 "data/maps/daycarebase/scripts.pory"
	delay 30
# 301 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_4
# 302 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 303 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_5
# 304 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 305 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 306 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_8, MSGBOX_DEFAULT
# 307 "data/maps/daycarebase/scripts.pory"
	delay 30
# 308 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 240
# 309 "data/maps/daycarebase/scripts.pory"
	delay 60
# 310 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_BEAT_MEW
# 311 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SHOW_BRENDAN_OUTRO
# 312 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_HIDE_BRENDAN_BIKE
# 313 "data/maps/daycarebase/scripts.pory"
	special GameClear
	return

DaycareOldManDialog_10:
# 167 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 168 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_0, MSGBOX_DEFAULT
# 169 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 170 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_13:
# 206 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 207 "data/maps/daycarebase/scripts.pory"
	playse SE_ITEMFINDER
# 208 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_4, MSGBOX_DEFAULT
# 209 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 210 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 211 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 212 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_5, MSGBOX_DEFAULT
# 213 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 214 "data/maps/daycarebase/scripts.pory"
	removeobject BrendanBiking
# 215 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_HIDE_BRENDAN_BIKE
# 216 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 217 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP
# 218 "data/maps/daycarebase/scripts.pory"
	waitse
# 219 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP_MAX
# 220 "data/maps/daycarebase/scripts.pory"
	waitse
# 221 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 222 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_6, MSGBOX_DEFAULT
# 223 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 224 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 225 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 226 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_7, MSGBOX_AUTOCLOSE
# 227 "data/maps/daycarebase/scripts.pory"
	special SpawnCameraObject
# 228 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_1
# 229 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 230 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_2
# 231 "data/maps/daycarebase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DaycareOldManDialog_Movement_2
# 232 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 233 "data/maps/daycarebase/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 234 "data/maps/daycarebase/scripts.pory"
	delay 60
# 235 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 24
# 236 "data/maps/daycarebase/scripts.pory"
	delay 60
# 237 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SHOW_BRENDAN_OUTRO
# 238 "data/maps/daycarebase/scripts.pory"
	addobject Brendan
# 239 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK, 24
# 240 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_3
# 241 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 242 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 243 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, Common_Movement_ExclamationMark
# 244 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 245 "data/maps/daycarebase/scripts.pory"
	delay 30
# 246 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_4
# 247 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 248 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_5
# 249 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 250 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 251 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_8, MSGBOX_DEFAULT
# 252 "data/maps/daycarebase/scripts.pory"
	delay 30
# 253 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 240
# 254 "data/maps/daycarebase/scripts.pory"
	delay 60
# 255 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_BEAT_MEW
# 256 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SHOW_BRENDAN_OUTRO
# 257 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_HIDE_BRENDAN_BIKE
# 258 "data/maps/daycarebase/scripts.pory"
	special GameClear
	return


VaporeonDialog::
# 331 "data/maps/daycarebase/scripts.pory"
	lock
# 332 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 333 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_2
# 334 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_VAPOREON, EMOTE_ANGRY
# 335 "data/maps/daycarebase/scripts.pory"
	msgbox VaporeonDialog_Text_0, MSGBOX_DEFAULT
# 336 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 337 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 338 "data/maps/daycarebase/scripts.pory"
	release
	end


LaprasDialog::
# 344 "data/maps/daycarebase/scripts.pory"
	lock
# 345 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 346 "data/maps/daycarebase/scripts.pory"
	speakername LaprasDialog_Text_0
# 347 "data/maps/daycarebase/scripts.pory"
	msgbox LaprasDialog_Text_1
# 348 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 349 "data/maps/daycarebase/scripts.pory"
	release
	end


LinooneDialog::
# 354 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq LinooneDialog_1
# 366 "data/maps/daycarebase/scripts.pory"
	lock
# 367 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 368 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 369 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_2
# 370 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 371 "data/maps/daycarebase/scripts.pory"
	release
	end

LinooneDialog_1:
# 356 "data/maps/daycarebase/scripts.pory"
	lock
# 357 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 358 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 359 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_1
# 360 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 361 "data/maps/daycarebase/scripts.pory"
	release
	end


BulbsaurDialog::
# 377 "data/maps/daycarebase/scripts.pory"
	lock
# 378 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 379 "data/maps/daycarebase/scripts.pory"
	speakername BulbsaurDialog_Text_0
# 380 "data/maps/daycarebase/scripts.pory"
	msgbox BulbsaurDialog_Text_1, MSGBOX_DEFAULT
# 381 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 382 "data/maps/daycarebase/scripts.pory"
	release
	end


CombeeDialog::
# 387 "data/maps/daycarebase/scripts.pory"
	lock
# 388 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 389 "data/maps/daycarebase/scripts.pory"
	speakername CombeeDialog_Text_0
# 390 "data/maps/daycarebase/scripts.pory"
	msgbox CombeeDialog_Text_1, MSGBOX_DEFAULT
# 391 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 392 "data/maps/daycarebase/scripts.pory"
	release
	end


Porygon2Dialog::
# 397 "data/maps/daycarebase/scripts.pory"
	lock
# 398 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 399 "data/maps/daycarebase/scripts.pory"
	speakername Porygon2Dialog_Text_0
# 400 "data/maps/daycarebase/scripts.pory"
	msgbox Porygon2Dialog_Text_1, MSGBOX_DEFAULT
# 401 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 402 "data/maps/daycarebase/scripts.pory"
	release
	end


ScytherDialog::
# 407 "data/maps/daycarebase/scripts.pory"
	lock
# 408 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 409 "data/maps/daycarebase/scripts.pory"
	speakername ScytherDialog_Text_0
# 410 "data/maps/daycarebase/scripts.pory"
	msgbox ScytherDialog_Text_1, MSGBOX_DEFAULT
# 411 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 412 "data/maps/daycarebase/scripts.pory"
	release
	end


RioluDialog::
# 417 "data/maps/daycarebase/scripts.pory"
	lock
# 418 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 419 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_RIOLU_INTRO, RioluDialog_1
# 562 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 563 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 564 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_27
# 565 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_RIOLU_INTRO
# 566 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 567 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 568 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_1:
# 421 "data/maps/daycarebase/scripts.pory"
	lock
# 422 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 423 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 424 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 425 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_1
# 426 "data/maps/daycarebase/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 427 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 428 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RioluDialog_4
# 550 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 551 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 552 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_26, MSGBOX_AUTOCLOSE
# 553 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 554 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 555 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_4:
# 430 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 431 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_2, MSGBOX_DEFAULT
# 432 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 433 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_3, MSGBOX_YESNO
# 434 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RioluDialog_7
# 540 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 541 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_25
# 542 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 543 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 544 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_7:
# 436 "data/maps/daycarebase/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 437 "data/maps/daycarebase/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, RioluDialog_Text_4, RioluDialog_Text_5, RioluDialog_Text_6, RioluDialog_Text_7, RioluDialog_Text_8, RioluDialog_Text_9, RioluDialog_Text_10, MimikyuDialog_Text_0, RioluDialog_Text_11, RioluDialog_Text_12, RioluDialog_Text_13
# 438 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RioluDialog_10
# 447 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RioluDialog_11
# 456 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RioluDialog_12
# 465 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RioluDialog_13
# 474 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq RioluDialog_14
# 483 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq RioluDialog_15
# 492 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq RioluDialog_16
# 501 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq RioluDialog_17
# 510 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq RioluDialog_18
# 519 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq RioluDialog_19
# 528 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq RioluDialog_20
	return

RioluDialog_10:
# 440 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 441 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_14, MSGBOX_DEFAULT
# 442 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 443 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 444 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_11:
# 449 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 450 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_15, MSGBOX_DEFAULT
# 451 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 452 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 453 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_12:
# 458 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 459 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_16, MSGBOX_DEFAULT
# 460 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 461 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 462 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_13:
# 467 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 468 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_17, MSGBOX_DEFAULT
# 469 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 470 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 471 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_14:
# 476 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 477 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_18, MSGBOX_DEFAULT
# 478 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 479 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 480 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_15:
# 485 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 486 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_19, MSGBOX_DEFAULT
# 487 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 488 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 489 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_16:
# 494 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 495 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_20, MSGBOX_DEFAULT
# 496 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 497 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 498 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_17:
# 503 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 504 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_21, MSGBOX_DEFAULT
# 505 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 506 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 507 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_18:
# 512 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 513 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_22, MSGBOX_DEFAULT
# 514 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 515 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 516 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_19:
# 521 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 522 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_23, MSGBOX_DEFAULT
# 523 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 524 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 525 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_20:
# 530 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 531 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_24, MSGBOX_DEFAULT
# 532 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 533 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 534 "data/maps/daycarebase/scripts.pory"
	release
	end


BattleVsPikachu::
# 575 "data/maps/daycarebase/scripts.pory"
	lock
# 577 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_TRANS_PIKACHU, BattleVsPikachu_2
# 589 "data/maps/daycarebase/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 590 "data/maps/daycarebase/scripts.pory"
	applymovement Pikachu, DaycareOldManDialog_Movement_0
# 591 "data/maps/daycarebase/scripts.pory"
	waitmovement Pikachu
# 592 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 593 "data/maps/daycarebase/scripts.pory"
	applymovement Pikachu, Common_Movement_ExclamationMark
# 594 "data/maps/daycarebase/scripts.pory"
	waitmovement Pikachu
# 595 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 596 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PIKACHU, EMOTE_NORMAL
# 597 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_1, MSGBOX_AUTOCLOSE
# 598 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 599 "data/maps/daycarebase/scripts.pory"
	setwildbattle SPECIES_PIKACHU, 25
# 600 "data/maps/daycarebase/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 601 "data/maps/daycarebase/scripts.pory"
	dowildbattle
# 602 "data/maps/daycarebase/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 603 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsPikachu_4
	return

BattleVsPikachu_2:
# 579 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 580 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 581 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PIKACHU, EMOTE_NORMAL
# 582 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_0, MSGBOX_DEFAULT
# 583 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 584 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 585 "data/maps/daycarebase/scripts.pory"
	release
	end

BattleVsPikachu_4:
# 605 "data/maps/daycarebase/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 606 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 607 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_TRANS_PIKACHU
# 608 "data/maps/daycarebase/scripts.pory"
	dittotransform SPECIES_PIKACHU
# 609 "data/maps/daycarebase/scripts.pory"
	playse MUS_LEVEL_UP
# 610 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_2, MSGBOX_DEFAULT
# 611 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 612 "data/maps/daycarebase/scripts.pory"
	dittotransform VAR_TEMP_0
# 613 "data/maps/daycarebase/scripts.pory"
	givemon SPECIES_PIKACHU, 25, move1 = MOVE_NUZZLE, move2 = MOVE_IRON_TAIL, move3 = MOVE_SPARK, move4 = MOVE_FLASH
# 614 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 615 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PIKACHU, EMOTE_HAPPY
# 616 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_3, MSGBOX_DEFAULT
# 617 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 618 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 619 "data/maps/daycarebase/scripts.pory"
	fadenewbgm MUS_PMD_HEARTWARMING
# 620 "data/maps/daycarebase/scripts.pory"
	release
	end


ChanseyHeal::
# 626 "data/maps/daycarebase/scripts.pory"
	lock
# 627 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 628 "data/maps/daycarebase/scripts.pory"
	speakername ChanseyHeal_Text_0
# 629 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 630 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_1, MSGBOX_DEFAULT
# 631 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 632 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_2, MSGBOX_YESNO
# 633 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 634 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyHeal_1
# 664 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 665 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_5, MSGBOX_AUTOCLOSE
# 666 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 667 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 668 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_1:
# 636 "data/maps/daycarebase/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 637 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyHeal_4
# 654 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 655 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_4, MSGBOX_AUTOCLOSE
# 656 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 657 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 658 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_4:
# 639 "data/maps/daycarebase/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 640 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 641 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_HEAL
# 642 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 643 "data/maps/daycarebase/scripts.pory"
	special HealPlayerParty
# 644 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 645 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 646 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_3, MSGBOX_AUTOCLOSE
# 647 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 648 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 649 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_Ditto::
# 675 "data/maps/daycarebase/scripts.pory"
	lock
# 676 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 677 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_DITTO_INTRO, DaycareBase_Ditto_1
# 736 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_0
# 737 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 738 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_4, MSGBOX_DEFAULT
# 738 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 739 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_DITTO_INTRO
# 740 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 741 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 742 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_1:
# 679 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_XFORMS_TALKED_TO_DITTO, DaycareBase_Ditto_4
# 705 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_0
# 706 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 707 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_3, MSGBOX_DEFAULT
# 707 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 708 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_XFORMS_TALKED_TO_DITTO
# 709 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 710 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_1, MSGBOX_YESNO
# 711 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareBase_Ditto_10
# 722 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 723 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_2, MSGBOX_AUTOCLOSE
# 724 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 725 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 726 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 727 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 728 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_4:
# 681 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_0
# 682 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_1, MSGBOX_YESNO
# 683 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareBase_Ditto_7
# 694 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 695 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_2, MSGBOX_AUTOCLOSE
# 696 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 697 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 698 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 699 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 700 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_7:
# 685 "data/maps/daycarebase/scripts.pory"
	special OpenPCMoveMons
# 686 "data/maps/daycarebase/scripts.pory"
	waitstate
# 687 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 688 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 689 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_10:
# 713 "data/maps/daycarebase/scripts.pory"
	special OpenPCMoveMons
# 714 "data/maps/daycarebase/scripts.pory"
	waitstate
# 715 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 716 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 717 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_FindLuckyEgg::
# 751 "data/maps/daycarebase/scripts.pory"
	lock
# 752 "data/maps/daycarebase/scripts.pory"
	finditem ITEM_LUCKY_EGG
# 753 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 754 "data/maps/daycarebase/scripts.pory"
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

# 197 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_0:
# 197 "data/maps/daycarebase/scripts.pory"
	face_player
	step_end

# 228 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_1:
# 228 "data/maps/daycarebase/scripts.pory"
	face_down
	step_end

# 230 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_2:
# 230 "data/maps/daycarebase/scripts.pory"
	walk_down
# 230 "data/maps/daycarebase/scripts.pory"
	walk_down
	step_end

# 240 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_3:
# 240 "data/maps/daycarebase/scripts.pory"
	walk_right
# 240 "data/maps/daycarebase/scripts.pory"
	walk_right
# 240 "data/maps/daycarebase/scripts.pory"
	walk_right
# 240 "data/maps/daycarebase/scripts.pory"
	walk_right
# 240 "data/maps/daycarebase/scripts.pory"
	walk_right
	step_end

# 246 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_4:
# 246 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 246 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 246 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 246 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
# 246 "data/maps/daycarebase/scripts.pory"
	walk_fast_right
	step_end

# 248 "data/maps/daycarebase/scripts.pory"
DaycareOldManDialog_Movement_5:
# 248 "data/maps/daycarebase/scripts.pory"
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
# 99 "data/maps/daycarebase/scripts.pory"
	.string "Hey!\pI'm just a normal Pikachu in my usual\nspot!$"

MimikyuDialog_Text_2:
# 100 "data/maps/daycarebase/scripts.pory"
	.string "Mimikyu$"

MimikyuDialog_Text_3:
# 101 "data/maps/daycarebase/scripts.pory"
	.string "Oh...\nYou caught me.\pI wish I could disguise myself as\nwell as you can...\pMaybe then people would like me more...$"

KecleonDialog_Text_0:
# 120 "data/maps/daycarebase/scripts.pory"
	.string "Kecleon$"

KecleonDialog_Text_1:
# 121 "data/maps/daycarebase/scripts.pory"
	.string "Where do Eggs come from?\pMy trainer left me here a long time\nago and I've yet to find one.\pDo you know?\pI've always heard of Dittos\nholding onto Eggs...$"

KecleonDialog_Text_2:
# 129 "data/maps/daycarebase/scripts.pory"
	.string "Where do Eggs come from?\pMy trainer left me here a long time\nago and I've yet to find one.$"

AzumarillDialog_Text_0:
# 142 "data/maps/daycarebase/scripts.pory"
	.string "Azumarill$"

AzumarillDialog_Text_1:
# 143 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pYou'll fit in well here.$"

AzumarillDialog_Text_2:
# 151 "data/maps/daycarebase/scripts.pory"
	.string "Oh!\nThank goodness you aren't a Ditto...\pMy trainer keeps putting me in here\nwith Dittos hoping we'll find an\lEgg.\pThey gave me this Sea Incence,\nbut I'm not sure how that would\lhelp us on our hunt...$"

DaycareOldManDialog_Text_0:
# 168 "data/maps/daycarebase/scripts.pory"
	.string "Back from exploring the Daycare?\pAh!\nBut where is your Egg!\pKeep doing whatever it is you\nDittos do and come back when\lyou have one!$"

DaycareOldManDialog_Text_1:
# 175 "data/maps/daycarebase/scripts.pory"
	.string "Why, who are you?\pI'm looking for a Ditto.\n$"

DaycareOldManDialog_Text_2:
# 184 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pDespite what trainers may see from\nRoute 117, the Daycare is a vast\larea filled with biomes for nearly\levery type of Pokémon!\pExplore the Daycare and interact\nwith many of the Pokémon we are\lraising.\pYou never know what friends you\nwill make along the way!\pNow, I do expect you to be holding\nan Egg at some point... Every Ditto\lI've raised has produced one.\pWhen you're holding an Egg,\ncome back and talk to me and\lwe can get it to your trainer.$"

DaycareOldManDialog_Text_3:
# 202 "data/maps/daycarebase/scripts.pory"
	.string "Why what do we have here?\nGoodness!\pYou're holding an Egg!\pWherever did you get this?\pIt's the darndest thing.\pYou Pokémon always seem to find\nthese Eggs, but I can never figure\lout where they come from.\pWould you like to give me the Egg\nso that I may give it to your\lTrainer?$"

DaycareOldManDialog_Text_4:
# 208 "data/maps/daycarebase/scripts.pory"
	.string "Ditto handed over the Egg.\n$"

DaycareOldManDialog_Text_5:
# 212 "data/maps/daycarebase/scripts.pory"
	.string "Thank your for the Egg!\pAs a reward, take this EXP!\n$"

DaycareOldManDialog_Text_6:
# 222 "data/maps/daycarebase/scripts.pory"
	.string "Ditto grew to level 26.\n$"

DaycareOldManDialog_Text_7:
# 226 "data/maps/daycarebase/scripts.pory"
	.string "With this Egg, I can now fulfill\nmy duties.$"

DaycareOldManDialog_Text_8:
# 251 "data/maps/daycarebase/scripts.pory"
	.string "Ah, it's you!\pWe were raising your Pokémon\nand my goodness, were we surprised!\pYour Pokémon had an Egg!\pWe don't know how it got there,\nbut your Pokémon had it.\pYou do want it, yes?\n$"

DaycareOldManDialog_Text_9:
# 263 "data/maps/daycarebase/scripts.pory"
	.string "The Daycare Man ripped the Egg\nfrom Ditto's clutches.$"

VaporeonDialog_Text_0:
# 335 "data/maps/daycarebase/scripts.pory"
	.string "Ugh!\pWhy does everyone keep asking me\nto help them search for Eggs?\pCan't you see I'm busy?\n$"

LaprasDialog_Text_0:
# 346 "data/maps/daycarebase/scripts.pory"
	.string "Lapras$"

LaprasDialog_Text_1:
# 347 "data/maps/daycarebase/scripts.pory"
	.string "I love the Daycare!\pIt's so peaceful and quiet here.\pI can just float around all day\nand relax.\pThose waterfalls are pretty\nvicious, I won't go near them.\pI've heard that Dragonair can\neasily scale even the largest\lof waterfalls!$"

LinooneDialog_Text_0:
# 358 "data/maps/daycarebase/scripts.pory"
	.string "Linoone$"

LinooneDialog_Text_1:
# 359 "data/maps/daycarebase/scripts.pory"
	.string "The Daycare is huge!\pIt's a bit scary to expore,\nso I stay up here.\pRiolu is way more brave than I\nam and has explored the entirety\lof the Daycare.\pYou should talk with Riolu if\nyou get lost!\pI'm sure they can help!\n$"

LinooneDialog_Text_2:
# 369 "data/maps/daycarebase/scripts.pory"
	.string "Those Dittos really freak me out.\pThey could be any one of use right\nnow...\pEven you!... or me!\n$"

BulbsaurDialog_Text_0:
# 379 "data/maps/daycarebase/scripts.pory"
	.string "Bulbasaur$"

BulbsaurDialog_Text_1:
# 380 "data/maps/daycarebase/scripts.pory"
	.string "You want to know where Eggs\ncome from?\pI heard that a Pokémon needs\nto go on a great adventure to\lmeet a shapeshifting Pokémon.\pIf you can best them, they will\ngive you an egg!\pAt least, that's what Venusaur\ntold me...$"

CombeeDialog_Text_0:
# 389 "data/maps/daycarebase/scripts.pory"
	.string "Combee$"

CombeeDialog_Text_1:
# 390 "data/maps/daycarebase/scripts.pory"
	.string "I've been in this Daycare\nfor ages!\pI've flown all around and\npollenated so many flowers\lbut I still haven't gained a\lsingle level.\pI'm beginning to believe gaining\nEXP here is nothing more\lthan a big ole myth!$"

Porygon2Dialog_Text_0:
# 399 "data/maps/daycarebase/scripts.pory"
	.string "Porygon2$"

Porygon2Dialog_Text_1:
# 400 "data/maps/daycarebase/scripts.pory"
	.string "Another Ditto...\pI'm actually a Ditto too,\nI just prefer this look.\pThe Daycare population must be at\nleast 75 percent Dittos!\pMost Dittos will take on different\nforms.\pYou won't be able to transform\ninto a form that another Ditto has\ltaken on though.$"

ScytherDialog_Text_0:
# 409 "data/maps/daycarebase/scripts.pory"
	.string "Scyther$"

ScytherDialog_Text_1:
# 410 "data/maps/daycarebase/scripts.pory"
	.string "One in every fifty Dittos that I\nsee here are blue.\pMust be all those shiny hunters\ntrying to capitalize on Gen 2\lmechanics.\pWhen will they learn that this is\nGen3...$"

RioluDialog_Text_0:
# 423 "data/maps/daycarebase/scripts.pory"
	.string "Riolu$"

RioluDialog_Text_1:
# 425 "data/maps/daycarebase/scripts.pory"
	.string "Back with a Lucky Egg?\n$"

RioluDialog_Text_2:
# 431 "data/maps/daycarebase/scripts.pory"
	.string "Great!\pI can tell about the habitat and\nability of a Pokémon in the Daycare.$"

RioluDialog_Text_3:
# 433 "data/maps/daycarebase/scripts.pory"
	.string "Would you like to exchange a\nLucky Egg?$"

RioluDialog_Text_4:
# 437 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine$"

RioluDialog_Text_5:
# 437 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou$"

RioluDialog_Text_6:
# 437 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly$"

RioluDialog_Text_7:
# 437 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair$"

RioluDialog_Text_8:
# 437 "data/maps/daycarebase/scripts.pory"
	.string "Marill$"

RioluDialog_Text_9:
# 437 "data/maps/daycarebase/scripts.pory"
	.string "Machamp$"

RioluDialog_Text_10:
# 437 "data/maps/daycarebase/scripts.pory"
	.string "Noivern$"

RioluDialog_Text_11:
# 437 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn$"

RioluDialog_Text_12:
# 437 "data/maps/daycarebase/scripts.pory"
	.string "Lurantis$"

RioluDialog_Text_13:
# 437 "data/maps/daycarebase/scripts.pory"
	.string "Weavile$"

RioluDialog_Text_14:
# 441 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine can be found deep in the\nVolcano.\pIt can run really fast and scale\nhills that would normally be to\lslippery to climb!$"

RioluDialog_Text_15:
# 450 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou can be found in a cave\non the water in the desert.\pIt can dive deep underwater.\n$"

RioluDialog_Text_16:
# 459 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly can be found in the\nDaycare's flowers to the west.\pIt's a tiny Pokémon that can\nfit through small openings.$"

RioluDialog_Text_17:
# 468 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair can be found at the lake.\pIt can be a bit cryptic so it\nmay be difficult to reach.\pIt can scale large waterfalls\nwith ease.$"

RioluDialog_Text_18:
# 477 "data/maps/daycarebase/scripts.pory"
	.string "Marill can be found at the lake,\nusually by the shore.\pIt's a bit shy so it may be hiding.\pIt can float in any body of water.\n$"

RioluDialog_Text_19:
# 486 "data/maps/daycarebase/scripts.pory"
	.string "Machamp likes to train deep in\nthe mountains.\pIt is a very tough and solitary\nPokémon.\pIts strength can move large\nboulders.$"

RioluDialog_Text_20:
# 495 "data/maps/daycarebase/scripts.pory"
	.string "Noivern hangs out in a dark\ncave above the Daycare Falls.\pIt's quite a powerful Pokémon,\nso be prepared for a fight.\pIt can soar through the air,\nreaching places unreachable by\lnon_flying types.$"

RioluDialog_Text_21:
# 504 "data/maps/daycarebase/scripts.pory"
	.string "Pikachu is standing on that cliff\nright over there.\pIts electricity can light up even\nthe darkest of caves.$"

RioluDialog_Text_22:
# 513 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn lives in the desert.\pIt's quite a friendly Pokémon,\nbut don't upset it!\pIt is strong enough to smash\nsolid rocks!$"

RioluDialog_Text_23:
# 522 "data/maps/daycarebase/scripts.pory"
	.string "Lurantis has been spending time\nacross the water in the mountains.\pIts sharp limbs can cut through\nsmall trees.$"

RioluDialog_Text_24:
# 531 "data/maps/daycarebase/scripts.pory"
	.string "Weavile is quite the ninja.\pIt spends time in the tall trees\nin the jungle.\pIt demands a fierce challenger\nto battle it.\pIts agility allows it to cross\neven the smallest of walkways.$"

RioluDialog_Text_25:
# 541 "data/maps/daycarebase/scripts.pory"
	.string "Oh.\pWhat else are you gonna do\nwith that egg?$"

RioluDialog_Text_26:
# 552 "data/maps/daycarebase/scripts.pory"
	.string "No?\nCome back when you do!$"

RioluDialog_Text_27:
# 564 "data/maps/daycarebase/scripts.pory"
	.string "Hiya!\pI'm Riolu!\pI've visited every biome the\nDaycare has to offer.\lI know it like the back of my paw!\pIf you need guidance on where a\ncertain Pokémon might be,\lI'm your Pokémon!\pAlthough I won't do it for free...\pBring me Lucky Eggs, and I'll tell\nyou what I know.$"

BattleVsPikachu_Text_0:
# 582 "data/maps/daycarebase/scripts.pory"
	.string "You really lit me up.\pBest of luck on your journey!\n$"

BattleVsPikachu_Text_1:
# 597 "data/maps/daycarebase/scripts.pory"
	.string "A Ditto!\pYou must be on your quest to obtain\nyour egg.\pDefeat me in battle and I'll allow\nyou to transform into me!$"

BattleVsPikachu_Text_2:
# 610 "data/maps/daycarebase/scripts.pory"
	.string "You have gained the ability to\ntransform into Pikachu!$"

BattleVsPikachu_Text_3:
# 616 "data/maps/daycarebase/scripts.pory"
	.string "How electrifying!\pElectric_type moves are powerful\nagainst Water_type Pokémon.\pThey typically spend their time in\nthe Lake Biome here.$"

ChanseyHeal_Text_0:
# 628 "data/maps/daycarebase/scripts.pory"
	.string "Chansey$"

ChanseyHeal_Text_1:
# 630 "data/maps/daycarebase/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.$"

ChanseyHeal_Text_2:
# 632 "data/maps/daycarebase/scripts.pory"
	.string "Would you like to heal?$"

ChanseyHeal_Text_3:
# 646 "data/maps/daycarebase/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyHeal_Text_4:
# 655 "data/maps/daycarebase/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyHeal_Text_5:
# 665 "data/maps/daycarebase/scripts.pory"
	.string "Oh, okay then.$"

DaycareBase_Ditto_Text_0:
# 681 "data/maps/daycarebase/scripts.pory"
	.string "Ditto$"

DaycareBase_Ditto_Text_1:
# 682 "data/maps/daycarebase/scripts.pory"
	.string "Would you like to change out your\ntransformation options?$"

DaycareBase_Ditto_Text_2:
# 695 "data/maps/daycarebase/scripts.pory"
	.string "Come back anytime!$"

DaycareBase_Ditto_Text_3:
# 707 "data/maps/daycarebase/scripts.pory"
	.string "Ditto!\pYou can only remember four\ntransformations at a time.\pWe Dittos can act as a way to\nswap out which transformations\lyou have active at anytime!\pYou'll find us scattered around\nthe Daycare.\pNow...\n$"

DaycareBase_Ditto_Text_4:
# 738 "data/maps/daycarebase/scripts.pory"
	.string "Hello there fellow Ditto!\pDaycare Man asked you to get an Egg\nfor him, did he?\pWell, you're about to learn the\nthe secret of how we Dittos are\lalways found holding Eggs.\pIt'll be quite the adventure!\pDon't forget, you are a Ditto,\nso you can transform into any\lPokémon you defeat in battle!\pThis does only apply to Pokémon\nwho are not already using\lTransform...\pPress the {SELECT_BUTTON} button to\nopen your transformation menu.\pIf you open your Transformation\nParty, you'll see which Pokémon\lyou can transform into!$"
