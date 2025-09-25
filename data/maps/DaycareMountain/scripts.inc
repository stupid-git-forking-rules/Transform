DaycareMountain_MapScripts::
	.byte 0


SoarFront::
# 6 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq SoarFront_1
# 14 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_TRANS_NOIVERN, SoarFront_4
SoarFront_3:
# 48 "data/maps/DaycareMountain/scripts.pory"
	lock
# 49 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_1, MSGBOX_DEFAULT
# 50 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 51 "data/maps/DaycareMountain/scripts.pory"
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
# 39 "data/maps/DaycareMountain/scripts.pory"
	lock
# 40 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_1, MSGBOX_DEFAULT
# 41 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 42 "data/maps/DaycareMountain/scripts.pory"
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
# 33 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarFront_11:
# 23 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 24 "data/maps/DaycareMountain/scripts.pory"
	waitbuttonpress
# 25 "data/maps/DaycareMountain/scripts.pory"
	dittotransform SPECIES_NOIVERN
# 26 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, SoarFront_Movement_0
# 27 "data/maps/DaycareMountain/scripts.pory"
	waitmovement LOCALID_PLAYER
# 28 "data/maps/DaycareMountain/scripts.pory"
	release
	end


SoarBack::
# 57 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq SoarBack_1
# 65 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_TRANS_NOIVERN, SoarBack_4
SoarBack_3:
# 98 "data/maps/DaycareMountain/scripts.pory"
	lock
# 99 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_1, MSGBOX_DEFAULT
# 100 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 101 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarBack_1:
# 59 "data/maps/DaycareMountain/scripts.pory"
	lock
# 60 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, SoarBack_Movement_0
# 61 "data/maps/DaycareMountain/scripts.pory"
	waitmovement LOCALID_PLAYER
# 62 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarBack_2:
# 67 "data/maps/DaycareMountain/scripts.pory"
	lock
# 68 "data/maps/DaycareMountain/scripts.pory"
	checkpartymove MOVE_SUPER_FANG
# 69 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_ne SoarBack_8
# 90 "data/maps/DaycareMountain/scripts.pory"
	lock
# 91 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_1, MSGBOX_DEFAULT
# 92 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 93 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarBack_4:
# 65 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_ne SoarBack_2
	goto SoarBack_3

SoarBack_8:
# 71 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_0, MSGBOX_YESNO
# 72 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SoarBack_11
# 84 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarBack_11:
# 74 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 75 "data/maps/DaycareMountain/scripts.pory"
	waitbuttonpress
# 76 "data/maps/DaycareMountain/scripts.pory"
	dittotransform SPECIES_NOIVERN
# 77 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, SoarBack_Movement_0
# 78 "data/maps/DaycareMountain/scripts.pory"
	waitmovement LOCALID_PLAYER
# 79 "data/maps/DaycareMountain/scripts.pory"
	release
	end


VullabyDialog::
# 108 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_SOAR_ACROSS, VullabyDialog_1
# 121 "data/maps/DaycareMountain/scripts.pory"
	lock
# 122 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 123 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 124 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_VULLABY, EMOTE_NORMAL
# 125 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyDialog_Text_2, MSGBOX_DEFAULT
# 126 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 127 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 128 "data/maps/DaycareMountain/scripts.pory"
	release
	end

VullabyDialog_1:
# 110 "data/maps/DaycareMountain/scripts.pory"
	lock
# 111 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 112 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 113 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_VULLABY, EMOTE_NORMAL
# 114 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyDialog_Text_1, MSGBOX_DEFAULT
# 115 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 116 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 117 "data/maps/DaycareMountain/scripts.pory"
	release
	end


NoibatDialog::
# 135 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq NoibatDialog_1
# 153 "data/maps/DaycareMountain/scripts.pory"
	lock
# 154 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 155 "data/maps/DaycareMountain/scripts.pory"
	speakername NoibatDialog_Text_0
# 156 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_NOIBAT, EMOTE_NORMAL
# 157 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_3, MSGBOX_DEFAULT
# 158 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 159 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 160 "data/maps/DaycareMountain/scripts.pory"
	release
	end

NoibatDialog_1:
# 137 "data/maps/DaycareMountain/scripts.pory"
	lock
