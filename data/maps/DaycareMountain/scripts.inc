DaycareMountain_MapScripts::
	.byte 0


SoarFront::
# 6 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq SoarFront_1
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
# 20 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq SoarBack_1
	end

SoarBack_1:
# 22 "data/maps/DaycareMountain/scripts.pory"
	lock
# 23 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, SoarBack_Movement_0
# 24 "data/maps/DaycareMountain/scripts.pory"
	waitmovement LOCALID_PLAYER
# 25 "data/maps/DaycareMountain/scripts.pory"
	release
	end


VullabyDialog::
# 35 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_SOAR_ACROSS, VullabyDialog_1
# 48 "data/maps/DaycareMountain/scripts.pory"
	lock
# 49 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 50 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 51 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_VULLABY, EMOTE_NORMAL
# 52 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyDialog_Text_2, MSGBOX_DEFAULT
# 53 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 54 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 55 "data/maps/DaycareMountain/scripts.pory"
	release
	end

VullabyDialog_1:
# 37 "data/maps/DaycareMountain/scripts.pory"
	lock
# 38 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 39 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 40 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_VULLABY, EMOTE_NORMAL
# 41 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyDialog_Text_1, MSGBOX_DEFAULT
# 42 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 43 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 44 "data/maps/DaycareMountain/scripts.pory"
	release
	end


NoibatDialog::
# 62 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq NoibatDialog_1
# 80 "data/maps/DaycareMountain/scripts.pory"
	lock
# 81 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 82 "data/maps/DaycareMountain/scripts.pory"
	speakername NoibatDialog_Text_0
# 83 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_NOIBAT, EMOTE_NORMAL
# 84 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_3, MSGBOX_DEFAULT
# 85 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 86 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 87 "data/maps/DaycareMountain/scripts.pory"
	release
	end

NoibatDialog_1:
# 64 "data/maps/DaycareMountain/scripts.pory"
	lock
# 65 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 66 "data/maps/DaycareMountain/scripts.pory"
	speakername NoibatDialog_Text_0
# 67 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_NOIBAT, EMOTE_HAPPY
# 68 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_1, MSGBOX_DEFAULT
# 69 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 70 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 71 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_NOIBAT, EMOTE_NORMAL
# 72 "data/maps/DaycareMountain/scripts.pory"
	msgbox NoibatDialog_Text_2, MSGBOX_DEFAULT
# 73 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 74 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 75 "data/maps/DaycareMountain/scripts.pory"
	release
	end


BattleVsLurantis::
# 93 "data/maps/DaycareMountain/scripts.pory"
	lock
# 95 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_TRANS_LURANTIS, BattleVsLurantis_2
# 104 "data/maps/DaycareMountain/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 105 "data/maps/DaycareMountain/scripts.pory"
	applymovement Lurantis, BattleVsLurantis_Movement_0
# 106 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Lurantis
# 107 "data/maps/DaycareMountain/scripts.pory"
	playse SE_PIN
# 108 "data/maps/DaycareMountain/scripts.pory"
	applymovement Lurantis, Common_Movement_ExclamationMark
# 109 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Lurantis
# 110 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 111 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_LURANTIS, EMOTE_NORMAL
# 112 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_2, MSGBOX_AUTOCLOSE
# 113 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 114 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_LURANTIS, 25
# 115 "data/maps/DaycareMountain/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 116 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 117 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 118 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsLurantis_4
	return

BattleVsLurantis_2:
# 97 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 98 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 99 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_1, MSGBOX_DEFAULT
# 100 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 101 "data/maps/DaycareMountain/scripts.pory"
	release
	end

BattleVsLurantis_4:
# 120 "data/maps/DaycareMountain/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 121 "data/maps/DaycareMountain/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 122 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_TRANS_LURANTIS
# 123 "data/maps/DaycareMountain/scripts.pory"
	dittotransform SPECIES_LURANTIS
# 124 "data/maps/DaycareMountain/scripts.pory"
	playse MUS_LEVEL_UP
# 125 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_3, MSGBOX_DEFAULT
# 126 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 127 "data/maps/DaycareMountain/scripts.pory"
	dittotransform VAR_TEMP_0
# 128 "data/maps/DaycareMountain/scripts.pory"
	givemon SPECIES_LURANTIS, 25, move1 = MOVE_AERIAL_ACE, move2 = MOVE_BUG_BITE, move3 = MOVE_TRAILBLAZE, move4 = MOVE_CUT
