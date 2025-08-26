DaycareVolcano_MapScripts::
	.byte 0


CyndaquilInCave::
# 6 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 7 "data/maps/DaycareVolcano/scripts.pory"
	faceplayer
# 8 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_set FLAG_CYNDAQUIL_BATTLE, CyndaquilInCave_1
# 18 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Cyndaquil, CyndaquilInCave_Movement_0
# 19 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Cyndaquil
# 20 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 21 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Cyndaquil, Common_Movement_ExclamationMark
# 22 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Cyndaquil
# 23 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 24 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 25 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_2, MSGBOX_AUTOCLOSE
# 26 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_CYNDAQUIL, 25
# 27 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 28 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 29 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CyndaquilInCave_4
	return

CyndaquilInCave_1:
# 10 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 11 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_1, MSGBOX_DEFAULT
# 12 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 13 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

CyndaquilInCave_4:
# 31 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 32 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_1, MSGBOX_DEFAULT
# 33 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_CYNDAQUIL_BATTLE
# 34 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 35 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


CyndaquilInCaveTrigger::
# 43 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_unset FLAG_CYNDAQUIL_BATTLE, CyndaquilInCaveTrigger_1
	return

CyndaquilInCaveTrigger_1:
# 45 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 46 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Cyndaquil, Common_Movement_ExclamationMark
# 47 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Cyndaquil
# 48 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 49 "data/maps/DaycareVolcano/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 50 "data/maps/DaycareVolcano/scripts.pory"
	switch VAR_TEMP_2
# 52 "data/maps/DaycareVolcano/scripts.pory"
	case 37, CyndaquilInCaveTrigger_4
# 70 "data/maps/DaycareVolcano/scripts.pory"
	case 36, CyndaquilInCaveTrigger_5
	return

CyndaquilInCaveTrigger_4:
# 53 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 54 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Cyndaquil, CyndaquilInCaveTrigger_Movement_1
# 55 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Cyndaquil
# 56 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 57 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_2, MSGBOX_AUTOCLOSE
# 58 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_CYNDAQUIL, 25
# 59 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 60 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 61 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CyndaquilInCaveTrigger_6
	return

CyndaquilInCaveTrigger_5:
# 71 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 72 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 73 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_2, MSGBOX_AUTOCLOSE
# 74 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_CYNDAQUIL, 25
# 75 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 76 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 77 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CyndaquilInCaveTrigger_8
	return

CyndaquilInCaveTrigger_6:
# 63 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 64 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_1, MSGBOX_DEFAULT
# 65 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_CYNDAQUIL_BATTLE
# 66 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 67 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

CyndaquilInCaveTrigger_8:
# 79 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 80 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_1, MSGBOX_DEFAULT
# 81 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_CYNDAQUIL_BATTLE
# 82 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 83 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


VulpixInCave::
# 92 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 93 "data/maps/DaycareVolcano/scripts.pory"
	faceplayer
# 94 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_set FLAG_VULPIX_BATTLE, VulpixInCave_1
# 104 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Vulpix, CyndaquilInCave_Movement_0
# 105 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Vulpix
# 106 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 107 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Vulpix, Common_Movement_ExclamationMark
# 108 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Vulpix
# 109 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 110 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 111 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_2, MSGBOX_AUTOCLOSE
# 112 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_VULPIX, 25
# 113 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 114 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 115 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VulpixInCave_4
	return

VulpixInCave_1:
# 96 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 97 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_1, MSGBOX_DEFAULT
# 98 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 99 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

VulpixInCave_4:
# 117 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 118 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_3, MSGBOX_DEFAULT
# 119 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_VULPIX_BATTLE
# 120 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 121 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


VulpixInCaveTrigger::
# 129 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_unset FLAG_VULPIX_BATTLE, VulpixInCaveTrigger_1
	return

VulpixInCaveTrigger_1:
# 131 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 132 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Vulpix, Common_Movement_ExclamationMark
# 133 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Vulpix
# 134 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 135 "data/maps/DaycareVolcano/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 136 "data/maps/DaycareVolcano/scripts.pory"
	switch VAR_TEMP_1
# 138 "data/maps/DaycareVolcano/scripts.pory"
	case 26, VulpixInCaveTrigger_4
# 155 "data/maps/DaycareVolcano/scripts.pory"
	case 27, VulpixInCaveTrigger_5
	return

