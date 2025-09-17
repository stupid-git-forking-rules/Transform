DaycareVolcano_MapScripts::
# 2 "data/maps/DaycareVolcano/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DaycareVolcano_OnTransition
	.byte 0


DaycareVolcano_OnTransition::
# 6 "data/maps/DaycareVolcano/scripts.pory"
	setrespawn HEAL_LOCATION_DAYCARE_VOLCANO
	end


CyndaquilInCave::
# 11 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 12 "data/maps/DaycareVolcano/scripts.pory"
	faceplayer
# 13 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_set FLAG_CYNDAQUIL_BATTLE, CyndaquilInCave_1
# 25 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Cyndaquil, CyndaquilInCave_Movement_0
# 26 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Cyndaquil
# 27 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 28 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Cyndaquil, Common_Movement_ExclamationMark
# 29 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Cyndaquil
# 30 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 31 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 32 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_CYNDAQUIL, EMOTE_NORMAL
# 33 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_2, MSGBOX_AUTOCLOSE
# 34 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 35 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_CYNDAQUIL, 25
# 36 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 37 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 38 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CyndaquilInCave_4
	return

CyndaquilInCave_1:
# 15 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 16 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_CYNDAQUIL, EMOTE_NORMAL
# 17 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_1, MSGBOX_DEFAULT
# 18 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 19 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 20 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

CyndaquilInCave_4:
# 40 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 41 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_CYNDAQUIL, EMOTE_NORMAL
# 42 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_1, MSGBOX_DEFAULT
# 43 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_CYNDAQUIL_BATTLE
# 44 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 45 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 46 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


CyndaquilInCaveTrigger::
# 54 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_unset FLAG_CYNDAQUIL_BATTLE, CyndaquilInCaveTrigger_1
	return

CyndaquilInCaveTrigger_1:
# 56 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 57 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Cyndaquil, Common_Movement_ExclamationMark
# 58 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Cyndaquil
# 59 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 60 "data/maps/DaycareVolcano/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 61 "data/maps/DaycareVolcano/scripts.pory"
	switch VAR_TEMP_2
# 63 "data/maps/DaycareVolcano/scripts.pory"
	case 37, CyndaquilInCaveTrigger_4
# 85 "data/maps/DaycareVolcano/scripts.pory"
	case 36, CyndaquilInCaveTrigger_5
	return

CyndaquilInCaveTrigger_4:
# 64 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 65 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Cyndaquil, CyndaquilInCaveTrigger_Movement_1
# 66 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Cyndaquil
# 67 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 68 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_CYNDAQUIL, EMOTE_NORMAL
# 69 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_2, MSGBOX_AUTOCLOSE
# 70 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 71 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_CYNDAQUIL, 25
# 72 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 73 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 74 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CyndaquilInCaveTrigger_6
	return

CyndaquilInCaveTrigger_5:
# 86 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 87 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 88 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_CYNDAQUIL, EMOTE_NORMAL
# 89 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_2, MSGBOX_AUTOCLOSE
# 90 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 91 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_CYNDAQUIL, 25
# 92 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 93 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 94 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CyndaquilInCaveTrigger_8
	return

CyndaquilInCaveTrigger_6:
# 76 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 77 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_CYNDAQUIL, EMOTE_NORMAL
# 78 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_1, MSGBOX_DEFAULT
# 79 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_CYNDAQUIL_BATTLE
# 80 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 81 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 82 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

CyndaquilInCaveTrigger_8:
# 96 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 97 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_CYNDAQUIL, EMOTE_NORMAL
# 98 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_1, MSGBOX_DEFAULT
# 99 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_CYNDAQUIL_BATTLE
# 100 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 101 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 102 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


VulpixInCave::
# 111 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 112 "data/maps/DaycareVolcano/scripts.pory"
	faceplayer