# 129 "data/maps/DaycareMountain/scripts.pory"
	speakername BattleVsLurantis_Text_0
# 130 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_LURANTIS, EMOTE_HAPPY
# 131 "data/maps/DaycareMountain/scripts.pory"
	msgbox BattleVsLurantis_Text_4, MSGBOX_DEFAULT
# 132 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 133 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 134 "data/maps/DaycareMountain/scripts.pory"
	fadenewbgm MUS_PMD_MOUNTAIN
# 135 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCave::
# 141 "data/maps/DaycareMountain/scripts.pory"
	lock
# 143 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_OMANYTE_BATTLE, OmanyteInCave_1
# 156 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, BattleVsLurantis_Movement_0
# 157 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 158 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 159 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 160 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 161 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 162 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 163 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 164 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 165 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 166 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 167 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 168 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 169 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCave_4
	return

OmanyteInCave_1:
# 145 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 146 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 147 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 148 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 149 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 150 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 151 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCave_4:
# 171 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 172 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 173 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 174 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 175 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 176 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 177 "data/maps/DaycareMountain/scripts.pory"
	release
	end


OmanyteInCaveTrigger::
# 184 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_OMANYTE_BATTLE, OmanyteInCaveTrigger_1
	return

OmanyteInCaveTrigger_1:
# 186 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 187 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, Common_Movement_ExclamationMark
# 188 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 189 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 190 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 191 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_2
# 193 "data/maps/DaycareMountain/scripts.pory"
	case 34, OmanyteInCaveTrigger_4
# 215 "data/maps/DaycareMountain/scripts.pory"
	case 33, OmanyteInCaveTrigger_5
	return

OmanyteInCaveTrigger_4:
# 194 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 195 "data/maps/DaycareMountain/scripts.pory"
	applymovement Omanyte, OmanyteInCaveTrigger_Movement_1
# 196 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Omanyte
# 197 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 198 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 199 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 200 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 201 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 202 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 203 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 204 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_6
	return

OmanyteInCaveTrigger_5:
# 216 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, OmanyteInCaveTrigger_Movement_0
# 217 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 218 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 219 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_2, MSGBOX_AUTOCLOSE
# 220 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 221 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 25
# 222 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 223 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 224 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq OmanyteInCaveTrigger_8
	return

OmanyteInCaveTrigger_6:
# 206 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 207 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 208 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 209 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 210 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 211 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 212 "data/maps/DaycareMountain/scripts.pory"
	release
	end

OmanyteInCaveTrigger_8:
# 226 "data/maps/DaycareMountain/scripts.pory"
	speakername OmanyteInCave_Text_0
# 227 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_OMANYTE, EMOTE_NORMAL
# 228 "data/maps/DaycareMountain/scripts.pory"
	msgbox OmanyteInCave_Text_1, MSGBOX_DEFAULT
# 229 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_OMANYTE_BATTLE
# 230 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 231 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 232 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCave::
# 240 "data/maps/DaycareMountain/scripts.pory"
	lock
# 242 "data/maps/DaycareMountain/scripts.pory"
	goto_if_set FLAG_KABUTO_BATTLE, KabutoInCave_1
# 255 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, BattleVsLurantis_Movement_0
# 256 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 257 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 258 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 259 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 260 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 261 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 262 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 263 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 264 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 265 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 266 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 267 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 268 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCave_4
	return

KabutoInCave_1:
# 244 "data/maps/DaycareMountain/scripts.pory"
	faceplayer
# 245 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 246 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 247 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_1, MSGBOX_DEFAULT
# 248 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 249 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 250 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCave_4:
# 270 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 271 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 272 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 273 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 274 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 275 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 276 "data/maps/DaycareMountain/scripts.pory"
	release
	end


KabutoInCaveTrigger::
# 284 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_KABUTO_BATTLE, KabutoInCaveTrigger_1
	return

KabutoInCaveTrigger_1:
# 286 "data/maps/DaycareMountain/scripts.pory"
	special PlayTrainerEncounterMusic
# 287 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, Common_Movement_ExclamationMark
# 288 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 289 "data/maps/DaycareMountain/scripts.pory"
	delay 60
# 290 "data/maps/DaycareMountain/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 291 "data/maps/DaycareMountain/scripts.pory"
	switch VAR_TEMP_1
# 293 "data/maps/DaycareMountain/scripts.pory"
	case 8, KabutoInCaveTrigger_4
