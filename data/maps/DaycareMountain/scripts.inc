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
	msgbox BattleVsLurantis_Text_2, MSGBOX_AUTOCLOSE
# 100 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_LURANTIS, 25
# 101 "data/maps/DaycareMountain/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 102 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 103 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 104 "data/maps/DaycareMountain/scripts.pory"
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
# 106 "data/maps/DaycareMountain/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 107 "data/maps/DaycareMountain/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 108 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_TRANS_LURANTIS
# 109 "data/maps/DaycareMountain/scripts.pory"
	dittotransform SPECIES_LURANTIS
# 110 "data/maps/DaycareMountain/scripts.pory"
	playse MUS_LEVEL_UP
# 111 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_3, MSGBOX_DEFAULT
# 112 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 113 "data/maps/DaycareMountain/scripts.pory"
	dittotransform VAR_TEMP_0
# 114 "data/maps/DaycareMountain/scripts.pory"
	givemon SPECIES_LURANTIS, 25, move1 = MOVE_AERIAL_ACE, move2 = MOVE_BUG_BITE, move3 = MOVE_TRAILBLAZE, move4 = MOVE_CUT
# 115 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 116 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_4, MSGBOX_DEFAULT
# 117 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 118 "data/maps/DaycareMountain/scripts.pory"
	fadenewbgm MUS_PMD_MOUNTAIN
# 119 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCave::
# 125 "data/maps/DaycareMountain/scripts.pory"
	lock
# 127 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_OMANYTE_BATTLE, OmanyteInCave_1
# 138 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, BattleVsLurantis_Movement_0
# 139 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 140 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 141 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 142 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 143 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 144 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 145 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 146 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 147 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 148 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 149 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCave_4
	return

OmanyteInCave_1:
# 129 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 130 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 131 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 132 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 133 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCave_4:
# 151 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 152 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 153 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 154 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 155 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCaveTrigger::
# 162 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_OMANYTE_BATTLE, OmanyteInCaveTrigger_1
	return

OmanyteInCaveTrigger_1:
# 164 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 165 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 166 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 167 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 168 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 169 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_2
# 171 "data/maps/DaycareMountain/scripts.pory"
	case 34, OmanyteInCaveTrigger_4
# 189 "data/maps/DaycareMountain/scripts.pory"
	case 33, OmanyteInCaveTrigger_5
	return

OmanyteInCaveTrigger_4:
# 172 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 173 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, OmanyteInCaveTrigger_Movement_1
# 174 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 175 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 176 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 177 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 178 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 179 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 180 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_6
	return

OmanyteInCaveTrigger_5:
# 190 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 191 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 192 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 193 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 194 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 195 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 196 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_8
	return

OmanyteInCaveTrigger_6:
# 182 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 183 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 184 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 185 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 186 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCaveTrigger_8:
# 198 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 199 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 200 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 201 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 202 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCave::
# 210 "data/maps/DaycareMountain/scripts.pory"
	lock
# 212 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_KABUTO_BATTLE, KabutoInCave_1
# 223 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, BattleVsLurantis_Movement_0
# 224 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 225 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 226 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 227 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 228 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 229 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 230 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 231 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 232 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 233 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 234 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCave_4
	return

KabutoInCave_1:
# 214 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 215 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 216 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_1, MSGBOX_DEFAULT
# 217 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 218 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCave_4:
# 236 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 237 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 238 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 239 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 240 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCaveTrigger::
# 248 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_KABUTO_BATTLE, KabutoInCaveTrigger_1
	return

KabutoInCaveTrigger_1:
# 250 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 251 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 252 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 253 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 254 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 255 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_1
# 257 "data/maps/DaycareMountain/scripts.pory"
	case 8, KabutoInCaveTrigger_4
# 273 "data/maps/DaycareMountain/scripts.pory"
	case 9, KabutoInCaveTrigger_5
	return

KabutoInCaveTrigger_4:
# 258 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 259 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 260 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 261 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 262 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 263 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 264 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_6
	return

KabutoInCaveTrigger_5:
# 274 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 275 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, KabutoInCaveTrigger_Movement_1
# 276 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 277 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 278 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 279 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 280 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 281 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 282 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_8
	return

