DaycarePond_MapScripts::
	.byte 0


BattleVsMarill::
# 6 "data/maps/DaycarePond/scripts.pory"
	lock
# 8 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_TRANS_MARILL, BattleVsMarill_2
# 19 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 20 "data/maps/DaycarePond/scripts.pory"
	applymovement Marill, BattleVsMarill_Movement_0
# 21 "data/maps/DaycarePond/scripts.pory"
	waitmovement Marill
# 22 "data/maps/DaycarePond/scripts.pory"
	playse SE_PIN
# 23 "data/maps/DaycarePond/scripts.pory"
	applymovement Marill, Common_Movement_ExclamationMark
# 24 "data/maps/DaycarePond/scripts.pory"
	waitmovement Marill
# 25 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_MARILL, EMOTE_NORMAL
# 26 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsMarill_Text_0
# 27 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsMarill_Text_2, MSGBOX_AUTOCLOSE
# 28 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 29 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_MARILL, 25, move1 = MOVE_SURF, move2 = MOVE_AQUA_JET, move3 = MOVE_COVET, move4 = MOVE_RAIN_DANCE
# 30 "data/maps/DaycarePond/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 2, 1, 1, 2, 1, 0, 0
# 31 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 32 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 33 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsMarill_4
	return

BattleVsMarill_2:
# 10 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 11 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsMarill_Text_0
# 12 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_MARILL, EMOTE_NORMAL
# 13 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsMarill_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 15 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 16 "data/maps/DaycarePond/scripts.pory"
	release
	end

BattleVsMarill_4:
# 35 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 36 "data/maps/DaycarePond/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 37 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_TRANS_MARILL
# 38 "data/maps/DaycarePond/scripts.pory"
	delay 15
# 39 "data/maps/DaycarePond/scripts.pory"
	dittotransform SPECIES_MARILL
# 40 "data/maps/DaycarePond/scripts.pory"
	playse MUS_LEVEL_UP
# 41 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsMarill_Text_3, MSGBOX_DEFAULT
# 42 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 43 "data/maps/DaycarePond/scripts.pory"
	dittotransform VAR_TEMP_0
# 44 "data/maps/DaycarePond/scripts.pory"
	givemon SPECIES_MARILL, 25, move1 = MOVE_SURF, move2 = MOVE_AQUA_JET, move3 = MOVE_COVET, move4 = MOVE_RAIN_DANCE
# 45 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 46 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsMarill_Text_0
# 47 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_MARILL, EMOTE_HAPPY
# 48 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsMarill_Text_1, MSGBOX_DEFAULT
# 49 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 50 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 51 "data/maps/DaycarePond/scripts.pory"
	fadenewbgm MUS_PMD_LAKE
# 52 "data/maps/DaycarePond/scripts.pory"
	release
	end


PsyduckDialog::
# 59 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_MUDKIP_PICKED_UP, PsyduckDialog_1
# 73 "data/maps/DaycarePond/scripts.pory"
	lock
# 74 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 75 "data/maps/DaycarePond/scripts.pory"
	speakername PsyduckDialog_Text_0
# 76 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_PSYDUCK, EMOTE_NORMAL
# 77 "data/maps/DaycarePond/scripts.pory"
	msgbox PsyduckDialog_Text_2, MSGBOX_NPC
# 78 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 79 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 80 "data/maps/DaycarePond/scripts.pory"
	release
	end

PsyduckDialog_1:
# 61 "data/maps/DaycarePond/scripts.pory"
	lock
# 62 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 63 "data/maps/DaycarePond/scripts.pory"
	speakername PsyduckDialog_Text_0
# 64 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_PSYDUCK, EMOTE_NORMAL
# 65 "data/maps/DaycarePond/scripts.pory"
	msgbox PsyduckDialog_Text_1, MSGBOX_NPC
# 66 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 67 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 68 "data/maps/DaycarePond/scripts.pory"
	release
	end


