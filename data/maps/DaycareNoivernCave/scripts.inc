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
# 48 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Gengar, GengarDialog_Movement_0
# 49 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Gengar
# 50 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername GengarDialog_Text_0
# 51 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox GengarDialog_Text_2, MSGBOX_DEFAULT
# 52 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 53 "data/maps/DaycareNoivernCave/scripts.pory"
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
	setflag FLAG_GENGAR_EGG
# 43 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 44 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


LitwickDialog::
# 59 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_unset FLAG_LITWICK_EGG, LitwickDialog_1
# 89 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 90 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 91 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 92 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_4, MSGBOX_DEFAULT
# 93 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 94 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

LitwickDialog_1:
# 61 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_TRANS_NOIVERN, LitwickDialog_4
# 78 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 79 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 80 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 81 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_3, MSGBOX_DEFAULT
# 82 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 83 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

LitwickDialog_4:
# 63 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 64 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 65 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 66 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_1, MSGBOX_DEFAULT
# 67 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 68 "data/maps/DaycareNoivernCave/scripts.pory"
	giveitem ITEM_LUCKY_EGG, 2
# 69 "data/maps/DaycareNoivernCave/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 70 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 71 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_2, MSGBOX_DEFAULT
# 72 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 73 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


MawileInCave::
# 100 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 101 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 102 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_MAWILE_BATTLE, MawileInCave_1
# 112 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Mawile, GengarDialog_Movement_0
# 113 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Mawile
# 114 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 115 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Mawile, Common_Movement_ExclamationMark
# 116 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Mawile
# 117 "data/maps/DaycareNoivernCave/scripts.pory"
	delay 60
# 118 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 119 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_2, MSGBOX_AUTOCLOSE
# 120 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_MAWILE, 25
# 121 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 122 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 123 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MawileInCave_4
	return

MawileInCave_1:
# 104 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 105 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_1, MSGBOX_DEFAULT
# 106 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 107 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

MawileInCave_4:
# 125 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 126 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_3, MSGBOX_DEFAULT
# 127 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_MAWILE_BATTLE
# 128 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 129 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


MawileInCaveTrigger::
# 136 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_unset FLAG_MAWILE_BATTLE, MawileInCaveTrigger_1
	return

MawileInCaveTrigger_1:
# 138 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 139 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Mawile, Common_Movement_ExclamationMark
# 140 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Mawile
# 141 "data/maps/DaycareNoivernCave/scripts.pory"
	delay 60
# 142 "data/maps/DaycareNoivernCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 143 "data/maps/DaycareNoivernCave/scripts.pory"
	switch VAR_TEMP_2
# 145 "data/maps/DaycareNoivernCave/scripts.pory"
	case 11, MawileInCaveTrigger_4
# 163 "data/maps/DaycareNoivernCave/scripts.pory"
	case 10, MawileInCaveTrigger_5
	return

MawileInCaveTrigger_4:
# 146 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, MawileInCaveTrigger_Movement_0
# 147 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Mawile, MawileInCaveTrigger_Movement_1
# 148 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Mawile
# 149 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 150 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_2, MSGBOX_AUTOCLOSE
# 151 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_MAWILE, 25
# 152 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 153 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 154 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MawileInCaveTrigger_6
	return

MawileInCaveTrigger_5:
# 164 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, MawileInCaveTrigger_Movement_0
# 165 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 166 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_2, MSGBOX_AUTOCLOSE
# 167 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_MAWILE, 25
# 168 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 169 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 170 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MawileInCaveTrigger_8
	return

MawileInCaveTrigger_6:
# 156 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 157 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_3, MSGBOX_DEFAULT
# 158 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_MAWILE_BATTLE
# 159 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 160 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

MawileInCaveTrigger_8:
# 172 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 173 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_3, MSGBOX_DEFAULT
# 174 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_MAWILE_BATTLE
# 175 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 176 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


DuskullInCave::
# 184 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 185 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 186 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_DUSKULL_BATTLE, DuskullInCave_1
# 196 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Duskull, GengarDialog_Movement_0
# 197 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Duskull
# 198 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 199 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Duskull, Common_Movement_ExclamationMark
# 200 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Duskull
# 201 "data/maps/DaycareNoivernCave/scripts.pory"
	delay 60
