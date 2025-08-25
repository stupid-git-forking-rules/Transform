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
	goto_if_unset FLAG_GENGAR_EGG, GengarDialog_1
# 47 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Gengar, GengarDialog_Movement_0
# 48 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Gengar
# 49 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername GengarDialog_Text_0
# 50 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox GengarDialog_Text_2, MSGBOX_DEFAULT
# 51 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 52 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

GengarDialog_1:
# 32 "data/maps/DaycareNoivernCave/scripts.pory"
	playse SE_PIN
# 33 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Gengar, GengarDialog_Movement_0
# 34 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Gengar
# 35 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Gengar, Common_Movement_ExclamationMark
# 36 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Gengar
# 37 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername GengarDialog_Text_0
# 38 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox GengarDialog_Text_1, MSGBOX_DEFAULT
# 39 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 40 "data/maps/DaycareNoivernCave/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 41 "data/maps/DaycareNoivernCave/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 42 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 43 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


LitwickDialog::
# 58 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_unset FLAG_LITWICK_EGG, LitwickDialog_1
# 88 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 89 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 90 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 91 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_4, MSGBOX_DEFAULT
# 92 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 93 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

LitwickDialog_1:
# 60 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_TRANS_NOIVERN, LitwickDialog_4
# 77 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 78 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 79 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 80 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_3, MSGBOX_DEFAULT
# 81 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 82 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

LitwickDialog_4:
# 62 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 63 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 64 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 65 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_1, MSGBOX_DEFAULT
# 66 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 67 "data/maps/DaycareNoivernCave/scripts.pory"
	giveitem ITEM_LUCKY_EGG, 2
# 68 "data/maps/DaycareNoivernCave/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 69 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 70 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_2, MSGBOX_DEFAULT
# 71 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 72 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


MawileInCave::
# 99 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 100 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 101 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_MAWILE_BATTLE, MawileInCave_1
# 111 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Mawile, GengarDialog_Movement_0
# 112 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Mawile
# 113 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 114 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Mawile, Common_Movement_ExclamationMark
# 115 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Mawile
# 116 "data/maps/DaycareNoivernCave/scripts.pory"
	delay 60
# 117 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 118 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_2, MSGBOX_AUTOCLOSE
# 119 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_MAWILE, 25
# 120 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 121 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 122 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MawileInCave_4
	return

MawileInCave_1:
# 103 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 104 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_1, MSGBOX_DEFAULT
# 105 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 106 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

MawileInCave_4:
# 124 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 125 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_3, MSGBOX_DEFAULT
# 126 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_MAWILE_BATTLE
# 127 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 128 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


MawileInCaveTrigger::
# 135 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_unset FLAG_MAWILE_BATTLE, MawileInCaveTrigger_1
	return

MawileInCaveTrigger_1:
# 137 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 138 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Mawile, Common_Movement_ExclamationMark
# 139 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Mawile
# 140 "data/maps/DaycareNoivernCave/scripts.pory"
	delay 60
# 141 "data/maps/DaycareNoivernCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 142 "data/maps/DaycareNoivernCave/scripts.pory"
	switch VAR_TEMP_2
# 144 "data/maps/DaycareNoivernCave/scripts.pory"
	case 11, MawileInCaveTrigger_4
# 162 "data/maps/DaycareNoivernCave/scripts.pory"
	case 10, MawileInCaveTrigger_5
	return

MawileInCaveTrigger_4:
# 145 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, MawileInCaveTrigger_Movement_0
# 146 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Mawile, MawileInCaveTrigger_Movement_1
# 147 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Mawile
# 148 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 149 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_2, MSGBOX_AUTOCLOSE
# 150 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_MAWILE, 25
# 151 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 152 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 153 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MawileInCaveTrigger_6
	return

MawileInCaveTrigger_5:
# 163 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, MawileInCaveTrigger_Movement_0
# 164 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 165 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_2, MSGBOX_AUTOCLOSE
# 166 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_MAWILE, 25
# 167 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 168 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 169 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MawileInCaveTrigger_8
	return

MawileInCaveTrigger_6:
# 155 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 156 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_3, MSGBOX_DEFAULT
# 157 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_MAWILE_BATTLE
# 158 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 159 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

MawileInCaveTrigger_8:
# 171 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 172 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_3, MSGBOX_DEFAULT
# 173 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_MAWILE_BATTLE
# 174 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 175 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