SprigatitoDialog::
# 87 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_SPRIGATITO_EGG, SprigatitoDialog_1
# 120 "data/maps/DaycarePond/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_LURANTIS
	goto_if_eq SprigatitoDialog_7
# 134 "data/maps/DaycarePond/scripts.pory"
	lock
# 135 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 136 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 137 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SPRIGATITO, EMOTE_NORMAL
# 138 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_2, MSGBOX_DEFAULT
# 139 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 140 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 141 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_1:
# 89 "data/maps/DaycarePond/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_LURANTIS
	goto_if_eq SprigatitoDialog_4
# 107 "data/maps/DaycarePond/scripts.pory"
	lock
# 108 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 109 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 110 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SPRIGATITO, EMOTE_NORMAL
# 111 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_2, MSGBOX_DEFAULT
# 112 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 113 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 114 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_4:
# 91 "data/maps/DaycarePond/scripts.pory"
	lock
# 92 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 93 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 94 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SPRIGATITO, EMOTE_ELATED
# 95 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_1, MSGBOX_DEFAULT
# 96 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 97 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 98 "data/maps/DaycarePond/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 99 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SPRIGATITO_EGG
# 100 "data/maps/DaycarePond/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 101 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 102 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_7:
# 122 "data/maps/DaycarePond/scripts.pory"
	lock
# 123 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 124 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 125 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SPRIGATITO, EMOTE_ELATED
# 126 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_3, MSGBOX_DEFAULT
# 127 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 128 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 129 "data/maps/DaycarePond/scripts.pory"
	release
	end


MudkipDialog::
# 149 "data/maps/DaycarePond/scripts.pory"
	lock
# 150 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 151 "data/maps/DaycarePond/scripts.pory"
	speakername MudkipDialog_Text_0
# 152 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_MUDKIP, EMOTE_ANGRY
# 153 "data/maps/DaycarePond/scripts.pory"
	msgbox MudkipDialog_Text_1, MSGBOX_NPC
# 154 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 155 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 156 "data/maps/DaycarePond/scripts.pory"
	release
	end


SeakingDialog::
# 161 "data/maps/DaycarePond/scripts.pory"
	lock
# 162 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 163 "data/maps/DaycarePond/scripts.pory"
	speakername SeakingDialog_Text_0
# 164 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SEAKING, EMOTE_NORMAL
# 165 "data/maps/DaycarePond/scripts.pory"
	msgbox SeakingDialog_Text_1, MSGBOX_NPC
# 166 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 167 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 168 "data/maps/DaycarePond/scripts.pory"
	release
	end


QuagsireDialog::
# 174 "data/maps/DaycarePond/scripts.pory"
	lock
# 175 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 176 "data/maps/DaycarePond/scripts.pory"
	speakername QuagsireDialog_Text_0
# 177 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_QUAGSIRE, EMOTE_HAPPY
# 178 "data/maps/DaycarePond/scripts.pory"
	msgbox QuagsireDialog_Text_1, MSGBOX_NPC
# 179 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 180 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 181 "data/maps/DaycarePond/scripts.pory"
	release
	end


GoomyInCave::
# 186 "data/maps/DaycarePond/scripts.pory"
	lock
# 187 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 188 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_GOOMY_BATTLE, GoomyInCave_1
# 200 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, BattleVsMarill_Movement_0
# 201 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 202 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 203 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, Common_Movement_ExclamationMark
# 204 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 205 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 206 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 207 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 208 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 209 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 210 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 211 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 212 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 213 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCave_4
	return

GoomyInCave_1:
# 190 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 191 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 192 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 193 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 194 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 195 "data/maps/DaycarePond/scripts.pory"
	release
	end

GoomyInCave_4:
# 215 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 216 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 217 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 218 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 219 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 220 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 221 "data/maps/DaycarePond/scripts.pory"
	release
	end


GoomyInCaveTrigger::
# 228 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_GOOMY_BATTLE, GoomyInCaveTrigger_1
	return

GoomyInCaveTrigger_1:
# 230 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 231 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, Common_Movement_ExclamationMark
# 232 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 233 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 234 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 235 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_1
# 237 "data/maps/DaycarePond/scripts.pory"
	case 16, GoomyInCaveTrigger_4
