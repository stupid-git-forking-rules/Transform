DaycarePond_MapScripts::
# 2 "data/maps/DaycarePond/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DaycarePond_OnTransition
	.byte 0


DaycarePond_OnTransition::
# 6 "data/maps/DaycarePond/scripts.pory"
	setrespawn HEAL_LOCATION_DAYCARE_POND
	end


BattleVsMarill::
# 10 "data/maps/DaycarePond/scripts.pory"
	lock
# 12 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_TRANS_MARILL, BattleVsMarill_2
# 23 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 24 "data/maps/DaycarePond/scripts.pory"
	applymovement Marill, BattleVsMarill_Movement_0
# 25 "data/maps/DaycarePond/scripts.pory"
	waitmovement Marill
# 26 "data/maps/DaycarePond/scripts.pory"
	playse SE_PIN
# 27 "data/maps/DaycarePond/scripts.pory"
	applymovement Marill, Common_Movement_ExclamationMark
# 28 "data/maps/DaycarePond/scripts.pory"
	waitmovement Marill
# 29 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_MARILL, EMOTE_NORMAL
# 30 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsMarill_Text_0
# 31 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsMarill_Text_2, MSGBOX_AUTOCLOSE
# 32 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 33 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_MARILL, 25, move1 = MOVE_SURF, move2 = MOVE_AQUA_JET, move3 = MOVE_COVET, move4 = MOVE_RAIN_DANCE
# 34 "data/maps/DaycarePond/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 2, 1, 1, 2, 1, 0, 0
# 35 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 36 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 37 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsMarill_4
	return

BattleVsMarill_2:
# 14 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 15 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsMarill_Text_0
# 16 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_MARILL, EMOTE_NORMAL
# 17 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsMarill_Text_1, MSGBOX_DEFAULT
# 18 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 19 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 20 "data/maps/DaycarePond/scripts.pory"
	release
	end

BattleVsMarill_4:
# 39 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 40 "data/maps/DaycarePond/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 41 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_TRANS_MARILL
# 42 "data/maps/DaycarePond/scripts.pory"
	delay 15
# 43 "data/maps/DaycarePond/scripts.pory"
	dittotransform SPECIES_MARILL
# 44 "data/maps/DaycarePond/scripts.pory"
	playse MUS_LEVEL_UP
# 45 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsMarill_Text_3, MSGBOX_DEFAULT
# 46 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 47 "data/maps/DaycarePond/scripts.pory"
	dittotransform VAR_TEMP_0
# 48 "data/maps/DaycarePond/scripts.pory"
	givemon SPECIES_MARILL, 25, move1 = MOVE_SURF, move2 = MOVE_AQUA_JET, move3 = MOVE_COVET, move4 = MOVE_RAIN_DANCE
# 49 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 50 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsMarill_Text_0
# 51 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_MARILL, EMOTE_HAPPY
# 52 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsMarill_Text_1, MSGBOX_DEFAULT
# 53 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 54 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 55 "data/maps/DaycarePond/scripts.pory"
	fadenewbgm MUS_PMD_LAKE
# 56 "data/maps/DaycarePond/scripts.pory"
	release
	end


PsyduckDialog::
# 63 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_MUDKIP_PICKED_UP, PsyduckDialog_1
# 77 "data/maps/DaycarePond/scripts.pory"
	lock
# 78 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 79 "data/maps/DaycarePond/scripts.pory"
	speakername PsyduckDialog_Text_0
# 80 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_PSYDUCK, EMOTE_NORMAL
# 81 "data/maps/DaycarePond/scripts.pory"
	msgbox PsyduckDialog_Text_2, MSGBOX_NPC
# 82 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 83 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 84 "data/maps/DaycarePond/scripts.pory"
	release
	end

PsyduckDialog_1:
# 65 "data/maps/DaycarePond/scripts.pory"
	lock
# 66 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 67 "data/maps/DaycarePond/scripts.pory"
	speakername PsyduckDialog_Text_0
# 68 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_PSYDUCK, EMOTE_NORMAL
# 69 "data/maps/DaycarePond/scripts.pory"
	msgbox PsyduckDialog_Text_1, MSGBOX_NPC