# 138 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 139 "data/maps/DaycareMountain/scripts.pory"
	speakername NoibatDialog_Text_0
# 140 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_NOIBAT, EMOTE_HAPPY
# 141 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_1, MSGBOX_DEFAULT
# 142 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 143 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 144 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_NOIBAT, EMOTE_NORMAL
# 145 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_2, MSGBOX_DEFAULT
# 146 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 147 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 148 "data/maps/DaycareMountain/scripts.pory"
	release
	end


BattleVsLurantis::
# 166 "data/maps/DaycareMountain/scripts.pory"
	lock
# 168 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_TRANS_LURANTIS, BattleVsLurantis_2
# 177 "data/maps/DaycareMountain/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 178 "data/maps/DaycareMountain/scripts.pory"
	applymovement Lurantis, BattleVsLurantis_Movement_0
# 179 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Lurantis
# 180 "data/maps/DaycareMountain/scripts.pory"
	playse SE_PIN
# 181 "data/maps/DaycareMountain/scripts.pory"
	applymovement Lurantis, Common_Movement_ExclamationMark
# 182 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Lurantis
# 183 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 184 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_LURANTIS, EMOTE_NORMAL
# 185 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_2, MSGBOX_AUTOCLOSE
# 186 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 187 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_LURANTIS, 25, item = ITEM_OCCA_BERRY, move1 = MOVE_LEAF_BLADE, move2 = MOVE_LEECH_LIFE, move3 = MOVE_GIGA_IMPACT, move4 = MOVE_SWORDS_DANCE
# 188 "data/maps/DaycareMountain/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 189 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 190 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 191 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsLurantis_4
	return

BattleVsLurantis_2:
# 170 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 171 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 172 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_1, MSGBOX_DEFAULT
# 173 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 174 "data/maps/DaycareMountain/scripts.pory"
	release
	end

BattleVsLurantis_4:
# 193 "data/maps/DaycareMountain/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 194 "data/maps/DaycareMountain/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 195 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_TRANS_LURANTIS
# 196 "data/maps/DaycareMountain/scripts.pory"
	dittotransform SPECIES_LURANTIS
# 197 "data/maps/DaycareMountain/scripts.pory"
	playse MUS_LEVEL_UP
# 198 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_3, MSGBOX_DEFAULT
# 199 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 200 "data/maps/DaycareMountain/scripts.pory"
	dittotransform VAR_TEMP_0
# 201 "data/maps/DaycareMountain/scripts.pory"
	givemon SPECIES_LURANTIS, 25, move1 = MOVE_AERIAL_ACE, move2 = MOVE_BUG_BITE, move3 = MOVE_TRAILBLAZE, move4 = MOVE_CUT
# 202 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 203 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_LURANTIS, EMOTE_HAPPY
# 204 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_4, MSGBOX_DEFAULT
# 205 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 206 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 207 "data/maps/DaycareMountain/scripts.pory"
	fadenewbgm MUS_PMD_MOUNTAIN
# 208 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCave::
# 214 "data/maps/DaycareMountain/scripts.pory"
	lock
# 216 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_OMANYTE_BATTLE, OmanyteInCave_1
# 229 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, BattleVsLurantis_Movement_0
# 230 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 231 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 232 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 233 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 234 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 235 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 236 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 237 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 238 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 239 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 240 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 241 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 242 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCave_4
	return

OmanyteInCave_1:
# 218 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 219 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 220 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 221 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 222 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 223 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 224 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCave_4:
# 244 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 245 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 246 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 247 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 248 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 249 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 250 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCaveTrigger::
# 257 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_OMANYTE_BATTLE, OmanyteInCaveTrigger_1
	return

OmanyteInCaveTrigger_1:
# 259 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 260 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 261 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 262 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 263 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 264 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_2
# 266 "data/maps/DaycareMountain/scripts.pory"
	case 34, OmanyteInCaveTrigger_4
# 288 "data/maps/DaycareMountain/scripts.pory"
	case 33, OmanyteInCaveTrigger_5
	return

OmanyteInCaveTrigger_4:
# 267 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 268 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, OmanyteInCaveTrigger_Movement_1
# 269 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 270 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 271 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 272 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 273 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 274 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 275 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 276 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 277 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_6
	return

