DaycarePikachuShrinkCave_MapScripts::
	.byte 0


TarountulaDialog::
# 4 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lockall
# 5 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 6 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq TarountulaDialog_2
# 13 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq TarountulaDialog_3
# 33 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername TarountulaDialog_Text_0
# 34 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_TAROUNTULA, EMOTE_NORMAL
# 35 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_2, MSGBOX_DEFAULT
# 36 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 37 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 38 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_TAROUNTULA, EMOTE_HAPPY
# 39 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	playse SE_PIN
# 40 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement tarountula, Common_Movement_ExclamationMark
# 41 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement tarountula
# 42 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_5, MSGBOX_DEFAULT
# 43 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 44 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 45 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_TAROUNTULA, EMOTE_NORMAL
# 46 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_6, MSGBOX_AUTOCLOSE
# 47 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
TarountulaDialog_1:
# 49 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 50 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

TarountulaDialog_2:
# 8 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername TarountulaDialog_Text_0
# 9 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_TAROUNTULA, EMOTE_NORMAL
# 10 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_1, MSGBOX_AUTOCLOSE
# 11 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
	goto TarountulaDialog_1

TarountulaDialog_3:
# 15 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername TarountulaDialog_Text_0
# 16 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_TAROUNTULA, EMOTE_NORMAL
# 17 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_2, MSGBOX_DEFAULT
# 18 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 19 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 20 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_TAROUNTULA, EMOTE_HAPPY
# 21 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	playse SE_PIN
# 22 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement tarountula, Common_Movement_ExclamationMark
# 23 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement tarountula
# 24 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_3, MSGBOX_DEFAULT
# 25 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 26 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 27 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_TAROUNTULA, EMOTE_NORMAL
# 28 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_4, MSGBOX_AUTOCLOSE
# 29 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
	goto TarountulaDialog_1


ShroodleInCave::
# 55 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 56 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 57 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_set FLAG_SHROODLE_BATTLE, ShroodleInCave_1
# 69 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Shroodle, ShroodleInCave_Movement_0
# 70 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Shroodle
# 71 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 72 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Shroodle, Common_Movement_ExclamationMark
# 73 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Shroodle
# 74 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 75 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 76 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_HAPPY
# 77 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_2, MSGBOX_AUTOCLOSE
# 78 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 79 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 25
# 80 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 81 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 82 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ShroodleInCave_4
	return

ShroodleInCave_1:
# 59 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 60 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_HAPPY
# 61 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_1, MSGBOX_DEFAULT
# 62 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 63 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 64 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShroodleInCave_4:
# 84 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 85 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_HAPPY
# 86 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_1, MSGBOX_DEFAULT
# 87 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SHROODLE_BATTLE
# 88 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 89 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 90 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


ShroodleInCaveTrigger::
# 98 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_unset FLAG_SHROODLE_BATTLE, ShroodleInCaveTrigger_1
	return

ShroodleInCaveTrigger_1:
# 100 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 101 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Shroodle, Common_Movement_ExclamationMark
# 102 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Shroodle
# 103 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 104 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 105 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	switch VAR_TEMP_2
# 107 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 33, ShroodleInCaveTrigger_4
# 129 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 32, ShroodleInCaveTrigger_5
	return

ShroodleInCaveTrigger_4:
# 108 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 109 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Shroodle, ShroodleInCaveTrigger_Movement_1
# 110 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Shroodle
# 111 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 112 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_HAPPY
# 113 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_2, MSGBOX_AUTOCLOSE
# 114 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 115 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 25
# 116 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 117 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 118 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ShroodleInCaveTrigger_6
	return

ShroodleInCaveTrigger_5:
# 130 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 131 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 132 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_HAPPY
# 133 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_2, MSGBOX_AUTOCLOSE
# 134 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 135 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 25
# 136 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 137 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 138 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ShroodleInCaveTrigger_8
	return

ShroodleInCaveTrigger_6:
# 120 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 121 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_HAPPY
# 122 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_1, MSGBOX_DEFAULT
# 123 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SHROODLE_BATTLE
# 124 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 125 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 126 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShroodleInCaveTrigger_8:
# 140 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 141 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_HAPPY
# 142 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_1, MSGBOX_DEFAULT
# 143 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SHROODLE_BATTLE
# 144 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 145 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 146 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


