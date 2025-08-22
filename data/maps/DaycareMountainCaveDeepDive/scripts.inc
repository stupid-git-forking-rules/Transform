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
	delay 60
# 23 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 24 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_2, MSGBOX_AUTOCLOSE
# 25 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_GOREBYSS, 25
# 26 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 27 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 28 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
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
# 30 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 31 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_3, MSGBOX_DEFAULT
# 32 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_GOREBYSS_BATTLE
# 33 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 34 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end


GorebyssInCaveTrigger::
# 41 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	goto_if_unset FLAG_GOREBYSS_BATTLE, GorebyssInCaveTrigger_1
	return

GorebyssInCaveTrigger_1:
# 43 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	special PlayTrainerEncounterMusic
# 44 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Gorebyss, Common_Movement_ExclamationMark
# 45 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmovement Gorebyss
# 46 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	delay 60
# 47 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 48 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	switch VAR_TEMP_1
# 50 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 5, GorebyssInCaveTrigger_4
# 66 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 6, GorebyssInCaveTrigger_5
# 83 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 7, GorebyssInCaveTrigger_6
# 100 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 8, GorebyssInCaveTrigger_7
	return

GorebyssInCaveTrigger_4:
# 51 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, GorebyssInCaveTrigger_Movement_0
# 52 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 53 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_2, MSGBOX_AUTOCLOSE
# 54 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_GOREBYSS, 25
# 55 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 56 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 57 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GorebyssInCaveTrigger_8
	return

GorebyssInCaveTrigger_5:
# 67 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, GorebyssInCaveTrigger_Movement_0
# 68 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Gorebyss, GorebyssInCaveTrigger_Movement_1
# 69 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 70 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_2, MSGBOX_AUTOCLOSE
# 71 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_GOREBYSS, 25
# 72 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 73 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 74 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GorebyssInCaveTrigger_10
	return

GorebyssInCaveTrigger_6:
# 84 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, GorebyssInCaveTrigger_Movement_0
# 85 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Gorebyss, GorebyssInCaveTrigger_Movement_2
# 86 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 87 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_2, MSGBOX_AUTOCLOSE
# 88 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_GOREBYSS, 25
# 89 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 90 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 91 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GorebyssInCaveTrigger_12
	return

GorebyssInCaveTrigger_7:
# 101 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, GorebyssInCaveTrigger_Movement_0
# 102 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Gorebyss, GorebyssInCaveTrigger_Movement_3
# 103 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 104 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_2, MSGBOX_AUTOCLOSE
# 105 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_GOREBYSS, 25
# 106 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 107 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 108 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GorebyssInCaveTrigger_14
	return

GorebyssInCaveTrigger_8:
# 59 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 60 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_3, MSGBOX_DEFAULT
# 61 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_GOREBYSS_BATTLE
# 62 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 63 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end

GorebyssInCaveTrigger_10:
# 76 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 77 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_3, MSGBOX_DEFAULT
# 78 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_GOREBYSS_BATTLE
# 79 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 80 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end

GorebyssInCaveTrigger_12:
# 93 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 94 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_3, MSGBOX_DEFAULT
# 95 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_GOREBYSS_BATTLE
# 96 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 97 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end

GorebyssInCaveTrigger_14:
# 110 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername GorebyssInCave_Text_0
# 111 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox GorebyssInCave_Text_3, MSGBOX_DEFAULT
# 112 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_GOREBYSS_BATTLE
# 113 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 114 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end


HuntailInCave::
# 122 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	lock
# 123 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	faceplayer
# 124 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	goto_if_set FLAG_HUNTAIL_BATTLE, HuntailInCave_1
# 134 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Huntail, GorebyssInCave_Movement_0
# 135 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmovement Huntail
# 136 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	special PlayTrainerEncounterMusic
# 137 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Huntail, Common_Movement_ExclamationMark
# 138 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmovement Huntail
# 139 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	delay 60
# 140 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 141 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_2, MSGBOX_AUTOCLOSE
# 142 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_HUNTAIL, 25
# 143 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 144 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 145 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HuntailInCave_4
	return

HuntailInCave_1:
# 126 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 127 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_1, MSGBOX_DEFAULT
# 128 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 129 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end

HuntailInCave_4:
# 147 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 148 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_3, MSGBOX_DEFAULT
# 149 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_HUNTAIL_BATTLE
# 150 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 151 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end


HuntailInCaveTrigger::
# 158 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	goto_if_unset FLAG_HUNTAIL_BATTLE, HuntailInCaveTrigger_1
	return

