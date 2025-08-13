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
	lock
# 59 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 60 "data/maps/DaycareMountain/scripts.pory"
	speakername NoibatDialog_Text_0
# 61 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_1, MSGBOX_DEFAULT
# 62 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 63 "data/maps/DaycareMountain/scripts.pory"
	release
	end


BattleVsLurantis::
# 68 "data/maps/DaycareMountain/scripts.pory"
	lock
# 70 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_TRANS_LURANTIS, BattleVsLurantis_2
# 80 "data/maps/DaycareMountain/scripts.pory"
	applymovement Lurantis, BattleVsLurantis_Movement_0
# 81 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Lurantis
# 82 "data/maps/DaycareMountain/scripts.pory"
	playse SE_PIN
# 83 "data/maps/DaycareMountain/scripts.pory"
	applymovement Lurantis, Common_Movement_ExclamationMark
# 84 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Lurantis
# 85 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 86 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_2, MSGBOX_AUTOCLOSE
# 87 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_LURANTIS, 25
# 88 "data/maps/DaycareMountain/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 89 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 90 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 91 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsLurantis_4
	return

BattleVsLurantis_2:
# 72 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 73 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 74 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_1, MSGBOX_DEFAULT
# 75 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 76 "data/maps/DaycareMountain/scripts.pory"
	release
	end

BattleVsLurantis_4:
# 93 "data/maps/DaycareMountain/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 94 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_TRANS_LURANTIS
# 95 "data/maps/DaycareMountain/scripts.pory"
	dittotransform SPECIES_LURANTIS
# 96 "data/maps/DaycareMountain/scripts.pory"
	playse MUS_LEVEL_UP
# 97 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_3, MSGBOX_DEFAULT
# 98 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 99 "data/maps/DaycareMountain/scripts.pory"
	dittotransform VAR_TEMP_0
# 100 "data/maps/DaycareMountain/scripts.pory"
	givemon SPECIES_LURANTIS, 25, move1 = MOVE_AERIAL_ACE, move2 = MOVE_BUG_BITE, move3 = MOVE_TRAILBLAZE, move4 = MOVE_CUT
# 101 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 102 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCave::
# 108 "data/maps/DaycareMountain/scripts.pory"
	lock
# 109 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 110 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_OMANYTE_BATTLE, OmanyteInCave_1
# 120 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 121 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 122 "data/maps/DaycareMountain/scripts.pory"
	waitmovement
# 123 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 124 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 125 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 126 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 127 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 128 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCave_4
	return

OmanyteInCave_1:
# 112 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 113 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 114 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 115 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCave_4:
# 130 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 131 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 132 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 133 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 134 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCaveTrigger::
# 141 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_OMANYTE_BATTLE, OmanyteInCaveTrigger_1
	return

OmanyteInCaveTrigger_1:
# 143 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 144 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 145 "data/maps/DaycareMountain/scripts.pory"
	waitmovement
# 146 "data/maps/DaycareMountain/scripts.pory"
	delay 40
# 147 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 148 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_2
# 150 "data/maps/DaycareMountain/scripts.pory"
	case 34, OmanyteInCaveTrigger_4
# 168 "data/maps/DaycareMountain/scripts.pory"
	case 33, OmanyteInCaveTrigger_5
	return

OmanyteInCaveTrigger_4:
# 151 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 152 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, OmanyteInCaveTrigger_Movement_1
# 153 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 154 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 155 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 156 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 157 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 158 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 159 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_6
	return

OmanyteInCaveTrigger_5:
# 169 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 170 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 171 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 172 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 173 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 174 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 175 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_8
	return

OmanyteInCaveTrigger_6:
# 161 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 162 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 163 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 164 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 165 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCaveTrigger_8:
# 177 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 178 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 179 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 180 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 181 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCave::
# 189 "data/maps/DaycareMountain/scripts.pory"
	lock
# 190 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 191 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_KABUTO_BATTLE, KabutoInCave_1
# 201 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 202 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 203 "data/maps/DaycareMountain/scripts.pory"
	waitmovement
# 204 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 205 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 206 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 207 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 208 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 209 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCave_4
	return

KabutoInCave_1:
# 193 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 194 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_1, MSGBOX_DEFAULT
# 195 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 196 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCave_4:
# 211 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 212 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 213 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 214 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 215 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCaveTrigger::
# 223 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_KABUTO_BATTLE, KabutoInCaveTrigger_1
	return

KabutoInCaveTrigger_1:
# 225 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 226 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 227 "data/maps/DaycareMountain/scripts.pory"
	waitmovement
# 228 "data/maps/DaycareMountain/scripts.pory"
	delay 40
# 229 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 230 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_1
# 232 "data/maps/DaycareMountain/scripts.pory"
	case 8, KabutoInCaveTrigger_4
# 248 "data/maps/DaycareMountain/scripts.pory"
	case 9, KabutoInCaveTrigger_5
	return