SewaddleInCave::
# 155 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 156 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 157 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_set FLAG_SEWADDLE_BATTLE, SewaddleInCave_1
# 169 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Sewaddle, ShroodleInCave_Movement_0
# 170 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Sewaddle
# 171 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 172 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Sewaddle, Common_Movement_ExclamationMark
# 173 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Sewaddle
# 174 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 175 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 176 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 177 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_2, MSGBOX_AUTOCLOSE
# 178 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 179 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SEWADDLE, 25
# 180 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 181 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 182 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SewaddleInCave_4
	return

SewaddleInCave_1:
# 159 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 160 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 161 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_1, MSGBOX_DEFAULT
# 162 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 163 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 164 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

SewaddleInCave_4:
# 184 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 185 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 186 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_3, MSGBOX_DEFAULT
# 187 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SEWADDLE_BATTLE
# 188 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 189 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 190 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


SewaddleInCaveTrigger::
# 198 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_unset FLAG_SEWADDLE_BATTLE, SewaddleInCaveTrigger_1
	return

SewaddleInCaveTrigger_1:
# 200 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 201 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Sewaddle, Common_Movement_ExclamationMark
# 202 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Sewaddle
# 203 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 204 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 205 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	switch VAR_TEMP_1
# 207 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 5, SewaddleInCaveTrigger_4
# 228 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 6, SewaddleInCaveTrigger_5
	return

SewaddleInCaveTrigger_4:
# 208 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, SewaddleInCaveTrigger_Movement_0
# 209 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Sewaddle
# 210 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 211 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 212 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_2, MSGBOX_AUTOCLOSE
# 213 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 214 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SEWADDLE, 25
# 215 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 216 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 217 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SewaddleInCaveTrigger_6
	return

SewaddleInCaveTrigger_5:
# 229 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, SewaddleInCaveTrigger_Movement_0
# 230 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Sewaddle, SewaddleInCaveTrigger_Movement_1
# 231 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Sewaddle
# 232 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 233 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 234 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_2, MSGBOX_AUTOCLOSE
# 235 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 236 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SEWADDLE, 25
# 237 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 238 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 239 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SewaddleInCaveTrigger_8
	return

SewaddleInCaveTrigger_6:
# 219 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 220 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 221 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_3, MSGBOX_DEFAULT
# 222 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SEWADDLE_BATTLE
# 223 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 224 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 225 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

SewaddleInCaveTrigger_8:
# 241 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 242 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 243 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_3, MSGBOX_DEFAULT
# 244 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SEWADDLE_BATTLE
# 245 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 246 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 247 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


BlipbugInCave::
# 255 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 256 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 257 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_set FLAG_BLIPBUG_BATTLE, BlipbugInCave_1
# 269 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, ShroodleInCave_Movement_0
# 270 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 271 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 272 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, Common_Movement_ExclamationMark
# 273 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 274 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 275 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 276 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 277 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 278 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 279 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 280 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 281 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 282 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCave_4
	return

BlipbugInCave_1:
# 259 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 260 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 261 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_1, MSGBOX_DEFAULT
# 262 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 263 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 264 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

BlipbugInCave_4:
# 284 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 285 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 286 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_3, MSGBOX_DEFAULT
# 287 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 288 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 289 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 290 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


BlipbugInCaveTrigger::
# 298 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_unset FLAG_BLIPBUG_BATTLE, BlipbugInCaveTrigger_1
	return

BlipbugInCaveTrigger_1:
# 300 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 301 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, Common_Movement_ExclamationMark
# 302 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement
# 303 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 304 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 305 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	switch VAR_TEMP_2
# 307 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 13, BlipbugInCaveTrigger_4
# 329 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 12, BlipbugInCaveTrigger_5
# 351 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 11, BlipbugInCaveTrigger_6
# 373 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 10, BlipbugInCaveTrigger_7
	return

BlipbugInCaveTrigger_4:
# 308 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 309 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, BlipbugInCaveTrigger_Movement_0
# 310 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 311 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 312 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 313 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 314 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 315 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 316 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 317 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 318 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCaveTrigger_8
	return

BlipbugInCaveTrigger_5:
# 330 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 331 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, BlipbugInCaveTrigger_Movement_1
# 332 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 333 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 334 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 335 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 336 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 337 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 338 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 339 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 340 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCaveTrigger_10
	return

BlipbugInCaveTrigger_6:
# 352 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 353 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, ShroodleInCaveTrigger_Movement_1
# 354 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 355 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 356 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 357 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 358 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 359 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 360 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 361 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 362 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCaveTrigger_12
	return

