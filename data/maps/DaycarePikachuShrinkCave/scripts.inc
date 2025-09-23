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
# 16 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq TarountulaDialog_2
# 39 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername TarountulaDialog_Text_0
# 40 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_TAROUNTULA, EMOTE_NORMAL
# 41 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_2, MSGBOX_DEFAULT
# 42 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 43 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 44 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_TAROUNTULA, EMOTE_HAPPY
# 45 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	playse SE_PIN
# 46 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement tarountula, Common_Movement_ExclamationMark
# 47 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement tarountula
# 48 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_5, MSGBOX_DEFAULT
# 49 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 50 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 51 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_TAROUNTULA, EMOTE_NORMAL
# 52 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_6, MSGBOX_AUTOCLOSE
# 53 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 54 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 55 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

TarountulaDialog_1:
# 8 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername TarountulaDialog_Text_0
# 9 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_TAROUNTULA, EMOTE_NORMAL
# 10 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_1, MSGBOX_AUTOCLOSE
# 11 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 12 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 13 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

TarountulaDialog_2:
# 18 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername TarountulaDialog_Text_0
# 19 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_TAROUNTULA, EMOTE_NORMAL
# 20 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_2, MSGBOX_DEFAULT
# 21 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 22 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 23 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_TAROUNTULA, EMOTE_HAPPY
# 24 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	playse SE_PIN
# 25 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement tarountula, Common_Movement_ExclamationMark
# 26 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement tarountula
# 27 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_3, MSGBOX_DEFAULT
# 28 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 29 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 30 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_TAROUNTULA, EMOTE_NORMAL
# 31 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_4, MSGBOX_AUTOCLOSE
# 32 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 33 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 34 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


ShroodleInCave::
# 62 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 63 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 64 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_set FLAG_SHROODLE_BATTLE, ShroodleInCave_1
# 76 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Shroodle, ShroodleInCave_Movement_0
# 77 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Shroodle
# 78 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 79 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Shroodle, Common_Movement_ExclamationMark
# 80 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Shroodle
# 81 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 82 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 83 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_HAPPY
# 84 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_2, MSGBOX_AUTOCLOSE
# 85 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 86 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 25
# 87 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 88 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 89 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ShroodleInCave_4
	return

ShroodleInCave_1:
# 66 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 67 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_HAPPY
# 68 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_1, MSGBOX_DEFAULT
# 69 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 70 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 71 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShroodleInCave_4:
# 91 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 92 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_HAPPY
# 93 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_1, MSGBOX_DEFAULT
# 94 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SHROODLE_BATTLE
# 95 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 96 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 97 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


ShroodleInCaveTrigger::
# 105 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_unset FLAG_SHROODLE_BATTLE, ShroodleInCaveTrigger_1
	return

ShroodleInCaveTrigger_1:
# 107 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 108 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Shroodle, Common_Movement_ExclamationMark
# 109 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Shroodle
# 110 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 111 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 112 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	switch VAR_TEMP_2
# 114 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 33, ShroodleInCaveTrigger_4
# 136 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 32, ShroodleInCaveTrigger_5
	return

ShroodleInCaveTrigger_4:
# 115 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 116 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Shroodle, ShroodleInCaveTrigger_Movement_1
# 117 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Shroodle
# 118 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 119 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_HAPPY
# 120 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_2, MSGBOX_AUTOCLOSE
# 121 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 122 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 25
# 123 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 124 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 125 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ShroodleInCaveTrigger_6
	return

ShroodleInCaveTrigger_5:
# 137 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 138 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 139 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_HAPPY
# 140 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_2, MSGBOX_AUTOCLOSE
# 141 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 142 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 25
# 143 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 144 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 145 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ShroodleInCaveTrigger_8
	return

ShroodleInCaveTrigger_6:
# 127 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 128 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_HAPPY
# 129 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_1, MSGBOX_DEFAULT
# 130 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SHROODLE_BATTLE
# 131 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 132 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 133 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShroodleInCaveTrigger_8:
# 147 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 148 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_HAPPY
# 149 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_1, MSGBOX_DEFAULT
# 150 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SHROODLE_BATTLE
# 151 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 152 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 153 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


SewaddleInCave::
# 162 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 163 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 164 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_set FLAG_SEWADDLE_BATTLE, SewaddleInCave_1
# 176 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Sewaddle, ShroodleInCave_Movement_0
# 177 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Sewaddle
# 178 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 179 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Sewaddle, Common_Movement_ExclamationMark
# 180 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Sewaddle
# 181 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 182 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 183 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 184 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_2, MSGBOX_AUTOCLOSE
# 185 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 186 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SEWADDLE, 25
# 187 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 188 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 189 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SewaddleInCave_4
	return