# 70 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 71 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 72 "data/maps/DaycarePond/scripts.pory"
	release
	end


SprigatitoDialog::
# 91 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_SPRIGATITO_EGG, SprigatitoDialog_1
# 124 "data/maps/DaycarePond/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_LURANTIS
	goto_if_eq SprigatitoDialog_7
# 138 "data/maps/DaycarePond/scripts.pory"
	lock
# 139 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 140 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 141 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SPRIGATITO, EMOTE_NORMAL
# 142 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_2, MSGBOX_DEFAULT
# 143 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 144 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 145 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_1:
# 93 "data/maps/DaycarePond/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_LURANTIS
	goto_if_eq SprigatitoDialog_4
# 111 "data/maps/DaycarePond/scripts.pory"
	lock
# 112 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 113 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 114 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SPRIGATITO, EMOTE_NORMAL
# 115 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_2, MSGBOX_DEFAULT
# 116 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 117 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 118 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_4:
# 95 "data/maps/DaycarePond/scripts.pory"
	lock
# 96 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 97 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 98 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SPRIGATITO, EMOTE_ELATED
# 99 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_1, MSGBOX_DEFAULT
# 100 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 101 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 102 "data/maps/DaycarePond/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 103 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SPRIGATITO_EGG
# 104 "data/maps/DaycarePond/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 105 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 106 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_7:
# 126 "data/maps/DaycarePond/scripts.pory"
	lock
# 127 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 128 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 129 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SPRIGATITO, EMOTE_ELATED
# 130 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_3, MSGBOX_DEFAULT
# 131 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 132 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 133 "data/maps/DaycarePond/scripts.pory"
	release
	end


MudkipDialog::
# 153 "data/maps/DaycarePond/scripts.pory"
	lock
# 154 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 155 "data/maps/DaycarePond/scripts.pory"
	speakername MudkipDialog_Text_0
# 156 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_MUDKIP, EMOTE_ANGRY
# 157 "data/maps/DaycarePond/scripts.pory"
	msgbox MudkipDialog_Text_1, MSGBOX_NPC
# 158 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 159 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 160 "data/maps/DaycarePond/scripts.pory"
	release
	end


SeakingDialog::
# 165 "data/maps/DaycarePond/scripts.pory"
	lock
# 166 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 167 "data/maps/DaycarePond/scripts.pory"
	speakername SeakingDialog_Text_0
# 168 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SEAKING, EMOTE_NORMAL
# 169 "data/maps/DaycarePond/scripts.pory"
	msgbox SeakingDialog_Text_1, MSGBOX_NPC
# 170 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 171 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 172 "data/maps/DaycarePond/scripts.pory"
	release
	end


QuagsireDialog::
# 178 "data/maps/DaycarePond/scripts.pory"
	lock
# 179 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 180 "data/maps/DaycarePond/scripts.pory"
	speakername QuagsireDialog_Text_0
# 181 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_QUAGSIRE, EMOTE_HAPPY
# 182 "data/maps/DaycarePond/scripts.pory"
	msgbox QuagsireDialog_Text_1, MSGBOX_NPC
# 183 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 184 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 185 "data/maps/DaycarePond/scripts.pory"
	release
	end


GoomyInCave::
# 190 "data/maps/DaycarePond/scripts.pory"
	lock
# 191 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 192 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_GOOMY_BATTLE, GoomyInCave_1
# 204 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, BattleVsMarill_Movement_0
# 205 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 206 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 207 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, Common_Movement_ExclamationMark
# 208 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 209 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 210 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 211 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 212 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 213 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 214 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 215 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 216 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 217 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCave_4
	return

GoomyInCave_1:
# 194 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 195 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 196 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 197 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 198 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 199 "data/maps/DaycarePond/scripts.pory"
	release
	end

GoomyInCave_4:
# 219 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 220 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 221 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 222 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 223 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 224 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 225 "data/maps/DaycarePond/scripts.pory"
	release
	end


GoomyInCaveTrigger::
# 232 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_GOOMY_BATTLE, GoomyInCaveTrigger_1
	return

