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
	faceplayer
# 31 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Gengar, Common_Movement_ExclamationMark
# 32 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Gengar
# 33 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername GengarDialog_Text_0
# 34 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox GengarDialog_Text_1, MSGBOX_DEFAULT
# 35 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 36 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


LitwickDialog::
# 41 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_unset FLAG_LITWICK_EGG, LitwickDialog_1
# 71 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 72 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 73 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 74 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_4, MSGBOX_DEFAULT
# 75 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 76 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

LitwickDialog_1:
# 43 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_TRANS_NOIVERN, LitwickDialog_4
# 60 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 61 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 62 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 63 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_3, MSGBOX_DEFAULT
# 64 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 65 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

LitwickDialog_4:
# 45 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 46 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 47 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 48 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_1, MSGBOX_DEFAULT
# 49 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 50 "data/maps/DaycareNoivernCave/scripts.pory"
	giveitem ITEM_LUCKY_EGG, 2
# 51 "data/maps/DaycareNoivernCave/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 52 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 53 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_2, MSGBOX_DEFAULT
# 54 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 55 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


MawileInCave::
# 82 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 83 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 84 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_MAWILE_BATTLE, MawileInCave_1
# 94 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 95 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Mawile, Common_Movement_ExclamationMark
# 96 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement
# 97 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 98 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_2, MSGBOX_AUTOCLOSE
# 99 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_MAWILE, 25
# 100 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 101 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 102 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MawileInCave_4
	return

MawileInCave_1:
# 86 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 87 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_1, MSGBOX_DEFAULT
# 88 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 89 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

MawileInCave_4:
# 104 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 105 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_3, MSGBOX_DEFAULT
# 106 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_MAWILE_BATTLE
# 107 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 108 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


MawileInCaveTrigger::
# 115 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_unset FLAG_MAWILE_BATTLE, MawileInCaveTrigger_1
	return

MawileInCaveTrigger_1:
# 117 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 118 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Mawile, Common_Movement_ExclamationMark
# 119 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement
# 120 "data/maps/DaycareNoivernCave/scripts.pory"
	delay 40
# 121 "data/maps/DaycareNoivernCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 122 "data/maps/DaycareNoivernCave/scripts.pory"
	switch VAR_TEMP_2
# 124 "data/maps/DaycareNoivernCave/scripts.pory"
	case 11, MawileInCaveTrigger_4
# 142 "data/maps/DaycareNoivernCave/scripts.pory"
	case 10, MawileInCaveTrigger_5
	return

MawileInCaveTrigger_4:
# 125 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, MawileInCaveTrigger_Movement_0
# 126 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Mawile, MawileInCaveTrigger_Movement_1
# 127 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Mawile
# 128 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 129 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_2, MSGBOX_AUTOCLOSE
# 130 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_MAWILE, 25
# 131 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 132 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 133 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MawileInCaveTrigger_6
	return

MawileInCaveTrigger_5:
# 143 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, MawileInCaveTrigger_Movement_0
# 144 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 145 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_2, MSGBOX_AUTOCLOSE
# 146 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_MAWILE, 25
# 147 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 148 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 149 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MawileInCaveTrigger_8
	return

MawileInCaveTrigger_6:
# 135 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 136 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_3, MSGBOX_DEFAULT
# 137 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_MAWILE_BATTLE
# 138 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 139 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

MawileInCaveTrigger_8:
# 151 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 152 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_3, MSGBOX_DEFAULT
# 153 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_MAWILE_BATTLE
# 154 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 155 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


DuskullInCave::
# 163 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 164 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 165 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_DUSKULL_BATTLE, DuskullInCave_1
# 175 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 176 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Duskull, Common_Movement_ExclamationMark
# 177 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement
# 178 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 179 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_2, MSGBOX_AUTOCLOSE
# 180 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_DUSKULL, 25
# 181 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 182 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 183 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq DuskullInCave_4
	return

DuskullInCave_1:
# 167 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 168 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_1, MSGBOX_DEFAULT
# 169 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 170 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

DuskullInCave_4:
# 185 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 186 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_1, MSGBOX_DEFAULT
# 187 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_DUSKULL_BATTLE
# 188 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 189 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


DuskullInCaveTrigger::
# 196 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_unset FLAG_DUSKULL_BATTLE, DuskullInCaveTrigger_1
	return

DuskullInCaveTrigger_1:
# 198 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 199 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Duskull, Common_Movement_ExclamationMark
# 200 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement
# 201 "data/maps/DaycareNoivernCave/scripts.pory"
	delay 40
# 202 "data/maps/DaycareNoivernCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 203 "data/maps/DaycareNoivernCave/scripts.pory"
	switch VAR_TEMP_1
# 205 "data/maps/DaycareNoivernCave/scripts.pory"
	case 15, DuskullInCaveTrigger_4
	return

DuskullInCaveTrigger_4:
# 206 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, DuskullInCaveTrigger_Movement_0
# 207 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Duskull, DuskullInCaveTrigger_Movement_1
# 208 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 209 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_2, MSGBOX_AUTOCLOSE
# 210 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_DUSKULL, 25
# 211 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 212 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 213 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq DuskullInCaveTrigger_5
	return

DuskullInCaveTrigger_5:
# 215 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 216 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_1, MSGBOX_DEFAULT
# 217 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_DUSKULL_BATTLE
# 218 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 219 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


