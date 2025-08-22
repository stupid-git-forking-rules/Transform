DaycareNoivernCave_MapScripts::
	.byte 0


GastlyDialog::
# 6 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 7 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 8 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername GastlyDialog_Text_0
# 9 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox GastlyDialog_Text_1, MSGBOX_DEFAULT
# 10 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 11 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


HaunterDialog::
# 16 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 17 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 18 "data/maps/DaycareNoivernCave/scripts.pory"
	playse SE_PIN
# 19 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 20 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 21 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername HaunterDialog_Text_0
# 22 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox HaunterDialog_Text_1, MSGBOX_DEFAULT
# 23 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 24 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


GengarDialog::
# 29 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 30 "data/maps/DaycareNoivernCave/scripts.pory"
	playse SE_PIN
# 31 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Gengar, GengarDialog_Movement_0
# 32 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Gengar
# 33 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Gengar, Common_Movement_ExclamationMark
# 34 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Gengar
# 35 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername GengarDialog_Text_0
# 36 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox GengarDialog_Text_1, MSGBOX_DEFAULT
# 37 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 38 "data/maps/DaycareNoivernCave/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 39 "data/maps/DaycareNoivernCave/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 40 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 41 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


LitwickDialog::
# 46 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_unset FLAG_LITWICK_EGG, LitwickDialog_1
# 76 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 77 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 78 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 79 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_4, MSGBOX_DEFAULT
# 80 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 81 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

LitwickDialog_1:
# 48 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_TRANS_NOIVERN, LitwickDialog_4
# 65 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 66 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 67 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 68 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_3, MSGBOX_DEFAULT
# 69 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 70 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

LitwickDialog_4:
# 50 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 51 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 52 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 53 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_1, MSGBOX_DEFAULT
# 54 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 55 "data/maps/DaycareNoivernCave/scripts.pory"
	giveitem ITEM_LUCKY_EGG, 2
# 56 "data/maps/DaycareNoivernCave/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 57 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 58 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_2, MSGBOX_DEFAULT
# 59 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 60 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


MawileInCave::
# 87 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 88 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 89 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_MAWILE_BATTLE, MawileInCave_1
# 99 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Mawile, GengarDialog_Movement_0
# 100 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Mawile
# 101 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 102 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Mawile, Common_Movement_ExclamationMark
# 103 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Mawile
# 104 "data/maps/DaycareNoivernCave/scripts.pory"
	delay 60
# 105 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 106 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_2, MSGBOX_AUTOCLOSE
# 107 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_MAWILE, 25
# 108 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 109 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 110 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MawileInCave_4
	return

MawileInCave_1:
# 91 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 92 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_1, MSGBOX_DEFAULT
# 93 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 94 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

MawileInCave_4:
# 112 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 113 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_3, MSGBOX_DEFAULT
# 114 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_MAWILE_BATTLE
# 115 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 116 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


MawileInCaveTrigger::
# 123 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_unset FLAG_MAWILE_BATTLE, MawileInCaveTrigger_1
	return

MawileInCaveTrigger_1:
# 125 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 126 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Mawile, Common_Movement_ExclamationMark
# 127 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Mawile
# 128 "data/maps/DaycareNoivernCave/scripts.pory"
	delay 60
# 129 "data/maps/DaycareNoivernCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 130 "data/maps/DaycareNoivernCave/scripts.pory"
	switch VAR_TEMP_2
# 132 "data/maps/DaycareNoivernCave/scripts.pory"
	case 11, MawileInCaveTrigger_4
# 150 "data/maps/DaycareNoivernCave/scripts.pory"
	case 10, MawileInCaveTrigger_5
	return

MawileInCaveTrigger_4:
# 133 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, MawileInCaveTrigger_Movement_0
# 134 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Mawile, MawileInCaveTrigger_Movement_1
# 135 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Mawile
# 136 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 137 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_2, MSGBOX_AUTOCLOSE
# 138 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_MAWILE, 25
# 139 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 140 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 141 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MawileInCaveTrigger_6
	return

MawileInCaveTrigger_5:
# 151 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, MawileInCaveTrigger_Movement_0
# 152 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 153 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_2, MSGBOX_AUTOCLOSE
# 154 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_MAWILE, 25
# 155 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 156 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 157 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MawileInCaveTrigger_8
	return

MawileInCaveTrigger_6:
# 143 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 144 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_3, MSGBOX_DEFAULT
# 145 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_MAWILE_BATTLE
# 146 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 147 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

