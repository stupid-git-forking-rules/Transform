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
	setwildbattle SPECIES_MARILL, 25
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
	msgbox PsyduckDialog_Text_1, MSGBOX_DEFAULT
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
	msgbox MudkipDialog_Text_1, MSGBOX_DEFAULT
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
	msgbox SeakingDialog_Text_1, MSGBOX_DEFAULT
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
	msgbox QuagsireDialog_Text_1, MSGBOX_DEFAULT
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
	speakername GoomyInCave_Text_0
# 243 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 244 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 245 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 246 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 247 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 248 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 249 "data/maps/DaycarePond/scripts.pory"
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
# 251 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 252 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 253 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 254 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 255 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 256 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 257 "data/maps/DaycarePond/scripts.pory"
	release
	end


BuizelInCave::
# 265 "data/maps/DaycarePond/scripts.pory"
	lock
# 266 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 267 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_BUIZEL_BATTLE, BuizelInCave_1
# 279 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 280 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 281 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 282 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, Common_Movement_ExclamationMark
# 283 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 284 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 285 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 286 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 287 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 288 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 289 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 290 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 291 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 292 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCave_4
	return

BuizelInCave_1:
# 269 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 270 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 271 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_1, MSGBOX_DEFAULT
# 272 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 273 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 274 "data/maps/DaycarePond/scripts.pory"
	release
	end

BuizelInCave_4:
# 294 "data/maps/DaycarePond/scripts.pory"
	lock
# 295 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 296 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 297 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 298 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 299 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 300 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 301 "data/maps/DaycarePond/scripts.pory"
	release
	end


BuizelInCaveTrigger::
# 308 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_BUIZEL_BATTLE, BuizelInCaveTrigger_1
	return

BuizelInCaveTrigger_1:
# 310 "data/maps/DaycarePond/scripts.pory"
	lock
# 311 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 312 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, Common_Movement_ExclamationMark
# 313 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 314 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 315 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 316 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_2
# 318 "data/maps/DaycarePond/scripts.pory"
	case 34, BuizelInCaveTrigger_4
# 343 "data/maps/DaycarePond/scripts.pory"
	case 35, BuizelInCaveTrigger_5
	return

BuizelInCaveTrigger_4:
# 319 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 320 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 321 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, BuizelInCaveTrigger_Movement_0
# 322 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BuizelInCaveTrigger_Movement_1
# 323 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 324 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 325 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 326 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 327 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 328 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 329 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 330 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 331 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCaveTrigger_6
	return

BuizelInCaveTrigger_5:
# 344 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 345 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 346 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, BuizelInCaveTrigger_Movement_0
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
	goto_if_eq BuizelInCaveTrigger_8
	return

BuizelInCaveTrigger_6:
# 333 "data/maps/DaycarePond/scripts.pory"
	lock
# 334 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 335 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 336 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 337 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 338 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 339 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 340 "data/maps/DaycarePond/scripts.pory"
	release
	end

BuizelInCaveTrigger_8:
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


SlowpokeInCave::
# 371 "data/maps/DaycarePond/scripts.pory"
	lock
# 372 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 373 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_SLOWPOKE_BATTLE, SlowpokeInCave_1
# 385 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, BattleVsMarill_Movement_0
# 386 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 387 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 388 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 389 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 390 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 391 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 392 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 393 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 394 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 395 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 396 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 397 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 398 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCave_4
	return

SlowpokeInCave_1:
# 375 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 376 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 377 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_1, MSGBOX_DEFAULT
# 378 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 379 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 380 "data/maps/DaycarePond/scripts.pory"
	release
	end

SlowpokeInCave_4:
# 400 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 401 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 402 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 403 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 404 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 405 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 406 "data/maps/DaycarePond/scripts.pory"
	release
	end


SlowpokeInCaveTrigger::
# 412 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_SLOWPOKE_BATTLE, SlowpokeInCaveTrigger_1
	return

SlowpokeInCaveTrigger_1:
# 414 "data/maps/DaycarePond/scripts.pory"
	lock
# 415 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 416 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 417 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_1
# 419 "data/maps/DaycarePond/scripts.pory"
	case 28, SlowpokeInCaveTrigger_4
# 445 "data/maps/DaycarePond/scripts.pory"
	case 26, SlowpokeInCaveTrigger_5
	return

SlowpokeInCaveTrigger_4:
# 420 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 421 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 422 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, GoomyInCaveTrigger_Movement_0
# 423 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 424 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, SlowpokeInCaveTrigger_Movement_0
# 425 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 426 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 427 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 428 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 429 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 430 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 431 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 432 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 433 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCaveTrigger_6
	return

SlowpokeInCaveTrigger_5:
# 446 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 447 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 448 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, SlowpokeInCaveTrigger_Movement_0
# 449 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 450 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 451 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 452 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 453 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 454 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 455 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 456 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 457 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 458 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 459 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCaveTrigger_8
	return

SlowpokeInCaveTrigger_6:
# 435 "data/maps/DaycarePond/scripts.pory"
	lock
