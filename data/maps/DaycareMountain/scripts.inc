DaycareMountain_MapScripts::
	.byte 0


SoarFront::
# 6 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq SoarFront_1
# 14 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_TRANS_NOIVERN, SoarFront_4
SoarFront_3:
# 34 "data/maps/DaycareMountain/scripts.pory"
	lock
# 35 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_1, MSGBOX_DEFAULT
# 36 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 37 "data/maps/DaycareMountain/scripts.pory"
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
	msgbox SoarFront_Text_0, MSGBOX_YESNO
# 18 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SoarFront_8
# 28 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarFront_4:
# 14 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_ne SoarFront_2
	goto SoarFront_3

SoarFront_8:
# 20 "data/maps/DaycareMountain/scripts.pory"
	dittotransform SPECIES_NOIVERN
# 21 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, SoarFront_Movement_0
# 22 "data/maps/DaycareMountain/scripts.pory"
	waitmovement LOCALID_PLAYER
# 23 "data/maps/DaycareMountain/scripts.pory"
	release
	end


SoarBack::
# 43 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq SoarBack_1
# 51 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_TRANS_NOIVERN, SoarBack_4
SoarBack_3:
# 70 "data/maps/DaycareMountain/scripts.pory"
	lock
# 71 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_1, MSGBOX_DEFAULT
# 72 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 73 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarBack_1:
# 45 "data/maps/DaycareMountain/scripts.pory"
	lock
# 46 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, SoarBack_Movement_0
# 47 "data/maps/DaycareMountain/scripts.pory"
	waitmovement LOCALID_PLAYER
# 48 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarBack_2:
# 53 "data/maps/DaycareMountain/scripts.pory"
	lock
# 54 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_0, MSGBOX_YESNO
# 55 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SoarBack_8
# 65 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarBack_4:
# 51 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_ne SoarBack_2
	goto SoarBack_3

SoarBack_8:
# 57 "data/maps/DaycareMountain/scripts.pory"
	dittotransform SPECIES_NOIVERN
# 58 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, SoarBack_Movement_0
# 59 "data/maps/DaycareMountain/scripts.pory"
	waitmovement LOCALID_PLAYER
# 60 "data/maps/DaycareMountain/scripts.pory"
	release
	end


VullabyDialog::
# 80 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_SOAR_ACROSS, VullabyDialog_1
# 93 "data/maps/DaycareMountain/scripts.pory"
	lock
# 94 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 95 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 96 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_VULLABY, EMOTE_NORMAL
# 97 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyDialog_Text_2, MSGBOX_DEFAULT
# 98 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 99 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 100 "data/maps/DaycareMountain/scripts.pory"
	release
	end

VullabyDialog_1:
# 82 "data/maps/DaycareMountain/scripts.pory"
	lock
# 83 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 84 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 85 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_VULLABY, EMOTE_NORMAL
# 86 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyDialog_Text_1, MSGBOX_DEFAULT
# 87 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 88 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 89 "data/maps/DaycareMountain/scripts.pory"
	release
	end


NoibatDialog::
# 107 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq NoibatDialog_1
# 125 "data/maps/DaycareMountain/scripts.pory"
	lock
# 126 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 127 "data/maps/DaycareMountain/scripts.pory"
	speakername NoibatDialog_Text_0
# 128 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_NOIBAT, EMOTE_NORMAL
# 129 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_3, MSGBOX_DEFAULT
# 130 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 131 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 132 "data/maps/DaycareMountain/scripts.pory"
	release
	end

NoibatDialog_1:
# 109 "data/maps/DaycareMountain/scripts.pory"
	lock
# 110 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 111 "data/maps/DaycareMountain/scripts.pory"
	speakername NoibatDialog_Text_0
# 112 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_NOIBAT, EMOTE_HAPPY
# 113 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_1, MSGBOX_DEFAULT
# 114 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 115 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 116 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_NOIBAT, EMOTE_NORMAL
# 117 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_2, MSGBOX_DEFAULT
# 118 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 119 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 120 "data/maps/DaycareMountain/scripts.pory"
	release
	end


