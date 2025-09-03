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
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
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
	dittotransform SPECIES_MARILL
# 39 "data/maps/DaycarePond/scripts.pory"
	playse MUS_LEVEL_UP
# 40 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsMarill_Text_3, MSGBOX_DEFAULT
# 41 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 42 "data/maps/DaycarePond/scripts.pory"
	dittotransform VAR_TEMP_0
# 43 "data/maps/DaycarePond/scripts.pory"
	givemon SPECIES_MARILL, 25, move1 = MOVE_SURF, move2 = MOVE_AQUA_JET, move3 = MOVE_COVET, move4 = MOVE_RAIN_DANCE
# 44 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 45 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsMarill_Text_0
# 46 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_MARILL, EMOTE_HAPPY
# 47 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsMarill_Text_1, MSGBOX_DEFAULT
# 48 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 49 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 50 "data/maps/DaycarePond/scripts.pory"
	fadenewbgm MUS_PMD_LAKE
# 51 "data/maps/DaycarePond/scripts.pory"
	release
	end


PsyduckDialog::
# 58 "data/maps/DaycarePond/scripts.pory"
	lock
# 59 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 60 "data/maps/DaycarePond/scripts.pory"
	speakername PsyduckDialog_Text_0
# 61 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_PSYDUCK, EMOTE_NORMAL
# 62 "data/maps/DaycarePond/scripts.pory"
	msgbox PsyduckDialog_Text_1, MSGBOX_NPC
# 63 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 64 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 65 "data/maps/DaycarePond/scripts.pory"
	release
	end


SprigatitoDialog::
# 71 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_SPRIGATITO_EGG, SprigatitoDialog_1
# 102 "data/maps/DaycarePond/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_LURANTIS
	goto_if_eq SprigatitoDialog_7
# 116 "data/maps/DaycarePond/scripts.pory"
	lock
# 117 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 118 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 119 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SPRIGATITO, EMOTE_NORMAL
# 120 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_2, MSGBOX_DEFAULT
# 121 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 122 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 123 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_1:
# 73 "data/maps/DaycarePond/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_LURANTIS
	goto_if_eq SprigatitoDialog_4
# 89 "data/maps/DaycarePond/scripts.pory"
	lock
# 90 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 91 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 92 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SPRIGATITO, EMOTE_NORMAL
# 93 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_2, MSGBOX_DEFAULT
# 94 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 95 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 96 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_4:
# 75 "data/maps/DaycarePond/scripts.pory"
	lock
# 76 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 77 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 78 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SPRIGATITO, EMOTE_ELATED
# 79 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_1, MSGBOX_DEFAULT
# 80 "data/maps/DaycarePond/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 81 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SPRIGATITO_EGG
# 82 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 83 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 84 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_7:
# 104 "data/maps/DaycarePond/scripts.pory"
	lock
# 105 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 106 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 107 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SPRIGATITO, EMOTE_ELATED
# 108 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_3, MSGBOX_DEFAULT
# 109 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 110 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 111 "data/maps/DaycarePond/scripts.pory"
	release
	end


MudkipDialog::
# 131 "data/maps/DaycarePond/scripts.pory"
	lock
# 132 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 133 "data/maps/DaycarePond/scripts.pory"
	speakername MudkipDialog_Text_0
# 134 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_MUDKIP, EMOTE_ANGRY
# 135 "data/maps/DaycarePond/scripts.pory"
	msgbox MudkipDialog_Text_1, MSGBOX_NPC
# 136 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 137 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 138 "data/maps/DaycarePond/scripts.pory"
	release
	end


SeakingDialog::
# 143 "data/maps/DaycarePond/scripts.pory"
	lock
# 144 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 145 "data/maps/DaycarePond/scripts.pory"
	speakername SeakingDialog_Text_0
# 146 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SEAKING, EMOTE_NORMAL
# 147 "data/maps/DaycarePond/scripts.pory"
	msgbox SeakingDialog_Text_1, MSGBOX_NPC
# 148 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 149 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 150 "data/maps/DaycarePond/scripts.pory"
	release
	end