# 313 "data/maps/DaycareMountain/scripts.pory"
	case 9, KabutoInCaveTrigger_5
	return

KabutoInCaveTrigger_4:
# 294 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 295 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 296 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 297 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 298 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 299 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 300 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 301 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 302 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_6
	return

KabutoInCaveTrigger_5:
# 314 "data/maps/DaycareMountain/scripts.pory"
	applymovement LOCALID_PLAYER, KabutoInCaveTrigger_Movement_0
# 315 "data/maps/DaycareMountain/scripts.pory"
	applymovement Kabuto, KabutoInCaveTrigger_Movement_1
# 316 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Kabuto
# 317 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 318 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 319 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_2, MSGBOX_AUTOCLOSE
# 320 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 321 "data/maps/DaycareMountain/scripts.pory"
	setwildbattle SPECIES_KABUTO, 25
# 322 "data/maps/DaycareMountain/scripts.pory"
	dowildbattle
# 323 "data/maps/DaycareMountain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 324 "data/maps/DaycareMountain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq KabutoInCaveTrigger_8
	return

KabutoInCaveTrigger_6:
# 304 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 305 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 306 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 307 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 308 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 309 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 310 "data/maps/DaycareMountain/scripts.pory"
	release
	end

KabutoInCaveTrigger_8:
# 326 "data/maps/DaycareMountain/scripts.pory"
	speakername KabutoInCave_Text_0
# 327 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_KABUTO, EMOTE_NORMAL
# 328 "data/maps/DaycareMountain/scripts.pory"
	msgbox KabutoInCave_Text_3, MSGBOX_DEFAULT
# 329 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_KABUTO_BATTLE
# 330 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 331 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 332 "data/maps/DaycareMountain/scripts.pory"
	release
	end


VullabyAfterSoar::
# 340 "data/maps/DaycareMountain/scripts.pory"
	goto_if_unset FLAG_SOAR_ACROSS, VullabyAfterSoar_1
	end

VullabyAfterSoar_1:
# 342 "data/maps/DaycareMountain/scripts.pory"
	lock
# 343 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SHOW_NOICE
# 344 "data/maps/DaycareMountain/scripts.pory"
	special SpawnCameraObject
# 345 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_0
# 346 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 347 "data/maps/DaycareMountain/scripts.pory"
	delay 30
# 348 "data/maps/DaycareMountain/scripts.pory"
	applymovement Vullaby, OmanyteInCaveTrigger_Movement_0
# 349 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Vullaby
# 350 "data/maps/DaycareMountain/scripts.pory"
	playse SE_PIN
# 351 "data/maps/DaycareMountain/scripts.pory"
	applymovement Vullaby, Common_Movement_ExclamationMark
# 352 "data/maps/DaycareMountain/scripts.pory"
	waitmovement Vullaby
# 353 "data/maps/DaycareMountain/scripts.pory"
	speakername VullabyDialog_Text_0
# 354 "data/maps/DaycareMountain/scripts.pory"
	createfieldmugshot MUGSHOT_VULLABY, EMOTE_HAPPY
# 355 "data/maps/DaycareMountain/scripts.pory"
	msgbox VullabyAfterSoar_Text_0, MSGBOX_AUTOCLOSE
# 356 "data/maps/DaycareMountain/scripts.pory"
	removefieldmugshot
# 357 "data/maps/DaycareMountain/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VullabyAfterSoar_Movement_1
# 358 "data/maps/DaycareMountain/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 359 "data/maps/DaycareMountain/scripts.pory"
	special RemoveCameraObject
# 360 "data/maps/DaycareMountain/scripts.pory"
	setflag FLAG_SOAR_ACROSS
# 361 "data/maps/DaycareMountain/scripts.pory"
	waitmessage
# 362 "data/maps/DaycareMountain/scripts.pory"
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

# 23 "data/maps/DaycareMountain/scripts.pory"
SoarBack_Movement_0:
# 23 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 23 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 23 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 23 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
	step_end

# 105 "data/maps/DaycareMountain/scripts.pory"
BattleVsLurantis_Movement_0:
# 105 "data/maps/DaycareMountain/scripts.pory"
	face_player
	step_end

# 194 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_0:
# 194 "data/maps/DaycareMountain/scripts.pory"
	face_up
	step_end

