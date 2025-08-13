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
	special PlayTrainerEncounterMusic
# 19 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Cyndaquil, Common_Movement_ExclamationMark
# 20 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement
# 21 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 22 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_2, MSGBOX_AUTOCLOSE
# 23 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_CYNDAQUIL, 25
# 24 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 25 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 26 "data/maps/DaycareVolcano/scripts.pory"
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
# 28 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 29 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_1, MSGBOX_DEFAULT
# 30 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_CYNDAQUIL_BATTLE
# 31 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 32 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


CyndaquilInCaveTrigger::
# 40 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_unset FLAG_CYNDAQUIL_BATTLE, CyndaquilInCaveTrigger_1
	return

CyndaquilInCaveTrigger_1:
# 42 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 43 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Cyndaquil, Common_Movement_ExclamationMark
# 44 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement
# 45 "data/maps/DaycareVolcano/scripts.pory"
	delay 40
# 46 "data/maps/DaycareVolcano/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 47 "data/maps/DaycareVolcano/scripts.pory"
	switch VAR_TEMP_2
# 49 "data/maps/DaycareVolcano/scripts.pory"
	case 37, CyndaquilInCaveTrigger_4
# 67 "data/maps/DaycareVolcano/scripts.pory"
	case 36, CyndaquilInCaveTrigger_5
	return

CyndaquilInCaveTrigger_4:
# 50 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 51 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Cyndaquil, CyndaquilInCaveTrigger_Movement_1
# 52 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Cyndaquil
# 53 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 54 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_2, MSGBOX_AUTOCLOSE
# 55 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_CYNDAQUIL, 25
# 56 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 57 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 58 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CyndaquilInCaveTrigger_6
	return

CyndaquilInCaveTrigger_5:
# 68 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 69 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 70 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_2, MSGBOX_AUTOCLOSE
# 71 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_CYNDAQUIL, 25
# 72 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 73 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 74 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CyndaquilInCaveTrigger_8
	return

CyndaquilInCaveTrigger_6:
# 60 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 61 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_1, MSGBOX_DEFAULT
# 62 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_CYNDAQUIL_BATTLE
# 63 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 64 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

CyndaquilInCaveTrigger_8:
# 76 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 77 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_1, MSGBOX_DEFAULT
# 78 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_CYNDAQUIL_BATTLE
# 79 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 80 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


VulpixInCave::
# 89 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 90 "data/maps/DaycareVolcano/scripts.pory"
	faceplayer
# 91 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_set FLAG_VULPIX_BATTLE, VulpixInCave_1
# 101 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 102 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Vulpix, Common_Movement_ExclamationMark
# 103 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement
# 104 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 105 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_2, MSGBOX_AUTOCLOSE
# 106 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_VULPIX, 25
# 107 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 108 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 109 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VulpixInCave_4
	return

VulpixInCave_1:
# 93 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 94 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_1, MSGBOX_DEFAULT
# 95 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 96 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

VulpixInCave_4:
# 111 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 112 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_3, MSGBOX_DEFAULT
# 113 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_VULPIX_BATTLE
# 114 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 115 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


VulpixInCaveTrigger::
# 123 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_unset FLAG_VULPIX_BATTLE, VulpixInCaveTrigger_1
	return

VulpixInCaveTrigger_1:
# 125 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 126 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Vulpix, Common_Movement_ExclamationMark
# 127 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement
# 128 "data/maps/DaycareVolcano/scripts.pory"
	delay 40
# 129 "data/maps/DaycareVolcano/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 130 "data/maps/DaycareVolcano/scripts.pory"
	switch VAR_TEMP_1
# 132 "data/maps/DaycareVolcano/scripts.pory"
	case 26, VulpixInCaveTrigger_4
# 148 "data/maps/DaycareVolcano/scripts.pory"
	case 27, VulpixInCaveTrigger_5
	return

VulpixInCaveTrigger_4:
# 133 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 134 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 135 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_2, MSGBOX_AUTOCLOSE
# 136 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_VULPIX, 25
# 137 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 138 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 139 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VulpixInCaveTrigger_6
	return

VulpixInCaveTrigger_5:
# 149 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 150 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Vulpix, VulpixInCaveTrigger_Movement_1
# 151 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 152 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_2, MSGBOX_AUTOCLOSE
# 153 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_VULPIX, 25
# 154 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 155 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 156 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VulpixInCaveTrigger_8
	return

VulpixInCaveTrigger_6:
# 141 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 142 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_3, MSGBOX_DEFAULT
# 143 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_VULPIX_BATTLE
# 144 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 145 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

VulpixInCaveTrigger_8:
# 158 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 159 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_3, MSGBOX_DEFAULT
# 160 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_VULPIX_BATTLE
# 161 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 162 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


