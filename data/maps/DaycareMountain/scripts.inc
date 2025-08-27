DaycareMountain_MapScripts::
	.byte 0


SoarFront::
# 6 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq SoarFront_1
	end

SoarFront_1:
# 8 "data/maps/DaycareMountain/scripts.pory"
	lock
# 9 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, SoarFront_Movement_0
# 10 "data/maps/DaycareMountain/scripts.pory"
	waitmovement LOCALID_PLAYER
# 11 "data/maps/DaycareMountain/scripts.pory"
	release
	end


SoarBack::
# 20 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq SoarBack_1
	end

SoarBack_1:
# 22 "data/maps/DaycareMountain/scripts.pory"
	lock
# 23 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, SoarBack_Movement_0
# 24 "data/maps/DaycareMountain/scripts.pory"
	waitmovement LOCALID_PLAYER
# 25 "data/maps/DaycareMountain/scripts.pory"
	release
	end


VullabyDialog::
# 35 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_SOAR_ACROSS, VullabyDialog_1
# 46 "data/maps/DaycareMountain/scripts.pory"
	lock
# 47 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 48 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 49 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyDialog_Text_2, MSGBOX_DEFAULT
# 50 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 51 "data/maps/DaycareMountain/scripts.pory"
	release
	end

VullabyDialog_1:
# 37 "data/maps/DaycareMountain/scripts.pory"
	lock
# 38 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 39 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 40 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyDialog_Text_1, MSGBOX_DEFAULT
# 41 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 42 "data/maps/DaycareMountain/scripts.pory"
	release
	end


NoibatDialog::
# 58 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq NoibatDialog_1
# 70 "data/maps/DaycareMountain/scripts.pory"
	lock
# 71 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 72 "data/maps/DaycareMountain/scripts.pory"
	speakername NoibatDialog_Text_0
# 73 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_2, MSGBOX_DEFAULT
# 74 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 75 "data/maps/DaycareMountain/scripts.pory"
	release
	end

NoibatDialog_1:
# 60 "data/maps/DaycareMountain/scripts.pory"
	lock
# 61 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 62 "data/maps/DaycareMountain/scripts.pory"
	speakername NoibatDialog_Text_0
# 63 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_1, MSGBOX_DEFAULT
# 64 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 65 "data/maps/DaycareMountain/scripts.pory"
	release
	end


BattleVsLurantis::
# 81 "data/maps/DaycareMountain/scripts.pory"
	lock
# 83 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_TRANS_LURANTIS, BattleVsLurantis_2
# 92 "data/maps/DaycareMountain/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 93 "data/maps/DaycareMountain/scripts.pory"
	applymovement Lurantis, BattleVsLurantis_Movement_0
# 94 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Lurantis
# 95 "data/maps/DaycareMountain/scripts.pory"
	playse SE_PIN
# 96 "data/maps/DaycareMountain/scripts.pory"
	applymovement Lurantis, Common_Movement_ExclamationMark
# 97 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Lurantis
# 98 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 99 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_LURANTIS, EMOTE_NORMAL
# 100 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_2, MSGBOX_AUTOCLOSE
# 101 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 102 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_LURANTIS, 25
# 103 "data/maps/DaycareMountain/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 104 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 105 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 106 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsLurantis_4
	return

BattleVsLurantis_2:
# 85 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 86 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 87 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_1, MSGBOX_DEFAULT
# 88 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 89 "data/maps/DaycareMountain/scripts.pory"
	release
	end

BattleVsLurantis_4:
# 108 "data/maps/DaycareMountain/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 109 "data/maps/DaycareMountain/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 110 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_TRANS_LURANTIS
# 111 "data/maps/DaycareMountain/scripts.pory"
	dittotransform SPECIES_LURANTIS
# 112 "data/maps/DaycareMountain/scripts.pory"
	playse MUS_LEVEL_UP
# 113 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_3, MSGBOX_DEFAULT
# 114 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 115 "data/maps/DaycareMountain/scripts.pory"
	dittotransform VAR_TEMP_0
# 116 "data/maps/DaycareMountain/scripts.pory"
	givemon SPECIES_LURANTIS, 25, move1 = MOVE_AERIAL_ACE, move2 = MOVE_BUG_BITE, move3 = MOVE_TRAILBLAZE, move4 = MOVE_CUT
# 117 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 118 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_LURANTIS, EMOTE_HAPPY
# 119 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_4, MSGBOX_DEFAULT
# 120 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 121 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 122 "data/maps/DaycareMountain/scripts.pory"
	fadenewbgm MUS_PMD_MOUNTAIN
