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
	waitmovement
# 23 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 24 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_2, MSGBOX_AUTOCLOSE
# 25 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_CYNDAQUIL, 25
# 26 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 27 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 28 "data/maps/DaycareVolcano/scripts.pory"
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
# 30 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 31 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_1, MSGBOX_DEFAULT
# 32 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_CYNDAQUIL_BATTLE
# 33 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 34 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


CyndaquilInCaveTrigger::
# 42 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_unset FLAG_CYNDAQUIL_BATTLE, CyndaquilInCaveTrigger_1
	return

CyndaquilInCaveTrigger_1:
# 44 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 45 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Cyndaquil, Common_Movement_ExclamationMark
# 46 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement
# 47 "data/maps/DaycareVolcano/scripts.pory"
	delay 40
# 48 "data/maps/DaycareVolcano/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 49 "data/maps/DaycareVolcano/scripts.pory"
	switch VAR_TEMP_2
# 51 "data/maps/DaycareVolcano/scripts.pory"
	case 37, CyndaquilInCaveTrigger_4
# 69 "data/maps/DaycareVolcano/scripts.pory"
	case 36, CyndaquilInCaveTrigger_5
	return

CyndaquilInCaveTrigger_4:
# 52 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 53 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Cyndaquil, CyndaquilInCaveTrigger_Movement_1
# 54 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Cyndaquil
# 55 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 56 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_2, MSGBOX_AUTOCLOSE
# 57 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_CYNDAQUIL, 25
# 58 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 59 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 60 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CyndaquilInCaveTrigger_6
	return

CyndaquilInCaveTrigger_5:
# 70 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 71 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 72 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_2, MSGBOX_AUTOCLOSE
# 73 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_CYNDAQUIL, 25
# 74 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 75 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 76 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CyndaquilInCaveTrigger_8
	return

CyndaquilInCaveTrigger_6:
# 62 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 63 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_1, MSGBOX_DEFAULT
# 64 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_CYNDAQUIL_BATTLE
# 65 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 66 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

CyndaquilInCaveTrigger_8:
# 78 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 79 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_1, MSGBOX_DEFAULT
# 80 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_CYNDAQUIL_BATTLE
# 81 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 82 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


VulpixInCave::
# 91 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 92 "data/maps/DaycareVolcano/scripts.pory"
	faceplayer
# 93 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_set FLAG_VULPIX_BATTLE, VulpixInCave_1
# 103 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Vulpix, CyndaquilInCave_Movement_0
# 104 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Vulpix
# 105 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 106 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Vulpix, Common_Movement_ExclamationMark
# 107 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement
# 108 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 109 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_2, MSGBOX_AUTOCLOSE
# 110 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_VULPIX, 25
# 111 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 112 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 113 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VulpixInCave_4
	return

VulpixInCave_1:
# 95 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 96 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_1, MSGBOX_DEFAULT
# 97 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 98 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

VulpixInCave_4:
# 115 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 116 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_3, MSGBOX_DEFAULT
# 117 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_VULPIX_BATTLE
# 118 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 119 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


VulpixInCaveTrigger::
# 127 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_unset FLAG_VULPIX_BATTLE, VulpixInCaveTrigger_1
	return

VulpixInCaveTrigger_1:
# 129 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 130 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Vulpix, Common_Movement_ExclamationMark
# 131 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement
# 132 "data/maps/DaycareVolcano/scripts.pory"
	delay 40
# 133 "data/maps/DaycareVolcano/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 134 "data/maps/DaycareVolcano/scripts.pory"
	switch VAR_TEMP_1
# 136 "data/maps/DaycareVolcano/scripts.pory"
	case 26, VulpixInCaveTrigger_4
# 152 "data/maps/DaycareVolcano/scripts.pory"
	case 27, VulpixInCaveTrigger_5
	return