GoomyInCaveTrigger_1:
# 234 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 235 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, Common_Movement_ExclamationMark
# 236 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 237 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 238 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 239 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_1
# 241 "data/maps/DaycarePond/scripts.pory"
	case 16, GoomyInCaveTrigger_4
# 261 "data/maps/DaycarePond/scripts.pory"
	case 15, GoomyInCaveTrigger_5
	return

GoomyInCaveTrigger_4:
# 242 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 243 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 244 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 245 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 246 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 247 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 248 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 249 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 250 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCaveTrigger_6
	return

GoomyInCaveTrigger_5:
# 262 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 263 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, GoomyInCaveTrigger_Movement_1
# 264 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 265 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 266 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 267 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 268 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 269 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 270 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 271 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 272 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCaveTrigger_8
	return

GoomyInCaveTrigger_6:
# 252 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 253 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 254 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 255 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 256 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 257 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 258 "data/maps/DaycarePond/scripts.pory"
	release
	end

GoomyInCaveTrigger_8:
# 274 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 275 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 276 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 277 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 278 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 279 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 280 "data/maps/DaycarePond/scripts.pory"
	release
	end


BuizelInCave::
# 288 "data/maps/DaycarePond/scripts.pory"
	lock
# 289 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 290 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_BUIZEL_BATTLE, BuizelInCave_1
# 302 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 303 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 304 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 305 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, Common_Movement_ExclamationMark
# 306 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 307 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 308 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 309 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 310 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 311 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 312 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 313 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 314 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 315 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCave_4
	return

BuizelInCave_1:
# 292 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 293 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 294 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_1, MSGBOX_DEFAULT
# 295 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 296 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 297 "data/maps/DaycarePond/scripts.pory"
	release
	end

BuizelInCave_4:
# 317 "data/maps/DaycarePond/scripts.pory"
	lock
# 318 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 319 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 320 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 321 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 322 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 323 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 324 "data/maps/DaycarePond/scripts.pory"
	release
	end


BuizelInCaveTrigger::
# 331 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_BUIZEL_BATTLE, BuizelInCaveTrigger_1
	return

BuizelInCaveTrigger_1:
# 333 "data/maps/DaycarePond/scripts.pory"
	lock
# 334 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 335 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, Common_Movement_ExclamationMark
# 336 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 337 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 338 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 339 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_2
# 341 "data/maps/DaycarePond/scripts.pory"
	case 34, BuizelInCaveTrigger_4
# 366 "data/maps/DaycarePond/scripts.pory"
	case 35, BuizelInCaveTrigger_5
	return

BuizelInCaveTrigger_4:
# 342 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 343 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 344 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, BuizelInCaveTrigger_Movement_0
# 345 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BuizelInCaveTrigger_Movement_1
# 346 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 347 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 348 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 349 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 350 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 351 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 352 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 353 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 354 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCaveTrigger_6
	return

BuizelInCaveTrigger_5:
# 367 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 368 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 369 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, BuizelInCaveTrigger_Movement_0
# 370 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 371 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 372 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 373 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 374 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 375 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 376 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 377 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCaveTrigger_8
	return

BuizelInCaveTrigger_6:
# 356 "data/maps/DaycarePond/scripts.pory"
	lock
# 357 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 358 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 359 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 360 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 361 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 362 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 363 "data/maps/DaycarePond/scripts.pory"
	release
	end

BuizelInCaveTrigger_8:
# 379 "data/maps/DaycarePond/scripts.pory"
	lock
# 380 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 381 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 382 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 383 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 384 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 385 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 386 "data/maps/DaycarePond/scripts.pory"
	release
	end


SlowpokeInCave::
# 394 "data/maps/DaycarePond/scripts.pory"
	lock
# 395 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 396 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_SLOWPOKE_BATTLE, SlowpokeInCave_1
# 408 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, BattleVsMarill_Movement_0
# 409 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 410 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 411 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 412 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 413 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 414 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 415 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 416 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 417 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 418 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 419 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 420 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 421 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCave_4
	return

