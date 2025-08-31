DaycareVolcano_MapScripts::
	.byte 0


CyndaquilInCave::
# 6 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 7 "data/maps/DaycareVolcano/scripts.pory"
	faceplayer
# 8 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_set FLAG_CYNDAQUIL_BATTLE, CyndaquilInCave_1
# 20 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Cyndaquil, CyndaquilInCave_Movement_0
# 21 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Cyndaquil
# 22 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 23 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Cyndaquil, Common_Movement_ExclamationMark
# 24 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Cyndaquil
# 25 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 26 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 27 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_CYNDAQUIL, EMOTE_NORMAL
# 28 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_2, MSGBOX_AUTOCLOSE
# 29 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 30 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_CYNDAQUIL, 25
# 31 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 32 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 33 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CyndaquilInCave_4
	return

CyndaquilInCave_1:
# 10 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 11 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_CYNDAQUIL, EMOTE_NORMAL
# 12 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 14 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 15 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

CyndaquilInCave_4:
# 35 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 36 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_CYNDAQUIL, EMOTE_NORMAL
# 37 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_1, MSGBOX_DEFAULT
# 38 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_CYNDAQUIL_BATTLE
# 39 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 40 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 41 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


CyndaquilInCaveTrigger::
# 49 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_unset FLAG_CYNDAQUIL_BATTLE, CyndaquilInCaveTrigger_1
	return

CyndaquilInCaveTrigger_1:
# 51 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 52 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Cyndaquil, Common_Movement_ExclamationMark
# 53 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Cyndaquil
# 54 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 55 "data/maps/DaycareVolcano/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 56 "data/maps/DaycareVolcano/scripts.pory"
	switch VAR_TEMP_2
# 58 "data/maps/DaycareVolcano/scripts.pory"
	case 37, CyndaquilInCaveTrigger_4
# 80 "data/maps/DaycareVolcano/scripts.pory"
	case 36, CyndaquilInCaveTrigger_5
	return

CyndaquilInCaveTrigger_4:
# 59 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 60 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Cyndaquil, CyndaquilInCaveTrigger_Movement_1
# 61 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Cyndaquil
# 62 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 63 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_CYNDAQUIL, EMOTE_NORMAL
# 64 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_2, MSGBOX_AUTOCLOSE
# 65 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 66 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_CYNDAQUIL, 25
# 67 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 68 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 69 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CyndaquilInCaveTrigger_6
	return

CyndaquilInCaveTrigger_5:
# 81 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 82 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 83 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_CYNDAQUIL, EMOTE_NORMAL
# 84 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_2, MSGBOX_AUTOCLOSE
# 85 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 86 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_CYNDAQUIL, 25
# 87 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 88 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 89 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CyndaquilInCaveTrigger_8
	return

CyndaquilInCaveTrigger_6:
# 71 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 72 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_CYNDAQUIL, EMOTE_NORMAL
# 73 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_1, MSGBOX_DEFAULT
# 74 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_CYNDAQUIL_BATTLE
# 75 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 76 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 77 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

CyndaquilInCaveTrigger_8:
# 91 "data/maps/DaycareVolcano/scripts.pory"
	speakername CyndaquilInCave_Text_0
# 92 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_CYNDAQUIL, EMOTE_NORMAL
# 93 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CyndaquilInCave_Text_1, MSGBOX_DEFAULT
# 94 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_CYNDAQUIL_BATTLE
# 95 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 96 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 97 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


VulpixInCave::
# 106 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 107 "data/maps/DaycareVolcano/scripts.pory"
	faceplayer
# 108 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_set FLAG_VULPIX_BATTLE, VulpixInCave_1
# 120 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Vulpix, CyndaquilInCave_Movement_0
# 121 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Vulpix
# 122 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 123 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Vulpix, Common_Movement_ExclamationMark
# 124 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Vulpix
# 125 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 126 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 127 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_VULPIX, EMOTE_NORMAL
# 128 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_2, MSGBOX_AUTOCLOSE
# 129 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 130 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_VULPIX, 25
# 131 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 132 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 133 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VulpixInCave_4
	return

VulpixInCave_1:
# 110 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 111 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_VULPIX, EMOTE_NORMAL
# 112 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_1, MSGBOX_DEFAULT
# 113 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 114 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 115 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