VulpixInCaveTrigger_4:
# 139 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 140 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 141 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 142 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_2, MSGBOX_AUTOCLOSE
# 143 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_VULPIX, 25
# 144 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 145 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 146 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VulpixInCaveTrigger_6
	return

VulpixInCaveTrigger_5:
# 156 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 157 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Vulpix, VulpixInCaveTrigger_Movement_1
# 158 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Vulpix
# 159 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 160 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_2, MSGBOX_AUTOCLOSE
# 161 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_VULPIX, 25
# 162 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 163 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 164 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VulpixInCaveTrigger_8
	return

VulpixInCaveTrigger_6:
# 148 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 149 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_3, MSGBOX_DEFAULT
# 150 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_VULPIX_BATTLE
# 151 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 152 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

VulpixInCaveTrigger_8:
# 166 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 167 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_3, MSGBOX_DEFAULT
# 168 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_VULPIX_BATTLE
# 169 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 170 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


FuecocoInCave::
# 178 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 179 "data/maps/DaycareVolcano/scripts.pory"
	faceplayer
# 180 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_set FLAG_FUECOCO_BATTLE, FuecocoInCave_1
# 190 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, CyndaquilInCave_Movement_0
# 191 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Fuecoco
# 192 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 193 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, Common_Movement_ExclamationMark
# 194 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Fuecoco
# 195 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 196 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 197 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_2, MSGBOX_AUTOCLOSE
# 198 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_FUECOCO, 25, move1 = MOVE_SNARL, move2 = MOVE_YAWN, move3 = MOVE_INCINERATE, move4 = MOVE_CURSE
# 199 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 200 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 201 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FuecocoInCave_4
	return

FuecocoInCave_1:
# 182 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 183 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_1, MSGBOX_DEFAULT
# 184 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 185 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

FuecocoInCave_4:
# 203 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 204 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_3, MSGBOX_DEFAULT
# 205 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_FUECOCO_BATTLE
# 206 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 207 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


FuecocoInCaveTrigger::
# 214 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_unset FLAG_FUECOCO_BATTLE, FuecocoInCaveTrigger_1
	return

FuecocoInCaveTrigger_1:
# 216 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 217 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, Common_Movement_ExclamationMark
# 218 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Fuecoco
# 219 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 220 "data/maps/DaycareVolcano/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 221 "data/maps/DaycareVolcano/scripts.pory"
	switch VAR_TEMP_2
# 223 "data/maps/DaycareVolcano/scripts.pory"
	case 21, FuecocoInCaveTrigger_4
# 241 "data/maps/DaycareVolcano/scripts.pory"
	case 20, FuecocoInCaveTrigger_5
# 257 "data/maps/DaycareVolcano/scripts.pory"
	case 22, FuecocoInCaveTrigger_6
	return

FuecocoInCaveTrigger_4:
# 224 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 225 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, CyndaquilInCaveTrigger_Movement_1
# 226 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Fuecoco
# 227 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 228 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_2, MSGBOX_AUTOCLOSE
# 229 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_FUECOCO, 25, move1 = MOVE_SNARL, move2 = MOVE_YAWN, move3 = MOVE_INCINERATE, move4 = MOVE_CURSE
# 230 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 231 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 232 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FuecocoInCaveTrigger_7
	return

FuecocoInCaveTrigger_5:
# 242 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 243 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 244 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_2, MSGBOX_AUTOCLOSE
# 245 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_FUECOCO, 25, move1 = MOVE_SNARL, move2 = MOVE_YAWN, move3 = MOVE_INCINERATE, move4 = MOVE_CURSE
# 246 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 247 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 248 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FuecocoInCaveTrigger_9
	return

FuecocoInCaveTrigger_6:
# 258 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 259 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, FuecocoInCaveTrigger_Movement_0
# 260 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Fuecoco
# 261 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 262 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_2, MSGBOX_AUTOCLOSE
# 263 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_FUECOCO, 25, move1 = MOVE_SNARL, move2 = MOVE_YAWN, move3 = MOVE_INCINERATE, move4 = MOVE_CURSE
# 264 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 265 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 266 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FuecocoInCaveTrigger_11
	return

FuecocoInCaveTrigger_7:
# 234 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 235 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_3, MSGBOX_DEFAULT
# 236 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_FUECOCO_BATTLE
# 237 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 238 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

