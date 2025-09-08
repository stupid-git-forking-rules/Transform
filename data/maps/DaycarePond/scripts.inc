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
	goto_if_unset FLAG_MUDKIP_PICKED_UP, PsyduckDialog_1
# 72 "data/maps/DaycarePond/scripts.pory"
	lock
# 73 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 74 "data/maps/DaycarePond/scripts.pory"
	speakername PsyduckDialog_Text_0
# 75 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_PSYDUCK, EMOTE_HAPPY
# 76 "data/maps/DaycarePond/scripts.pory"
	msgbox PsyduckDialog_Text_2, MSGBOX_NPC
# 77 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 78 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 79 "data/maps/DaycarePond/scripts.pory"
	release
	end

PsyduckDialog_1:
# 60 "data/maps/DaycarePond/scripts.pory"
	lock
# 61 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 62 "data/maps/DaycarePond/scripts.pory"
	speakername PsyduckDialog_Text_0
# 63 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_PSYDUCK, EMOTE_NORMAL
# 64 "data/maps/DaycarePond/scripts.pory"
	msgbox PsyduckDialog_Text_1, MSGBOX_NPC
# 65 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 66 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 67 "data/maps/DaycarePond/scripts.pory"
	release
	end


SprigatitoDialog::
# 86 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_SPRIGATITO_EGG, SprigatitoDialog_1
# 117 "data/maps/DaycarePond/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_LURANTIS
	goto_if_eq SprigatitoDialog_7
# 131 "data/maps/DaycarePond/scripts.pory"
	lock
# 132 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 133 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 134 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SPRIGATITO, EMOTE_NORMAL
# 135 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_2, MSGBOX_DEFAULT
# 136 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 137 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 138 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_1:
# 88 "data/maps/DaycarePond/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_LURANTIS
	goto_if_eq SprigatitoDialog_4
# 104 "data/maps/DaycarePond/scripts.pory"
	lock
# 105 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 106 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 107 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SPRIGATITO, EMOTE_NORMAL
# 108 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_2, MSGBOX_DEFAULT
# 109 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 110 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 111 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_4:
# 90 "data/maps/DaycarePond/scripts.pory"
	lock
# 91 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 92 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 93 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SPRIGATITO, EMOTE_ELATED
# 94 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_1, MSGBOX_DEFAULT
# 95 "data/maps/DaycarePond/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 96 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SPRIGATITO_EGG
# 97 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 98 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 99 "data/maps/DaycarePond/scripts.pory"
	release
	end

SprigatitoDialog_7:
# 119 "data/maps/DaycarePond/scripts.pory"
	lock
# 120 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 121 "data/maps/DaycarePond/scripts.pory"
	speakername SprigatitoDialog_Text_0
# 122 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SPRIGATITO, EMOTE_ELATED
# 123 "data/maps/DaycarePond/scripts.pory"
	msgbox SprigatitoDialog_Text_3, MSGBOX_DEFAULT
# 124 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 125 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 126 "data/maps/DaycarePond/scripts.pory"
	release
	end


MudkipDialog::
# 146 "data/maps/DaycarePond/scripts.pory"
	lock
# 147 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 148 "data/maps/DaycarePond/scripts.pory"
	speakername MudkipDialog_Text_0
# 149 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_MUDKIP, EMOTE_ANGRY
# 150 "data/maps/DaycarePond/scripts.pory"
	msgbox MudkipDialog_Text_1, MSGBOX_NPC
# 151 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 152 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 153 "data/maps/DaycarePond/scripts.pory"
	release
	end


SeakingDialog::
# 158 "data/maps/DaycarePond/scripts.pory"
	lock
# 159 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 160 "data/maps/DaycarePond/scripts.pory"
	speakername SeakingDialog_Text_0
# 161 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SEAKING, EMOTE_NORMAL
# 162 "data/maps/DaycarePond/scripts.pory"
	msgbox SeakingDialog_Text_1, MSGBOX_NPC
# 163 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 164 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 165 "data/maps/DaycarePond/scripts.pory"
	release
	end


QuagsireDialog::
# 171 "data/maps/DaycarePond/scripts.pory"
	lock
