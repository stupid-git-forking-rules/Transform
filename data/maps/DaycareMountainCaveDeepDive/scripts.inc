DaycareMountainCaveDeepDive_MapScripts::
	.byte 0


GorebyssInCave::
# 4 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	lock
# 6 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	goto_if_set FLAG_GOREBYSS_BATTLE, GorebyssInCave_1
# 17 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Gorebyss, GorebyssInCave_Movement_0
# 18 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmovement Gorebyss
# 19 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	special PlayTrainerEncounterMusic
# 20 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Gorebyss, Common_Movement_ExclamationMark
# 21 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmovement Gorebyss
# 22 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 23 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_2, MSGBOX_AUTOCLOSE
# 24 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_GOREBYSS, 25
# 25 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 26 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 27 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GorebyssInCave_4
	return

GorebyssInCave_1:
# 8 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	faceplayer
# 9 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 10 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_1, MSGBOX_DEFAULT
# 11 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 12 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end

GorebyssInCave_4:
# 29 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 30 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_3, MSGBOX_DEFAULT
# 31 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_GOREBYSS_BATTLE
# 32 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 33 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end


GorebyssInCaveTrigger::
# 40 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	goto_if_unset FLAG_GOREBYSS_BATTLE, GorebyssInCaveTrigger_1
	return

GorebyssInCaveTrigger_1:
# 42 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	special PlayTrainerEncounterMusic
# 43 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Gorebyss, Common_Movement_ExclamationMark
# 44 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmovement
# 45 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	delay 40
# 46 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 47 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	switch VAR_TEMP_1
# 49 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 5, GorebyssInCaveTrigger_4
# 65 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 6, GorebyssInCaveTrigger_5
# 82 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 7, GorebyssInCaveTrigger_6
# 99 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 8, GorebyssInCaveTrigger_7
	return

GorebyssInCaveTrigger_4:
# 50 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, GorebyssInCaveTrigger_Movement_0
# 51 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 52 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_2, MSGBOX_AUTOCLOSE
# 53 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_GOREBYSS, 25
# 54 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 55 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 56 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GorebyssInCaveTrigger_8
	return

GorebyssInCaveTrigger_5:
# 66 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, GorebyssInCaveTrigger_Movement_0
# 67 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Gorebyss, GorebyssInCaveTrigger_Movement_1
# 68 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 69 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_2, MSGBOX_AUTOCLOSE
# 70 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_GOREBYSS, 25
# 71 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 72 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 73 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GorebyssInCaveTrigger_10
	return

GorebyssInCaveTrigger_6:
# 83 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, GorebyssInCaveTrigger_Movement_0
# 84 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Gorebyss, GorebyssInCaveTrigger_Movement_2
# 85 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 86 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_2, MSGBOX_AUTOCLOSE
# 87 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_GOREBYSS, 25
# 88 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 89 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 90 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GorebyssInCaveTrigger_12
	return

GorebyssInCaveTrigger_7:
# 100 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, GorebyssInCaveTrigger_Movement_0
# 101 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Gorebyss, GorebyssInCaveTrigger_Movement_3
# 102 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 103 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_2, MSGBOX_AUTOCLOSE
# 104 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_GOREBYSS, 25
# 105 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 106 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 107 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GorebyssInCaveTrigger_14
	return

GorebyssInCaveTrigger_8:
# 58 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 59 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_3, MSGBOX_DEFAULT
# 60 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_GOREBYSS_BATTLE
# 61 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 62 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end

GorebyssInCaveTrigger_10:
# 75 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 76 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_3, MSGBOX_DEFAULT
# 77 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_GOREBYSS_BATTLE
# 78 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 79 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end

GorebyssInCaveTrigger_12:
# 92 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 93 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_3, MSGBOX_DEFAULT
# 94 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_GOREBYSS_BATTLE
# 95 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 96 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end

GorebyssInCaveTrigger_14:
# 109 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 110 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_3, MSGBOX_DEFAULT
# 111 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_GOREBYSS_BATTLE
# 112 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 113 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end


HuntailInCave::
# 121 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	lock
# 122 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	faceplayer
# 123 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	goto_if_set FLAG_HUNTAIL_BATTLE, HuntailInCave_1
# 133 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Huntail, GorebyssInCave_Movement_0
# 134 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmovement Huntail
# 135 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	special PlayTrainerEncounterMusic
# 136 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Huntail, Common_Movement_ExclamationMark
# 137 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmovement Huntail
# 138 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 139 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_2, MSGBOX_AUTOCLOSE
# 140 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_HUNTAIL, 25
# 141 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 142 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 143 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HuntailInCave_4
	return

HuntailInCave_1:
# 125 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 126 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_1, MSGBOX_DEFAULT
# 127 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 128 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end

