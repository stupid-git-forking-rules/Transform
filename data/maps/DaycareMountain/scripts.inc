DaycareMountain_MapScripts::
# 2 "data/maps/DaycareMountain/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DaycareMountain_OnTransition
	.byte 0


DaycareMountain_OnTransition::
# 6 "data/maps/DaycareMountain/scripts.pory"
	setrespawn HEAL_LOCATION_DAYCARE_MOUNTAIN
	end


SoarFront::
# 11 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq SoarFront_1
# 19 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_TRANS_NOIVERN, SoarFront_4
SoarFront_3:
# 52 "data/maps/DaycareMountain/scripts.pory"
	lock
# 53 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_1, MSGBOX_DEFAULT
# 54 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 55 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarFront_1:
# 13 "data/maps/DaycareMountain/scripts.pory"
	lock
# 14 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, SoarFront_Movement_0
# 15 "data/maps/DaycareMountain/scripts.pory"
	waitmovement LOCALID_PLAYER
# 16 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarFront_2:
# 21 "data/maps/DaycareMountain/scripts.pory"
	lock
# 22 "data/maps/DaycareMountain/scripts.pory"
	checkpartymove MOVE_SUPER_FANG
# 23 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_ne SoarFront_8
# 43 "data/maps/DaycareMountain/scripts.pory"
	lock
# 44 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_1, MSGBOX_DEFAULT
# 45 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 46 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarFront_4:
# 19 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_ne SoarFront_2
	goto SoarFront_3

SoarFront_8:
# 25 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_0, MSGBOX_YESNO
# 26 "data/maps/DaycareMountain/scripts.pory"
	release
# 27 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SoarFront_11
# 37 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarFront_11:
# 29 "data/maps/DaycareMountain/scripts.pory"
	dittotransform SPECIES_NOIVERN
# 30 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, SoarFront_Movement_0
# 31 "data/maps/DaycareMountain/scripts.pory"
	waitmovement LOCALID_PLAYER
# 32 "data/maps/DaycareMountain/scripts.pory"
	release
	end


SoarBack::
# 61 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq SoarBack_1
# 69 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_TRANS_NOIVERN, SoarBack_4
SoarBack_3:
# 101 "data/maps/DaycareMountain/scripts.pory"
	lock
# 102 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_1, MSGBOX_DEFAULT
# 103 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 104 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarBack_1:
# 63 "data/maps/DaycareMountain/scripts.pory"
	lock
# 64 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, SoarBack_Movement_0
# 65 "data/maps/DaycareMountain/scripts.pory"
	waitmovement LOCALID_PLAYER
# 66 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarBack_2:
# 71 "data/maps/DaycareMountain/scripts.pory"
	lock
# 72 "data/maps/DaycareMountain/scripts.pory"
	checkpartymove MOVE_SUPER_FANG
# 73 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_ne SoarBack_8
# 93 "data/maps/DaycareMountain/scripts.pory"
	lock
# 94 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_1, MSGBOX_DEFAULT
# 95 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 96 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarBack_4:
# 69 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_ne SoarBack_2
	goto SoarBack_3

SoarBack_8:
# 75 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_0, MSGBOX_YESNO
# 76 "data/maps/DaycareMountain/scripts.pory"
	release
# 77 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SoarBack_11
# 87 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarBack_11:
# 79 "data/maps/DaycareMountain/scripts.pory"
	dittotransform SPECIES_NOIVERN
# 80 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, SoarBack_Movement_0
# 81 "data/maps/DaycareMountain/scripts.pory"
	waitmovement LOCALID_PLAYER
# 82 "data/maps/DaycareMountain/scripts.pory"
	release
	end


VullabyDialog::
# 111 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_SOAR_ACROSS, VullabyDialog_1
# 124 "data/maps/DaycareMountain/scripts.pory"
	lock
# 125 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 126 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 127 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_VULLABY, EMOTE_NORMAL
# 128 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyDialog_Text_2, MSGBOX_DEFAULT
# 129 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 130 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 131 "data/maps/DaycareMountain/scripts.pory"
	release
	end

VullabyDialog_1:
# 113 "data/maps/DaycareMountain/scripts.pory"
	lock
