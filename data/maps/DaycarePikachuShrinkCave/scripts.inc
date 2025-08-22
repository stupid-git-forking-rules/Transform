DaycarePikachuShrinkCave_MapScripts::
	.byte 0


TarountulaDialog::
# 4 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lockall
# 5 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 6 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq TarountulaDialog_1
# 12 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq TarountulaDialog_2
# 20 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername TarountulaDialog_Text_0
# 21 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_3, MSGBOX_AUTOCLOSE
# 22 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
	return

TarountulaDialog_1:
# 8 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername TarountulaDialog_Text_0
# 9 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_1, MSGBOX_AUTOCLOSE
# 10 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
	return

TarountulaDialog_2:
# 14 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername TarountulaDialog_Text_0
# 15 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_2, MSGBOX_AUTOCLOSE
# 16 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
	return


ShroodleInCave::
# 27 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 28 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 29 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_set FLAG_SHROODLE_BATTLE, ShroodleInCave_1
# 39 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Shroodle, ShroodleInCave_Movement_0
# 40 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Shroodle
# 41 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 42 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Shroodle, Common_Movement_ExclamationMark
# 43 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Shroodle
# 44 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 45 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 46 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_2, MSGBOX_AUTOCLOSE
# 47 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 25
# 48 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 49 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 50 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ShroodleInCave_4
	return

ShroodleInCave_1:
# 31 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 32 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_1, MSGBOX_DEFAULT
# 33 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 34 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShroodleInCave_4:
# 52 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 53 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_3, MSGBOX_DEFAULT
# 54 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SHROODLE_BATTLE
# 55 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 56 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


ShroodleInCaveTrigger::
# 64 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_unset FLAG_SHROODLE_BATTLE, ShroodleInCaveTrigger_1
	return

ShroodleInCaveTrigger_1:
# 66 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 67 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Shroodle, Common_Movement_ExclamationMark
# 68 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Shroodle
# 69 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 70 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 71 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	switch VAR_TEMP_2
# 73 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 33, ShroodleInCaveTrigger_4
# 91 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 32, ShroodleInCaveTrigger_5
	return

ShroodleInCaveTrigger_4:
# 74 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 75 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Shroodle, ShroodleInCaveTrigger_Movement_1
# 76 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Shroodle
# 77 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 78 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_2, MSGBOX_AUTOCLOSE
# 79 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 25
# 80 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 81 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 82 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ShroodleInCaveTrigger_6
	return

ShroodleInCaveTrigger_5:
# 92 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 93 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 94 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_2, MSGBOX_AUTOCLOSE
# 95 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 25
# 96 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 97 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 98 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ShroodleInCaveTrigger_8
	return

ShroodleInCaveTrigger_6:
# 84 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 85 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_3, MSGBOX_DEFAULT
# 86 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SHROODLE_BATTLE
# 87 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 88 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShroodleInCaveTrigger_8:
# 100 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 101 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_3, MSGBOX_DEFAULT
# 102 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SHROODLE_BATTLE
# 103 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 104 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


SewaddleInCave::
# 113 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 114 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 115 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_set FLAG_SEWADDLE_BATTLE, SewaddleInCave_1
# 125 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Sewaddle, ShroodleInCave_Movement_0
# 126 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Sewaddle
# 127 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 128 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Sewaddle, Common_Movement_ExclamationMark
# 129 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Sewaddle
# 130 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 131 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 132 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_2, MSGBOX_AUTOCLOSE
# 133 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SEWADDLE, 25
# 134 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 135 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 136 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SewaddleInCave_4
	return

SewaddleInCave_1:
# 117 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 118 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_1, MSGBOX_DEFAULT
# 119 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 120 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

SewaddleInCave_4:
# 138 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 139 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_3, MSGBOX_DEFAULT
# 140 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SEWADDLE_BATTLE
# 141 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 142 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


SewaddleInCaveTrigger::
# 150 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_unset FLAG_SEWADDLE_BATTLE, SewaddleInCaveTrigger_1
	return