FuecocoInCaveTrigger_9:
# 250 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 251 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_3, MSGBOX_DEFAULT
# 252 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_FUECOCO_BATTLE
# 253 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 254 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

FuecocoInCaveTrigger_11:
# 268 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 269 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_3, MSGBOX_DEFAULT
# 270 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_FUECOCO_BATTLE
# 271 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 272 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


CombuskenInCave::
# 280 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 281 "data/maps/DaycareVolcano/scripts.pory"
	faceplayer
# 282 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_set FLAG_COMBUSKEN_BATTLE, CombuskenInCave_1
# 292 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, CyndaquilInCave_Movement_0
# 293 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Combusken
# 294 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 295 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, Common_Movement_ExclamationMark
# 296 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Combusken
# 297 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 298 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 299 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_2, MSGBOX_AUTOCLOSE
# 300 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_COMBUSKEN, 25
# 301 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 302 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 303 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CombuskenInCave_4
	return

CombuskenInCave_1:
# 284 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 285 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_1, MSGBOX_DEFAULT
# 286 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 287 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

CombuskenInCave_4:
# 305 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 306 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_3, MSGBOX_DEFAULT
# 307 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_COMBUSKEN_BATTLE
# 308 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 309 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


CombuskenInCaveTrigger::
# 317 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_unset FLAG_COMBUSKEN_BATTLE, CombuskenInCaveTrigger_1
	return

CombuskenInCaveTrigger_1:
# 319 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 320 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, Common_Movement_ExclamationMark
# 321 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Combusken
# 322 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 323 "data/maps/DaycareVolcano/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 324 "data/maps/DaycareVolcano/scripts.pory"
	switch VAR_TEMP_1
# 326 "data/maps/DaycareVolcano/scripts.pory"
	case 6, CombuskenInCaveTrigger_4
# 342 "data/maps/DaycareVolcano/scripts.pory"
	case 7, CombuskenInCaveTrigger_5
# 360 "data/maps/DaycareVolcano/scripts.pory"
	case 8, CombuskenInCaveTrigger_6
	return

CombuskenInCaveTrigger_4:
# 327 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 328 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 329 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_2, MSGBOX_AUTOCLOSE
# 330 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_COMBUSKEN, 25
# 331 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 332 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 333 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CombuskenInCaveTrigger_7
	return

CombuskenInCaveTrigger_5:
# 343 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 344 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, VulpixInCaveTrigger_Movement_1
# 345 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Combusken
# 346 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 347 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_2, MSGBOX_AUTOCLOSE
# 348 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_COMBUSKEN, 25
# 349 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 350 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 351 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CombuskenInCaveTrigger_9
	return

CombuskenInCaveTrigger_6:
# 361 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 362 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, CombuskenInCaveTrigger_Movement_0
# 363 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Combusken
# 364 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 365 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_2, MSGBOX_AUTOCLOSE
# 366 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_COMBUSKEN, 25
# 367 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 368 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 369 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CombuskenInCaveTrigger_11
	return

CombuskenInCaveTrigger_7:
# 335 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 336 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_3, MSGBOX_DEFAULT
# 337 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_COMBUSKEN_BATTLE
# 338 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 339 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

CombuskenInCaveTrigger_9:
# 353 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 354 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_3, MSGBOX_DEFAULT
# 355 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_COMBUSKEN_BATTLE
# 356 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 357 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

CombuskenInCaveTrigger_11:
# 371 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 372 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_3, MSGBOX_DEFAULT
# 373 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_COMBUSKEN_BATTLE
# 374 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 375 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


BattleVsArcanine::
# 383 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_set FLAG_TRANS_ARCANINE, BattleVsArcanine_2
# 387 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 388 "data/maps/DaycareVolcano/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 389 "data/maps/DaycareVolcano/scripts.pory"
	playmoncry SPECIES_ARCANINE, CRY_MODE_NORMAL
# 390 "data/maps/DaycareVolcano/scripts.pory"
	waitmoncry
# 391 "data/maps/DaycareVolcano/scripts.pory"
	playse SE_PIN
# 392 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 393 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement LOCALID_PLAYER
# 394 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 395 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement LOCALID_PLAYER
# 396 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsArcanine_Movement_0
# 397 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement LOCALID_PLAYER
# 398 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsArcanine_Movement_1
# 399 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement LOCALID_PLAYER
# 400 "data/maps/DaycareVolcano/scripts.pory"
	playse SE_LEDGE