VulpixInCaveTrigger_4:
# 137 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 138 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 139 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_2, MSGBOX_AUTOCLOSE
# 140 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_VULPIX, 25
# 141 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 142 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 143 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VulpixInCaveTrigger_6
	return

VulpixInCaveTrigger_5:
# 153 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 154 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Vulpix, VulpixInCaveTrigger_Movement_1
# 155 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 156 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_2, MSGBOX_AUTOCLOSE
# 157 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_VULPIX, 25
# 158 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 159 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 160 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VulpixInCaveTrigger_8
	return

VulpixInCaveTrigger_6:
# 145 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 146 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_3, MSGBOX_DEFAULT
# 147 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_VULPIX_BATTLE
# 148 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 149 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

VulpixInCaveTrigger_8:
# 162 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 163 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_3, MSGBOX_DEFAULT
# 164 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_VULPIX_BATTLE
# 165 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 166 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


FuecocoInCave::
# 174 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 175 "data/maps/DaycareVolcano/scripts.pory"
	faceplayer
# 176 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_set FLAG_FUECOCO_BATTLE, FuecocoInCave_1
# 186 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, CyndaquilInCave_Movement_0
# 187 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Fuecoco
# 188 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 189 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, Common_Movement_ExclamationMark
# 190 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Fuecoco
# 191 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 192 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_2, MSGBOX_AUTOCLOSE
# 193 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_FUECOCO, 25
# 194 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 195 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 196 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FuecocoInCave_4
	return

FuecocoInCave_1:
# 178 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 179 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_1, MSGBOX_DEFAULT
# 180 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 181 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

FuecocoInCave_4:
# 198 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 199 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_3, MSGBOX_DEFAULT
# 200 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_FUECOCO_BATTLE
# 201 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 202 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


FuecocoInCaveTrigger::
# 209 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_unset FLAG_FUECOCO_BATTLE, FuecocoInCaveTrigger_1
	return

FuecocoInCaveTrigger_1:
# 211 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 212 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, Common_Movement_ExclamationMark
# 213 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement
# 214 "data/maps/DaycareVolcano/scripts.pory"
	delay 40
# 215 "data/maps/DaycareVolcano/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 216 "data/maps/DaycareVolcano/scripts.pory"
	switch VAR_TEMP_2
# 218 "data/maps/DaycareVolcano/scripts.pory"
	case 21, FuecocoInCaveTrigger_4
# 236 "data/maps/DaycareVolcano/scripts.pory"
	case 20, FuecocoInCaveTrigger_5
# 252 "data/maps/DaycareVolcano/scripts.pory"
	case 22, FuecocoInCaveTrigger_6
	return

FuecocoInCaveTrigger_4:
# 219 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 220 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, CyndaquilInCaveTrigger_Movement_1
# 221 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Fuecoco
# 222 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 223 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_2, MSGBOX_AUTOCLOSE
# 224 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_FUECOCO, 25
# 225 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 226 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 227 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FuecocoInCaveTrigger_7
	return

FuecocoInCaveTrigger_5:
# 237 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 238 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 239 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_2, MSGBOX_AUTOCLOSE
# 240 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_FUECOCO, 25
# 241 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 242 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 243 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FuecocoInCaveTrigger_9
	return

FuecocoInCaveTrigger_6:
# 253 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 254 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, FuecocoInCaveTrigger_Movement_0
# 255 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Fuecoco
# 256 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 257 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_2, MSGBOX_AUTOCLOSE
# 258 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_FUECOCO, 25
# 259 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 260 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 261 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FuecocoInCaveTrigger_11
	return

FuecocoInCaveTrigger_7:
# 229 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 230 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_3, MSGBOX_DEFAULT
# 231 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_FUECOCO_BATTLE
# 232 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 233 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

FuecocoInCaveTrigger_9:
# 245 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 246 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_3, MSGBOX_DEFAULT
# 247 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_FUECOCO_BATTLE
# 248 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 249 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