# 114 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 115 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 116 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_VULLABY, EMOTE_NORMAL
# 117 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyDialog_Text_1, MSGBOX_DEFAULT
# 118 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 119 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 120 "data/maps/DaycareMountain/scripts.pory"
	release
	end


NoibatDialog::
# 138 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq NoibatDialog_1
# 156 "data/maps/DaycareMountain/scripts.pory"
	lock
# 157 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 158 "data/maps/DaycareMountain/scripts.pory"
	speakername NoibatDialog_Text_0
# 159 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_NOIBAT, EMOTE_NORMAL
# 160 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_3, MSGBOX_DEFAULT
# 161 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 162 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 163 "data/maps/DaycareMountain/scripts.pory"
	release
	end

NoibatDialog_1:
# 140 "data/maps/DaycareMountain/scripts.pory"
	lock
# 141 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 142 "data/maps/DaycareMountain/scripts.pory"
	speakername NoibatDialog_Text_0
# 143 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_NOIBAT, EMOTE_HAPPY
# 144 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_1, MSGBOX_DEFAULT
# 145 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 146 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 147 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_NOIBAT, EMOTE_NORMAL
# 148 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_2, MSGBOX_DEFAULT
# 149 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 150 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 151 "data/maps/DaycareMountain/scripts.pory"
	release
	end


BattleVsLurantis::
# 169 "data/maps/DaycareMountain/scripts.pory"
	lock
# 171 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_TRANS_LURANTIS, BattleVsLurantis_2
# 180 "data/maps/DaycareMountain/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 181 "data/maps/DaycareMountain/scripts.pory"
	applymovement Lurantis, BattleVsLurantis_Movement_0
# 182 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Lurantis
# 183 "data/maps/DaycareMountain/scripts.pory"
	playse SE_PIN
# 184 "data/maps/DaycareMountain/scripts.pory"
	applymovement Lurantis, Common_Movement_ExclamationMark
# 185 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Lurantis
# 186 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 187 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_LURANTIS, EMOTE_NORMAL
# 188 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_2, MSGBOX_AUTOCLOSE
# 189 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 190 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_LURANTIS, 25, item = ITEM_OCCA_BERRY, move1 = MOVE_LEAF_BLADE, move2 = MOVE_LEECH_LIFE, move3 = MOVE_BRICK_BREAK, move4 = MOVE_SWORDS_DANCE
# 191 "data/maps/DaycareMountain/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 2, 1, 1, 1, 1, 1, 0
# 192 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 193 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 194 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsLurantis_4
	return

BattleVsLurantis_2:
# 173 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 174 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 175 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_1, MSGBOX_DEFAULT
# 176 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 177 "data/maps/DaycareMountain/scripts.pory"
	release
	end

BattleVsLurantis_4:
# 196 "data/maps/DaycareMountain/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 197 "data/maps/DaycareMountain/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 198 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_TRANS_LURANTIS
# 199 "data/maps/DaycareMountain/scripts.pory"
	dittotransform SPECIES_LURANTIS
# 200 "data/maps/DaycareMountain/scripts.pory"
	playse MUS_LEVEL_UP
# 201 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_3, MSGBOX_DEFAULT
# 202 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 203 "data/maps/DaycareMountain/scripts.pory"
	dittotransform VAR_TEMP_0
# 204 "data/maps/DaycareMountain/scripts.pory"
	givemon SPECIES_LURANTIS, 25, move1 = MOVE_AERIAL_ACE, move2 = MOVE_BUG_BITE, move3 = MOVE_TRAILBLAZE, move4 = MOVE_CUT
# 205 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 206 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_LURANTIS, EMOTE_HAPPY
# 207 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_4, MSGBOX_DEFAULT
# 208 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 209 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 210 "data/maps/DaycareMountain/scripts.pory"
	fadenewbgm MUS_PMD_MOUNTAIN
# 211 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCave::
# 217 "data/maps/DaycareMountain/scripts.pory"
	lock
# 219 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_OMANYTE_BATTLE, OmanyteInCave_1
# 232 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, BattleVsLurantis_Movement_0
# 233 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 234 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 235 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 236 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 237 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 238 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 239 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 240 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 241 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 242 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 243 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 244 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 245 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCave_4
	return

