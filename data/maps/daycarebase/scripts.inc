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
# 331 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 332 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_1, MSGBOX_DEFAULT
# 333 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 334 "data/maps/daycarebase/scripts.pory"
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
# 275 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 276 "data/maps/daycarebase/scripts.pory"
	playse SE_M_SCRATCH
# 277 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_9, MSGBOX_DEFAULT
# 278 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 279 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 280 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 281 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_5, MSGBOX_DEFAULT
# 282 "data/maps/daycarebase/scripts.pory"
	removeobject BrendanBiking
# 283 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_HIDE_BRENDAN_BIKE
# 284 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 285 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 286 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP
# 287 "data/maps/daycarebase/scripts.pory"
	waitse
# 288 "data/maps/daycarebase/scripts.pory"
	playse SE_EXP_MAX
# 289 "data/maps/daycarebase/scripts.pory"
	waitse
# 290 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 291 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_6, MSGBOX_DEFAULT
# 292 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 293 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 294 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 295 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_7, MSGBOX_AUTOCLOSE
# 296 "data/maps/daycarebase/scripts.pory"
	special SpawnCameraObject
# 297 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_1
# 298 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 299 "data/maps/daycarebase/scripts.pory"
	applymovement DaycareMan, DaycareOldManDialog_Movement_2
# 300 "data/maps/daycarebase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DaycareOldManDialog_Movement_2
# 301 "data/maps/daycarebase/scripts.pory"
	waitmovement DaycareMan
# 302 "data/maps/daycarebase/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 303 "data/maps/daycarebase/scripts.pory"
	delay 60
# 304 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 24
# 305 "data/maps/daycarebase/scripts.pory"
	delay 60
# 306 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SHOW_BRENDAN_OUTRO
# 307 "data/maps/daycarebase/scripts.pory"
	addobject Brendan
# 308 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK, 24
# 309 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_3
# 310 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 311 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 312 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, Common_Movement_ExclamationMark
# 313 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 314 "data/maps/daycarebase/scripts.pory"
	delay 30
# 315 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_4
# 316 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 317 "data/maps/daycarebase/scripts.pory"
	applymovement Brendan, DaycareOldManDialog_Movement_5
# 318 "data/maps/daycarebase/scripts.pory"
	waitmovement Brendan
# 319 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_0
# 320 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_8, MSGBOX_DEFAULT
# 321 "data/maps/daycarebase/scripts.pory"
	delay 30
# 322 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 240
# 323 "data/maps/daycarebase/scripts.pory"
	delay 60
# 324 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_BEAT_MEW
# 325 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SHOW_BRENDAN_OUTRO
# 326 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_HIDE_BRENDAN_BIKE
# 327 "data/maps/daycarebase/scripts.pory"
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
	delay 30
# 267 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 240
# 268 "data/maps/daycarebase/scripts.pory"
	delay 60
# 269 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_BEAT_MEW
# 270 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SHOW_BRENDAN_OUTRO
# 271 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_HIDE_BRENDAN_BIKE
# 272 "data/maps/daycarebase/scripts.pory"
	special GameClear
	return


VaporeonDialog::
# 345 "data/maps/daycarebase/scripts.pory"
	lock
# 346 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 347 "data/maps/daycarebase/scripts.pory"
	speakername DaycareIntro_Text_2
# 348 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_VAPOREON, EMOTE_ANGRY
# 349 "data/maps/daycarebase/scripts.pory"
	msgbox VaporeonDialog_Text_0, MSGBOX_DEFAULT
# 350 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 351 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 352 "data/maps/daycarebase/scripts.pory"
	release
	end


LaprasDialog::
# 358 "data/maps/daycarebase/scripts.pory"
	lock
# 359 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 360 "data/maps/daycarebase/scripts.pory"
	speakername LaprasDialog_Text_0
# 361 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_LAPRAS, EMOTE_NORMAL
# 362 "data/maps/daycarebase/scripts.pory"
	msgbox LaprasDialog_Text_1
# 363 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 364 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 365 "data/maps/daycarebase/scripts.pory"
	release
	end


LinooneDialog::
# 370 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq LinooneDialog_1
# 384 "data/maps/daycarebase/scripts.pory"
	lock
# 385 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 386 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 387 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_LINOONE, EMOTE_NORMAL
# 388 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_2
# 389 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 390 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 391 "data/maps/daycarebase/scripts.pory"
	release
	end

LinooneDialog_1:
# 372 "data/maps/daycarebase/scripts.pory"
	lock