# 172 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 173 "data/maps/DaycarePond/scripts.pory"
	speakername QuagsireDialog_Text_0
# 174 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_QUAGSIRE, EMOTE_HAPPY
# 175 "data/maps/DaycarePond/scripts.pory"
	msgbox QuagsireDialog_Text_1, MSGBOX_NPC
# 176 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 177 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 178 "data/maps/DaycarePond/scripts.pory"
	release
	end


GoomyInCave::
# 183 "data/maps/DaycarePond/scripts.pory"
	lock
# 184 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 185 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_GOOMY_BATTLE, GoomyInCave_1
# 197 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, BattleVsMarill_Movement_0
# 198 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 199 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 200 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, Common_Movement_ExclamationMark
# 201 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 202 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 203 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 204 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 205 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 206 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 207 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 208 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 209 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 210 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCave_4
	return

GoomyInCave_1:
# 187 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 188 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 189 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 190 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 191 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 192 "data/maps/DaycarePond/scripts.pory"
	release
	end

GoomyInCave_4:
# 212 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 213 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 214 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 215 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 216 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 217 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 218 "data/maps/DaycarePond/scripts.pory"
	release
	end


GoomyInCaveTrigger::
# 225 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_GOOMY_BATTLE, GoomyInCaveTrigger_1
	return

GoomyInCaveTrigger_1:
# 227 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 228 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, Common_Movement_ExclamationMark
# 229 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 230 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 231 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 232 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_1
# 234 "data/maps/DaycarePond/scripts.pory"
	case 16, GoomyInCaveTrigger_4
# 254 "data/maps/DaycarePond/scripts.pory"
	case 15, GoomyInCaveTrigger_5
	return

GoomyInCaveTrigger_4:
# 235 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 236 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 237 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 238 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 239 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 240 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 241 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 242 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 243 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCaveTrigger_6
	return

GoomyInCaveTrigger_5:
# 255 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 256 "data/maps/DaycarePond/scripts.pory"
	applymovement Goomy, GoomyInCaveTrigger_Movement_1
# 257 "data/maps/DaycarePond/scripts.pory"
	waitmovement Goomy
# 258 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 259 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 260 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_2, MSGBOX_AUTOCLOSE
# 261 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 262 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_GOOMY, 25
# 263 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 264 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 265 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GoomyInCaveTrigger_8
	return

GoomyInCaveTrigger_6:
# 245 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 246 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 247 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 248 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 249 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 250 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 251 "data/maps/DaycarePond/scripts.pory"
	release
	end

GoomyInCaveTrigger_8:
# 267 "data/maps/DaycarePond/scripts.pory"
	speakername GoomyInCave_Text_0
# 268 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_GOOMY, EMOTE_NORMAL
# 269 "data/maps/DaycarePond/scripts.pory"
	msgbox GoomyInCave_Text_1, MSGBOX_DEFAULT
# 270 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_GOOMY_BATTLE
# 271 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 272 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 273 "data/maps/DaycarePond/scripts.pory"
	release
	end


BuizelInCave::
# 281 "data/maps/DaycarePond/scripts.pory"
	lock
# 282 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 283 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_BUIZEL_BATTLE, BuizelInCave_1
# 295 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 296 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 297 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 298 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, Common_Movement_ExclamationMark
# 299 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 300 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 301 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 302 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 303 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 304 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 305 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 306 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 307 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 308 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCave_4
	return

BuizelInCave_1:
# 285 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 286 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 287 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_1, MSGBOX_DEFAULT
# 288 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 289 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 290 "data/maps/DaycarePond/scripts.pory"
	release
	end

BuizelInCave_4:
# 310 "data/maps/DaycarePond/scripts.pory"
	lock
# 311 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 312 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 313 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 314 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 315 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 316 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 317 "data/maps/DaycarePond/scripts.pory"
	release
	end


BuizelInCaveTrigger::
# 324 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_BUIZEL_BATTLE, BuizelInCaveTrigger_1
	return

BuizelInCaveTrigger_1:
# 326 "data/maps/DaycarePond/scripts.pory"
	lock
# 327 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 328 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, Common_Movement_ExclamationMark
# 329 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 330 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 331 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 332 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_2
# 334 "data/maps/DaycarePond/scripts.pory"
	case 34, BuizelInCaveTrigger_4