VulpixInCave_4:
# 135 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 136 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_VULPIX, EMOTE_NORMAL
# 137 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_3, MSGBOX_DEFAULT
# 138 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_VULPIX_BATTLE
# 139 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 140 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 141 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


VulpixInCaveTrigger::
# 149 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_unset FLAG_VULPIX_BATTLE, VulpixInCaveTrigger_1
	return

VulpixInCaveTrigger_1:
# 151 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 152 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Vulpix, Common_Movement_ExclamationMark
# 153 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Vulpix
# 154 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 155 "data/maps/DaycareVolcano/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 156 "data/maps/DaycareVolcano/scripts.pory"
	switch VAR_TEMP_1
# 158 "data/maps/DaycareVolcano/scripts.pory"
	case 26, VulpixInCaveTrigger_4
# 179 "data/maps/DaycareVolcano/scripts.pory"
	case 27, VulpixInCaveTrigger_5
	return

VulpixInCaveTrigger_4:
# 159 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 160 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 161 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 162 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_VULPIX, EMOTE_NORMAL
# 163 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_2, MSGBOX_AUTOCLOSE
# 164 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 165 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_VULPIX, 25
# 166 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 167 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 168 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VulpixInCaveTrigger_6
	return

VulpixInCaveTrigger_5:
# 180 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 181 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Vulpix, VulpixInCaveTrigger_Movement_1
# 182 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Vulpix
# 183 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 184 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_VULPIX, EMOTE_NORMAL
# 185 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_2, MSGBOX_AUTOCLOSE
# 186 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 187 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_VULPIX, 25
# 188 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 189 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 190 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VulpixInCaveTrigger_8
	return

VulpixInCaveTrigger_6:
# 170 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 171 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_VULPIX, EMOTE_NORMAL
# 172 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_3, MSGBOX_DEFAULT
# 173 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_VULPIX_BATTLE
# 174 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 175 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 176 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

VulpixInCaveTrigger_8:
# 192 "data/maps/DaycareVolcano/scripts.pory"
	speakername VulpixInCave_Text_0
# 193 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_VULPIX, EMOTE_NORMAL
# 194 "data/maps/DaycareVolcano/scripts.pory"
	msgbox VulpixInCave_Text_3, MSGBOX_DEFAULT
# 195 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_VULPIX_BATTLE
# 196 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 197 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 198 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


FuecocoInCave::
# 206 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 207 "data/maps/DaycareVolcano/scripts.pory"
	faceplayer
# 208 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_set FLAG_FUECOCO_BATTLE, FuecocoInCave_1
# 220 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, CyndaquilInCave_Movement_0
# 221 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Fuecoco
# 222 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 223 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, Common_Movement_ExclamationMark
# 224 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Fuecoco
# 225 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 226 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 227 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_FUECOCO, EMOTE_NORMAL
# 228 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_2, MSGBOX_AUTOCLOSE
# 229 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 230 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_FUECOCO, 25, move1 = MOVE_SNARL, move2 = MOVE_YAWN, move3 = MOVE_INCINERATE, move4 = MOVE_CURSE
# 231 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 232 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 233 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FuecocoInCave_4
	return

FuecocoInCave_1:
# 210 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 211 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_FUECOCO, EMOTE_NORMAL
# 212 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_1, MSGBOX_DEFAULT
# 213 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 214 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 215 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

FuecocoInCave_4:
# 235 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 236 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_FUECOCO, EMOTE_NORMAL
# 237 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_3, MSGBOX_DEFAULT
# 238 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_FUECOCO_BATTLE
# 239 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 240 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 241 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


FuecocoInCaveTrigger::
# 248 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_unset FLAG_FUECOCO_BATTLE, FuecocoInCaveTrigger_1
	return

FuecocoInCaveTrigger_1:
# 250 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 251 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, Common_Movement_ExclamationMark
# 252 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Fuecoco
# 253 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 254 "data/maps/DaycareVolcano/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 255 "data/maps/DaycareVolcano/scripts.pory"
	switch VAR_TEMP_2
# 257 "data/maps/DaycareVolcano/scripts.pory"
	case 21, FuecocoInCaveTrigger_4
# 279 "data/maps/DaycareVolcano/scripts.pory"
	case 20, FuecocoInCaveTrigger_5
# 299 "data/maps/DaycareVolcano/scripts.pory"
	case 22, FuecocoInCaveTrigger_6
	return