BattleVsNoivern::
# 228 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_TRANS_NOIVERN, BattleVsNoivern_2
# 232 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 233 "data/maps/DaycareNoivernCave/scripts.pory"
	playmoncry SPECIES_NOIVERN, CRY_MODE_NORMAL
# 234 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmoncry
# 235 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 236 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 237 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, MawileInCaveTrigger_Movement_0
# 238 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 239 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsNoivern_Movement_0
# 240 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 241 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsNoivern_Movement_1
# 242 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 243 "data/maps/DaycareNoivernCave/scripts.pory"
	playse SE_M_SCREECH
# 244 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Noivern, BattleVsNoivern_Movement_2
# 245 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Noivern
# 246 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername BattleVsNoivern_Text_0
# 247 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox BattleVsNoivern_Text_1, MSGBOX_AUTOCLOSE
# 248 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_NOIVERN, 25
# 249 "data/maps/DaycareNoivernCave/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 250 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 251 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 252 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsNoivern_4
	return

BattleVsNoivern_2:
	end

BattleVsNoivern_4:
# 254 "data/maps/DaycareNoivernCave/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 255 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_TRANS_NOIVERN
# 256 "data/maps/DaycareNoivernCave/scripts.pory"
	dittotransform SPECIES_NOIVERN
# 257 "data/maps/DaycareNoivernCave/scripts.pory"
	playse MUS_LEVEL_UP
# 258 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox BattleVsNoivern_Text_2, MSGBOX_DEFAULT
# 259 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 260 "data/maps/DaycareNoivernCave/scripts.pory"
	dittotransform VAR_TEMP_0
# 261 "data/maps/DaycareNoivernCave/scripts.pory"
	givemon SPECIES_NOIVERN, 25, move1 = MOVE_AIR_CUTTER, move2 = MOVE_DRAGON_BREATH, move3 = MOVE_SUPERSONIC, move4 = MOVE_SUPER_FANG
# 262 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 263 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername BattleVsNoivern_Text_0
# 264 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox BattleVsNoivern_Text_3, MSGBOX_DEFAULT
# 265 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 266 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Noivern, BattleVsNoivern_Movement_3
# 267 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Noivern
# 268 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Noivern, BattleVsNoivern_Movement_4
# 269 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Noivern
# 270 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


# 125 "data/maps/DaycareNoivernCave/scripts.pory"
MawileInCaveTrigger_Movement_0:
# 125 "data/maps/DaycareNoivernCave/scripts.pory"
	face_up
	step_end

# 126 "data/maps/DaycareNoivernCave/scripts.pory"
MawileInCaveTrigger_Movement_1:
# 126 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_down
	step_end

# 206 "data/maps/DaycareNoivernCave/scripts.pory"
DuskullInCaveTrigger_Movement_0:
# 206 "data/maps/DaycareNoivernCave/scripts.pory"
	face_right
	step_end

# 207 "data/maps/DaycareNoivernCave/scripts.pory"
DuskullInCaveTrigger_Movement_1:
# 207 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_left
# 207 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_left
# 207 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_left
	step_end

# 239 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_0:
# 239 "data/maps/DaycareNoivernCave/scripts.pory"
	lock_facing_direction
	step_end

# 241 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_1:
# 241 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
	step_end

# 244 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_2:
# 244 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
# 244 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
# 244 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
# 244 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
	step_end

# 266 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_3:
# 266 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
# 266 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
# 266 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
# 266 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
	step_end

# 268 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_4:
# 268 "data/maps/DaycareNoivernCave/scripts.pory"
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
# 33 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Gengar$"

GengarDialog_Text_1:
# 34 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "How did you manage to pass\nthrough that rock?\pMaybe you've got a bit of\nGhost_type in you.\pMWAHAHA!\n$"

LitwickDialog_Text_0:
# 47 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Litwick$"

LitwickDialog_Text_1:
# 48 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Noivern is quite the challenge,\nisn't he?\pHere. Take these.\n$"

LitwickDialog_Text_2:
# 53 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "I know a Chansey will exchange\nthese to heal your wounds.$"

LitwickDialog_Text_3:
# 63 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Careful, that bat is fiesty!\n$"

LitwickDialog_Text_4:
# 74 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Noivern is quite the challenge,\nisn't he?$"

MawileInCave_Text_0:
# 86 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Mawile$"

MawileInCave_Text_1:
# 87 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Keep your guard up.\nA strong challenge is ahead.$"

MawileInCave_Text_2:
# 98 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Not many get this far...\nLet's see if you're clever or just lucky.$"

MawileInCave_Text_3:
# 105 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "You’ve got bite.\nMaybe we’re not so different.$"

DuskullInCave_Text_0:
# 167 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Duskull$"

DuskullInCave_Text_1:
# 168 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Even spirits respect strength.\pWander well, traveler.\n$"

DuskullInCave_Text_2:
# 179 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Not many dare to speak to me...\nYou must be bold.$"

BattleVsNoivern_Text_0:
# 246 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Noivern$"

BattleVsNoivern_Text_1:
# 247 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "You tread where echoes rule.\pLet's see if you can keep up with\nthe speed of sound!.$"

BattleVsNoivern_Text_2:
# 258 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "You have gained the ability to\ntransform into Noivern!$"

BattleVsNoivern_Text_3:
# 264 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Soar high gooey friend.\pYou'll need my flight to reach your\ndestination$"