# 359 "data/maps/DaycarePond/scripts.pory"
	case 35, BuizelInCaveTrigger_5
	return

BuizelInCaveTrigger_4:
# 335 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 336 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 337 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, BuizelInCaveTrigger_Movement_0
# 338 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BuizelInCaveTrigger_Movement_1
# 339 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 340 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 341 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 342 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 343 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 344 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 345 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 346 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 347 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCaveTrigger_6
	return

BuizelInCaveTrigger_5:
# 360 "data/maps/DaycarePond/scripts.pory"
	applymovement Buizel, BattleVsMarill_Movement_0
# 361 "data/maps/DaycarePond/scripts.pory"
	waitmovement Buizel
# 362 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, BuizelInCaveTrigger_Movement_0
# 363 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 364 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 365 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_2, MSGBOX_AUTOCLOSE
# 366 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 367 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_BUIZEL, 25
# 368 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 369 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 370 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BuizelInCaveTrigger_8
	return

BuizelInCaveTrigger_6:
# 349 "data/maps/DaycarePond/scripts.pory"
	lock
# 350 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 351 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 352 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 353 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 354 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 355 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 356 "data/maps/DaycarePond/scripts.pory"
	release
	end

BuizelInCaveTrigger_8:
# 372 "data/maps/DaycarePond/scripts.pory"
	lock
# 373 "data/maps/DaycarePond/scripts.pory"
	speakername BuizelInCave_Text_0
# 374 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_BUIZEL, EMOTE_NORMAL
# 375 "data/maps/DaycarePond/scripts.pory"
	msgbox BuizelInCave_Text_3, MSGBOX_DEFAULT
# 376 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_BUIZEL_BATTLE
# 377 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 378 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 379 "data/maps/DaycarePond/scripts.pory"
	release
	end


SlowpokeInCave::
# 387 "data/maps/DaycarePond/scripts.pory"
	lock
# 388 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 389 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_SLOWPOKE_BATTLE, SlowpokeInCave_1
# 401 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, BattleVsMarill_Movement_0
# 402 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 403 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 404 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 405 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 406 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 407 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 408 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 409 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 410 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 411 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 412 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 413 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 414 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCave_4
	return

SlowpokeInCave_1:
# 391 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 392 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 393 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_1, MSGBOX_DEFAULT
# 394 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 395 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 396 "data/maps/DaycarePond/scripts.pory"
	release
	end

SlowpokeInCave_4:
# 416 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 417 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 418 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 419 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 420 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 421 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 422 "data/maps/DaycarePond/scripts.pory"
	release
	end


SlowpokeInCaveTrigger::
# 428 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_SLOWPOKE_BATTLE, SlowpokeInCaveTrigger_1
	return

SlowpokeInCaveTrigger_1:
# 430 "data/maps/DaycarePond/scripts.pory"
	lock
# 431 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 432 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 433 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_1
# 435 "data/maps/DaycarePond/scripts.pory"
	case 28, SlowpokeInCaveTrigger_4
# 461 "data/maps/DaycarePond/scripts.pory"
	case 26, SlowpokeInCaveTrigger_5
	return

SlowpokeInCaveTrigger_4:
# 436 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 437 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 438 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, GoomyInCaveTrigger_Movement_0
# 439 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 440 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, SlowpokeInCaveTrigger_Movement_0
# 441 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 442 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 443 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 444 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 445 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 446 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 447 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 448 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 449 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCaveTrigger_6
	return

SlowpokeInCaveTrigger_5:
# 462 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, Common_Movement_ExclamationMark
# 463 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 464 "data/maps/DaycarePond/scripts.pory"
	applymovement Slowpoke, SlowpokeInCaveTrigger_Movement_0
# 465 "data/maps/DaycarePond/scripts.pory"
	waitmovement Slowpoke
# 466 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, GoomyInCaveTrigger_Movement_0
# 467 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 468 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 469 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 470 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_2, MSGBOX_AUTOCLOSE
# 471 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 472 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_SLOWPOKE, 25
# 473 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 474 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 475 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlowpokeInCaveTrigger_8
	return