QuagsireDialog::
# 156 "data/maps/DaycarePond/scripts.pory"
	lock
# 157 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 158 "data/maps/DaycarePond/scripts.pory"
	speakername QuagsireDialog_Text_0
# 159 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_QUAGSIRE, EMOTE_HAPPY
# 160 "data/maps/DaycarePond/scripts.pory"
	msgbox QuagsireDialog_Text_1, MSGBOX_NPC
# 161 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 162 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 163 "data/maps/DaycarePond/scripts.pory"
	release
	end


GoomyInCave::
# 168 "data/maps/DaycarePond/scripts.pory"
	lock
# 169 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 170 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_GOOMY_BATTLE, GoomyInCave_1
# 182 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, BattleVsMarill_Movement_0
# 183 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 184 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 185 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, Common_Movement_ExclamationMark
# 186 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 187 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 188 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 189 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 190 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 191 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 192 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 193 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 194 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 195 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCave_4
	return

GoomyInCave_1:
# 172 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 173 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 174 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 175 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 176 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 177 "data/maps/DaycarePond/scripts.pory"
	release
	end

GoomyInCave_4:
# 197 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 198 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 199 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 200 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 201 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 202 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 203 "data/maps/DaycarePond/scripts.pory"
	release
	end


GoomyInCaveTrigger::
# 210 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_GOOMY_BATTLE, GoomyInCaveTrigger_1
	return

GoomyInCaveTrigger_1:
# 212 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 213 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, Common_Movement_ExclamationMark
# 214 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 215 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 216 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 217 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_1
# 219 "data/maps/DaycarePond/scripts.pory"
	case 16, GoomyInCaveTrigger_4
# 239 "data/maps/DaycarePond/scripts.pory"
	case 15, GoomyInCaveTrigger_5
	return

GoomyInCaveTrigger_4:
# 220 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 221 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 222 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 223 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 224 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 225 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 226 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 227 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 228 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCaveTrigger_6
	return

GoomyInCaveTrigger_5:
# 240 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 241 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, GoomyInCaveTrigger_Movement_1
# 242 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
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
	goto_if_eq GoomyInCaveTrigger_8
	return

GoomyInCaveTrigger_6:
# 230 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 231 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 232 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 233 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 234 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 235 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 236 "data/maps/DaycarePond/scripts.pory"
	release
	end

GoomyInCaveTrigger_8:
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


BuizelInCave::
# 266 "data/maps/DaycarePond/scripts.pory"
	lock
# 267 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 268 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_BUIZEL_BATTLE, BuizelInCave_1
# 280 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 281 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 282 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 283 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, Common_Movement_ExclamationMark
# 284 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 285 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 286 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 287 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 288 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 289 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 290 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 291 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 292 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 293 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCave_4
	return

BuizelInCave_1:
# 270 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 271 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 272 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_1, MSGBOX_DEFAULT
# 273 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 274 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 275 "data/maps/DaycarePond/scripts.pory"
	release
	end

BuizelInCave_4:
# 295 "data/maps/DaycarePond/scripts.pory"
	lock
# 296 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 297 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 298 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 299 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 300 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 301 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 302 "data/maps/DaycarePond/scripts.pory"
	release
	end


BuizelInCaveTrigger::
# 309 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_BUIZEL_BATTLE, BuizelInCaveTrigger_1
	return

BuizelInCaveTrigger_1:
# 311 "data/maps/DaycarePond/scripts.pory"
	lock
# 312 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 313 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, Common_Movement_ExclamationMark
# 314 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 315 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 316 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 317 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_2
# 319 "data/maps/DaycarePond/scripts.pory"
	case 34, BuizelInCaveTrigger_4
# 344 "data/maps/DaycarePond/scripts.pory"
	case 35, BuizelInCaveTrigger_5
	return

BuizelInCaveTrigger_4:
# 320 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 321 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 322 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, BuizelInCaveTrigger_Movement_0
# 323 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BuizelInCaveTrigger_Movement_1
# 324 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 325 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 326 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 327 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 328 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 329 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 330 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 331 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 332 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCaveTrigger_6
	return