# 123 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCave::
# 129 "data/maps/DaycareMountain/scripts.pory"
	lock
# 131 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_OMANYTE_BATTLE, OmanyteInCave_1
# 142 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, BattleVsLurantis_Movement_0
# 143 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 144 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 145 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 146 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 147 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 148 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 149 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 150 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 151 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 152 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 153 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCave_4
	return

OmanyteInCave_1:
# 133 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 134 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 135 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 136 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 137 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCave_4:
# 155 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 156 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 157 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 158 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 159 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCaveTrigger::
# 166 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_OMANYTE_BATTLE, OmanyteInCaveTrigger_1
	return

OmanyteInCaveTrigger_1:
# 168 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 169 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 170 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 171 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 172 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 173 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_2
# 175 "data/maps/DaycareMountain/scripts.pory"
	case 34, OmanyteInCaveTrigger_4
# 193 "data/maps/DaycareMountain/scripts.pory"
	case 33, OmanyteInCaveTrigger_5
	return

OmanyteInCaveTrigger_4:
# 176 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 177 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, OmanyteInCaveTrigger_Movement_1
# 178 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 179 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 180 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 181 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 182 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 183 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 184 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_6
	return

OmanyteInCaveTrigger_5:
# 194 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 195 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 196 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 197 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 198 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 199 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 200 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_8
	return

OmanyteInCaveTrigger_6:
# 186 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 187 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 188 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 189 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 190 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCaveTrigger_8:
# 202 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 203 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 204 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 205 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 206 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCave::
# 214 "data/maps/DaycareMountain/scripts.pory"
	lock
# 216 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_KABUTO_BATTLE, KabutoInCave_1
# 227 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, BattleVsLurantis_Movement_0
# 228 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 229 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 230 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 231 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 232 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 233 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 234 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 235 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 236 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 237 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 238 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCave_4
	return

KabutoInCave_1:
# 218 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 219 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 220 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_1, MSGBOX_DEFAULT
# 221 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 222 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCave_4:
# 240 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 241 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 242 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 243 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 244 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCaveTrigger::
# 252 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_KABUTO_BATTLE, KabutoInCaveTrigger_1
	return

KabutoInCaveTrigger_1:
# 254 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 255 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 256 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 257 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 258 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 259 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_1
# 261 "data/maps/DaycareMountain/scripts.pory"
	case 8, KabutoInCaveTrigger_4
# 277 "data/maps/DaycareMountain/scripts.pory"
	case 9, KabutoInCaveTrigger_5
	return

KabutoInCaveTrigger_4:
# 262 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 263 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 264 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 265 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 266 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 267 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 268 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_6
	return

KabutoInCaveTrigger_5:
# 278 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 279 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, KabutoInCaveTrigger_Movement_1
# 280 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 281 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 282 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 283 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 284 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 285 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 286 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_8
	return

KabutoInCaveTrigger_6:
# 270 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 271 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 272 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 273 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 274 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCaveTrigger_8:
# 288 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 289 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 290 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 291 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 292 "data/maps/DaycareMountain/scripts.pory"
	release
	end


VullabyAfterSoar::
# 300 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_SOAR_ACROSS, VullabyAfterSoar_1
	end

VullabyAfterSoar_1:
# 302 "data/maps/DaycareMountain/scripts.pory"
	lock
# 303 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SHOW_NOICE
# 304 "data/maps/DaycareMountain/scripts.pory"
	special SpawnCameraObject
# 305 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_0
# 306 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 307 "data/maps/DaycareMountain/scripts.pory"
	delay 30
# 308 "data/maps/DaycareMountain/scripts.pory"
	applymovement Vullaby, OmanyteInCaveTrigger_Movement_0
# 309 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Vullaby
# 310 "data/maps/DaycareMountain/scripts.pory"
	playse SE_PIN
# 311 "data/maps/DaycareMountain/scripts.pory"
	applymovement Vullaby, Common_Movement_ExclamationMark
# 312 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Vullaby
# 313 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 314 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyAfterSoar_Text_0, MSGBOX_AUTOCLOSE
# 315 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_1
# 316 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 317 "data/maps/DaycareMountain/scripts.pory"
	special RemoveCameraObject
# 318 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SOAR_ACROSS
# 319 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 320 "data/maps/DaycareMountain/scripts.pory"
	release
	end


# 9 "data/maps/DaycareMountain/scripts.pory"
SoarFront_Movement_0:
# 9 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 9 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 9 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 9 "data/maps/DaycareMountain/scripts.pory"
	walk_up
	step_end