KabutoInCaveTrigger_4:
# 233 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 234 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 235 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 236 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 237 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 238 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 239 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_6
	return

KabutoInCaveTrigger_5:
# 249 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 250 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, KabutoInCaveTrigger_Movement_1
# 251 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 252 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 253 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 254 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 255 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 256 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_8
	return

KabutoInCaveTrigger_6:
# 241 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 242 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 243 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 244 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 245 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCaveTrigger_8:
# 258 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 259 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 260 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 261 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 262 "data/maps/DaycareMountain/scripts.pory"
	release
	end


VullabyAfterSoar::
# 270 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_SOAR_ACROSS, VullabyAfterSoar_1
	end

VullabyAfterSoar_1:
# 272 "data/maps/DaycareMountain/scripts.pory"
	lock
# 273 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SHOW_NOICE
# 274 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_0
# 275 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 276 "data/maps/DaycareMountain/scripts.pory"
	delay 30
# 277 "data/maps/DaycareMountain/scripts.pory"
	applymovement Vullaby, Common_Movement_ExclamationMark
# 278 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Vullaby
# 279 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 280 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyAfterSoar_Text_0, MSGBOX_DEFAULT
# 281 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_1
# 282 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 283 "data/maps/DaycareMountain/scripts.pory"
	special RemoveCameraObject
# 284 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SOAR_ACROSS
# 285 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 286 "data/maps/DaycareMountain/scripts.pory"
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

# 80 "data/maps/DaycareMountain/scripts.pory"
BattleVsLurantis_Movement_0:
# 80 "data/maps/DaycareMountain/scripts.pory"
	face_player
	step_end

# 151 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_0:
# 151 "data/maps/DaycareMountain/scripts.pory"
	face_up
	step_end

# 152 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_1:
# 152 "data/maps/DaycareMountain/scripts.pory"
	walk_down
	step_end

# 233 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_0:
# 233 "data/maps/DaycareMountain/scripts.pory"
	face_left
	step_end

# 250 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_1:
# 250 "data/maps/DaycareMountain/scripts.pory"
	walk_right
	step_end

# 274 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_0:
# 274 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 274 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 274 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 274 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 274 "data/maps/DaycareMountain/scripts.pory"
	walk_down
# 274 "data/maps/DaycareMountain/scripts.pory"
	walk_down
	step_end

# 281 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_1:
# 281 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 281 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 281 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 281 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 281 "data/maps/DaycareMountain/scripts.pory"
	walk_up
# 281 "data/maps/DaycareMountain/scripts.pory"
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
# 60 "data/maps/DaycareMountain/scripts.pory"
	.string "Noibat$"

NoibatDialog_Text_1:
# 61 "data/maps/DaycareMountain/scripts.pory"
	.string "Big brother!\pOh, no. It's just another Ditto...\pThere's a cave up ahead.\pYou'll need my big bro's power\nto beat the Pokémon waiting deep\lwithin.$"

BattleVsLurantis_Text_0:
# 73 "data/maps/DaycareMountain/scripts.pory"
	.string "Lurantis$"

BattleVsLurantis_Text_1:
# 74 "data/maps/DaycareMountain/scripts.pory"
	.string "Haven't seen any small trees\naround?\pThey tend to grow on the top of\ncliffs with crashing waterfalls.$"

BattleVsLurantis_Text_2:
# 86 "data/maps/DaycareMountain/scripts.pory"
	.string "You're out seeking your Egg...\nare you not?\pEvery Ditto comes here in search\nif the mythical Egg.\pProve your strength to me.\nMy sharp raptorial arms may come\lin handy.$"

BattleVsLurantis_Text_3:
# 97 "data/maps/DaycareMountain/scripts.pory"
	.string "You have gained the ability to\ntransform into Lurantis!$"

OmanyteInCave_Text_0:
# 112 "data/maps/DaycareMountain/scripts.pory"
	.string "Omanyte$"

OmanyteInCave_Text_1:
# 113 "data/maps/DaycareMountain/scripts.pory"
	.string "Fine.\nYou've earned your stay.$"

OmanyteInCave_Text_2:
# 124 "data/maps/DaycareMountain/scripts.pory"
	.string "You're no fossil!\n$"

KabutoInCave_Text_0:
# 193 "data/maps/DaycareMountain/scripts.pory"
	.string "Kabuto$"

KabutoInCave_Text_1:
# 194 "data/maps/DaycareMountain/scripts.pory"
	.string "It was only the two of us\nanyways...$"

KabutoInCave_Text_2:
# 205 "data/maps/DaycareMountain/scripts.pory"
	.string "Fossils only!\n$"

KabutoInCave_Text_3:
# 212 "data/maps/DaycareMountain/scripts.pory"
	.string "Alright.\nWe can make an exception.$"

VullabyAfterSoar_Text_0:
# 280 "data/maps/DaycareMountain/scripts.pory"
	.string "Wow!\pYou made it across!\pTransforming into Noivern was\nclever!$"