SewaddleInCave_1:
# 166 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 167 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 168 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_1, MSGBOX_DEFAULT
# 169 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 170 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 171 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

SewaddleInCave_4:
# 191 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 192 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 193 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_3, MSGBOX_DEFAULT
# 194 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SEWADDLE_BATTLE
# 195 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 196 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 197 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


SewaddleInCaveTrigger::
# 205 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_unset FLAG_SEWADDLE_BATTLE, SewaddleInCaveTrigger_1
	return

SewaddleInCaveTrigger_1:
# 207 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 208 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Sewaddle, Common_Movement_ExclamationMark
# 209 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Sewaddle
# 210 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 211 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 212 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	switch VAR_TEMP_1
# 214 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 5, SewaddleInCaveTrigger_4
# 235 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 6, SewaddleInCaveTrigger_5
	return

SewaddleInCaveTrigger_4:
# 215 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, SewaddleInCaveTrigger_Movement_0
# 216 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Sewaddle
# 217 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 218 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 219 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_2, MSGBOX_AUTOCLOSE
# 220 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 221 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SEWADDLE, 25
# 222 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 223 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 224 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SewaddleInCaveTrigger_6
	return

SewaddleInCaveTrigger_5:
# 236 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, SewaddleInCaveTrigger_Movement_0
# 237 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Sewaddle, SewaddleInCaveTrigger_Movement_1
# 238 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Sewaddle
# 239 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 240 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 241 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_2, MSGBOX_AUTOCLOSE
# 242 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 243 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SEWADDLE, 25
# 244 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 245 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 246 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SewaddleInCaveTrigger_8
	return

SewaddleInCaveTrigger_6:
# 226 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 227 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 228 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_3, MSGBOX_DEFAULT
# 229 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SEWADDLE_BATTLE
# 230 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 231 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 232 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

SewaddleInCaveTrigger_8:
# 248 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 249 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 250 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_3, MSGBOX_DEFAULT
# 251 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SEWADDLE_BATTLE
# 252 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 253 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 254 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


BlipbugInCave::
# 262 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 263 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 264 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_set FLAG_BLIPBUG_BATTLE, BlipbugInCave_1
# 276 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, ShroodleInCave_Movement_0
# 277 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 278 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 279 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, Common_Movement_ExclamationMark
# 280 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 281 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 282 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 283 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 284 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 285 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 286 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 287 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 288 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 289 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCave_4
	return

BlipbugInCave_1:
# 266 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 267 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 268 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_1, MSGBOX_DEFAULT
# 269 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 270 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 271 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

BlipbugInCave_4:
# 291 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 292 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 293 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_3, MSGBOX_DEFAULT
# 294 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 295 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 296 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 297 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


BlipbugInCaveTrigger::
# 305 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_unset FLAG_BLIPBUG_BATTLE, BlipbugInCaveTrigger_1
	return

BlipbugInCaveTrigger_1:
# 307 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 308 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, Common_Movement_ExclamationMark
# 309 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement
# 310 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 311 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 312 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	switch VAR_TEMP_2
# 314 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 13, BlipbugInCaveTrigger_4
# 336 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 12, BlipbugInCaveTrigger_5
# 358 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 11, BlipbugInCaveTrigger_6
# 380 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 10, BlipbugInCaveTrigger_7
	return

BlipbugInCaveTrigger_4:
# 315 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 316 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, BlipbugInCaveTrigger_Movement_0
# 317 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 318 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 319 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 320 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 321 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 322 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 323 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 324 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 325 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCaveTrigger_8
	return

BlipbugInCaveTrigger_5:
# 337 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 338 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, BlipbugInCaveTrigger_Movement_1
# 339 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 340 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 341 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 342 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 343 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 344 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 345 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 346 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 347 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCaveTrigger_10
	return

BlipbugInCaveTrigger_6:
# 359 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 360 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, ShroodleInCaveTrigger_Movement_1
# 361 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 362 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 363 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 364 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 365 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 366 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 367 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 368 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 369 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCaveTrigger_12
	return

BlipbugInCaveTrigger_7:
# 381 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 382 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 383 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 384 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 385 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 386 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 387 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 388 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 389 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCaveTrigger_14
	return

BlipbugInCaveTrigger_8:
# 327 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 328 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 329 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_3, MSGBOX_DEFAULT
# 330 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 331 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 332 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 333 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

