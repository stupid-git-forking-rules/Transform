DaycarePond_MapScripts::
	.byte 0


BattleVsMarill::
# 6 "data/maps/DaycarePond/scripts.pory"
	lock
# 8 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_TRANS_MARILL, BattleVsMarill_2
# 18 "data/maps/DaycarePond/scripts.pory"
	applymovement Marill, BattleVsMarill_Movement_0
# 19 "data/maps/DaycarePond/scripts.pory"
	waitmovement Marill
# 20 "data/maps/DaycarePond/scripts.pory"
	playse SE_PIN
# 21 "data/maps/DaycarePond/scripts.pory"
	applymovement Marill, Common_Movement_ExclamationMark
# 22 "data/maps/DaycarePond/scripts.pory"
	waitmovement Marill
# 23 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsMarill_Text_0
# 24 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsMarill_Text_2, MSGBOX_AUTOCLOSE
# 25 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_MARILL, 25
# 26 "data/maps/DaycarePond/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 27 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 28 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 29 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsMarill_4
	return

BattleVsMarill_2:
# 10 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 11 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsMarill_Text_0
# 12 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsMarill_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 14 "data/maps/DaycarePond/scripts.pory"
	release
	end

BattleVsMarill_4:
# 31 "data/maps/DaycarePond/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 32 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_TRANS_MARILL
# 33 "data/maps/DaycarePond/scripts.pory"
	dittotransform SPECIES_MARILL
# 34 "data/maps/DaycarePond/scripts.pory"
	playse MUS_LEVEL_UP
# 35 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsMarill_Text_3, MSGBOX_DEFAULT
# 36 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 37 "data/maps/DaycarePond/scripts.pory"
	dittotransform VAR_TEMP_0
# 38 "data/maps/DaycarePond/scripts.pory"
	givemon SPECIES_MARILL, 25, move1 = MOVE_SURF, move2 = MOVE_AQUA_JET, move3 = MOVE_COVET, move4 = MOVE_RAIN_DANCE
# 39 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 40 "data/maps/DaycarePond/scripts.pory"
	release
	end


PsyduckDialog::
# 47 "data/maps/DaycarePond/scripts.pory"
	lock
# 48 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 49 "data/maps/DaycarePond/scripts.pory"
	speakername PsyduckDialog_Text_0
# 50 "data/maps/DaycarePond/scripts.pory"
	msgbox PsyduckDialog_Text_1, MSGBOX_DEFAULT
# 51 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 52 "data/maps/DaycarePond/scripts.pory"
	release
	end


SprigatitoDialog::
# 58 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_SPRIGATITO_EGG, SprigatitoDialog_1
# 85 "data/maps/DaycarePond/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_LURANTIS
	goto_if_eq SprigatitoDialog_7
# 97 "data/maps/DaycarePond/scripts.pory"
	lock
# 98 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 99 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 100 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_2, MSGBOX_DEFAULT
# 101 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 102 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_1:
# 60 "data/maps/DaycarePond/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_LURANTIS
	goto_if_eq SprigatitoDialog_4
# 74 "data/maps/DaycarePond/scripts.pory"
	lock
# 75 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 76 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 77 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_2, MSGBOX_DEFAULT
# 78 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 79 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_4:
# 62 "data/maps/DaycarePond/scripts.pory"
	lock
# 63 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 64 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 65 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_1, MSGBOX_DEFAULT
# 66 "data/maps/DaycarePond/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 67 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SPRIGATITO_EGG
# 68 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 69 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_7:
# 87 "data/maps/DaycarePond/scripts.pory"
	lock
# 88 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 89 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 90 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_3, MSGBOX_DEFAULT
# 91 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 92 "data/maps/DaycarePond/scripts.pory"
	release
	end


MudkipDialog::
# 110 "data/maps/DaycarePond/scripts.pory"
	lock
# 111 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 112 "data/maps/DaycarePond/scripts.pory"
	speakername MudkipDialog_Text_0
# 113 "data/maps/DaycarePond/scripts.pory"
	msgbox MudkipDialog_Text_1, MSGBOX_DEFAULT
