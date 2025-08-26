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
	speakername BattleVsMarill_Text_0
# 42 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsMarill_Text_1, MSGBOX_DEFAULT
# 43 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 44 "data/maps/DaycarePond/scripts.pory"
	fadenewbgm MUS_PMD_LAKE
# 45 "data/maps/DaycarePond/scripts.pory"
	release
	end


PsyduckDialog::
# 52 "data/maps/DaycarePond/scripts.pory"
	lock
# 53 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 54 "data/maps/DaycarePond/scripts.pory"
	speakername PsyduckDialog_Text_0
# 55 "data/maps/DaycarePond/scripts.pory"
	msgbox PsyduckDialog_Text_1, MSGBOX_DEFAULT
# 55 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 56 "data/maps/DaycarePond/scripts.pory"
	release
	end


SprigatitoDialog::
# 62 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_SPRIGATITO_EGG, SprigatitoDialog_1
# 89 "data/maps/DaycarePond/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_LURANTIS
	goto_if_eq SprigatitoDialog_7
# 101 "data/maps/DaycarePond/scripts.pory"
	lock
# 102 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 103 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 104 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_2, MSGBOX_DEFAULT
# 105 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 106 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_1:
# 64 "data/maps/DaycarePond/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_LURANTIS
	goto_if_eq SprigatitoDialog_4
# 78 "data/maps/DaycarePond/scripts.pory"
	lock
# 79 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 80 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 81 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_2, MSGBOX_DEFAULT
# 82 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 83 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_4:
# 66 "data/maps/DaycarePond/scripts.pory"
	lock
# 67 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 68 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 69 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_1, MSGBOX_DEFAULT
# 70 "data/maps/DaycarePond/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 71 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SPRIGATITO_EGG
# 72 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 73 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_7:
# 91 "data/maps/DaycarePond/scripts.pory"
	lock
# 92 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 93 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 94 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_3, MSGBOX_DEFAULT
# 95 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 96 "data/maps/DaycarePond/scripts.pory"
	release
	end


MudkipDialog::
# 114 "data/maps/DaycarePond/scripts.pory"
	lock
# 115 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 116 "data/maps/DaycarePond/scripts.pory"
	speakername MudkipDialog_Text_0
# 117 "data/maps/DaycarePond/scripts.pory"
	msgbox MudkipDialog_Text_1, MSGBOX_DEFAULT
# 118 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 119 "data/maps/DaycarePond/scripts.pory"
	release
	end


SeakingDialog::
# 124 "data/maps/DaycarePond/scripts.pory"
	lock
# 125 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 126 "data/maps/DaycarePond/scripts.pory"
	speakername SeakingDialog_Text_0
# 127 "data/maps/DaycarePond/scripts.pory"
	msgbox SeakingDialog_Text_1, MSGBOX_DEFAULT
# 128 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 129 "data/maps/DaycarePond/scripts.pory"
	release
	end


QuagsireDialog::
# 135 "data/maps/DaycarePond/scripts.pory"
	lock
# 136 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 137 "data/maps/DaycarePond/scripts.pory"
	speakername QuagsireDialog_Text_0
# 138 "data/maps/DaycarePond/scripts.pory"
	msgbox QuagsireDialog_Text_1, MSGBOX_DEFAULT
# 139 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 140 "data/maps/DaycarePond/scripts.pory"
	release
	end


GoomyInCave::
# 145 "data/maps/DaycarePond/scripts.pory"
	lock
# 146 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 147 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_GOOMY_BATTLE, GoomyInCave_1
# 157 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, BattleVsMarill_Movement_0
# 158 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 159 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 160 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, Common_Movement_ExclamationMark
# 161 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 162 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 163 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 164 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 165 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 166 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 167 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 168 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCave_4
	return

GoomyInCave_1:
# 149 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 150 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 151 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 152 "data/maps/DaycarePond/scripts.pory"
	release
	end

GoomyInCave_4:
# 170 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 171 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 172 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 173 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 174 "data/maps/DaycarePond/scripts.pory"
	release
	end


GoomyInCaveTrigger::
# 181 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_GOOMY_BATTLE, GoomyInCaveTrigger_1
	return

GoomyInCaveTrigger_1:
# 183 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 184 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, Common_Movement_ExclamationMark
# 185 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 186 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 187 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 188 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_1
# 190 "data/maps/DaycarePond/scripts.pory"
	case 16, GoomyInCaveTrigger_4
