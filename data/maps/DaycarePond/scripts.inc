DaycarePond_MapScripts::
	.byte 0


BattleVsMarill::
# 6 "data/maps/DaycarePond/scripts.pory"
	lock
# 8 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_TRANS_MARILL, BattleVsMarill_2
# 17 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
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
# 50 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 51 "data/maps/DaycarePond/scripts.pory"
	release
	end


SprigatitoDialog::
# 57 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_SPRIGATITO_EGG, SprigatitoDialog_1
# 84 "data/maps/DaycarePond/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_LURANTIS
	goto_if_eq SprigatitoDialog_7
# 96 "data/maps/DaycarePond/scripts.pory"
	lock
# 97 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 98 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 99 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_2, MSGBOX_DEFAULT
# 100 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 101 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_1:
# 59 "data/maps/DaycarePond/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_LURANTIS
	goto_if_eq SprigatitoDialog_4
# 73 "data/maps/DaycarePond/scripts.pory"
	lock
# 74 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 75 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 76 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_2, MSGBOX_DEFAULT
# 77 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 78 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_4:
# 61 "data/maps/DaycarePond/scripts.pory"
	lock
# 62 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 63 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 64 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_1, MSGBOX_DEFAULT
# 65 "data/maps/DaycarePond/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 66 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SPRIGATITO_EGG
# 67 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 68 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_7:
# 86 "data/maps/DaycarePond/scripts.pory"
	lock
# 87 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 88 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 89 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_3, MSGBOX_DEFAULT
# 90 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 91 "data/maps/DaycarePond/scripts.pory"
	release
	end


MudkipDialog::
# 109 "data/maps/DaycarePond/scripts.pory"
	lock
# 110 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 111 "data/maps/DaycarePond/scripts.pory"
	speakername MudkipDialog_Text_0
# 112 "data/maps/DaycarePond/scripts.pory"
	msgbox MudkipDialog_Text_1, MSGBOX_DEFAULT
# 113 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 114 "data/maps/DaycarePond/scripts.pory"
	release
	end


SeakingDialog::
# 119 "data/maps/DaycarePond/scripts.pory"
	lock
# 120 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 121 "data/maps/DaycarePond/scripts.pory"
	speakername SeakingDialog_Text_0
# 122 "data/maps/DaycarePond/scripts.pory"
	msgbox SeakingDialog_Text_1, MSGBOX_DEFAULT
# 123 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 124 "data/maps/DaycarePond/scripts.pory"
	release
	end


QuagsireDialog::
# 130 "data/maps/DaycarePond/scripts.pory"
	lock
# 131 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 132 "data/maps/DaycarePond/scripts.pory"
	speakername QuagsireDialog_Text_0
# 133 "data/maps/DaycarePond/scripts.pory"
	msgbox QuagsireDialog_Text_1, MSGBOX_DEFAULT
# 134 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 135 "data/maps/DaycarePond/scripts.pory"
	release
	end


GoomyInCave::
# 140 "data/maps/DaycarePond/scripts.pory"
	lock
# 141 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 142 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_GOOMY_BATTLE, GoomyInCave_1
# 152 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, BattleVsMarill_Movement_0
# 153 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 154 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 155 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, Common_Movement_ExclamationMark
# 156 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 157 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 158 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 159 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 160 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 161 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 162 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 163 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCave_4
	return

GoomyInCave_1:
# 144 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 145 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 146 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 147 "data/maps/DaycarePond/scripts.pory"
	release
	end

GoomyInCave_4:
# 165 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 166 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 167 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 168 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 169 "data/maps/DaycarePond/scripts.pory"
	release
	end


GoomyInCaveTrigger::
# 176 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_GOOMY_BATTLE, GoomyInCaveTrigger_1
	return

GoomyInCaveTrigger_1:
# 178 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 179 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, Common_Movement_ExclamationMark
# 180 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 181 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 182 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 183 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_1
# 185 "data/maps/DaycarePond/scripts.pory"
	case 16, GoomyInCaveTrigger_4
# 201 "data/maps/DaycarePond/scripts.pory"
	case 15, GoomyInCaveTrigger_5
	return