# 114 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 115 "data/maps/DaycarePond/scripts.pory"
	release
	end


SeakingDialog::
# 120 "data/maps/DaycarePond/scripts.pory"
	lock
# 121 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 122 "data/maps/DaycarePond/scripts.pory"
	speakername SeakingDialog_Text_0
# 123 "data/maps/DaycarePond/scripts.pory"
	msgbox SeakingDialog_Text_1, MSGBOX_DEFAULT
# 124 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 125 "data/maps/DaycarePond/scripts.pory"
	release
	end


QuagsireDialog::
# 131 "data/maps/DaycarePond/scripts.pory"
	lock
# 132 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 133 "data/maps/DaycarePond/scripts.pory"
	speakername QuagsireDialog_Text_0
# 134 "data/maps/DaycarePond/scripts.pory"
	msgbox QuagsireDialog_Text_1, MSGBOX_DEFAULT
# 135 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 136 "data/maps/DaycarePond/scripts.pory"
	release
	end


GoomyInCave::
# 141 "data/maps/DaycarePond/scripts.pory"
	lock
# 142 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 143 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_GOOMY_BATTLE, GoomyInCave_1
# 153 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 154 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, Common_Movement_ExclamationMark
# 155 "data/maps/DaycarePond/scripts.pory"
	waitmovement
# 156 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 157 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 158 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 159 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 160 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 161 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCave_4
	return

GoomyInCave_1:
# 145 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 146 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 147 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 148 "data/maps/DaycarePond/scripts.pory"
	release
	end

GoomyInCave_4:
# 163 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 164 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 165 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 166 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 167 "data/maps/DaycarePond/scripts.pory"
	release
	end


GoomyInCaveTrigger::
# 174 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_GOOMY_BATTLE, GoomyInCaveTrigger_1
	return

GoomyInCaveTrigger_1:
# 176 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 177 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, Common_Movement_ExclamationMark
# 178 "data/maps/DaycarePond/scripts.pory"
	waitmovement
# 179 "data/maps/DaycarePond/scripts.pory"
	delay 40
# 180 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 181 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_1
# 183 "data/maps/DaycarePond/scripts.pory"
	case 16, GoomyInCaveTrigger_4
# 199 "data/maps/DaycarePond/scripts.pory"
	case 15, GoomyInCaveTrigger_5
	return

GoomyInCaveTrigger_4:
# 184 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 185 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 186 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 187 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 188 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 189 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 190 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCaveTrigger_6
	return

GoomyInCaveTrigger_5:
# 200 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 201 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, GoomyInCaveTrigger_Movement_1
# 202 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 203 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 204 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 205 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 206 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 207 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCaveTrigger_8
	return

GoomyInCaveTrigger_6:
# 192 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 193 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 194 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 195 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 196 "data/maps/DaycarePond/scripts.pory"
	release
	end

GoomyInCaveTrigger_8:
# 209 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 210 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 211 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 212 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 213 "data/maps/DaycarePond/scripts.pory"
	release
	end


BuizelInCave::
# 221 "data/maps/DaycarePond/scripts.pory"
	lock
# 222 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 223 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_BUIZEL_BATTLE, BuizelInCave_1
# 233 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 234 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, Common_Movement_ExclamationMark
# 235 "data/maps/DaycarePond/scripts.pory"
	waitmovement
# 236 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 237 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 238 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 239 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 240 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 241 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCave_4
	return

BuizelInCave_1:
# 225 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 226 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_1, MSGBOX_DEFAULT
# 227 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 228 "data/maps/DaycarePond/scripts.pory"
	release
	end

BuizelInCave_4:
# 243 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 244 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 245 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 246 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 247 "data/maps/DaycarePond/scripts.pory"
	release
	end


BuizelInCaveTrigger::
# 254 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_BUIZEL_BATTLE, BuizelInCaveTrigger_1
	return

BuizelInCaveTrigger_1:
# 256 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 257 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, Common_Movement_ExclamationMark
# 258 "data/maps/DaycarePond/scripts.pory"
	waitmovement