# 206 "data/maps/DaycarePond/scripts.pory"
	case 15, GoomyInCaveTrigger_5
	return

GoomyInCaveTrigger_4:
# 191 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 192 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 193 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 194 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 195 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 196 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 197 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCaveTrigger_6
	return

GoomyInCaveTrigger_5:
# 207 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 208 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, GoomyInCaveTrigger_Movement_1
# 209 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 210 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 211 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 212 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 213 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 214 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCaveTrigger_8
	return

GoomyInCaveTrigger_6:
# 199 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 200 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 201 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 202 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 203 "data/maps/DaycarePond/scripts.pory"
	release
	end

GoomyInCaveTrigger_8:
# 216 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 217 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 218 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 219 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 220 "data/maps/DaycarePond/scripts.pory"
	release
	end


BuizelInCave::
# 228 "data/maps/DaycarePond/scripts.pory"
	lock
# 229 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 230 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_BUIZEL_BATTLE, BuizelInCave_1
# 240 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 241 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 242 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 243 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, Common_Movement_ExclamationMark
# 244 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 245 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 246 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 247 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 248 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 249 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 250 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 251 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCave_4
	return

BuizelInCave_1:
# 232 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 233 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_1, MSGBOX_DEFAULT
# 234 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 235 "data/maps/DaycarePond/scripts.pory"
	release
	end

BuizelInCave_4:
# 253 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 254 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 255 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 256 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 257 "data/maps/DaycarePond/scripts.pory"
	release
	end


BuizelInCaveTrigger::
# 264 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_BUIZEL_BATTLE, BuizelInCaveTrigger_1
	return

BuizelInCaveTrigger_1:
# 266 "data/maps/DaycarePond/scripts.pory"
	lock
# 267 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 268 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, Common_Movement_ExclamationMark
# 269 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 270 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 271 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 272 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_2
# 274 "data/maps/DaycarePond/scripts.pory"
	case 34, BuizelInCaveTrigger_4
# 295 "data/maps/DaycarePond/scripts.pory"
	case 35, BuizelInCaveTrigger_5
	return

BuizelInCaveTrigger_4:
# 275 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 276 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 278 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, BuizelInCaveTrigger_Movement_0
# 279 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BuizelInCaveTrigger_Movement_1
# 280 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 281 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 282 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 283 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 284 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 285 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 286 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCaveTrigger_6
	return

BuizelInCaveTrigger_5:
# 296 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 297 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 298 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, BuizelInCaveTrigger_Movement_0
# 299 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 300 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 301 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 302 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 303 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 304 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCaveTrigger_8
	return

BuizelInCaveTrigger_6:
# 288 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 289 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 290 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 291 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 292 "data/maps/DaycarePond/scripts.pory"
	release
	end

BuizelInCaveTrigger_8:
# 306 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 307 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 308 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 309 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 310 "data/maps/DaycarePond/scripts.pory"
	release
	end


SlowpokeInCave::
# 318 "data/maps/DaycarePond/scripts.pory"
	lock
# 319 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 320 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_SLOWPOKE_BATTLE, SlowpokeInCave_1
# 330 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, BattleVsMarill_Movement_0
# 331 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 332 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 333 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 334 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 335 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 336 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 337 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 338 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 339 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 340 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 341 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCave_4
	return

SlowpokeInCave_1:
# 322 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 323 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_1, MSGBOX_DEFAULT
# 324 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 325 "data/maps/DaycarePond/scripts.pory"
	release
	end

SlowpokeInCave_4:
# 343 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 344 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 345 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 346 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 347 "data/maps/DaycarePond/scripts.pory"
	release
	end


SlowpokeInCaveTrigger::
# 353 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_SLOWPOKE_BATTLE, SlowpokeInCaveTrigger_1
	return

SlowpokeInCaveTrigger_1:
# 355 "data/maps/DaycarePond/scripts.pory"
	lock
# 356 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 357 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 358 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_1
# 360 "data/maps/DaycarePond/scripts.pory"
	case 28, SlowpokeInCaveTrigger_4
# 381 "data/maps/DaycarePond/scripts.pory"
	case 26, SlowpokeInCaveTrigger_5
	return

SlowpokeInCaveTrigger_4:
# 361 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 362 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 363 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, GoomyInCaveTrigger_Movement_0
# 364 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 365 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, SlowpokeInCaveTrigger_Movement_0
# 366 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 367 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 368 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 369 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 370 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 371 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 372 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCaveTrigger_6
	return