DuskullInCave::
# 183 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 184 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 185 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_DUSKULL_BATTLE, DuskullInCave_1
# 195 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Duskull, GengarDialog_Movement_0
# 196 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Duskull
# 197 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 198 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Duskull, Common_Movement_ExclamationMark
# 199 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Duskull
# 200 "data/maps/DaycareNoivernCave/scripts.pory"
	delay 60
# 201 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 202 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_2, MSGBOX_AUTOCLOSE
# 203 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_DUSKULL, 25
# 204 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 205 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 206 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq DuskullInCave_4
	return

DuskullInCave_1:
# 187 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 188 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_1, MSGBOX_DEFAULT
# 189 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 190 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

DuskullInCave_4:
# 208 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 209 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_1, MSGBOX_DEFAULT
# 210 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_DUSKULL_BATTLE
# 211 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 212 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


DuskullInCaveTrigger::
# 219 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_unset FLAG_DUSKULL_BATTLE, DuskullInCaveTrigger_1
	return

DuskullInCaveTrigger_1:
# 221 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 222 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Duskull, Common_Movement_ExclamationMark
# 223 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Duskull
# 224 "data/maps/DaycareNoivernCave/scripts.pory"
	delay 60
# 225 "data/maps/DaycareNoivernCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 226 "data/maps/DaycareNoivernCave/scripts.pory"
	switch VAR_TEMP_1
# 228 "data/maps/DaycareNoivernCave/scripts.pory"
	case 15, DuskullInCaveTrigger_4
	return

DuskullInCaveTrigger_4:
# 229 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, DuskullInCaveTrigger_Movement_0
# 230 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Duskull, DuskullInCaveTrigger_Movement_1
# 231 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Duskull
# 232 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 233 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_2, MSGBOX_AUTOCLOSE
# 234 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_DUSKULL, 25
# 235 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 236 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 237 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq DuskullInCaveTrigger_5
	return

DuskullInCaveTrigger_5:
# 239 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 240 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_1, MSGBOX_DEFAULT
# 241 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_DUSKULL_BATTLE
# 242 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 243 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


BattleVsNoivern::
# 252 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_TRANS_NOIVERN, BattleVsNoivern_2
# 256 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 257 "data/maps/DaycareNoivernCave/scripts.pory"
	playbgm MUS_NONE, FALSE
# 258 "data/maps/DaycareNoivernCave/scripts.pory"
	playmoncry SPECIES_NOIVERN, CRY_MODE_NORMAL
# 259 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmoncry
# 260 "data/maps/DaycareNoivernCave/scripts.pory"
	playse SE_PIN
# 261 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 262 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 263 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, MawileInCaveTrigger_Movement_0
# 264 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 265 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsNoivern_Movement_0
# 266 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 267 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsNoivern_Movement_1
# 268 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 269 "data/maps/DaycareNoivernCave/scripts.pory"
	playse SE_M_SCREECH
# 270 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Noivern, BattleVsNoivern_Movement_2
# 271 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Noivern
# 272 "data/maps/DaycareNoivernCave/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 273 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername BattleVsNoivern_Text_0
# 274 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox BattleVsNoivern_Text_1, MSGBOX_AUTOCLOSE
# 275 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_NOIVERN, 25
# 276 "data/maps/DaycareNoivernCave/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 277 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 278 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 279 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsNoivern_4
	return

BattleVsNoivern_2:
	end

BattleVsNoivern_4:
# 281 "data/maps/DaycareNoivernCave/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 282 "data/maps/DaycareNoivernCave/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 283 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_TRANS_NOIVERN
# 284 "data/maps/DaycareNoivernCave/scripts.pory"
	delay 30
# 285 "data/maps/DaycareNoivernCave/scripts.pory"
	dittotransform SPECIES_NOIVERN
# 286 "data/maps/DaycareNoivernCave/scripts.pory"
	playse MUS_LEVEL_UP
# 287 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox BattleVsNoivern_Text_2, MSGBOX_DEFAULT
# 288 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 289 "data/maps/DaycareNoivernCave/scripts.pory"
	dittotransform VAR_TEMP_0
# 290 "data/maps/DaycareNoivernCave/scripts.pory"
	givemon SPECIES_NOIVERN, 25, move1 = MOVE_AIR_CUTTER, move2 = MOVE_DRAGON_BREATH, move3 = MOVE_SUPERSONIC, move4 = MOVE_SUPER_FANG