FuecocoInCaveTrigger_11:
# 263 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 264 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_3, MSGBOX_DEFAULT
# 265 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_FUECOCO_BATTLE
# 266 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 267 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


CombuskenInCave::
# 275 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 276 "data/maps/DaycareVolcano/scripts.pory"
	faceplayer
# 277 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_set FLAG_COMBUSKEN_BATTLE, CombuskenInCave_1
# 287 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, CyndaquilInCave_Movement_0
# 288 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Combusken
# 289 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 290 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, Common_Movement_ExclamationMark
# 291 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement
# 292 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 293 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_2, MSGBOX_AUTOCLOSE
# 294 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_COMBUSKEN, 25
# 295 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 296 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 297 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CombuskenInCave_4
	return

CombuskenInCave_1:
# 279 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 280 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_1, MSGBOX_DEFAULT
# 281 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 282 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

CombuskenInCave_4:
# 299 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 300 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_3, MSGBOX_DEFAULT
# 301 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_COMBUSKEN_BATTLE
# 302 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 303 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


CombuskenInCaveTrigger::
# 311 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_unset FLAG_COMBUSKEN_BATTLE, CombuskenInCaveTrigger_1
	return

CombuskenInCaveTrigger_1:
# 313 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 314 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, Common_Movement_ExclamationMark
# 315 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement
# 316 "data/maps/DaycareVolcano/scripts.pory"
	delay 40
# 317 "data/maps/DaycareVolcano/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 318 "data/maps/DaycareVolcano/scripts.pory"
	switch VAR_TEMP_1
# 320 "data/maps/DaycareVolcano/scripts.pory"
	case 6, CombuskenInCaveTrigger_4
# 336 "data/maps/DaycareVolcano/scripts.pory"
	case 7, CombuskenInCaveTrigger_5
# 353 "data/maps/DaycareVolcano/scripts.pory"
	case 8, CombuskenInCaveTrigger_6
	return

CombuskenInCaveTrigger_4:
# 321 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 322 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 323 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_2, MSGBOX_AUTOCLOSE
# 324 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_COMBUSKEN, 25
# 325 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 326 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 327 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CombuskenInCaveTrigger_7
	return

CombuskenInCaveTrigger_5:
# 337 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 338 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, VulpixInCaveTrigger_Movement_1
# 339 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 340 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_2, MSGBOX_AUTOCLOSE
# 341 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_COMBUSKEN, 25
# 342 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 343 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 344 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CombuskenInCaveTrigger_9
	return

CombuskenInCaveTrigger_6:
# 354 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 355 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, CombuskenInCaveTrigger_Movement_0
# 356 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 357 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_2, MSGBOX_AUTOCLOSE
# 358 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_COMBUSKEN, 25
# 359 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 360 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 361 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CombuskenInCaveTrigger_11
	return

CombuskenInCaveTrigger_7:
# 329 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 330 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_3, MSGBOX_DEFAULT
# 331 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_COMBUSKEN_BATTLE
# 332 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 333 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

CombuskenInCaveTrigger_9:
# 346 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 347 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_3, MSGBOX_DEFAULT
# 348 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_COMBUSKEN_BATTLE
# 349 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 350 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

CombuskenInCaveTrigger_11:
# 363 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 364 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_3, MSGBOX_DEFAULT
# 365 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_COMBUSKEN_BATTLE
# 366 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 367 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


BattleVsArcanine::
# 375 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_set FLAG_TRANS_ARCANINE, BattleVsArcanine_2
# 379 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 380 "data/maps/DaycareVolcano/scripts.pory"
	playmoncry SPECIES_ARCANINE, CRY_MODE_NORMAL
# 381 "data/maps/DaycareVolcano/scripts.pory"
	waitmoncry
# 382 "data/maps/DaycareVolcano/scripts.pory"
	playse SE_PIN