# 401 "data/maps/DaycareVolcano/scripts.pory"
	playse SE_LEDGE
# 402 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Arcanine, BattleVsArcanine_Movement_2
# 403 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Arcanine
# 404 "data/maps/DaycareVolcano/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 405 "data/maps/DaycareVolcano/scripts.pory"
	speakername BattleVsArcanine_Text_0
# 406 "data/maps/DaycareVolcano/scripts.pory"
	msgbox BattleVsArcanine_Text_1, MSGBOX_AUTOCLOSE
# 407 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_ARCANINE, 25, move1 = MOVE_FLAME_WHEEL, move2 = MOVE_FIRE_FANG, move3 = MOVE_FLAMETHROWER, move4 = MOVE_SWIFT
# 408 "data/maps/DaycareVolcano/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 409 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 410 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 411 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsArcanine_4
	return

BattleVsArcanine_2:
	end

BattleVsArcanine_4:
# 413 "data/maps/DaycareVolcano/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 414 "data/maps/DaycareVolcano/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 415 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_TRANS_ARCANINE
# 416 "data/maps/DaycareVolcano/scripts.pory"
	dittotransform SPECIES_ARCANINE
# 417 "data/maps/DaycareVolcano/scripts.pory"
	playse MUS_LEVEL_UP
# 418 "data/maps/DaycareVolcano/scripts.pory"
	msgbox BattleVsArcanine_Text_2, MSGBOX_DEFAULT
# 419 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 420 "data/maps/DaycareVolcano/scripts.pory"
	dittotransform VAR_TEMP_0
# 421 "data/maps/DaycareVolcano/scripts.pory"
	givemon SPECIES_ARCANINE, 25, move1 = MOVE_FIRE_FANG, move2 = MOVE_BITE, move3 = MOVE_AERIAL_ACE, move4 = MOVE_THUNDER_FANG
# 422 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 423 "data/maps/DaycareVolcano/scripts.pory"
	speakername BattleVsArcanine_Text_0
# 424 "data/maps/DaycareVolcano/scripts.pory"
	msgbox BattleVsArcanine_Text_3, MSGBOX_AUTOCLOSE
# 425 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 426 "data/maps/DaycareVolcano/scripts.pory"
	playse SE_LEDGE
# 427 "data/maps/DaycareVolcano/scripts.pory"
	playse SE_LEDGE
# 428 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Arcanine, BattleVsArcanine_Movement_3
# 429 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Arcanine
# 430 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Arcanine, BattleVsArcanine_Movement_4
# 431 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Arcanine
# 432 "data/maps/DaycareVolcano/scripts.pory"
	fadenewbgm MUS_PMD_VOLCANO
# 433 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


# 18 "data/maps/DaycareVolcano/scripts.pory"
CyndaquilInCave_Movement_0:
# 18 "data/maps/DaycareVolcano/scripts.pory"
	face_player
	step_end

# 53 "data/maps/DaycareVolcano/scripts.pory"
CyndaquilInCaveTrigger_Movement_0:
# 53 "data/maps/DaycareVolcano/scripts.pory"
	face_up
	step_end

# 54 "data/maps/DaycareVolcano/scripts.pory"
CyndaquilInCaveTrigger_Movement_1:
# 54 "data/maps/DaycareVolcano/scripts.pory"
	walk_down
	step_end

# 139 "data/maps/DaycareVolcano/scripts.pory"
VulpixInCaveTrigger_Movement_0:
# 139 "data/maps/DaycareVolcano/scripts.pory"
	face_left
	step_end

# 157 "data/maps/DaycareVolcano/scripts.pory"
VulpixInCaveTrigger_Movement_1:
# 157 "data/maps/DaycareVolcano/scripts.pory"
	walk_right
	step_end

# 259 "data/maps/DaycareVolcano/scripts.pory"
FuecocoInCaveTrigger_Movement_0:
# 259 "data/maps/DaycareVolcano/scripts.pory"
	walk_down
# 259 "data/maps/DaycareVolcano/scripts.pory"
	walk_down
	step_end