# 259 "data/maps/DaycarePond/scripts.pory"
	delay 40
# 260 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 261 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_2
# 263 "data/maps/DaycarePond/scripts.pory"
	case 34, BuizelInCaveTrigger_4
# 281 "data/maps/DaycarePond/scripts.pory"
	case 35, BuizelInCaveTrigger_5
	return

BuizelInCaveTrigger_4:
# 264 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, BuizelInCaveTrigger_Movement_0
# 265 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BuizelInCaveTrigger_Movement_1
# 266 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 267 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 268 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 269 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 270 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 271 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 272 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCaveTrigger_6
	return

BuizelInCaveTrigger_5:
# 282 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, BuizelInCaveTrigger_Movement_0
# 283 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 284 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 285 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 286 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 287 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 288 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCaveTrigger_8
	return

BuizelInCaveTrigger_6:
# 274 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 275 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 276 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 277 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 278 "data/maps/DaycarePond/scripts.pory"
	release
	end

BuizelInCaveTrigger_8:
# 290 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 291 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 292 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 293 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 294 "data/maps/DaycarePond/scripts.pory"
	release
	end


SlowpokeInCave::
# 302 "data/maps/DaycarePond/scripts.pory"
	lock
# 303 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 304 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_SLOWPOKE_BATTLE, SlowpokeInCave_1
# 314 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 315 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 316 "data/maps/DaycarePond/scripts.pory"
	waitmovement
# 317 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 318 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 319 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 320 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 321 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 322 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCave_4
	return

SlowpokeInCave_1:
# 306 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 307 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_1, MSGBOX_DEFAULT
# 308 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 309 "data/maps/DaycarePond/scripts.pory"
	release
	end

SlowpokeInCave_4:
# 324 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 325 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 326 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 327 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 328 "data/maps/DaycarePond/scripts.pory"
	release
	end


SlowpokeInCaveTrigger::
# 334 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_SLOWPOKE_BATTLE, SlowpokeInCaveTrigger_1
	return

SlowpokeInCaveTrigger_1:
# 336 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 337 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 338 "data/maps/DaycarePond/scripts.pory"
	waitmovement
# 339 "data/maps/DaycarePond/scripts.pory"
	delay 40
# 340 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 341 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_1
# 343 "data/maps/DaycarePond/scripts.pory"
	case 26, SlowpokeInCaveTrigger_4
# 361 "data/maps/DaycarePond/scripts.pory"
	case 28, SlowpokeInCaveTrigger_5
	return

SlowpokeInCaveTrigger_4:
# 344 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, GoomyInCaveTrigger_Movement_0
# 345 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 346 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, SlowpokeInCaveTrigger_Movement_0
# 347 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 348 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 349 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 350 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 351 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 352 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCaveTrigger_6
	return

SlowpokeInCaveTrigger_5:
# 362 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, SlowpokeInCaveTrigger_Movement_0
# 363 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 364 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 365 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 366 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 367 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 368 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 369 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 370 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCaveTrigger_8
	return

SlowpokeInCaveTrigger_6:
# 354 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 355 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 356 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 357 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 358 "data/maps/DaycarePond/scripts.pory"
	release
	end

SlowpokeInCaveTrigger_8:
# 372 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 373 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 374 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 375 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 376 "data/maps/DaycarePond/scripts.pory"
	release
	end


CroagunkInCave::
# 384 "data/maps/DaycarePond/scripts.pory"
	lock
# 385 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 386 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_CROAGUNK_BATTLE, CroagunkInCave_1
# 396 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 397 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, Common_Movement_ExclamationMark
# 398 "data/maps/DaycarePond/scripts.pory"
	waitmovement
# 399 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 400 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 401 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 402 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 403 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 404 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCave_4
	return

CroagunkInCave_1:
# 388 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 389 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_1, MSGBOX_DEFAULT
# 390 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 391 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCave_4:
# 406 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 407 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 408 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 409 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 410 "data/maps/DaycarePond/scripts.pory"
	release
	end