# 113 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_set FLAG_VULPIX_BATTLE, VulpixInCave_1
# 125 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Vulpix, CyndaquilInCave_Movement_0
# 126 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Vulpix
# 127 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 128 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Vulpix, Common_Movement_ExclamationMark
# 129 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Vulpix
# 130 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 131 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 132 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_VULPIX, EMOTE_NORMAL
# 133 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_2, MSGBOX_AUTOCLOSE
# 134 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 135 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_VULPIX, 25
# 136 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 137 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 138 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VulpixInCave_4
	return

VulpixInCave_1:
# 115 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 116 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_VULPIX, EMOTE_NORMAL
# 117 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_1, MSGBOX_DEFAULT
# 118 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 119 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 120 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

VulpixInCave_4:
# 140 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 141 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_VULPIX, EMOTE_NORMAL
# 142 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_3, MSGBOX_DEFAULT
# 143 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_VULPIX_BATTLE
# 144 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 145 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 146 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


VulpixInCaveTrigger::
# 154 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_unset FLAG_VULPIX_BATTLE, VulpixInCaveTrigger_1
	return

VulpixInCaveTrigger_1:
# 156 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 157 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Vulpix, Common_Movement_ExclamationMark
# 158 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Vulpix
# 159 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 160 "data/maps/DaycareVolcano/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 161 "data/maps/DaycareVolcano/scripts.pory"
	switch VAR_TEMP_1
# 163 "data/maps/DaycareVolcano/scripts.pory"
	case 26, VulpixInCaveTrigger_4
# 184 "data/maps/DaycareVolcano/scripts.pory"
	case 27, VulpixInCaveTrigger_5
	return

VulpixInCaveTrigger_4:
# 164 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 165 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 166 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 167 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_VULPIX, EMOTE_NORMAL
# 168 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_2, MSGBOX_AUTOCLOSE
# 169 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 170 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_VULPIX, 25
# 171 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 172 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 173 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VulpixInCaveTrigger_6
	return

VulpixInCaveTrigger_5:
# 185 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 186 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Vulpix, VulpixInCaveTrigger_Movement_1
# 187 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Vulpix
# 188 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 189 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_VULPIX, EMOTE_NORMAL
# 190 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_2, MSGBOX_AUTOCLOSE
# 191 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 192 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_VULPIX, 25
# 193 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 194 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 195 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VulpixInCaveTrigger_8
	return

VulpixInCaveTrigger_6:
# 175 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 176 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_VULPIX, EMOTE_NORMAL
# 177 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_3, MSGBOX_DEFAULT
# 178 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_VULPIX_BATTLE
# 179 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 180 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 181 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

VulpixInCaveTrigger_8:
# 197 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 198 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_VULPIX, EMOTE_NORMAL
# 199 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_3, MSGBOX_DEFAULT
# 200 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_VULPIX_BATTLE
# 201 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 202 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 203 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


FuecocoInCave::
# 211 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 212 "data/maps/DaycareVolcano/scripts.pory"
	faceplayer
# 213 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_set FLAG_FUECOCO_BATTLE, FuecocoInCave_1
# 225 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, CyndaquilInCave_Movement_0
# 226 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Fuecoco
# 227 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 228 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, Common_Movement_ExclamationMark
# 229 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Fuecoco
# 230 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 231 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 232 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_FUECOCO, EMOTE_NORMAL
# 233 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_2, MSGBOX_AUTOCLOSE
# 234 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 235 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_FUECOCO, 25, move1 = MOVE_SNARL, move2 = MOVE_YAWN, move3 = MOVE_INCINERATE, move4 = MOVE_CURSE
# 236 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 237 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 238 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FuecocoInCave_4
	return

FuecocoInCave_1:
# 215 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 216 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_FUECOCO, EMOTE_NORMAL
# 217 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_1, MSGBOX_DEFAULT
# 218 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 219 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 220 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

FuecocoInCave_4:
# 240 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 241 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_FUECOCO, EMOTE_NORMAL
# 242 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_3, MSGBOX_DEFAULT
# 243 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_FUECOCO_BATTLE
# 244 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 245 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 246 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