BlipbugInCaveTrigger_7:
# 374 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 375 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 376 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 377 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 378 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 379 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 380 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 381 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 382 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCaveTrigger_14
	return

BlipbugInCaveTrigger_8:
# 320 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 321 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 322 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_3, MSGBOX_DEFAULT
# 323 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 324 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 325 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 326 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

BlipbugInCaveTrigger_10:
# 342 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 343 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 344 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_3, MSGBOX_DEFAULT
# 345 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 346 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 347 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 348 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

BlipbugInCaveTrigger_12:
# 364 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 365 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 366 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_3, MSGBOX_DEFAULT
# 367 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 368 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 369 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 370 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

BlipbugInCaveTrigger_14:
# 384 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 385 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 386 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_3, MSGBOX_DEFAULT
# 387 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 388 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 389 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 390 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


SinisteaDialog::
# 398 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 399 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement sinistea, ShroodleInCave_Movement_0
# 400 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq SinisteaDialog_1
# 412 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SinisteaDialog_Text_0
# 413 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SINISTEA, EMOTE_NORMAL
# 414 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	playse SE_PIN
# 415 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement sinistea, Common_Movement_ExclamationMark
# 416 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement sinistea
# 417 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SinisteaDialog_Text_2, MSGBOX_DEFAULT
# 418 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 419 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 420 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

SinisteaDialog_1:
# 402 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SinisteaDialog_Text_0
# 403 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SINISTEA, EMOTE_NORMAL
# 404 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SinisteaDialog_Text_1, MSGBOX_DEFAULT
# 405 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 406 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 407 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


NymbleDialog::
# 426 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 427 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq NymbleDialog_1
# 441 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement nymble, ShroodleInCave_Movement_0
# 442 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement nymble
# 443 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername NymbleDialog_Text_0
# 444 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_NYMBLE, EMOTE_HAPPY
# 445 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	playse SE_PIN
# 446 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement nymble, Common_Movement_ExclamationMark
# 447 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement nymble
# 448 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox NymbleDialog_Text_2, MSGBOX_DEFAULT
# 449 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 450 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 451 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

NymbleDialog_1:
# 429 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement nymble, ShroodleInCave_Movement_0
# 430 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement nymble
# 431 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername NymbleDialog_Text_0
# 432 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_NYMBLE, EMOTE_NORMAL
# 433 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox NymbleDialog_Text_1, MSGBOX_DEFAULT
# 434 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 435 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 436 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


ShrinkToPikachuCave3::
# 458 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 459 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinkToPikachuCave3_1
# 473 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_set FLAG_TRANS_CUTIEFLY, ShrinkToPikachuCave3_4
ShrinkToPikachuCave3_3:
# 491 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShrinkToPikachuCave3_Text_2, MSGBOX_DEFAULT
# 492 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 493 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShrinkToPikachuCave3_1:
# 461 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShrinkToPikachuCave3_Text_0, MSGBOX_YESNO
# 462 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinkToPikachuCave3_8
# 468 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 469 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShrinkToPikachuCave3_2:
# 475 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShrinkToPikachuCave3_Text_1, MSGBOX_YESNO
# 476 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinkToPikachuCave3_11
# 484 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 485 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShrinkToPikachuCave3_4:
# 473 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_ne ShrinkToPikachuCave3_2
	goto ShrinkToPikachuCave3_3

ShrinkToPikachuCave3_8:
# 464 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	warp MAP_DAYCAREBASE, 0
	return

ShrinkToPikachuCave3_11:
# 478 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dittotransform SPECIES_CUTIEFLY
# 479 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 30
# 480 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	warp MAP_DAYCAREBASE, 0
	return


ShrinkToPikachuCave4::
# 500 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 501 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinkToPikachuCave4_1
# 515 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_set FLAG_TRANS_CUTIEFLY, ShrinkToPikachuCave4_4
ShrinkToPikachuCave4_3:
# 533 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShrinkToPikachuCave3_Text_2, MSGBOX_DEFAULT
# 534 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 535 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShrinkToPikachuCave4_1:
# 503 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShrinkToPikachuCave3_Text_0, MSGBOX_YESNO
# 504 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinkToPikachuCave4_8
# 510 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 511 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShrinkToPikachuCave4_2:
# 517 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShrinkToPikachuCave3_Text_1, MSGBOX_YESNO
# 518 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinkToPikachuCave4_11
# 526 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 527 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShrinkToPikachuCave4_4:
# 515 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_ne ShrinkToPikachuCave4_2
	goto ShrinkToPikachuCave4_3