FuecocoInCave::
# 170 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 171 "data/maps/DaycareVolcano/scripts.pory"
	faceplayer
# 172 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_set FLAG_FUECOCO_BATTLE, FuecocoInCave_1
# 182 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 183 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, Common_Movement_ExclamationMark
# 184 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement
# 185 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 186 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_2, MSGBOX_AUTOCLOSE
# 187 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_FUECOCO, 25
# 188 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 189 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 190 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FuecocoInCave_4
	return

FuecocoInCave_1:
# 174 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 175 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_1, MSGBOX_DEFAULT
# 176 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 177 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

FuecocoInCave_4:
# 192 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 193 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_3, MSGBOX_DEFAULT
# 194 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_FUECOCO_BATTLE
# 195 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 196 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


FuecocoInCaveTrigger::
# 203 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_unset FLAG_FUECOCO_BATTLE, FuecocoInCaveTrigger_1
	return

FuecocoInCaveTrigger_1:
# 205 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 206 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, Common_Movement_ExclamationMark
# 207 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement
# 208 "data/maps/DaycareVolcano/scripts.pory"
	delay 40
# 209 "data/maps/DaycareVolcano/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 210 "data/maps/DaycareVolcano/scripts.pory"
	switch VAR_TEMP_2
# 212 "data/maps/DaycareVolcano/scripts.pory"
	case 21, FuecocoInCaveTrigger_4
# 230 "data/maps/DaycareVolcano/scripts.pory"
	case 20, FuecocoInCaveTrigger_5
# 246 "data/maps/DaycareVolcano/scripts.pory"
	case 22, FuecocoInCaveTrigger_6
	return

FuecocoInCaveTrigger_4:
# 213 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 214 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, CyndaquilInCaveTrigger_Movement_1
# 215 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Fuecoco
# 216 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 217 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_2, MSGBOX_AUTOCLOSE
# 218 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_FUECOCO, 25
# 219 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 220 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 221 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FuecocoInCaveTrigger_7
	return

FuecocoInCaveTrigger_5:
# 231 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 232 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 233 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_2, MSGBOX_AUTOCLOSE
# 234 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_FUECOCO, 25
# 235 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 236 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 237 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FuecocoInCaveTrigger_9
	return

FuecocoInCaveTrigger_6:
# 247 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 248 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, FuecocoInCaveTrigger_Movement_0
# 249 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Fuecoco
# 250 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 251 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_2, MSGBOX_AUTOCLOSE
# 252 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_FUECOCO, 25
# 253 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 254 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 255 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FuecocoInCaveTrigger_11
	return

FuecocoInCaveTrigger_7:
# 223 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 224 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_3, MSGBOX_DEFAULT
# 225 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_FUECOCO_BATTLE
# 226 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 227 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

FuecocoInCaveTrigger_9:
# 239 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 240 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_3, MSGBOX_DEFAULT
# 241 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_FUECOCO_BATTLE
# 242 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 243 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

FuecocoInCaveTrigger_11:
# 257 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 258 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_3, MSGBOX_DEFAULT
# 259 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_FUECOCO_BATTLE
# 260 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 261 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


CombuskenInCave::
# 269 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 270 "data/maps/DaycareVolcano/scripts.pory"
	faceplayer
# 271 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_set FLAG_COMBUSKEN_BATTLE, CombuskenInCave_1
# 281 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 282 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, Common_Movement_ExclamationMark
# 283 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement
# 284 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 285 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_2, MSGBOX_AUTOCLOSE
# 286 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_COMBUSKEN, 25
# 287 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 288 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 289 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CombuskenInCave_4
	return

CombuskenInCave_1:
# 273 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 274 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_1, MSGBOX_DEFAULT
# 275 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 276 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

CombuskenInCave_4:
# 291 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 292 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_3, MSGBOX_DEFAULT
# 293 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_COMBUSKEN_BATTLE
# 294 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 295 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


CombuskenInCaveTrigger::
# 303 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_unset FLAG_COMBUSKEN_BATTLE, CombuskenInCaveTrigger_1
	return

CombuskenInCaveTrigger_1:
# 305 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 306 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, Common_Movement_ExclamationMark
# 307 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement
# 308 "data/maps/DaycareVolcano/scripts.pory"
	delay 40
# 309 "data/maps/DaycareVolcano/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 310 "data/maps/DaycareVolcano/scripts.pory"
	switch VAR_TEMP_1
# 312 "data/maps/DaycareVolcano/scripts.pory"
	case 6, CombuskenInCaveTrigger_4
# 328 "data/maps/DaycareVolcano/scripts.pory"
	case 7, CombuskenInCaveTrigger_5
# 345 "data/maps/DaycareVolcano/scripts.pory"
	case 8, CombuskenInCaveTrigger_6
	return