FuecocoInCaveTrigger::
# 253 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_unset FLAG_FUECOCO_BATTLE, FuecocoInCaveTrigger_1
	return

FuecocoInCaveTrigger_1:
# 255 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 256 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, Common_Movement_ExclamationMark
# 257 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Fuecoco
# 258 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 259 "data/maps/DaycareVolcano/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 260 "data/maps/DaycareVolcano/scripts.pory"
	switch VAR_TEMP_2
# 262 "data/maps/DaycareVolcano/scripts.pory"
	case 21, FuecocoInCaveTrigger_4
# 284 "data/maps/DaycareVolcano/scripts.pory"
	case 20, FuecocoInCaveTrigger_5
# 304 "data/maps/DaycareVolcano/scripts.pory"
	case 22, FuecocoInCaveTrigger_6
	return

FuecocoInCaveTrigger_4:
# 263 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 264 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, CyndaquilInCaveTrigger_Movement_1
# 265 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Fuecoco
# 266 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 267 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_FUECOCO, EMOTE_NORMAL
# 268 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_2, MSGBOX_AUTOCLOSE
# 269 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 270 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_FUECOCO, 25, move1 = MOVE_SNARL, move2 = MOVE_YAWN, move3 = MOVE_INCINERATE, move4 = MOVE_CURSE
# 271 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 272 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 273 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FuecocoInCaveTrigger_7
	return

FuecocoInCaveTrigger_5:
# 285 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 286 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 287 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_FUECOCO, EMOTE_NORMAL
# 288 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_2, MSGBOX_AUTOCLOSE
# 289 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 290 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_FUECOCO, 25, move1 = MOVE_SNARL, move2 = MOVE_YAWN, move3 = MOVE_INCINERATE, move4 = MOVE_CURSE
# 291 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 292 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 293 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FuecocoInCaveTrigger_9
	return

FuecocoInCaveTrigger_6:
# 305 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 306 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, FuecocoInCaveTrigger_Movement_0
# 307 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Fuecoco
# 308 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 309 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_FUECOCO, EMOTE_NORMAL
# 310 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_2, MSGBOX_AUTOCLOSE
# 311 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 312 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_FUECOCO, 25, move1 = MOVE_SNARL, move2 = MOVE_YAWN, move3 = MOVE_INCINERATE, move4 = MOVE_CURSE
# 313 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 314 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 315 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FuecocoInCaveTrigger_11
	return

FuecocoInCaveTrigger_7:
# 275 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 276 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_FUECOCO, EMOTE_NORMAL
# 277 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_3, MSGBOX_DEFAULT
# 278 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_FUECOCO_BATTLE
# 279 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 280 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 281 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

FuecocoInCaveTrigger_9:
# 295 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 296 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_FUECOCO, EMOTE_NORMAL
# 297 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_3, MSGBOX_DEFAULT
# 298 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_FUECOCO_BATTLE
# 299 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 300 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 301 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

FuecocoInCaveTrigger_11:
# 317 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 318 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_FUECOCO, EMOTE_NORMAL
# 319 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_3, MSGBOX_DEFAULT
# 320 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_FUECOCO_BATTLE
# 321 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 322 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 323 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


CombuskenInCave::
# 331 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 332 "data/maps/DaycareVolcano/scripts.pory"
	faceplayer
# 333 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_set FLAG_COMBUSKEN_BATTLE, CombuskenInCave_1
# 345 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, CyndaquilInCave_Movement_0
# 346 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Combusken
# 347 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 348 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, Common_Movement_ExclamationMark
# 349 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Combusken
# 350 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 351 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 352 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_COMBUSKEN, EMOTE_NORMAL
# 353 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_2, MSGBOX_AUTOCLOSE
# 354 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 355 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_COMBUSKEN, 25
# 356 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 357 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 358 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CombuskenInCave_4
	return