OmanyteInCave_1:
# 221 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 222 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 223 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 224 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 225 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 226 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 227 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCave_4:
# 247 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 248 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 249 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 250 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 251 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 252 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 253 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCaveTrigger::
# 260 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_OMANYTE_BATTLE, OmanyteInCaveTrigger_1
	return

OmanyteInCaveTrigger_1:
# 262 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 263 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 264 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 265 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 266 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 267 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_2
# 269 "data/maps/DaycareMountain/scripts.pory"
	case 34, OmanyteInCaveTrigger_4
# 291 "data/maps/DaycareMountain/scripts.pory"
	case 33, OmanyteInCaveTrigger_5
	return

OmanyteInCaveTrigger_4:
# 270 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 271 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, OmanyteInCaveTrigger_Movement_1
# 272 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 273 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 274 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 275 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 276 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 277 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 278 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 279 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 280 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_6
	return

OmanyteInCaveTrigger_5:
# 292 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 293 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 294 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 295 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 296 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 297 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 298 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 299 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 300 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_8
	return

OmanyteInCaveTrigger_6:
# 282 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 283 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 284 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 285 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 286 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 287 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 288 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCaveTrigger_8:
# 302 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 303 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 304 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 305 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 306 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 307 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 308 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCave::
# 316 "data/maps/DaycareMountain/scripts.pory"
	lock
# 318 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_KABUTO_BATTLE, KabutoInCave_1
# 331 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, BattleVsLurantis_Movement_0
# 332 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 333 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 334 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 335 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 336 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 337 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 338 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 339 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 340 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 341 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 342 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 343 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 344 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCave_4
	return

KabutoInCave_1:
# 320 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 321 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 322 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 323 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_1, MSGBOX_DEFAULT
# 324 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 325 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 326 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCave_4:
# 346 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 347 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 348 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 349 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 350 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 351 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 352 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCaveTrigger::
# 360 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_KABUTO_BATTLE, KabutoInCaveTrigger_1
	return

KabutoInCaveTrigger_1:
# 362 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 363 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 364 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 365 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 366 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 367 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_1
# 369 "data/maps/DaycareMountain/scripts.pory"
	case 8, KabutoInCaveTrigger_4
# 389 "data/maps/DaycareMountain/scripts.pory"
	case 9, KabutoInCaveTrigger_5
	return

KabutoInCaveTrigger_4:
# 370 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 371 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 372 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 373 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 374 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 375 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 376 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 377 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 378 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_6
	return

KabutoInCaveTrigger_5:
# 390 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 391 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, KabutoInCaveTrigger_Movement_1
# 392 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 393 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 394 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 395 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 396 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 397 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 398 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 399 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 400 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_8
	return

KabutoInCaveTrigger_6:
# 380 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 381 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 382 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 383 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 384 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 385 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 386 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCaveTrigger_8:
# 402 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 403 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 404 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 405 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 406 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 407 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 408 "data/maps/DaycareMountain/scripts.pory"
	release
	end


VullabyAfterSoar::
# 416 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_SOAR_ACROSS, VullabyAfterSoar_1
	end

VullabyAfterSoar_1:
# 418 "data/maps/DaycareMountain/scripts.pory"
	lock
# 419 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SHOW_NOICE
# 420 "data/maps/DaycareMountain/scripts.pory"
	special SpawnCameraObject
# 421 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_0
# 422 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 423 "data/maps/DaycareMountain/scripts.pory"
	delay 30
# 424 "data/maps/DaycareMountain/scripts.pory"
	applymovement Vullaby, OmanyteInCaveTrigger_Movement_0
# 425 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Vullaby
# 426 "data/maps/DaycareMountain/scripts.pory"
	playse SE_PIN
# 427 "data/maps/DaycareMountain/scripts.pory"
	applymovement Vullaby, Common_Movement_ExclamationMark
# 428 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Vullaby
# 429 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 430 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_VULLABY, EMOTE_HAPPY
# 431 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyAfterSoar_Text_0, MSGBOX_AUTOCLOSE
# 432 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 433 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_1
# 434 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 435 "data/maps/DaycareMountain/scripts.pory"
	special RemoveCameraObject