HuntailInCaveTrigger_1:
# 160 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	special PlayTrainerEncounterMusic
# 161 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Huntail, Common_Movement_ExclamationMark
# 162 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmovement Huntail
# 163 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	delay 60
# 164 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 165 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	switch VAR_TEMP_1
# 167 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 5, HuntailInCaveTrigger_4
# 183 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 6, HuntailInCaveTrigger_5
# 200 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 7, HuntailInCaveTrigger_6
# 217 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	case 8, HuntailInCaveTrigger_7
	return

HuntailInCaveTrigger_4:
# 168 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, HuntailInCaveTrigger_Movement_0
# 169 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 170 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_2, MSGBOX_AUTOCLOSE
# 171 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_HUNTAIL, 25
# 172 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 173 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 174 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HuntailInCaveTrigger_8
	return

HuntailInCaveTrigger_5:
# 184 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, HuntailInCaveTrigger_Movement_0
# 185 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Huntail, HuntailInCaveTrigger_Movement_1
# 186 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 187 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_2, MSGBOX_AUTOCLOSE
# 188 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_HUNTAIL, 25
# 189 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 190 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 191 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HuntailInCaveTrigger_10
	return

HuntailInCaveTrigger_6:
# 201 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, HuntailInCaveTrigger_Movement_0
# 202 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Huntail, HuntailInCaveTrigger_Movement_2
# 203 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 204 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_2, MSGBOX_AUTOCLOSE
# 205 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_HUNTAIL, 25
# 206 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 207 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 208 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HuntailInCaveTrigger_12
	return

HuntailInCaveTrigger_7:
# 218 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement LOCALID_PLAYER, HuntailInCaveTrigger_Movement_0
# 219 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	applymovement Huntail, HuntailInCaveTrigger_Movement_3
# 220 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 221 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_2, MSGBOX_AUTOCLOSE
# 222 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setwildbattle SPECIES_HUNTAIL, 25
# 223 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	dowildbattle
# 224 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 225 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HuntailInCaveTrigger_14
	return

HuntailInCaveTrigger_8:
# 176 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 177 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_3, MSGBOX_DEFAULT
# 178 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_HUNTAIL_BATTLE
# 179 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 180 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end

HuntailInCaveTrigger_10:
# 193 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 194 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_3, MSGBOX_DEFAULT
# 195 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_HUNTAIL_BATTLE
# 196 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 197 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end

HuntailInCaveTrigger_12:
# 210 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 211 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_3, MSGBOX_DEFAULT
# 212 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_HUNTAIL_BATTLE
# 213 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 214 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end

HuntailInCaveTrigger_14:
# 227 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	speakername HuntailInCave_Text_0
# 228 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	msgbox HuntailInCave_Text_3, MSGBOX_DEFAULT
# 229 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	setflag FLAG_HUNTAIL_BATTLE
# 230 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	waitmessage
# 231 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	release
	end


# 17 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
GorebyssInCave_Movement_0:
# 17 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	face_player
	step_end

# 51 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
GorebyssInCaveTrigger_Movement_0:
# 51 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	face_left
	step_end

# 68 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
GorebyssInCaveTrigger_Movement_1:
# 68 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_right
	step_end

# 85 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
GorebyssInCaveTrigger_Movement_2:
# 85 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_right
# 85 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_right
	step_end

# 102 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
GorebyssInCaveTrigger_Movement_3:
# 102 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_right
# 102 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_right
# 102 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_right
	step_end

# 168 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
HuntailInCaveTrigger_Movement_0:
# 168 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	face_right
	step_end

# 185 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
HuntailInCaveTrigger_Movement_1:
# 185 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_left
	step_end

# 202 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
HuntailInCaveTrigger_Movement_2:
# 202 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_left
# 202 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_left
	step_end

# 219 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
HuntailInCaveTrigger_Movement_3:
# 219 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_left
# 219 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_left
# 219 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	walk_left
	step_end

GorebyssInCave_Text_0:
# 9 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "Gorebyss$"

GorebyssInCave_Text_1:
# 10 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "My brother Huntail doesnt care\nfor beauty.\pHe will attack you fiercely!\n$"

GorebyssInCave_Text_2:
# 24 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "You are glowing!\nShow me how you illuminate\lthe deep with a battle!$"

GorebyssInCave_Text_3:
# 31 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "You really are quite luminescent.\n$"

HuntailInCave_Text_0:
# 126 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "Huntail$"

HuntailInCave_Text_1:
# 127 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "Back into the dark...\nBut you swim well, little one.$"

HuntailInCave_Text_2:
# 141 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "There's no need for light here in\nthe depths!$"

HuntailInCave_Text_3:
# 148 "data/maps/DaycareMountainCaveDeepDive/scripts.pory"
	.string "Grr...\pI prefer the the seafloor to be\ndark.$"