# 195 "data/maps/DaycareMountain/scripts.pory"
OmanyteInCaveTrigger_Movement_1:
# 195 "data/maps/DaycareMountain/scripts.pory"
	walk_down
	step_end

# 294 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_0:
# 294 "data/maps/DaycareMountain/scripts.pory"
	face_left
	step_end

# 315 "data/maps/DaycareMountain/scripts.pory"
KabutoInCaveTrigger_Movement_1:
# 315 "data/maps/DaycareMountain/scripts.pory"
	walk_right
	step_end

# 345 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_0:
# 345 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 345 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 345 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 345 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 345 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
# 345 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_down
	step_end

# 357 "data/maps/DaycareMountain/scripts.pory"
VullabyAfterSoar_Movement_1:
# 357 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 357 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 357 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 357 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 357 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
# 357 "data/maps/DaycareMountain/scripts.pory"
	walk_fast_up
	step_end

VullabyDialog_Text_0:
# 39 "data/maps/DaycareMountain/scripts.pory"
	.string "Vullaby$"

VullabyDialog_Text_1:
# 41 "data/maps/DaycareMountain/scripts.pory"
	.string "I wish I had stronger wings...\pThen I'd just fly right over the\nbroken bridge!$"

VullabyDialog_Text_2:
# 52 "data/maps/DaycareMountain/scripts.pory"
	.string "I wish I could transform like you.\pI would change into a giant eagle!\n$"

NoibatDialog_Text_0:
# 66 "data/maps/DaycareMountain/scripts.pory"
	.string "Noibat$"

NoibatDialog_Text_1:
# 68 "data/maps/DaycareMountain/scripts.pory"
	.string "Big brother!$"

NoibatDialog_Text_2:
# 72 "data/maps/DaycareMountain/scripts.pory"
	.string "Oh, no. It's just another Ditto...\pThere's a cave up ahead.\pYou'll need my big bro's power\nto beat the Pokémon waiting deep\lwithin.$"

NoibatDialog_Text_3:
# 84 "data/maps/DaycareMountain/scripts.pory"
	.string "There's a cave up ahead.\pYou'll need my big bro's power\nto beat the Pokémon waiting deep\lwithin.$"

BattleVsLurantis_Text_0:
# 98 "data/maps/DaycareMountain/scripts.pory"
	.string "Lurantis$"

BattleVsLurantis_Text_1:
# 99 "data/maps/DaycareMountain/scripts.pory"
	.string "Haven't seen any small trees\naround?\pThey tend to grow on the top of\ncliffs with crashing waterfalls.$"

BattleVsLurantis_Text_2:
# 112 "data/maps/DaycareMountain/scripts.pory"
	.string "You're out seeking your Egg...\nare you not?\pEvery Ditto comes here in search\nif the Mythical Egg.\pProve your strength to me.\nMy sharp raptorial arms may come\lin handy.$"

BattleVsLurantis_Text_3:
# 125 "data/maps/DaycareMountain/scripts.pory"
	.string "You have gained the ability to\ntransform into Lurantis!$"

BattleVsLurantis_Text_4:
# 131 "data/maps/DaycareMountain/scripts.pory"
	.string "You are a sharp one!\pUse my abilities to your\nadvantage.\pThe journey ahead is no walk in the\ndaycare.$"

OmanyteInCave_Text_0:
# 146 "data/maps/DaycareMountain/scripts.pory"
	.string "Omanyte$"

OmanyteInCave_Text_1:
# 148 "data/maps/DaycareMountain/scripts.pory"
	.string "Fine.\nYou've earned your stay.$"

OmanyteInCave_Text_2:
# 164 "data/maps/DaycareMountain/scripts.pory"
	.string "You're no fossil!\n$"

KabutoInCave_Text_0:
# 245 "data/maps/DaycareMountain/scripts.pory"
	.string "Kabuto$"

KabutoInCave_Text_1:
# 247 "data/maps/DaycareMountain/scripts.pory"
	.string "It was only the two of us\nanyways...$"

KabutoInCave_Text_2:
# 263 "data/maps/DaycareMountain/scripts.pory"
	.string "Fossils only!\n$"

KabutoInCave_Text_3:
# 272 "data/maps/DaycareMountain/scripts.pory"
	.string "Alright.\nWe can make an exception.$"

VullabyAfterSoar_Text_0:
# 355 "data/maps/DaycareMountain/scripts.pory"
	.string "Wow!\pYou made it across!\pTransforming into Noivern was\nclever!$"