BuizelInCaveTrigger_5:
# 345 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 346 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 347 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, BuizelInCaveTrigger_Movement_0
# 348 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 349 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 350 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 351 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 352 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 353 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 354 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 355 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCaveTrigger_8
	return

BuizelInCaveTrigger_6:
# 334 "data/maps/DaycarePond/scripts.pory"
	lock
# 335 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 336 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 337 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 338 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 339 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 340 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 341 "data/maps/DaycarePond/scripts.pory"
	release
	end

BuizelInCaveTrigger_8:
# 357 "data/maps/DaycarePond/scripts.pory"
	lock
# 358 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 359 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 360 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 361 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 362 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 363 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 364 "data/maps/DaycarePond/scripts.pory"
	release
	end


SlowpokeInCave::
# 372 "data/maps/DaycarePond/scripts.pory"
	lock
# 373 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 374 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_SLOWPOKE_BATTLE, SlowpokeInCave_1
# 386 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, BattleVsMarill_Movement_0
# 387 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 388 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 389 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 390 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 391 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 392 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 393 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 394 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 395 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 396 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 397 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 398 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 399 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCave_4
	return

SlowpokeInCave_1:
# 376 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 377 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 378 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_1, MSGBOX_DEFAULT
# 379 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 380 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 381 "data/maps/DaycarePond/scripts.pory"
	release
	end

SlowpokeInCave_4:
# 401 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 402 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 403 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 404 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 405 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 406 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 407 "data/maps/DaycarePond/scripts.pory"
	release
	end


SlowpokeInCaveTrigger::
# 413 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_SLOWPOKE_BATTLE, SlowpokeInCaveTrigger_1
	return

SlowpokeInCaveTrigger_1:
# 415 "data/maps/DaycarePond/scripts.pory"
	lock
# 416 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 417 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 418 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_1
# 420 "data/maps/DaycarePond/scripts.pory"
	case 28, SlowpokeInCaveTrigger_4
# 446 "data/maps/DaycarePond/scripts.pory"
	case 26, SlowpokeInCaveTrigger_5
	return

SlowpokeInCaveTrigger_4:
# 421 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 422 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 423 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, GoomyInCaveTrigger_Movement_0
# 424 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 425 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, SlowpokeInCaveTrigger_Movement_0
# 426 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 427 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 428 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 429 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 430 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 431 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 432 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 433 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 434 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCaveTrigger_6
	return

SlowpokeInCaveTrigger_5:
# 447 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 448 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 449 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, SlowpokeInCaveTrigger_Movement_0
# 450 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 451 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 452 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 453 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 454 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 455 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 456 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 457 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 458 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 459 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 460 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCaveTrigger_8
	return

SlowpokeInCaveTrigger_6:
# 436 "data/maps/DaycarePond/scripts.pory"
	lock
# 437 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 438 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 439 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 440 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 441 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 442 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 443 "data/maps/DaycarePond/scripts.pory"
	release
	end

SlowpokeInCaveTrigger_8:
# 462 "data/maps/DaycarePond/scripts.pory"
	lock
# 463 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 464 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 465 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 466 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 467 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 468 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 469 "data/maps/DaycarePond/scripts.pory"
	release
	end


CroagunkInCave::
# 477 "data/maps/DaycarePond/scripts.pory"
	lock
# 478 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 479 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_CROAGUNK_BATTLE, CroagunkInCave_1
# 491 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, BattleVsMarill_Movement_0
# 492 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 493 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 494 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, Common_Movement_ExclamationMark
# 495 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 496 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 497 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 498 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 499 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 500 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 501 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 502 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 503 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 504 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCave_4
	return

CroagunkInCave_1:
# 481 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 482 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 483 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_1, MSGBOX_DEFAULT
# 484 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 485 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 486 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCave_4:
# 506 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 507 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 508 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 509 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 510 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 511 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 512 "data/maps/DaycarePond/scripts.pory"
	release
	end