CombuskenInCave_1:
# 335 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 336 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_COMBUSKEN, EMOTE_NORMAL
# 337 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_1, MSGBOX_DEFAULT
# 338 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 339 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 340 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

CombuskenInCave_4:
# 360 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 361 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_COMBUSKEN, EMOTE_NORMAL
# 362 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_3, MSGBOX_DEFAULT
# 363 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_COMBUSKEN_BATTLE
# 364 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 365 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 366 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


CombuskenInCaveTrigger::
# 374 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_unset FLAG_COMBUSKEN_BATTLE, CombuskenInCaveTrigger_1
	return

CombuskenInCaveTrigger_1:
# 376 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 377 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, Common_Movement_ExclamationMark
# 378 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Combusken
# 379 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 380 "data/maps/DaycareVolcano/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 381 "data/maps/DaycareVolcano/scripts.pory"
	switch VAR_TEMP_1
# 383 "data/maps/DaycareVolcano/scripts.pory"
	case 6, CombuskenInCaveTrigger_4
# 403 "data/maps/DaycareVolcano/scripts.pory"
	case 7, CombuskenInCaveTrigger_5
# 425 "data/maps/DaycareVolcano/scripts.pory"
	case 8, CombuskenInCaveTrigger_6
	return

CombuskenInCaveTrigger_4:
# 384 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 385 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 386 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_COMBUSKEN, EMOTE_NORMAL
# 387 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_2, MSGBOX_AUTOCLOSE
# 388 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 389 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_COMBUSKEN, 25
# 390 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 391 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 392 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CombuskenInCaveTrigger_7
	return

CombuskenInCaveTrigger_5:
# 404 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 405 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, VulpixInCaveTrigger_Movement_1
# 406 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Combusken
# 407 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 408 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_COMBUSKEN, EMOTE_NORMAL
# 409 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_2, MSGBOX_AUTOCLOSE
# 410 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 411 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_COMBUSKEN, 25
# 412 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 413 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 414 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CombuskenInCaveTrigger_9
	return

CombuskenInCaveTrigger_6:
# 426 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 427 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, CombuskenInCaveTrigger_Movement_0
# 428 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Combusken
# 429 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 430 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_COMBUSKEN, EMOTE_NORMAL
# 431 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_2, MSGBOX_AUTOCLOSE
# 432 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 433 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_COMBUSKEN, 25
# 434 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 435 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 436 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CombuskenInCaveTrigger_11
	return

CombuskenInCaveTrigger_7:
# 394 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 395 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_COMBUSKEN, EMOTE_NORMAL
# 396 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_3, MSGBOX_DEFAULT
# 397 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_COMBUSKEN_BATTLE
# 398 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 399 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 400 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

CombuskenInCaveTrigger_9:
# 416 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 417 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_COMBUSKEN, EMOTE_NORMAL
# 418 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_3, MSGBOX_DEFAULT
# 419 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_COMBUSKEN_BATTLE
# 420 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 421 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 422 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

CombuskenInCaveTrigger_11:
# 438 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 439 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_COMBUSKEN, EMOTE_NORMAL
# 440 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_3, MSGBOX_DEFAULT
# 441 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_COMBUSKEN_BATTLE
# 442 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 443 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 444 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


BattleVsArcanine::
# 452 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_set FLAG_TRANS_ARCANINE, BattleVsArcanine_2
# 456 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 457 "data/maps/DaycareVolcano/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 458 "data/maps/DaycareVolcano/scripts.pory"
	playmoncry SPECIES_ARCANINE, CRY_MODE_NORMAL
# 459 "data/maps/DaycareVolcano/scripts.pory"
	waitmoncry
# 460 "data/maps/DaycareVolcano/scripts.pory"
	playse SE_PIN