GoomyInCaveTrigger_4:
# 186 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 187 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 188 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 189 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 190 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 191 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 192 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCaveTrigger_6
	return

GoomyInCaveTrigger_5:
# 202 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 203 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, GoomyInCaveTrigger_Movement_1
# 204 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 205 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 206 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 207 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 208 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 209 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCaveTrigger_8
	return

GoomyInCaveTrigger_6:
# 194 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 195 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 196 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 197 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 198 "data/maps/DaycarePond/scripts.pory"
	release
	end

GoomyInCaveTrigger_8:
# 211 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 212 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 213 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 214 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 215 "data/maps/DaycarePond/scripts.pory"
	release
	end


BuizelInCave::
# 223 "data/maps/DaycarePond/scripts.pory"
	lock
# 224 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 225 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_BUIZEL_BATTLE, BuizelInCave_1
# 235 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 236 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 237 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 238 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, Common_Movement_ExclamationMark
# 239 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 240 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 241 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 242 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 243 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 244 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 245 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 246 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCave_4
	return

BuizelInCave_1:
# 227 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 228 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_1, MSGBOX_DEFAULT
# 229 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 230 "data/maps/DaycarePond/scripts.pory"
	release
	end

BuizelInCave_4:
# 248 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 249 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 250 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 251 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 252 "data/maps/DaycarePond/scripts.pory"
	release
	end


BuizelInCaveTrigger::
# 259 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_BUIZEL_BATTLE, BuizelInCaveTrigger_1
	return

BuizelInCaveTrigger_1:
# 261 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 262 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, Common_Movement_ExclamationMark
# 263 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 264 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 265 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 266 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_2
# 268 "data/maps/DaycarePond/scripts.pory"
	case 34, BuizelInCaveTrigger_4
# 288 "data/maps/DaycarePond/scripts.pory"
	case 35, BuizelInCaveTrigger_5
	return

BuizelInCaveTrigger_4:
# 269 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 270 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 271 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, BuizelInCaveTrigger_Movement_0
# 272 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BuizelInCaveTrigger_Movement_1
# 273 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 274 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 275 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 276 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 277 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 278 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 279 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCaveTrigger_6
	return

BuizelInCaveTrigger_5:
# 289 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 290 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 291 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, BuizelInCaveTrigger_Movement_0
# 292 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 293 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 294 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 295 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 296 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 297 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCaveTrigger_8
	return

BuizelInCaveTrigger_6:
# 281 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 282 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 283 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 284 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 285 "data/maps/DaycarePond/scripts.pory"
	release
	end

BuizelInCaveTrigger_8:
# 299 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 300 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 301 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 302 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 303 "data/maps/DaycarePond/scripts.pory"
	release
	end


SlowpokeInCave::
# 311 "data/maps/DaycarePond/scripts.pory"
	lock
# 312 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 313 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_SLOWPOKE_BATTLE, SlowpokeInCave_1
# 323 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, BattleVsMarill_Movement_0
# 324 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 325 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 326 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 327 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 328 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 329 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 330 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 331 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 332 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 333 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 334 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCave_4
	return

SlowpokeInCave_1:
# 315 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 316 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_1, MSGBOX_DEFAULT
# 317 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 318 "data/maps/DaycarePond/scripts.pory"
	release
	end

SlowpokeInCave_4:
# 336 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 337 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 338 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 339 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 340 "data/maps/DaycarePond/scripts.pory"
	release
	end


SlowpokeInCaveTrigger::
# 346 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_SLOWPOKE_BATTLE, SlowpokeInCaveTrigger_1
	return

SlowpokeInCaveTrigger_1:
# 348 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 349 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 350 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_1
# 352 "data/maps/DaycarePond/scripts.pory"
	case 28, SlowpokeInCaveTrigger_4
# 373 "data/maps/DaycarePond/scripts.pory"
	case 26, SlowpokeInCaveTrigger_5
	return

SlowpokeInCaveTrigger_4:
# 353 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 354 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 355 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, GoomyInCaveTrigger_Movement_0
# 356 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 357 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, SlowpokeInCaveTrigger_Movement_0
# 358 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 359 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 360 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 361 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 362 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 363 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 364 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCaveTrigger_6
	return

