DaycareMountain_MapScripts::
	.byte 0


SoarFront::
# 6 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq SoarFront_1
# 15 "data/maps/DaycareMountain/scripts.pory"
	lock
# 16 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_0, MSGBOX_DEFAULT
# 17 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 18 "data/maps/DaycareMountain/scripts.pory"
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


SoarBack::
# 24 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq SoarBack_1
# 33 "data/maps/DaycareMountain/scripts.pory"
	lock
# 34 "data/maps/DaycareMountain/scripts.pory"
	msgbox SoarFront_Text_0, MSGBOX_DEFAULT
# 35 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 36 "data/maps/DaycareMountain/scripts.pory"
	release
	end

SoarBack_1:
# 26 "data/maps/DaycareMountain/scripts.pory"
	lock
# 27 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, SoarBack_Movement_0
# 28 "data/maps/DaycareMountain/scripts.pory"
	waitmovement LOCALID_PLAYER
# 29 "data/maps/DaycareMountain/scripts.pory"
	release
	end


VullabyDialog::
# 43 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_SOAR_ACROSS, VullabyDialog_1
# 56 "data/maps/DaycareMountain/scripts.pory"
	lock
# 57 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 58 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 59 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_VULLABY, EMOTE_NORMAL
# 60 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyDialog_Text_2, MSGBOX_DEFAULT
# 61 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 62 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 63 "data/maps/DaycareMountain/scripts.pory"
	release
	end

VullabyDialog_1:
# 45 "data/maps/DaycareMountain/scripts.pory"
	lock
# 46 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 47 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 48 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_VULLABY, EMOTE_NORMAL
# 49 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyDialog_Text_1, MSGBOX_DEFAULT
# 50 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 51 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 52 "data/maps/DaycareMountain/scripts.pory"
	release
	end


NoibatDialog::
# 70 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq NoibatDialog_1
# 88 "data/maps/DaycareMountain/scripts.pory"
	lock
# 89 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 90 "data/maps/DaycareMountain/scripts.pory"
	speakername NoibatDialog_Text_0
# 91 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_NOIBAT, EMOTE_NORMAL
# 92 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_3, MSGBOX_DEFAULT
# 93 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 94 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 95 "data/maps/DaycareMountain/scripts.pory"
	release
	end

NoibatDialog_1:
# 72 "data/maps/DaycareMountain/scripts.pory"
	lock
# 73 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 74 "data/maps/DaycareMountain/scripts.pory"
	speakername NoibatDialog_Text_0
# 75 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_NOIBAT, EMOTE_HAPPY
# 76 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_1, MSGBOX_DEFAULT
# 77 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 78 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 79 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_NOIBAT, EMOTE_NORMAL
# 80 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_2, MSGBOX_DEFAULT
# 81 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 82 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 83 "data/maps/DaycareMountain/scripts.pory"
	release
	end


BattleVsLurantis::
# 101 "data/maps/DaycareMountain/scripts.pory"
	lock
# 103 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_TRANS_LURANTIS, BattleVsLurantis_2
# 112 "data/maps/DaycareMountain/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 113 "data/maps/DaycareMountain/scripts.pory"
	applymovement Lurantis, BattleVsLurantis_Movement_0
# 114 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Lurantis
# 115 "data/maps/DaycareMountain/scripts.pory"
	playse SE_PIN
# 116 "data/maps/DaycareMountain/scripts.pory"
	applymovement Lurantis, Common_Movement_ExclamationMark
# 117 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Lurantis
# 118 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 119 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_LURANTIS, EMOTE_NORMAL
# 120 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_2, MSGBOX_AUTOCLOSE
# 121 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 122 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_LURANTIS, 25
# 123 "data/maps/DaycareMountain/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 124 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 125 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 126 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsLurantis_4
	return

BattleVsLurantis_2:
# 105 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 106 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 107 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_1, MSGBOX_DEFAULT
# 108 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 109 "data/maps/DaycareMountain/scripts.pory"
	release
	end

BattleVsLurantis_4:
# 128 "data/maps/DaycareMountain/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 129 "data/maps/DaycareMountain/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 130 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_TRANS_LURANTIS
# 131 "data/maps/DaycareMountain/scripts.pory"
	dittotransform SPECIES_LURANTIS
# 132 "data/maps/DaycareMountain/scripts.pory"
	playse MUS_LEVEL_UP
# 133 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_3, MSGBOX_DEFAULT
# 134 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 135 "data/maps/DaycareMountain/scripts.pory"
	dittotransform VAR_TEMP_0
# 136 "data/maps/DaycareMountain/scripts.pory"
	givemon SPECIES_LURANTIS, 25, move1 = MOVE_AERIAL_ACE, move2 = MOVE_BUG_BITE, move3 = MOVE_TRAILBLAZE, move4 = MOVE_CUT