CroagunkInCaveTrigger::
# 518 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_CROAGUNK_BATTLE, CroagunkInCaveTrigger_1
	return

CroagunkInCaveTrigger_1:
# 520 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 521 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, Common_Movement_ExclamationMark
# 522 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 523 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 524 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 525 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_2
# 527 "data/maps/DaycarePond/scripts.pory"
	case 3, CroagunkInCaveTrigger_4
# 547 "data/maps/DaycarePond/scripts.pory"
	case 4, CroagunkInCaveTrigger_5
# 569 "data/maps/DaycarePond/scripts.pory"
	case 5, CroagunkInCaveTrigger_6
# 591 "data/maps/DaycarePond/scripts.pory"
	case 6, CroagunkInCaveTrigger_7
# 613 "data/maps/DaycarePond/scripts.pory"
	case 7, CroagunkInCaveTrigger_8
	return

CroagunkInCaveTrigger_4:
# 528 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 529 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 530 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 531 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 532 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 533 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 534 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 535 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 536 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_9
	return

CroagunkInCaveTrigger_5:
# 548 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 549 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_1
# 550 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
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
	goto_if_eq CroagunkInCaveTrigger_11
	return

CroagunkInCaveTrigger_6:
# 570 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 571 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_2
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
	goto_if_eq CroagunkInCaveTrigger_13
	return

CroagunkInCaveTrigger_7:
# 592 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 593 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_3
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
	goto_if_eq CroagunkInCaveTrigger_15
	return

CroagunkInCaveTrigger_8:
# 614 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 615 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_4
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
	goto_if_eq CroagunkInCaveTrigger_17
	return

CroagunkInCaveTrigger_9:
# 538 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 539 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 540 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 541 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 542 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 543 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 544 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_11:
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

CroagunkInCaveTrigger_13:
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

CroagunkInCaveTrigger_15:
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

CroagunkInCaveTrigger_17:
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


BattleVsDragonair::
# 640 "data/maps/DaycarePond/scripts.pory"
	lock
# 642 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_TRANS_DRAGONAIR, BattleVsDragonair_2
# 654 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 655 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, BattleVsMarill_Movement_0
# 656 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 657 "data/maps/DaycarePond/scripts.pory"
	playse SE_PIN
# 658 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, Common_Movement_ExclamationMark
# 659 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 660 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 661 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_DRAGONAIR, EMOTE_NORMAL
# 662 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_2, MSGBOX_AUTOCLOSE
# 663 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 664 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_DRAGONAIR, 25, move1 = MOVE_OUTRAGE, move2 = MOVE_WATERFALL, move3 = MOVE_IRON_HEAD, move4 = MOVE_SAFEGUARD
# 665 "data/maps/DaycarePond/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 0, 1, 0, 0
# 666 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 667 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 668 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsDragonair_4
	return

BattleVsDragonair_2:
# 644 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, BattleVsMarill_Movement_0
# 645 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 646 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 647 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_DRAGONAIR, EMOTE_NORMAL
# 648 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_1, MSGBOX_DEFAULT
# 649 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 650 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 651 "data/maps/DaycarePond/scripts.pory"
	release
	end

BattleVsDragonair_4:
# 670 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 671 "data/maps/DaycarePond/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 672 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_TRANS_DRAGONAIR
# 673 "data/maps/DaycarePond/scripts.pory"
	dittotransform SPECIES_DRAGONAIR
# 674 "data/maps/DaycarePond/scripts.pory"
	playse MUS_LEVEL_UP
# 675 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_3, MSGBOX_DEFAULT
# 676 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 677 "data/maps/DaycarePond/scripts.pory"
	dittotransform VAR_TEMP_0
# 678 "data/maps/DaycarePond/scripts.pory"
	givemon SPECIES_DRAGONAIR, 25, move1 = MOVE_OUTRAGE, move2 = MOVE_WATERFALL, move3 = MOVE_IRON_HEAD, move4 = MOVE_SAFEGUARD