FuecocoInCaveTrigger_4:
# 258 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 259 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, CyndaquilInCaveTrigger_Movement_1
# 260 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Fuecoco
# 261 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 262 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_FUECOCO, EMOTE_NORMAL
# 263 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_2, MSGBOX_AUTOCLOSE
# 264 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 265 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_FUECOCO, 25, move1 = MOVE_SNARL, move2 = MOVE_YAWN, move3 = MOVE_INCINERATE, move4 = MOVE_CURSE
# 266 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 267 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 268 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FuecocoInCaveTrigger_7
	return

FuecocoInCaveTrigger_5:
# 280 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 281 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 282 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_FUECOCO, EMOTE_NORMAL
# 283 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_2, MSGBOX_AUTOCLOSE
# 284 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 285 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_FUECOCO, 25, move1 = MOVE_SNARL, move2 = MOVE_YAWN, move3 = MOVE_INCINERATE, move4 = MOVE_CURSE
# 286 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 287 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 288 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FuecocoInCaveTrigger_9
	return

FuecocoInCaveTrigger_6:
# 300 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 301 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Fuecoco, FuecocoInCaveTrigger_Movement_0
# 302 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Fuecoco
# 303 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 304 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_FUECOCO, EMOTE_NORMAL
# 305 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_2, MSGBOX_AUTOCLOSE
# 306 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 307 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_FUECOCO, 25, move1 = MOVE_SNARL, move2 = MOVE_YAWN, move3 = MOVE_INCINERATE, move4 = MOVE_CURSE
# 308 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 309 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 310 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FuecocoInCaveTrigger_11
	return

FuecocoInCaveTrigger_7:
# 270 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 271 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_FUECOCO, EMOTE_NORMAL
# 272 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_3, MSGBOX_DEFAULT
# 273 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_FUECOCO_BATTLE
# 274 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 275 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 276 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

FuecocoInCaveTrigger_9:
# 290 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 291 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_FUECOCO, EMOTE_NORMAL
# 292 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_3, MSGBOX_DEFAULT
# 293 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_FUECOCO_BATTLE
# 294 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 295 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 296 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

FuecocoInCaveTrigger_11:
# 312 "data/maps/DaycareVolcano/scripts.pory"
	speakername FuecocoInCave_Text_0
# 313 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_FUECOCO, EMOTE_NORMAL
# 314 "data/maps/DaycareVolcano/scripts.pory"
	msgbox FuecocoInCave_Text_3, MSGBOX_DEFAULT
# 315 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_FUECOCO_BATTLE
# 316 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 317 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 318 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


CombuskenInCave::
# 326 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 327 "data/maps/DaycareVolcano/scripts.pory"
	faceplayer
# 328 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_set FLAG_COMBUSKEN_BATTLE, CombuskenInCave_1
# 340 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, CyndaquilInCave_Movement_0
# 341 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Combusken
# 342 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 343 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, Common_Movement_ExclamationMark
# 344 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Combusken
# 345 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 346 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 347 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_COMBUSKEN, EMOTE_NORMAL
# 348 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_2, MSGBOX_AUTOCLOSE
# 349 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 350 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_COMBUSKEN, 25
# 351 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 352 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 353 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CombuskenInCave_4
	return

CombuskenInCave_1:
# 330 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 331 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_COMBUSKEN, EMOTE_NORMAL
# 332 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_1, MSGBOX_DEFAULT
# 333 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 334 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 335 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

CombuskenInCave_4:
# 355 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 356 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_COMBUSKEN, EMOTE_NORMAL
# 357 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_3, MSGBOX_DEFAULT
# 358 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_COMBUSKEN_BATTLE
# 359 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 360 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 361 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


CombuskenInCaveTrigger::
# 369 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_unset FLAG_COMBUSKEN_BATTLE, CombuskenInCaveTrigger_1
	return

CombuskenInCaveTrigger_1:
# 371 "data/maps/DaycareVolcano/scripts.pory"
	special PlayTrainerEncounterMusic
# 372 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, Common_Movement_ExclamationMark
# 373 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Combusken
# 374 "data/maps/DaycareVolcano/scripts.pory"
	delay 60
# 375 "data/maps/DaycareVolcano/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 376 "data/maps/DaycareVolcano/scripts.pory"
	switch VAR_TEMP_1
# 378 "data/maps/DaycareVolcano/scripts.pory"
	case 6, CombuskenInCaveTrigger_4