# 373 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 374 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 375 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_LINOONE, EMOTE_NORMAL
# 376 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_1
# 377 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 378 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 379 "data/maps/daycarebase/scripts.pory"
	release
	end


BulbsaurDialog::
# 397 "data/maps/daycarebase/scripts.pory"
	lock
# 398 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 399 "data/maps/daycarebase/scripts.pory"
	speakername BulbsaurDialog_Text_0
# 400 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_BULBASAUR, EMOTE_NORMAL
# 401 "data/maps/daycarebase/scripts.pory"
	msgbox BulbsaurDialog_Text_1, MSGBOX_DEFAULT
# 402 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 403 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 404 "data/maps/daycarebase/scripts.pory"
	release
	end


CombeeDialog::
# 409 "data/maps/daycarebase/scripts.pory"
	lock
# 410 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 411 "data/maps/daycarebase/scripts.pory"
	speakername CombeeDialog_Text_0
# 412 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_COMBEE, EMOTE_NORMAL
# 413 "data/maps/daycarebase/scripts.pory"
	msgbox CombeeDialog_Text_1, MSGBOX_DEFAULT
# 414 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 415 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 416 "data/maps/daycarebase/scripts.pory"
	release
	end


Porygon2Dialog::
# 421 "data/maps/daycarebase/scripts.pory"
	lock
# 422 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 423 "data/maps/daycarebase/scripts.pory"
	speakername Porygon2Dialog_Text_0
# 424 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PORYGON2, EMOTE_NORMAL
# 425 "data/maps/daycarebase/scripts.pory"
	msgbox Porygon2Dialog_Text_1, MSGBOX_DEFAULT
# 426 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 427 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 428 "data/maps/daycarebase/scripts.pory"
	release
	end


ScytherDialog::
# 433 "data/maps/daycarebase/scripts.pory"
	lock
# 434 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 435 "data/maps/daycarebase/scripts.pory"
	speakername ScytherDialog_Text_0
# 436 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_SCYTHER, EMOTE_NORMAL
# 437 "data/maps/daycarebase/scripts.pory"
	msgbox ScytherDialog_Text_1, MSGBOX_DEFAULT
# 438 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 439 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 440 "data/maps/daycarebase/scripts.pory"
	release
	end


RioluDialog::
# 445 "data/maps/daycarebase/scripts.pory"
	lock
# 446 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 447 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_RIOLU_INTRO, RioluDialog_1
# 590 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 591 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 592 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_27
# 593 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_RIOLU_INTRO
# 594 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 595 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 596 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_1:
# 449 "data/maps/daycarebase/scripts.pory"
	lock
# 450 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 451 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 452 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 453 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_1
# 454 "data/maps/daycarebase/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 455 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 456 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RioluDialog_4
# 578 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 579 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 580 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_26, MSGBOX_AUTOCLOSE
# 581 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 582 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 583 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_4:
# 458 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 459 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_2, MSGBOX_DEFAULT
# 460 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 461 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_3, MSGBOX_YESNO
# 462 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RioluDialog_7
# 568 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 569 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_25
# 570 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 571 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 572 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_7:
# 464 "data/maps/daycarebase/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 465 "data/maps/daycarebase/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, RioluDialog_Text_4, RioluDialog_Text_5, RioluDialog_Text_6, RioluDialog_Text_7, RioluDialog_Text_8, RioluDialog_Text_9, RioluDialog_Text_10, MimikyuDialog_Text_0, RioluDialog_Text_11, RioluDialog_Text_12, RioluDialog_Text_13
# 466 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RioluDialog_10
# 475 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RioluDialog_11
# 484 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RioluDialog_12
# 493 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RioluDialog_13
# 502 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq RioluDialog_14
# 511 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq RioluDialog_15
# 520 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq RioluDialog_16
# 529 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq RioluDialog_17
# 538 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq RioluDialog_18
# 547 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq RioluDialog_19
# 556 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq RioluDialog_20
	return