SlowpokeInCave_1:
# 398 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 399 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 400 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_1, MSGBOX_DEFAULT
# 401 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 402 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 403 "data/maps/DaycarePond/scripts.pory"
	release
	end

SlowpokeInCave_4:
# 423 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 424 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 425 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 426 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 427 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 428 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 429 "data/maps/DaycarePond/scripts.pory"
	release
	end


SlowpokeInCaveTrigger::
# 435 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_SLOWPOKE_BATTLE, SlowpokeInCaveTrigger_1
	return

SlowpokeInCaveTrigger_1:
# 437 "data/maps/DaycarePond/scripts.pory"
	lock
# 438 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 439 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 440 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_1
# 442 "data/maps/DaycarePond/scripts.pory"
	case 28, SlowpokeInCaveTrigger_4
# 468 "data/maps/DaycarePond/scripts.pory"
	case 26, SlowpokeInCaveTrigger_5
	return

SlowpokeInCaveTrigger_4:
# 443 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 444 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 445 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, GoomyInCaveTrigger_Movement_0
# 446 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 447 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, SlowpokeInCaveTrigger_Movement_0
# 448 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 449 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 450 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 451 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 452 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 453 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 454 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 455 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 456 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCaveTrigger_6
	return

SlowpokeInCaveTrigger_5:
# 469 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 470 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 471 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, SlowpokeInCaveTrigger_Movement_0
# 472 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 473 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 474 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 475 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 476 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 477 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 478 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 479 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 480 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 481 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 482 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCaveTrigger_8
	return

SlowpokeInCaveTrigger_6:
# 458 "data/maps/DaycarePond/scripts.pory"
	lock
# 459 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 460 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 461 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 462 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 463 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 464 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 465 "data/maps/DaycarePond/scripts.pory"
	release
	end

SlowpokeInCaveTrigger_8:
# 484 "data/maps/DaycarePond/scripts.pory"
	lock
# 485 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 486 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 487 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 488 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 489 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 490 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 491 "data/maps/DaycarePond/scripts.pory"
	release
	end


CroagunkInCave::
# 499 "data/maps/DaycarePond/scripts.pory"
	lock
# 500 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 501 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_CROAGUNK_BATTLE, CroagunkInCave_1
# 513 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, BattleVsMarill_Movement_0
# 514 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 515 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 516 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, Common_Movement_ExclamationMark
# 517 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 518 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 519 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 520 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 521 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 522 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 523 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 524 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 525 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 526 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCave_4
	return

CroagunkInCave_1:
# 503 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 504 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 505 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_1, MSGBOX_DEFAULT
# 506 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 507 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 508 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCave_4:
# 528 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 529 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 530 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 531 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 532 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 533 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 534 "data/maps/DaycarePond/scripts.pory"
	release
	end


CroagunkInCaveTrigger::
# 540 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_CROAGUNK_BATTLE, CroagunkInCaveTrigger_1
	return

CroagunkInCaveTrigger_1:
# 542 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 543 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, Common_Movement_ExclamationMark
# 544 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 545 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 546 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 547 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_2
# 549 "data/maps/DaycarePond/scripts.pory"
	case 3, CroagunkInCaveTrigger_4
# 569 "data/maps/DaycarePond/scripts.pory"
	case 4, CroagunkInCaveTrigger_5
# 591 "data/maps/DaycarePond/scripts.pory"
	case 5, CroagunkInCaveTrigger_6
# 613 "data/maps/DaycarePond/scripts.pory"
	case 6, CroagunkInCaveTrigger_7
# 635 "data/maps/DaycarePond/scripts.pory"
	case 7, CroagunkInCaveTrigger_8
	return

CroagunkInCaveTrigger_4:
# 550 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 551 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 552 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 553 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 554 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 555 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 556 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 557 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 558 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_9
	return

CroagunkInCaveTrigger_5:
# 570 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 571 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_1
# 572 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 573 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 574 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 575 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 576 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 577 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 578 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 579 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 580 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_11
	return

CroagunkInCaveTrigger_6:
# 592 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 593 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_2
# 594 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 595 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 596 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 597 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 598 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 599 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 600 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 601 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 602 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_13
	return