# 257 "data/maps/DaycarePond/scripts.pory"
	case 15, GoomyInCaveTrigger_5
	return

GoomyInCaveTrigger_4:
# 238 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 239 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 240 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 241 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 242 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 243 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 244 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 245 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 246 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCaveTrigger_6
	return

GoomyInCaveTrigger_5:
# 258 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 259 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, GoomyInCaveTrigger_Movement_1
# 260 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 261 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 262 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 263 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 264 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 265 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 266 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 267 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 268 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCaveTrigger_8
	return

GoomyInCaveTrigger_6:
# 248 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 249 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 250 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 251 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 252 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 253 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 254 "data/maps/DaycarePond/scripts.pory"
	release
	end

GoomyInCaveTrigger_8:
# 270 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 271 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 272 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 273 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 274 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 275 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 276 "data/maps/DaycarePond/scripts.pory"
	release
	end


BuizelInCave::
# 284 "data/maps/DaycarePond/scripts.pory"
	lock
# 285 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 286 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_BUIZEL_BATTLE, BuizelInCave_1
# 298 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 299 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 300 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 301 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, Common_Movement_ExclamationMark
# 302 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 303 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 304 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 305 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 306 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 307 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 308 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 309 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 310 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 311 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCave_4
	return

BuizelInCave_1:
# 288 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 289 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 290 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_1, MSGBOX_DEFAULT
# 291 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 292 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 293 "data/maps/DaycarePond/scripts.pory"
	release
	end

BuizelInCave_4:
# 313 "data/maps/DaycarePond/scripts.pory"
	lock
# 314 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 315 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 316 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 317 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 318 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 319 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 320 "data/maps/DaycarePond/scripts.pory"
	release
	end


BuizelInCaveTrigger::
# 327 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_BUIZEL_BATTLE, BuizelInCaveTrigger_1
	return

BuizelInCaveTrigger_1:
# 329 "data/maps/DaycarePond/scripts.pory"
	lock
# 330 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 331 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, Common_Movement_ExclamationMark
# 332 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 333 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 334 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 335 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_2
# 337 "data/maps/DaycarePond/scripts.pory"
	case 34, BuizelInCaveTrigger_4
# 362 "data/maps/DaycarePond/scripts.pory"
	case 35, BuizelInCaveTrigger_5
	return

BuizelInCaveTrigger_4:
# 338 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 339 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 340 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, BuizelInCaveTrigger_Movement_0
# 341 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BuizelInCaveTrigger_Movement_1
# 342 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 343 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 344 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 345 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 346 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 347 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 348 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 349 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 350 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCaveTrigger_6
	return

BuizelInCaveTrigger_5:
# 363 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 364 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 365 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, BuizelInCaveTrigger_Movement_0
# 366 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 367 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 368 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 369 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 370 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 371 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 372 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 373 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCaveTrigger_8
	return

BuizelInCaveTrigger_6:
# 352 "data/maps/DaycarePond/scripts.pory"
	lock
# 353 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 354 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 355 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 356 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 357 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 358 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 359 "data/maps/DaycarePond/scripts.pory"
	release
	end

BuizelInCaveTrigger_8:
# 375 "data/maps/DaycarePond/scripts.pory"
	lock
# 376 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 377 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 378 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 379 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 380 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 381 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 382 "data/maps/DaycarePond/scripts.pory"
	release
	end


SlowpokeInCave::
# 390 "data/maps/DaycarePond/scripts.pory"
	lock
# 391 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 392 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_SLOWPOKE_BATTLE, SlowpokeInCave_1
# 404 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, BattleVsMarill_Movement_0
# 405 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 406 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 407 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 408 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 409 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 410 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 411 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 412 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 413 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 414 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 415 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 416 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 417 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCave_4
	return

SlowpokeInCave_1:
# 394 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 395 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 396 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_1, MSGBOX_DEFAULT
# 397 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 398 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 399 "data/maps/DaycarePond/scripts.pory"
	release
	end

