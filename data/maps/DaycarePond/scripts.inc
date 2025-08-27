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
	msgbox PsyduckDialog_Text_1, MSGBOX_DEFAULT
# 61 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 62 "data/maps/DaycarePond/scripts.pory"
	release
	end


SprigatitoDialog::
# 68 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_SPRIGATITO_EGG, SprigatitoDialog_1
# 95 "data/maps/DaycarePond/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_LURANTIS
	goto_if_eq SprigatitoDialog_7
# 107 "data/maps/DaycarePond/scripts.pory"
	lock
# 108 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 109 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 110 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_2, MSGBOX_DEFAULT
# 111 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 112 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_1:
# 70 "data/maps/DaycarePond/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_LURANTIS
	goto_if_eq SprigatitoDialog_4
# 84 "data/maps/DaycarePond/scripts.pory"
	lock
# 85 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 86 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 87 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_2, MSGBOX_DEFAULT
# 88 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 89 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_4:
# 72 "data/maps/DaycarePond/scripts.pory"
	lock
# 73 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 74 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 75 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_1, MSGBOX_DEFAULT
# 76 "data/maps/DaycarePond/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 77 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SPRIGATITO_EGG
# 78 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 79 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_7:
# 97 "data/maps/DaycarePond/scripts.pory"
	lock
# 98 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 99 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 100 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_3, MSGBOX_DEFAULT
# 101 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 102 "data/maps/DaycarePond/scripts.pory"
	release
	end


MudkipDialog::
# 120 "data/maps/DaycarePond/scripts.pory"
	lock
# 121 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 122 "data/maps/DaycarePond/scripts.pory"
	speakername MudkipDialog_Text_0
# 123 "data/maps/DaycarePond/scripts.pory"
	msgbox MudkipDialog_Text_1, MSGBOX_DEFAULT
# 124 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 125 "data/maps/DaycarePond/scripts.pory"
	release
	end


SeakingDialog::
# 130 "data/maps/DaycarePond/scripts.pory"
	lock
# 131 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 132 "data/maps/DaycarePond/scripts.pory"
	speakername SeakingDialog_Text_0
# 133 "data/maps/DaycarePond/scripts.pory"
	msgbox SeakingDialog_Text_1, MSGBOX_DEFAULT
# 134 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 135 "data/maps/DaycarePond/scripts.pory"
	release
	end


QuagsireDialog::
# 141 "data/maps/DaycarePond/scripts.pory"
	lock
# 142 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 143 "data/maps/DaycarePond/scripts.pory"
	speakername QuagsireDialog_Text_0
# 144 "data/maps/DaycarePond/scripts.pory"
	msgbox QuagsireDialog_Text_1, MSGBOX_DEFAULT
# 145 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 146 "data/maps/DaycarePond/scripts.pory"
	release
	end


GoomyInCave::
# 151 "data/maps/DaycarePond/scripts.pory"
	lock
# 152 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 153 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_GOOMY_BATTLE, GoomyInCave_1
# 163 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, BattleVsMarill_Movement_0
# 164 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 165 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 166 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, Common_Movement_ExclamationMark
# 167 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 168 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 169 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 170 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 171 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 172 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 173 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 174 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCave_4
	return

GoomyInCave_1:
# 155 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 156 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 157 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 158 "data/maps/DaycarePond/scripts.pory"
	release
	end

GoomyInCave_4:
# 176 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 177 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 178 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 179 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 180 "data/maps/DaycarePond/scripts.pory"
	release
	end


GoomyInCaveTrigger::
# 187 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_GOOMY_BATTLE, GoomyInCaveTrigger_1
	return

GoomyInCaveTrigger_1:
# 189 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 190 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, Common_Movement_ExclamationMark
# 191 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 192 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 193 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 194 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_1
# 196 "data/maps/DaycarePond/scripts.pory"
	case 16, GoomyInCaveTrigger_4
# 212 "data/maps/DaycarePond/scripts.pory"
	case 15, GoomyInCaveTrigger_5
	return

GoomyInCaveTrigger_4:
# 197 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 198 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 199 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 200 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 201 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 202 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 203 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCaveTrigger_6
	return

GoomyInCaveTrigger_5:
# 213 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 214 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, GoomyInCaveTrigger_Movement_1
# 215 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 216 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 217 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 218 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 219 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 220 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCaveTrigger_8
	return