BattleVsLurantis::
# 138 "data/maps/DaycareMountain/scripts.pory"
	lock
# 140 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_TRANS_LURANTIS, BattleVsLurantis_2
# 149 "data/maps/DaycareMountain/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 150 "data/maps/DaycareMountain/scripts.pory"
	applymovement Lurantis, BattleVsLurantis_Movement_0
# 151 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Lurantis
# 152 "data/maps/DaycareMountain/scripts.pory"
	playse SE_PIN
# 153 "data/maps/DaycareMountain/scripts.pory"
	applymovement Lurantis, Common_Movement_ExclamationMark
# 154 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Lurantis
# 155 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 156 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_LURANTIS, EMOTE_NORMAL
# 157 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_2, MSGBOX_AUTOCLOSE
# 158 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 159 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_LURANTIS, 25
# 160 "data/maps/DaycareMountain/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 161 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 162 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 163 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsLurantis_4
	return

BattleVsLurantis_2:
# 142 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 143 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 144 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_1, MSGBOX_DEFAULT
# 145 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 146 "data/maps/DaycareMountain/scripts.pory"
	release
	end

BattleVsLurantis_4:
# 165 "data/maps/DaycareMountain/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 166 "data/maps/DaycareMountain/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 167 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_TRANS_LURANTIS
# 168 "data/maps/DaycareMountain/scripts.pory"
	dittotransform SPECIES_LURANTIS
# 169 "data/maps/DaycareMountain/scripts.pory"
	playse MUS_LEVEL_UP
# 170 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_3, MSGBOX_DEFAULT
# 171 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 172 "data/maps/DaycareMountain/scripts.pory"
	dittotransform VAR_TEMP_0
# 173 "data/maps/DaycareMountain/scripts.pory"
	givemon SPECIES_LURANTIS, 25, move1 = MOVE_AERIAL_ACE, move2 = MOVE_BUG_BITE, move3 = MOVE_TRAILBLAZE, move4 = MOVE_CUT
# 174 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 175 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_LURANTIS, EMOTE_HAPPY
# 176 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_4, MSGBOX_DEFAULT
# 177 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 178 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 179 "data/maps/DaycareMountain/scripts.pory"
	fadenewbgm MUS_PMD_MOUNTAIN
# 180 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCave::
# 186 "data/maps/DaycareMountain/scripts.pory"
	lock
# 188 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_OMANYTE_BATTLE, OmanyteInCave_1
# 201 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, BattleVsLurantis_Movement_0
# 202 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 203 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 204 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 205 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 206 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 207 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 208 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 209 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 210 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 211 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 212 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 213 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 214 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCave_4
	return

OmanyteInCave_1:
# 190 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 191 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 192 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 193 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 194 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 195 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 196 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCave_4:
# 216 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 217 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 218 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 219 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 220 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 221 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 222 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCaveTrigger::
# 229 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_OMANYTE_BATTLE, OmanyteInCaveTrigger_1
	return

OmanyteInCaveTrigger_1:
# 231 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 232 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 233 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 234 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 235 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 236 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_2
# 238 "data/maps/DaycareMountain/scripts.pory"
	case 34, OmanyteInCaveTrigger_4
# 260 "data/maps/DaycareMountain/scripts.pory"
	case 33, OmanyteInCaveTrigger_5
	return

OmanyteInCaveTrigger_4:
# 239 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 240 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, OmanyteInCaveTrigger_Movement_1
# 241 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 242 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 243 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 244 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 245 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 246 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 247 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 248 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 249 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_6
	return

OmanyteInCaveTrigger_5:
# 261 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 262 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 263 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 264 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 265 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 266 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 267 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 268 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 269 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_8
	return

OmanyteInCaveTrigger_6:
# 251 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 252 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 253 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 254 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 255 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 256 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 257 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCaveTrigger_8:
# 271 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 272 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 273 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 274 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 275 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 276 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 277 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCave::
# 285 "data/maps/DaycareMountain/scripts.pory"
	lock