# 398 "data/maps/DaycareVolcano/scripts.pory"
	case 7, CombuskenInCaveTrigger_5
# 420 "data/maps/DaycareVolcano/scripts.pory"
	case 8, CombuskenInCaveTrigger_6
	return

CombuskenInCaveTrigger_4:
# 379 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 380 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 381 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_COMBUSKEN, EMOTE_NORMAL
# 382 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_2, MSGBOX_AUTOCLOSE
# 383 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 384 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_COMBUSKEN, 25
# 385 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 386 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 387 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CombuskenInCaveTrigger_7
	return

CombuskenInCaveTrigger_5:
# 399 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 400 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, VulpixInCaveTrigger_Movement_1
# 401 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Combusken
# 402 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 403 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_COMBUSKEN, EMOTE_NORMAL
# 404 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_2, MSGBOX_AUTOCLOSE
# 405 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 406 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_COMBUSKEN, 25
# 407 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 408 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 409 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CombuskenInCaveTrigger_9
	return

CombuskenInCaveTrigger_6:
# 421 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, VulpixInCaveTrigger_Movement_0
# 422 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Combusken, CombuskenInCaveTrigger_Movement_0
# 423 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Combusken
# 424 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 425 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_COMBUSKEN, EMOTE_NORMAL
# 426 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_2, MSGBOX_AUTOCLOSE
# 427 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 428 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_COMBUSKEN, 25
# 429 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 430 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 431 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CombuskenInCaveTrigger_11
	return

CombuskenInCaveTrigger_7:
# 389 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 390 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_COMBUSKEN, EMOTE_NORMAL
# 391 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_3, MSGBOX_DEFAULT
# 392 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_COMBUSKEN_BATTLE
# 393 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 394 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 395 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

CombuskenInCaveTrigger_9:
# 411 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 412 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_COMBUSKEN, EMOTE_NORMAL
# 413 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_3, MSGBOX_DEFAULT
# 414 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_COMBUSKEN_BATTLE
# 415 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 416 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 417 "data/maps/DaycareVolcano/scripts.pory"
	release
	end

CombuskenInCaveTrigger_11:
# 433 "data/maps/DaycareVolcano/scripts.pory"
	speakername CombuskenInCave_Text_0
# 434 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_COMBUSKEN, EMOTE_NORMAL
# 435 "data/maps/DaycareVolcano/scripts.pory"
	msgbox CombuskenInCave_Text_3, MSGBOX_DEFAULT
# 436 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_COMBUSKEN_BATTLE
# 437 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 438 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 439 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


BattleVsArcanine::
# 447 "data/maps/DaycareVolcano/scripts.pory"
	goto_if_set FLAG_TRANS_ARCANINE, BattleVsArcanine_2
# 451 "data/maps/DaycareVolcano/scripts.pory"
	lock
# 452 "data/maps/DaycareVolcano/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 453 "data/maps/DaycareVolcano/scripts.pory"
	playmoncry SPECIES_ARCANINE, CRY_MODE_NORMAL
# 454 "data/maps/DaycareVolcano/scripts.pory"
	waitmoncry
# 455 "data/maps/DaycareVolcano/scripts.pory"
	playse SE_PIN
# 456 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 457 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement LOCALID_PLAYER
# 458 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, CyndaquilInCaveTrigger_Movement_0
# 459 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement LOCALID_PLAYER
# 460 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsArcanine_Movement_0
# 461 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement LOCALID_PLAYER
# 462 "data/maps/DaycareVolcano/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsArcanine_Movement_1
# 463 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement LOCALID_PLAYER
# 464 "data/maps/DaycareVolcano/scripts.pory"
	playse SE_LEDGE
# 465 "data/maps/DaycareVolcano/scripts.pory"
	playse SE_LEDGE
# 466 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Arcanine, BattleVsArcanine_Movement_2
# 467 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Arcanine
# 468 "data/maps/DaycareVolcano/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 469 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_ARCANINE, EMOTE_ANGRY
# 470 "data/maps/DaycareVolcano/scripts.pory"
	speakername BattleVsArcanine_Text_0
# 471 "data/maps/DaycareVolcano/scripts.pory"
	msgbox BattleVsArcanine_Text_1, MSGBOX_AUTOCLOSE