SlowpokeInCaveTrigger_5:
# 374 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 375 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 376 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, SlowpokeInCaveTrigger_Movement_0
# 377 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 378 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 379 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 380 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 381 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 382 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 383 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 384 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 385 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCaveTrigger_8
	return

SlowpokeInCaveTrigger_6:
# 366 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 367 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 368 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 369 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 370 "data/maps/DaycarePond/scripts.pory"
	release
	end

SlowpokeInCaveTrigger_8:
# 387 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 388 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 389 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 390 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 391 "data/maps/DaycarePond/scripts.pory"
	release
	end


CroagunkInCave::
# 399 "data/maps/DaycarePond/scripts.pory"
	lock
# 400 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 401 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_CROAGUNK_BATTLE, CroagunkInCave_1
# 411 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, BattleVsMarill_Movement_0
# 412 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 413 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 414 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, Common_Movement_ExclamationMark
# 415 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 416 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 417 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 418 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 419 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 420 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 421 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 422 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCave_4
	return

CroagunkInCave_1:
# 403 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 404 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_1, MSGBOX_DEFAULT
# 405 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 406 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCave_4:
# 424 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 425 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 426 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 427 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 428 "data/maps/DaycarePond/scripts.pory"
	release
	end


CroagunkInCaveTrigger::
# 434 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_CROAGUNK_BATTLE, CroagunkInCaveTrigger_1
	return

CroagunkInCaveTrigger_1:
# 436 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 437 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, Common_Movement_ExclamationMark
# 438 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 439 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 440 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 441 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_2
# 443 "data/maps/DaycarePond/scripts.pory"
	case 3, CroagunkInCaveTrigger_4
# 459 "data/maps/DaycarePond/scripts.pory"
	case 4, CroagunkInCaveTrigger_5
# 477 "data/maps/DaycarePond/scripts.pory"
	case 5, CroagunkInCaveTrigger_6
# 495 "data/maps/DaycarePond/scripts.pory"
	case 6, CroagunkInCaveTrigger_7
# 513 "data/maps/DaycarePond/scripts.pory"
	case 7, CroagunkInCaveTrigger_8
	return

CroagunkInCaveTrigger_4:
# 444 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
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
	goto_if_eq CroagunkInCaveTrigger_9
	return

CroagunkInCaveTrigger_5:
# 460 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 461 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_1
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
	goto_if_eq CroagunkInCaveTrigger_11
	return

CroagunkInCaveTrigger_6:
# 478 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 479 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_2
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
	goto_if_eq CroagunkInCaveTrigger_13
	return

CroagunkInCaveTrigger_7:
# 496 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 497 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_3
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
	goto_if_eq CroagunkInCaveTrigger_15
	return

CroagunkInCaveTrigger_8:
# 514 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 515 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_4
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
	goto_if_eq CroagunkInCaveTrigger_17
	return

CroagunkInCaveTrigger_9:
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

CroagunkInCaveTrigger_11:
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

CroagunkInCaveTrigger_13:
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

CroagunkInCaveTrigger_15:
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

CroagunkInCaveTrigger_17:
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


BattleVsDragonair::
# 536 "data/maps/DaycarePond/scripts.pory"
	lock
# 538 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_TRANS_DRAGONAIR, BattleVsDragonair_2
# 548 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 549 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, BattleVsMarill_Movement_0
# 550 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 551 "data/maps/DaycarePond/scripts.pory"
	playse SE_PIN
# 552 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, Common_Movement_ExclamationMark
# 553 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 554 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 555 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_2, MSGBOX_AUTOCLOSE
# 556 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_DRAGONAIR, 25, move1 = MOVE_OUTRAGE, move2 = MOVE_WATERFALL, move3 = MOVE_IRON_HEAD, move4 = MOVE_SAFEGUARD
# 557 "data/maps/DaycarePond/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 558 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 559 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 560 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsDragonair_4
	return

BattleVsDragonair_2:
# 540 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, BattleVsMarill_Movement_0
# 541 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 542 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 543 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_1, MSGBOX_DEFAULT
# 544 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 545 "data/maps/DaycarePond/scripts.pory"
	release
	end