RioluDialog_10:
# 468 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 469 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_14, MSGBOX_DEFAULT
# 470 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 471 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 472 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_11:
# 477 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 478 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_15, MSGBOX_DEFAULT
# 479 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 480 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 481 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_12:
# 486 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 487 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_16, MSGBOX_DEFAULT
# 488 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 489 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 490 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_13:
# 495 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 496 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_17, MSGBOX_DEFAULT
# 497 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 498 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 499 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_14:
# 504 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 505 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_18, MSGBOX_DEFAULT
# 506 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 507 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 508 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_15:
# 513 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 514 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_19, MSGBOX_DEFAULT
# 515 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 516 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 517 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_16:
# 522 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 523 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_20, MSGBOX_DEFAULT
# 524 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 525 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 526 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_17:
# 531 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 532 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_21, MSGBOX_DEFAULT
# 533 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 534 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 535 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_18:
# 540 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 541 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_22, MSGBOX_DEFAULT
# 542 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 543 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 544 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_19:
# 549 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 550 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_23, MSGBOX_DEFAULT
# 551 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 552 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 553 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_20:
# 558 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_RIOLU, EMOTE_NORMAL
# 559 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_24, MSGBOX_DEFAULT
# 560 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 561 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 562 "data/maps/daycarebase/scripts.pory"
	release
	end


BattleVsPikachu::
# 603 "data/maps/daycarebase/scripts.pory"
	lock
# 605 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_TRANS_PIKACHU, BattleVsPikachu_2
# 617 "data/maps/daycarebase/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 618 "data/maps/daycarebase/scripts.pory"
	applymovement Pikachu, DaycareOldManDialog_Movement_0
# 619 "data/maps/daycarebase/scripts.pory"
	waitmovement Pikachu
# 620 "data/maps/daycarebase/scripts.pory"
	playse SE_PIN
# 621 "data/maps/daycarebase/scripts.pory"
	applymovement Pikachu, Common_Movement_ExclamationMark
# 622 "data/maps/daycarebase/scripts.pory"
	waitmovement Pikachu
# 623 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 624 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PIKACHU, EMOTE_NORMAL
# 625 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_1, MSGBOX_AUTOCLOSE
# 626 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 627 "data/maps/daycarebase/scripts.pory"
	setwildbattle SPECIES_PIKACHU, 25
# 628 "data/maps/daycarebase/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 629 "data/maps/daycarebase/scripts.pory"
	dowildbattle
# 630 "data/maps/daycarebase/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 631 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsPikachu_4
	return

BattleVsPikachu_2:
# 607 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 608 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 609 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PIKACHU, EMOTE_NORMAL
# 610 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_0, MSGBOX_DEFAULT
# 611 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 612 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 613 "data/maps/daycarebase/scripts.pory"
	release
	end

BattleVsPikachu_4:
# 633 "data/maps/daycarebase/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 634 "data/maps/daycarebase/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 635 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_TRANS_PIKACHU
# 636 "data/maps/daycarebase/scripts.pory"
	dittotransform SPECIES_PIKACHU
# 637 "data/maps/daycarebase/scripts.pory"
	playse MUS_LEVEL_UP
# 638 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_2, MSGBOX_DEFAULT
# 639 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 640 "data/maps/daycarebase/scripts.pory"
	dittotransform VAR_TEMP_0
# 641 "data/maps/daycarebase/scripts.pory"
	givemon SPECIES_PIKACHU, 25, move1 = MOVE_NUZZLE, move2 = MOVE_IRON_TAIL, move3 = MOVE_SPARK, move4 = MOVE_FLASH
# 642 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 643 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_PIKACHU, EMOTE_HAPPY
# 644 "data/maps/daycarebase/scripts.pory"
	msgbox BattleVsPikachu_Text_3, MSGBOX_DEFAULT
# 645 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 646 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 647 "data/maps/daycarebase/scripts.pory"
	fadenewbgm MUS_PMD_HEARTWARMING
# 648 "data/maps/daycarebase/scripts.pory"
	release
	end


ChanseyHeal::
# 654 "data/maps/daycarebase/scripts.pory"
	lock
# 655 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 656 "data/maps/daycarebase/scripts.pory"
	speakername ChanseyHeal_Text_0
# 657 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 658 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_1, MSGBOX_DEFAULT
# 659 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 660 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_2, MSGBOX_YESNO
# 661 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 662 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyHeal_1
# 692 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 693 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_5, MSGBOX_AUTOCLOSE
# 694 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 695 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 696 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_1:
# 664 "data/maps/daycarebase/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 665 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyHeal_4
# 682 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 683 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_4, MSGBOX_AUTOCLOSE
# 684 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 685 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 686 "data/maps/daycarebase/scripts.pory"
	release
	end

ChanseyHeal_4:
# 667 "data/maps/daycarebase/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 668 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 669 "data/maps/daycarebase/scripts.pory"
	playfanfare MUS_HEAL