# 436 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SOAR_ACROSS
# 437 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 438 "data/maps/DaycareMountain/scripts.pory"
	release
	end


ChanseyDaycareMountainHeal::
# 448 "data/maps/DaycareMountain/scripts.pory"
	lock
# 449 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 450 "data/maps/DaycareMountain/scripts.pory"
	speakername ChanseyDaycareMountainHeal_Text_0
# 451 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 452 "data/maps/DaycareMountain/scripts.pory"
	msgbox ChanseyDaycareMountainHeal_Text_1, MSGBOX_DEFAULT
# 453 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 454 "data/maps/DaycareMountain/scripts.pory"
	msgbox ChanseyDaycareMountainHeal_Text_2, MSGBOX_YESNO
# 455 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 456 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyDaycareMountainHeal_1
# 486 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 487 "data/maps/DaycareMountain/scripts.pory"
	msgbox ChanseyDaycareMountainHeal_Text_5, MSGBOX_AUTOCLOSE
# 488 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 489 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 490 "data/maps/DaycareMountain/scripts.pory"
	release
	end

ChanseyDaycareMountainHeal_1:
# 458 "data/maps/DaycareMountain/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 459 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyDaycareMountainHeal_4
# 476 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 477 "data/maps/DaycareMountain/scripts.pory"
	msgbox ChanseyDaycareMountainHeal_Text_4, MSGBOX_AUTOCLOSE
# 478 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 479 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 480 "data/maps/DaycareMountain/scripts.pory"
	release
	end

ChanseyDaycareMountainHeal_4:
# 461 "data/maps/DaycareMountain/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 462 "data/maps/DaycareMountain/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 463 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 464 "data/maps/DaycareMountain/scripts.pory"
	playfanfare MUS_HEAL
# 465 "data/maps/DaycareMountain/scripts.pory"
	waitfanfare
# 466 "data/maps/DaycareMountain/scripts.pory"
	special HealPlayerParty
# 467 "data/maps/DaycareMountain/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 468 "data/maps/DaycareMountain/scripts.pory"
	msgbox ChanseyDaycareMountainHeal_Text_3, MSGBOX_AUTOCLOSE
# 469 "data/maps/DaycareMountain/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 470 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 471 "data/maps/DaycareMountain/scripts.pory"
	release
	end


# 14 "data/maps/DaycareMountain/scripts.pory"
SoarFront_Movement_0:
# 14 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 14 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 14 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 14 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
	step_end

# 64 "data/maps/DaycareMountain/scripts.pory"
SoarBack_Movement_0:
# 64 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 64 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 64 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 64 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
	step_end

# 181 "data/maps/DaycareMountain/scripts.pory"
BattleVsLurantis_Movement_0:
# 181 "data/maps/DaycareMountain/scripts.pory"
	face_player
	step_end

# 270 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_0:
# 270 "data/maps/DaycareMountain/scripts.pory"
	face_up
	step_end

# 271 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_1:
# 271 "data/maps/DaycareMountain/scripts.pory"
	walk_down
	step_end

# 370 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_0:
# 370 "data/maps/DaycareMountain/scripts.pory"
	face_left
	step_end

# 391 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_1:
# 391 "data/maps/DaycareMountain/scripts.pory"
	walk_right
	step_end

# 421 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_0:
# 421 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 421 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 421 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 421 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 421 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 421 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
	step_end

# 433 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_1:
# 433 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 433 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 433 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 433 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 433 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 433 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
	step_end

SoarFront_Text_0:
# 25 "data/maps/DaycareMountain/scripts.pory"
	.string "The bridge seems to be broken.\pWould you like to transform into\nNoivern to soar across?$"

SoarFront_Text_1:
# 44 "data/maps/DaycareMountain/scripts.pory"
	.string "The bridge seems to be broken.\pMaybe a Flying Pokémon could soar\nover the gap.$"

VullabyDialog_Text_0:
# 115 "data/maps/DaycareMountain/scripts.pory"
	.string "Vullaby$"