CroagunkInCaveTrigger_7:
# 614 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 615 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_3
# 616 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 617 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 618 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 619 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 620 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 621 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 622 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 623 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 624 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_15
	return

CroagunkInCaveTrigger_8:
# 636 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 637 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_4
# 638 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 639 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 640 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 641 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 642 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 643 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 644 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 645 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 646 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_17
	return

CroagunkInCaveTrigger_9:
# 560 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 561 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 562 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 563 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 564 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 565 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 566 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_11:
# 582 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 583 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 584 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 585 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 586 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 587 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 588 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_13:
# 604 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 605 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 606 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 607 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 608 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 609 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 610 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_15:
# 626 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 627 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 628 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 629 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 630 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 631 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 632 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_17:
# 648 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 649 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 650 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 651 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 652 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 653 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 654 "data/maps/DaycarePond/scripts.pory"
	release
	end


BattleVsDragonair::
# 662 "data/maps/DaycarePond/scripts.pory"
	lock
# 664 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_TRANS_DRAGONAIR, BattleVsDragonair_2
# 676 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 677 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, BattleVsMarill_Movement_0
# 678 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 679 "data/maps/DaycarePond/scripts.pory"
	playse SE_PIN
# 680 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, Common_Movement_ExclamationMark
# 681 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 682 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 683 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_DRAGONAIR, EMOTE_NORMAL
# 684 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_2, MSGBOX_AUTOCLOSE
# 685 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 686 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_DRAGONAIR, 25, move1 = MOVE_OUTRAGE, move2 = MOVE_WATERFALL, move3 = MOVE_IRON_HEAD, move4 = MOVE_SAFEGUARD
# 687 "data/maps/DaycarePond/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 2, 1, 1, 0, 2, 0, 0
# 688 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 689 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 690 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsDragonair_4
	return

BattleVsDragonair_2:
# 666 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, BattleVsMarill_Movement_0
# 667 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 668 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 669 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_DRAGONAIR, EMOTE_NORMAL
# 670 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_1, MSGBOX_DEFAULT
# 671 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 672 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 673 "data/maps/DaycarePond/scripts.pory"
	release
	end

BattleVsDragonair_4:
# 692 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 693 "data/maps/DaycarePond/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 694 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_TRANS_DRAGONAIR
# 695 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_MUDKIP_PICKED_UP
# 696 "data/maps/DaycarePond/scripts.pory"
	delay 15
# 697 "data/maps/DaycarePond/scripts.pory"
	dittotransform SPECIES_DRAGONAIR
# 698 "data/maps/DaycarePond/scripts.pory"
	playse MUS_LEVEL_UP
# 699 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_3, MSGBOX_DEFAULT
# 700 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 701 "data/maps/DaycarePond/scripts.pory"
	dittotransform VAR_TEMP_0
# 702 "data/maps/DaycarePond/scripts.pory"
	givemon SPECIES_DRAGONAIR, 25, move1 = MOVE_OUTRAGE, move2 = MOVE_WATERFALL, move3 = MOVE_IRON_HEAD, move4 = MOVE_SAFEGUARD
# 703 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 704 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_DRAGONAIR, EMOTE_HAPPY
# 705 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_4, MSGBOX_DEFAULT
# 706 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 707 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 708 "data/maps/DaycarePond/scripts.pory"
	fadenewbgm MUS_PMD_LAKE
# 709 "data/maps/DaycarePond/scripts.pory"
	release
	end


DaycarePond_FindLuckyEgg::
# 717 "data/maps/DaycarePond/scripts.pory"
	finditem ITEM_LUCKY_EGG
	return


ChanseyDaycarePond::
# 722 "data/maps/DaycarePond/scripts.pory"
	lock
# 723 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 724 "data/maps/DaycarePond/scripts.pory"
	speakername ChanseyDaycarePond_Text_0
# 725 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 726 "data/maps/DaycarePond/scripts.pory"
	msgbox ChanseyDaycarePond_Text_1, MSGBOX_DEFAULT
# 727 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 728 "data/maps/DaycarePond/scripts.pory"
	msgbox ChanseyDaycarePond_Text_2, MSGBOX_YESNO
