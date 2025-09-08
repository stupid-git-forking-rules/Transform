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
	createfieldmugshot MUGSHOT_PSYDUCK, EMOTE_HAPPY
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
# 118 "data/maps/DaycarePond/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_LURANTIS
	goto_if_eq SprigatitoDialog_7
# 132 "data/maps/DaycarePond/scripts.pory"
	lock
# 133 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 134 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 135 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SPRIGATITO, EMOTE_NORMAL
# 136 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_2, MSGBOX_DEFAULT
# 137 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 138 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 139 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_1:
# 89 "data/maps/DaycarePond/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_LURANTIS
	goto_if_eq SprigatitoDialog_4
# 105 "data/maps/DaycarePond/scripts.pory"
	lock
# 106 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 107 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 108 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SPRIGATITO, EMOTE_NORMAL
# 109 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_2, MSGBOX_DEFAULT
# 110 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 111 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 112 "data/maps/DaycarePond/scripts.pory"
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
	giveitem ITEM_LUCKY_EGG
# 97 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SPRIGATITO_EGG
# 98 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 99 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 100 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_7:
# 120 "data/maps/DaycarePond/scripts.pory"
	lock
# 121 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 122 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 123 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SPRIGATITO, EMOTE_ELATED
# 124 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_3, MSGBOX_DEFAULT
# 125 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 126 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 127 "data/maps/DaycarePond/scripts.pory"
	release
	end


MudkipDialog::
# 147 "data/maps/DaycarePond/scripts.pory"
	lock
# 148 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 149 "data/maps/DaycarePond/scripts.pory"
	speakername MudkipDialog_Text_0
# 150 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_MUDKIP, EMOTE_ANGRY
# 151 "data/maps/DaycarePond/scripts.pory"
	msgbox MudkipDialog_Text_1, MSGBOX_NPC
# 152 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 153 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 154 "data/maps/DaycarePond/scripts.pory"
	release
	end


SeakingDialog::
# 159 "data/maps/DaycarePond/scripts.pory"
	lock
# 160 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 161 "data/maps/DaycarePond/scripts.pory"
	speakername SeakingDialog_Text_0
# 162 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SEAKING, EMOTE_NORMAL
# 163 "data/maps/DaycarePond/scripts.pory"
	msgbox SeakingDialog_Text_1, MSGBOX_NPC
# 164 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 165 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 166 "data/maps/DaycarePond/scripts.pory"
	release
	end


QuagsireDialog::
# 172 "data/maps/DaycarePond/scripts.pory"
	lock
# 173 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 174 "data/maps/DaycarePond/scripts.pory"
	speakername QuagsireDialog_Text_0
# 175 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_QUAGSIRE, EMOTE_HAPPY
# 176 "data/maps/DaycarePond/scripts.pory"
	msgbox QuagsireDialog_Text_1, MSGBOX_NPC
# 177 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 178 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 179 "data/maps/DaycarePond/scripts.pory"
	release
	end


GoomyInCave::
# 184 "data/maps/DaycarePond/scripts.pory"
	lock
# 185 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 186 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_GOOMY_BATTLE, GoomyInCave_1
# 198 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, BattleVsMarill_Movement_0
# 199 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 200 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 201 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, Common_Movement_ExclamationMark
# 202 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 203 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 204 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 205 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 206 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 207 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 208 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 209 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 210 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 211 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCave_4
	return

GoomyInCave_1:
# 188 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 189 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 190 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 191 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 192 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 193 "data/maps/DaycarePond/scripts.pory"
	release
	end

GoomyInCave_4:
# 213 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 214 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 215 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 216 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 217 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 218 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 219 "data/maps/DaycarePond/scripts.pory"
	release
	end


GoomyInCaveTrigger::
# 226 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_GOOMY_BATTLE, GoomyInCaveTrigger_1
	return

GoomyInCaveTrigger_1:
# 228 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 229 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, Common_Movement_ExclamationMark
# 230 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 231 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 232 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 233 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_1
# 235 "data/maps/DaycarePond/scripts.pory"
	case 16, GoomyInCaveTrigger_4
# 255 "data/maps/DaycarePond/scripts.pory"
	case 15, GoomyInCaveTrigger_5
	return

GoomyInCaveTrigger_4:
# 236 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 237 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 238 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 239 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 240 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 241 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 242 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 243 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 244 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCaveTrigger_6
	return