SlowpokeInCaveTrigger_5:
# 382 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 383 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 384 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, SlowpokeInCaveTrigger_Movement_0
# 385 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 386 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 387 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 388 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 389 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 390 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 391 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 392 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 393 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCaveTrigger_8
	return

SlowpokeInCaveTrigger_6:
# 374 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 375 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 376 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 377 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 378 "data/maps/DaycarePond/scripts.pory"
	release
	end

SlowpokeInCaveTrigger_8:
# 395 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 396 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 397 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 398 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 399 "data/maps/DaycarePond/scripts.pory"
	release
	end


CroagunkInCave::
# 407 "data/maps/DaycarePond/scripts.pory"
	lock
# 408 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 409 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_CROAGUNK_BATTLE, CroagunkInCave_1
# 419 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, BattleVsMarill_Movement_0
# 420 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 421 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 422 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, Common_Movement_ExclamationMark
# 423 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 424 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 425 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 426 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 427 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 428 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 429 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 430 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCave_4
	return

CroagunkInCave_1:
# 411 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 412 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_1, MSGBOX_DEFAULT
# 413 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 414 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCave_4:
# 432 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 433 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 434 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 435 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 436 "data/maps/DaycarePond/scripts.pory"
	release
	end


CroagunkInCaveTrigger::
# 442 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_CROAGUNK_BATTLE, CroagunkInCaveTrigger_1
	return

CroagunkInCaveTrigger_1:
# 444 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 445 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, Common_Movement_ExclamationMark
# 446 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 447 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 448 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 449 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_2
# 451 "data/maps/DaycarePond/scripts.pory"
	case 3, CroagunkInCaveTrigger_4
# 467 "data/maps/DaycarePond/scripts.pory"
	case 4, CroagunkInCaveTrigger_5
# 485 "data/maps/DaycarePond/scripts.pory"
	case 5, CroagunkInCaveTrigger_6
# 503 "data/maps/DaycarePond/scripts.pory"
	case 6, CroagunkInCaveTrigger_7
# 521 "data/maps/DaycarePond/scripts.pory"
	case 7, CroagunkInCaveTrigger_8
	return

CroagunkInCaveTrigger_4:
# 452 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 453 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 454 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 455 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 456 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 457 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 458 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_9
	return

CroagunkInCaveTrigger_5:
# 468 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 469 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_1
# 470 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 471 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 472 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 473 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 474 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 475 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 476 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_11
	return

CroagunkInCaveTrigger_6:
# 486 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 487 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_2
# 488 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 489 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 490 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 491 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 492 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 493 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 494 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_13
	return

CroagunkInCaveTrigger_7:
# 504 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 505 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_3
# 506 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 507 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 508 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 509 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 510 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 511 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 512 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_15
	return

CroagunkInCaveTrigger_8:
# 522 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 523 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_4
# 524 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 525 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 526 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 527 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 528 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 529 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 530 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_17
	return

CroagunkInCaveTrigger_9:
# 460 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 461 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 462 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 463 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 464 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_11:
# 478 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 479 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 480 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 481 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 482 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_13:
# 496 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 497 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 498 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 499 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 500 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_15:
# 514 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 515 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 516 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 517 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 518 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_17:
# 532 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 533 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 534 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 535 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 536 "data/maps/DaycarePond/scripts.pory"
	release
	end


BattleVsDragonair::
# 544 "data/maps/DaycarePond/scripts.pory"
	lock
# 546 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_TRANS_DRAGONAIR, BattleVsDragonair_2
# 556 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 557 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, BattleVsMarill_Movement_0
# 558 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 559 "data/maps/DaycarePond/scripts.pory"
	playse SE_PIN
# 560 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, Common_Movement_ExclamationMark
# 561 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 562 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 563 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_2, MSGBOX_AUTOCLOSE
# 564 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_DRAGONAIR, 25, move1 = MOVE_OUTRAGE, move2 = MOVE_WATERFALL, move3 = MOVE_IRON_HEAD, move4 = MOVE_SAFEGUARD
# 565 "data/maps/DaycarePond/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 566 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 567 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 568 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsDragonair_4
	return

BattleVsDragonair_2:
# 548 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, BattleVsMarill_Movement_0
# 549 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 550 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 551 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_1, MSGBOX_DEFAULT
# 552 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 553 "data/maps/DaycarePond/scripts.pory"
	release
	end