GoomyInCaveTrigger_6:
# 205 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 206 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 207 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 208 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 209 "data/maps/DaycarePond/scripts.pory"
	release
	end

GoomyInCaveTrigger_8:
# 222 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 223 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 224 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 225 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 226 "data/maps/DaycarePond/scripts.pory"
	release
	end


BuizelInCave::
# 234 "data/maps/DaycarePond/scripts.pory"
	lock
# 235 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 236 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_BUIZEL_BATTLE, BuizelInCave_1
# 246 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 247 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 248 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 249 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, Common_Movement_ExclamationMark
# 250 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 251 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 252 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 253 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 254 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 255 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 256 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 257 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCave_4
	return

BuizelInCave_1:
# 238 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 239 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_1, MSGBOX_DEFAULT
# 240 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 241 "data/maps/DaycarePond/scripts.pory"
	release
	end

BuizelInCave_4:
# 259 "data/maps/DaycarePond/scripts.pory"
	lock
# 260 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 261 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 262 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 263 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 264 "data/maps/DaycarePond/scripts.pory"
	release
	end


BuizelInCaveTrigger::
# 271 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_BUIZEL_BATTLE, BuizelInCaveTrigger_1
	return

BuizelInCaveTrigger_1:
# 273 "data/maps/DaycarePond/scripts.pory"
	lock
# 274 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 275 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, Common_Movement_ExclamationMark
# 276 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 277 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 278 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 279 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_2
# 281 "data/maps/DaycarePond/scripts.pory"
	case 34, BuizelInCaveTrigger_4
# 302 "data/maps/DaycarePond/scripts.pory"
	case 35, BuizelInCaveTrigger_5
	return

BuizelInCaveTrigger_4:
# 282 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 283 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 284 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, BuizelInCaveTrigger_Movement_0
# 285 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BuizelInCaveTrigger_Movement_1
# 286 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 287 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 288 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 289 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 290 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 291 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 292 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCaveTrigger_6
	return

BuizelInCaveTrigger_5:
# 303 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 304 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 305 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, BuizelInCaveTrigger_Movement_0
# 306 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 307 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 308 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 309 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 310 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 311 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCaveTrigger_8
	return

BuizelInCaveTrigger_6:
# 294 "data/maps/DaycarePond/scripts.pory"
	lock
# 295 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 296 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 297 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 298 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 299 "data/maps/DaycarePond/scripts.pory"
	release
	end

BuizelInCaveTrigger_8:
# 313 "data/maps/DaycarePond/scripts.pory"
	lock
# 314 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 315 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 316 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 317 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 318 "data/maps/DaycarePond/scripts.pory"
	release
	end


SlowpokeInCave::
# 326 "data/maps/DaycarePond/scripts.pory"
	lock
# 327 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 328 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_SLOWPOKE_BATTLE, SlowpokeInCave_1
# 338 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, BattleVsMarill_Movement_0
# 339 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 340 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 341 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 342 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 343 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 344 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 345 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 346 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 347 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 348 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 349 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCave_4
	return

SlowpokeInCave_1:
# 330 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 331 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_1, MSGBOX_DEFAULT
# 332 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 333 "data/maps/DaycarePond/scripts.pory"
	release
	end

SlowpokeInCave_4:
# 351 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 352 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 353 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 354 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 355 "data/maps/DaycarePond/scripts.pory"
	release
	end


SlowpokeInCaveTrigger::
# 361 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_SLOWPOKE_BATTLE, SlowpokeInCaveTrigger_1
	return

SlowpokeInCaveTrigger_1:
# 363 "data/maps/DaycarePond/scripts.pory"
	lock
# 364 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 365 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 366 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_1
# 368 "data/maps/DaycarePond/scripts.pory"
	case 28, SlowpokeInCaveTrigger_4
# 390 "data/maps/DaycarePond/scripts.pory"
	case 26, SlowpokeInCaveTrigger_5
	return

SlowpokeInCaveTrigger_4:
# 369 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 370 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 371 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, GoomyInCaveTrigger_Movement_0
# 372 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 373 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, SlowpokeInCaveTrigger_Movement_0
# 374 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 375 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 376 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 377 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 378 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 379 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 380 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCaveTrigger_6
	return

SlowpokeInCaveTrigger_5:
# 391 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 392 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 393 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, SlowpokeInCaveTrigger_Movement_0
# 394 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 395 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 396 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 397 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 398 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 399 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 400 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 401 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 402 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCaveTrigger_8
	return