SlowpokeInCave_4:
# 419 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 420 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 421 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 422 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 423 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 424 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 425 "data/maps/DaycarePond/scripts.pory"
	release
	end


SlowpokeInCaveTrigger::
# 431 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_SLOWPOKE_BATTLE, SlowpokeInCaveTrigger_1
	return

SlowpokeInCaveTrigger_1:
# 433 "data/maps/DaycarePond/scripts.pory"
	lock
# 434 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 435 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 436 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_1
# 438 "data/maps/DaycarePond/scripts.pory"
	case 28, SlowpokeInCaveTrigger_4
# 464 "data/maps/DaycarePond/scripts.pory"
	case 26, SlowpokeInCaveTrigger_5
	return

SlowpokeInCaveTrigger_4:
# 439 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 440 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 441 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, GoomyInCaveTrigger_Movement_0
# 442 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 443 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, SlowpokeInCaveTrigger_Movement_0
# 444 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 445 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 446 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 447 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 448 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 449 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 450 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 451 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 452 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCaveTrigger_6
	return

SlowpokeInCaveTrigger_5:
# 465 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 466 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 467 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, SlowpokeInCaveTrigger_Movement_0
# 468 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 469 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 470 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 471 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 472 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 473 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 474 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 475 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 476 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 477 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 478 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCaveTrigger_8
	return

SlowpokeInCaveTrigger_6:
# 454 "data/maps/DaycarePond/scripts.pory"
	lock
# 455 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 456 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 457 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 458 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 459 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 460 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 461 "data/maps/DaycarePond/scripts.pory"
	release
	end

SlowpokeInCaveTrigger_8:
# 480 "data/maps/DaycarePond/scripts.pory"
	lock
# 481 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 482 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 483 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 484 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 485 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 486 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 487 "data/maps/DaycarePond/scripts.pory"
	release
	end


CroagunkInCave::
# 495 "data/maps/DaycarePond/scripts.pory"
	lock
# 496 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 497 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_CROAGUNK_BATTLE, CroagunkInCave_1
# 509 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, BattleVsMarill_Movement_0
# 510 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 511 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 512 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, Common_Movement_ExclamationMark
# 513 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 514 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 515 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 516 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 517 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 518 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 519 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 520 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 521 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 522 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCave_4
	return

CroagunkInCave_1:
# 499 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 500 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 501 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_1, MSGBOX_DEFAULT
# 502 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 503 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 504 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCave_4:
# 524 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 525 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 526 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 527 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 528 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 529 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 530 "data/maps/DaycarePond/scripts.pory"
	release
	end


CroagunkInCaveTrigger::
# 536 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_CROAGUNK_BATTLE, CroagunkInCaveTrigger_1
	return

CroagunkInCaveTrigger_1:
# 538 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 539 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, Common_Movement_ExclamationMark
# 540 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 541 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 542 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 543 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_2
# 545 "data/maps/DaycarePond/scripts.pory"
	case 3, CroagunkInCaveTrigger_4
# 565 "data/maps/DaycarePond/scripts.pory"
	case 4, CroagunkInCaveTrigger_5
# 587 "data/maps/DaycarePond/scripts.pory"
	case 5, CroagunkInCaveTrigger_6
# 609 "data/maps/DaycarePond/scripts.pory"
	case 6, CroagunkInCaveTrigger_7
# 631 "data/maps/DaycarePond/scripts.pory"
	case 7, CroagunkInCaveTrigger_8
	return

CroagunkInCaveTrigger_4:
# 546 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 547 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 548 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 549 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 550 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 551 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 552 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 553 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 554 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_9
	return

CroagunkInCaveTrigger_5:
# 566 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 567 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_1
# 568 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 569 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 570 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 571 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 572 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 573 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 574 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 575 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 576 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_11
	return

CroagunkInCaveTrigger_6:
# 588 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 589 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_2
# 590 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 591 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 592 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 593 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 594 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 595 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 596 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 597 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 598 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_13
	return

