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
	playbgm MUS_PMD_HAPPINESS, FALSE
# 32 "data/maps/DaycarePond/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 33 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_TRANS_MARILL
# 34 "data/maps/DaycarePond/scripts.pory"
	dittotransform SPECIES_MARILL
# 35 "data/maps/DaycarePond/scripts.pory"
	playse MUS_LEVEL_UP
# 36 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsMarill_Text_3, MSGBOX_DEFAULT
# 37 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 38 "data/maps/DaycarePond/scripts.pory"
	dittotransform VAR_TEMP_0
# 39 "data/maps/DaycarePond/scripts.pory"
	givemon SPECIES_MARILL, 25, move1 = MOVE_SURF, move2 = MOVE_AQUA_JET, move3 = MOVE_COVET, move4 = MOVE_RAIN_DANCE
# 40 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 41 "data/maps/DaycarePond/scripts.pory"
	fadenewbgm MUS_PMD_LAKE
# 42 "data/maps/DaycarePond/scripts.pory"
	release
	end


PsyduckDialog::
# 49 "data/maps/DaycarePond/scripts.pory"
	lock
# 50 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 51 "data/maps/DaycarePond/scripts.pory"
	speakername PsyduckDialog_Text_0
# 52 "data/maps/DaycarePond/scripts.pory"
	msgbox PsyduckDialog_Text_1, MSGBOX_DEFAULT
# 52 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 53 "data/maps/DaycarePond/scripts.pory"
	release
	end


SprigatitoDialog::
# 59 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_SPRIGATITO_EGG, SprigatitoDialog_1
# 86 "data/maps/DaycarePond/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_LURANTIS
	goto_if_eq SprigatitoDialog_7
# 98 "data/maps/DaycarePond/scripts.pory"
	lock
# 99 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 100 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 101 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_2, MSGBOX_DEFAULT
# 102 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 103 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_1:
# 61 "data/maps/DaycarePond/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_LURANTIS
	goto_if_eq SprigatitoDialog_4
# 75 "data/maps/DaycarePond/scripts.pory"
	lock
# 76 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 77 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 78 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_2, MSGBOX_DEFAULT
# 79 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 80 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_4:
# 63 "data/maps/DaycarePond/scripts.pory"
	lock
# 64 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 65 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 66 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_1, MSGBOX_DEFAULT
# 67 "data/maps/DaycarePond/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 68 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SPRIGATITO_EGG
# 69 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 70 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_7:
# 88 "data/maps/DaycarePond/scripts.pory"
	lock
# 89 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 90 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 91 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_3, MSGBOX_DEFAULT
# 92 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 93 "data/maps/DaycarePond/scripts.pory"
	release
	end


MudkipDialog::
# 111 "data/maps/DaycarePond/scripts.pory"
	lock
# 112 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 113 "data/maps/DaycarePond/scripts.pory"
	speakername MudkipDialog_Text_0
# 114 "data/maps/DaycarePond/scripts.pory"
	msgbox MudkipDialog_Text_1, MSGBOX_DEFAULT
# 115 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 116 "data/maps/DaycarePond/scripts.pory"
	release
	end


SeakingDialog::
# 121 "data/maps/DaycarePond/scripts.pory"
	lock
# 122 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 123 "data/maps/DaycarePond/scripts.pory"
	speakername SeakingDialog_Text_0
# 124 "data/maps/DaycarePond/scripts.pory"
	msgbox SeakingDialog_Text_1, MSGBOX_DEFAULT
# 125 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 126 "data/maps/DaycarePond/scripts.pory"
	release
	end


QuagsireDialog::
# 132 "data/maps/DaycarePond/scripts.pory"
	lock
# 133 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 134 "data/maps/DaycarePond/scripts.pory"
	speakername QuagsireDialog_Text_0
# 135 "data/maps/DaycarePond/scripts.pory"
	msgbox QuagsireDialog_Text_1, MSGBOX_DEFAULT
# 136 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 137 "data/maps/DaycarePond/scripts.pory"
	release
	end


GoomyInCave::
# 142 "data/maps/DaycarePond/scripts.pory"
	lock
# 143 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 144 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_GOOMY_BATTLE, GoomyInCave_1
# 154 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, BattleVsMarill_Movement_0
# 155 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 156 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 157 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, Common_Movement_ExclamationMark
# 158 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 159 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 160 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 161 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 162 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 163 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 164 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 165 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCave_4
	return

GoomyInCave_1:
# 146 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 147 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 148 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 149 "data/maps/DaycarePond/scripts.pory"
	release
	end