CroagunkInCaveTrigger::
# 416 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_CROAGUNK_BATTLE, CroagunkInCaveTrigger_1
	return

CroagunkInCaveTrigger_1:
# 418 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 419 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, Common_Movement_ExclamationMark
# 420 "data/maps/DaycarePond/scripts.pory"
	waitmovement
# 421 "data/maps/DaycarePond/scripts.pory"
	delay 40
# 422 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 423 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_2
# 425 "data/maps/DaycarePond/scripts.pory"
	case 3, CroagunkInCaveTrigger_4
# 441 "data/maps/DaycarePond/scripts.pory"
	case 4, CroagunkInCaveTrigger_5
# 459 "data/maps/DaycarePond/scripts.pory"
	case 5, CroagunkInCaveTrigger_6
# 477 "data/maps/DaycarePond/scripts.pory"
	case 6, CroagunkInCaveTrigger_7
# 495 "data/maps/DaycarePond/scripts.pory"
	case 7, CroagunkInCaveTrigger_8
	return

CroagunkInCaveTrigger_4:
# 426 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 427 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 428 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 429 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 430 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 431 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 432 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_9
	return

CroagunkInCaveTrigger_5:
# 442 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 443 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_1
# 444 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 445 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 446 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 447 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 448 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 449 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 450 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_11
	return

CroagunkInCaveTrigger_6:
# 460 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 461 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_2
# 462 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
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
	goto_if_eq CroagunkInCaveTrigger_13
	return

CroagunkInCaveTrigger_7:
# 478 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 479 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_3
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
	goto_if_eq CroagunkInCaveTrigger_15
	return

CroagunkInCaveTrigger_8:
# 496 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 497 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_4
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
	goto_if_eq CroagunkInCaveTrigger_17
	return

CroagunkInCaveTrigger_9:
# 434 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 435 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 436 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 437 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 438 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_11:
# 452 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 453 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 454 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 455 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 456 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_13:
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

CroagunkInCaveTrigger_15:
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

CroagunkInCaveTrigger_17:
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


BattleVsDragonair::
# 518 "data/maps/DaycarePond/scripts.pory"
	lock
# 520 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_TRANS_DRAGONAIR, BattleVsDragonair_2
# 530 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 531 "data/maps/DaycarePond/scripts.pory"
	playse SE_PIN
# 532 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, Common_Movement_ExclamationMark
# 533 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 534 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 535 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_2, MSGBOX_AUTOCLOSE
# 536 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_DRAGONAIR, 25
# 537 "data/maps/DaycarePond/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 538 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 539 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 540 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsDragonair_4
	return

BattleVsDragonair_2:
# 522 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 523 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 524 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_1, MSGBOX_DEFAULT
# 525 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 526 "data/maps/DaycarePond/scripts.pory"
	release
	end

BattleVsDragonair_4:
# 542 "data/maps/DaycarePond/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 543 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_TRANS_DRAGONAIR
# 544 "data/maps/DaycarePond/scripts.pory"
	dittotransform SPECIES_DRAGONAIR
# 545 "data/maps/DaycarePond/scripts.pory"
	playse MUS_LEVEL_UP
# 546 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_3, MSGBOX_DEFAULT
# 547 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 548 "data/maps/DaycarePond/scripts.pory"
	dittotransform VAR_TEMP_0
# 549 "data/maps/DaycarePond/scripts.pory"
	givemon SPECIES_DRAGONAIR, 25, move1 = MOVE_OUTRAGE, move2 = MOVE_WATERFALL, move3 = MOVE_IRON_HEAD, move4 = MOVE_SAFEGUARD
# 550 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 551 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_4, MSGBOX_DEFAULT
# 552 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 553 "data/maps/DaycarePond/scripts.pory"
	release
	end


DaycarePond_FindLuckyEgg::
# 561 "data/maps/DaycarePond/scripts.pory"
	lock
# 562 "data/maps/DaycarePond/scripts.pory"
	finditem ITEM_LUCKY_EGG