SlowpokeInCaveTrigger_6:
# 382 "data/maps/DaycarePond/scripts.pory"
	lock
# 383 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 384 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 385 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 386 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 387 "data/maps/DaycarePond/scripts.pory"
	release
	end

SlowpokeInCaveTrigger_8:
# 404 "data/maps/DaycarePond/scripts.pory"
	lock
# 405 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 406 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 407 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 408 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 409 "data/maps/DaycarePond/scripts.pory"
	release
	end


CroagunkInCave::
# 417 "data/maps/DaycarePond/scripts.pory"
	lock
# 418 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 419 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_CROAGUNK_BATTLE, CroagunkInCave_1
# 429 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, BattleVsMarill_Movement_0
# 430 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 431 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 432 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, Common_Movement_ExclamationMark
# 433 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 434 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 435 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 436 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 437 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 438 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 439 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 440 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCave_4
	return

CroagunkInCave_1:
# 421 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 422 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_1, MSGBOX_DEFAULT
# 423 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 424 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCave_4:
# 442 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 443 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 444 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 445 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 446 "data/maps/DaycarePond/scripts.pory"
	release
	end


CroagunkInCaveTrigger::
# 452 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_CROAGUNK_BATTLE, CroagunkInCaveTrigger_1
	return

CroagunkInCaveTrigger_1:
# 454 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 455 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, Common_Movement_ExclamationMark
# 456 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 457 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 458 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 459 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_2
# 461 "data/maps/DaycarePond/scripts.pory"
	case 3, CroagunkInCaveTrigger_4
# 477 "data/maps/DaycarePond/scripts.pory"
	case 4, CroagunkInCaveTrigger_5
# 495 "data/maps/DaycarePond/scripts.pory"
	case 5, CroagunkInCaveTrigger_6
# 513 "data/maps/DaycarePond/scripts.pory"
	case 6, CroagunkInCaveTrigger_7
# 531 "data/maps/DaycarePond/scripts.pory"
	case 7, CroagunkInCaveTrigger_8
	return

CroagunkInCaveTrigger_4:
# 462 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 463 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 464 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 465 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 466 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 467 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 468 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_9
	return

CroagunkInCaveTrigger_5:
# 478 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 479 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_1
# 480 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 481 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 482 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 483 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 484 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 485 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 486 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_11
	return

CroagunkInCaveTrigger_6:
# 496 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 497 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_2
# 498 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 499 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 500 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 501 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 502 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 503 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 504 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_13
	return

CroagunkInCaveTrigger_7:
# 514 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 515 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_3
# 516 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 517 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 518 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 519 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 520 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 521 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 522 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_15
	return

CroagunkInCaveTrigger_8:
# 532 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 533 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_4
# 534 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 535 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 536 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 537 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 538 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 539 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 540 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_17
	return

CroagunkInCaveTrigger_9:
# 470 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 471 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 472 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 473 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 474 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_11:
# 488 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 489 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 490 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 491 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 492 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_13:
# 506 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 507 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 508 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 509 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 510 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_15:
# 524 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 525 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 526 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 527 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 528 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_17:
# 542 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 543 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 544 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 545 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 546 "data/maps/DaycarePond/scripts.pory"
	release
	end


BattleVsDragonair::
# 554 "data/maps/DaycarePond/scripts.pory"
	lock
# 556 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_TRANS_DRAGONAIR, BattleVsDragonair_2
# 568 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 569 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, BattleVsMarill_Movement_0
# 570 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 571 "data/maps/DaycarePond/scripts.pory"
	playse SE_PIN
# 572 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, Common_Movement_ExclamationMark
# 573 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 574 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 575 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_DRAGONAIR, EMOTE_NORMAL
# 576 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_2, MSGBOX_AUTOCLOSE
# 577 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 578 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_DRAGONAIR, 25, move1 = MOVE_OUTRAGE, move2 = MOVE_WATERFALL, move3 = MOVE_IRON_HEAD, move4 = MOVE_SAFEGUARD
# 579 "data/maps/DaycarePond/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 580 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 581 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 582 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsDragonair_4
	return

BattleVsDragonair_2:
# 558 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, BattleVsMarill_Movement_0
# 559 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 560 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 561 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_DRAGONAIR, EMOTE_NORMAL
# 562 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_1, MSGBOX_DEFAULT
# 563 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 564 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 565 "data/maps/DaycarePond/scripts.pory"
	release
	end