# 23 "data/maps/DaycareMountain/scripts.pory"
SoarBack_Movement_0:
# 23 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 23 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 23 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 23 "data/maps/DaycareMountain/scripts.pory"
	walk_down
	step_end

# 93 "data/maps/DaycareMountain/scripts.pory"
BattleVsLurantis_Movement_0:
# 93 "data/maps/DaycareMountain/scripts.pory"
	face_player
	step_end

# 176 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_0:
# 176 "data/maps/DaycareMountain/scripts.pory"
	face_up
	step_end

# 177 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_1:
# 177 "data/maps/DaycareMountain/scripts.pory"
	walk_down
	step_end

# 262 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_0:
# 262 "data/maps/DaycareMountain/scripts.pory"
	face_left
	step_end

# 279 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_1:
# 279 "data/maps/DaycareMountain/scripts.pory"
	walk_right
	step_end

# 305 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_0:
# 305 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 305 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 305 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 305 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 305 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 305 "data/maps/DaycareMountain/scripts.pory"
	walk_down
	step_end

# 315 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_1:
# 315 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 315 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 315 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 315 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 315 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 315 "data/maps/DaycareMountain/scripts.pory"
	walk_up
	step_end

VullabyDialog_Text_0:
# 39 "data/maps/DaycareMountain/scripts.pory"
	.string "Vullaby$"

VullabyDialog_Text_1:
# 40 "data/maps/DaycareMountain/scripts.pory"
	.string "I wish I had stronger wings...\pThen I'd just fly right over the\nbroken bridge!$"

VullabyDialog_Text_2:
# 49 "data/maps/DaycareMountain/scripts.pory"
	.string "I wish I could transform like you.\pI would change into a giant eagle!\n$"

NoibatDialog_Text_0:
# 62 "data/maps/DaycareMountain/scripts.pory"
	.string "Noibat$"

NoibatDialog_Text_1:
# 63 "data/maps/DaycareMountain/scripts.pory"
	.string "Big brother!\pOh, no. It's just another Ditto...\pThere's a cave up ahead.\pYou'll need my big bro's power\nto beat the Pokémon waiting deep\lwithin.$"

NoibatDialog_Text_2:
# 73 "data/maps/DaycareMountain/scripts.pory"
	.string "There's a cave up ahead.\pYou'll need my big bro's power\nto beat the Pokémon waiting deep\lwithin.$"

BattleVsLurantis_Text_0:
# 86 "data/maps/DaycareMountain/scripts.pory"
	.string "Lurantis$"

BattleVsLurantis_Text_1:
# 87 "data/maps/DaycareMountain/scripts.pory"
	.string "Haven't seen any small trees\naround?\pThey tend to grow on the top of\ncliffs with crashing waterfalls.$"

BattleVsLurantis_Text_2:
# 100 "data/maps/DaycareMountain/scripts.pory"
	.string "You're out seeking your Egg...\nare you not?\pEvery Ditto comes here in search\nif the Mythical Egg.\pProve your strength to me.\nMy sharp raptorial arms may come\lin handy.$"

BattleVsLurantis_Text_3:
# 113 "data/maps/DaycareMountain/scripts.pory"
	.string "You have gained the ability to\ntransform into Lurantis!$"

BattleVsLurantis_Text_4:
# 119 "data/maps/DaycareMountain/scripts.pory"
	.string "You are a sharp one!\pUse my abilities to your\nadvantage.\pThe journey ahead is no walk in the\ndaycare.$"

OmanyteInCave_Text_0:
# 134 "data/maps/DaycareMountain/scripts.pory"
	.string "Omanyte$"

OmanyteInCave_Text_1:
# 135 "data/maps/DaycareMountain/scripts.pory"
	.string "Fine.\nYou've earned your stay.$"

OmanyteInCave_Text_2:
# 149 "data/maps/DaycareMountain/scripts.pory"
	.string "You're no fossil!\n$"

KabutoInCave_Text_0:
# 219 "data/maps/DaycareMountain/scripts.pory"
	.string "Kabuto$"

KabutoInCave_Text_1:
# 220 "data/maps/DaycareMountain/scripts.pory"
	.string "It was only the two of us\nanyways...$"

KabutoInCave_Text_2:
# 234 "data/maps/DaycareMountain/scripts.pory"
	.string "Fossils only!\n$"

KabutoInCave_Text_3:
# 241 "data/maps/DaycareMountain/scripts.pory"
	.string "Alright.\nWe can make an exception.$"

VullabyAfterSoar_Text_0:
# 314 "data/maps/DaycareMountain/scripts.pory"
	.string "Wow!\pYou made it across!\pTransforming into Noivern was\nclever!$"