KabutoInCaveTrigger_6:
# 266 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 267 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 268 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 269 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 270 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCaveTrigger_8:
# 284 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 285 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 286 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 287 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 288 "data/maps/DaycareMountain/scripts.pory"
	release
	end


VullabyAfterSoar::
# 296 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_SOAR_ACROSS, VullabyAfterSoar_1
	end

VullabyAfterSoar_1:
# 298 "data/maps/DaycareMountain/scripts.pory"
	lock
# 299 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SHOW_NOICE
# 300 "data/maps/DaycareMountain/scripts.pory"
	special SpawnCameraObject
# 301 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_0
# 302 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 303 "data/maps/DaycareMountain/scripts.pory"
	delay 30
# 304 "data/maps/DaycareMountain/scripts.pory"
	applymovement Vullaby, OmanyteInCaveTrigger_Movement_0
# 305 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Vullaby
# 306 "data/maps/DaycareMountain/scripts.pory"
	playse SE_PIN
# 307 "data/maps/DaycareMountain/scripts.pory"
	applymovement Vullaby, Common_Movement_ExclamationMark
# 308 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Vullaby
# 309 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 310 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyAfterSoar_Text_0, MSGBOX_AUTOCLOSE
# 311 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_1
# 312 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 313 "data/maps/DaycareMountain/scripts.pory"
	special RemoveCameraObject
# 314 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SOAR_ACROSS
# 315 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 316 "data/maps/DaycareMountain/scripts.pory"
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

# 172 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_0:
# 172 "data/maps/DaycareMountain/scripts.pory"
	face_up
	step_end

# 173 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_1:
# 173 "data/maps/DaycareMountain/scripts.pory"
	walk_down
	step_end

# 258 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_0:
# 258 "data/maps/DaycareMountain/scripts.pory"
	face_left
	step_end

# 275 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_1:
# 275 "data/maps/DaycareMountain/scripts.pory"
	walk_right
	step_end

# 301 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_0:
# 301 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 301 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 301 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 301 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 301 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 301 "data/maps/DaycareMountain/scripts.pory"
	walk_down
	step_end

# 311 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_1:
# 311 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 311 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 311 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 311 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 311 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 311 "data/maps/DaycareMountain/scripts.pory"
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
# 99 "data/maps/DaycareMountain/scripts.pory"
	.string "You're out seeking your Egg...\nare you not?\pEvery Ditto comes here in search\nif the Mythical Egg.\pProve your strength to me.\nMy sharp raptorial arms may come\lin handy.$"

BattleVsLurantis_Text_3:
# 111 "data/maps/DaycareMountain/scripts.pory"
	.string "You have gained the ability to\ntransform into Lurantis!$"

BattleVsLurantis_Text_4:
# 116 "data/maps/DaycareMountain/scripts.pory"
	.string "You are a sharp one!\pUse my abilities to your\nadvantage.\pThe journey ahead is no walk in the\ndaycare.$"

OmanyteInCave_Text_0:
# 130 "data/maps/DaycareMountain/scripts.pory"
	.string "Omanyte$"

OmanyteInCave_Text_1:
# 131 "data/maps/DaycareMountain/scripts.pory"
	.string "Fine.\nYou've earned your stay.$"

OmanyteInCave_Text_2:
# 145 "data/maps/DaycareMountain/scripts.pory"
	.string "You're no fossil!\n$"

KabutoInCave_Text_0:
# 215 "data/maps/DaycareMountain/scripts.pory"
	.string "Kabuto$"

KabutoInCave_Text_1:
# 216 "data/maps/DaycareMountain/scripts.pory"
	.string "It was only the two of us\nanyways...$"

KabutoInCave_Text_2:
# 230 "data/maps/DaycareMountain/scripts.pory"
	.string "Fossils only!\n$"

KabutoInCave_Text_3:
# 237 "data/maps/DaycareMountain/scripts.pory"
	.string "Alright.\nWe can make an exception.$"

VullabyAfterSoar_Text_0:
# 310 "data/maps/DaycareMountain/scripts.pory"
	.string "Wow!\pYou made it across!\pTransforming into Noivern was\nclever!$"
