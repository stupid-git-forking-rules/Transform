DaycareMountain_MapScripts::
	.byte 0


SoarFront::
# 6 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq SoarFront_1
# 14 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_TRANS_NOIVERN, SoarFront_4
SoarFront_3:
# 46 "data/maps/DaycareMountain/scripts.pory"
	lock
# 47 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_1, MSGBOX_DEFAULT
# 48 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 49 "data/maps/DaycareMountain/scripts.pory"
	release
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

SoarFront_2:
# 16 "data/maps/DaycareMountain/scripts.pory"
	lock
# 17 "data/maps/DaycareMountain/scripts.pory"
	checkpartymove MOVE_SUPER_FANG
# 18 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_ne SoarFront_8
# 37 "data/maps/DaycareMountain/scripts.pory"
	lock
# 38 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_1, MSGBOX_DEFAULT
# 39 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 40 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarFront_4:
# 14 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_ne SoarFront_2
	goto SoarFront_3

SoarFront_8:
# 20 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_0, MSGBOX_YESNO
# 21 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SoarFront_11
# 31 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarFront_11:
# 23 "data/maps/DaycareMountain/scripts.pory"
	dittotransform SPECIES_NOIVERN
# 24 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, SoarFront_Movement_0
# 25 "data/maps/DaycareMountain/scripts.pory"
	waitmovement LOCALID_PLAYER
# 26 "data/maps/DaycareMountain/scripts.pory"
	release
	end


SoarBack::
# 55 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq SoarBack_1
# 63 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_TRANS_NOIVERN, SoarBack_4
SoarBack_3:
# 94 "data/maps/DaycareMountain/scripts.pory"
	lock
# 95 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_1, MSGBOX_DEFAULT
# 96 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 97 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarBack_1:
# 57 "data/maps/DaycareMountain/scripts.pory"
	lock
# 58 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, SoarBack_Movement_0
# 59 "data/maps/DaycareMountain/scripts.pory"
	waitmovement LOCALID_PLAYER
# 60 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarBack_2:
# 65 "data/maps/DaycareMountain/scripts.pory"
	lock
# 66 "data/maps/DaycareMountain/scripts.pory"
	checkpartymove MOVE_SUPER_FANG
# 67 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_ne SoarBack_8
# 86 "data/maps/DaycareMountain/scripts.pory"
	lock
# 87 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_1, MSGBOX_DEFAULT
# 88 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 89 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarBack_4:
# 63 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_ne SoarBack_2
	goto SoarBack_3

SoarBack_8:
# 69 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_0, MSGBOX_YESNO
# 70 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SoarBack_11
# 80 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarBack_11:
# 72 "data/maps/DaycareMountain/scripts.pory"
	dittotransform SPECIES_NOIVERN
# 73 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, SoarBack_Movement_0
# 74 "data/maps/DaycareMountain/scripts.pory"
	waitmovement LOCALID_PLAYER
# 75 "data/maps/DaycareMountain/scripts.pory"
	release
	end


VullabyDialog::
# 104 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_SOAR_ACROSS, VullabyDialog_1
# 117 "data/maps/DaycareMountain/scripts.pory"
	lock
# 118 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 119 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 120 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_VULLABY, EMOTE_NORMAL
# 121 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyDialog_Text_2, MSGBOX_DEFAULT
# 122 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 123 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 124 "data/maps/DaycareMountain/scripts.pory"
	release
	end

VullabyDialog_1:
# 106 "data/maps/DaycareMountain/scripts.pory"
	lock
# 107 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 108 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 109 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_VULLABY, EMOTE_NORMAL
# 110 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyDialog_Text_1, MSGBOX_DEFAULT
# 111 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 112 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 113 "data/maps/DaycareMountain/scripts.pory"
	release
	end


NoibatDialog::
# 131 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq NoibatDialog_1
# 149 "data/maps/DaycareMountain/scripts.pory"
	lock
# 150 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 151 "data/maps/DaycareMountain/scripts.pory"
	speakername NoibatDialog_Text_0
# 152 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_NOIBAT, EMOTE_NORMAL
# 153 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_3, MSGBOX_DEFAULT
# 154 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 155 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 156 "data/maps/DaycareMountain/scripts.pory"
	release
	end