MawileInCaveTrigger_8:
# 159 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 160 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_3, MSGBOX_DEFAULT
# 161 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_MAWILE_BATTLE
# 162 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 163 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


DuskullInCave::
# 171 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 172 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 173 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_DUSKULL_BATTLE, DuskullInCave_1
# 183 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Duskull, GengarDialog_Movement_0
# 184 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Duskull
# 185 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 186 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Duskull, Common_Movement_ExclamationMark
# 187 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Duskull
# 188 "data/maps/DaycareNoivernCave/scripts.pory"
	delay 60
# 189 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 190 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_2, MSGBOX_AUTOCLOSE
# 191 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_DUSKULL, 25
# 192 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 193 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 194 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq DuskullInCave_4
	return

DuskullInCave_1:
# 175 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 176 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_1, MSGBOX_DEFAULT
# 177 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 178 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

DuskullInCave_4:
# 196 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 197 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_1, MSGBOX_DEFAULT
# 198 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_DUSKULL_BATTLE
# 199 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 200 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


DuskullInCaveTrigger::
# 207 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_unset FLAG_DUSKULL_BATTLE, DuskullInCaveTrigger_1
	return

DuskullInCaveTrigger_1:
# 209 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 210 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Duskull, Common_Movement_ExclamationMark
# 211 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Duskull
# 212 "data/maps/DaycareNoivernCave/scripts.pory"
	delay 60
# 213 "data/maps/DaycareNoivernCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 214 "data/maps/DaycareNoivernCave/scripts.pory"
	switch VAR_TEMP_1
# 216 "data/maps/DaycareNoivernCave/scripts.pory"
	case 15, DuskullInCaveTrigger_4
	return

DuskullInCaveTrigger_4:
# 217 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, DuskullInCaveTrigger_Movement_0
# 218 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Duskull, DuskullInCaveTrigger_Movement_1
# 219 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 220 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_2, MSGBOX_AUTOCLOSE
# 221 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_DUSKULL, 25
# 222 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 223 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 224 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq DuskullInCaveTrigger_5
	return

DuskullInCaveTrigger_5:
# 226 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 227 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_1, MSGBOX_DEFAULT
# 228 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_DUSKULL_BATTLE
# 229 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 230 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


BattleVsNoivern::
# 239 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_TRANS_NOIVERN, BattleVsNoivern_2
# 243 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 244 "data/maps/DaycareNoivernCave/scripts.pory"
	playbgm MUS_NONE, FALSE
# 245 "data/maps/DaycareNoivernCave/scripts.pory"
	playmoncry SPECIES_NOIVERN, CRY_MODE_NORMAL
# 246 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmoncry
# 247 "data/maps/DaycareNoivernCave/scripts.pory"
	playse SE_PIN
# 248 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 249 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 250 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, MawileInCaveTrigger_Movement_0
# 251 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 252 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsNoivern_Movement_0
# 253 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 254 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsNoivern_Movement_1
# 255 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 256 "data/maps/DaycareNoivernCave/scripts.pory"
	playse SE_M_SCREECH
# 257 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Noivern, BattleVsNoivern_Movement_2
# 258 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Noivern
# 259 "data/maps/DaycareNoivernCave/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 260 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername BattleVsNoivern_Text_0
# 261 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox BattleVsNoivern_Text_1, MSGBOX_AUTOCLOSE
# 262 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_NOIVERN, 25
# 263 "data/maps/DaycareNoivernCave/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 264 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 265 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 266 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsNoivern_4
	return

BattleVsNoivern_2:
	end

BattleVsNoivern_4:
# 268 "data/maps/DaycareNoivernCave/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 269 "data/maps/DaycareNoivernCave/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 270 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_TRANS_NOIVERN
# 271 "data/maps/DaycareNoivernCave/scripts.pory"
	dittotransform SPECIES_NOIVERN
# 272 "data/maps/DaycareNoivernCave/scripts.pory"
	playse MUS_LEVEL_UP
# 273 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox BattleVsNoivern_Text_2, MSGBOX_DEFAULT
# 274 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 275 "data/maps/DaycareNoivernCave/scripts.pory"
	dittotransform VAR_TEMP_0
# 276 "data/maps/DaycareNoivernCave/scripts.pory"
	givemon SPECIES_NOIVERN, 25, move1 = MOVE_AIR_CUTTER, move2 = MOVE_DRAGON_BREATH, move3 = MOVE_SUPERSONIC, move4 = MOVE_SUPER_FANG