# 563 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 564 "data/maps/DaycarePond/scripts.pory"
	release
	end


# 18 "data/maps/DaycarePond/scripts.pory"
BattleVsMarill_Movement_0:
# 18 "data/maps/DaycarePond/scripts.pory"
	face_player
	step_end

# 184 "data/maps/DaycarePond/scripts.pory"
GoomyInCaveTrigger_Movement_0:
# 184 "data/maps/DaycarePond/scripts.pory"
	face_right
	step_end

# 201 "data/maps/DaycarePond/scripts.pory"
GoomyInCaveTrigger_Movement_1:
# 201 "data/maps/DaycarePond/scripts.pory"
	walk_left
	step_end

# 264 "data/maps/DaycarePond/scripts.pory"
BuizelInCaveTrigger_Movement_0:
# 264 "data/maps/DaycarePond/scripts.pory"
	face_down
	step_end

# 265 "data/maps/DaycarePond/scripts.pory"
BuizelInCaveTrigger_Movement_1:
# 265 "data/maps/DaycarePond/scripts.pory"
	walk_up
	step_end

# 346 "data/maps/DaycarePond/scripts.pory"
SlowpokeInCaveTrigger_Movement_0:
# 346 "data/maps/DaycarePond/scripts.pory"
	face_left
	step_end

# 426 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_0:
# 426 "data/maps/DaycarePond/scripts.pory"
	face_up
	step_end

# 443 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_1:
# 443 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 461 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_2:
# 461 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 461 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 479 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_3:
# 479 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 479 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 479 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 497 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_4:
# 497 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 497 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 497 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 497 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

BattleVsMarill_Text_0:
# 11 "data/maps/DaycarePond/scripts.pory"
	.string "Marill$"

BattleVsMarill_Text_1:
# 12 "data/maps/DaycarePond/scripts.pory"
	.string "You’re stronger than you look!\pSwim swiftly on your journey!$"

BattleVsMarill_Text_2:
# 24 "data/maps/DaycarePond/scripts.pory"
	.string "Oh! A Ditto?\pYou’re gathering powers for your\nquest, right?\pIf you can beat me, you’ll earn the\npower to transform into me!$"

BattleVsMarill_Text_3:
# 35 "data/maps/DaycarePond/scripts.pory"
	.string "You have gained the ability to\ntransform into Marill!$"

PsyduckDialog_Text_0:
# 49 "data/maps/DaycarePond/scripts.pory"
	.string "Psyduck$"

PsyduckDialog_Text_1:
# 50 "data/maps/DaycarePond/scripts.pory"
	.string "OW OH GOD MY HEAD!\pWHY WAS I CREATED TO LIVE IN\nPAIN?$"

SprigatitoDialog_Text_0:
# 64 "data/maps/DaycarePond/scripts.pory"
	.string "Sprigatito$"

SprigatitoDialog_Text_1:
# 65 "data/maps/DaycarePond/scripts.pory"
	.string "A Grass_type!\pDon't see many around the lake\nhere.\pPlease take this Egg I found.\n$"

SprigatitoDialog_Text_2:
# 77 "data/maps/DaycarePond/scripts.pory"
	.string "I love it here by the water but\nI hardly see any other\lGrass_types...$"

SprigatitoDialog_Text_3:
# 90 "data/maps/DaycarePond/scripts.pory"
	.string "A Grass_type!\pDon't see many around the lake\nhere.$"

MudkipDialog_Text_0:
# 112 "data/maps/DaycarePond/scripts.pory"
	.string "Mudkip$"

MudkipDialog_Text_1:
# 113 "data/maps/DaycarePond/scripts.pory"
	.string "I hope my trainer comes back\nsoon...\pI miss them.\pI'm supposed to be their first\npartner Pokémon.$"

SeakingDialog_Text_0:
# 122 "data/maps/DaycarePond/scripts.pory"
	.string "Seaking$"

SeakingDialog_Text_1:
# 123 "data/maps/DaycarePond/scripts.pory"
	.string "Everyone talks about how\ndesireable Vaporeon is.\pSeakings need love too...\pDo you know any Dittos?\n$"