# 287 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_KABUTO_BATTLE, KabutoInCave_1
# 300 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, BattleVsLurantis_Movement_0
# 301 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 302 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 303 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 304 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 305 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 306 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 307 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 308 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 309 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 310 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 311 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 312 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 313 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCave_4
	return

KabutoInCave_1:
# 289 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 290 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 291 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 292 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_1, MSGBOX_DEFAULT
# 293 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 294 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 295 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCave_4:
# 315 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 316 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 317 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 318 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 319 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 320 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 321 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCaveTrigger::
# 329 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_KABUTO_BATTLE, KabutoInCaveTrigger_1
	return

KabutoInCaveTrigger_1:
# 331 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 332 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 333 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 334 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 335 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 336 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_1
# 338 "data/maps/DaycareMountain/scripts.pory"
	case 8, KabutoInCaveTrigger_4
# 358 "data/maps/DaycareMountain/scripts.pory"
	case 9, KabutoInCaveTrigger_5
	return

KabutoInCaveTrigger_4:
# 339 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 340 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 341 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 342 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 343 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 344 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 345 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 346 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 347 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_6
	return

KabutoInCaveTrigger_5:
# 359 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 360 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, KabutoInCaveTrigger_Movement_1
# 361 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 362 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 363 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 364 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 365 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 366 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 367 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 368 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 369 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_8
	return

KabutoInCaveTrigger_6:
# 349 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 350 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 351 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 352 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 353 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 354 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 355 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCaveTrigger_8:
# 371 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 372 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 373 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 374 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 375 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 376 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 377 "data/maps/DaycareMountain/scripts.pory"
	release
	end


VullabyAfterSoar::
# 385 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_SOAR_ACROSS, VullabyAfterSoar_1
	end

VullabyAfterSoar_1:
# 387 "data/maps/DaycareMountain/scripts.pory"
	lock
# 388 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SHOW_NOICE
# 389 "data/maps/DaycareMountain/scripts.pory"
	special SpawnCameraObject
# 390 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_0
# 391 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 392 "data/maps/DaycareMountain/scripts.pory"
	delay 30
# 393 "data/maps/DaycareMountain/scripts.pory"
	applymovement Vullaby, OmanyteInCaveTrigger_Movement_0
# 394 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Vullaby
# 395 "data/maps/DaycareMountain/scripts.pory"
	playse SE_PIN
# 396 "data/maps/DaycareMountain/scripts.pory"
	applymovement Vullaby, Common_Movement_ExclamationMark
# 397 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Vullaby
# 398 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 399 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_VULLABY, EMOTE_HAPPY
# 400 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyAfterSoar_Text_0, MSGBOX_AUTOCLOSE
# 401 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 402 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_1
# 403 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 404 "data/maps/DaycareMountain/scripts.pory"
	special RemoveCameraObject
# 405 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SOAR_ACROSS
# 406 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 407 "data/maps/DaycareMountain/scripts.pory"
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

# 46 "data/maps/DaycareMountain/scripts.pory"
SoarBack_Movement_0:
# 46 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 46 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 46 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 46 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
	step_end

# 150 "data/maps/DaycareMountain/scripts.pory"
BattleVsLurantis_Movement_0:
# 150 "data/maps/DaycareMountain/scripts.pory"
	face_player
	step_end

# 239 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_0:
# 239 "data/maps/DaycareMountain/scripts.pory"
	face_up
	step_end

# 240 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_1:
# 240 "data/maps/DaycareMountain/scripts.pory"
	walk_down
	step_end

# 339 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_0:
# 339 "data/maps/DaycareMountain/scripts.pory"
	face_left
	step_end

# 360 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_1:
# 360 "data/maps/DaycareMountain/scripts.pory"
	walk_right
	step_end

# 390 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_0:
# 390 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 390 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 390 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 390 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 390 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 390 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
	step_end

# 402 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_1:
# 402 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 402 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 402 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 402 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 402 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 402 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
	step_end