# 202 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 203 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_2, MSGBOX_AUTOCLOSE
# 204 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_DUSKULL, 25
# 205 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 206 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 207 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq DuskullInCave_4
	return

DuskullInCave_1:
# 188 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 189 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_1, MSGBOX_DEFAULT
# 190 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 191 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

DuskullInCave_4:
# 209 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 210 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_1, MSGBOX_DEFAULT
# 211 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_DUSKULL_BATTLE
# 212 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 213 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


DuskullInCaveTrigger::
# 220 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_unset FLAG_DUSKULL_BATTLE, DuskullInCaveTrigger_1
	return

DuskullInCaveTrigger_1:
# 222 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 223 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Duskull, Common_Movement_ExclamationMark
# 224 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Duskull
# 225 "data/maps/DaycareNoivernCave/scripts.pory"
	delay 60
# 226 "data/maps/DaycareNoivernCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 227 "data/maps/DaycareNoivernCave/scripts.pory"
	switch VAR_TEMP_1
# 229 "data/maps/DaycareNoivernCave/scripts.pory"
	case 15, DuskullInCaveTrigger_4
	return

DuskullInCaveTrigger_4:
# 230 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, DuskullInCaveTrigger_Movement_0
# 231 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Duskull, DuskullInCaveTrigger_Movement_1
# 232 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Duskull
# 233 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 234 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_2, MSGBOX_AUTOCLOSE
# 235 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_DUSKULL, 25
# 236 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 237 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 238 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq DuskullInCaveTrigger_5
	return

DuskullInCaveTrigger_5:
# 240 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 241 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_1, MSGBOX_DEFAULT
# 242 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_DUSKULL_BATTLE
# 243 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 244 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


BattleVsNoivern::
# 253 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_TRANS_NOIVERN, BattleVsNoivern_2
# 257 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 258 "data/maps/DaycareNoivernCave/scripts.pory"
	playbgm MUS_NONE, FALSE
# 259 "data/maps/DaycareNoivernCave/scripts.pory"
	playmoncry SPECIES_NOIVERN, CRY_MODE_NORMAL
# 260 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmoncry
# 261 "data/maps/DaycareNoivernCave/scripts.pory"
	playse SE_PIN
# 262 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 263 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 264 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, MawileInCaveTrigger_Movement_0
# 265 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 266 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsNoivern_Movement_0
# 267 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 268 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsNoivern_Movement_1
# 269 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 270 "data/maps/DaycareNoivernCave/scripts.pory"
	playse SE_M_SCREECH
# 271 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Noivern, BattleVsNoivern_Movement_2
# 272 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Noivern
# 273 "data/maps/DaycareNoivernCave/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 274 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername BattleVsNoivern_Text_0
# 275 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_NOIVERN, EMOTE_ANGRY
# 276 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox BattleVsNoivern_Text_1, MSGBOX_AUTOCLOSE
# 277 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 278 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_NOIVERN, 25
# 279 "data/maps/DaycareNoivernCave/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 280 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 281 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 282 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsNoivern_4
	return

BattleVsNoivern_2:
	end

BattleVsNoivern_4:
# 284 "data/maps/DaycareNoivernCave/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 285 "data/maps/DaycareNoivernCave/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 286 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_TRANS_NOIVERN
# 287 "data/maps/DaycareNoivernCave/scripts.pory"
	delay 30
# 288 "data/maps/DaycareNoivernCave/scripts.pory"
	dittotransform SPECIES_NOIVERN
# 289 "data/maps/DaycareNoivernCave/scripts.pory"
	playse MUS_LEVEL_UP
# 290 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox BattleVsNoivern_Text_2, MSGBOX_DEFAULT
# 291 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 292 "data/maps/DaycareNoivernCave/scripts.pory"
	dittotransform VAR_TEMP_0
# 293 "data/maps/DaycareNoivernCave/scripts.pory"
	givemon SPECIES_NOIVERN, 25, move1 = MOVE_AIR_CUTTER, move2 = MOVE_DRAGON_BREATH, move3 = MOVE_SUPERSONIC, move4 = MOVE_SUPER_FANG
