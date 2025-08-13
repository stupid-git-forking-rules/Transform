DaycareMountainCaveDeepDive_MapScripts::
	.byte 0


GorebyssInCave::
# 4 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	lock
# 5 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	faceplayer
# 6 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	goto_if_set FLAG_GOREBYSS_BATTLE, GorebyssInCave_1
# 16 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	special PlayTrainerEncounterMusic
# 17 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Gorebyss, Common_Movement_ExclamationMark
# 18 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmovement
# 19 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 20 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_2, MSGBOX_AUTOCLOSE
# 21 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_GOREBYSS, 25
# 22 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 23 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 24 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GorebyssInCave_4
	return

GorebyssInCave_1:
# 8 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 9 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_1, MSGBOX_DEFAULT
# 10 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 11 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end

GorebyssInCave_4:
# 26 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 27 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_3, MSGBOX_DEFAULT
# 28 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_GOREBYSS_BATTLE
# 29 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 30 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end


GorebyssInCaveTrigger::
# 37 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	goto_if_unset FLAG_GOREBYSS_BATTLE, GorebyssInCaveTrigger_1
	return

GorebyssInCaveTrigger_1:
# 39 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	special PlayTrainerEncounterMusic
# 40 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Gorebyss, Common_Movement_ExclamationMark
# 41 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmovement
# 42 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	delay 40
# 43 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 44 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	switch VAR_TEMP_1
# 46 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 5, GorebyssInCaveTrigger_4
# 62 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 6, GorebyssInCaveTrigger_5
# 79 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 7, GorebyssInCaveTrigger_6
# 96 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 8, GorebyssInCaveTrigger_7
	return

GorebyssInCaveTrigger_4:
# 47 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, GorebyssInCaveTrigger_Movement_0
# 48 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 49 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_2, MSGBOX_AUTOCLOSE
# 50 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_GOREBYSS, 25
# 51 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 52 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 53 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GorebyssInCaveTrigger_8
	return

GorebyssInCaveTrigger_5:
# 63 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, GorebyssInCaveTrigger_Movement_0
# 64 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Gorebyss, GorebyssInCaveTrigger_Movement_1
# 65 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 66 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_2, MSGBOX_AUTOCLOSE
# 67 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_GOREBYSS, 25
# 68 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 69 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 70 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GorebyssInCaveTrigger_10
	return

GorebyssInCaveTrigger_6:
# 80 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, GorebyssInCaveTrigger_Movement_0
# 81 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Gorebyss, GorebyssInCaveTrigger_Movement_2
# 82 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 83 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_2, MSGBOX_AUTOCLOSE
# 84 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_GOREBYSS, 25
# 85 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 86 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 87 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GorebyssInCaveTrigger_12
	return

GorebyssInCaveTrigger_7:
# 97 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, GorebyssInCaveTrigger_Movement_0
# 98 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Gorebyss, GorebyssInCaveTrigger_Movement_3
# 99 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 100 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_2, MSGBOX_AUTOCLOSE
# 101 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_GOREBYSS, 25
# 102 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 103 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 104 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GorebyssInCaveTrigger_14
	return

GorebyssInCaveTrigger_8:
# 55 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 56 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_3, MSGBOX_DEFAULT
# 57 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_GOREBYSS_BATTLE
# 58 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 59 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end

GorebyssInCaveTrigger_10:
# 72 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 73 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_3, MSGBOX_DEFAULT
# 74 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_GOREBYSS_BATTLE
# 75 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 76 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end

GorebyssInCaveTrigger_12:
# 89 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 90 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_3, MSGBOX_DEFAULT
# 91 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_GOREBYSS_BATTLE
# 92 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 93 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end

GorebyssInCaveTrigger_14:
# 106 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 107 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_3, MSGBOX_DEFAULT
# 108 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_GOREBYSS_BATTLE
# 109 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 110 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end


HuntailInCave::
# 118 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	lock
# 119 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	faceplayer
# 120 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	goto_if_set FLAG_HUNTAIL_BATTLE, HuntailInCave_1
# 130 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	special PlayTrainerEncounterMusic
# 131 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Huntail, Common_Movement_ExclamationMark
# 132 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmovement
# 133 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 134 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_2, MSGBOX_AUTOCLOSE
# 135 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_HUNTAIL, 25
# 136 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 137 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 138 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HuntailInCave_4
	return

HuntailInCave_1:
# 122 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 123 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_1, MSGBOX_DEFAULT
# 124 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 125 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end

HuntailInCave_4:
# 140 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 141 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_3, MSGBOX_DEFAULT
# 142 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_HUNTAIL_BATTLE
# 143 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 144 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end