SewaddleInCaveTrigger_1:
# 152 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 153 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Sewaddle, Common_Movement_ExclamationMark
# 154 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Sewaddle
# 155 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 156 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 157 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	switch VAR_TEMP_1
# 159 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 5, SewaddleInCaveTrigger_4
# 175 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 6, SewaddleInCaveTrigger_5
	return

SewaddleInCaveTrigger_4:
# 160 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, SewaddleInCaveTrigger_Movement_0
# 161 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 162 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_2, MSGBOX_AUTOCLOSE
# 163 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SEWADDLE, 25
# 164 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 165 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 166 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SewaddleInCaveTrigger_6
	return

SewaddleInCaveTrigger_5:
# 176 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, SewaddleInCaveTrigger_Movement_0
# 177 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Sewaddle, SewaddleInCaveTrigger_Movement_1
# 178 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 179 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_2, MSGBOX_AUTOCLOSE
# 180 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SEWADDLE, 25
# 181 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 182 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 183 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SewaddleInCaveTrigger_8
	return

SewaddleInCaveTrigger_6:
# 168 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 169 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_3, MSGBOX_DEFAULT
# 170 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SEWADDLE_BATTLE
# 171 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 172 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

SewaddleInCaveTrigger_8:
# 185 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 186 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_3, MSGBOX_DEFAULT
# 187 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SEWADDLE_BATTLE
# 188 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 189 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


BlipbugInCave::
# 197 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 198 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 199 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_set FLAG_BLIPBUG_BATTLE, BlipbugInCave_1
# 209 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, ShroodleInCave_Movement_0
# 210 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 211 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 212 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, Common_Movement_ExclamationMark
# 213 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 214 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 215 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 216 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 217 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 218 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 219 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 220 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCave_4
	return

BlipbugInCave_1:
# 201 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 202 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_1, MSGBOX_DEFAULT
# 203 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 204 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

BlipbugInCave_4:
# 222 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 223 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_1, MSGBOX_DEFAULT
# 224 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 225 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 226 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


BlipbugInCaveTrigger::
# 234 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_unset FLAG_BLIPBUG_BATTLE, BlipbugInCaveTrigger_1
	return

BlipbugInCaveTrigger_1:
# 236 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 237 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, Common_Movement_ExclamationMark
# 238 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement
# 239 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 240 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 241 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	switch VAR_TEMP_2
# 243 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 13, BlipbugInCaveTrigger_4
# 261 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 12, BlipbugInCaveTrigger_5
# 279 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 11, BlipbugInCaveTrigger_6
# 297 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 10, BlipbugInCaveTrigger_7
	return

BlipbugInCaveTrigger_4:
# 244 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 245 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, BlipbugInCaveTrigger_Movement_0
# 246 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 247 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 248 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 249 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 250 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 251 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 252 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCaveTrigger_8
	return

BlipbugInCaveTrigger_5:
# 262 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 263 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, BlipbugInCaveTrigger_Movement_1
# 264 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 265 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 266 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 267 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 268 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 269 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 270 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCaveTrigger_10
	return

BlipbugInCaveTrigger_6:
# 280 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 281 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, ShroodleInCaveTrigger_Movement_1
# 282 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 283 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 284 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 285 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 286 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 287 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 288 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCaveTrigger_12
	return

BlipbugInCaveTrigger_7:
# 298 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 299 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 300 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 301 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 302 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 303 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 304 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCaveTrigger_14
	return

BlipbugInCaveTrigger_8:
# 254 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 255 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCaveTrigger_Text_0, MSGBOX_DEFAULT
# 256 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 257 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 258 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

BlipbugInCaveTrigger_10:
# 272 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 273 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCaveTrigger_Text_0, MSGBOX_DEFAULT
# 274 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 275 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 276 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

BlipbugInCaveTrigger_12:
# 290 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 291 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCaveTrigger_Text_0, MSGBOX_DEFAULT
# 292 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 293 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 294 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

BlipbugInCaveTrigger_14:
# 306 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 307 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCaveTrigger_Text_0, MSGBOX_DEFAULT
# 308 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 309 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 310 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