CombuskenInCaveTrigger_4:
# 313 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 314 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 315 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_2, MSGBOX_AUTOCLOSE
# 316 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_COMBUSKEN, 25
# 317 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 318 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 319 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CombuskenInCaveTrigger_7
	return

CombuskenInCaveTrigger_5:
# 329 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 330 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, VulpixInCaveTrigger_Movement_1
# 331 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 332 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_2, MSGBOX_AUTOCLOSE
# 333 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_COMBUSKEN, 25
# 334 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 335 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 336 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CombuskenInCaveTrigger_9
	return

CombuskenInCaveTrigger_6:
# 346 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 347 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, CombuskenInCaveTrigger_Movement_0
# 348 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 349 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_2, MSGBOX_AUTOCLOSE
# 350 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_COMBUSKEN, 25
# 351 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 352 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 353 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CombuskenInCaveTrigger_11
	return

CombuskenInCaveTrigger_7:
# 321 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 322 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_3, MSGBOX_DEFAULT
# 323 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_COMBUSKEN_BATTLE
# 324 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 325 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

CombuskenInCaveTrigger_9:
# 338 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 339 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_3, MSGBOX_DEFAULT
# 340 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_COMBUSKEN_BATTLE
# 341 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 342 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

CombuskenInCaveTrigger_11:
# 355 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 356 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_3, MSGBOX_DEFAULT
# 357 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_COMBUSKEN_BATTLE
# 358 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 359 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


BattleVsArcanine::
# 367 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_set FLAG_TRANS_ARCANINE, BattleVsArcanine_2
# 371 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 372 "data/maps/DaycareVolcano/scripts.pory"
	playmoncry SPECIES_ARCANINE, CRY_MODE_NORMAL
# 373 "data/maps/DaycareVolcano/scripts.pory"
	waitmoncry
# 374 "data/maps/DaycareVolcano/scripts.pory"
	playse SE_PIN
# 375 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 376 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement LOCALID_PLAYER
# 377 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 378 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement LOCALID_PLAYER
# 379 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsArcanine_Movement_0
# 380 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement LOCALID_PLAYER
# 381 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsArcanine_Movement_1
# 382 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement LOCALID_PLAYER
# 383 "data/maps/DaycareVolcano/scripts.pory"
	playse SE_M_SCRATCH
# 384 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Arcanine, BattleVsArcanine_Movement_2
# 385 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Arcanine
# 386 "data/maps/DaycareVolcano/scripts.pory"
	speakername BattleVsArcanine_Text_0
# 387 "data/maps/DaycareVolcano/scripts.pory"
	msgbox BattleVsArcanine_Text_1, MSGBOX_AUTOCLOSE
# 388 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_ARCANINE, 25
# 389 "data/maps/DaycareVolcano/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 390 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 391 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 392 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsArcanine_4
	return

BattleVsArcanine_2:
	end

BattleVsArcanine_4:
# 394 "data/maps/DaycareVolcano/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 395 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_TRANS_ARCANINE
# 396 "data/maps/DaycareVolcano/scripts.pory"
	dittotransform SPECIES_ARCANINE
# 397 "data/maps/DaycareVolcano/scripts.pory"
	playse MUS_LEVEL_UP
# 398 "data/maps/DaycareVolcano/scripts.pory"
	msgbox BattleVsArcanine_Text_2, MSGBOX_DEFAULT
# 399 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 400 "data/maps/DaycareVolcano/scripts.pory"
	dittotransform VAR_TEMP_0
# 401 "data/maps/DaycareVolcano/scripts.pory"
	givemon SPECIES_ARCANINE, 25, move1 = MOVE_FLARE_BLITZ, move2 = MOVE_EXTREME_SPEED, move3 = MOVE_CRUNCH, move4 = MOVE_HOWL
# 402 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 403 "data/maps/DaycareVolcano/scripts.pory"
	speakername BattleVsArcanine_Text_0
# 404 "data/maps/DaycareVolcano/scripts.pory"
	msgbox BattleVsArcanine_Text_3, MSGBOX_DEFAULT
# 405 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 406 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Arcanine, BattleVsArcanine_Movement_3
# 407 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Arcanine
# 408 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Arcanine, BattleVsArcanine_Movement_4
# 409 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Arcanine
# 410 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


# 50 "data/maps/DaycareVolcano/scripts.pory"
CyndaquilInCaveTrigger_Movement_0:
# 50 "data/maps/DaycareVolcano/scripts.pory"
	face_up
	step_end

# 51 "data/maps/DaycareVolcano/scripts.pory"
CyndaquilInCaveTrigger_Movement_1:
# 51 "data/maps/DaycareVolcano/scripts.pory"
	walk_down
	step_end

# 133 "data/maps/DaycareVolcano/scripts.pory"
VulpixInCaveTrigger_Movement_0:
# 133 "data/maps/DaycareVolcano/scripts.pory"
	face_left
	step_end