GoomyInCaveTrigger_5:
# 256 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 257 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, GoomyInCaveTrigger_Movement_1
# 258 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 259 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 260 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 261 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 262 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 263 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 264 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 265 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 266 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCaveTrigger_8
	return

GoomyInCaveTrigger_6:
# 246 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 247 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 248 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 249 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 250 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 251 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 252 "data/maps/DaycarePond/scripts.pory"
	release
	end

GoomyInCaveTrigger_8:
# 268 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 269 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 270 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 271 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 272 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 273 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 274 "data/maps/DaycarePond/scripts.pory"
	release
	end


BuizelInCave::
# 282 "data/maps/DaycarePond/scripts.pory"
	lock
# 283 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 284 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_BUIZEL_BATTLE, BuizelInCave_1
# 296 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 297 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 298 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 299 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, Common_Movement_ExclamationMark
# 300 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 301 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 302 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 303 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 304 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 305 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 306 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 307 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 308 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 309 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCave_4
	return

BuizelInCave_1:
# 286 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 287 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 288 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_1, MSGBOX_DEFAULT
# 289 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 290 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 291 "data/maps/DaycarePond/scripts.pory"
	release
	end

BuizelInCave_4:
# 311 "data/maps/DaycarePond/scripts.pory"
	lock
# 312 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 313 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 314 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 315 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 316 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 317 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 318 "data/maps/DaycarePond/scripts.pory"
	release
	end


BuizelInCaveTrigger::
# 325 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_BUIZEL_BATTLE, BuizelInCaveTrigger_1
	return

BuizelInCaveTrigger_1:
# 327 "data/maps/DaycarePond/scripts.pory"
	lock
# 328 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 329 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, Common_Movement_ExclamationMark
# 330 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 331 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 332 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 333 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_2
# 335 "data/maps/DaycarePond/scripts.pory"
	case 34, BuizelInCaveTrigger_4
# 360 "data/maps/DaycarePond/scripts.pory"
	case 35, BuizelInCaveTrigger_5
	return

BuizelInCaveTrigger_4:
# 336 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 337 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 338 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, BuizelInCaveTrigger_Movement_0
# 339 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BuizelInCaveTrigger_Movement_1
# 340 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 341 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 342 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 343 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 344 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 345 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 346 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 347 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 348 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCaveTrigger_6
	return

BuizelInCaveTrigger_5:
# 361 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 362 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 363 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, BuizelInCaveTrigger_Movement_0
# 364 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 365 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 366 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 367 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 368 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 369 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 370 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 371 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCaveTrigger_8
	return

BuizelInCaveTrigger_6:
# 350 "data/maps/DaycarePond/scripts.pory"
	lock
# 351 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 352 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 353 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 354 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 355 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 356 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 357 "data/maps/DaycarePond/scripts.pory"
	release
	end

BuizelInCaveTrigger_8:
# 373 "data/maps/DaycarePond/scripts.pory"
	lock
# 374 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 375 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 376 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 377 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 378 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 379 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 380 "data/maps/DaycarePond/scripts.pory"
	release
	end


SlowpokeInCave::
# 388 "data/maps/DaycarePond/scripts.pory"
	lock
# 389 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 390 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_SLOWPOKE_BATTLE, SlowpokeInCave_1
# 402 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, BattleVsMarill_Movement_0
# 403 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 404 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 405 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 406 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 407 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 408 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 409 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 410 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 411 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 412 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 413 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 414 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 415 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCave_4
	return

SlowpokeInCave_1:
# 392 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 393 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 394 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_1, MSGBOX_DEFAULT
# 395 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 396 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 397 "data/maps/DaycarePond/scripts.pory"
	release
	end

SlowpokeInCave_4:
# 417 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 418 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 419 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 420 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 421 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 422 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 423 "data/maps/DaycarePond/scripts.pory"
	release
	end


SlowpokeInCaveTrigger::
# 429 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_SLOWPOKE_BATTLE, SlowpokeInCaveTrigger_1
	return

SlowpokeInCaveTrigger_1:
# 431 "data/maps/DaycarePond/scripts.pory"
	lock
# 432 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 433 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 434 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_1
# 436 "data/maps/DaycarePond/scripts.pory"
	case 28, SlowpokeInCaveTrigger_4
# 462 "data/maps/DaycarePond/scripts.pory"
	case 26, SlowpokeInCaveTrigger_5
	return