# 294 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 295 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername BattleVsNoivern_Text_0
# 296 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_NOIVERN, EMOTE_NORMAL
# 297 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox BattleVsNoivern_Text_3, MSGBOX_AUTOCLOSE
# 298 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 299 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 300 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Noivern, BattleVsNoivern_Movement_3
# 301 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Noivern
# 302 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Noivern, BattleVsNoivern_Movement_4
# 303 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Noivern
# 304 "data/maps/DaycareNoivernCave/scripts.pory"
	fadenewbgm MUS_PMD_NOIVERNCAVE
# 305 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


# 33 "data/maps/DaycareNoivernCave/scripts.pory"
GengarDialog_Movement_0:
# 33 "data/maps/DaycareNoivernCave/scripts.pory"
	face_player
	step_end

# 146 "data/maps/DaycareNoivernCave/scripts.pory"
MawileInCaveTrigger_Movement_0:
# 146 "data/maps/DaycareNoivernCave/scripts.pory"
	face_up
	step_end

# 147 "data/maps/DaycareNoivernCave/scripts.pory"
MawileInCaveTrigger_Movement_1:
# 147 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_down
	step_end

# 230 "data/maps/DaycareNoivernCave/scripts.pory"
DuskullInCaveTrigger_Movement_0:
# 230 "data/maps/DaycareNoivernCave/scripts.pory"
	face_right
	step_end

# 231 "data/maps/DaycareNoivernCave/scripts.pory"
DuskullInCaveTrigger_Movement_1:
# 231 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_left
# 231 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_left
# 231 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_left
	step_end

# 266 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_0:
# 266 "data/maps/DaycareNoivernCave/scripts.pory"
	lock_facing_direction
	step_end

# 268 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_1:
# 268 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
	step_end

# 271 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_2:
# 271 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
# 271 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
# 271 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
# 271 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
	step_end

# 300 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_3:
# 300 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
# 300 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
# 300 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
# 300 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
	step_end

# 302 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_4:
# 302 "data/maps/DaycareNoivernCave/scripts.pory"
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
	.string "How did you manage to pass\nthrough that rock?\pMaybe you've got a bit of\nGhost_type in you.\pKekeh!\n$"

GengarDialog_Text_2:
# 51 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Back for more?\pI have nothing left for you\pKekeh!\n$"

LitwickDialog_Text_0:
# 65 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Litwick$"

LitwickDialog_Text_1:
# 66 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Noivern is quite the challenge,\nisn't he?\pHere. Take these.\n$"

LitwickDialog_Text_2:
# 71 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "I know a Chansey will exchange\nthese to heal your wounds.$"

LitwickDialog_Text_3:
# 81 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Careful, that bat is fiesty!\n$"

LitwickDialog_Text_4:
# 92 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Noivern is quite the challenge,\nisn't he?$"

MawileInCave_Text_0:
# 104 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Mawile$"

MawileInCave_Text_1:
# 105 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Keep your guard up.\nA strong challenge is ahead.$"

MawileInCave_Text_2:
# 119 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Not many get this far...\nLet's see if you're clever or just lucky.$"

MawileInCave_Text_3:
# 126 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "You’ve got bite.\nMaybe we’re not so different.$"

DuskullInCave_Text_0:
# 188 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Duskull$"

DuskullInCave_Text_1:
# 189 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Even spirits respect strength.\pWander well, traveler.\n$"

DuskullInCave_Text_2:
# 203 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Not many dare to speak to me...\nYou must be bold.$"

BattleVsNoivern_Text_0:
# 274 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Noivern$"

BattleVsNoivern_Text_1:
# 276 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "You tread where echos rule.\pI've ruled over this cave since\nI bested my little brother as a\lNoibat.\pI hope you've come prepared.\pLet's see if you can keep up with\nthe speed of sound!$"

BattleVsNoivern_Text_2:
# 290 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "You have gained the ability to\ntransform into Noivern!$"

BattleVsNoivern_Text_3:
# 297 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Soar high gooey friend.\pYou'll need my flight to reach your\ndestination\pYou near the end of your quest!$"