# 436 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 437 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 438 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 439 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 440 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 441 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 442 "data/maps/DaycarePond/scripts.pory"
	release
	end

SlowpokeInCaveTrigger_8:
# 461 "data/maps/DaycarePond/scripts.pory"
	lock
# 462 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 463 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 464 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 465 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 466 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 467 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 468 "data/maps/DaycarePond/scripts.pory"
	release
	end


CroagunkInCave::
# 476 "data/maps/DaycarePond/scripts.pory"
	lock
# 477 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 478 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_CROAGUNK_BATTLE, CroagunkInCave_1
# 490 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, BattleVsMarill_Movement_0
# 491 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 492 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 493 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, Common_Movement_ExclamationMark
# 494 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 495 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 496 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 497 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 498 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 499 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 500 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 501 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 502 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 503 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCave_4
	return

CroagunkInCave_1:
# 480 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 481 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 482 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_1, MSGBOX_DEFAULT
# 483 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 484 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 485 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCave_4:
# 505 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 506 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 507 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 508 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 509 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 510 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 511 "data/maps/DaycarePond/scripts.pory"
	release
	end


CroagunkInCaveTrigger::
# 517 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_CROAGUNK_BATTLE, CroagunkInCaveTrigger_1
	return

CroagunkInCaveTrigger_1:
# 519 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 520 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, Common_Movement_ExclamationMark
# 521 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 522 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 523 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 524 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_2
# 526 "data/maps/DaycarePond/scripts.pory"
	case 3, CroagunkInCaveTrigger_4
# 546 "data/maps/DaycarePond/scripts.pory"
	case 4, CroagunkInCaveTrigger_5
# 568 "data/maps/DaycarePond/scripts.pory"
	case 5, CroagunkInCaveTrigger_6
# 590 "data/maps/DaycarePond/scripts.pory"
	case 6, CroagunkInCaveTrigger_7
# 612 "data/maps/DaycarePond/scripts.pory"
	case 7, CroagunkInCaveTrigger_8
	return

CroagunkInCaveTrigger_4:
# 527 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 528 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 529 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 530 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 531 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 532 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 533 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 534 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 535 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_9
	return

CroagunkInCaveTrigger_5:
# 547 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 548 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_1
# 549 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 550 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 551 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 552 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 553 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 554 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 555 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 556 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 557 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_11
	return

CroagunkInCaveTrigger_6:
# 569 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 570 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_2
# 571 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 572 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 573 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 574 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 575 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 576 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 577 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 578 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 579 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_13
	return

CroagunkInCaveTrigger_7:
# 591 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 592 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_3
# 593 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 594 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 595 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 596 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 597 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 598 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 599 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 600 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 601 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_15
	return

CroagunkInCaveTrigger_8:
# 613 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 614 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_4
# 615 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 616 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 617 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 618 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 619 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 620 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 621 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 622 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 623 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_17
	return

CroagunkInCaveTrigger_9:
# 537 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 538 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 539 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 540 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 541 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 542 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 543 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_11:
# 559 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 560 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 561 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 562 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 563 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 564 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 565 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_13:
# 581 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 582 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 583 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 584 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 585 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 586 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 587 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_15:
# 603 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 604 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 605 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 606 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 607 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 608 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 609 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_17:
# 625 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 626 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 627 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 628 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 629 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 630 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 631 "data/maps/DaycarePond/scripts.pory"
	release
	end


BattleVsDragonair::
# 639 "data/maps/DaycarePond/scripts.pory"
	lock
# 641 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_TRANS_DRAGONAIR, BattleVsDragonair_2
# 653 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 654 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, BattleVsMarill_Movement_0
# 655 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 656 "data/maps/DaycarePond/scripts.pory"
	playse SE_PIN
# 657 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, Common_Movement_ExclamationMark
# 658 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 659 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 660 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_DRAGONAIR, EMOTE_NORMAL
# 661 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_2, MSGBOX_AUTOCLOSE
# 662 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 663 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_DRAGONAIR, 25, move1 = MOVE_OUTRAGE, move2 = MOVE_WATERFALL, move3 = MOVE_IRON_HEAD, move4 = MOVE_SAFEGUARD
# 664 "data/maps/DaycarePond/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 665 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 666 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 667 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsDragonair_4
	return

BattleVsDragonair_2:
# 643 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, BattleVsMarill_Movement_0
# 644 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 645 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 646 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_DRAGONAIR, EMOTE_NORMAL
# 647 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_1, MSGBOX_DEFAULT
# 648 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 649 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 650 "data/maps/DaycarePond/scripts.pory"
	release
	end

BattleVsDragonair_4:
# 669 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 670 "data/maps/DaycarePond/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 671 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_TRANS_DRAGONAIR
# 672 "data/maps/DaycarePond/scripts.pory"
	dittotransform SPECIES_DRAGONAIR
# 673 "data/maps/DaycarePond/scripts.pory"
	playse MUS_LEVEL_UP
# 674 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_3, MSGBOX_DEFAULT
# 675 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 676 "data/maps/DaycarePond/scripts.pory"
	dittotransform VAR_TEMP_0