# 383 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 384 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement LOCALID_PLAYER
# 385 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 386 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement LOCALID_PLAYER
# 387 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsArcanine_Movement_0
# 388 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement LOCALID_PLAYER
# 389 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsArcanine_Movement_1
# 390 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement LOCALID_PLAYER
# 391 "data/maps/DaycareVolcano/scripts.pory"
	playse SE_M_SCRATCH
# 392 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Arcanine, BattleVsArcanine_Movement_2
# 393 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Arcanine
# 394 "data/maps/DaycareVolcano/scripts.pory"
	speakername BattleVsArcanine_Text_0
# 395 "data/maps/DaycareVolcano/scripts.pory"
	msgbox BattleVsArcanine_Text_1, MSGBOX_AUTOCLOSE
# 396 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_ARCANINE, 25
# 397 "data/maps/DaycareVolcano/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 398 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 399 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 400 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsArcanine_4
	return

BattleVsArcanine_2:
	end

BattleVsArcanine_4:
# 402 "data/maps/DaycareVolcano/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 403 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_TRANS_ARCANINE
# 404 "data/maps/DaycareVolcano/scripts.pory"
	dittotransform SPECIES_ARCANINE
# 405 "data/maps/DaycareVolcano/scripts.pory"
	playse MUS_LEVEL_UP
# 406 "data/maps/DaycareVolcano/scripts.pory"
	msgbox BattleVsArcanine_Text_2, MSGBOX_DEFAULT
# 407 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 408 "data/maps/DaycareVolcano/scripts.pory"
	dittotransform VAR_TEMP_0
# 409 "data/maps/DaycareVolcano/scripts.pory"
	givemon SPECIES_ARCANINE, 25, move1 = MOVE_FLARE_BLITZ, move2 = MOVE_EXTREME_SPEED, move3 = MOVE_CRUNCH, move4 = MOVE_HOWL
# 410 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 411 "data/maps/DaycareVolcano/scripts.pory"
	speakername BattleVsArcanine_Text_0
# 412 "data/maps/DaycareVolcano/scripts.pory"
	msgbox BattleVsArcanine_Text_3, MSGBOX_DEFAULT
# 413 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 414 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Arcanine, BattleVsArcanine_Movement_3
# 415 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Arcanine
# 416 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Arcanine, BattleVsArcanine_Movement_4
# 417 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Arcanine
# 418 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


# 18 "data/maps/DaycareVolcano/scripts.pory"
CyndaquilInCave_Movement_0:
# 18 "data/maps/DaycareVolcano/scripts.pory"
	face_player
	step_end

# 52 "data/maps/DaycareVolcano/scripts.pory"
CyndaquilInCaveTrigger_Movement_0:
# 52 "data/maps/DaycareVolcano/scripts.pory"
	face_up
	step_end

# 53 "data/maps/DaycareVolcano/scripts.pory"
CyndaquilInCaveTrigger_Movement_1:
# 53 "data/maps/DaycareVolcano/scripts.pory"
	walk_down
	step_end

# 137 "data/maps/DaycareVolcano/scripts.pory"
VulpixInCaveTrigger_Movement_0:
# 137 "data/maps/DaycareVolcano/scripts.pory"
	face_left
	step_end

# 154 "data/maps/DaycareVolcano/scripts.pory"
VulpixInCaveTrigger_Movement_1:
# 154 "data/maps/DaycareVolcano/scripts.pory"
	walk_right
	step_end

# 254 "data/maps/DaycareVolcano/scripts.pory"
FuecocoInCaveTrigger_Movement_0:
# 254 "data/maps/DaycareVolcano/scripts.pory"
	walk_down
# 254 "data/maps/DaycareVolcano/scripts.pory"
	walk_down
	step_end

# 355 "data/maps/DaycareVolcano/scripts.pory"
CombuskenInCaveTrigger_Movement_0:
# 355 "data/maps/DaycareVolcano/scripts.pory"
	walk_right
# 355 "data/maps/DaycareVolcano/scripts.pory"
	walk_right
	step_end