# 729 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 730 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyDaycarePond_1
# 760 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 761 "data/maps/DaycarePond/scripts.pory"
	msgbox ChanseyDaycarePond_Text_5, MSGBOX_AUTOCLOSE
# 762 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 763 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 764 "data/maps/DaycarePond/scripts.pory"
	release
	end

ChanseyDaycarePond_1:
# 732 "data/maps/DaycarePond/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 733 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyDaycarePond_4
# 750 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 751 "data/maps/DaycarePond/scripts.pory"
	msgbox ChanseyDaycarePond_Text_4, MSGBOX_AUTOCLOSE
# 752 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 753 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 754 "data/maps/DaycarePond/scripts.pory"
	release
	end

ChanseyDaycarePond_4:
# 735 "data/maps/DaycarePond/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 736 "data/maps/DaycarePond/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 737 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 738 "data/maps/DaycarePond/scripts.pory"
	playfanfare MUS_HEAL
# 739 "data/maps/DaycarePond/scripts.pory"
	waitfanfare
# 740 "data/maps/DaycarePond/scripts.pory"
	special HealPlayerParty
# 741 "data/maps/DaycarePond/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 742 "data/maps/DaycarePond/scripts.pory"
	msgbox ChanseyDaycarePond_Text_3, MSGBOX_AUTOCLOSE
# 743 "data/maps/DaycarePond/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 744 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 745 "data/maps/DaycarePond/scripts.pory"
	release
	end


CroconawDialog::
# 771 "data/maps/DaycarePond/scripts.pory"
	lock
# 772 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 773 "data/maps/DaycarePond/scripts.pory"
	speakername CroconawDialog_Text_0
# 774 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROCONAW, EMOTE_NORMAL
# 775 "data/maps/DaycarePond/scripts.pory"
	msgbox CroconawDialog_Text_1, MSGBOX_NPC
# 776 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 777 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 778 "data/maps/DaycarePond/scripts.pory"
	release
	end


StarmieDialog::
# 783 "data/maps/DaycarePond/scripts.pory"
	lock
# 784 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 785 "data/maps/DaycarePond/scripts.pory"
	speakername StarmieDialog_Text_0
# 786 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_STARMIE, EMOTE_NORMAL
# 787 "data/maps/DaycarePond/scripts.pory"
	msgbox StarmieDialog_Text_1, MSGBOX_NPC
# 788 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 789 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 790 "data/maps/DaycarePond/scripts.pory"
	release
	end


DragonairHealLocation::
# 797 "data/maps/DaycarePond/scripts.pory"
	setrespawn HEAL_LOCATION_DAYCARE_POND_1
	end


# 24 "data/maps/DaycarePond/scripts.pory"
BattleVsMarill_Movement_0:
# 24 "data/maps/DaycarePond/scripts.pory"
	face_player
	step_end

# 242 "data/maps/DaycarePond/scripts.pory"
GoomyInCaveTrigger_Movement_0:
# 242 "data/maps/DaycarePond/scripts.pory"
	face_right
	step_end

# 263 "data/maps/DaycarePond/scripts.pory"
GoomyInCaveTrigger_Movement_1:
# 263 "data/maps/DaycarePond/scripts.pory"
	walk_left
	step_end

# 344 "data/maps/DaycarePond/scripts.pory"
BuizelInCaveTrigger_Movement_0:
# 344 "data/maps/DaycarePond/scripts.pory"
	face_down
	step_end

# 345 "data/maps/DaycarePond/scripts.pory"
BuizelInCaveTrigger_Movement_1:
# 345 "data/maps/DaycarePond/scripts.pory"
	walk_up
	step_end

# 447 "data/maps/DaycarePond/scripts.pory"
SlowpokeInCaveTrigger_Movement_0:
# 447 "data/maps/DaycarePond/scripts.pory"
	face_left
	step_end

# 550 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_0:
# 550 "data/maps/DaycarePond/scripts.pory"
	face_up
	step_end