# 137 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 138 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_LURANTIS, EMOTE_HAPPY
# 139 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_4, MSGBOX_DEFAULT
# 140 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 141 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 142 "data/maps/DaycareMountain/scripts.pory"
	fadenewbgm MUS_PMD_MOUNTAIN
# 143 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCave::
# 149 "data/maps/DaycareMountain/scripts.pory"
	lock
# 151 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_OMANYTE_BATTLE, OmanyteInCave_1
# 164 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, BattleVsLurantis_Movement_0
# 165 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 166 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 167 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 168 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 169 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 170 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 171 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 172 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 173 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 174 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 175 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 176 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 177 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCave_4
	return

OmanyteInCave_1:
# 153 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 154 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 155 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 156 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 157 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 158 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 159 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCave_4:
# 179 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 180 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 181 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 182 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 183 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 184 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 185 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCaveTrigger::
# 192 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_OMANYTE_BATTLE, OmanyteInCaveTrigger_1
	return

OmanyteInCaveTrigger_1:
# 194 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 195 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 196 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 197 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 198 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 199 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_2
# 201 "data/maps/DaycareMountain/scripts.pory"
	case 34, OmanyteInCaveTrigger_4
# 223 "data/maps/DaycareMountain/scripts.pory"
	case 33, OmanyteInCaveTrigger_5
	return

OmanyteInCaveTrigger_4:
# 202 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 203 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, OmanyteInCaveTrigger_Movement_1
# 204 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 205 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 206 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 207 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 208 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 209 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 210 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 211 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 212 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_6
	return

OmanyteInCaveTrigger_5:
# 224 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 225 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 226 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 227 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 228 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 229 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 230 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 231 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 232 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_8
	return

OmanyteInCaveTrigger_6:
# 214 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 215 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 216 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 217 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 218 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 219 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 220 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCaveTrigger_8:
# 234 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 235 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 236 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 237 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 238 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 239 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 240 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCave::
# 248 "data/maps/DaycareMountain/scripts.pory"
	lock
# 250 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_KABUTO_BATTLE, KabutoInCave_1
# 263 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, BattleVsLurantis_Movement_0
# 264 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 265 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 266 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 267 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 268 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 269 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 270 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 271 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 272 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 273 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 274 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 275 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 276 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCave_4
	return

KabutoInCave_1:
# 252 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 253 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 254 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 255 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_1, MSGBOX_DEFAULT
# 256 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 257 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 258 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCave_4:
# 278 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 279 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 280 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 281 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 282 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 283 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 284 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCaveTrigger::
# 292 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_KABUTO_BATTLE, KabutoInCaveTrigger_1
	return

KabutoInCaveTrigger_1:
# 294 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 295 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 296 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 297 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 298 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 299 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_1
# 301 "data/maps/DaycareMountain/scripts.pory"
	case 8, KabutoInCaveTrigger_4
# 321 "data/maps/DaycareMountain/scripts.pory"
	case 9, KabutoInCaveTrigger_5
	return

KabutoInCaveTrigger_4:
# 302 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 303 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 304 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 305 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 306 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 307 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 308 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 309 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 310 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_6
	return

KabutoInCaveTrigger_5:
# 322 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 323 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, KabutoInCaveTrigger_Movement_1
# 324 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 325 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 326 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 327 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 328 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 329 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 330 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 331 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 332 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_8
	return

KabutoInCaveTrigger_6:
# 312 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 313 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 314 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 315 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 316 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 317 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 318 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCaveTrigger_8:
# 334 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 335 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 336 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 337 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 338 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 339 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 340 "data/maps/DaycareMountain/scripts.pory"
	release
	end


VullabyAfterSoar::
# 348 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_SOAR_ACROSS, VullabyAfterSoar_1
	end

VullabyAfterSoar_1:
# 350 "data/maps/DaycareMountain/scripts.pory"
	lock
# 351 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SHOW_NOICE
# 352 "data/maps/DaycareMountain/scripts.pory"
	special SpawnCameraObject
# 353 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_0
# 354 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 355 "data/maps/DaycareMountain/scripts.pory"
	delay 30
# 356 "data/maps/DaycareMountain/scripts.pory"
	applymovement Vullaby, OmanyteInCaveTrigger_Movement_0
# 357 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Vullaby
# 358 "data/maps/DaycareMountain/scripts.pory"
	playse SE_PIN
# 359 "data/maps/DaycareMountain/scripts.pory"
	applymovement Vullaby, Common_Movement_ExclamationMark
# 360 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Vullaby
# 361 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 362 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_VULLABY, EMOTE_HAPPY
# 363 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyAfterSoar_Text_0, MSGBOX_AUTOCLOSE
# 364 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 365 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_1
# 366 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 367 "data/maps/DaycareMountain/scripts.pory"
	special RemoveCameraObject
# 368 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SOAR_ACROSS
# 369 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 370 "data/maps/DaycareMountain/scripts.pory"
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