BattleVsDragonair_4:
# 562 "data/maps/DaycarePond/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 563 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_TRANS_DRAGONAIR
# 564 "data/maps/DaycarePond/scripts.pory"
	dittotransform SPECIES_DRAGONAIR
# 565 "data/maps/DaycarePond/scripts.pory"
	playse MUS_LEVEL_UP
# 566 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_3, MSGBOX_DEFAULT
# 567 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 568 "data/maps/DaycarePond/scripts.pory"
	dittotransform VAR_TEMP_0
# 569 "data/maps/DaycarePond/scripts.pory"
	givemon SPECIES_DRAGONAIR, 25, move1 = MOVE_OUTRAGE, move2 = MOVE_WATERFALL, move3 = MOVE_IRON_HEAD, move4 = MOVE_SAFEGUARD
# 570 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 571 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_4, MSGBOX_DEFAULT
# 572 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 573 "data/maps/DaycarePond/scripts.pory"
	release
	end


DaycarePond_FindLuckyEgg::
# 581 "data/maps/DaycarePond/scripts.pory"
	lock
# 582 "data/maps/DaycarePond/scripts.pory"
	finditem ITEM_LUCKY_EGG
# 583 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 584 "data/maps/DaycarePond/scripts.pory"
	release
	end


# 18 "data/maps/DaycarePond/scripts.pory"
BattleVsMarill_Movement_0:
# 18 "data/maps/DaycarePond/scripts.pory"
	face_player
	step_end

# 186 "data/maps/DaycarePond/scripts.pory"
GoomyInCaveTrigger_Movement_0:
# 186 "data/maps/DaycarePond/scripts.pory"
	face_right
	step_end

# 203 "data/maps/DaycarePond/scripts.pory"
GoomyInCaveTrigger_Movement_1:
# 203 "data/maps/DaycarePond/scripts.pory"
	walk_left
	step_end

# 271 "data/maps/DaycarePond/scripts.pory"
BuizelInCaveTrigger_Movement_0:
# 271 "data/maps/DaycarePond/scripts.pory"
	face_down
	step_end

# 272 "data/maps/DaycarePond/scripts.pory"
BuizelInCaveTrigger_Movement_1:
# 272 "data/maps/DaycarePond/scripts.pory"
	walk_up
	step_end

# 357 "data/maps/DaycarePond/scripts.pory"
SlowpokeInCaveTrigger_Movement_0:
# 357 "data/maps/DaycarePond/scripts.pory"
	face_left
	step_end

# 444 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_0:
# 444 "data/maps/DaycarePond/scripts.pory"
	face_up
	step_end

# 461 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_1:
# 461 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 479 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_2:
# 479 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 479 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 497 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_3:
# 497 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 497 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 497 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 515 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_4:
# 515 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 515 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 515 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 515 "data/maps/DaycarePond/scripts.pory"
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
	.string "I came to the lake to try to ease\nthis headache...\pIt's the most peaceful biome at\nthe daycare.$"

SprigatitoDialog_Text_0:
# 63 "data/maps/DaycarePond/scripts.pory"
	.string "Sprigatito$"

SprigatitoDialog_Text_1:
# 64 "data/maps/DaycarePond/scripts.pory"
	.string "A Grass_type!\pDon't see many around the lake\nhere.\pPlease take this Egg I found.\n$"

SprigatitoDialog_Text_2:
# 76 "data/maps/DaycarePond/scripts.pory"
	.string "I love it here by the water but\nI hardly see any other\lGrass_types...$"

SprigatitoDialog_Text_3:
# 89 "data/maps/DaycarePond/scripts.pory"
	.string "A Grass_type!\pDon't see many around the lake\nhere.$"

MudkipDialog_Text_0:
# 111 "data/maps/DaycarePond/scripts.pory"
	.string "Mudkip$"

MudkipDialog_Text_1:
# 112 "data/maps/DaycarePond/scripts.pory"
	.string "I hope my trainer comes back\nsoon...\pI miss them.\pI'm supposed to be their first\npartner Pokémon.$"

SeakingDialog_Text_0:
# 121 "data/maps/DaycarePond/scripts.pory"
	.string "Seaking$"

