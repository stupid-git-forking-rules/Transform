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
	waitmessage
# 38 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


LitwickDialog::
# 43 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_unset FLAG_LITWICK_EGG, LitwickDialog_1
# 73 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 74 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 75 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 76 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_4, MSGBOX_DEFAULT
# 77 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 78 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

LitwickDialog_1:
# 45 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_TRANS_NOIVERN, LitwickDialog_4
# 62 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 63 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 64 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 65 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_3, MSGBOX_DEFAULT
# 66 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 67 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

LitwickDialog_4:
# 47 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 48 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 49 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 50 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_1, MSGBOX_DEFAULT
# 51 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 52 "data/maps/DaycareNoivernCave/scripts.pory"
	giveitem ITEM_LUCKY_EGG, 2
# 53 "data/maps/DaycareNoivernCave/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 54 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 55 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_2, MSGBOX_DEFAULT
# 56 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 57 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


MawileInCave::
# 84 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 85 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 86 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_MAWILE_BATTLE, MawileInCave_1
# 96 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Mawile, GengarDialog_Movement_0
# 97 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Mawile
# 98 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 99 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Mawile, Common_Movement_ExclamationMark
# 100 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement
# 101 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 102 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_2, MSGBOX_AUTOCLOSE
# 103 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_MAWILE, 25
# 104 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 105 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 106 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MawileInCave_4
	return

MawileInCave_1:
# 88 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 89 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_1, MSGBOX_DEFAULT
# 90 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 91 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

MawileInCave_4:
# 108 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 109 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_3, MSGBOX_DEFAULT
# 110 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_MAWILE_BATTLE
# 111 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 112 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


MawileInCaveTrigger::
# 119 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_unset FLAG_MAWILE_BATTLE, MawileInCaveTrigger_1
	return

MawileInCaveTrigger_1:
# 121 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 122 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Mawile, Common_Movement_ExclamationMark
# 123 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement
# 124 "data/maps/DaycareNoivernCave/scripts.pory"
	delay 40
# 125 "data/maps/DaycareNoivernCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 126 "data/maps/DaycareNoivernCave/scripts.pory"
	switch VAR_TEMP_2
# 128 "data/maps/DaycareNoivernCave/scripts.pory"
	case 11, MawileInCaveTrigger_4
# 146 "data/maps/DaycareNoivernCave/scripts.pory"
	case 10, MawileInCaveTrigger_5
	return

MawileInCaveTrigger_4:
# 129 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, MawileInCaveTrigger_Movement_0
# 130 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Mawile, MawileInCaveTrigger_Movement_1
# 131 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Mawile
# 132 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 133 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_2, MSGBOX_AUTOCLOSE
# 134 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_MAWILE, 25
# 135 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 136 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 137 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MawileInCaveTrigger_6
	return

MawileInCaveTrigger_5:
# 147 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, MawileInCaveTrigger_Movement_0
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
	goto_if_eq MawileInCaveTrigger_8
	return

MawileInCaveTrigger_6:
# 139 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 140 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_3, MSGBOX_DEFAULT
# 141 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_MAWILE_BATTLE
# 142 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 143 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

MawileInCaveTrigger_8:
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


DuskullInCave::
# 167 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 168 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 169 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_DUSKULL_BATTLE, DuskullInCave_1
# 179 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Duskull, GengarDialog_Movement_0
# 180 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Duskull
# 181 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 182 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Duskull, Common_Movement_ExclamationMark
# 183 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Duskull
# 184 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 185 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_2, MSGBOX_AUTOCLOSE
# 186 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_DUSKULL, 25
# 187 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 188 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 189 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq DuskullInCave_4
	return

DuskullInCave_1:
# 171 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 172 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_1, MSGBOX_DEFAULT
# 173 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 174 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

DuskullInCave_4:
# 191 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 192 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_1, MSGBOX_DEFAULT
# 193 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_DUSKULL_BATTLE
# 194 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 195 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


DuskullInCaveTrigger::
# 202 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_unset FLAG_DUSKULL_BATTLE, DuskullInCaveTrigger_1
	return

DuskullInCaveTrigger_1:
# 204 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 205 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Duskull, Common_Movement_ExclamationMark
# 206 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement
# 207 "data/maps/DaycareNoivernCave/scripts.pory"
	delay 40
# 208 "data/maps/DaycareNoivernCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 209 "data/maps/DaycareNoivernCave/scripts.pory"
	switch VAR_TEMP_1
# 211 "data/maps/DaycareNoivernCave/scripts.pory"
	case 15, DuskullInCaveTrigger_4
	return

DuskullInCaveTrigger_4:
# 212 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, DuskullInCaveTrigger_Movement_0
# 213 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Duskull, DuskullInCaveTrigger_Movement_1
# 214 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 215 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_2, MSGBOX_AUTOCLOSE
# 216 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_DUSKULL, 25
# 217 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 218 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 219 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq DuskullInCaveTrigger_5
	return

DuskullInCaveTrigger_5:
# 221 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 222 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_1, MSGBOX_DEFAULT
# 223 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_DUSKULL_BATTLE
# 224 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 225 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


BattleVsNoivern::
# 234 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_TRANS_NOIVERN, BattleVsNoivern_2
# 238 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 239 "data/maps/DaycareNoivernCave/scripts.pory"
	playmoncry SPECIES_NOIVERN, CRY_MODE_NORMAL