SlowpokeInCaveTrigger_4:
# 437 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 438 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 439 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, GoomyInCaveTrigger_Movement_0
# 440 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 441 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, SlowpokeInCaveTrigger_Movement_0
# 442 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 443 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 444 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 445 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 446 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 447 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 448 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 449 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 450 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCaveTrigger_6
	return

SlowpokeInCaveTrigger_5:
# 463 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 464 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 465 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, SlowpokeInCaveTrigger_Movement_0
# 466 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 467 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 468 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 469 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 470 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 471 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 472 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 473 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 474 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 475 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 476 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCaveTrigger_8
	return

SlowpokeInCaveTrigger_6:
# 452 "data/maps/DaycarePond/scripts.pory"
	lock
# 453 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 454 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 455 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 456 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 457 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 458 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 459 "data/maps/DaycarePond/scripts.pory"
	release
	end

SlowpokeInCaveTrigger_8:
# 478 "data/maps/DaycarePond/scripts.pory"
	lock
# 479 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 480 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 481 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 482 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 483 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 484 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 485 "data/maps/DaycarePond/scripts.pory"
	release
	end


CroagunkInCave::
# 493 "data/maps/DaycarePond/scripts.pory"
	lock
# 494 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 495 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_CROAGUNK_BATTLE, CroagunkInCave_1
# 507 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, BattleVsMarill_Movement_0
# 508 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 509 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 510 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, Common_Movement_ExclamationMark
# 511 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 512 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 513 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 514 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 515 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 516 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 517 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 518 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 519 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 520 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCave_4
	return

CroagunkInCave_1:
# 497 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 498 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 499 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_1, MSGBOX_DEFAULT
# 500 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 501 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 502 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCave_4:
# 522 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 523 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 524 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 525 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 526 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 527 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 528 "data/maps/DaycarePond/scripts.pory"
	release
	end


CroagunkInCaveTrigger::
# 534 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_CROAGUNK_BATTLE, CroagunkInCaveTrigger_1
	return

CroagunkInCaveTrigger_1:
# 536 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 537 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, Common_Movement_ExclamationMark
# 538 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 539 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 540 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 541 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_2
# 543 "data/maps/DaycarePond/scripts.pory"
	case 3, CroagunkInCaveTrigger_4
# 563 "data/maps/DaycarePond/scripts.pory"
	case 4, CroagunkInCaveTrigger_5
# 585 "data/maps/DaycarePond/scripts.pory"
	case 5, CroagunkInCaveTrigger_6
# 607 "data/maps/DaycarePond/scripts.pory"
	case 6, CroagunkInCaveTrigger_7
# 629 "data/maps/DaycarePond/scripts.pory"
	case 7, CroagunkInCaveTrigger_8
	return

CroagunkInCaveTrigger_4:
# 544 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 545 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 546 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 547 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 548 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 549 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 550 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 551 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 552 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_9
	return

CroagunkInCaveTrigger_5:
# 564 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 565 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_1
# 566 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 567 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 568 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 569 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 570 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 571 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 572 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 573 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 574 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_11
	return

CroagunkInCaveTrigger_6:
# 586 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 587 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_2
# 588 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 589 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 590 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 591 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 592 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 593 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 594 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 595 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 596 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_13
	return

CroagunkInCaveTrigger_7:
# 608 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 609 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_3
# 610 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 611 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 612 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 613 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 614 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 615 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 616 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 617 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 618 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_15
	return

CroagunkInCaveTrigger_8:
# 630 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 631 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_4
# 632 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 633 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 634 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 635 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 636 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 637 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 638 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 639 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 640 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_17
	return

CroagunkInCaveTrigger_9:
# 554 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 555 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 556 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 557 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 558 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 559 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 560 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_11:
# 576 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 577 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 578 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 579 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 580 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 581 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 582 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_13:
# 598 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 599 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 600 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 601 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 602 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 603 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 604 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_15:
# 620 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 621 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 622 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 623 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 624 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 625 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 626 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_17:
# 642 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 643 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 644 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 645 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 646 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 647 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 648 "data/maps/DaycarePond/scripts.pory"
	release
	end


BattleVsDragonair::
# 656 "data/maps/DaycarePond/scripts.pory"
	lock
# 658 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_TRANS_DRAGONAIR, BattleVsDragonair_2
# 670 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 671 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, BattleVsMarill_Movement_0
# 672 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 673 "data/maps/DaycarePond/scripts.pory"
	playse SE_PIN