CroagunkInCaveTrigger_7:
# 610 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 611 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_3
# 612 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 613 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 614 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 615 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 616 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 617 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 618 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 619 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 620 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_15
	return

CroagunkInCaveTrigger_8:
# 632 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 633 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_4
# 634 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 635 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 636 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 637 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 638 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 639 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 640 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 641 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 642 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_17
	return

CroagunkInCaveTrigger_9:
# 556 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 557 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 558 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 559 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 560 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 561 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 562 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_11:
# 578 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 579 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 580 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 581 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 582 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 583 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 584 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_13:
# 600 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 601 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 602 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 603 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 604 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 605 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 606 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_15:
# 622 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 623 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 624 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 625 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 626 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 627 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 628 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_17:
# 644 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 645 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 646 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 647 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 648 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 649 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 650 "data/maps/DaycarePond/scripts.pory"
	release
	end


BattleVsDragonair::
# 658 "data/maps/DaycarePond/scripts.pory"
	lock
# 660 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_TRANS_DRAGONAIR, BattleVsDragonair_2
# 672 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 673 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, BattleVsMarill_Movement_0
# 674 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 675 "data/maps/DaycarePond/scripts.pory"
	playse SE_PIN
# 676 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, Common_Movement_ExclamationMark
# 677 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 678 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 679 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_DRAGONAIR, EMOTE_NORMAL
# 680 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_2, MSGBOX_AUTOCLOSE
# 681 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 682 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_DRAGONAIR, 25, move1 = MOVE_OUTRAGE, move2 = MOVE_WATERFALL, move3 = MOVE_IRON_HEAD, move4 = MOVE_SAFEGUARD
# 683 "data/maps/DaycarePond/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 2, 1, 1, 0, 2, 0, 0
# 684 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 685 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 686 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsDragonair_4
	return

BattleVsDragonair_2:
# 662 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, BattleVsMarill_Movement_0
# 663 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 664 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 665 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_DRAGONAIR, EMOTE_NORMAL
# 666 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_1, MSGBOX_DEFAULT
# 667 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 668 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 669 "data/maps/DaycarePond/scripts.pory"
	release
	end

BattleVsDragonair_4:
# 688 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 689 "data/maps/DaycarePond/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 690 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_TRANS_DRAGONAIR
# 691 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_MUDKIP_PICKED_UP
# 692 "data/maps/DaycarePond/scripts.pory"
	delay 15
# 693 "data/maps/DaycarePond/scripts.pory"
	dittotransform SPECIES_DRAGONAIR
# 694 "data/maps/DaycarePond/scripts.pory"
	playse MUS_LEVEL_UP
# 695 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_3, MSGBOX_DEFAULT
# 696 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 697 "data/maps/DaycarePond/scripts.pory"
	dittotransform VAR_TEMP_0
# 698 "data/maps/DaycarePond/scripts.pory"
	givemon SPECIES_DRAGONAIR, 25, move1 = MOVE_OUTRAGE, move2 = MOVE_WATERFALL, move3 = MOVE_IRON_HEAD, move4 = MOVE_SAFEGUARD
# 699 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 700 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_DRAGONAIR, EMOTE_HAPPY
# 701 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_4, MSGBOX_DEFAULT
# 702 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 703 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 704 "data/maps/DaycarePond/scripts.pory"
	fadenewbgm MUS_PMD_LAKE
# 705 "data/maps/DaycarePond/scripts.pory"
	release
	end


DaycarePond_FindLuckyEgg::
# 713 "data/maps/DaycarePond/scripts.pory"
	lock
# 714 "data/maps/DaycarePond/scripts.pory"
	finditem ITEM_LUCKY_EGG
# 715 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 716 "data/maps/DaycarePond/scripts.pory"
	release
	end


# 20 "data/maps/DaycarePond/scripts.pory"
BattleVsMarill_Movement_0:
# 20 "data/maps/DaycarePond/scripts.pory"
	face_player
	step_end