BlipbugInCaveTrigger_10:
# 349 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 350 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 351 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_3, MSGBOX_DEFAULT
# 352 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 353 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 354 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 355 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

BlipbugInCaveTrigger_12:
# 371 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 372 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 373 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_3, MSGBOX_DEFAULT
# 374 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 375 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 376 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 377 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

BlipbugInCaveTrigger_14:
# 391 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 392 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 393 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_3, MSGBOX_DEFAULT
# 394 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 395 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 396 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 397 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


SinisteaDialog::
# 405 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 406 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement sinistea, ShroodleInCave_Movement_0
# 407 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement sinistea
# 408 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq SinisteaDialog_1
# 420 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SinisteaDialog_Text_0
# 421 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SINISTEA, EMOTE_NORMAL
# 422 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	playse SE_PIN
# 423 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement sinistea, Common_Movement_ExclamationMark
# 424 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement sinistea
# 425 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SinisteaDialog_Text_2, MSGBOX_DEFAULT
# 426 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 427 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 428 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

SinisteaDialog_1:
# 410 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SinisteaDialog_Text_0
# 411 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SINISTEA, EMOTE_NORMAL
# 412 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SinisteaDialog_Text_1, MSGBOX_DEFAULT
# 413 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 414 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 415 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


NymbleDialog::
# 434 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 435 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq NymbleDialog_1
# 449 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement nymble, ShroodleInCave_Movement_0
# 450 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement nymble
# 451 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername NymbleDialog_Text_0
# 452 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_NYMBLE, EMOTE_HAPPY
# 453 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	playse SE_PIN
# 454 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement nymble, Common_Movement_ExclamationMark
# 455 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement nymble
# 456 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox NymbleDialog_Text_2, MSGBOX_DEFAULT
# 457 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 458 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 459 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

NymbleDialog_1:
# 437 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement nymble, ShroodleInCave_Movement_0
# 438 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement nymble
# 439 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername NymbleDialog_Text_0
# 440 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_NYMBLE, EMOTE_NORMAL
# 441 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox NymbleDialog_Text_1, MSGBOX_DEFAULT
# 442 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 443 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 444 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


ShrinkToPikachuCave3::
# 466 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 467 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinkToPikachuCave3_1
# 481 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_set FLAG_TRANS_CUTIEFLY, ShrinkToPikachuCave3_4
ShrinkToPikachuCave3_3:
# 510 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShrinkToPikachuCave3_Text_2, MSGBOX_DEFAULT
# 511 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 512 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShrinkToPikachuCave3_1:
# 469 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShrinkToPikachuCave3_Text_0, MSGBOX_YESNO
# 470 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinkToPikachuCave3_8
# 476 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 477 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShrinkToPikachuCave3_2:
# 483 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	checkpartymove MOVE_STICKY_WEB
# 484 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_ne ShrinkToPikachuCave3_11
# 502 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShrinkToPikachuCave3_Text_2, MSGBOX_DEFAULT
# 503 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 504 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShrinkToPikachuCave3_4:
# 481 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_ne ShrinkToPikachuCave3_2
	goto ShrinkToPikachuCave3_3

ShrinkToPikachuCave3_8:
# 472 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	warp MAP_DAYCAREBASE, 0
	return

ShrinkToPikachuCave3_11:
# 486 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShrinkToPikachuCave3_Text_1, MSGBOX_YESNO
# 487 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinkToPikachuCave3_14
# 495 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 496 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShrinkToPikachuCave3_14:
# 489 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dittotransform SPECIES_CUTIEFLY
# 490 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 30
# 491 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	warp MAP_DAYCAREBASE, 0
	return


ShrinkToPikachuCave4::
# 519 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 520 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinkToPikachuCave4_1
# 534 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_set FLAG_TRANS_CUTIEFLY, ShrinkToPikachuCave4_4
ShrinkToPikachuCave4_3:
# 563 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShrinkToPikachuCave3_Text_2, MSGBOX_DEFAULT
# 564 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 565 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShrinkToPikachuCave4_1:
# 522 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShrinkToPikachuCave3_Text_0, MSGBOX_YESNO
# 523 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinkToPikachuCave4_8
# 529 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 530 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShrinkToPikachuCave4_2:
# 536 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	checkpartymove MOVE_STICKY_WEB
# 537 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_ne ShrinkToPikachuCave4_11
# 555 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShrinkToPikachuCave3_Text_2, MSGBOX_DEFAULT
# 556 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 557 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShrinkToPikachuCave4_4:
# 534 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_ne ShrinkToPikachuCave4_2
	goto ShrinkToPikachuCave4_3