GoomyInCave_4:
# 167 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 168 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 169 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 170 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 171 "data/maps/DaycarePond/scripts.pory"
	release
	end


GoomyInCaveTrigger::
# 178 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_GOOMY_BATTLE, GoomyInCaveTrigger_1
	return

GoomyInCaveTrigger_1:
# 180 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 181 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, Common_Movement_ExclamationMark
# 182 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 183 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 184 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 185 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_1
# 187 "data/maps/DaycarePond/scripts.pory"
	case 16, GoomyInCaveTrigger_4
# 203 "data/maps/DaycarePond/scripts.pory"
	case 15, GoomyInCaveTrigger_5
	return

GoomyInCaveTrigger_4:
# 188 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 189 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 190 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 191 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 192 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 193 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 194 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCaveTrigger_6
	return

GoomyInCaveTrigger_5:
# 204 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 205 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, GoomyInCaveTrigger_Movement_1
# 206 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 207 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 208 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 209 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 210 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 211 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCaveTrigger_8
	return

GoomyInCaveTrigger_6:
# 196 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 197 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 198 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 199 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 200 "data/maps/DaycarePond/scripts.pory"
	release
	end

GoomyInCaveTrigger_8:
# 213 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 214 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 215 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 216 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 217 "data/maps/DaycarePond/scripts.pory"
	release
	end


BuizelInCave::
# 225 "data/maps/DaycarePond/scripts.pory"
	lock
# 226 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 227 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_BUIZEL_BATTLE, BuizelInCave_1
# 237 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 238 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 239 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 240 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, Common_Movement_ExclamationMark
# 241 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 242 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 243 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 244 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 245 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 246 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 247 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 248 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCave_4
	return

BuizelInCave_1:
# 229 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 230 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_1, MSGBOX_DEFAULT
# 231 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 232 "data/maps/DaycarePond/scripts.pory"
	release
	end

BuizelInCave_4:
# 250 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 251 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 252 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 253 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 254 "data/maps/DaycarePond/scripts.pory"
	release
	end


BuizelInCaveTrigger::
# 261 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_BUIZEL_BATTLE, BuizelInCaveTrigger_1
	return

BuizelInCaveTrigger_1:
# 263 "data/maps/DaycarePond/scripts.pory"
	lock
# 264 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 265 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, Common_Movement_ExclamationMark
# 266 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 267 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 268 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 269 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_2
# 271 "data/maps/DaycarePond/scripts.pory"
	case 34, BuizelInCaveTrigger_4
# 292 "data/maps/DaycarePond/scripts.pory"
	case 35, BuizelInCaveTrigger_5
	return

BuizelInCaveTrigger_4:
# 272 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 273 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 275 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, BuizelInCaveTrigger_Movement_0
# 276 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BuizelInCaveTrigger_Movement_1
# 277 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 278 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 279 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 280 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 281 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 282 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 283 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCaveTrigger_6
	return

BuizelInCaveTrigger_5:
# 293 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 294 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 295 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, BuizelInCaveTrigger_Movement_0
# 296 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 297 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 298 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 299 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 300 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 301 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCaveTrigger_8
	return

BuizelInCaveTrigger_6:
# 285 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 286 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 287 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 288 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 289 "data/maps/DaycarePond/scripts.pory"
	release
	end

BuizelInCaveTrigger_8:
# 303 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 304 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 305 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 306 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 307 "data/maps/DaycarePond/scripts.pory"
	release
	end


SlowpokeInCave::
# 315 "data/maps/DaycarePond/scripts.pory"
	lock
# 316 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 317 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_SLOWPOKE_BATTLE, SlowpokeInCave_1
# 327 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, BattleVsMarill_Movement_0
# 328 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 329 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 330 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 331 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 332 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 333 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 334 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 335 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 336 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 337 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 338 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCave_4
	return

SlowpokeInCave_1:
# 319 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 320 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_1, MSGBOX_DEFAULT
# 321 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 322 "data/maps/DaycarePond/scripts.pory"
	release
	end

SlowpokeInCave_4:
# 340 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 341 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 342 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 343 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 344 "data/maps/DaycarePond/scripts.pory"
	release
	end


SlowpokeInCaveTrigger::
# 350 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_SLOWPOKE_BATTLE, SlowpokeInCaveTrigger_1
	return

SlowpokeInCaveTrigger_1:
# 352 "data/maps/DaycarePond/scripts.pory"
	lock
# 353 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 354 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 355 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_1
# 357 "data/maps/DaycarePond/scripts.pory"
	case 28, SlowpokeInCaveTrigger_4