# 238 "data/maps/DaycarePond/scripts.pory"
GoomyInCaveTrigger_Movement_0:
# 238 "data/maps/DaycarePond/scripts.pory"
	face_right
	step_end

# 259 "data/maps/DaycarePond/scripts.pory"
GoomyInCaveTrigger_Movement_1:
# 259 "data/maps/DaycarePond/scripts.pory"
	walk_left
	step_end

# 340 "data/maps/DaycarePond/scripts.pory"
BuizelInCaveTrigger_Movement_0:
# 340 "data/maps/DaycarePond/scripts.pory"
	face_down
	step_end

# 341 "data/maps/DaycarePond/scripts.pory"
BuizelInCaveTrigger_Movement_1:
# 341 "data/maps/DaycarePond/scripts.pory"
	walk_up
	step_end

# 443 "data/maps/DaycarePond/scripts.pory"
SlowpokeInCaveTrigger_Movement_0:
# 443 "data/maps/DaycarePond/scripts.pory"
	face_left
	step_end

# 546 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_0:
# 546 "data/maps/DaycarePond/scripts.pory"
	face_up
	step_end

# 567 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_1:
# 567 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 589 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_2:
# 589 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 589 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 611 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_3:
# 611 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 611 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 611 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 633 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_4:
# 633 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 633 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 633 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 633 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

BattleVsMarill_Text_0:
# 11 "data/maps/DaycarePond/scripts.pory"
	.string "Marill$"

BattleVsMarill_Text_1:
# 13 "data/maps/DaycarePond/scripts.pory"
	.string "You’re stronger than you look!\pSwim swiftly on your journey!$"

BattleVsMarill_Text_2:
# 27 "data/maps/DaycarePond/scripts.pory"
	.string "Oh! A Ditto?\pYou’re gathering powers for your\nquest, right?\pIf you can beat me, you’ll earn the\npower to transform into me!$"

BattleVsMarill_Text_3:
# 41 "data/maps/DaycarePond/scripts.pory"
	.string "You have gained the ability to\ntransform into Marill!$"

PsyduckDialog_Text_0:
# 63 "data/maps/DaycarePond/scripts.pory"
	.string "Psyduck$"

PsyduckDialog_Text_1:
# 65 "data/maps/DaycarePond/scripts.pory"
	.string "I came to the lake to try to ease\nthis headache...\pIt's the most peaceful biome at\nthe daycare.$"

PsyduckDialog_Text_2:
# 77 "data/maps/DaycarePond/scripts.pory"
	.string "Are you looking for Mudkip?\pIt's trainer came back and picked\nit up!\pAs fun as the Daycare is, some\nPokémon yearn to battle alongside\ltheir trainers.$"

SprigatitoDialog_Text_0:
# 93 "data/maps/DaycarePond/scripts.pory"
	.string "Sprigatito$"

SprigatitoDialog_Text_1:
# 95 "data/maps/DaycarePond/scripts.pory"
	.string "A Grass_type!\pDon't see many around the lake\nhere.\pPlease take this Egg I found.\n$"

SprigatitoDialog_Text_2:
# 111 "data/maps/DaycarePond/scripts.pory"
	.string "I love it here by the water but\nI hardly see any other\lGrass_types...$"

SprigatitoDialog_Text_3:
# 126 "data/maps/DaycarePond/scripts.pory"
	.string "A Grass_type!\pDon't see many around the lake\nhere.$"

MudkipDialog_Text_0:
# 151 "data/maps/DaycarePond/scripts.pory"
	.string "Mudkip$"

MudkipDialog_Text_1:
# 153 "data/maps/DaycarePond/scripts.pory"
	.string "I hope my trainer comes back\nsoon...\pI miss them.\pI'm supposed to be their first\npartner Pokémon.$"

SeakingDialog_Text_0:
# 163 "data/maps/DaycarePond/scripts.pory"
	.string "Seaking$"

SeakingDialog_Text_1:
# 165 "data/maps/DaycarePond/scripts.pory"
	.string "Everyone talks about how\ncool Vaporeon is.\pSeakings deserve attention too...\n$"