# 571 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_1:
# 571 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 593 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_2:
# 593 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 593 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 615 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_3:
# 615 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 615 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 615 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 637 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_4:
# 637 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 637 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 637 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 637 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

BattleVsMarill_Text_0:
# 15 "data/maps/DaycarePond/scripts.pory"
	.string "Marill$"

BattleVsMarill_Text_1:
# 17 "data/maps/DaycarePond/scripts.pory"
	.string "You’re stronger than you look!\pSwim swiftly on your journey!$"

BattleVsMarill_Text_2:
# 31 "data/maps/DaycarePond/scripts.pory"
	.string "Oh! A Ditto?\pYou’re gathering powers for your\nquest, right?\pIf you can beat me, you’ll earn the\npower to transform into me!$"

BattleVsMarill_Text_3:
# 45 "data/maps/DaycarePond/scripts.pory"
	.string "You have gained the ability to\ntransform into Marill!$"

PsyduckDialog_Text_0:
# 67 "data/maps/DaycarePond/scripts.pory"
	.string "Psyduck$"

PsyduckDialog_Text_1:
# 69 "data/maps/DaycarePond/scripts.pory"
	.string "I came to the lake to try to ease\nthis headache...\pIt's the most peaceful biome at\nthe daycare.$"

PsyduckDialog_Text_2:
# 81 "data/maps/DaycarePond/scripts.pory"
	.string "Are you looking for Mudkip?\pIt's trainer came back and picked\nit up!\pAs fun as the Daycare is, some\nPokémon yearn to battle alongside\ltheir trainers.$"

SprigatitoDialog_Text_0:
# 97 "data/maps/DaycarePond/scripts.pory"
	.string "Sprigatito$"

SprigatitoDialog_Text_1:
# 99 "data/maps/DaycarePond/scripts.pory"
	.string "A Grass_type!\pDon't see many around the lake\nhere.\pPlease take this Egg I found.\n$"

SprigatitoDialog_Text_2:
# 115 "data/maps/DaycarePond/scripts.pory"
	.string "I love it here by the water but\nI hardly see any other\lGrass_types...$"

SprigatitoDialog_Text_3:
# 130 "data/maps/DaycarePond/scripts.pory"
	.string "A Grass_type!\pDon't see many around the lake\nhere.$"

MudkipDialog_Text_0:
# 155 "data/maps/DaycarePond/scripts.pory"
	.string "Mudkip$"

MudkipDialog_Text_1:
# 157 "data/maps/DaycarePond/scripts.pory"
	.string "I hope my trainer comes back\nsoon...\pI miss them.\pI'm supposed to be their first\npartner Pokémon.$"

SeakingDialog_Text_0:
# 167 "data/maps/DaycarePond/scripts.pory"
	.string "Seaking$"

SeakingDialog_Text_1:
# 169 "data/maps/DaycarePond/scripts.pory"
	.string "Everyone talks about how\ncool Vaporeon is.\pSeakings deserve attention too...\n$"

QuagsireDialog_Text_0:
# 180 "data/maps/DaycarePond/scripts.pory"
	.string "Quagsire$"

QuagsireDialog_Text_1:
# 182 "data/maps/DaycarePond/scripts.pory"
	.string "The Lake here is so calm.\pDragonair makes sure that we\nkeep the peace here.\pShe believes keeping it mellow\nis the key to EXP.$"

GoomyInCave_Text_0:
# 194 "data/maps/DaycarePond/scripts.pory"
	.string "Goomy$"

GoomyInCave_Text_1:
# 196 "data/maps/DaycarePond/scripts.pory"
	.string "Cool vibes friend.\pKeep on keepin on.\n$"

GoomyInCave_Text_2:
# 212 "data/maps/DaycarePond/scripts.pory"
	.string "Keepin it mellow...\nLet's just have some fun.$"

BuizelInCave_Text_0:
# 292 "data/maps/DaycarePond/scripts.pory"
	.string "Buizel$"

BuizelInCave_Text_1:
# 294 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair keeps to herself.\nEnsuring maximum relaxation.$"

BuizelInCave_Text_2:
# 310 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair likes to keep the waters\ncalm around here.\pLet's keep it lowkey.\n$"