# 674 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, Common_Movement_ExclamationMark
# 675 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 676 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 677 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_DRAGONAIR, EMOTE_NORMAL
# 678 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_2, MSGBOX_AUTOCLOSE
# 679 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 680 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_DRAGONAIR, 25, move1 = MOVE_OUTRAGE, move2 = MOVE_WATERFALL, move3 = MOVE_IRON_HEAD, move4 = MOVE_SAFEGUARD
# 681 "data/maps/DaycarePond/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 0, 1, 0, 0
# 682 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 683 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 684 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsDragonair_4
	return

BattleVsDragonair_2:
# 660 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, BattleVsMarill_Movement_0
# 661 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 662 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 663 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_DRAGONAIR, EMOTE_NORMAL
# 664 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_1, MSGBOX_DEFAULT
# 665 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 666 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 667 "data/maps/DaycarePond/scripts.pory"
	release
	end

BattleVsDragonair_4:
# 686 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 687 "data/maps/DaycarePond/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 688 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_TRANS_DRAGONAIR
# 689 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_MUDKIP_PICKED_UP
# 690 "data/maps/DaycarePond/scripts.pory"
	delay 15
# 691 "data/maps/DaycarePond/scripts.pory"
	dittotransform SPECIES_DRAGONAIR
# 692 "data/maps/DaycarePond/scripts.pory"
	playse MUS_LEVEL_UP
# 693 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_3, MSGBOX_DEFAULT
# 694 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 695 "data/maps/DaycarePond/scripts.pory"
	dittotransform VAR_TEMP_0
# 696 "data/maps/DaycarePond/scripts.pory"
	givemon SPECIES_DRAGONAIR, 25, move1 = MOVE_OUTRAGE, move2 = MOVE_WATERFALL, move3 = MOVE_IRON_HEAD, move4 = MOVE_SAFEGUARD
# 697 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 698 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_DRAGONAIR, EMOTE_HAPPY
# 699 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_4, MSGBOX_DEFAULT
# 700 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 701 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 702 "data/maps/DaycarePond/scripts.pory"
	fadenewbgm MUS_PMD_LAKE
# 703 "data/maps/DaycarePond/scripts.pory"
	release
	end


DaycarePond_FindLuckyEgg::
# 711 "data/maps/DaycarePond/scripts.pory"
	lock
# 712 "data/maps/DaycarePond/scripts.pory"
	finditem ITEM_LUCKY_EGG
# 713 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 714 "data/maps/DaycarePond/scripts.pory"
	release
	end


# 20 "data/maps/DaycarePond/scripts.pory"
BattleVsMarill_Movement_0:
# 20 "data/maps/DaycarePond/scripts.pory"
	face_player
	step_end

# 236 "data/maps/DaycarePond/scripts.pory"
GoomyInCaveTrigger_Movement_0:
# 236 "data/maps/DaycarePond/scripts.pory"
	face_right
	step_end

# 257 "data/maps/DaycarePond/scripts.pory"
GoomyInCaveTrigger_Movement_1:
# 257 "data/maps/DaycarePond/scripts.pory"
	walk_left
	step_end

# 338 "data/maps/DaycarePond/scripts.pory"
BuizelInCaveTrigger_Movement_0:
# 338 "data/maps/DaycarePond/scripts.pory"
	face_down
	step_end

# 339 "data/maps/DaycarePond/scripts.pory"
BuizelInCaveTrigger_Movement_1:
# 339 "data/maps/DaycarePond/scripts.pory"
	walk_up
	step_end

# 441 "data/maps/DaycarePond/scripts.pory"
SlowpokeInCaveTrigger_Movement_0:
# 441 "data/maps/DaycarePond/scripts.pory"
	face_left
	step_end

# 544 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_0:
# 544 "data/maps/DaycarePond/scripts.pory"
	face_up
	step_end

# 565 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_1:
# 565 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 587 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_2:
# 587 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 587 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 609 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_3:
# 609 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 609 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 609 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 631 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_4:
# 631 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 631 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 631 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 631 "data/maps/DaycarePond/scripts.pory"
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
# 109 "data/maps/DaycarePond/scripts.pory"
	.string "I love it here by the water but\nI hardly see any other\lGrass_types...$"

SprigatitoDialog_Text_3:
# 124 "data/maps/DaycarePond/scripts.pory"
	.string "A Grass_type!\pDon't see many around the lake\nhere.$"

MudkipDialog_Text_0:
# 149 "data/maps/DaycarePond/scripts.pory"
	.string "Mudkip$"