# 677 "data/maps/DaycarePond/scripts.pory"
	givemon SPECIES_DRAGONAIR, 25, move1 = MOVE_OUTRAGE, move2 = MOVE_WATERFALL, move3 = MOVE_IRON_HEAD, move4 = MOVE_SAFEGUARD
# 678 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 679 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_DRAGONAIR, EMOTE_HAPPY
# 680 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_4, MSGBOX_DEFAULT
# 681 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 682 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 683 "data/maps/DaycarePond/scripts.pory"
	fadenewbgm MUS_PMD_LAKE
# 684 "data/maps/DaycarePond/scripts.pory"
	release
	end


DaycarePond_FindLuckyEgg::
# 692 "data/maps/DaycarePond/scripts.pory"
	lock
# 693 "data/maps/DaycarePond/scripts.pory"
	finditem ITEM_LUCKY_EGG
# 694 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 695 "data/maps/DaycarePond/scripts.pory"
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

# 321 "data/maps/DaycarePond/scripts.pory"
BuizelInCaveTrigger_Movement_0:
# 321 "data/maps/DaycarePond/scripts.pory"
	face_down
	step_end

# 322 "data/maps/DaycarePond/scripts.pory"
BuizelInCaveTrigger_Movement_1:
# 322 "data/maps/DaycarePond/scripts.pory"
	walk_up
	step_end

# 424 "data/maps/DaycarePond/scripts.pory"
SlowpokeInCaveTrigger_Movement_0:
# 424 "data/maps/DaycarePond/scripts.pory"
	face_left
	step_end

# 527 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_0:
# 527 "data/maps/DaycarePond/scripts.pory"
	face_up
	step_end

# 548 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_1:
# 548 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 570 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_2:
# 570 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 570 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 592 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_3:
# 592 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 592 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 592 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 614 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_4:
# 614 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 614 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 614 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 614 "data/maps/DaycarePond/scripts.pory"
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
# 269 "data/maps/DaycarePond/scripts.pory"
	.string "Buizel$"

BuizelInCave_Text_1:
# 271 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair likes to be cryptic.\pShe set up this maze so only those\nwho really need something from her\lwill seek her out.\pSome Pokémon really harsh her\nmellow.$"

BuizelInCave_Text_2:
# 287 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair likes to keep the waters\ncalm around here.\pLet's keep it lowkey.\n$"

BuizelInCave_Text_3:
# 297 "data/maps/DaycarePond/scripts.pory"
	.string "She keeps to herself.\nEnsuring maximum relaxation.$"

SlowpokeInCave_Text_0:
# 375 "data/maps/DaycarePond/scripts.pory"
	.string "Slowpoke$"

SlowpokeInCave_Text_1:
# 377 "data/maps/DaycarePond/scripts.pory"
	.string "These bridges are so confusing...\pI've been stuck here for a while,\nbut it's chill.$"

SlowpokeInCave_Text_2:
# 393 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair really likes my vibe.\n$"

SlowpokeInCave_Text_3:
# 402 "data/maps/DaycarePond/scripts.pory"
	.string "Maybe it's cause I'm too slow to\nharsh the vibe.$"

CroagunkInCave_Text_0:
# 480 "data/maps/DaycarePond/scripts.pory"
	.string "Croagunk$"

CroagunkInCave_Text_1:
# 482 "data/maps/DaycarePond/scripts.pory"
	.string "We keep it peaceful here my dude.\pCan't have anyone mess with the\nvibes or we risk losing out on\lgaining EXP.\pHaven't leveled up yet but I'm\nchillin.\pI'm sure it'll come.\n$"

CroagunkInCave_Text_2:
# 498 "data/maps/DaycarePond/scripts.pory"
	.string "Duuuuuude.\nWhat's upppp?$"

CroagunkInCave_Text_3:
# 507 "data/maps/DaycarePond/scripts.pory"
	.string "Right on.\n$"

BattleVsDragonair_Text_0:
# 645 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair$"

BattleVsDragonair_Text_1:
# 647 "data/maps/DaycarePond/scripts.pory"
	.string "You have proven your strength.\pI hope one day you learn that\ngrace will be the way to the EXP.$"

BattleVsDragonair_Text_2:
# 661 "data/maps/DaycarePond/scripts.pory"
	.string "Hello there Ditto.\pYes, I see through your facade.\pMy philosophy to gain EXP has been\nto keep this biome calm.\pI spent my early days in the\ncrashing waterfalls, but gained\lno EXP.\pI found this biome and figured\nI try a different approach.\pYou seem to be causing a ruckus,\nand I have no problem taking you\ldown!$"

BattleVsDragonair_Text_3:
# 674 "data/maps/DaycarePond/scripts.pory"
	.string "You have gained the ability to\ntransform into Dragonair!$"

BattleVsDragonair_Text_4:
# 680 "data/maps/DaycarePond/scripts.pory"
	.string "Very well Ditto.\nGo on.\pLeave this place calmly, with\nthe power to scale roaring\lwaterfalls.$"