SlowpokeInCaveTrigger_6:
# 451 "data/maps/DaycarePond/scripts.pory"
	lock
# 452 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 453 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 454 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 455 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 456 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 457 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 458 "data/maps/DaycarePond/scripts.pory"
	release
	end

SlowpokeInCaveTrigger_8:
# 477 "data/maps/DaycarePond/scripts.pory"
	lock
# 478 "data/maps/DaycarePond/scripts.pory"
	speakername SlowpokeInCave_Text_0
# 479 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 480 "data/maps/DaycarePond/scripts.pory"
	msgbox SlowpokeInCave_Text_3, MSGBOX_DEFAULT
# 481 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_SLOWPOKE_BATTLE
# 482 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 483 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 484 "data/maps/DaycarePond/scripts.pory"
	release
	end


CroagunkInCave::
# 492 "data/maps/DaycarePond/scripts.pory"
	lock
# 493 "data/maps/DaycarePond/scripts.pory"
	faceplayer
# 494 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_CROAGUNK_BATTLE, CroagunkInCave_1
# 506 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, BattleVsMarill_Movement_0
# 507 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 508 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 509 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, Common_Movement_ExclamationMark
# 510 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 511 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 512 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 513 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 514 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 515 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 516 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 517 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 518 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 519 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCave_4
	return

CroagunkInCave_1:
# 496 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 497 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 498 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_1, MSGBOX_DEFAULT
# 499 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 500 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 501 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCave_4:
# 521 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 522 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 523 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 524 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 525 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 526 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 527 "data/maps/DaycarePond/scripts.pory"
	release
	end


CroagunkInCaveTrigger::
# 533 "data/maps/DaycarePond/scripts.pory"
	goto_if_unset FLAG_CROAGUNK_BATTLE, CroagunkInCaveTrigger_1
	return

CroagunkInCaveTrigger_1:
# 535 "data/maps/DaycarePond/scripts.pory"
	special PlayTrainerEncounterMusic
# 536 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, Common_Movement_ExclamationMark
# 537 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 538 "data/maps/DaycarePond/scripts.pory"
	delay 60
# 539 "data/maps/DaycarePond/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 540 "data/maps/DaycarePond/scripts.pory"
	switch VAR_TEMP_2
# 542 "data/maps/DaycarePond/scripts.pory"
	case 3, CroagunkInCaveTrigger_4
# 562 "data/maps/DaycarePond/scripts.pory"
	case 4, CroagunkInCaveTrigger_5
# 584 "data/maps/DaycarePond/scripts.pory"
	case 5, CroagunkInCaveTrigger_6
# 606 "data/maps/DaycarePond/scripts.pory"
	case 6, CroagunkInCaveTrigger_7
# 628 "data/maps/DaycarePond/scripts.pory"
	case 7, CroagunkInCaveTrigger_8
	return

CroagunkInCaveTrigger_4:
# 543 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 544 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 545 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 546 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 547 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 548 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 549 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 550 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 551 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_9
	return

CroagunkInCaveTrigger_5:
# 563 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 564 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_1
# 565 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 566 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 567 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 568 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 569 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 570 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 571 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 572 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 573 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_11
	return

CroagunkInCaveTrigger_6:
# 585 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 586 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_2
# 587 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 588 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 589 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 590 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 591 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 592 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 593 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 594 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 595 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_13
	return

CroagunkInCaveTrigger_7:
# 607 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 608 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_3
# 609 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 610 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 611 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 612 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 613 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 614 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 615 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 616 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 617 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_15
	return

CroagunkInCaveTrigger_8:
# 629 "data/maps/DaycarePond/scripts.pory"
	applymovement LOCALID_PLAYER, CroagunkInCaveTrigger_Movement_0
# 630 "data/maps/DaycarePond/scripts.pory"
	applymovement Croagunk, CroagunkInCaveTrigger_Movement_4
# 631 "data/maps/DaycarePond/scripts.pory"
	waitmovement Croagunk
# 632 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 633 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 634 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_2, MSGBOX_AUTOCLOSE
# 635 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 636 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_CROAGUNK, 25
# 637 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 638 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 639 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CroagunkInCaveTrigger_17
	return