# 670 "data/maps/daycarebase/scripts.pory"
	waitfanfare
# 671 "data/maps/daycarebase/scripts.pory"
	special HealPlayerParty
# 672 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 673 "data/maps/daycarebase/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 674 "data/maps/daycarebase/scripts.pory"
	msgbox ChanseyHeal_Text_3, MSGBOX_AUTOCLOSE
# 675 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 676 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 677 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_Ditto::
# 703 "data/maps/daycarebase/scripts.pory"
	lock
# 704 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 705 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_DITTO_INTRO, DaycareBase_Ditto_1
# 764 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_0
# 765 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 766 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_4, MSGBOX_DEFAULT
# 766 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 767 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_DITTO_INTRO
# 768 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 769 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 770 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_1:
# 707 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_XFORMS_TALKED_TO_DITTO, DaycareBase_Ditto_4
# 733 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_0
# 734 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 735 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_3, MSGBOX_DEFAULT
# 735 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 736 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_XFORMS_TALKED_TO_DITTO
# 737 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 738 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_1, MSGBOX_YESNO
# 739 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareBase_Ditto_10
# 750 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 751 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_2, MSGBOX_AUTOCLOSE
# 752 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 753 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 754 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 755 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 756 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_4:
# 709 "data/maps/daycarebase/scripts.pory"
	speakername DaycareBase_Ditto_Text_0
# 710 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_1, MSGBOX_YESNO
# 711 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareBase_Ditto_7
# 722 "data/maps/daycarebase/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 723 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareBase_Ditto_Text_2, MSGBOX_AUTOCLOSE
# 724 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 725 "data/maps/daycarebase/scripts.pory"
	removefieldmugshot
# 726 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 727 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 728 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareBase_Ditto_7:
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

DaycareBase_Ditto_10:
# 741 "data/maps/daycarebase/scripts.pory"
	special OpenPCMoveMons
# 742 "data/maps/daycarebase/scripts.pory"
	waitstate
# 743 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 744 "data/maps/daycarebase/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 745 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareBase_FindLuckyEgg::
# 779 "data/maps/daycarebase/scripts.pory"
	lock
# 780 "data/maps/daycarebase/scripts.pory"
	finditem ITEM_LUCKY_EGG
# 781 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 782 "data/maps/daycarebase/scripts.pory"
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
# 277 "data/maps/daycarebase/scripts.pory"
	.string "The Daycare Man ripped the Egg\nfrom Ditto's clutches.$"

VaporeonDialog_Text_0:
# 349 "data/maps/daycarebase/scripts.pory"
	.string "Ugh!\pWhy does everyone keep asking me\nto help them search for Eggs?\pCan't you see I'm busy?\n$"

LaprasDialog_Text_0:
# 360 "data/maps/daycarebase/scripts.pory"
	.string "Lapras$"

LaprasDialog_Text_1:
# 362 "data/maps/daycarebase/scripts.pory"
	.string "I love the Daycare!\pIt's so peaceful and quiet here.\pI can just float around all day\nand relax.\pThose waterfalls are pretty\nvicious, I won't go near them.\pI've heard that Dragonair can\neasily scale even the largest\lof waterfalls!$"

LinooneDialog_Text_0:
# 374 "data/maps/daycarebase/scripts.pory"
	.string "Linoone$"

LinooneDialog_Text_1:
# 376 "data/maps/daycarebase/scripts.pory"
	.string "The Daycare is huge!\pIt's a bit scary to expore,\nso I stay up here.\pRiolu is way more brave than I\nam and has explored the entirety\lof the Daycare.\pYou should talk with Riolu if\nyou get lost!\pI'm sure they can help!\n$"

LinooneDialog_Text_2:
# 388 "data/maps/daycarebase/scripts.pory"
	.string "Those Dittos really freak me out.\pThey could be any one of use right\nnow...\pEven you!... or me!\n$"

BulbsaurDialog_Text_0:
# 399 "data/maps/daycarebase/scripts.pory"
	.string "Bulbasaur$"

BulbsaurDialog_Text_1:
# 401 "data/maps/daycarebase/scripts.pory"
	.string "You want to know where Eggs\ncome from?\pI heard that a Pokémon needs\nto go on a great adventure to\lmeet a shapeshifting Pokémon.\pIf you can best them, they will\ngive you an egg!\pAt least, that's what Venusaur\ntold me...$"

CombeeDialog_Text_0:
# 411 "data/maps/daycarebase/scripts.pory"
	.string "Combee$"