BattleVsDragonair_4:
# 570 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 571 "data/maps/DaycarePond/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 572 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_TRANS_DRAGONAIR
# 573 "data/maps/DaycarePond/scripts.pory"
	dittotransform SPECIES_DRAGONAIR
# 574 "data/maps/DaycarePond/scripts.pory"
	playse MUS_LEVEL_UP
# 575 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_3, MSGBOX_DEFAULT
# 576 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 577 "data/maps/DaycarePond/scripts.pory"
	dittotransform VAR_TEMP_0
# 578 "data/maps/DaycarePond/scripts.pory"
	givemon SPECIES_DRAGONAIR, 25, move1 = MOVE_OUTRAGE, move2 = MOVE_WATERFALL, move3 = MOVE_IRON_HEAD, move4 = MOVE_SAFEGUARD
# 579 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 580 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_4, MSGBOX_DEFAULT
# 581 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 582 "data/maps/DaycarePond/scripts.pory"
	fadenewbgm MUS_PMD_LAKE
# 583 "data/maps/DaycarePond/scripts.pory"
	release
	end


DaycarePond_FindLuckyEgg::
# 591 "data/maps/DaycarePond/scripts.pory"
	lock
# 592 "data/maps/DaycarePond/scripts.pory"
	finditem ITEM_LUCKY_EGG
# 593 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 594 "data/maps/DaycarePond/scripts.pory"
	release
	end


# 18 "data/maps/DaycarePond/scripts.pory"
BattleVsMarill_Movement_0:
# 18 "data/maps/DaycarePond/scripts.pory"
	face_player
	step_end

# 191 "data/maps/DaycarePond/scripts.pory"
GoomyInCaveTrigger_Movement_0:
# 191 "data/maps/DaycarePond/scripts.pory"
	face_right
	step_end

# 208 "data/maps/DaycarePond/scripts.pory"
GoomyInCaveTrigger_Movement_1:
# 208 "data/maps/DaycarePond/scripts.pory"
	walk_left
	step_end

# 278 "data/maps/DaycarePond/scripts.pory"
BuizelInCaveTrigger_Movement_0:
# 278 "data/maps/DaycarePond/scripts.pory"
	face_down
	step_end

# 279 "data/maps/DaycarePond/scripts.pory"
BuizelInCaveTrigger_Movement_1:
# 279 "data/maps/DaycarePond/scripts.pory"
	walk_up
	step_end

# 365 "data/maps/DaycarePond/scripts.pory"
SlowpokeInCaveTrigger_Movement_0:
# 365 "data/maps/DaycarePond/scripts.pory"
	face_left
	step_end

# 452 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_0:
# 452 "data/maps/DaycarePond/scripts.pory"
	face_up
	step_end

# 469 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_1:
# 469 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 487 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_2:
# 487 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 487 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 505 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_3:
# 505 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 505 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 505 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 523 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_4:
# 523 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 523 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 523 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 523 "data/maps/DaycarePond/scripts.pory"
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
# 54 "data/maps/DaycarePond/scripts.pory"
	.string "Psyduck$"

PsyduckDialog_Text_1:
# 55 "data/maps/DaycarePond/scripts.pory"
	.string "I came to the lake to try to ease\nthis headache...\pIt's the most peaceful biome at\nthe daycare.$"

SprigatitoDialog_Text_0:
# 68 "data/maps/DaycarePond/scripts.pory"
	.string "Sprigatito$"

SprigatitoDialog_Text_1:
# 69 "data/maps/DaycarePond/scripts.pory"
	.string "A Grass_type!\pDon't see many around the lake\nhere.\pPlease take this Egg I found.\n$"

SprigatitoDialog_Text_2:
# 81 "data/maps/DaycarePond/scripts.pory"
	.string "I love it here by the water but\nI hardly see any other\lGrass_types...$"

SprigatitoDialog_Text_3:
# 94 "data/maps/DaycarePond/scripts.pory"
	.string "A Grass_type!\pDon't see many around the lake\nhere.$"

MudkipDialog_Text_0:
# 116 "data/maps/DaycarePond/scripts.pory"
	.string "Mudkip$"

MudkipDialog_Text_1:
# 117 "data/maps/DaycarePond/scripts.pory"
	.string "I hope my trainer comes back\nsoon...\pI miss them.\pI'm supposed to be their first\npartner Pokémon.$"