MudkipDialog_Text_1:
# 151 "data/maps/DaycarePond/scripts.pory"
	.string "I hope my trainer comes back\nsoon...\pI miss them.\pI'm supposed to be their first\npartner Pokémon.$"

SeakingDialog_Text_0:
# 161 "data/maps/DaycarePond/scripts.pory"
	.string "Seaking$"

SeakingDialog_Text_1:
# 163 "data/maps/DaycarePond/scripts.pory"
	.string "Everyone talks about how\ncool Vaporeon is.\pSeakings deserve attention too...\n$"

QuagsireDialog_Text_0:
# 174 "data/maps/DaycarePond/scripts.pory"
	.string "Quagsire$"

QuagsireDialog_Text_1:
# 176 "data/maps/DaycarePond/scripts.pory"
	.string "The Lake here is so calm.\pDragonair makes sure that we\nkeep the peace here.\pShe believes keeping it mellow\nis the key to EXP.$"

GoomyInCave_Text_0:
# 188 "data/maps/DaycarePond/scripts.pory"
	.string "Goomy$"

GoomyInCave_Text_1:
# 190 "data/maps/DaycarePond/scripts.pory"
	.string "Cool vibes friend.\pKeep on keepin on.\n$"

GoomyInCave_Text_2:
# 206 "data/maps/DaycarePond/scripts.pory"
	.string "Keepin it mellow...\nLet's just have some fun.$"

BuizelInCave_Text_0:
# 286 "data/maps/DaycarePond/scripts.pory"
	.string "Buizel$"

BuizelInCave_Text_1:
# 288 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair likes to be cryptic.\pShe set up this maze so only those\nwho really need something from her\lwill seek her out.\pSome Pokémon really harsh her\nmellow.$"

BuizelInCave_Text_2:
# 304 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair likes to keep the waters\ncalm around here.\pLet's keep it lowkey.\n$"

BuizelInCave_Text_3:
# 314 "data/maps/DaycarePond/scripts.pory"
	.string "She keeps to herself.\nEnsuring maximum relaxation.$"

SlowpokeInCave_Text_0:
# 392 "data/maps/DaycarePond/scripts.pory"
	.string "Slowpoke$"

SlowpokeInCave_Text_1:
# 394 "data/maps/DaycarePond/scripts.pory"
	.string "These bridges are so confusing...\pI've been stuck here for a while,\nbut it's chill.$"

SlowpokeInCave_Text_2:
# 410 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair really likes my vibe.\n$"

SlowpokeInCave_Text_3:
# 419 "data/maps/DaycarePond/scripts.pory"
	.string "Maybe it's cause I'm too slow to\nharsh the vibe.$"

CroagunkInCave_Text_0:
# 497 "data/maps/DaycarePond/scripts.pory"
	.string "Croagunk$"

CroagunkInCave_Text_1:
# 499 "data/maps/DaycarePond/scripts.pory"
	.string "Right on.$"

CroagunkInCave_Text_2:
# 515 "data/maps/DaycarePond/scripts.pory"
	.string "Duuuuuude.\nWhat's upppp?$"

CroagunkInCave_Text_3:
# 524 "data/maps/DaycarePond/scripts.pory"
	.string "We keep it peaceful here my dude.\pCan't have anyone mess with the\nvibes or we risk losing out on\lgaining EXP.\pHaven't leveled up yet but I'm\nchillin.\pI'm sure it'll come.\n$"

BattleVsDragonair_Text_0:
# 662 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair$"

BattleVsDragonair_Text_1:
# 664 "data/maps/DaycarePond/scripts.pory"
	.string "You have proven your strength.\pI hope one day you learn that\ngrace will be the way to the EXP.$"

BattleVsDragonair_Text_2:
# 678 "data/maps/DaycarePond/scripts.pory"
	.string "Hello there Ditto.\pYes, I see through your facade.\pMy philosophy to gain EXP has been\nto keep this biome calm.\pI spent my early days in the\ncrashing waterfalls, but gained\lno EXP.\pI found this biome and figured\nI try a different approach.\pYou seem to be causing a ruckus,\nand I have no problem taking you\ldown!$"

BattleVsDragonair_Text_3:
# 693 "data/maps/DaycarePond/scripts.pory"
	.string "You have gained the ability to\ntransform into Dragonair!$"

BattleVsDragonair_Text_4:
# 699 "data/maps/DaycarePond/scripts.pory"
	.string "Very well Ditto.\nGo on.\pLeave this place calmly, with\nthe power to scale roaring\lwaterfalls.$"