OmanyteInCaveTrigger_5:
# 289 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 290 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 291 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 292 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 293 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 294 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 295 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 296 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 297 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_8
	return

OmanyteInCaveTrigger_6:
# 279 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 280 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 281 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 282 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 283 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 284 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 285 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCaveTrigger_8:
# 299 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 300 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 301 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 302 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 303 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 304 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 305 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCave::
# 313 "data/maps/DaycareMountain/scripts.pory"
	lock
# 315 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_KABUTO_BATTLE, KabutoInCave_1
# 328 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, BattleVsLurantis_Movement_0
# 329 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 330 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 331 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 332 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 333 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 334 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 335 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 336 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 337 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 338 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 339 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 340 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 341 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCave_4
	return

KabutoInCave_1:
# 317 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 318 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 319 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 320 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_1, MSGBOX_DEFAULT
# 321 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 322 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 323 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCave_4:
# 343 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 344 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 345 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 346 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 347 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 348 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 349 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCaveTrigger::
# 357 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_KABUTO_BATTLE, KabutoInCaveTrigger_1
	return

KabutoInCaveTrigger_1:
# 359 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 360 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 361 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 362 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 363 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 364 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_1
# 366 "data/maps/DaycareMountain/scripts.pory"
	case 8, KabutoInCaveTrigger_4
# 386 "data/maps/DaycareMountain/scripts.pory"
	case 9, KabutoInCaveTrigger_5
	return

KabutoInCaveTrigger_4:
# 367 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 368 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 369 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 370 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 371 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 372 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 373 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 374 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 375 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_6
	return

KabutoInCaveTrigger_5:
# 387 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 388 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, KabutoInCaveTrigger_Movement_1
# 389 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 390 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 391 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 392 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 393 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 394 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 395 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 396 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 397 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_8
	return

KabutoInCaveTrigger_6:
# 377 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 378 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 379 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 380 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 381 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 382 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 383 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCaveTrigger_8:
# 399 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 400 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 401 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 402 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 403 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 404 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 405 "data/maps/DaycareMountain/scripts.pory"
	release
	end


VullabyAfterSoar::
# 413 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_SOAR_ACROSS, VullabyAfterSoar_1
	end

VullabyAfterSoar_1:
# 415 "data/maps/DaycareMountain/scripts.pory"
	lock
# 416 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SHOW_NOICE
# 417 "data/maps/DaycareMountain/scripts.pory"
	special SpawnCameraObject
# 418 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_0
# 419 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 420 "data/maps/DaycareMountain/scripts.pory"
	delay 30
# 421 "data/maps/DaycareMountain/scripts.pory"
	applymovement Vullaby, OmanyteInCaveTrigger_Movement_0
# 422 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Vullaby
# 423 "data/maps/DaycareMountain/scripts.pory"
	playse SE_PIN
# 424 "data/maps/DaycareMountain/scripts.pory"
	applymovement Vullaby, Common_Movement_ExclamationMark
# 425 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Vullaby
# 426 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 427 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_VULLABY, EMOTE_HAPPY
# 428 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyAfterSoar_Text_0, MSGBOX_AUTOCLOSE
# 429 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 430 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_1
# 431 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 432 "data/maps/DaycareMountain/scripts.pory"
	special RemoveCameraObject
# 433 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SOAR_ACROSS
# 434 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 435 "data/maps/DaycareMountain/scripts.pory"
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

# 60 "data/maps/DaycareMountain/scripts.pory"
SoarBack_Movement_0:
# 60 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 60 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 60 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 60 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
	step_end

# 178 "data/maps/DaycareMountain/scripts.pory"
BattleVsLurantis_Movement_0:
# 178 "data/maps/DaycareMountain/scripts.pory"
	face_player
	step_end

# 267 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_0:
# 267 "data/maps/DaycareMountain/scripts.pory"
	face_up
	step_end

# 268 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_1:
# 268 "data/maps/DaycareMountain/scripts.pory"
	walk_down
	step_end

# 367 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_0:
# 367 "data/maps/DaycareMountain/scripts.pory"
	face_left
	step_end

# 388 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_1:
# 388 "data/maps/DaycareMountain/scripts.pory"
	walk_right
	step_end