BattleVsDragonair_4:
# 584 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 585 "data/maps/DaycarePond/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 586 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_TRANS_DRAGONAIR
# 587 "data/maps/DaycarePond/scripts.pory"
	dittotransform SPECIES_DRAGONAIR
# 588 "data/maps/DaycarePond/scripts.pory"
	playse MUS_LEVEL_UP
# 589 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_3, MSGBOX_DEFAULT
# 590 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 591 "data/maps/DaycarePond/scripts.pory"
	dittotransform VAR_TEMP_0
# 592 "data/maps/DaycarePond/scripts.pory"
	givemon SPECIES_DRAGONAIR, 25, move1 = MOVE_OUTRAGE, move2 = MOVE_WATERFALL, move3 = MOVE_IRON_HEAD, move4 = MOVE_SAFEGUARD
# 593 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 594 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_DRAGONAIR, EMOTE_HAPPY
# 595 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_4, MSGBOX_DEFAULT
# 596 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 597 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 598 "data/maps/DaycarePond/scripts.pory"
	fadenewbgm MUS_PMD_LAKE
# 599 "data/maps/DaycarePond/scripts.pory"
	release
	end


DaycarePond_FindLuckyEgg::
# 607 "data/maps/DaycarePond/scripts.pory"
	lock
# 608 "data/maps/DaycarePond/scripts.pory"
	finditem ITEM_LUCKY_EGG
# 609 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 610 "data/maps/DaycarePond/scripts.pory"
	release
	end


# 20 "data/maps/DaycarePond/scripts.pory"
BattleVsMarill_Movement_0:
# 20 "data/maps/DaycarePond/scripts.pory"
	face_player
	step_end

# 197 "data/maps/DaycarePond/scripts.pory"
GoomyInCaveTrigger_Movement_0:
# 197 "data/maps/DaycarePond/scripts.pory"
	face_right
	step_end

# 214 "data/maps/DaycarePond/scripts.pory"
GoomyInCaveTrigger_Movement_1:
# 214 "data/maps/DaycarePond/scripts.pory"
	walk_left
	step_end

# 284 "data/maps/DaycarePond/scripts.pory"
BuizelInCaveTrigger_Movement_0:
# 284 "data/maps/DaycarePond/scripts.pory"
	face_down
	step_end

# 285 "data/maps/DaycarePond/scripts.pory"
BuizelInCaveTrigger_Movement_1:
# 285 "data/maps/DaycarePond/scripts.pory"
	walk_up
	step_end

# 373 "data/maps/DaycarePond/scripts.pory"
SlowpokeInCaveTrigger_Movement_0:
# 373 "data/maps/DaycarePond/scripts.pory"
	face_left
	step_end

# 462 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_0:
# 462 "data/maps/DaycarePond/scripts.pory"
	face_up
	step_end

# 479 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_1:
# 479 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 497 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_2:
# 497 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 497 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 515 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_3:
# 515 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 515 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 515 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 533 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_4:
# 533 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 533 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 533 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 533 "data/maps/DaycarePond/scripts.pory"
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
# 61 "data/maps/DaycarePond/scripts.pory"
	.string "I came to the lake to try to ease\nthis headache...\pIt's the most peaceful biome at\nthe daycare.$"

SprigatitoDialog_Text_0:
# 74 "data/maps/DaycarePond/scripts.pory"
	.string "Sprigatito$"

SprigatitoDialog_Text_1:
# 75 "data/maps/DaycarePond/scripts.pory"
	.string "A Grass_type!\pDon't see many around the lake\nhere.\pPlease take this Egg I found.\n$"

SprigatitoDialog_Text_2:
# 87 "data/maps/DaycarePond/scripts.pory"
	.string "I love it here by the water but\nI hardly see any other\lGrass_types...$"

SprigatitoDialog_Text_3:
# 100 "data/maps/DaycarePond/scripts.pory"
	.string "A Grass_type!\pDon't see many around the lake\nhere.$"

MudkipDialog_Text_0:
# 122 "data/maps/DaycarePond/scripts.pory"
	.string "Mudkip$"

MudkipDialog_Text_1:
# 123 "data/maps/DaycarePond/scripts.pory"
	.string "I hope my trainer comes back\nsoon...\pI miss them.\pI'm supposed to be their first\npartner Pokémon.$"

