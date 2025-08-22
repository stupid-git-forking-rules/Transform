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
	waitmessage
# 115 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCave::
# 121 "data/maps/DaycareMountain/scripts.pory"
	lock
# 123 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_OMANYTE_BATTLE, OmanyteInCave_1
# 134 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, BattleVsLurantis_Movement_0
# 135 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 136 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 137 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 138 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 139 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 140 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 141 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 142 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 143 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 144 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 145 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCave_4
	return

OmanyteInCave_1:
# 125 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 126 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 127 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 128 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 129 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCave_4:
# 147 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 148 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 149 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 150 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 151 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCaveTrigger::
# 158 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_OMANYTE_BATTLE, OmanyteInCaveTrigger_1
	return

OmanyteInCaveTrigger_1:
# 160 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 161 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 162 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 163 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 164 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 165 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_2
# 167 "data/maps/DaycareMountain/scripts.pory"
	case 34, OmanyteInCaveTrigger_4
# 185 "data/maps/DaycareMountain/scripts.pory"
	case 33, OmanyteInCaveTrigger_5
	return

OmanyteInCaveTrigger_4:
# 168 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 169 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, OmanyteInCaveTrigger_Movement_1
# 170 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 171 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 172 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 173 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 174 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 175 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 176 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_6
	return

OmanyteInCaveTrigger_5:
# 186 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 187 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 188 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 189 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 190 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 191 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 192 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_8
	return

OmanyteInCaveTrigger_6:
# 178 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 179 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 180 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 181 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 182 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCaveTrigger_8:
# 194 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 195 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 196 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 197 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 198 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCave::
# 206 "data/maps/DaycareMountain/scripts.pory"
	lock
# 208 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_KABUTO_BATTLE, KabutoInCave_1
# 219 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, BattleVsLurantis_Movement_0
# 220 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 221 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 222 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 223 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 224 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 225 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 226 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 227 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 228 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 229 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 230 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCave_4
	return

KabutoInCave_1:
# 210 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 211 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 212 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_1, MSGBOX_DEFAULT
# 213 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 214 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCave_4:
# 232 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 233 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 234 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 235 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 236 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCaveTrigger::
# 244 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_KABUTO_BATTLE, KabutoInCaveTrigger_1
	return

KabutoInCaveTrigger_1:
# 246 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 247 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 248 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 249 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 250 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 251 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_1
# 253 "data/maps/DaycareMountain/scripts.pory"
	case 8, KabutoInCaveTrigger_4
# 269 "data/maps/DaycareMountain/scripts.pory"
	case 9, KabutoInCaveTrigger_5
	return

KabutoInCaveTrigger_4:
# 254 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 255 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 256 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 257 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 258 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 259 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 260 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_6
	return

KabutoInCaveTrigger_5:
# 270 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 271 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, KabutoInCaveTrigger_Movement_1
# 272 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 273 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 274 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 275 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 276 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 277 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_8
	return

KabutoInCaveTrigger_6:
# 262 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 263 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 264 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 265 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 266 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCaveTrigger_8:
# 279 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 280 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 281 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 282 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 283 "data/maps/DaycareMountain/scripts.pory"
	release
	end


VullabyAfterSoar::
# 291 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_SOAR_ACROSS, VullabyAfterSoar_1
	end

VullabyAfterSoar_1:
# 293 "data/maps/DaycareMountain/scripts.pory"
	lock
# 294 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SHOW_NOICE
# 295 "data/maps/DaycareMountain/scripts.pory"
	special SpawnCameraObject
# 296 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_0
# 297 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 298 "data/maps/DaycareMountain/scripts.pory"
	delay 30
# 299 "data/maps/DaycareMountain/scripts.pory"
	applymovement Vullaby, OmanyteInCaveTrigger_Movement_0
# 300 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Vullaby
# 301 "data/maps/DaycareMountain/scripts.pory"
	playse SE_PIN
# 302 "data/maps/DaycareMountain/scripts.pory"
	applymovement Vullaby, Common_Movement_ExclamationMark
# 303 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Vullaby
# 304 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 305 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyAfterSoar_Text_0, MSGBOX_AUTOCLOSE
# 306 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_1
# 307 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 308 "data/maps/DaycareMountain/scripts.pory"
	special RemoveCameraObject
# 309 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SOAR_ACROSS
# 310 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 311 "data/maps/DaycareMountain/scripts.pory"
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

# 168 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_0:
# 168 "data/maps/DaycareMountain/scripts.pory"
	face_up
	step_end

# 169 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_1:
# 169 "data/maps/DaycareMountain/scripts.pory"
	walk_down
	step_end

# 254 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_0:
# 254 "data/maps/DaycareMountain/scripts.pory"
	face_left
	step_end

# 271 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_1:
# 271 "data/maps/DaycareMountain/scripts.pory"
	walk_right
	step_end

# 296 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_0:
# 296 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 296 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 296 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 296 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 296 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 296 "data/maps/DaycareMountain/scripts.pory"
	walk_down
	step_end

# 306 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_1:
# 306 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 306 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 306 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 306 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 306 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 306 "data/maps/DaycareMountain/scripts.pory"
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
	.string "You're out seeking your Egg...\nare you not?\pEvery Ditto comes here in search\nif the mythical Egg.\pProve your strength to me.\nMy sharp raptorial arms may come\lin handy.$"

BattleVsLurantis_Text_3:
# 110 "data/maps/DaycareMountain/scripts.pory"
	.string "You have gained the ability to\ntransform into Lurantis!$"

OmanyteInCave_Text_0:
# 126 "data/maps/DaycareMountain/scripts.pory"
	.string "Omanyte$"

OmanyteInCave_Text_1:
# 127 "data/maps/DaycareMountain/scripts.pory"
	.string "Fine.\nYou've earned your stay.$"

OmanyteInCave_Text_2:
# 141 "data/maps/DaycareMountain/scripts.pory"
	.string "You're no fossil!\n$"

KabutoInCave_Text_0:
# 211 "data/maps/DaycareMountain/scripts.pory"
	.string "Kabuto$"

KabutoInCave_Text_1:
# 212 "data/maps/DaycareMountain/scripts.pory"
	.string "It was only the two of us\nanyways...$"

KabutoInCave_Text_2:
# 226 "data/maps/DaycareMountain/scripts.pory"
	.string "Fossils only!\n$"

KabutoInCave_Text_3:
# 233 "data/maps/DaycareMountain/scripts.pory"
	.string "Alright.\nWe can make an exception.$"

VullabyAfterSoar_Text_0:
# 305 "data/maps/DaycareMountain/scripts.pory"
	.string "Wow!\pYou made it across!\pTransforming into Noivern was\nclever!$"