SoarFront_Text_0:
# 17 "data/maps/DaycareMountain/scripts.pory"
	.string "The bridge seems to be broken.\pWould you like to transform into\nNoivern to soar across?$"

SoarFront_Text_1:
# 35 "data/maps/DaycareMountain/scripts.pory"
	.string "The bridge seems to be broken.\pMaybe a Flying Pokémon could soar\nover the gap.$"

VullabyDialog_Text_0:
# 84 "data/maps/DaycareMountain/scripts.pory"
	.string "Vullaby$"

VullabyDialog_Text_1:
# 86 "data/maps/DaycareMountain/scripts.pory"
	.string "I wish I had stronger wings...\pThen I'd just fly right over the\nbroken bridge!$"

VullabyDialog_Text_2:
# 97 "data/maps/DaycareMountain/scripts.pory"
	.string "I wish I could transform like you.\pI would change into a giant eagle!\n$"

NoibatDialog_Text_0:
# 111 "data/maps/DaycareMountain/scripts.pory"
	.string "Noibat$"

NoibatDialog_Text_1:
# 113 "data/maps/DaycareMountain/scripts.pory"
	.string "Big brother!$"

NoibatDialog_Text_2:
# 117 "data/maps/DaycareMountain/scripts.pory"
	.string "Oh, no. It's just another Ditto...\pThere's a cave up ahead.\pYou'll need my big bro's power\nto beat the Pokémon waiting deep\lwithin.$"

NoibatDialog_Text_3:
# 129 "data/maps/DaycareMountain/scripts.pory"
	.string "There's a cave up ahead.\pYou'll need my big bro's power\nto beat the Pokémon waiting deep\lwithin.$"

BattleVsLurantis_Text_0:
# 143 "data/maps/DaycareMountain/scripts.pory"
	.string "Lurantis$"

BattleVsLurantis_Text_1:
# 144 "data/maps/DaycareMountain/scripts.pory"
	.string "Haven't seen any small trees\naround?\pThey tend to grow on the top of\ncliffs with crashing waterfalls.$"

BattleVsLurantis_Text_2:
# 157 "data/maps/DaycareMountain/scripts.pory"
	.string "You're out seeking your Egg...\nare you not?\pEvery Ditto comes here in search\nif the Mythical Egg.\pProve your strength to me.\nMy sharp raptorial arms may come\lin handy.$"

BattleVsLurantis_Text_3:
# 170 "data/maps/DaycareMountain/scripts.pory"
	.string "You have gained the ability to\ntransform into Lurantis!$"

BattleVsLurantis_Text_4:
# 176 "data/maps/DaycareMountain/scripts.pory"
	.string "You are a sharp one!\pUse my abilities to your\nadvantage.\pThe journey ahead is no walk in the\ndaycare.$"

OmanyteInCave_Text_0:
# 191 "data/maps/DaycareMountain/scripts.pory"
	.string "Omanyte$"

OmanyteInCave_Text_1:
# 193 "data/maps/DaycareMountain/scripts.pory"
	.string "Fine.\nYou've earned your stay.$"

OmanyteInCave_Text_2:
# 209 "data/maps/DaycareMountain/scripts.pory"
	.string "You're no fossil!\n$"

KabutoInCave_Text_0:
# 290 "data/maps/DaycareMountain/scripts.pory"
	.string "Kabuto$"

KabutoInCave_Text_1:
# 292 "data/maps/DaycareMountain/scripts.pory"
	.string "It was only the two of us\nanyways...$"

KabutoInCave_Text_2:
# 308 "data/maps/DaycareMountain/scripts.pory"
	.string "Fossils only!\n$"

KabutoInCave_Text_3:
# 317 "data/maps/DaycareMountain/scripts.pory"
	.string "Alright.\nWe can make an exception.$"

VullabyAfterSoar_Text_0:
# 400 "data/maps/DaycareMountain/scripts.pory"
	.string "Wow!\pYou made it across!\pTransforming into Noivern was\nclever!$"
