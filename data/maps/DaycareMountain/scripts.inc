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
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 107 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_TRANS_LURANTIS
# 108 "data/maps/DaycareMountain/scripts.pory"
	dittotransform SPECIES_LURANTIS
# 109 "data/maps/DaycareMountain/scripts.pory"
	playse MUS_LEVEL_UP
# 110 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_3, MSGBOX_DEFAULT
# 111 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 112 "data/maps/DaycareMountain/scripts.pory"
	dittotransform VAR_TEMP_0
# 113 "data/maps/DaycareMountain/scripts.pory"
	givemon SPECIES_LURANTIS, 25, move1 = MOVE_AERIAL_ACE, move2 = MOVE_BUG_BITE, move3 = MOVE_TRAILBLAZE, move4 = MOVE_CUT
# 114 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 115 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_4, MSGBOX_DEFAULT
# 116 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 117 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCave::
# 123 "data/maps/DaycareMountain/scripts.pory"
	lock
# 125 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_OMANYTE_BATTLE, OmanyteInCave_1
# 136 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, BattleVsLurantis_Movement_0
# 137 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 138 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 139 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 140 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 141 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 142 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 143 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 144 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 145 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 146 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 147 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCave_4
	return

OmanyteInCave_1:
# 127 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 128 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 129 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 130 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 131 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCave_4:
# 149 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 150 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 151 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 152 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 153 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCaveTrigger::
# 160 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_OMANYTE_BATTLE, OmanyteInCaveTrigger_1
	return

OmanyteInCaveTrigger_1:
# 162 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 163 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 164 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 165 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 166 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 167 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_2
# 169 "data/maps/DaycareMountain/scripts.pory"
	case 34, OmanyteInCaveTrigger_4
# 187 "data/maps/DaycareMountain/scripts.pory"
	case 33, OmanyteInCaveTrigger_5
	return

OmanyteInCaveTrigger_4:
# 170 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 171 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, OmanyteInCaveTrigger_Movement_1
# 172 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 173 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 174 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 175 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 176 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 177 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 178 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_6
	return

OmanyteInCaveTrigger_5:
# 188 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 189 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 190 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 191 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 192 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 193 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 194 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_8
	return

OmanyteInCaveTrigger_6:
# 180 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 181 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 182 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 183 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 184 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCaveTrigger_8:
# 196 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 197 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 198 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 199 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 200 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCave::
# 208 "data/maps/DaycareMountain/scripts.pory"
	lock
# 210 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_KABUTO_BATTLE, KabutoInCave_1
# 221 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, BattleVsLurantis_Movement_0
# 222 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 223 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 224 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 225 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 226 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 227 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 228 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 229 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 230 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 231 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 232 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCave_4
	return

KabutoInCave_1:
# 212 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 213 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 214 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_1, MSGBOX_DEFAULT
# 215 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 216 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCave_4:
# 234 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 235 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 236 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 237 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 238 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCaveTrigger::
# 246 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_KABUTO_BATTLE, KabutoInCaveTrigger_1
	return

KabutoInCaveTrigger_1:
# 248 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 249 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 250 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 251 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 252 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 253 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_1
# 255 "data/maps/DaycareMountain/scripts.pory"
	case 8, KabutoInCaveTrigger_4
# 271 "data/maps/DaycareMountain/scripts.pory"
	case 9, KabutoInCaveTrigger_5
	return

KabutoInCaveTrigger_4:
# 256 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 257 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 258 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 259 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 260 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 261 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 262 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_6
	return

KabutoInCaveTrigger_5:
# 272 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 273 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, KabutoInCaveTrigger_Movement_1
# 274 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 275 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 276 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 277 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 278 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 279 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 280 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_8
	return

KabutoInCaveTrigger_6:
# 264 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 265 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 266 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 267 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 268 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCaveTrigger_8:
# 282 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 283 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 284 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 285 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 286 "data/maps/DaycareMountain/scripts.pory"
	release
	end


VullabyAfterSoar::
# 294 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_SOAR_ACROSS, VullabyAfterSoar_1
	end

VullabyAfterSoar_1:
# 296 "data/maps/DaycareMountain/scripts.pory"
	lock
# 297 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SHOW_NOICE
# 298 "data/maps/DaycareMountain/scripts.pory"
	special SpawnCameraObject
# 299 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_0
# 300 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 301 "data/maps/DaycareMountain/scripts.pory"
	delay 30
# 302 "data/maps/DaycareMountain/scripts.pory"
	applymovement Vullaby, OmanyteInCaveTrigger_Movement_0
# 303 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Vullaby
# 304 "data/maps/DaycareMountain/scripts.pory"
	playse SE_PIN
# 305 "data/maps/DaycareMountain/scripts.pory"
	applymovement Vullaby, Common_Movement_ExclamationMark
# 306 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Vullaby
# 307 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 308 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyAfterSoar_Text_0, MSGBOX_AUTOCLOSE
# 309 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_1
# 310 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 311 "data/maps/DaycareMountain/scripts.pory"
	special RemoveCameraObject
# 312 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SOAR_ACROSS
# 313 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 314 "data/maps/DaycareMountain/scripts.pory"
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

# 170 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_0:
# 170 "data/maps/DaycareMountain/scripts.pory"
	face_up
	step_end

# 171 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_1:
# 171 "data/maps/DaycareMountain/scripts.pory"
	walk_down
	step_end

# 256 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_0:
# 256 "data/maps/DaycareMountain/scripts.pory"
	face_left
	step_end

# 273 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_1:
# 273 "data/maps/DaycareMountain/scripts.pory"
	walk_right
	step_end

# 299 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_0:
# 299 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 299 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 299 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 299 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 299 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 299 "data/maps/DaycareMountain/scripts.pory"
	walk_down
	step_end

# 309 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_1:
# 309 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 309 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 309 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 309 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 309 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 309 "data/maps/DaycareMountain/scripts.pory"
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
# 110 "data/maps/DaycareMountain/scripts.pory"
	.string "You have gained the ability to\ntransform into Lurantis!$"

BattleVsLurantis_Text_4:
# 115 "data/maps/DaycareMountain/scripts.pory"
	.string "You are a sharp one!\pUse my abilities to your\nadvantage.\pThe journey ahead is no walk in the\ndaycare.$"

OmanyteInCave_Text_0:
# 128 "data/maps/DaycareMountain/scripts.pory"
	.string "Omanyte$"

OmanyteInCave_Text_1:
# 129 "data/maps/DaycareMountain/scripts.pory"
	.string "Fine.\nYou've earned your stay.$"

OmanyteInCave_Text_2:
# 143 "data/maps/DaycareMountain/scripts.pory"
	.string "You're no fossil!\n$"

KabutoInCave_Text_0:
# 213 "data/maps/DaycareMountain/scripts.pory"
	.string "Kabuto$"

KabutoInCave_Text_1:
# 214 "data/maps/DaycareMountain/scripts.pory"
	.string "It was only the two of us\nanyways...$"

KabutoInCave_Text_2:
# 228 "data/maps/DaycareMountain/scripts.pory"
	.string "Fossils only!\n$"

KabutoInCave_Text_3:
# 235 "data/maps/DaycareMountain/scripts.pory"
	.string "Alright.\nWe can make an exception.$"

VullabyAfterSoar_Text_0:
# 308 "data/maps/DaycareMountain/scripts.pory"
	.string "Wow!\pYou made it across!\pTransforming into Noivern was\nclever!$"