BuizelInCave_Text_3:
# 320 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair likes to be cryptic.\pShe set up this maze so only those\nwho really need something from her\lwill seek her out.\pSome Pokémon really harsh her\nmellow.$"

SlowpokeInCave_Text_0:
# 398 "data/maps/DaycarePond/scripts.pory"
	.string "Slowpoke$"

SlowpokeInCave_Text_1:
# 400 "data/maps/DaycarePond/scripts.pory"
	.string "These bridges are so confusing...\pI've been stuck here for a while,\nbut it's chill.$"

SlowpokeInCave_Text_2:
# 416 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair really likes my vibe.\n$"

SlowpokeInCave_Text_3:
# 425 "data/maps/DaycarePond/scripts.pory"
	.string "Maybe I'm too slow to\nharsh the vibe.$"

CroagunkInCave_Text_0:
# 503 "data/maps/DaycarePond/scripts.pory"
	.string "Croagunk$"

CroagunkInCave_Text_1:
# 505 "data/maps/DaycarePond/scripts.pory"
	.string "Right on.$"

CroagunkInCave_Text_2:
# 521 "data/maps/DaycarePond/scripts.pory"
	.string "Duuuuuude.\nWhat's upppp?$"

CroagunkInCave_Text_3:
# 530 "data/maps/DaycarePond/scripts.pory"
	.string "We keep it peaceful here my dude.\pCan't have anyone mess with the\nvibes or we risk losing out on\lgaining EXP.\pHaven't leveled up yet but I'm\nchillin.\pI'm sure it'll come.\n$"

BattleVsDragonair_Text_0:
# 668 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair$"

BattleVsDragonair_Text_1:
# 670 "data/maps/DaycarePond/scripts.pory"
	.string "You have proven your strength.\pI hope one day you learn that\ngrace will be the way to the EXP.$"

BattleVsDragonair_Text_2:
# 684 "data/maps/DaycarePond/scripts.pory"
	.string "Hello there Ditto.\pYes, I see through your facade.\pMy philosophy to gain EXP has been\nto keep this biome calm.\pI spent my early days in the\ncrashing waterfalls, but gained\lno EXP.\pI found this biome and figured\nI try a different approach.\pYou seem to be causing a ruckus,\nand I have no problem taking you\ldown!$"

BattleVsDragonair_Text_3:
# 699 "data/maps/DaycarePond/scripts.pory"
	.string "You have gained the ability to\ntransform into Dragonair!$"

BattleVsDragonair_Text_4:
# 705 "data/maps/DaycarePond/scripts.pory"
	.string "Very well Ditto.\nGo on.\pLeave this place calmly, with\nthe power to scale roaring\lwaterfalls.$"

ChanseyDaycarePond_Text_0:
# 724 "data/maps/DaycarePond/scripts.pory"
	.string "Chansey$"

ChanseyDaycarePond_Text_1:
# 726 "data/maps/DaycarePond/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.$"

ChanseyDaycarePond_Text_2:
# 728 "data/maps/DaycarePond/scripts.pory"
	.string "Would you like to heal?$"

ChanseyDaycarePond_Text_3:
# 742 "data/maps/DaycarePond/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyDaycarePond_Text_4:
# 751 "data/maps/DaycarePond/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyDaycarePond_Text_5:
# 761 "data/maps/DaycarePond/scripts.pory"
	.string "Oh, okay then.$"

CroconawDialog_Text_0:
# 773 "data/maps/DaycarePond/scripts.pory"
	.string "Croconaw$"

CroconawDialog_Text_1:
# 775 "data/maps/DaycarePond/scripts.pory"
	.string "I haven't seen Totodile around the\nlake for a while now.\pI wonder if he's found a new spot.\pWhile it is peaceful here, privacy\nis hard to come by.$"

StarmieDialog_Text_0:
# 785 "data/maps/DaycarePond/scripts.pory"
	.string "Starmie$"

StarmieDialog_Text_1:
# 787 "data/maps/DaycarePond/scripts.pory"
	.string "Isn't the water so relaxing?\nRealy puts the mind at ease.$"