CombeeDialog_Text_1:
# 413 "data/maps/daycarebase/scripts.pory"
	.string "I've been in this Daycare\nfor ages!\pI've flown all around and\npollenated so many flowers\lbut I still haven't gained a\lsingle level.\pI'm beginning to believe gaining\nEXP here is nothing more\lthan a big ole myth!$"

Porygon2Dialog_Text_0:
# 423 "data/maps/daycarebase/scripts.pory"
	.string "Porygon2$"

Porygon2Dialog_Text_1:
# 425 "data/maps/daycarebase/scripts.pory"
	.string "Another Ditto...\pI'm actually a Ditto too,\nI just prefer this look.\pThe Daycare population must be at\nleast 75 percent Dittos!\pMost Dittos will take on different\nforms.\pYou won't be able to transform\ninto a form that another Ditto has\ltaken on though.$"

ScytherDialog_Text_0:
# 435 "data/maps/daycarebase/scripts.pory"
	.string "Scyther$"

ScytherDialog_Text_1:
# 437 "data/maps/daycarebase/scripts.pory"
	.string "One in every fifty Dittos that I\nsee here are blue.\pMust be all those shiny hunters\ntrying to capitalize on Gen 2\lmechanics.\pWhen will they learn that this is\nGen3...$"

RioluDialog_Text_0:
# 451 "data/maps/daycarebase/scripts.pory"
	.string "Riolu$"

RioluDialog_Text_1:
# 453 "data/maps/daycarebase/scripts.pory"
	.string "Back with a Lucky Egg?\n$"

RioluDialog_Text_2:
# 459 "data/maps/daycarebase/scripts.pory"
	.string "Great!\pI can tell about the habitat and\nability of a Pokémon in the Daycare.$"

RioluDialog_Text_3:
# 461 "data/maps/daycarebase/scripts.pory"
	.string "Would you like to exchange a\nLucky Egg?$"

RioluDialog_Text_4:
# 465 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine$"

RioluDialog_Text_5:
# 465 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou$"

RioluDialog_Text_6:
# 465 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly$"

RioluDialog_Text_7:
# 465 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair$"

RioluDialog_Text_8:
# 465 "data/maps/daycarebase/scripts.pory"
	.string "Marill$"

RioluDialog_Text_9:
# 465 "data/maps/daycarebase/scripts.pory"
	.string "Machamp$"

RioluDialog_Text_10:
# 465 "data/maps/daycarebase/scripts.pory"
	.string "Noivern$"

RioluDialog_Text_11:
# 465 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn$"

RioluDialog_Text_12:
# 465 "data/maps/daycarebase/scripts.pory"
	.string "Lurantis$"

RioluDialog_Text_13:
# 465 "data/maps/daycarebase/scripts.pory"
	.string "Weavile$"

RioluDialog_Text_14:
# 469 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine can be found deep in the\nVolcano.\pIt can run really fast and scale\nhills that would normally be to\lslippery to climb!$"

RioluDialog_Text_15:
# 478 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou can be found in a cave\non the water in the desert.\pIt can dive deep underwater.\n$"

RioluDialog_Text_16:
# 487 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly can be found in the\nDaycare's flowers to the west.\pIt's a tiny Pokémon that can\nfit through small openings.$"

RioluDialog_Text_17:
# 496 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair can be found at the lake.\pIt can be a bit cryptic so it\nmay be difficult to reach.\pIt can scale large waterfalls\nwith ease.$"

RioluDialog_Text_18:
# 505 "data/maps/daycarebase/scripts.pory"
	.string "Marill can be found at the lake,\nusually by the shore.\pIt's a bit shy so it may be hiding.\pIt can float in any body of water.\n$"

RioluDialog_Text_19:
# 514 "data/maps/daycarebase/scripts.pory"
	.string "Machamp likes to train deep in\nthe mountains.\pIt is a very tough and solitary\nPokémon.\pIts strength can move large\nboulders.$"

RioluDialog_Text_20:
# 523 "data/maps/daycarebase/scripts.pory"
	.string "Noivern hangs out in a dark\ncave above the Daycare Falls.\pIt's quite a powerful Pokémon,\nso be prepared for a fight.\pIt can soar through the air,\nreaching places unreachable by\lnon_flying types.$"

RioluDialog_Text_21:
# 532 "data/maps/daycarebase/scripts.pory"
	.string "Pikachu is standing on that cliff\nright over there.\pIts electricity can light up even\nthe darkest of caves.$"