# 362 "data/maps/DaycareVolcano/scripts.pory"
CombuskenInCaveTrigger_Movement_0:
# 362 "data/maps/DaycareVolcano/scripts.pory"
	walk_right
# 362 "data/maps/DaycareVolcano/scripts.pory"
	walk_right
	step_end

# 396 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_0:
# 396 "data/maps/DaycareVolcano/scripts.pory"
	lock_facing_direction
	step_end

# 398 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_1:
# 398 "data/maps/DaycareVolcano/scripts.pory"
	walk_fast_down
	step_end

# 402 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_2:
# 402 "data/maps/DaycareVolcano/scripts.pory"
	jump_2_down
# 402 "data/maps/DaycareVolcano/scripts.pory"
	jump_2_down
	step_end

# 428 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_3:
# 428 "data/maps/DaycareVolcano/scripts.pory"
	jump_2_up
# 428 "data/maps/DaycareVolcano/scripts.pory"
	jump_2_up
	step_end

# 430 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_4:
# 430 "data/maps/DaycareVolcano/scripts.pory"
	walk_in_place_down
	step_end

CyndaquilInCave_Text_0:
# 10 "data/maps/DaycareVolcano/scripts.pory"
	.string "Cyndaquil$"

CyndaquilInCave_Text_1:
# 11 "data/maps/DaycareVolcano/scripts.pory"
	.string "Go on!\nSee for yourself.$"

CyndaquilInCave_Text_2:
# 25 "data/maps/DaycareVolcano/scripts.pory"
	.string "The boss is so strong.\nHe must know how to gain EXP!$"

VulpixInCave_Text_0:
# 96 "data/maps/DaycareVolcano/scripts.pory"
	.string "Vulpix$"

VulpixInCave_Text_1:
# 97 "data/maps/DaycareVolcano/scripts.pory"
	.string "Someone once told me there's a\nplace where Vulpix live on snowy\lmountains... that sounds nice.$"

VulpixInCave_Text_2:
# 111 "data/maps/DaycareVolcano/scripts.pory"
	.string "Can't take the heat?\n$"

VulpixInCave_Text_3:
# 118 "data/maps/DaycareVolcano/scripts.pory"
	.string "Neither can I.\nIt's hot in here.$"

FuecocoInCave_Text_0:
# 182 "data/maps/DaycareVolcano/scripts.pory"
	.string "Fuecoco$"

FuecocoInCave_Text_1:
# 183 "data/maps/DaycareVolcano/scripts.pory"
	.string "At least it doesnt lag here in\nHoenn...$"

FuecocoInCave_Text_2:
# 197 "data/maps/DaycareVolcano/scripts.pory"
	.string "I joined this group to fit in!\n$"

FuecocoInCave_Text_3:
# 204 "data/maps/DaycareVolcano/scripts.pory"
	.string "No one here has even heard of\nPaldea...$"

CombuskenInCave_Text_0:
# 284 "data/maps/DaycareVolcano/scripts.pory"
	.string "Combusken$"

CombuskenInCave_Text_1:
# 285 "data/maps/DaycareVolcano/scripts.pory"
	.string "Ran out of steam.\n$"

CombuskenInCave_Text_2:
# 299 "data/maps/DaycareVolcano/scripts.pory"
	.string "I've heard the boss is so fast\nhe can gain EXP just by running\laround the Daycare!$"

CombuskenInCave_Text_3:
# 306 "data/maps/DaycareVolcano/scripts.pory"
	.string "Guess I should take a lap.\n$"

BattleVsArcanine_Text_0:
# 405 "data/maps/DaycareVolcano/scripts.pory"
	.string "Arcanine$"

BattleVsArcanine_Text_1:
# 406 "data/maps/DaycareVolcano/scripts.pory"
	.string "Aha!\pA challenger.\pYou must be strong if you battled\nyour way through my volcano.\pI see how your spirit burns bright.\pMaybe taking you down will grant me\nthe EXP I am looking for.\pLet me test your flame!\n$"

BattleVsArcanine_Text_2:
# 418 "data/maps/DaycareVolcano/scripts.pory"
	.string "You have gained the ability to\ntransform into Arcanine!$"

BattleVsArcanine_Text_3:
# 424 "data/maps/DaycareVolcano/scripts.pory"
	.string "Carry yourself with honor.\pDon't soil my good name.\pMaybe you will unlock the secret\nto gain EXP.$"