SeakingDialog_Text_0:
# 132 "data/maps/DaycarePond/scripts.pory"
	.string "Seaking$"

SeakingDialog_Text_1:
# 133 "data/maps/DaycarePond/scripts.pory"
	.string "Everyone talks about how\ncool Vaporeon is.\pSeakings deserve attention too...\n$"

QuagsireDialog_Text_0:
# 143 "data/maps/DaycarePond/scripts.pory"
	.string "Quagsire$"

QuagsireDialog_Text_1:
# 144 "data/maps/DaycarePond/scripts.pory"
	.string "The Lake here is so calm.\pDragonair makes sure that we\nkeep the peace here.\pShe believes keeping it mellow\nis the key to EXP.$"

GoomyInCave_Text_0:
# 155 "data/maps/DaycarePond/scripts.pory"
	.string "Goomy$"

GoomyInCave_Text_1:
# 156 "data/maps/DaycarePond/scripts.pory"
	.string "Cool vibes friend.\pKeep on keepin on.\n$"

GoomyInCave_Text_2:
# 170 "data/maps/DaycarePond/scripts.pory"
	.string "Keepin it mellow...\nLet's just have some fun.$"

BuizelInCave_Text_0:
# 238 "data/maps/DaycarePond/scripts.pory"
	.string "Buizel$"

BuizelInCave_Text_1:
# 239 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair likes to be cryptic.\pShe set up this maze so only those\nwho really need something from her\lwill seek her out.\pSome Pokémon really harsh her\nmellow.$"

BuizelInCave_Text_2:
# 253 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair likes to keep the waters\ncalm around here.\pLet's keep it lowkey.\n$"

BuizelInCave_Text_3:
# 261 "data/maps/DaycarePond/scripts.pory"
	.string "She keeps to herself.\nEnsuring maximum relaxation.$"

SlowpokeInCave_Text_0:
# 330 "data/maps/DaycarePond/scripts.pory"
	.string "Slowpoke$"

SlowpokeInCave_Text_1:
# 331 "data/maps/DaycarePond/scripts.pory"
	.string "These bridges are so confusing...\pI've been stuck here for a while,\nbut it's chill.$"

SlowpokeInCave_Text_2:
# 345 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair really likes my vibe.\n$"

SlowpokeInCave_Text_3:
# 352 "data/maps/DaycarePond/scripts.pory"
	.string "Maybe it's cause I'm too slow to\nharsh the vibe.$"

CroagunkInCave_Text_0:
# 421 "data/maps/DaycarePond/scripts.pory"
	.string "Croagunk$"

CroagunkInCave_Text_1:
# 422 "data/maps/DaycarePond/scripts.pory"
	.string "We keep it peaceful here my dude.\pCan't have anyone mess with the\nvibes or we risk losing out on\lgaining EXP.\pHaven't leveled up yet but I'm\nchillin.\pI'm sure it'll come.\n$"

CroagunkInCave_Text_2:
# 436 "data/maps/DaycarePond/scripts.pory"
	.string "Duuuuuude.\nWhat's upppp?$"

CroagunkInCave_Text_3:
# 443 "data/maps/DaycarePond/scripts.pory"
	.string "Right on.\n$"

BattleVsDragonair_Text_0:
# 560 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair$"

BattleVsDragonair_Text_1:
# 562 "data/maps/DaycarePond/scripts.pory"
	.string "You have proven your strength.\pI hope one day you learn that\ngrace will be the way to the EXP.$"

BattleVsDragonair_Text_2:
# 576 "data/maps/DaycarePond/scripts.pory"
	.string "Hello there Ditto.\pYes, I see through your facade.\pMy philosophy to gain EXP has been\nto keep this biome calm.\pI spent my early days in the\ncrashing waterfalls, but gained\lno EXP.\pI found this biome and figured\nI try a different approach.\pYou seem to be causing a ruckus,\nand I have no problem taking you\ldown!$"

BattleVsDragonair_Text_3:
# 589 "data/maps/DaycarePond/scripts.pory"
	.string "You have gained the ability to\ntransform into Dragonair!$"

BattleVsDragonair_Text_4:
# 595 "data/maps/DaycarePond/scripts.pory"
	.string "Very well Ditto.\nGo on.\pLeave this place calmly, with\nthe power to scale roaring\lwaterfalls.$"