SinisteaDialog::
# 318 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 319 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 320 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq SinisteaDialog_1
# 330 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SinisteaDialog_Text_0
# 331 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SinisteaDialog_Text_2, MSGBOX_DEFAULT
# 332 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 333 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

SinisteaDialog_1:
# 322 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SinisteaDialog_Text_0
# 323 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SinisteaDialog_Text_1, MSGBOX_DEFAULT
# 324 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 325 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


NymbleDialog::
# 339 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 340 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 341 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq NymbleDialog_1
# 351 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SinisteaDialog_Text_0
# 352 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox NymbleDialog_Text_2, MSGBOX_DEFAULT
# 353 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 354 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

NymbleDialog_1:
# 343 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername NymbleDialog_Text_0
# 344 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox NymbleDialog_Text_1, MSGBOX_DEFAULT
# 345 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 346 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


# 39 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
ShroodleInCave_Movement_0:
# 39 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	face_player
	step_end

# 74 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
ShroodleInCaveTrigger_Movement_0:
# 74 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	face_up
	step_end

# 75 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
ShroodleInCaveTrigger_Movement_1:
# 75 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
	step_end

# 160 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
SewaddleInCaveTrigger_Movement_0:
# 160 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	face_left
	step_end

# 177 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
SewaddleInCaveTrigger_Movement_1:
# 177 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_right
	step_end

# 245 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
BlipbugInCaveTrigger_Movement_0:
# 245 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
# 245 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
# 245 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
	step_end

# 263 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
BlipbugInCaveTrigger_Movement_1:
# 263 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
# 263 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
	step_end

TarountulaDialog_Text_0:
# 8 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Tarountula$"

TarountulaDialog_Text_1:
# 9 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "This cave feels so much bigger\nfor us small bug types.\pI'm sure bigger Pokémon suspect\nnothing is in here!$"

TarountulaDialog_Text_2:
# 15 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "This cave feels so much bigger\nfor us small bug types.\pWAIT... HEY!\pI guess a Ditto could use\nTransform...$"

TarountulaDialog_Text_3:
# 21 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "This cave feels so much bigger\nfor us small bug types.\pWAIT... HEY!\pHow did you fit in the tiny\nentrance?\pOH!\nA Ditto you say...$"

ShroodleInCave_Text_0:
# 31 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Shroodle$"

ShroodleInCave_Text_1:
# 32 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "I've yet to gain a single level.\n$"

ShroodleInCave_Text_2:
# 46 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "A trespasser!\n$"

ShroodleInCave_Text_3:
# 53 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Some say battling is the way to\ngain EXP in the Daycare...$"

SewaddleInCave_Text_0:
# 117 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Sewaddle$"

SewaddleInCave_Text_1:
# 118 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Now that I think about it,\nI haven't gained any EXP...\leven when I've won.$"

SewaddleInCave_Text_2:
# 132 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "I hope I level up after this\nbattle!$"

SewaddleInCave_Text_3:
# 139 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "I won't gain any EXP if I keep\nlosing...$"

BlipbugInCave_Text_0:
# 201 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Blipbug$"

BlipbugInCave_Text_1:
# 202 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "You just knew the perfect matchup.\n$"

BlipbugInCave_Text_2:
# 216 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Us little guys need to keep each\nother sharp!$"

BlipbugInCaveTrigger_Text_0:
# 255 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "It's best to pick your battles\nhere.\pIt's every Pokémon for\nthemselves, so try to only battle\lPokémon that you have a type\ladvantage over.$"

SinisteaDialog_Text_0:
# 322 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Sinistea$"

SinisteaDialog_Text_1:
# 323 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "In this cave, you'll find only the\nsmallest of Pokémon.\pWe're the only ones who can fit\nthrough that tiny little entrance!$"

SinisteaDialog_Text_2:
# 331 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Hey!\pAren't you a little too big to be\nin here?$"

NymbleDialog_Text_0:
# 343 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Nymble$"

NymbleDialog_Text_1:
# 344 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Our cave is quite barebones when it\ncomes to decor...\pSome Pokémon will make themselves\nright at home when they find space.$"

NymbleDialog_Text_2:
# 352 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Whoa... you're HUGE!\pPlease don't step on me.\n$"
