DaycareMountain_MapScripts::
	.byte 0


SoarFront::
# 6 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq SoarFront_1
# 14 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_TRANS_NOIVERN, SoarFront_4
SoarFront_3:
# 47 "data/maps/DaycareMountain/scripts.pory"
	lock
# 48 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_1, MSGBOX_DEFAULT
# 49 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 50 "data/maps/DaycareMountain/scripts.pory"
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
# 38 "data/maps/DaycareMountain/scripts.pory"
	lock
# 39 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_1, MSGBOX_DEFAULT
# 40 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 41 "data/maps/DaycareMountain/scripts.pory"
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
	release
# 22 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SoarFront_11
# 32 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarFront_11:
# 24 "data/maps/DaycareMountain/scripts.pory"
	dittotransform SPECIES_NOIVERN
# 25 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, SoarFront_Movement_0
# 26 "data/maps/DaycareMountain/scripts.pory"
	waitmovement LOCALID_PLAYER
# 27 "data/maps/DaycareMountain/scripts.pory"
	release
	end


SoarBack::
# 56 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq SoarBack_1
# 64 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_TRANS_NOIVERN, SoarBack_4
SoarBack_3:
# 96 "data/maps/DaycareMountain/scripts.pory"
	lock
# 97 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_1, MSGBOX_DEFAULT
# 98 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 99 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarBack_1:
# 58 "data/maps/DaycareMountain/scripts.pory"
	lock
# 59 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, SoarBack_Movement_0
# 60 "data/maps/DaycareMountain/scripts.pory"
	waitmovement LOCALID_PLAYER
# 61 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarBack_2:
# 66 "data/maps/DaycareMountain/scripts.pory"
	lock
# 67 "data/maps/DaycareMountain/scripts.pory"
	checkpartymove MOVE_SUPER_FANG
# 68 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_ne SoarBack_8
# 88 "data/maps/DaycareMountain/scripts.pory"
	lock
# 89 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_1, MSGBOX_DEFAULT
# 90 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 91 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarBack_4:
# 64 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_ne SoarBack_2
	goto SoarBack_3

SoarBack_8:
# 70 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_0, MSGBOX_YESNO
# 71 "data/maps/DaycareMountain/scripts.pory"
	release
# 72 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SoarBack_11
# 82 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarBack_11:
# 74 "data/maps/DaycareMountain/scripts.pory"
	dittotransform SPECIES_NOIVERN
# 75 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, SoarBack_Movement_0
# 76 "data/maps/DaycareMountain/scripts.pory"
	waitmovement LOCALID_PLAYER
# 77 "data/maps/DaycareMountain/scripts.pory"
	release
	end


VullabyDialog::
# 106 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_SOAR_ACROSS, VullabyDialog_1
# 119 "data/maps/DaycareMountain/scripts.pory"
	lock
# 120 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 121 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 122 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_VULLABY, EMOTE_NORMAL
# 123 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyDialog_Text_2, MSGBOX_DEFAULT
# 124 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 125 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 126 "data/maps/DaycareMountain/scripts.pory"
	release
	end

VullabyDialog_1:
# 108 "data/maps/DaycareMountain/scripts.pory"
	lock
# 109 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 110 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 111 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_VULLABY, EMOTE_NORMAL
# 112 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyDialog_Text_1, MSGBOX_DEFAULT
# 113 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 114 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 115 "data/maps/DaycareMountain/scripts.pory"
	release
	end


NoibatDialog::
# 133 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq NoibatDialog_1
# 151 "data/maps/DaycareMountain/scripts.pory"
	lock
# 152 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 153 "data/maps/DaycareMountain/scripts.pory"
	speakername NoibatDialog_Text_0
# 154 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_NOIBAT, EMOTE_NORMAL
# 155 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_3, MSGBOX_DEFAULT
# 156 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 157 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 158 "data/maps/DaycareMountain/scripts.pory"
	release
	end

NoibatDialog_1:
# 135 "data/maps/DaycareMountain/scripts.pory"
	lock
# 136 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 137 "data/maps/DaycareMountain/scripts.pory"
	speakername NoibatDialog_Text_0