RioluDialog_Text_22:
# 541 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn lives in the desert.\pIt's quite a friendly Pokémon,\nbut don't upset it!\pIt is strong enough to smash\nsolid rocks!$"

RioluDialog_Text_23:
# 550 "data/maps/daycarebase/scripts.pory"
	.string "Lurantis has been spending time\nacross the water in the mountains.\pIts sharp limbs can cut through\nsmall trees.$"

RioluDialog_Text_24:
# 559 "data/maps/daycarebase/scripts.pory"
	.string "Weavile is quite the ninja.\pIt spends time in the tall trees\nin the jungle.\pIt demands a fierce challenger\nto battle it.\pIts agility allows it to cross\neven the smallest of walkways.$"

RioluDialog_Text_25:
# 569 "data/maps/daycarebase/scripts.pory"
	.string "Oh.\pWhat else are you gonna do\nwith that egg?$"

RioluDialog_Text_26:
# 580 "data/maps/daycarebase/scripts.pory"
	.string "No?\nCome back when you do!$"

RioluDialog_Text_27:
# 592 "data/maps/daycarebase/scripts.pory"
	.string "Hiya!\pI'm Riolu!\pI've visited every biome the\nDaycare has to offer.\lI know it like the back of my paw!\pIf you need guidance on where a\ncertain Pokémon might be,\lI'm your Pokémon!\pAlthough I won't do it for free...\pBring me Lucky Eggs, and I'll tell\nyou what I know.$"

BattleVsPikachu_Text_0:
# 610 "data/maps/daycarebase/scripts.pory"
	.string "You really lit me up.\pBest of luck on your journey!\n$"

BattleVsPikachu_Text_1:
# 625 "data/maps/daycarebase/scripts.pory"
	.string "A Ditto!\pYou must be on your quest to obtain\nyour egg.\pDefeat me in battle and I'll allow\nyou to transform into me!$"

BattleVsPikachu_Text_2:
# 638 "data/maps/daycarebase/scripts.pory"
	.string "You have gained the ability to\ntransform into Pikachu!$"

BattleVsPikachu_Text_3:
# 644 "data/maps/daycarebase/scripts.pory"
	.string "How electrifying!\pElectric_type moves are powerful\nagainst Water_type Pokémon.\pThey typically spend their time in\nthe Lake Biome here.$"

ChanseyHeal_Text_0:
# 656 "data/maps/daycarebase/scripts.pory"
	.string "Chansey$"

ChanseyHeal_Text_1:
# 658 "data/maps/daycarebase/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.$"

ChanseyHeal_Text_2:
# 660 "data/maps/daycarebase/scripts.pory"
	.string "Would you like to heal?$"

ChanseyHeal_Text_3:
# 674 "data/maps/daycarebase/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyHeal_Text_4:
# 683 "data/maps/daycarebase/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyHeal_Text_5:
# 693 "data/maps/daycarebase/scripts.pory"
	.string "Oh, okay then.$"

DaycareBase_Ditto_Text_0:
# 709 "data/maps/daycarebase/scripts.pory"
	.string "Ditto$"

DaycareBase_Ditto_Text_1:
# 710 "data/maps/daycarebase/scripts.pory"
	.string "Would you like to change out your\ntransformation options?$"

DaycareBase_Ditto_Text_2:
# 723 "data/maps/daycarebase/scripts.pory"
	.string "Come back anytime!$"

DaycareBase_Ditto_Text_3:
# 735 "data/maps/daycarebase/scripts.pory"
	.string "Ditto!\pYou can only remember four\ntransformations at a time.\pWe Dittos can act as a way to\nswap out which transformations\lyou have active at anytime!\pYou'll find us scattered around\nthe Daycare.\pNow...\n$"

DaycareBase_Ditto_Text_4:
# 766 "data/maps/daycarebase/scripts.pory"
	.string "Hello there fellow Ditto!\pDaycare Man asked you to get an Egg\nfor him, did he?\pWell, you're about to learn the\nthe secret of how we Dittos are\lalways found holding Eggs.\pIt'll be quite the adventure!\pDon't forget, you are a Ditto,\nso you can transform into any\lPokémon you defeat in battle!\pThis does only apply to Pokémon\nwho are not already using\lTransform...\pPress the {SELECT_BUTTON} button to\nopen your transformation menu.\pIf you open your Transformation\nParty, you'll see which Pokémon\lyou can transform into!$"