QuagsireDialog_Text_0:
# 133 "data/maps/DaycarePond/scripts.pory"
	.string "Quagsire$"

QuagsireDialog_Text_1:
# 134 "data/maps/DaycarePond/scripts.pory"
	.string "The Lake here is so calm.\pDragonair makes sure that we\nkeep the peace here.\pShe believes keeping it mellow\nis the key to EXP.$"

GoomyInCave_Text_0:
# 145 "data/maps/DaycarePond/scripts.pory"
	.string "Goomy$"

GoomyInCave_Text_1:
# 146 "data/maps/DaycarePond/scripts.pory"
	.string "Cool vibes friend.\pKeep on keepin on.\n$"

GoomyInCave_Text_2:
# 157 "data/maps/DaycarePond/scripts.pory"
	.string "Keepin it mellow...\nLet's just have some fun.$"

BuizelInCave_Text_0:
# 225 "data/maps/DaycarePond/scripts.pory"
	.string "Buizel$"

BuizelInCave_Text_1:
# 226 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair likes to be cryptic.\pShe set up this maze so only those\nwho really need something from her\lwill seek her out.\pSome Pokémon really harsh her\nmellow.$"

BuizelInCave_Text_2:
# 237 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair likes to keep the waters\ncalm around here.\pLet's keep it lowkey.\n$"

BuizelInCave_Text_3:
# 244 "data/maps/DaycarePond/scripts.pory"
	.string "She keeps to herself.\nEnsuring maximum relaxation.$"

SlowpokeInCave_Text_0:
# 306 "data/maps/DaycarePond/scripts.pory"
	.string "Slowpoke$"

SlowpokeInCave_Text_1:
# 307 "data/maps/DaycarePond/scripts.pory"
	.string "These bridges are so confusing...\pI've been stuck here for a while,\nbut it's chill.$"

SlowpokeInCave_Text_2:
# 318 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair really likes my vibe.\n$"

SlowpokeInCave_Text_3:
# 325 "data/maps/DaycarePond/scripts.pory"
	.string "Maybe it's cause I'm too slow to\nharsh the vibe.$"

CroagunkInCave_Text_0:
# 388 "data/maps/DaycarePond/scripts.pory"
	.string "Croagunk$"

CroagunkInCave_Text_1:
# 389 "data/maps/DaycarePond/scripts.pory"
	.string "We keep it peaceful here my dude.\pCan't have anyone mess with the\nvibes or we risk losing out on\lgaining EXP.\pHaven't leveled up yet but I'm\nchillin.\pI'm sure it'll come.\n$"

CroagunkInCave_Text_2:
# 400 "data/maps/DaycarePond/scripts.pory"
	.string "Duuuuuude.\nWhat's upppp?$"

CroagunkInCave_Text_3:
# 407 "data/maps/DaycarePond/scripts.pory"
	.string "Right on.\n$"

BattleVsDragonair_Text_0:
# 523 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair$"

BattleVsDragonair_Text_1:
# 524 "data/maps/DaycarePond/scripts.pory"
	.string "You have proven your strength.\pI hope one day you learn that\ngrace will be the way to the EXP.$"

BattleVsDragonair_Text_2:
# 535 "data/maps/DaycarePond/scripts.pory"
	.string "Hello there Ditto.\pYes, I see through your facade.\pMy philosophy to gain EXP has been\nto keep this biome calm.\pI spent my early days in the\ncrashing waterfalls, but gained\lno EXP.\pI found this biome and figured\nI try a different approach.\pYou seem to be causing a ruckus,\nand I have no problem taking you\ldown!$"

BattleVsDragonair_Text_3:
# 546 "data/maps/DaycarePond/scripts.pory"
	.string "You have gained the ability to\ntransform into Dragonair!$"

BattleVsDragonair_Text_4:
# 551 "data/maps/DaycarePond/scripts.pory"
	.string "Very well Ditto.\nGo on.\pLeave this place calmly, with\nthe power to scale roaring\lwaterfalls.$"