# 679 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 680 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_DRAGONAIR, EMOTE_HAPPY
# 681 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_4, MSGBOX_DEFAULT
# 682 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 683 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 684 "data/maps/DaycarePond/scripts.pory"
	fadenewbgm MUS_PMD_LAKE
# 685 "data/maps/DaycarePond/scripts.pory"
	release
	end


DaycarePond_FindLuckyEgg::
# 693 "data/maps/DaycarePond/scripts.pory"
	lock
# 694 "data/maps/DaycarePond/scripts.pory"
	finditem ITEM_LUCKY_EGG
# 695 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 696 "data/maps/DaycarePond/scripts.pory"
	release
	end


# 20 "data/maps/DaycarePond/scripts.pory"
BattleVsMarill_Movement_0:
# 20 "data/maps/DaycarePond/scripts.pory"
	face_player
	step_end

# 220 "data/maps/DaycarePond/scripts.pory"
GoomyInCaveTrigger_Movement_0:
# 220 "data/maps/DaycarePond/scripts.pory"
	face_right
	step_end

# 241 "data/maps/DaycarePond/scripts.pory"
GoomyInCaveTrigger_Movement_1:
# 241 "data/maps/DaycarePond/scripts.pory"
	walk_left
	step_end

# 322 "data/maps/DaycarePond/scripts.pory"
BuizelInCaveTrigger_Movement_0:
# 322 "data/maps/DaycarePond/scripts.pory"
	face_down
	step_end

# 323 "data/maps/DaycarePond/scripts.pory"
BuizelInCaveTrigger_Movement_1:
# 323 "data/maps/DaycarePond/scripts.pory"
	walk_up
	step_end

# 425 "data/maps/DaycarePond/scripts.pory"
SlowpokeInCaveTrigger_Movement_0:
# 425 "data/maps/DaycarePond/scripts.pory"
	face_left
	step_end

# 528 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_0:
# 528 "data/maps/DaycarePond/scripts.pory"
	face_up
	step_end

# 549 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_1:
# 549 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 571 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_2:
# 571 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 571 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 593 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_3:
# 593 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 593 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 593 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 615 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_4:
# 615 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 615 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 615 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 615 "data/maps/DaycarePond/scripts.pory"
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
# 40 "data/maps/DaycarePond/scripts.pory"
	.string "You have gained the ability to\ntransform into Marill!$"

PsyduckDialog_Text_0:
# 60 "data/maps/DaycarePond/scripts.pory"
	.string "Psyduck$"

PsyduckDialog_Text_1:
# 62 "data/maps/DaycarePond/scripts.pory"
	.string "I came to the lake to try to ease\nthis headache...\pIt's the most peaceful biome at\nthe daycare.$"

SprigatitoDialog_Text_0:
# 77 "data/maps/DaycarePond/scripts.pory"
	.string "Sprigatito$"

SprigatitoDialog_Text_1:
# 79 "data/maps/DaycarePond/scripts.pory"
	.string "A Grass_type!\pDon't see many around the lake\nhere.\pPlease take this Egg I found.\n$"

SprigatitoDialog_Text_2:
# 93 "data/maps/DaycarePond/scripts.pory"
	.string "I love it here by the water but\nI hardly see any other\lGrass_types...$"

SprigatitoDialog_Text_3:
# 108 "data/maps/DaycarePond/scripts.pory"
	.string "A Grass_type!\pDon't see many around the lake\nhere.$"

MudkipDialog_Text_0:
# 133 "data/maps/DaycarePond/scripts.pory"
	.string "Mudkip$"

MudkipDialog_Text_1:
# 135 "data/maps/DaycarePond/scripts.pory"
	.string "I hope my trainer comes back\nsoon...\pI miss them.\pI'm supposed to be their first\npartner Pokémon.$"

SeakingDialog_Text_0:
# 145 "data/maps/DaycarePond/scripts.pory"
	.string "Seaking$"

SeakingDialog_Text_1:
# 147 "data/maps/DaycarePond/scripts.pory"
	.string "Everyone talks about how\ncool Vaporeon is.\pSeakings deserve attention too...\n$"