SeakingDialog_Text_0:
# 126 "data/maps/DaycarePond/scripts.pory"
	.string "Seaking$"

SeakingDialog_Text_1:
# 127 "data/maps/DaycarePond/scripts.pory"
	.string "Everyone talks about how\ndesireable Vaporeon is.\pSeakings need love too...\pDo you know any Dittos?\n$"

QuagsireDialog_Text_0:
# 137 "data/maps/DaycarePond/scripts.pory"
	.string "Quagsire$"

QuagsireDialog_Text_1:
# 138 "data/maps/DaycarePond/scripts.pory"
	.string "The Lake here is so calm.\pDragonair makes sure that we\nkeep the peace here.\pShe believes keeping it mellow\nis the key to EXP.$"

GoomyInCave_Text_0:
# 149 "data/maps/DaycarePond/scripts.pory"
	.string "Goomy$"

GoomyInCave_Text_1:
# 150 "data/maps/DaycarePond/scripts.pory"
	.string "Cool vibes friend.\pKeep on keepin on.\n$"

GoomyInCave_Text_2:
# 164 "data/maps/DaycarePond/scripts.pory"
	.string "Keepin it mellow...\nLet's just have some fun.$"

BuizelInCave_Text_0:
# 232 "data/maps/DaycarePond/scripts.pory"
	.string "Buizel$"

BuizelInCave_Text_1:
# 233 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair likes to be cryptic.\pShe set up this maze so only those\nwho really need something from her\lwill seek her out.\pSome Pokémon really harsh her\nmellow.$"

BuizelInCave_Text_2:
# 247 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair likes to keep the waters\ncalm around here.\pLet's keep it lowkey.\n$"

BuizelInCave_Text_3:
# 254 "data/maps/DaycarePond/scripts.pory"
	.string "She keeps to herself.\nEnsuring maximum relaxation.$"

SlowpokeInCave_Text_0:
# 322 "data/maps/DaycarePond/scripts.pory"
	.string "Slowpoke$"

SlowpokeInCave_Text_1:
# 323 "data/maps/DaycarePond/scripts.pory"
	.string "These bridges are so confusing...\pI've been stuck here for a while,\nbut it's chill.$"

SlowpokeInCave_Text_2:
# 337 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair really likes my vibe.\n$"

SlowpokeInCave_Text_3:
# 344 "data/maps/DaycarePond/scripts.pory"
	.string "Maybe it's cause I'm too slow to\nharsh the vibe.$"

CroagunkInCave_Text_0:
# 411 "data/maps/DaycarePond/scripts.pory"
	.string "Croagunk$"

CroagunkInCave_Text_1:
# 412 "data/maps/DaycarePond/scripts.pory"
	.string "We keep it peaceful here my dude.\pCan't have anyone mess with the\nvibes or we risk losing out on\lgaining EXP.\pHaven't leveled up yet but I'm\nchillin.\pI'm sure it'll come.\n$"

CroagunkInCave_Text_2:
# 426 "data/maps/DaycarePond/scripts.pory"
	.string "Duuuuuude.\nWhat's upppp?$"

CroagunkInCave_Text_3:
# 433 "data/maps/DaycarePond/scripts.pory"
	.string "Right on.\n$"

BattleVsDragonair_Text_0:
# 550 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair$"

BattleVsDragonair_Text_1:
# 551 "data/maps/DaycarePond/scripts.pory"
	.string "You have proven your strength.\pI hope one day you learn that\ngrace will be the way to the EXP.$"

BattleVsDragonair_Text_2:
# 563 "data/maps/DaycarePond/scripts.pory"
	.string "Hello there Ditto.\pYes, I see through your facade.\pMy philosophy to gain EXP has been\nto keep this biome calm.\pI spent my early days in the\ncrashing waterfalls, but gained\lno EXP.\pI found this biome and figured\nI try a different approach.\pYou seem to be causing a ruckus,\nand I have no problem taking you\ldown!$"

BattleVsDragonair_Text_3:
# 575 "data/maps/DaycarePond/scripts.pory"
	.string "You have gained the ability to\ntransform into Dragonair!$"

BattleVsDragonair_Text_4:
# 580 "data/maps/DaycarePond/scripts.pory"
	.string "Very well Ditto.\nGo on.\pLeave this place calmly, with\nthe power to scale roaring\lwaterfalls.$"