SeakingDialog_Text_1:
# 122 "data/maps/DaycarePond/scripts.pory"
	.string "Everyone talks about how\ndesireable Vaporeon is.\pSeakings need love too...\pDo you know any Dittos?\n$"

QuagsireDialog_Text_0:
# 132 "data/maps/DaycarePond/scripts.pory"
	.string "Quagsire$"

QuagsireDialog_Text_1:
# 133 "data/maps/DaycarePond/scripts.pory"
	.string "The Lake here is so calm.\pDragonair makes sure that we\nkeep the peace here.\pShe believes keeping it mellow\nis the key to EXP.$"

GoomyInCave_Text_0:
# 144 "data/maps/DaycarePond/scripts.pory"
	.string "Goomy$"

GoomyInCave_Text_1:
# 145 "data/maps/DaycarePond/scripts.pory"
	.string "Cool vibes friend.\pKeep on keepin on.\n$"

GoomyInCave_Text_2:
# 159 "data/maps/DaycarePond/scripts.pory"
	.string "Keepin it mellow...\nLet's just have some fun.$"

BuizelInCave_Text_0:
# 227 "data/maps/DaycarePond/scripts.pory"
	.string "Buizel$"

BuizelInCave_Text_1:
# 228 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair likes to be cryptic.\pShe set up this maze so only those\nwho really need something from her\lwill seek her out.\pSome Pokémon really harsh her\nmellow.$"

BuizelInCave_Text_2:
# 242 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair likes to keep the waters\ncalm around here.\pLet's keep it lowkey.\n$"

BuizelInCave_Text_3:
# 249 "data/maps/DaycarePond/scripts.pory"
	.string "She keeps to herself.\nEnsuring maximum relaxation.$"

SlowpokeInCave_Text_0:
# 315 "data/maps/DaycarePond/scripts.pory"
	.string "Slowpoke$"

SlowpokeInCave_Text_1:
# 316 "data/maps/DaycarePond/scripts.pory"
	.string "These bridges are so confusing...\pI've been stuck here for a while,\nbut it's chill.$"

SlowpokeInCave_Text_2:
# 330 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair really likes my vibe.\n$"

SlowpokeInCave_Text_3:
# 337 "data/maps/DaycarePond/scripts.pory"
	.string "Maybe it's cause I'm too slow to\nharsh the vibe.$"

CroagunkInCave_Text_0:
# 403 "data/maps/DaycarePond/scripts.pory"
	.string "Croagunk$"

CroagunkInCave_Text_1:
# 404 "data/maps/DaycarePond/scripts.pory"
	.string "We keep it peaceful here my dude.\pCan't have anyone mess with the\nvibes or we risk losing out on\lgaining EXP.\pHaven't leveled up yet but I'm\nchillin.\pI'm sure it'll come.\n$"

CroagunkInCave_Text_2:
# 418 "data/maps/DaycarePond/scripts.pory"
	.string "Duuuuuude.\nWhat's upppp?$"

CroagunkInCave_Text_3:
# 425 "data/maps/DaycarePond/scripts.pory"
	.string "Right on.\n$"

BattleVsDragonair_Text_0:
# 542 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair$"

BattleVsDragonair_Text_1:
# 543 "data/maps/DaycarePond/scripts.pory"
	.string "You have proven your strength.\pI hope one day you learn that\ngrace will be the way to the EXP.$"

BattleVsDragonair_Text_2:
# 555 "data/maps/DaycarePond/scripts.pory"
	.string "Hello there Ditto.\pYes, I see through your facade.\pMy philosophy to gain EXP has been\nto keep this biome calm.\pI spent my early days in the\ncrashing waterfalls, but gained\lno EXP.\pI found this biome and figured\nI try a different approach.\pYou seem to be causing a ruckus,\nand I have no problem taking you\ldown!$"

BattleVsDragonair_Text_3:
# 566 "data/maps/DaycarePond/scripts.pory"
	.string "You have gained the ability to\ntransform into Dragonair!$"

BattleVsDragonair_Text_4:
# 571 "data/maps/DaycarePond/scripts.pory"
	.string "Very well Ditto.\nGo on.\pLeave this place calmly, with\nthe power to scale roaring\lwaterfalls.$"