# 472 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 473 "data/maps/DaycareVolcano/scripts.pory"
	setwildbattle SPECIES_ARCANINE, 25, move1 = MOVE_FLAME_WHEEL, move2 = MOVE_FIRE_FANG, move3 = MOVE_FLAMETHROWER, move4 = MOVE_EMBER
# 474 "data/maps/DaycareVolcano/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 0, 1, 1, 0
# 475 "data/maps/DaycareVolcano/scripts.pory"
	dowildbattle
# 476 "data/maps/DaycareVolcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 477 "data/maps/DaycareVolcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsArcanine_4
	return

BattleVsArcanine_2:
	end

BattleVsArcanine_4:
# 479 "data/maps/DaycareVolcano/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 480 "data/maps/DaycareVolcano/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 481 "data/maps/DaycareVolcano/scripts.pory"
	setflag FLAG_TRANS_ARCANINE
# 482 "data/maps/DaycareVolcano/scripts.pory"
	dittotransform SPECIES_ARCANINE
# 483 "data/maps/DaycareVolcano/scripts.pory"
	playse MUS_LEVEL_UP
# 484 "data/maps/DaycareVolcano/scripts.pory"
	msgbox BattleVsArcanine_Text_2, MSGBOX_DEFAULT
# 485 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 486 "data/maps/DaycareVolcano/scripts.pory"
	dittotransform VAR_TEMP_0
# 487 "data/maps/DaycareVolcano/scripts.pory"
	givemon SPECIES_ARCANINE, 25, move1 = MOVE_FIRE_FANG, move2 = MOVE_BITE, move3 = MOVE_AERIAL_ACE, move4 = MOVE_THUNDER_FANG
# 488 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 489 "data/maps/DaycareVolcano/scripts.pory"
	speakername BattleVsArcanine_Text_0
# 490 "data/maps/DaycareVolcano/scripts.pory"
	createfieldmugshot MUGSHOT_ARCANINE, EMOTE_NORMAL
# 491 "data/maps/DaycareVolcano/scripts.pory"
	msgbox BattleVsArcanine_Text_3, MSGBOX_AUTOCLOSE
# 492 "data/maps/DaycareVolcano/scripts.pory"
	waitmessage
# 493 "data/maps/DaycareVolcano/scripts.pory"
	removefieldmugshot
# 494 "data/maps/DaycareVolcano/scripts.pory"
	playse SE_LEDGE
# 495 "data/maps/DaycareVolcano/scripts.pory"
	playse SE_LEDGE
# 496 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Arcanine, BattleVsArcanine_Movement_3
# 497 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Arcanine
# 498 "data/maps/DaycareVolcano/scripts.pory"
	applymovement Arcanine, BattleVsArcanine_Movement_4
# 499 "data/maps/DaycareVolcano/scripts.pory"
	waitmovement Arcanine
# 500 "data/maps/DaycareVolcano/scripts.pory"
	fadenewbgm MUS_PMD_VOLCANO
# 501 "data/maps/DaycareVolcano/scripts.pory"
	release
	end


# 20 "data/maps/DaycareVolcano/scripts.pory"
CyndaquilInCave_Movement_0:
# 20 "data/maps/DaycareVolcano/scripts.pory"
	face_player
	step_end

# 59 "data/maps/DaycareVolcano/scripts.pory"
CyndaquilInCaveTrigger_Movement_0:
# 59 "data/maps/DaycareVolcano/scripts.pory"
	face_up
	step_end

# 60 "data/maps/DaycareVolcano/scripts.pory"
CyndaquilInCaveTrigger_Movement_1:
# 60 "data/maps/DaycareVolcano/scripts.pory"
	walk_down
	step_end

# 159 "data/maps/DaycareVolcano/scripts.pory"
VulpixInCaveTrigger_Movement_0:
# 159 "data/maps/DaycareVolcano/scripts.pory"
	face_left
	step_end

# 181 "data/maps/DaycareVolcano/scripts.pory"
VulpixInCaveTrigger_Movement_1:
# 181 "data/maps/DaycareVolcano/scripts.pory"
	walk_right
	step_end

# 301 "data/maps/DaycareVolcano/scripts.pory"
FuecocoInCaveTrigger_Movement_0:
# 301 "data/maps/DaycareVolcano/scripts.pory"
	walk_down
# 301 "data/maps/DaycareVolcano/scripts.pory"
	walk_down
	step_end

# 422 "data/maps/DaycareVolcano/scripts.pory"
CombuskenInCaveTrigger_Movement_0:
# 422 "data/maps/DaycareVolcano/scripts.pory"
	walk_right