# 378 "data/maps/DaycarePond/scripts.pory"
	case 26, SlowpokeInCaveTrigger_5
	return

SlowpokeInCaveTrigger_4:
# 358 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 359 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 360 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, GoomyInCaveTrigger_Movement_0
# 361 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 362 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, SlowpokeInCaveTrigger_Movement_0
# 363 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 364 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 365 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 366 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 367 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 368 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 369 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCaveTrigger_6
	return

SlowpokeInCaveTrigger_5:
# 379 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 380 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 381 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, SlowpokeInCaveTrigger_Movement_0
# 382 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 383 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 384 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 385 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 386 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 387 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 388 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 389 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 390 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCaveTrigger_8
	return

SlowpokeInCaveTrigger_6:
# 371 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 372 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 373 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 374 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 375 "data/maps/DaycarePond/scripts.pory"
	release
	end

SlowpokeInCaveTrigger_8:
# 392 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 393 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 394 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 395 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 396 "data/maps/DaycarePond/scripts.pory"
	release
	end


CroagunkInCave::
# 404 "data/maps/DaycarePond/scripts.pory"
	lock
# 405 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 406 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_CROAGUNK_BATTLE, CroagunkInCave_1
# 416 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, BattleVsMarill_Movement_0
# 417 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 418 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 419 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, Common_Movement_ExclamationMark
# 420 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 421 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 422 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 423 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 424 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 425 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 426 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 427 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCave_4
	return

CroagunkInCave_1:
# 408 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 409 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_1, MSGBOX_DEFAULT
# 410 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 411 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCave_4:
# 429 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 430 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 431 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 432 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 433 "data/maps/DaycarePond/scripts.pory"
	release
	end


CroagunkInCaveTrigger::
# 439 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_CROAGUNK_BATTLE, CroagunkInCaveTrigger_1
	return

CroagunkInCaveTrigger_1:
# 441 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 442 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, Common_Movement_ExclamationMark
# 443 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 444 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 445 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 446 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_2
# 448 "data/maps/DaycarePond/scripts.pory"
	case 3, CroagunkInCaveTrigger_4
# 464 "data/maps/DaycarePond/scripts.pory"
	case 4, CroagunkInCaveTrigger_5
# 482 "data/maps/DaycarePond/scripts.pory"
	case 5, CroagunkInCaveTrigger_6
# 500 "data/maps/DaycarePond/scripts.pory"
	case 6, CroagunkInCaveTrigger_7
# 518 "data/maps/DaycarePond/scripts.pory"
	case 7, CroagunkInCaveTrigger_8
	return

CroagunkInCaveTrigger_4:
# 449 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 450 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 451 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 452 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 453 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 454 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 455 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_9
	return

CroagunkInCaveTrigger_5:
# 465 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 466 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_1
# 467 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 468 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 469 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 470 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 471 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 472 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 473 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_11
	return

CroagunkInCaveTrigger_6:
# 483 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 484 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_2
# 485 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 486 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 487 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 488 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 489 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 490 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 491 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_13
	return

CroagunkInCaveTrigger_7:
# 501 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 502 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_3
# 503 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 504 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 505 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 506 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 507 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 508 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 509 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_15
	return

CroagunkInCaveTrigger_8:
# 519 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 520 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_4
# 521 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 522 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 523 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 524 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 525 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 526 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 527 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_17
	return

CroagunkInCaveTrigger_9:
# 457 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 458 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 459 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 460 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 461 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_11:
# 475 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 476 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 477 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 478 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 479 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_13:
# 493 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 494 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 495 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 496 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 497 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_15:
# 511 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 512 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 513 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 514 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 515 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_17:
# 529 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 530 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 531 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 532 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 533 "data/maps/DaycarePond/scripts.pory"
	release
	end


BattleVsDragonair::
# 541 "data/maps/DaycarePond/scripts.pory"
	lock
# 543 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_TRANS_DRAGONAIR, BattleVsDragonair_2
# 553 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 554 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, BattleVsMarill_Movement_0
# 555 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 556 "data/maps/DaycarePond/scripts.pory"
	playse SE_PIN
# 557 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, Common_Movement_ExclamationMark
# 558 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 559 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 560 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_2, MSGBOX_AUTOCLOSE
# 561 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_DRAGONAIR, 25, move1 = MOVE_OUTRAGE, move2 = MOVE_WATERFALL, move3 = MOVE_IRON_HEAD, move4 = MOVE_SAFEGUARD
# 562 "data/maps/DaycarePond/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 563 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 564 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 565 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsDragonair_4
	return