HuntailInCaveTrigger::
# 151 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	goto_if_unset FLAG_HUNTAIL_BATTLE, HuntailInCaveTrigger_1
	return

HuntailInCaveTrigger_1:
# 153 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	special PlayTrainerEncounterMusic
# 154 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Huntail, Common_Movement_ExclamationMark
# 155 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmovement
# 156 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	delay 40
# 157 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 158 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	switch VAR_TEMP_1
# 160 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 5, HuntailInCaveTrigger_4
# 176 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 6, HuntailInCaveTrigger_5
# 193 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 7, HuntailInCaveTrigger_6
# 210 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 8, HuntailInCaveTrigger_7
	return

HuntailInCaveTrigger_4:
# 161 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, HuntailInCaveTrigger_Movement_0
# 162 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 163 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_2, MSGBOX_AUTOCLOSE
# 164 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_HUNTAIL, 25
# 165 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 166 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 167 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HuntailInCaveTrigger_8
	return

HuntailInCaveTrigger_5:
# 177 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, HuntailInCaveTrigger_Movement_0
# 178 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Huntail, HuntailInCaveTrigger_Movement_1
# 179 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 180 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_2, MSGBOX_AUTOCLOSE
# 181 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_HUNTAIL, 25
# 182 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 183 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 184 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HuntailInCaveTrigger_10
	return

HuntailInCaveTrigger_6:
# 194 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, HuntailInCaveTrigger_Movement_0
# 195 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Huntail, HuntailInCaveTrigger_Movement_2
# 196 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 197 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_2, MSGBOX_AUTOCLOSE
# 198 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_HUNTAIL, 25
# 199 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 200 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 201 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HuntailInCaveTrigger_12
	return

HuntailInCaveTrigger_7:
# 211 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, HuntailInCaveTrigger_Movement_0
# 212 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Huntail, HuntailInCaveTrigger_Movement_3
# 213 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 214 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_2, MSGBOX_AUTOCLOSE
# 215 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_HUNTAIL, 25
# 216 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 217 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 218 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HuntailInCaveTrigger_14
	return

HuntailInCaveTrigger_8:
# 169 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 170 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_3, MSGBOX_DEFAULT
# 171 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_HUNTAIL_BATTLE
# 172 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 173 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end

HuntailInCaveTrigger_10:
# 186 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 187 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_3, MSGBOX_DEFAULT
# 188 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_HUNTAIL_BATTLE
# 189 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 190 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end

HuntailInCaveTrigger_12:
# 203 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 204 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_3, MSGBOX_DEFAULT
# 205 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_HUNTAIL_BATTLE
# 206 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 207 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end

HuntailInCaveTrigger_14:
# 220 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 221 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_3, MSGBOX_DEFAULT
# 222 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_HUNTAIL_BATTLE
# 223 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 224 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end


# 47 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
GorebyssInCaveTrigger_Movement_0:
# 47 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	face_left
	step_end

# 64 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
GorebyssInCaveTrigger_Movement_1:
# 64 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_right
	step_end

# 81 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
GorebyssInCaveTrigger_Movement_2:
# 81 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_right
# 81 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_right
	step_end

# 98 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
GorebyssInCaveTrigger_Movement_3:
# 98 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_right
# 98 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_right
# 98 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_right
	step_end

# 161 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
HuntailInCaveTrigger_Movement_0:
# 161 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	face_right
	step_end

# 178 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
HuntailInCaveTrigger_Movement_1:
# 178 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_left
	step_end

# 195 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
HuntailInCaveTrigger_Movement_2:
# 195 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_left
# 195 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_left
	step_end

# 212 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
HuntailInCaveTrigger_Movement_3:
# 212 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_left
# 212 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_left
# 212 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_left
	step_end

GorebyssInCave_Text_0:
# 8 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "Gorebyss$"

GorebyssInCave_Text_1:
# 9 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "My brother Huntail doesnt care\nfor beauty.\pHe will attack you fiercely!\n$"

GorebyssInCave_Text_2:
# 20 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "You are glowing!\nShow me how you illuminate\lthe deep with a battle!$"

GorebyssInCave_Text_3:
# 27 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "You really are quite luminescent.\n$"

HuntailInCave_Text_0:
# 122 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "Huntail$"

HuntailInCave_Text_1:
# 123 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "Back into the dark...\nBut you swim well, little one.$"

HuntailInCave_Text_2:
# 134 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "There's no need for light here in\nthe depths!$"

HuntailInCave_Text_3:
# 141 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "Grr...\pI prefer the the seafloor to be\ndark.$"