ShrinkToPikachuCave4_8:
# 525 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	warp MAP_DAYCAREBASE, 1
	return

ShrinkToPikachuCave4_11:
# 539 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShrinkToPikachuCave3_Text_1, MSGBOX_YESNO
# 540 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinkToPikachuCave4_14
# 548 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 549 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShrinkToPikachuCave4_14:
# 542 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dittotransform SPECIES_CUTIEFLY
# 543 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 30
# 544 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	warp MAP_DAYCAREBASE, 1
	return


# 76 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
ShroodleInCave_Movement_0:
# 76 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	face_player
	step_end

# 115 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
ShroodleInCaveTrigger_Movement_0:
# 115 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	face_up
	step_end

# 116 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
ShroodleInCaveTrigger_Movement_1:
# 116 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
	step_end

# 215 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
SewaddleInCaveTrigger_Movement_0:
# 215 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	face_left
	step_end

# 237 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
SewaddleInCaveTrigger_Movement_1:
# 237 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_right
	step_end

# 316 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
BlipbugInCaveTrigger_Movement_0:
# 316 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
# 316 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
# 316 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
	step_end

# 338 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
BlipbugInCaveTrigger_Movement_1:
# 338 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
# 338 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
	step_end

TarountulaDialog_Text_0:
# 8 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Tarountula$"

TarountulaDialog_Text_1:
# 10 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "This cave feels so much bigger\nfor us small bug types.\pI'm sure bigger Pokémon suspect\nnothing is in here!$"

TarountulaDialog_Text_2:
# 20 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "This cave feels so much bigger\nfor us small bug types.$"

TarountulaDialog_Text_3:
# 27 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "WAIT... HEY!$"

TarountulaDialog_Text_4:
# 31 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "I guess a Ditto could use\nTransform...$"

TarountulaDialog_Text_5:
# 48 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "WAIT... HEY!\pHow did you fit in the tiny\nentrance?$"

TarountulaDialog_Text_6:
# 52 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "OH!\nA Ditto you say...$"

ShroodleInCave_Text_0:
# 66 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Shroodle$"

ShroodleInCave_Text_1:
# 68 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Some say battling is the way to\ngain EXP in the Daycare.\pI've yet to gain a single level...$"

ShroodleInCave_Text_2:
# 84 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "A trespasser!\n$"

SewaddleInCave_Text_0:
# 166 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Sewaddle$"

SewaddleInCave_Text_1:
# 168 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Now that I think about it,\nI haven't gained any EXP...\leven when I've won.$"

SewaddleInCave_Text_2:
# 184 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "I hope I level up after this\nbattle!$"

SewaddleInCave_Text_3:
# 193 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "I won't gain any EXP if I keep\nlosing...$"

BlipbugInCave_Text_0:
# 266 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Blipbug$"

BlipbugInCave_Text_1:
# 268 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "It's best to pick your battles\nhere.\pIt's every Pokémon for\nthemselves, so try to only battle\lPokémon that you have a type\ladvantage over.$"

BlipbugInCave_Text_2:
# 284 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Us little guys need to keep each\nother sharp!$"

BlipbugInCave_Text_3:
# 293 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "You just knew the perfect matchup.\n$"

SinisteaDialog_Text_0:
# 410 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Sinistea$"

SinisteaDialog_Text_1:
# 412 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "In this cave, you'll find only the\nsmallest of Pokémon.\pWe're the only ones who can fit\nthrough that tiny little entrance!$"

SinisteaDialog_Text_2:
# 425 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Hey!\pAren't you a little too big to be\nin here?$"

NymbleDialog_Text_0:
# 439 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Nymble$"

NymbleDialog_Text_1:
# 441 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Our cave is quite barebones when it\ncomes to decor...\pSome Pokémon will make themselves\nright at home when they find space.$"

NymbleDialog_Text_2:
# 456 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Whoa... you're HUGE!\pPlease don't step on me.\n$"

ShrinkToPikachuCave3_Text_0:
# 469 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "There is a tiny hole that you can\nsqueeze through.\pWould you like to squeeze through it?$"

ShrinkToPikachuCave3_Text_1:
# 486 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "There is a tiny hole.\pA small Pokémon may be able to\nsqueeze through it.\pWould you like to transform into\nCutiefly to squeeze through it?$"

ShrinkToPikachuCave3_Text_2:
# 502 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "There is a tiny hole.\pA small Pokémon may be able to\nsqueeze through it.$"