# 422 "data/maps/DaycareVolcano/scripts.pory"
	walk_right
	step_end

# 460 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_0:
# 460 "data/maps/DaycareVolcano/scripts.pory"
	lock_facing_direction
	step_end

# 462 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_1:
# 462 "data/maps/DaycareVolcano/scripts.pory"
	walk_fast_down
	step_end

# 466 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_2:
# 466 "data/maps/DaycareVolcano/scripts.pory"
	jump_2_down
# 466 "data/maps/DaycareVolcano/scripts.pory"
	jump_2_down
	step_end

# 496 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_3:
# 496 "data/maps/DaycareVolcano/scripts.pory"
	jump_2_up
# 496 "data/maps/DaycareVolcano/scripts.pory"
	jump_2_up
	step_end

# 498 "data/maps/DaycareVolcano/scripts.pory"
BattleVsArcanine_Movement_4:
# 498 "data/maps/DaycareVolcano/scripts.pory"
	walk_in_place_down
	step_end

CyndaquilInCave_Text_0:
# 10 "data/maps/DaycareVolcano/scripts.pory"
	.string "Cyndaquil$"

CyndaquilInCave_Text_1:
# 12 "data/maps/DaycareVolcano/scripts.pory"
	.string "Go on!\nSee for yourself.$"

CyndaquilInCave_Text_2:
# 28 "data/maps/DaycareVolcano/scripts.pory"
	.string "The boss is so strong.\nHe must know how to gain EXP!$"

VulpixInCave_Text_0:
# 110 "data/maps/DaycareVolcano/scripts.pory"
	.string "Vulpix$"

VulpixInCave_Text_1:
# 112 "data/maps/DaycareVolcano/scripts.pory"
	.string "Someone once told me there's a\nplace where Vulpix live on snowy\lmountains... that sounds nice.$"

VulpixInCave_Text_2:
# 128 "data/maps/DaycareVolcano/scripts.pory"
	.string "Can't take the heat?\n$"

VulpixInCave_Text_3:
# 137 "data/maps/DaycareVolcano/scripts.pory"
	.string "Neither can I.\nIt's hot in here.$"

FuecocoInCave_Text_0:
# 210 "data/maps/DaycareVolcano/scripts.pory"
	.string "Fuecoco$"

FuecocoInCave_Text_1:
# 212 "data/maps/DaycareVolcano/scripts.pory"
	.string "At least it doesnt lag here in\nHoenn...$"

FuecocoInCave_Text_2:
# 228 "data/maps/DaycareVolcano/scripts.pory"
	.string "I joined this group to fit in!\n$"

FuecocoInCave_Text_3:
# 237 "data/maps/DaycareVolcano/scripts.pory"
	.string "No one here has even heard of\nPaldea...$"

CombuskenInCave_Text_0:
# 330 "data/maps/DaycareVolcano/scripts.pory"
	.string "Combusken$"

CombuskenInCave_Text_1:
# 332 "data/maps/DaycareVolcano/scripts.pory"
	.string "Ran out of steam.\n$"

CombuskenInCave_Text_2:
# 348 "data/maps/DaycareVolcano/scripts.pory"
	.string "I've heard the boss is so fast\nhe can gain EXP just by running\laround the Daycare!$"

CombuskenInCave_Text_3:
# 357 "data/maps/DaycareVolcano/scripts.pory"
	.string "Guess I should take a lap.\n$"

BattleVsArcanine_Text_0:
# 470 "data/maps/DaycareVolcano/scripts.pory"
	.string "Arcanine$"

BattleVsArcanine_Text_1:
# 471 "data/maps/DaycareVolcano/scripts.pory"
	.string "Aha!\pA challenger.\pYou must be strong if you battled\nyour way through my volcano.\pI see how your spirit burns bright.\pMaybe taking you down will grant me\nthe EXP I am looking for.\pLet me test your flame!\n$"

BattleVsArcanine_Text_2:
# 484 "data/maps/DaycareVolcano/scripts.pory"
	.string "You have gained the ability to\ntransform into Arcanine!$"

BattleVsArcanine_Text_3:
# 491 "data/maps/DaycareVolcano/scripts.pory"
	.string "Carry yourself with honor.\pDon't soil my good name.\pMaybe you will unlock the secret\nto gain EXP.$"