# 418 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_0:
# 418 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 418 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 418 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 418 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 418 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 418 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
	step_end

# 430 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_1:
# 430 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 430 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 430 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 430 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 430 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 430 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
	step_end

SoarFront_Text_0:
# 20 "data/maps/DaycareMountain/scripts.pory"
	.string "The bridge seems to be broken.\pWould you like to transform into\nNoivern to soar across?$"

SoarFront_Text_1:
# 40 "data/maps/DaycareMountain/scripts.pory"
	.string "The bridge seems to be broken.\pMaybe a Flying Pokémon could soar\nover the gap.$"

VullabyDialog_Text_0:
# 112 "data/maps/DaycareMountain/scripts.pory"
	.string "Vullaby$"

VullabyDialog_Text_1:
# 114 "data/maps/DaycareMountain/scripts.pory"
	.string "I wish I had stronger wings...\pThen I'd just fly right over the\nbroken bridge!$"

VullabyDialog_Text_2:
# 125 "data/maps/DaycareMountain/scripts.pory"
	.string "I wish I could transform like you.\pI would change into a giant eagle!\n$"

NoibatDialog_Text_0:
# 139 "data/maps/DaycareMountain/scripts.pory"
	.string "Noibat$"

NoibatDialog_Text_1:
# 141 "data/maps/DaycareMountain/scripts.pory"
	.string "Big brother!$"

NoibatDialog_Text_2:
# 145 "data/maps/DaycareMountain/scripts.pory"
	.string "Oh, no. It's just another Ditto...\pThere's a cave up ahead.\pYou'll need my big bro's power\nto beat the Pokémon waiting deep\lwithin.$"

NoibatDialog_Text_3:
# 157 "data/maps/DaycareMountain/scripts.pory"
	.string "There's a cave up ahead.\pYou'll need my big bro's power\nto beat the Pokémon waiting deep\lwithin.$"

BattleVsLurantis_Text_0:
# 171 "data/maps/DaycareMountain/scripts.pory"
	.string "Lurantis$"

BattleVsLurantis_Text_1:
# 172 "data/maps/DaycareMountain/scripts.pory"
	.string "Haven't seen any small trees\naround?\pThey tend to grow on the top of\ncliffs with crashing waterfalls.$"

BattleVsLurantis_Text_2:
# 185 "data/maps/DaycareMountain/scripts.pory"
	.string "You're out seeking your Egg...\nare you not?\pEvery Ditto comes here in search\nif the Mythical Egg.\pProve your strength to me.\nMy sharp raptorial arms may come\lin handy.$"

BattleVsLurantis_Text_3:
# 198 "data/maps/DaycareMountain/scripts.pory"
	.string "You have gained the ability to\ntransform into Lurantis!$"

BattleVsLurantis_Text_4:
# 204 "data/maps/DaycareMountain/scripts.pory"
	.string "You are a sharp one!\pUse my abilities to your\nadvantage.\pThe journey ahead is no walk in the\ndaycare.$"

OmanyteInCave_Text_0:
# 219 "data/maps/DaycareMountain/scripts.pory"
	.string "Omanyte$"

OmanyteInCave_Text_1:
# 221 "data/maps/DaycareMountain/scripts.pory"
	.string "Fine.\nYou've earned your stay.$"

OmanyteInCave_Text_2:
# 237 "data/maps/DaycareMountain/scripts.pory"
	.string "You're no fossil!\n$"

KabutoInCave_Text_0:
# 318 "data/maps/DaycareMountain/scripts.pory"
	.string "Kabuto$"

KabutoInCave_Text_1:
# 320 "data/maps/DaycareMountain/scripts.pory"
	.string "It was only the two of us\nanyways...$"

KabutoInCave_Text_2:
# 336 "data/maps/DaycareMountain/scripts.pory"
	.string "Fossils only!\n$"

KabutoInCave_Text_3:
# 345 "data/maps/DaycareMountain/scripts.pory"
	.string "Alright.\nWe can make an exception.$"

VullabyAfterSoar_Text_0:
# 428 "data/maps/DaycareMountain/scripts.pory"
	.string "Wow!\pYou made it across!\pTransforming into Noivern was\nclever!$"