BattleVsDragonair_2:
# 545 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, BattleVsMarill_Movement_0
# 546 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 547 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 548 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_1, MSGBOX_DEFAULT
# 549 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 550 "data/maps/DaycarePond/scripts.pory"
	release
	end

BattleVsDragonair_4:
# 567 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 568 "data/maps/DaycarePond/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 569 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_TRANS_DRAGONAIR
# 570 "data/maps/DaycarePond/scripts.pory"
	dittotransform SPECIES_DRAGONAIR
# 571 "data/maps/DaycarePond/scripts.pory"
	playse MUS_LEVEL_UP
# 572 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_3, MSGBOX_DEFAULT
# 573 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 574 "data/maps/DaycarePond/scripts.pory"
	dittotransform VAR_TEMP_0
# 575 "data/maps/DaycarePond/scripts.pory"
	givemon SPECIES_DRAGONAIR, 25, move1 = MOVE_OUTRAGE, move2 = MOVE_WATERFALL, move3 = MOVE_IRON_HEAD, move4 = MOVE_SAFEGUARD
# 576 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 577 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_4, MSGBOX_DEFAULT
# 578 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 579 "data/maps/DaycarePond/scripts.pory"
	fadenewbgm MUS_PMD_LAKE
# 580 "data/maps/DaycarePond/scripts.pory"
	release
	end


DaycarePond_FindLuckyEgg::
# 588 "data/maps/DaycarePond/scripts.pory"
	lock
# 589 "data/maps/DaycarePond/scripts.pory"
	finditem ITEM_LUCKY_EGG
# 590 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 591 "data/maps/DaycarePond/scripts.pory"
	release
	end


# 18 "data/maps/DaycarePond/scripts.pory"
BattleVsMarill_Movement_0:
# 18 "data/maps/DaycarePond/scripts.pory"
	face_player
	step_end

# 188 "data/maps/DaycarePond/scripts.pory"
GoomyInCaveTrigger_Movement_0:
# 188 "data/maps/DaycarePond/scripts.pory"
	face_right
	step_end

# 205 "data/maps/DaycarePond/scripts.pory"
GoomyInCaveTrigger_Movement_1:
# 205 "data/maps/DaycarePond/scripts.pory"
	walk_left
	step_end

# 275 "data/maps/DaycarePond/scripts.pory"
BuizelInCaveTrigger_Movement_0:
# 275 "data/maps/DaycarePond/scripts.pory"
	face_down
	step_end

# 276 "data/maps/DaycarePond/scripts.pory"
BuizelInCaveTrigger_Movement_1:
# 276 "data/maps/DaycarePond/scripts.pory"
	walk_up
	step_end

# 362 "data/maps/DaycarePond/scripts.pory"
SlowpokeInCaveTrigger_Movement_0:
# 362 "data/maps/DaycarePond/scripts.pory"
	face_left
	step_end

# 449 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_0:
# 449 "data/maps/DaycarePond/scripts.pory"
	face_up
	step_end

# 466 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_1:
# 466 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 484 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_2:
# 484 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 484 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 502 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_3:
# 502 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 502 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 502 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 520 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_4:
# 520 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 520 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 520 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 520 "data/maps/DaycarePond/scripts.pory"
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
# 36 "data/maps/DaycarePond/scripts.pory"
	.string "You have gained the ability to\ntransform into Marill!$"

PsyduckDialog_Text_0:
# 51 "data/maps/DaycarePond/scripts.pory"
	.string "Psyduck$"

PsyduckDialog_Text_1:
# 52 "data/maps/DaycarePond/scripts.pory"
	.string "I came to the lake to try to ease\nthis headache...\pIt's the most peaceful biome at\nthe daycare.$"

SprigatitoDialog_Text_0:
# 65 "data/maps/DaycarePond/scripts.pory"
	.string "Sprigatito$"

SprigatitoDialog_Text_1:
# 66 "data/maps/DaycarePond/scripts.pory"
	.string "A Grass_type!\pDon't see many around the lake\nhere.\pPlease take this Egg I found.\n$"

SprigatitoDialog_Text_2:
# 78 "data/maps/DaycarePond/scripts.pory"
	.string "I love it here by the water but\nI hardly see any other\lGrass_types...$"

SprigatitoDialog_Text_3:
# 91 "data/maps/DaycarePond/scripts.pory"
	.string "A Grass_type!\pDon't see many around the lake\nhere.$"

MudkipDialog_Text_0:
# 113 "data/maps/DaycarePond/scripts.pory"
	.string "Mudkip$"