# 27 "data/maps/DaycareMountain/scripts.pory"
SoarBack_Movement_0:
# 27 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 27 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 27 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 27 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
	step_end

# 113 "data/maps/DaycareMountain/scripts.pory"
BattleVsLurantis_Movement_0:
# 113 "data/maps/DaycareMountain/scripts.pory"
	face_player
	step_end

# 202 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_0:
# 202 "data/maps/DaycareMountain/scripts.pory"
	face_up
	step_end

# 203 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_1:
# 203 "data/maps/DaycareMountain/scripts.pory"
	walk_down
	step_end

# 302 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_0:
# 302 "data/maps/DaycareMountain/scripts.pory"
	face_left
	step_end

# 323 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_1:
# 323 "data/maps/DaycareMountain/scripts.pory"
	walk_right
	step_end

# 353 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_0:
# 353 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 353 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 353 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 353 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 353 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 353 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
	step_end

# 365 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_1:
# 365 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 365 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 365 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 365 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 365 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 365 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
	step_end

SoarFront_Text_0:
# 16 "data/maps/DaycareMountain/scripts.pory"
	.string "The bridge seems to be broken.\pMaybe a Flying Pokémon could soar\nover the gap.$"

VullabyDialog_Text_0:
# 47 "data/maps/DaycareMountain/scripts.pory"
	.string "Vullaby$"

VullabyDialog_Text_1:
# 49 "data/maps/DaycareMountain/scripts.pory"
	.string "I wish I had stronger wings...\pThen I'd just fly right over the\nbroken bridge!$"

VullabyDialog_Text_2:
# 60 "data/maps/DaycareMountain/scripts.pory"
	.string "I wish I could transform like you.\pI would change into a giant eagle!\n$"

NoibatDialog_Text_0:
# 74 "data/maps/DaycareMountain/scripts.pory"
	.string "Noibat$"

NoibatDialog_Text_1:
# 76 "data/maps/DaycareMountain/scripts.pory"
	.string "Big brother!$"

NoibatDialog_Text_2:
# 80 "data/maps/DaycareMountain/scripts.pory"
	.string "Oh, no. It's just another Ditto...\pThere's a cave up ahead.\pYou'll need my big bro's power\nto beat the Pokémon waiting deep\lwithin.$"

NoibatDialog_Text_3:
# 92 "data/maps/DaycareMountain/scripts.pory"
	.string "There's a cave up ahead.\pYou'll need my big bro's power\nto beat the Pokémon waiting deep\lwithin.$"

BattleVsLurantis_Text_0:
# 106 "data/maps/DaycareMountain/scripts.pory"
	.string "Lurantis$"

BattleVsLurantis_Text_1:
# 107 "data/maps/DaycareMountain/scripts.pory"
	.string "Haven't seen any small trees\naround?\pThey tend to grow on the top of\ncliffs with crashing waterfalls.$"

BattleVsLurantis_Text_2:
# 120 "data/maps/DaycareMountain/scripts.pory"
	.string "You're out seeking your Egg...\nare you not?\pEvery Ditto comes here in search\nif the Mythical Egg.\pProve your strength to me.\nMy sharp raptorial arms may come\lin handy.$"

BattleVsLurantis_Text_3:
# 133 "data/maps/DaycareMountain/scripts.pory"
	.string "You have gained the ability to\ntransform into Lurantis!$"

BattleVsLurantis_Text_4:
# 139 "data/maps/DaycareMountain/scripts.pory"
	.string "You are a sharp one!\pUse my abilities to your\nadvantage.\pThe journey ahead is no walk in the\ndaycare.$"

OmanyteInCave_Text_0:
# 154 "data/maps/DaycareMountain/scripts.pory"
	.string "Omanyte$"

OmanyteInCave_Text_1:
# 156 "data/maps/DaycareMountain/scripts.pory"
	.string "Fine.\nYou've earned your stay.$"

OmanyteInCave_Text_2:
# 172 "data/maps/DaycareMountain/scripts.pory"
	.string "You're no fossil!\n$"

KabutoInCave_Text_0:
# 253 "data/maps/DaycareMountain/scripts.pory"
	.string "Kabuto$"

KabutoInCave_Text_1:
# 255 "data/maps/DaycareMountain/scripts.pory"
	.string "It was only the two of us\nanyways...$"

KabutoInCave_Text_2:
# 271 "data/maps/DaycareMountain/scripts.pory"
	.string "Fossils only!\n$"

KabutoInCave_Text_3:
# 280 "data/maps/DaycareMountain/scripts.pory"
	.string "Alright.\nWe can make an exception.$"

VullabyAfterSoar_Text_0:
# 363 "data/maps/DaycareMountain/scripts.pory"
	.string "Wow!\pYou made it across!\pTransforming into Noivern was\nclever!$"