QuagsireDialog_Text_0:
# 158 "data/maps/DaycarePond/scripts.pory"
	.string "Quagsire$"

QuagsireDialog_Text_1:
# 160 "data/maps/DaycarePond/scripts.pory"
	.string "The Lake here is so calm.\pDragonair makes sure that we\nkeep the peace here.\pShe believes keeping it mellow\nis the key to EXP.$"

GoomyInCave_Text_0:
# 172 "data/maps/DaycarePond/scripts.pory"
	.string "Goomy$"

GoomyInCave_Text_1:
# 174 "data/maps/DaycarePond/scripts.pory"
	.string "Cool vibes friend.\pKeep on keepin on.\n$"

GoomyInCave_Text_2:
# 190 "data/maps/DaycarePond/scripts.pory"
	.string "Keepin it mellow...\nLet's just have some fun.$"

BuizelInCave_Text_0:
# 270 "data/maps/DaycarePond/scripts.pory"
	.string "Buizel$"

BuizelInCave_Text_1:
# 272 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair likes to be cryptic.\pShe set up this maze so only those\nwho really need something from her\lwill seek her out.\pSome Pokémon really harsh her\nmellow.$"

BuizelInCave_Text_2:
# 288 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair likes to keep the waters\ncalm around here.\pLet's keep it lowkey.\n$"

BuizelInCave_Text_3:
# 298 "data/maps/DaycarePond/scripts.pory"
	.string "She keeps to herself.\nEnsuring maximum relaxation.$"

SlowpokeInCave_Text_0:
# 376 "data/maps/DaycarePond/scripts.pory"
	.string "Slowpoke$"

SlowpokeInCave_Text_1:
# 378 "data/maps/DaycarePond/scripts.pory"
	.string "These bridges are so confusing...\pI've been stuck here for a while,\nbut it's chill.$"

SlowpokeInCave_Text_2:
# 394 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair really likes my vibe.\n$"

SlowpokeInCave_Text_3:
# 403 "data/maps/DaycarePond/scripts.pory"
	.string "Maybe it's cause I'm too slow to\nharsh the vibe.$"

CroagunkInCave_Text_0:
# 481 "data/maps/DaycarePond/scripts.pory"
	.string "Croagunk$"

CroagunkInCave_Text_1:
# 483 "data/maps/DaycarePond/scripts.pory"
	.string "Right on.$"

CroagunkInCave_Text_2:
# 499 "data/maps/DaycarePond/scripts.pory"
	.string "Duuuuuude.\nWhat's upppp?$"

CroagunkInCave_Text_3:
# 508 "data/maps/DaycarePond/scripts.pory"
	.string "We keep it peaceful here my dude.\pCan't have anyone mess with the\nvibes or we risk losing out on\lgaining EXP.\pHaven't leveled up yet but I'm\nchillin.\pI'm sure it'll come.\n$"

BattleVsDragonair_Text_0:
# 646 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair$"

BattleVsDragonair_Text_1:
# 648 "data/maps/DaycarePond/scripts.pory"
	.string "You have proven your strength.\pI hope one day you learn that\ngrace will be the way to the EXP.$"

BattleVsDragonair_Text_2:
# 662 "data/maps/DaycarePond/scripts.pory"
	.string "Hello there Ditto.\pYes, I see through your facade.\pMy philosophy to gain EXP has been\nto keep this biome calm.\pI spent my early days in the\ncrashing waterfalls, but gained\lno EXP.\pI found this biome and figured\nI try a different approach.\pYou seem to be causing a ruckus,\nand I have no problem taking you\ldown!$"

BattleVsDragonair_Text_3:
# 675 "data/maps/DaycarePond/scripts.pory"
	.string "You have gained the ability to\ntransform into Dragonair!$"

BattleVsDragonair_Text_4:
# 681 "data/maps/DaycarePond/scripts.pory"
	.string "Very well Ditto.\nGo on.\pLeave this place calmly, with\nthe power to scale roaring\lwaterfalls.$"