QuagsireDialog_Text_0:
# 176 "data/maps/DaycarePond/scripts.pory"
	.string "Quagsire$"

QuagsireDialog_Text_1:
# 178 "data/maps/DaycarePond/scripts.pory"
	.string "The Lake here is so calm.\pDragonair makes sure that we\nkeep the peace here.\pShe believes keeping it mellow\nis the key to EXP.$"

GoomyInCave_Text_0:
# 190 "data/maps/DaycarePond/scripts.pory"
	.string "Goomy$"

GoomyInCave_Text_1:
# 192 "data/maps/DaycarePond/scripts.pory"
	.string "Cool vibes friend.\pKeep on keepin on.\n$"

GoomyInCave_Text_2:
# 208 "data/maps/DaycarePond/scripts.pory"
	.string "Keepin it mellow...\nLet's just have some fun.$"

BuizelInCave_Text_0:
# 288 "data/maps/DaycarePond/scripts.pory"
	.string "Buizel$"

BuizelInCave_Text_1:
# 290 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair keeps to herself.\nEnsuring maximum relaxation.$"

BuizelInCave_Text_2:
# 306 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair likes to keep the waters\ncalm around here.\pLet's keep it lowkey.\n$"

BuizelInCave_Text_3:
# 316 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair likes to be cryptic.\pShe set up this maze so only those\nwho really need something from her\lwill seek her out.\pSome Pokémon really harsh her\nmellow.$"

SlowpokeInCave_Text_0:
# 394 "data/maps/DaycarePond/scripts.pory"
	.string "Slowpoke$"

SlowpokeInCave_Text_1:
# 396 "data/maps/DaycarePond/scripts.pory"
	.string "These bridges are so confusing...\pI've been stuck here for a while,\nbut it's chill.$"

SlowpokeInCave_Text_2:
# 412 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair really likes my vibe.\n$"

SlowpokeInCave_Text_3:
# 421 "data/maps/DaycarePond/scripts.pory"
	.string "Maybe I'm too slow to\nharsh the vibe.$"

CroagunkInCave_Text_0:
# 499 "data/maps/DaycarePond/scripts.pory"
	.string "Croagunk$"

CroagunkInCave_Text_1:
# 501 "data/maps/DaycarePond/scripts.pory"
	.string "Right on.$"

CroagunkInCave_Text_2:
# 517 "data/maps/DaycarePond/scripts.pory"
	.string "Duuuuuude.\nWhat's upppp?$"

CroagunkInCave_Text_3:
# 526 "data/maps/DaycarePond/scripts.pory"
	.string "We keep it peaceful here my dude.\pCan't have anyone mess with the\nvibes or we risk losing out on\lgaining EXP.\pHaven't leveled up yet but I'm\nchillin.\pI'm sure it'll come.\n$"

BattleVsDragonair_Text_0:
# 664 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair$"

BattleVsDragonair_Text_1:
# 666 "data/maps/DaycarePond/scripts.pory"
	.string "You have proven your strength.\pI hope one day you learn that\ngrace will be the way to the EXP.$"

BattleVsDragonair_Text_2:
# 680 "data/maps/DaycarePond/scripts.pory"
	.string "Hello there Ditto.\pYes, I see through your facade.\pMy philosophy to gain EXP has been\nto keep this biome calm.\pI spent my early days in the\ncrashing waterfalls, but gained\lno EXP.\pI found this biome and figured\nI try a different approach.\pYou seem to be causing a ruckus,\nand I have no problem taking you\ldown!$"

BattleVsDragonair_Text_3:
# 695 "data/maps/DaycarePond/scripts.pory"
	.string "You have gained the ability to\ntransform into Dragonair!$"

BattleVsDragonair_Text_4:
# 701 "data/maps/DaycarePond/scripts.pory"
	.string "Very well Ditto.\nGo on.\pLeave this place calmly, with\nthe power to scale roaring\lwaterfalls.$"