CroagunkInCaveTrigger_9:
# 553 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 554 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 555 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 556 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 557 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 558 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 559 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_11:
# 575 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 576 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 577 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 578 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 579 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 580 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 581 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_13:
# 597 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 598 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 599 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 600 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 601 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 602 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 603 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_15:
# 619 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 620 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 621 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 622 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 623 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 624 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 625 "data/maps/DaycarePond/scripts.pory"
	release
	end

CroagunkInCaveTrigger_17:
# 641 "data/maps/DaycarePond/scripts.pory"
	speakername CroagunkInCave_Text_0
# 642 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_CROAGUNK, EMOTE_NORMAL
# 643 "data/maps/DaycarePond/scripts.pory"
	msgbox CroagunkInCave_Text_3, MSGBOX_DEFAULT
# 644 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_CROAGUNK_BATTLE
# 645 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 646 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 647 "data/maps/DaycarePond/scripts.pory"
	release
	end


BattleVsDragonair::
# 655 "data/maps/DaycarePond/scripts.pory"
	lock
# 657 "data/maps/DaycarePond/scripts.pory"
	goto_if_set FLAG_TRANS_DRAGONAIR, BattleVsDragonair_2
# 669 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 670 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, BattleVsMarill_Movement_0
# 671 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 672 "data/maps/DaycarePond/scripts.pory"
	playse SE_PIN
# 673 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, Common_Movement_ExclamationMark
# 674 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 675 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 676 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_DRAGONAIR, EMOTE_NORMAL
# 677 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_2, MSGBOX_AUTOCLOSE
# 678 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 679 "data/maps/DaycarePond/scripts.pory"
	setwildbattle SPECIES_DRAGONAIR, 25, move1 = MOVE_OUTRAGE, move2 = MOVE_WATERFALL, move3 = MOVE_IRON_HEAD, move4 = MOVE_SAFEGUARD
# 680 "data/maps/DaycarePond/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 0, 1, 0, 0
# 681 "data/maps/DaycarePond/scripts.pory"
	dowildbattle
# 682 "data/maps/DaycarePond/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 683 "data/maps/DaycarePond/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsDragonair_4
	return

BattleVsDragonair_2:
# 659 "data/maps/DaycarePond/scripts.pory"
	applymovement Dragonair, BattleVsMarill_Movement_0
# 660 "data/maps/DaycarePond/scripts.pory"
	waitmovement Dragonair
# 661 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 662 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_DRAGONAIR, EMOTE_NORMAL
# 663 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_1, MSGBOX_DEFAULT
# 664 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 665 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 666 "data/maps/DaycarePond/scripts.pory"
	release
	end

BattleVsDragonair_4:
# 685 "data/maps/DaycarePond/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 686 "data/maps/DaycarePond/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 687 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_TRANS_DRAGONAIR
# 688 "data/maps/DaycarePond/scripts.pory"
	setflag FLAG_MUDKIP_PICKED_UP
# 689 "data/maps/DaycarePond/scripts.pory"
	dittotransform SPECIES_DRAGONAIR
# 690 "data/maps/DaycarePond/scripts.pory"
	playse MUS_LEVEL_UP
# 691 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_3, MSGBOX_DEFAULT
# 692 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 693 "data/maps/DaycarePond/scripts.pory"
	dittotransform VAR_TEMP_0
# 694 "data/maps/DaycarePond/scripts.pory"
	givemon SPECIES_DRAGONAIR, 25, move1 = MOVE_OUTRAGE, move2 = MOVE_WATERFALL, move3 = MOVE_IRON_HEAD, move4 = MOVE_SAFEGUARD
# 695 "data/maps/DaycarePond/scripts.pory"
	speakername BattleVsDragonair_Text_0
# 696 "data/maps/DaycarePond/scripts.pory"
	createfieldmugshot MUGSHOT_DRAGONAIR, EMOTE_HAPPY
# 697 "data/maps/DaycarePond/scripts.pory"
	msgbox BattleVsDragonair_Text_4, MSGBOX_DEFAULT
# 698 "data/maps/DaycarePond/scripts.pory"
	removefieldmugshot
# 699 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 700 "data/maps/DaycarePond/scripts.pory"
	fadenewbgm MUS_PMD_LAKE