MudkipDialog_Text_1:
# 114 "data/maps/DaycarePond/scripts.pory"
	.string "I hope my trainer comes back\nsoon...\pI miss them.\pI'm supposed to be their first\npartner Pokémon.$"

SeakingDialog_Text_0:
# 123 "data/maps/DaycarePond/scripts.pory"
	.string "Seaking$"

SeakingDialog_Text_1:
# 124 "data/maps/DaycarePond/scripts.pory"
	.string "Everyone talks about how\ndesireable Vaporeon is.\pSeakings need love too...\pDo you know any Dittos?\n$"

QuagsireDialog_Text_0:
# 134 "data/maps/DaycarePond/scripts.pory"
	.string "Quagsire$"

QuagsireDialog_Text_1:
# 135 "data/maps/DaycarePond/scripts.pory"
	.string "The Lake here is so calm.\pDragonair makes sure that we\nkeep the peace here.\pShe believes keeping it mellow\nis the key to EXP.$"

GoomyInCave_Text_0:
# 146 "data/maps/DaycarePond/scripts.pory"
	.string "Goomy$"

GoomyInCave_Text_1:
# 147 "data/maps/DaycarePond/scripts.pory"
	.string "Cool vibes friend.\pKeep on keepin on.\n$"

GoomyInCave_Text_2:
# 161 "data/maps/DaycarePond/scripts.pory"
	.string "Keepin it mellow...\nLet's just have some fun.$"

BuizelInCave_Text_0:
# 229 "data/maps/DaycarePond/scripts.pory"
	.string "Buizel$"

BuizelInCave_Text_1:
# 230 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair likes to be cryptic.\pShe set up this maze so only those\nwho really need something from her\lwill seek her out.\pSome Pokémon really harsh her\nmellow.$"

BuizelInCave_Text_2:
# 244 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair likes to keep the waters\ncalm around here.\pLet's keep it lowkey.\n$"

BuizelInCave_Text_3:
# 251 "data/maps/DaycarePond/scripts.pory"
	.string "She keeps to herself.\nEnsuring maximum relaxation.$"

SlowpokeInCave_Text_0:
# 319 "data/maps/DaycarePond/scripts.pory"
	.string "Slowpoke$"

SlowpokeInCave_Text_1:
# 320 "data/maps/DaycarePond/scripts.pory"
	.string "These bridges are so confusing...\pI've been stuck here for a while,\nbut it's chill.$"

SlowpokeInCave_Text_2:
# 334 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair really likes my vibe.\n$"

SlowpokeInCave_Text_3:
# 341 "data/maps/DaycarePond/scripts.pory"
	.string "Maybe it's cause I'm too slow to\nharsh the vibe.$"

CroagunkInCave_Text_0:
# 408 "data/maps/DaycarePond/scripts.pory"
	.string "Croagunk$"

CroagunkInCave_Text_1:
# 409 "data/maps/DaycarePond/scripts.pory"
	.string "We keep it peaceful here my dude.\pCan't have anyone mess with the\nvibes or we risk losing out on\lgaining EXP.\pHaven't leveled up yet but I'm\nchillin.\pI'm sure it'll come.\n$"

CroagunkInCave_Text_2:
# 423 "data/maps/DaycarePond/scripts.pory"
	.string "Duuuuuude.\nWhat's upppp?$"

CroagunkInCave_Text_3:
# 430 "data/maps/DaycarePond/scripts.pory"
	.string "Right on.\n$"

BattleVsDragonair_Text_0:
# 547 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair$"

BattleVsDragonair_Text_1:
# 548 "data/maps/DaycarePond/scripts.pory"
	.string "You have proven your strength.\pI hope one day you learn that\ngrace will be the way to the EXP.$"

BattleVsDragonair_Text_2:
# 560 "data/maps/DaycarePond/scripts.pory"
	.string "Hello there Ditto.\pYes, I see through your facade.\pMy philosophy to gain EXP has been\nto keep this biome calm.\pI spent my early days in the\ncrashing waterfalls, but gained\lno EXP.\pI found this biome and figured\nI try a different approach.\pYou seem to be causing a ruckus,\nand I have no problem taking you\ldown!$"

BattleVsDragonair_Text_3:
# 572 "data/maps/DaycarePond/scripts.pory"
	.string "You have gained the ability to\ntransform into Dragonair!$"

BattleVsDragonair_Text_4:
# 577 "data/maps/DaycarePond/scripts.pory"
	.string "Very well Ditto.\nGo on.\pLeave this place calmly, with\nthe power to scale roaring\lwaterfalls.$"