# 461 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 462 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement LOCALID_PLAYER
# 463 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 464 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement LOCALID_PLAYER
# 465 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsArcanine_Movement_0
# 466 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement LOCALID_PLAYER
# 467 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsArcanine_Movement_1
# 468 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement LOCALID_PLAYER
# 469 "data/maps/DaycareVolcano/scripts.pory"
	playse SE_LEDGE
# 470 "data/maps/DaycareVolcano/scripts.pory"
	playse SE_LEDGE
# 471 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Arcanine, BattleVsArcanine_Movement_2
# 472 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Arcanine
# 473 "data/maps/DaycareVolcano/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 474 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_ARCANINE, EMOTE_ANGRY
# 475 "data/maps/DaycareVolcano/scripts.pory"
	speakername BattleVsArcanine_Text_0
# 476 "data/maps/DaycareVolcano/scripts.pory"
	msgbox BattleVsArcanine_Text_1, MSGBOX_AUTOCLOSE
# 477 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 478 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_ARCANINE, 25, move1 = MOVE_FLAME_WHEEL, move2 = MOVE_FIRE_FANG, move3 = MOVE_FLAMETHROWER, move4 = MOVE_EMBER
# 479 "data/maps/DaycareVolcano/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 0, 1, 1, 0
# 480 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 481 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 482 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsArcanine_4
	return

BattleVsArcanine_2:
	end

BattleVsArcanine_4:
# 484 "data/maps/DaycareVolcano/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 485 "data/maps/DaycareVolcano/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 486 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_TRANS_ARCANINE
# 487 "data/maps/DaycareVolcano/scripts.pory"
	delay 15
# 488 "data/maps/DaycareVolcano/scripts.pory"
	dittotransform SPECIES_ARCANINE
# 489 "data/maps/DaycareVolcano/scripts.pory"
	playse MUS_LEVEL_UP
# 490 "data/maps/DaycareVolcano/scripts.pory"
	msgbox BattleVsArcanine_Text_2, MSGBOX_DEFAULT
# 491 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 492 "data/maps/DaycareVolcano/scripts.pory"
	dittotransform VAR_TEMP_0
# 493 "data/maps/DaycareVolcano/scripts.pory"
	givemon SPECIES_ARCANINE, 25, move1 = MOVE_FIRE_FANG, move2 = MOVE_BITE, move3 = MOVE_AERIAL_ACE, move4 = MOVE_THUNDER_FANG
# 494 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 495 "data/maps/DaycareVolcano/scripts.pory"
	speakername BattleVsArcanine_Text_0
# 496 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_ARCANINE, EMOTE_NORMAL
# 497 "data/maps/DaycareVolcano/scripts.pory"
	msgbox BattleVsArcanine_Text_3, MSGBOX_AUTOCLOSE
# 498 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 499 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 500 "data/maps/DaycareVolcano/scripts.pory"
	playse SE_LEDGE
# 501 "data/maps/DaycareVolcano/scripts.pory"
	playse SE_LEDGE
# 502 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Arcanine, BattleVsArcanine_Movement_3
# 503 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Arcanine
# 504 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Arcanine, BattleVsArcanine_Movement_4
# 505 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Arcanine
# 506 "data/maps/DaycareVolcano/scripts.pory"
	fadenewbgm MUS_PMD_VOLCANO
# 507 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


ChanseyDaycareVolcano::
# 513 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 514 "data/maps/DaycareVolcano/scripts.pory"
	faceplayer
# 515 "data/maps/DaycareVolcano/scripts.pory"
	speakername ChanseyDaycareVolcano_Text_0
# 516 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 517 "data/maps/DaycareVolcano/scripts.pory"
	msgbox ChanseyDaycareVolcano_Text_1, MSGBOX_DEFAULT
# 518 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 519 "data/maps/DaycareVolcano/scripts.pory"
	msgbox ChanseyDaycareVolcano_Text_2, MSGBOX_YESNO