# 387 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_0:
# 387 "data/maps/DaycareVolcano/scripts.pory"
	lock_facing_direction
	step_end

# 389 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_1:
# 389 "data/maps/DaycareVolcano/scripts.pory"
	walk_fast_down
	step_end

# 392 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_2:
# 392 "data/maps/DaycareVolcano/scripts.pory"
	jump_2_down
# 392 "data/maps/DaycareVolcano/scripts.pory"
	jump_2_down
	step_end

# 414 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_3:
# 414 "data/maps/DaycareVolcano/scripts.pory"
	jump_2_up
# 414 "data/maps/DaycareVolcano/scripts.pory"
	jump_2_up
	step_end

# 416 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_4:
# 416 "data/maps/DaycareVolcano/scripts.pory"
	walk_in_place_down
	step_end

CyndaquilInCave_Text_0:
# 10 "data/maps/DaycareVolcano/scripts.pory"
	.string "Cyndaquil$"

CyndaquilInCave_Text_1:
# 11 "data/maps/DaycareVolcano/scripts.pory"
	.string "Go on!\nSee for yourself.$"

CyndaquilInCave_Text_2:
# 24 "data/maps/DaycareVolcano/scripts.pory"
	.string "The boss is so strong.\nHe must know how to gain EXP!$"

VulpixInCave_Text_0:
# 95 "data/maps/DaycareVolcano/scripts.pory"
	.string "Vulpix$"

VulpixInCave_Text_1:
# 96 "data/maps/DaycareVolcano/scripts.pory"
	.string "Someone once told me there's a\nplace where Vulpix live on snowy\lmountains... that sounds nice.$"

VulpixInCave_Text_2:
# 109 "data/maps/DaycareVolcano/scripts.pory"
	.string "Can't take the heat?\n$"

VulpixInCave_Text_3:
# 116 "data/maps/DaycareVolcano/scripts.pory"
	.string "Neither can I.\nIt's hot in here.$"

FuecocoInCave_Text_0:
# 178 "data/maps/DaycareVolcano/scripts.pory"
	.string "Fuecoco$"

FuecocoInCave_Text_1:
# 179 "data/maps/DaycareVolcano/scripts.pory"
	.string "At least it doesnt lag here in\nHoenn...$"

FuecocoInCave_Text_2:
# 192 "data/maps/DaycareVolcano/scripts.pory"
	.string "I joined this group to fit in!\n$"

FuecocoInCave_Text_3:
# 199 "data/maps/DaycareVolcano/scripts.pory"
	.string "No one here has even heard of\nPaldea...$"

CombuskenInCave_Text_0:
# 279 "data/maps/DaycareVolcano/scripts.pory"
	.string "Combusken$"

CombuskenInCave_Text_1:
# 280 "data/maps/DaycareVolcano/scripts.pory"
	.string "Ran out of steam.\n$"

CombuskenInCave_Text_2:
# 293 "data/maps/DaycareVolcano/scripts.pory"
	.string "I've heard the boss is so fast\nhe can gain EXP just by running\laround the Daycare!$"

CombuskenInCave_Text_3:
# 300 "data/maps/DaycareVolcano/scripts.pory"
	.string "Guess I should take a lap.\n$"

BattleVsArcanine_Text_0:
# 394 "data/maps/DaycareVolcano/scripts.pory"
	.string "Arcanine$"

BattleVsArcanine_Text_1:
# 395 "data/maps/DaycareVolcano/scripts.pory"
	.string "Your spirit burns bright.\pLet me test your flame.$"

BattleVsArcanine_Text_2:
# 406 "data/maps/DaycareVolcano/scripts.pory"
	.string "You have gained the ability to\ntransform into Arcanine!$"

BattleVsArcanine_Text_3:
# 412 "data/maps/DaycareVolcano/scripts.pory"
	.string "Carry yourself with honor.\pDon't soil my good name.$"