NoibatDialog_1:
# 133 "data/maps/DaycareMountain/scripts.pory"
	lock
# 134 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 135 "data/maps/DaycareMountain/scripts.pory"
	speakername NoibatDialog_Text_0
# 136 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_NOIBAT, EMOTE_HAPPY
# 137 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_1, MSGBOX_DEFAULT
# 138 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 139 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 140 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_NOIBAT, EMOTE_NORMAL
# 141 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_2, MSGBOX_DEFAULT
# 142 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 143 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 144 "data/maps/DaycareMountain/scripts.pory"
	release
	end


BattleVsLurantis::
# 162 "data/maps/DaycareMountain/scripts.pory"
	lock
# 164 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_TRANS_LURANTIS, BattleVsLurantis_2
# 173 "data/maps/DaycareMountain/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 174 "data/maps/DaycareMountain/scripts.pory"
	applymovement Lurantis, BattleVsLurantis_Movement_0
# 175 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Lurantis
# 176 "data/maps/DaycareMountain/scripts.pory"
	playse SE_PIN
# 177 "data/maps/DaycareMountain/scripts.pory"
	applymovement Lurantis, Common_Movement_ExclamationMark
# 178 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Lurantis
# 179 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 180 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_LURANTIS, EMOTE_NORMAL
# 181 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_2, MSGBOX_AUTOCLOSE
# 182 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 183 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_LURANTIS, 25
# 184 "data/maps/DaycareMountain/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 185 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 186 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 187 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsLurantis_4
	return

BattleVsLurantis_2:
# 166 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 167 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 168 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_1, MSGBOX_DEFAULT
# 169 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 170 "data/maps/DaycareMountain/scripts.pory"
	release
	end

BattleVsLurantis_4:
# 189 "data/maps/DaycareMountain/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 190 "data/maps/DaycareMountain/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 191 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_TRANS_LURANTIS
# 192 "data/maps/DaycareMountain/scripts.pory"
	dittotransform SPECIES_LURANTIS
# 193 "data/maps/DaycareMountain/scripts.pory"
	playse MUS_LEVEL_UP
# 194 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_3, MSGBOX_DEFAULT
# 195 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 196 "data/maps/DaycareMountain/scripts.pory"
	dittotransform VAR_TEMP_0
# 197 "data/maps/DaycareMountain/scripts.pory"
	givemon SPECIES_LURANTIS, 25, move1 = MOVE_AERIAL_ACE, move2 = MOVE_BUG_BITE, move3 = MOVE_TRAILBLAZE, move4 = MOVE_CUT
# 198 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 199 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_LURANTIS, EMOTE_HAPPY
# 200 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_4, MSGBOX_DEFAULT
# 201 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 202 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 203 "data/maps/DaycareMountain/scripts.pory"
	fadenewbgm MUS_PMD_MOUNTAIN
# 204 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCave::
# 210 "data/maps/DaycareMountain/scripts.pory"
	lock
# 212 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_OMANYTE_BATTLE, OmanyteInCave_1
# 225 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, BattleVsLurantis_Movement_0
# 226 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 227 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 228 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 229 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 230 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 231 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 232 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 233 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 234 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 235 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 236 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 237 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 238 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCave_4
	return

OmanyteInCave_1:
# 214 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 215 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 216 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 217 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 218 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 219 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 220 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCave_4:
# 240 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 241 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 242 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 243 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 244 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 245 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 246 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCaveTrigger::
# 253 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_OMANYTE_BATTLE, OmanyteInCaveTrigger_1
	return

OmanyteInCaveTrigger_1:
# 255 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 256 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 257 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 258 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 259 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 260 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_2
# 262 "data/maps/DaycareMountain/scripts.pory"
	case 34, OmanyteInCaveTrigger_4
# 284 "data/maps/DaycareMountain/scripts.pory"
	case 33, OmanyteInCaveTrigger_5
	return

OmanyteInCaveTrigger_4:
# 263 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 264 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, OmanyteInCaveTrigger_Movement_1
# 265 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 266 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 267 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 268 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 269 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 270 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 271 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 272 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 273 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_6
	return

OmanyteInCaveTrigger_5:
# 285 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 286 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 287 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 288 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 289 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 290 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 291 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 292 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 293 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_8
	return