# 520 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 521 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyDaycareVolcano_1
# 551 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 552 "data/maps/DaycareVolcano/scripts.pory"
	msgbox ChanseyDaycareVolcano_Text_5, MSGBOX_AUTOCLOSE
# 553 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 554 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 555 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

ChanseyDaycareVolcano_1:
# 523 "data/maps/DaycareVolcano/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 524 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyDaycareVolcano_4
# 541 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 542 "data/maps/DaycareVolcano/scripts.pory"
	msgbox ChanseyDaycareVolcano_Text_4, MSGBOX_AUTOCLOSE
# 543 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 544 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 545 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

ChanseyDaycareVolcano_4:
# 526 "data/maps/DaycareVolcano/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 527 "data/maps/DaycareVolcano/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 528 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 529 "data/maps/DaycareVolcano/scripts.pory"
	playfanfare MUS_HEAL
# 530 "data/maps/DaycareVolcano/scripts.pory"
	waitfanfare
# 531 "data/maps/DaycareVolcano/scripts.pory"
	special HealPlayerParty
# 532 "data/maps/DaycareVolcano/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 533 "data/maps/DaycareVolcano/scripts.pory"
	msgbox ChanseyDaycareVolcano_Text_3, MSGBOX_AUTOCLOSE
# 534 "data/maps/DaycareVolcano/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 535 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 536 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


# 25 "data/maps/DaycareVolcano/scripts.pory"
CyndaquilInCave_Movement_0:
# 25 "data/maps/DaycareVolcano/scripts.pory"
	face_player
	step_end

# 64 "data/maps/DaycareVolcano/scripts.pory"
CyndaquilInCaveTrigger_Movement_0:
# 64 "data/maps/DaycareVolcano/scripts.pory"
	face_up
	step_end

# 65 "data/maps/DaycareVolcano/scripts.pory"
CyndaquilInCaveTrigger_Movement_1:
# 65 "data/maps/DaycareVolcano/scripts.pory"
	walk_down
	step_end

# 164 "data/maps/DaycareVolcano/scripts.pory"
VulpixInCaveTrigger_Movement_0:
# 164 "data/maps/DaycareVolcano/scripts.pory"
	face_left
	step_end

# 186 "data/maps/DaycareVolcano/scripts.pory"
VulpixInCaveTrigger_Movement_1:
# 186 "data/maps/DaycareVolcano/scripts.pory"
	walk_right
	step_end

# 306 "data/maps/DaycareVolcano/scripts.pory"
FuecocoInCaveTrigger_Movement_0:
# 306 "data/maps/DaycareVolcano/scripts.pory"
	walk_down
# 306 "data/maps/DaycareVolcano/scripts.pory"
	walk_down
	step_end

# 427 "data/maps/DaycareVolcano/scripts.pory"
CombuskenInCaveTrigger_Movement_0:
# 427 "data/maps/DaycareVolcano/scripts.pory"
	walk_right
# 427 "data/maps/DaycareVolcano/scripts.pory"
	walk_right
	step_end

# 465 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_0:
# 465 "data/maps/DaycareVolcano/scripts.pory"
	lock_facing_direction
	step_end

# 467 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_1:
# 467 "data/maps/DaycareVolcano/scripts.pory"
	walk_fast_down
	step_end

# 471 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_2:
# 471 "data/maps/DaycareVolcano/scripts.pory"
	jump_2_down
# 471 "data/maps/DaycareVolcano/scripts.pory"
	jump_2_down
	step_end

# 502 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_3:
# 502 "data/maps/DaycareVolcano/scripts.pory"
	jump_2_up
# 502 "data/maps/DaycareVolcano/scripts.pory"
	jump_2_up
	step_end

# 504 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_4:
# 504 "data/maps/DaycareVolcano/scripts.pory"
	walk_in_place_down
	step_end

CyndaquilInCave_Text_0:
# 15 "data/maps/DaycareVolcano/scripts.pory"
	.string "Cyndaquil$"