ShrinkToPikachuCave4_8:
# 506 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	warp MAP_DAYCAREBASE, 1
	return

ShrinkToPikachuCave4_11:
# 520 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dittotransform SPECIES_CUTIEFLY
# 521 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 30
# 522 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	warp MAP_DAYCAREBASE, 1
	return


# 69 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
ShroodleInCave_Movement_0:
# 69 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	face_player
	step_end

# 108 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
ShroodleInCaveTrigger_Movement_0:
# 108 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	face_up
	step_end

# 109 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
ShroodleInCaveTrigger_Movement_1:
# 109 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
	step_end

# 208 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
SewaddleInCaveTrigger_Movement_0:
# 208 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	face_left
	step_end

# 230 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
SewaddleInCaveTrigger_Movement_1:
# 230 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_right
	step_end

# 309 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
BlipbugInCaveTrigger_Movement_0:
# 309 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
# 309 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
# 309 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
	step_end

# 331 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
BlipbugInCaveTrigger_Movement_1:
# 331 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
# 331 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
	step_end

TarountulaDialog_Text_0:
# 8 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Tarountula$"

TarountulaDialog_Text_1:
# 10 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "This cave feels so much bigger\nfor us small bug types.\pI'm sure bigger Pokémon suspect\nnothing is in here!$"

TarountulaDialog_Text_2:
# 17 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "This cave feels so much bigger\nfor us small bug types.$"

TarountulaDialog_Text_3:
# 24 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "WAIT... HEY!$"

TarountulaDialog_Text_4:
# 28 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "I guess a Ditto could use\nTransform...$"

TarountulaDialog_Text_5:
# 42 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "WAIT... HEY!\pHow did you fit in the tiny\nentrance?\p$"

TarountulaDialog_Text_6:
# 46 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "OH!\nA Ditto you say...$"

ShroodleInCave_Text_0:
# 59 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Shroodle$"

ShroodleInCave_Text_1:
# 61 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Some say battling is the way to\ngain EXP in the Daycare.\pI've yet to gain a single level...$"

ShroodleInCave_Text_2:
# 77 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "A trespasser!\n$"

SewaddleInCave_Text_0:
# 159 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Sewaddle$"

SewaddleInCave_Text_1:
# 161 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Now that I think about it,\nI haven't gained any EXP...\leven when I've won.$"

SewaddleInCave_Text_2:
# 177 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "I hope I level up after this\nbattle!$"

SewaddleInCave_Text_3:
# 186 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "I won't gain any EXP if I keep\nlosing...$"

BlipbugInCave_Text_0:
# 259 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Blipbug$"

BlipbugInCave_Text_1:
# 261 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "It's best to pick your battles\nhere.\pIt's every Pokémon for\nthemselves, so try to only battle\lPokémon that you have a type\ladvantage over.$"

BlipbugInCave_Text_2:
# 277 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Us little guys need to keep each\nother sharp!$"

BlipbugInCave_Text_3:
# 286 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "You just knew the perfect matchup.\n$"

SinisteaDialog_Text_0:
# 402 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Sinistea$"

SinisteaDialog_Text_1:
# 404 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "In this cave, you'll find only the\nsmallest of Pokémon.\pWe're the only ones who can fit\nthrough that tiny little entrance!$"

SinisteaDialog_Text_2:
# 417 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Hey!\pAren't you a little too big to be\nin here?$"

NymbleDialog_Text_0:
# 431 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Nymble$"

NymbleDialog_Text_1:
# 433 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Our cave is quite barebones when it\ncomes to decor...\pSome Pokémon will make themselves\nright at home when they find space.$"

NymbleDialog_Text_2:
# 448 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Whoa... you're HUGE!\pPlease don't step on me.\n$"

ShrinkToPikachuCave3_Text_0:
# 461 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "There is a tiny hole that you can\nsqueeze through.\pWould you like to squeeze through it?$"

ShrinkToPikachuCave3_Text_1:
# 475 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "There is a tiny hole.\pA small Pokémon may be able to\nsqueeze through it.\pWould you like to transform into\nCutiefly to squeeze through it?$"

ShrinkToPikachuCave3_Text_2:
# 491 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "There is a tiny hole.\pA small Pokémon may be able to\nsqueeze through it.$"