# 291 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 292 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername BattleVsNoivern_Text_0
# 293 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox BattleVsNoivern_Text_3, MSGBOX_DEFAULT
# 294 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 295 "data/maps/DaycareNoivernCave/scripts.pory"
	playbgm MUS_NONE, FALSE
# 296 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Noivern, BattleVsNoivern_Movement_3
# 297 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Noivern
# 298 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Noivern, BattleVsNoivern_Movement_4
# 299 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Noivern
# 300 "data/maps/DaycareNoivernCave/scripts.pory"
	fadenewbgm MUS_PMD_NOIVERNCAVE
# 301 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


# 33 "data/maps/DaycareNoivernCave/scripts.pory"
GengarDialog_Movement_0:
# 33 "data/maps/DaycareNoivernCave/scripts.pory"
	face_player
	step_end

# 145 "data/maps/DaycareNoivernCave/scripts.pory"
MawileInCaveTrigger_Movement_0:
# 145 "data/maps/DaycareNoivernCave/scripts.pory"
	face_up
	step_end

# 146 "data/maps/DaycareNoivernCave/scripts.pory"
MawileInCaveTrigger_Movement_1:
# 146 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_down
	step_end

# 229 "data/maps/DaycareNoivernCave/scripts.pory"
DuskullInCaveTrigger_Movement_0:
# 229 "data/maps/DaycareNoivernCave/scripts.pory"
	face_right
	step_end

# 230 "data/maps/DaycareNoivernCave/scripts.pory"
DuskullInCaveTrigger_Movement_1:
# 230 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_left
# 230 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_left
# 230 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_left
	step_end

# 265 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_0:
# 265 "data/maps/DaycareNoivernCave/scripts.pory"
	lock_facing_direction
	step_end

# 267 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_1:
# 267 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
	step_end

# 270 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_2:
# 270 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
# 270 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
# 270 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
# 270 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
	step_end

# 296 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_3:
# 296 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
# 296 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
# 296 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
# 296 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
	step_end

# 298 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_4:
# 298 "data/maps/DaycareNoivernCave/scripts.pory"
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
# 37 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Gengar$"

GengarDialog_Text_1:
# 38 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "How did you manage to pass\nthrough that rock?\pMaybe you've got a bit of\nGhost_type in you.\pMWAHAHA!\n$"

GengarDialog_Text_2:
# 50 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Back for more?\pI have nothing left for you\pKekeh!\n$"

LitwickDialog_Text_0:
# 64 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Litwick$"

LitwickDialog_Text_1:
# 65 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Noivern is quite the challenge,\nisn't he?\pHere. Take these.\n$"

LitwickDialog_Text_2:
# 70 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "I know a Chansey will exchange\nthese to heal your wounds.$"

LitwickDialog_Text_3:
# 80 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Careful, that bat is fiesty!\n$"

LitwickDialog_Text_4:
# 91 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Noivern is quite the challenge,\nisn't he?$"

MawileInCave_Text_0:
# 103 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Mawile$"

MawileInCave_Text_1:
# 104 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Keep your guard up.\nA strong challenge is ahead.$"

MawileInCave_Text_2:
# 118 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Not many get this far...\nLet's see if you're clever or just lucky.$"

MawileInCave_Text_3:
# 125 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "You’ve got bite.\nMaybe we’re not so different.$"

DuskullInCave_Text_0:
# 187 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Duskull$"

DuskullInCave_Text_1:
# 188 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Even spirits respect strength.\pWander well, traveler.\n$"

DuskullInCave_Text_2:
# 202 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Not many dare to speak to me...\nYou must be bold.$"

BattleVsNoivern_Text_0:
# 273 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Noivern$"

BattleVsNoivern_Text_1:
# 274 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "You tread where echos rule.\pI've ruled over this cave since\nI bested my little brother as a\lNoibat.\pI hope you've come prepareed.\pLet's see if you can keep up with\nthe speed of sound!$"

BattleVsNoivern_Text_2:
# 287 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "You have gained the ability to\ntransform into Noivern!$"

BattleVsNoivern_Text_3:
# 293 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Soar high gooey friend.\pYou'll need my flight to reach your\ndestination\pYou near the end of your quest!$"