# 277 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 278 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername BattleVsNoivern_Text_0
# 279 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox BattleVsNoivern_Text_3, MSGBOX_DEFAULT
# 280 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 281 "data/maps/DaycareNoivernCave/scripts.pory"
	playbgm MUS_NONE, FALSE
# 282 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Noivern, BattleVsNoivern_Movement_3
# 283 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Noivern
# 284 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Noivern, BattleVsNoivern_Movement_4
# 285 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Noivern
# 286 "data/maps/DaycareNoivernCave/scripts.pory"
	playbgm MUS_PMD_NOIVERNCAVE, FALSE
# 287 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


# 31 "data/maps/DaycareNoivernCave/scripts.pory"
GengarDialog_Movement_0:
# 31 "data/maps/DaycareNoivernCave/scripts.pory"
	face_player
	step_end

# 133 "data/maps/DaycareNoivernCave/scripts.pory"
MawileInCaveTrigger_Movement_0:
# 133 "data/maps/DaycareNoivernCave/scripts.pory"
	face_up
	step_end

# 134 "data/maps/DaycareNoivernCave/scripts.pory"
MawileInCaveTrigger_Movement_1:
# 134 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_down
	step_end

# 217 "data/maps/DaycareNoivernCave/scripts.pory"
DuskullInCaveTrigger_Movement_0:
# 217 "data/maps/DaycareNoivernCave/scripts.pory"
	face_right
	step_end

# 218 "data/maps/DaycareNoivernCave/scripts.pory"
DuskullInCaveTrigger_Movement_1:
# 218 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_left
# 218 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_left
# 218 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_left
	step_end

# 252 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_0:
# 252 "data/maps/DaycareNoivernCave/scripts.pory"
	lock_facing_direction
	step_end

# 254 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_1:
# 254 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
	step_end

# 257 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_2:
# 257 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
# 257 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
# 257 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
# 257 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
	step_end

# 282 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_3:
# 282 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
# 282 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
# 282 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
# 282 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
	step_end

# 284 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_4:
# 284 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_in_place_down
	step_end

GastlyDialog_Text_0:
# 8 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Gastly$"

GastlyDialog_Text_1:
# 9 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "It's no Mt. Pyre, but this cave\ndoes the trick.$"

HaunterDialog_Text_0:
# 21 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Haunter$"

HaunterDialog_Text_1:
# 22 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "BOO!$"

GengarDialog_Text_0:
# 35 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Gengar$"

GengarDialog_Text_1:
# 36 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "How did you manage to pass\nthrough that rock?\pMaybe you've got a bit of\nGhost_type in you.\pMWAHAHA!\n$"

LitwickDialog_Text_0:
# 52 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Litwick$"

LitwickDialog_Text_1:
# 53 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Noivern is quite the challenge,\nisn't he?\pHere. Take these.\n$"

LitwickDialog_Text_2:
# 58 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "I know a Chansey will exchange\nthese to heal your wounds.$"

LitwickDialog_Text_3:
# 68 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Careful, that bat is fiesty!\n$"

LitwickDialog_Text_4:
# 79 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Noivern is quite the challenge,\nisn't he?$"

MawileInCave_Text_0:
# 91 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Mawile$"

MawileInCave_Text_1:
# 92 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Keep your guard up.\nA strong challenge is ahead.$"

MawileInCave_Text_2:
# 106 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Not many get this far...\nLet's see if you're clever or just lucky.$"

MawileInCave_Text_3:
# 113 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "You’ve got bite.\nMaybe we’re not so different.$"

DuskullInCave_Text_0:
# 175 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Duskull$"

DuskullInCave_Text_1:
# 176 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Even spirits respect strength.\pWander well, traveler.\n$"

DuskullInCave_Text_2:
# 190 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Not many dare to speak to me...\nYou must be bold.$"

BattleVsNoivern_Text_0:
# 260 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Noivern$"

BattleVsNoivern_Text_1:
# 261 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "You tread where echoes rule.\pLet's see if you can keep up with\nthe speed of sound!$"

BattleVsNoivern_Text_2:
# 273 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "You have gained the ability to\ntransform into Noivern!$"

BattleVsNoivern_Text_3:
# 279 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Soar high gooey friend.\pYou'll need my flight to reach your\ndestination$"