OmanyteInCaveTrigger_6:
# 275 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 276 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 277 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 278 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 279 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 280 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 281 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCaveTrigger_8:
# 295 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 296 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 297 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 298 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 299 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 300 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 301 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCave::
# 309 "data/maps/DaycareMountain/scripts.pory"
	lock
# 311 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_KABUTO_BATTLE, KabutoInCave_1
# 324 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, BattleVsLurantis_Movement_0
# 325 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 326 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 327 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 328 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 329 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 330 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 331 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 332 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 333 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 334 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 335 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 336 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 337 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCave_4
	return

KabutoInCave_1:
# 313 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 314 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 315 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 316 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_1, MSGBOX_DEFAULT
# 317 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 318 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 319 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCave_4:
# 339 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 340 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 341 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 342 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 343 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 344 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 345 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCaveTrigger::
# 353 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_KABUTO_BATTLE, KabutoInCaveTrigger_1
	return

KabutoInCaveTrigger_1:
# 355 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 356 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 357 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 358 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 359 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 360 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_1
# 362 "data/maps/DaycareMountain/scripts.pory"
	case 8, KabutoInCaveTrigger_4
# 382 "data/maps/DaycareMountain/scripts.pory"
	case 9, KabutoInCaveTrigger_5
	return

KabutoInCaveTrigger_4:
# 363 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 364 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 365 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 366 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 367 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 368 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 369 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 370 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 371 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_6
	return

KabutoInCaveTrigger_5:
# 383 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 384 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, KabutoInCaveTrigger_Movement_1
# 385 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 386 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 387 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 388 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 389 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 390 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 391 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 392 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 393 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_8
	return

KabutoInCaveTrigger_6:
# 373 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 374 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 375 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 376 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 377 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 378 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 379 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCaveTrigger_8:
# 395 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 396 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 397 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 398 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 399 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 400 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 401 "data/maps/DaycareMountain/scripts.pory"
	release
	end


VullabyAfterSoar::
# 409 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_SOAR_ACROSS, VullabyAfterSoar_1
	end

VullabyAfterSoar_1:
# 411 "data/maps/DaycareMountain/scripts.pory"
	lock
# 412 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SHOW_NOICE
# 413 "data/maps/DaycareMountain/scripts.pory"
	special SpawnCameraObject
# 414 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_0
# 415 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 416 "data/maps/DaycareMountain/scripts.pory"
	delay 30
# 417 "data/maps/DaycareMountain/scripts.pory"
	applymovement Vullaby, OmanyteInCaveTrigger_Movement_0
# 418 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Vullaby
# 419 "data/maps/DaycareMountain/scripts.pory"
	playse SE_PIN
# 420 "data/maps/DaycareMountain/scripts.pory"
	applymovement Vullaby, Common_Movement_ExclamationMark
# 421 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Vullaby
# 422 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 423 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_VULLABY, EMOTE_HAPPY
# 424 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyAfterSoar_Text_0, MSGBOX_AUTOCLOSE
# 425 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 426 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_1
# 427 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 428 "data/maps/DaycareMountain/scripts.pory"
	special RemoveCameraObject
# 429 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SOAR_ACROSS
# 430 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 431 "data/maps/DaycareMountain/scripts.pory"
	release
	end


# 9 "data/maps/DaycareMountain/scripts.pory"
SoarFront_Movement_0:
# 9 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 9 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 9 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 9 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
	step_end

# 58 "data/maps/DaycareMountain/scripts.pory"
SoarBack_Movement_0:
# 58 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 58 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 58 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 58 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
	step_end

# 174 "data/maps/DaycareMountain/scripts.pory"
BattleVsLurantis_Movement_0:
# 174 "data/maps/DaycareMountain/scripts.pory"
	face_player
	step_end

# 263 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_0:
# 263 "data/maps/DaycareMountain/scripts.pory"
	face_up
	step_end

# 264 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_1:
# 264 "data/maps/DaycareMountain/scripts.pory"
	walk_down
	step_end

# 363 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_0:
# 363 "data/maps/DaycareMountain/scripts.pory"
	face_left
	step_end

# 384 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_1:
# 384 "data/maps/DaycareMountain/scripts.pory"
	walk_right
	step_end