HuntailInCave_4:
# 145 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 146 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_3, MSGBOX_DEFAULT
# 147 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_HUNTAIL_BATTLE
# 148 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 149 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end


HuntailInCaveTrigger::
# 156 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	goto_if_unset FLAG_HUNTAIL_BATTLE, HuntailInCaveTrigger_1
	return

HuntailInCaveTrigger_1:
# 158 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	special PlayTrainerEncounterMusic
# 159 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Huntail, Common_Movement_ExclamationMark
# 160 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmovement
# 161 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	delay 40
# 162 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 163 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	switch VAR_TEMP_1
# 165 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 5, HuntailInCaveTrigger_4
# 181 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 6, HuntailInCaveTrigger_5
# 198 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 7, HuntailInCaveTrigger_6
# 215 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 8, HuntailInCaveTrigger_7
	return

HuntailInCaveTrigger_4:
# 166 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, HuntailInCaveTrigger_Movement_0
# 167 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 168 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_2, MSGBOX_AUTOCLOSE
# 169 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_HUNTAIL, 25
# 170 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 171 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 172 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HuntailInCaveTrigger_8
	return

HuntailInCaveTrigger_5:
# 182 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, HuntailInCaveTrigger_Movement_0
# 183 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Huntail, HuntailInCaveTrigger_Movement_1
# 184 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 185 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_2, MSGBOX_AUTOCLOSE
# 186 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_HUNTAIL, 25
# 187 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 188 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 189 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HuntailInCaveTrigger_10
	return

HuntailInCaveTrigger_6:
# 199 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, HuntailInCaveTrigger_Movement_0
# 200 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Huntail, HuntailInCaveTrigger_Movement_2
# 201 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 202 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_2, MSGBOX_AUTOCLOSE
# 203 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_HUNTAIL, 25
# 204 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 205 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 206 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HuntailInCaveTrigger_12
	return

HuntailInCaveTrigger_7:
# 216 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, HuntailInCaveTrigger_Movement_0
# 217 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Huntail, HuntailInCaveTrigger_Movement_3
# 218 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 219 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_2, MSGBOX_AUTOCLOSE
# 220 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_HUNTAIL, 25
# 221 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 222 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 223 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HuntailInCaveTrigger_14
	return

HuntailInCaveTrigger_8:
# 174 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 175 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_3, MSGBOX_DEFAULT
# 176 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_HUNTAIL_BATTLE
# 177 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 178 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end

HuntailInCaveTrigger_10:
# 191 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 192 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_3, MSGBOX_DEFAULT
# 193 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_HUNTAIL_BATTLE
# 194 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 195 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end

HuntailInCaveTrigger_12:
# 208 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 209 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_3, MSGBOX_DEFAULT
# 210 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_HUNTAIL_BATTLE
# 211 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 212 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end

HuntailInCaveTrigger_14:
# 225 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 226 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_3, MSGBOX_DEFAULT
# 227 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_HUNTAIL_BATTLE
# 228 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 229 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end


# 17 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
GorebyssInCave_Movement_0:
# 17 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	face_player
	step_end

# 50 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
GorebyssInCaveTrigger_Movement_0:
# 50 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	face_left
	step_end

# 67 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
GorebyssInCaveTrigger_Movement_1:
# 67 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_right
	step_end

# 84 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
GorebyssInCaveTrigger_Movement_2:
# 84 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_right
# 84 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_right
	step_end

# 101 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
GorebyssInCaveTrigger_Movement_3:
# 101 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_right
# 101 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_right
# 101 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_right
	step_end

# 166 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
HuntailInCaveTrigger_Movement_0:
# 166 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	face_right
	step_end

# 183 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
HuntailInCaveTrigger_Movement_1:
# 183 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_left
	step_end

# 200 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
HuntailInCaveTrigger_Movement_2:
# 200 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_left
# 200 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_left
	step_end

# 217 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
HuntailInCaveTrigger_Movement_3:
# 217 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_left
# 217 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_left
# 217 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_left
	step_end

GorebyssInCave_Text_0:
# 9 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "Gorebyss$"

GorebyssInCave_Text_1:
# 10 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "My brother Huntail doesnt care\nfor beauty.\pHe will attack you fiercely!\n$"

GorebyssInCave_Text_2:
# 23 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "You are glowing!\nShow me how you illuminate\lthe deep with a battle!$"

GorebyssInCave_Text_3:
# 30 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "You really are quite luminescent.\n$"

HuntailInCave_Text_0:
# 125 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "Huntail$"

HuntailInCave_Text_1:
# 126 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "Back into the dark...\nBut you swim well, little one.$"

HuntailInCave_Text_2:
# 139 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "There's no need for light here in\nthe depths!$"

HuntailInCave_Text_3:
# 146 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "Grr...\pI prefer the the seafloor to be\ndark.$"