# 240 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmoncry
# 241 "data/maps/DaycareNoivernCave/scripts.pory"
	playse SE_PIN
# 242 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 243 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 244 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, MawileInCaveTrigger_Movement_0
# 245 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 246 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsNoivern_Movement_0
# 247 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 248 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsNoivern_Movement_1
# 249 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 250 "data/maps/DaycareNoivernCave/scripts.pory"
	playse SE_M_SCREECH
# 251 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Noivern, BattleVsNoivern_Movement_2
# 252 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Noivern
# 253 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername BattleVsNoivern_Text_0
# 254 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox BattleVsNoivern_Text_1, MSGBOX_AUTOCLOSE
# 255 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_NOIVERN, 25
# 256 "data/maps/DaycareNoivernCave/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 257 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 258 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 259 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsNoivern_4
	return

BattleVsNoivern_2:
	end

BattleVsNoivern_4:
# 261 "data/maps/DaycareNoivernCave/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 262 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_TRANS_NOIVERN
# 263 "data/maps/DaycareNoivernCave/scripts.pory"
	dittotransform SPECIES_NOIVERN
# 264 "data/maps/DaycareNoivernCave/scripts.pory"
	playse MUS_LEVEL_UP
# 265 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox BattleVsNoivern_Text_2, MSGBOX_DEFAULT
# 266 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 267 "data/maps/DaycareNoivernCave/scripts.pory"
	dittotransform VAR_TEMP_0
# 268 "data/maps/DaycareNoivernCave/scripts.pory"
	givemon SPECIES_NOIVERN, 25, move1 = MOVE_AIR_CUTTER, move2 = MOVE_DRAGON_BREATH, move3 = MOVE_SUPERSONIC, move4 = MOVE_SUPER_FANG
# 269 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 270 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername BattleVsNoivern_Text_0
# 271 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox BattleVsNoivern_Text_3, MSGBOX_DEFAULT
# 272 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 273 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Noivern, BattleVsNoivern_Movement_3
# 274 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Noivern
# 275 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Noivern, BattleVsNoivern_Movement_4
# 276 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Noivern
# 277 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


# 31 "data/maps/DaycareNoivernCave/scripts.pory"
GengarDialog_Movement_0:
# 31 "data/maps/DaycareNoivernCave/scripts.pory"
	face_player
	step_end

# 129 "data/maps/DaycareNoivernCave/scripts.pory"
MawileInCaveTrigger_Movement_0:
# 129 "data/maps/DaycareNoivernCave/scripts.pory"
	face_up
	step_end

# 130 "data/maps/DaycareNoivernCave/scripts.pory"
MawileInCaveTrigger_Movement_1:
# 130 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_down
	step_end

# 212 "data/maps/DaycareNoivernCave/scripts.pory"
DuskullInCaveTrigger_Movement_0:
# 212 "data/maps/DaycareNoivernCave/scripts.pory"
	face_right
	step_end

# 213 "data/maps/DaycareNoivernCave/scripts.pory"
DuskullInCaveTrigger_Movement_1:
# 213 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_left
# 213 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_left
# 213 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_left
	step_end

# 246 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_0:
# 246 "data/maps/DaycareNoivernCave/scripts.pory"
	lock_facing_direction
	step_end

# 248 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_1:
# 248 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
	step_end

# 251 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_2:
# 251 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
# 251 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
# 251 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
# 251 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
	step_end

# 273 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_3:
# 273 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
# 273 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
# 273 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
# 273 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
	step_end

# 275 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_4:
# 275 "data/maps/DaycareNoivernCave/scripts.pory"
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
# 49 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Litwick$"

LitwickDialog_Text_1:
# 50 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Noivern is quite the challenge,\nisn't he?\pHere. Take these.\n$"

LitwickDialog_Text_2:
# 55 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "I know a Chansey will exchange\nthese to heal your wounds.$"

LitwickDialog_Text_3:
# 65 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Careful, that bat is fiesty!\n$"

LitwickDialog_Text_4:
# 76 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Noivern is quite the challenge,\nisn't he?$"

MawileInCave_Text_0:
# 88 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Mawile$"

MawileInCave_Text_1:
# 89 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Keep your guard up.\nA strong challenge is ahead.$"

MawileInCave_Text_2:
# 102 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Not many get this far...\nLet's see if you're clever or just lucky.$"

MawileInCave_Text_3:
# 109 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "You’ve got bite.\nMaybe we’re not so different.$"

DuskullInCave_Text_0:
# 171 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Duskull$"

DuskullInCave_Text_1:
# 172 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Even spirits respect strength.\pWander well, traveler.\n$"

DuskullInCave_Text_2:
# 185 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Not many dare to speak to me...\nYou must be bold.$"

BattleVsNoivern_Text_0:
# 253 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Noivern$"

BattleVsNoivern_Text_1:
# 254 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "You tread where echoes rule.\pLet's see if you can keep up with\nthe speed of sound!.$"

BattleVsNoivern_Text_2:
# 265 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "You have gained the ability to\ntransform into Noivern!$"

BattleVsNoivern_Text_3:
# 271 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Soar high gooey friend.\pYou'll need my flight to reach your\ndestination$"