# 701 "data/maps/DaycarePond/scripts.pory"
	release
	end


DaycarePond_FindLuckyEgg::
# 709 "data/maps/DaycarePond/scripts.pory"
	lock
# 710 "data/maps/DaycarePond/scripts.pory"
	finditem ITEM_LUCKY_EGG
# 711 "data/maps/DaycarePond/scripts.pory"
	waitmessage
# 712 "data/maps/DaycarePond/scripts.pory"
	release
	end


# 20 "data/maps/DaycarePond/scripts.pory"
BattleVsMarill_Movement_0:
# 20 "data/maps/DaycarePond/scripts.pory"
	face_player
	step_end

# 235 "data/maps/DaycarePond/scripts.pory"
GoomyInCaveTrigger_Movement_0:
# 235 "data/maps/DaycarePond/scripts.pory"
	face_right
	step_end

# 256 "data/maps/DaycarePond/scripts.pory"
GoomyInCaveTrigger_Movement_1:
# 256 "data/maps/DaycarePond/scripts.pory"
	walk_left
	step_end

# 337 "data/maps/DaycarePond/scripts.pory"
BuizelInCaveTrigger_Movement_0:
# 337 "data/maps/DaycarePond/scripts.pory"
	face_down
	step_end

# 338 "data/maps/DaycarePond/scripts.pory"
BuizelInCaveTrigger_Movement_1:
# 338 "data/maps/DaycarePond/scripts.pory"
	walk_up
	step_end

# 440 "data/maps/DaycarePond/scripts.pory"
SlowpokeInCaveTrigger_Movement_0:
# 440 "data/maps/DaycarePond/scripts.pory"
	face_left
	step_end

# 543 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_0:
# 543 "data/maps/DaycarePond/scripts.pory"
	face_up
	step_end

# 564 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_1:
# 564 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 586 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_2:
# 586 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 586 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 608 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_3:
# 608 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 608 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 608 "data/maps/DaycarePond/scripts.pory"
	walk_down
	step_end

# 630 "data/maps/DaycarePond/scripts.pory"
CroagunkInCaveTrigger_Movement_4:
# 630 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 630 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 630 "data/maps/DaycarePond/scripts.pory"
	walk_down
# 630 "data/maps/DaycarePond/scripts.pory"
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
# 62 "data/maps/DaycarePond/scripts.pory"
	.string "Psyduck$"

PsyduckDialog_Text_1:
# 64 "data/maps/DaycarePond/scripts.pory"
	.string "I came to the lake to try to ease\nthis headache...\pIt's the most peaceful biome at\nthe daycare.$"

PsyduckDialog_Text_2:
# 76 "data/maps/DaycarePond/scripts.pory"
	.string "Are you looking for Mudkip?\pIt's trainer came back and picked\nit up!\pAs fun as the Daycare is, some\nPokémon yearn to battle alongside\ltheir trainers.$"

SprigatitoDialog_Text_0:
# 92 "data/maps/DaycarePond/scripts.pory"
	.string "Sprigatito$"

SprigatitoDialog_Text_1:
# 94 "data/maps/DaycarePond/scripts.pory"
	.string "A Grass_type!\pDon't see many around the lake\nhere.\pPlease take this Egg I found.\n$"

SprigatitoDialog_Text_2:
# 108 "data/maps/DaycarePond/scripts.pory"
	.string "I love it here by the water but\nI hardly see any other\lGrass_types...$"

SprigatitoDialog_Text_3:
# 123 "data/maps/DaycarePond/scripts.pory"
	.string "A Grass_type!\pDon't see many around the lake\nhere.$"

MudkipDialog_Text_0:
# 148 "data/maps/DaycarePond/scripts.pory"
	.string "Mudkip$"

MudkipDialog_Text_1:
# 150 "data/maps/DaycarePond/scripts.pory"
	.string "I hope my trainer comes back\nsoon...\pI miss them.\pI'm supposed to be their first\npartner Pokémon.$"

SeakingDialog_Text_0:
# 160 "data/maps/DaycarePond/scripts.pory"
	.string "Seaking$"