CyndaquilInCave_Text_1:
# 17 "data/maps/DaycareVolcano/scripts.pory"
	.string "Go on!\nSee for yourself.$"

CyndaquilInCave_Text_2:
# 33 "data/maps/DaycareVolcano/scripts.pory"
	.string "The boss is so strong.\nHe must know how to gain EXP!$"

VulpixInCave_Text_0:
# 115 "data/maps/DaycareVolcano/scripts.pory"
	.string "Vulpix$"

VulpixInCave_Text_1:
# 117 "data/maps/DaycareVolcano/scripts.pory"
	.string "Someone once told me there's a\nplace where Vulpix live on snowy\lmountains... that sounds nice.$"

VulpixInCave_Text_2:
# 133 "data/maps/DaycareVolcano/scripts.pory"
	.string "Can't take the heat?\n$"

VulpixInCave_Text_3:
# 142 "data/maps/DaycareVolcano/scripts.pory"
	.string "Neither can I.\nIt's hot in here.$"

FuecocoInCave_Text_0:
# 215 "data/maps/DaycareVolcano/scripts.pory"
	.string "Fuecoco$"

FuecocoInCave_Text_1:
# 217 "data/maps/DaycareVolcano/scripts.pory"
	.string "At least it doesnt lag here in\nHoenn...$"

FuecocoInCave_Text_2:
# 233 "data/maps/DaycareVolcano/scripts.pory"
	.string "I joined this group to fit in!\n$"

FuecocoInCave_Text_3:
# 242 "data/maps/DaycareVolcano/scripts.pory"
	.string "No one here has even heard of\nPaldea...$"

CombuskenInCave_Text_0:
# 335 "data/maps/DaycareVolcano/scripts.pory"
	.string "Combusken$"

CombuskenInCave_Text_1:
# 337 "data/maps/DaycareVolcano/scripts.pory"
	.string "Ran out of steam.\n$"

CombuskenInCave_Text_2:
# 353 "data/maps/DaycareVolcano/scripts.pory"
	.string "I've heard the boss is so fast\nhe can gain EXP just by running\laround the Daycare!$"

CombuskenInCave_Text_3:
# 362 "data/maps/DaycareVolcano/scripts.pory"
	.string "Guess I should take a lap.\n$"

BattleVsArcanine_Text_0:
# 475 "data/maps/DaycareVolcano/scripts.pory"
	.string "Arcanine$"

BattleVsArcanine_Text_1:
# 476 "data/maps/DaycareVolcano/scripts.pory"
	.string "Aha!\pA challenger.\pYou must be strong if you battled\nyour way through my volcano.\pI see how your spirit burns bright.\pMaybe taking you down will grant me\nthe EXP I am looking for.\pLet me test your flame!\n$"

BattleVsArcanine_Text_2:
# 490 "data/maps/DaycareVolcano/scripts.pory"
	.string "You have gained the ability to\ntransform into Arcanine!$"

BattleVsArcanine_Text_3:
# 497 "data/maps/DaycareVolcano/scripts.pory"
	.string "Carry yourself with honor.\pDon't soil my good name.\pMaybe you will unlock the secret\nto gain EXP.$"

ChanseyDaycareVolcano_Text_0:
# 515 "data/maps/DaycareVolcano/scripts.pory"
	.string "Chansey$"

ChanseyDaycareVolcano_Text_1:
# 517 "data/maps/DaycareVolcano/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.$"

ChanseyDaycareVolcano_Text_2:
# 519 "data/maps/DaycareVolcano/scripts.pory"
	.string "Would you like to heal?$"

ChanseyDaycareVolcano_Text_3:
# 533 "data/maps/DaycareVolcano/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyDaycareVolcano_Text_4:
# 542 "data/maps/DaycareVolcano/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyDaycareVolcano_Text_5:
# 552 "data/maps/DaycareVolcano/scripts.pory"
	.string "Oh, okay then.$"