# 138 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_NOIBAT, EMOTE_HAPPY
# 139 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_1, MSGBOX_DEFAULT
# 140 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 141 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 142 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_NOIBAT, EMOTE_NORMAL
# 143 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_2, MSGBOX_DEFAULT
# 144 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 145 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 146 "data/maps/DaycareMountain/scripts.pory"
	release
	end


BattleVsLurantis::
# 164 "data/maps/DaycareMountain/scripts.pory"
	lock
# 166 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_TRANS_LURANTIS, BattleVsLurantis_2
# 175 "data/maps/DaycareMountain/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 176 "data/maps/DaycareMountain/scripts.pory"
	applymovement Lurantis, BattleVsLurantis_Movement_0
# 177 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Lurantis
# 178 "data/maps/DaycareMountain/scripts.pory"
	playse SE_PIN
# 179 "data/maps/DaycareMountain/scripts.pory"
	applymovement Lurantis, Common_Movement_ExclamationMark
# 180 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Lurantis
# 181 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 182 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_LURANTIS, EMOTE_NORMAL
# 183 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_2, MSGBOX_AUTOCLOSE
# 184 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 185 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_LURANTIS, 25, item = ITEM_OCCA_BERRY, move1 = MOVE_LEAF_BLADE, move2 = MOVE_LEECH_LIFE, move3 = MOVE_GIGA_IMPACT, move4 = MOVE_SWORDS_DANCE
# 186 "data/maps/DaycareMountain/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 187 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 188 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 189 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsLurantis_4
	return

BattleVsLurantis_2:
# 168 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 169 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 170 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_1, MSGBOX_DEFAULT
# 171 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 172 "data/maps/DaycareMountain/scripts.pory"
	release
	end

BattleVsLurantis_4:
# 191 "data/maps/DaycareMountain/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 192 "data/maps/DaycareMountain/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 193 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_TRANS_LURANTIS
# 194 "data/maps/DaycareMountain/scripts.pory"
	dittotransform SPECIES_LURANTIS
# 195 "data/maps/DaycareMountain/scripts.pory"
	playse MUS_LEVEL_UP
# 196 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_3, MSGBOX_DEFAULT
# 197 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 198 "data/maps/DaycareMountain/scripts.pory"
	dittotransform VAR_TEMP_0
# 199 "data/maps/DaycareMountain/scripts.pory"
	givemon SPECIES_LURANTIS, 25, move1 = MOVE_AERIAL_ACE, move2 = MOVE_BUG_BITE, move3 = MOVE_TRAILBLAZE, move4 = MOVE_CUT
# 200 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 201 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_LURANTIS, EMOTE_HAPPY
# 202 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_4, MSGBOX_DEFAULT
# 203 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 204 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 205 "data/maps/DaycareMountain/scripts.pory"
	fadenewbgm MUS_PMD_MOUNTAIN
# 206 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCave::
# 212 "data/maps/DaycareMountain/scripts.pory"
	lock
# 214 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_OMANYTE_BATTLE, OmanyteInCave_1
# 227 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, BattleVsLurantis_Movement_0
# 228 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 229 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 230 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 231 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 232 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 233 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 234 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 235 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 236 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 237 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 238 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 239 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 240 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCave_4
	return

OmanyteInCave_1:
# 216 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 217 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 218 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 219 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 220 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 221 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 222 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCave_4:
# 242 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 243 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 244 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 245 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 246 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 247 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 248 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCaveTrigger::
# 255 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_OMANYTE_BATTLE, OmanyteInCaveTrigger_1
	return

OmanyteInCaveTrigger_1:
# 257 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 258 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 259 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 260 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 261 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 262 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_2
# 264 "data/maps/DaycareMountain/scripts.pory"
	case 34, OmanyteInCaveTrigger_4
# 286 "data/maps/DaycareMountain/scripts.pory"
	case 33, OmanyteInCaveTrigger_5
	return

OmanyteInCaveTrigger_4:
# 265 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 266 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, OmanyteInCaveTrigger_Movement_1
# 267 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 268 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 269 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 270 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 271 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 272 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 273 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 274 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 275 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_6
	return