SeakingDialog_Text_1:
# 162 "data/maps/DaycarePond/scripts.pory"
	.string "Everyone talks about how\ncool Vaporeon is.\pSeakings deserve attention too...\n$"

QuagsireDialog_Text_0:
# 173 "data/maps/DaycarePond/scripts.pory"
	.string "Quagsire$"

QuagsireDialog_Text_1:
# 175 "data/maps/DaycarePond/scripts.pory"
	.string "The Lake here is so calm.\pDragonair makes sure that we\nkeep the peace here.\pShe believes keeping it mellow\nis the key to EXP.$"

GoomyInCave_Text_0:
# 187 "data/maps/DaycarePond/scripts.pory"
	.string "Goomy$"

GoomyInCave_Text_1:
# 189 "data/maps/DaycarePond/scripts.pory"
	.string "Cool vibes friend.\pKeep on keepin on.\n$"

GoomyInCave_Text_2:
# 205 "data/maps/DaycarePond/scripts.pory"
	.string "Keepin it mellow...\nLet's just have some fun.$"

BuizelInCave_Text_0:
# 285 "data/maps/DaycarePond/scripts.pory"
	.string "Buizel$"

BuizelInCave_Text_1:
# 287 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair likes to be cryptic.\pShe set up this maze so only those\nwho really need something from her\lwill seek her out.\pSome Pokémon really harsh her\nmellow.$"

BuizelInCave_Text_2:
# 303 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair likes to keep the waters\ncalm around here.\pLet's keep it lowkey.\n$"

BuizelInCave_Text_3:
# 313 "data/maps/DaycarePond/scripts.pory"
	.string "She keeps to herself.\nEnsuring maximum relaxation.$"

SlowpokeInCave_Text_0:
# 391 "data/maps/DaycarePond/scripts.pory"
	.string "Slowpoke$"

SlowpokeInCave_Text_1:
# 393 "data/maps/DaycarePond/scripts.pory"
	.string "These bridges are so confusing...\pI've been stuck here for a while,\nbut it's chill.$"

SlowpokeInCave_Text_2:
# 409 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair really likes my vibe.\n$"

SlowpokeInCave_Text_3:
# 418 "data/maps/DaycarePond/scripts.pory"
	.string "Maybe it's cause I'm too slow to\nharsh the vibe.$"

CroagunkInCave_Text_0:
# 496 "data/maps/DaycarePond/scripts.pory"
	.string "Croagunk$"

CroagunkInCave_Text_1:
# 498 "data/maps/DaycarePond/scripts.pory"
	.string "Right on.$"

CroagunkInCave_Text_2:
# 514 "data/maps/DaycarePond/scripts.pory"
	.string "Duuuuuude.\nWhat's upppp?$"

CroagunkInCave_Text_3:
# 523 "data/maps/DaycarePond/scripts.pory"
	.string "We keep it peaceful here my dude.\pCan't have anyone mess with the\nvibes or we risk losing out on\lgaining EXP.\pHaven't leveled up yet but I'm\nchillin.\pI'm sure it'll come.\n$"

BattleVsDragonair_Text_0:
# 661 "data/maps/DaycarePond/scripts.pory"
	.string "Dragonair$"

BattleVsDragonair_Text_1:
# 663 "data/maps/DaycarePond/scripts.pory"
	.string "You have proven your strength.\pI hope one day you learn that\ngrace will be the way to the EXP.$"

BattleVsDragonair_Text_2:
# 677 "data/maps/DaycarePond/scripts.pory"
	.string "Hello there Ditto.\pYes, I see through your facade.\pMy philosophy to gain EXP has been\nto keep this biome calm.\pI spent my early days in the\ncrashing waterfalls, but gained\lno EXP.\pI found this biome and figured\nI try a different approach.\pYou seem to be causing a ruckus,\nand I have no problem taking you\ldown!$"

BattleVsDragonair_Text_3:
# 691 "data/maps/DaycarePond/scripts.pory"
	.string "You have gained the ability to\ntransform into Dragonair!$"

BattleVsDragonair_Text_4:
# 697 "data/maps/DaycarePond/scripts.pory"
	.string "Very well Ditto.\nGo on.\pLeave this place calmly, with\nthe power to scale roaring\lwaterfalls.$"