# 414 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_0:
# 414 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 414 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 414 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 414 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 414 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 414 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
	step_end

# 426 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_1:
# 426 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 426 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 426 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 426 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 426 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 426 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
	step_end

SoarFront_Text_0:
# 20 "data/maps/DaycareMountain/scripts.pory"
	.string "The bridge seems to be broken.\pWould you like to transform into\nNoivern to soar across?$"

SoarFront_Text_1:
# 38 "data/maps/DaycareMountain/scripts.pory"
	.string "The bridge seems to be broken.\pMaybe a Flying Pokémon could soar\nover the gap.$"

VullabyDialog_Text_0:
# 108 "data/maps/DaycareMountain/scripts.pory"
	.string "Vullaby$"

VullabyDialog_Text_1:
# 110 "data/maps/DaycareMountain/scripts.pory"
	.string "I wish I had stronger wings...\pThen I'd just fly right over the\nbroken bridge!$"

VullabyDialog_Text_2:
# 121 "data/maps/DaycareMountain/scripts.pory"
	.string "I wish I could transform like you.\pI would change into a giant eagle!\n$"

NoibatDialog_Text_0:
# 135 "data/maps/DaycareMountain/scripts.pory"
	.string "Noibat$"

NoibatDialog_Text_1:
# 137 "data/maps/DaycareMountain/scripts.pory"
	.string "Big brother!$"

NoibatDialog_Text_2:
# 141 "data/maps/DaycareMountain/scripts.pory"
	.string "Oh, no. It's just another Ditto...\pThere's a cave up ahead.\pYou'll need my big bro's power\nto beat the Pokémon waiting deep\lwithin.$"

NoibatDialog_Text_3:
# 153 "data/maps/DaycareMountain/scripts.pory"
	.string "There's a cave up ahead.\pYou'll need my big bro's power\nto beat the Pokémon waiting deep\lwithin.$"

BattleVsLurantis_Text_0:
# 167 "data/maps/DaycareMountain/scripts.pory"
	.string "Lurantis$"

BattleVsLurantis_Text_1:
# 168 "data/maps/DaycareMountain/scripts.pory"
	.string "Haven't seen any small trees\naround?\pThey tend to grow on the top of\ncliffs with crashing waterfalls.$"

BattleVsLurantis_Text_2:
# 181 "data/maps/DaycareMountain/scripts.pory"
	.string "You're out seeking your Egg...\nare you not?\pEvery Ditto comes here in search\nif the Mythical Egg.\pProve your strength to me.\nMy sharp raptorial arms may come\lin handy.$"

BattleVsLurantis_Text_3:
# 194 "data/maps/DaycareMountain/scripts.pory"
	.string "You have gained the ability to\ntransform into Lurantis!$"

BattleVsLurantis_Text_4:
# 200 "data/maps/DaycareMountain/scripts.pory"
	.string "You are a sharp one!\pUse my abilities to your\nadvantage.\pThe journey ahead is no walk in the\ndaycare.$"

OmanyteInCave_Text_0:
# 215 "data/maps/DaycareMountain/scripts.pory"
	.string "Omanyte$"

OmanyteInCave_Text_1:
# 217 "data/maps/DaycareMountain/scripts.pory"
	.string "Fine.\nYou've earned your stay.$"

OmanyteInCave_Text_2:
# 233 "data/maps/DaycareMountain/scripts.pory"
	.string "You're no fossil!\n$"

KabutoInCave_Text_0:
# 314 "data/maps/DaycareMountain/scripts.pory"
	.string "Kabuto$"

KabutoInCave_Text_1:
# 316 "data/maps/DaycareMountain/scripts.pory"
	.string "It was only the two of us\nanyways...$"

KabutoInCave_Text_2:
# 332 "data/maps/DaycareMountain/scripts.pory"
	.string "Fossils only!\n$"

KabutoInCave_Text_3:
# 341 "data/maps/DaycareMountain/scripts.pory"
	.string "Alright.\nWe can make an exception.$"

VullabyAfterSoar_Text_0:
# 424 "data/maps/DaycareMountain/scripts.pory"
	.string "Wow!\pYou made it across!\pTransforming into Noivern was\nclever!$"