OmanyteInCaveTrigger_5:
# 287 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 288 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 289 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 290 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 291 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 292 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 293 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 294 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 295 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_8
	return

OmanyteInCaveTrigger_6:
# 277 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 278 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 279 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 280 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 281 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 282 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 283 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCaveTrigger_8:
# 297 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 298 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 299 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 300 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 301 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 302 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 303 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCave::
# 311 "data/maps/DaycareMountain/scripts.pory"
	lock
# 313 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_KABUTO_BATTLE, KabutoInCave_1
# 326 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, BattleVsLurantis_Movement_0
# 327 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 328 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 329 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 330 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 331 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 332 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 333 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 334 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 335 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 336 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 337 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 338 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 339 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCave_4
	return

KabutoInCave_1:
# 315 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 316 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 317 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 318 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_1, MSGBOX_DEFAULT
# 319 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 320 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 321 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCave_4:
# 341 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 342 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 343 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 344 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 345 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 346 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 347 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCaveTrigger::
# 355 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_KABUTO_BATTLE, KabutoInCaveTrigger_1
	return

KabutoInCaveTrigger_1:
# 357 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 358 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 359 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 360 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 361 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 362 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_1
# 364 "data/maps/DaycareMountain/scripts.pory"
	case 8, KabutoInCaveTrigger_4
# 384 "data/maps/DaycareMountain/scripts.pory"
	case 9, KabutoInCaveTrigger_5
	return

KabutoInCaveTrigger_4:
# 365 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 366 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 367 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 368 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 369 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 370 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 371 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 372 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 373 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_6
	return

KabutoInCaveTrigger_5:
# 385 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 386 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, KabutoInCaveTrigger_Movement_1
# 387 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 388 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 389 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 390 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 391 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 392 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 393 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 394 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 395 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_8
	return

KabutoInCaveTrigger_6:
# 375 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 376 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 377 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 378 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 379 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 380 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 381 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCaveTrigger_8:
# 397 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 398 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 399 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 400 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 401 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 402 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 403 "data/maps/DaycareMountain/scripts.pory"
	release
	end


VullabyAfterSoar::
# 411 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_SOAR_ACROSS, VullabyAfterSoar_1
	end

VullabyAfterSoar_1:
# 413 "data/maps/DaycareMountain/scripts.pory"
	lock
# 414 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SHOW_NOICE
# 415 "data/maps/DaycareMountain/scripts.pory"
	special SpawnCameraObject
# 416 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_0
# 417 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 418 "data/maps/DaycareMountain/scripts.pory"
	delay 30
# 419 "data/maps/DaycareMountain/scripts.pory"
	applymovement Vullaby, OmanyteInCaveTrigger_Movement_0
# 420 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Vullaby
# 421 "data/maps/DaycareMountain/scripts.pory"
	playse SE_PIN
# 422 "data/maps/DaycareMountain/scripts.pory"
	applymovement Vullaby, Common_Movement_ExclamationMark
# 423 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Vullaby
# 424 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 425 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_VULLABY, EMOTE_HAPPY
# 426 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyAfterSoar_Text_0, MSGBOX_AUTOCLOSE
# 427 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 428 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_1
# 429 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 430 "data/maps/DaycareMountain/scripts.pory"
	special RemoveCameraObject
# 431 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SOAR_ACROSS
# 432 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 433 "data/maps/DaycareMountain/scripts.pory"
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

# 59 "data/maps/DaycareMountain/scripts.pory"
SoarBack_Movement_0:
# 59 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 59 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 59 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 59 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
	step_end

# 176 "data/maps/DaycareMountain/scripts.pory"
BattleVsLurantis_Movement_0:
# 176 "data/maps/DaycareMountain/scripts.pory"
	face_player
	step_end

# 265 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_0:
# 265 "data/maps/DaycareMountain/scripts.pory"
	face_up
	step_end

# 266 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_1:
# 266 "data/maps/DaycareMountain/scripts.pory"
	walk_down
	step_end

# 365 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_0:
# 365 "data/maps/DaycareMountain/scripts.pory"
	face_left
	step_end

# 386 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_1:
# 386 "data/maps/DaycareMountain/scripts.pory"
	walk_right
	step_end