# 150 "data/maps/DaycareVolcano/scripts.pory"
VulpixInCaveTrigger_Movement_1:
# 150 "data/maps/DaycareVolcano/scripts.pory"
	walk_right
	step_end

# 248 "data/maps/DaycareVolcano/scripts.pory"
FuecocoInCaveTrigger_Movement_0:
# 248 "data/maps/DaycareVolcano/scripts.pory"
	walk_down
# 248 "data/maps/DaycareVolcano/scripts.pory"
	walk_down
	step_end

# 347 "data/maps/DaycareVolcano/scripts.pory"
CombuskenInCaveTrigger_Movement_0:
# 347 "data/maps/DaycareVolcano/scripts.pory"
	walk_right
# 347 "data/maps/DaycareVolcano/scripts.pory"
	walk_right
	step_end

# 379 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_0:
# 379 "data/maps/DaycareVolcano/scripts.pory"
	lock_facing_direction
	step_end

# 381 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_1:
# 381 "data/maps/DaycareVolcano/scripts.pory"
	walk_fast_down
	step_end

# 384 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_2:
# 384 "data/maps/DaycareVolcano/scripts.pory"
	jump_2_down
# 384 "data/maps/DaycareVolcano/scripts.pory"
	jump_2_down
	step_end

# 406 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_3:
# 406 "data/maps/DaycareVolcano/scripts.pory"
	jump_2_up
# 406 "data/maps/DaycareVolcano/scripts.pory"
	jump_2_up
	step_end

# 408 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_4:
# 408 "data/maps/DaycareVolcano/scripts.pory"
	walk_in_place_down
	step_end

CyndaquilInCave_Text_0:
# 10 "data/maps/DaycareVolcano/scripts.pory"
	.string "Cyndaquil$"

CyndaquilInCave_Text_1:
# 11 "data/maps/DaycareVolcano/scripts.pory"
	.string "Go on!\nSee for yourself.$"

CyndaquilInCave_Text_2:
# 22 "data/maps/DaycareVolcano/scripts.pory"
	.string "The boss is so strong.\nHe must know how to gain EXP!$"

VulpixInCave_Text_0:
# 93 "data/maps/DaycareVolcano/scripts.pory"
	.string "Vulpix$"

VulpixInCave_Text_1:
# 94 "data/maps/DaycareVolcano/scripts.pory"
	.string "Someone once told me there's a\nplace where Vulpix live on snowy\lmountains... that sounds nice.$"

VulpixInCave_Text_2:
# 105 "data/maps/DaycareVolcano/scripts.pory"
	.string "Can't take the heat?\n$"

VulpixInCave_Text_3:
# 112 "data/maps/DaycareVolcano/scripts.pory"
	.string "Neither can I.\nIt's hot in here.$"

FuecocoInCave_Text_0:
# 174 "data/maps/DaycareVolcano/scripts.pory"
	.string "Fuecoco$"

FuecocoInCave_Text_1:
# 175 "data/maps/DaycareVolcano/scripts.pory"
	.string "At least it doesnt lag here in\nHoenn...$"

FuecocoInCave_Text_2:
# 186 "data/maps/DaycareVolcano/scripts.pory"
	.string "I joined this group to fit in!\n$"

FuecocoInCave_Text_3:
# 193 "data/maps/DaycareVolcano/scripts.pory"
	.string "No one here has even heard of\nPaldea...$"

CombuskenInCave_Text_0:
# 273 "data/maps/DaycareVolcano/scripts.pory"
	.string "Combusken$"

CombuskenInCave_Text_1:
# 274 "data/maps/DaycareVolcano/scripts.pory"
	.string "Ran out of steam.\n$"

CombuskenInCave_Text_2:
# 285 "data/maps/DaycareVolcano/scripts.pory"
	.string "I've heard the boss is so fast\nhe can gain EXP just by running\laround the Daycare!$"

CombuskenInCave_Text_3:
# 292 "data/maps/DaycareVolcano/scripts.pory"
	.string "Guess I should take a lap.\n$"

BattleVsArcanine_Text_0:
# 386 "data/maps/DaycareVolcano/scripts.pory"
	.string "Arcanine$"

BattleVsArcanine_Text_1:
# 387 "data/maps/DaycareVolcano/scripts.pory"
	.string "Your spirit burns bright.\pLet me test your flame.$"

BattleVsArcanine_Text_2:
# 398 "data/maps/DaycareVolcano/scripts.pory"
	.string "You have gained the ability to\ntransform into Arcanine!$"

BattleVsArcanine_Text_3:
# 404 "data/maps/DaycareVolcano/scripts.pory"
	.string "Carry yourself with honor.\pDon't soil my good name.$"