VullabyDialog_Text_1:
# 117 "data/maps/DaycareMountain/scripts.pory"
	.string "I wish I had stronger wings...\pThen I'd just fly right over the\nbroken bridge!$"

VullabyDialog_Text_2:
# 128 "data/maps/DaycareMountain/scripts.pory"
	.string "I wish I could transform like you.\pI would change into a giant eagle!\n$"

NoibatDialog_Text_0:
# 142 "data/maps/DaycareMountain/scripts.pory"
	.string "Noibat$"

NoibatDialog_Text_1:
# 144 "data/maps/DaycareMountain/scripts.pory"
	.string "Big brother!$"

NoibatDialog_Text_2:
# 148 "data/maps/DaycareMountain/scripts.pory"
	.string "Oh, no. It's just another Ditto...\pThere's a cave up ahead.\pYou'll need my big bro's power\nto beat the Pokémon waiting deep\lwithin.$"

NoibatDialog_Text_3:
# 160 "data/maps/DaycareMountain/scripts.pory"
	.string "There's a cave up ahead.\pYou'll need my big bro's power\nto beat the Pokémon waiting deep\lwithin.$"

BattleVsLurantis_Text_0:
# 174 "data/maps/DaycareMountain/scripts.pory"
	.string "Lurantis$"

BattleVsLurantis_Text_1:
# 175 "data/maps/DaycareMountain/scripts.pory"
	.string "Haven't seen any small trees\naround?\pThey tend to grow on the top of\ncliffs with crashing waterfalls.$"

BattleVsLurantis_Text_2:
# 188 "data/maps/DaycareMountain/scripts.pory"
	.string "You're out seeking your Egg...\nare you not?\pEvery Ditto comes here in search\nif the Mythical Egg.\pProve your strength to me.\nMy sharp raptorial arms may come\lin handy.$"

BattleVsLurantis_Text_3:
# 201 "data/maps/DaycareMountain/scripts.pory"
	.string "You have gained the ability to\ntransform into Lurantis!$"

BattleVsLurantis_Text_4:
# 207 "data/maps/DaycareMountain/scripts.pory"
	.string "You are a sharp one!\pUse my abilities to your\nadvantage.\pThe journey ahead is no walk in the\ndaycare.$"

OmanyteInCave_Text_0:
# 222 "data/maps/DaycareMountain/scripts.pory"
	.string "Omanyte$"

OmanyteInCave_Text_1:
# 224 "data/maps/DaycareMountain/scripts.pory"
	.string "Fine.\nYou've earned your stay.$"

OmanyteInCave_Text_2:
# 240 "data/maps/DaycareMountain/scripts.pory"
	.string "You're no fossil!\n$"

KabutoInCave_Text_0:
# 321 "data/maps/DaycareMountain/scripts.pory"
	.string "Kabuto$"

KabutoInCave_Text_1:
# 323 "data/maps/DaycareMountain/scripts.pory"
	.string "It was only the two of us\nanyways...$"

KabutoInCave_Text_2:
# 339 "data/maps/DaycareMountain/scripts.pory"
	.string "Fossils only!\n$"

KabutoInCave_Text_3:
# 348 "data/maps/DaycareMountain/scripts.pory"
	.string "Alright.\nWe can make an exception.$"

VullabyAfterSoar_Text_0:
# 431 "data/maps/DaycareMountain/scripts.pory"
	.string "Wow!\pYou made it across!\pTransforming into Noivern was\nclever!$"

ChanseyDaycareMountainHeal_Text_0:
# 450 "data/maps/DaycareMountain/scripts.pory"
	.string "Chansey$"

ChanseyDaycareMountainHeal_Text_1:
# 452 "data/maps/DaycareMountain/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.$"

ChanseyDaycareMountainHeal_Text_2:
# 454 "data/maps/DaycareMountain/scripts.pory"
	.string "Would you like to heal?$"

ChanseyDaycareMountainHeal_Text_3:
# 468 "data/maps/DaycareMountain/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyDaycareMountainHeal_Text_4:
# 477 "data/maps/DaycareMountain/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyDaycareMountainHeal_Text_5:
# 487 "data/maps/DaycareMountain/scripts.pory"
	.string "Oh, okay then.$"