# 416 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_0:
# 416 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 416 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 416 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 416 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 416 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 416 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
	step_end

# 428 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_1:
# 428 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 428 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 428 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 428 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 428 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 428 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
	step_end

SoarFront_Text_0:
# 20 "data/maps/DaycareMountain/scripts.pory"
	.string "The bridge seems to be broken.\pWould you like to transform into\nNoivern to soar across?$"

SoarFront_Text_1:
# 39 "data/maps/DaycareMountain/scripts.pory"
	.string "The bridge seems to be broken.\pMaybe a Flying Pokémon could soar\nover the gap.$"

VullabyDialog_Text_0:
# 110 "data/maps/DaycareMountain/scripts.pory"
	.string "Vullaby$"

VullabyDialog_Text_1:
# 112 "data/maps/DaycareMountain/scripts.pory"
	.string "I wish I had stronger wings...\pThen I'd just fly right over the\nbroken bridge!$"

VullabyDialog_Text_2:
# 123 "data/maps/DaycareMountain/scripts.pory"
	.string "I wish I could transform like you.\pI would change into a giant eagle!\n$"

NoibatDialog_Text_0:
# 137 "data/maps/DaycareMountain/scripts.pory"
	.string "Noibat$"

NoibatDialog_Text_1:
# 139 "data/maps/DaycareMountain/scripts.pory"
	.string "Big brother!$"

NoibatDialog_Text_2:
# 143 "data/maps/DaycareMountain/scripts.pory"
	.string "Oh, no. It's just another Ditto...\pThere's a cave up ahead.\pYou'll need my big bro's power\nto beat the Pokémon waiting deep\lwithin.$"

NoibatDialog_Text_3:
# 155 "data/maps/DaycareMountain/scripts.pory"
	.string "There's a cave up ahead.\pYou'll need my big bro's power\nto beat the Pokémon waiting deep\lwithin.$"

BattleVsLurantis_Text_0:
# 169 "data/maps/DaycareMountain/scripts.pory"
	.string "Lurantis$"

BattleVsLurantis_Text_1:
# 170 "data/maps/DaycareMountain/scripts.pory"
	.string "Haven't seen any small trees\naround?\pThey tend to grow on the top of\ncliffs with crashing waterfalls.$"

BattleVsLurantis_Text_2:
# 183 "data/maps/DaycareMountain/scripts.pory"
	.string "You're out seeking your Egg...\nare you not?\pEvery Ditto comes here in search\nif the Mythical Egg.\pProve your strength to me.\nMy sharp raptorial arms may come\lin handy.$"

BattleVsLurantis_Text_3:
# 196 "data/maps/DaycareMountain/scripts.pory"
	.string "You have gained the ability to\ntransform into Lurantis!$"

BattleVsLurantis_Text_4:
# 202 "data/maps/DaycareMountain/scripts.pory"
	.string "You are a sharp one!\pUse my abilities to your\nadvantage.\pThe journey ahead is no walk in the\ndaycare.$"

OmanyteInCave_Text_0:
# 217 "data/maps/DaycareMountain/scripts.pory"
	.string "Omanyte$"

OmanyteInCave_Text_1:
# 219 "data/maps/DaycareMountain/scripts.pory"
	.string "Fine.\nYou've earned your stay.$"

OmanyteInCave_Text_2:
# 235 "data/maps/DaycareMountain/scripts.pory"
	.string "You're no fossil!\n$"

KabutoInCave_Text_0:
# 316 "data/maps/DaycareMountain/scripts.pory"
	.string "Kabuto$"

KabutoInCave_Text_1:
# 318 "data/maps/DaycareMountain/scripts.pory"
	.string "It was only the two of us\nanyways...$"

KabutoInCave_Text_2:
# 334 "data/maps/DaycareMountain/scripts.pory"
	.string "Fossils only!\n$"

KabutoInCave_Text_3:
# 343 "data/maps/DaycareMountain/scripts.pory"
	.string "Alright.\nWe can make an exception.$"

VullabyAfterSoar_Text_0:
# 426 "data/maps/DaycareMountain/scripts.pory"
	.string "Wow!\pYou made it across!\pTransforming into Noivern was\nclever!$"
