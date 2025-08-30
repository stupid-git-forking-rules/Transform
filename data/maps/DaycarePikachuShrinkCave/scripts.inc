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
# 30 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername TarountulaDialog_Text_0
# 31 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_TAROUNTULA, EMOTE_NORMAL
# 32 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_2, MSGBOX_DEFAULT
# 33 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 34 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 35 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_TAROUNTULA, EMOTE_HAPPY
# 36 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_5, MSGBOX_DEFAULT
# 37 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 38 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 39 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_TAROUNTULA, EMOTE_NORMAL
# 40 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_6, MSGBOX_AUTOCLOSE
# 41 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
TarountulaDialog_1:
# 43 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 44 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
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
	msgbox TarountulaDialog_Text_3, MSGBOX_DEFAULT
# 22 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 23 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 24 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_TAROUNTULA, EMOTE_NORMAL
# 25 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_4, MSGBOX_AUTOCLOSE
# 26 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
	goto TarountulaDialog_1


ShroodleInCave::
# 49 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 50 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 51 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_set FLAG_SHROODLE_BATTLE, ShroodleInCave_1
# 63 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Shroodle, ShroodleInCave_Movement_0
# 64 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Shroodle
# 65 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 66 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Shroodle, Common_Movement_ExclamationMark
# 67 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Shroodle
# 68 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 69 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 70 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_HAPPY
# 71 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_2, MSGBOX_AUTOCLOSE
# 72 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 73 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 25
# 74 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 75 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 76 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ShroodleInCave_4
	return

ShroodleInCave_1:
# 53 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 54 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_HAPPY
# 55 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_1, MSGBOX_DEFAULT
# 56 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 57 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 58 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShroodleInCave_4:
# 78 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 79 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_HAPPY
# 80 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_3, MSGBOX_DEFAULT
# 81 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SHROODLE_BATTLE
# 82 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 83 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 84 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


ShroodleInCaveTrigger::
# 92 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_unset FLAG_SHROODLE_BATTLE, ShroodleInCaveTrigger_1
	return

ShroodleInCaveTrigger_1:
# 94 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 95 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Shroodle, Common_Movement_ExclamationMark
# 96 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Shroodle
# 97 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 98 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 99 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	switch VAR_TEMP_2
# 101 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 33, ShroodleInCaveTrigger_4
# 123 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 32, ShroodleInCaveTrigger_5
	return

ShroodleInCaveTrigger_4:
# 102 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 103 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Shroodle, ShroodleInCaveTrigger_Movement_1
# 104 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Shroodle
# 105 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 106 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_HAPPY
# 107 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_2, MSGBOX_AUTOCLOSE
# 108 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 109 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 25
# 110 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 111 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 112 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ShroodleInCaveTrigger_6
	return

ShroodleInCaveTrigger_5:
# 124 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 125 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 126 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_HAPPY
# 127 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_2, MSGBOX_AUTOCLOSE
# 128 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 129 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 25
# 130 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 131 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 132 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ShroodleInCaveTrigger_8
	return

ShroodleInCaveTrigger_6:
# 114 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 115 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_HAPPY
# 116 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_3, MSGBOX_DEFAULT
# 117 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SHROODLE_BATTLE
# 118 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 119 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 120 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShroodleInCaveTrigger_8:
# 134 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 135 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_HAPPY
# 136 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_3, MSGBOX_DEFAULT
# 137 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SHROODLE_BATTLE
# 138 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 139 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 140 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


SewaddleInCave::
# 149 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 150 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 151 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_set FLAG_SEWADDLE_BATTLE, SewaddleInCave_1
# 163 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Sewaddle, ShroodleInCave_Movement_0
# 164 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Sewaddle
# 165 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 166 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Sewaddle, Common_Movement_ExclamationMark
# 167 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Sewaddle
# 168 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 169 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 170 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 171 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_2, MSGBOX_AUTOCLOSE
# 172 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 173 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SEWADDLE, 25
# 174 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 175 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 176 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SewaddleInCave_4
	return

SewaddleInCave_1:
# 153 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 154 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 155 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_1, MSGBOX_DEFAULT
# 156 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 157 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 158 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

SewaddleInCave_4:
# 178 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 179 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 180 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_3, MSGBOX_DEFAULT
# 181 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SEWADDLE_BATTLE
# 182 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 183 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 184 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


SewaddleInCaveTrigger::
# 192 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_unset FLAG_SEWADDLE_BATTLE, SewaddleInCaveTrigger_1
	return

SewaddleInCaveTrigger_1:
# 194 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 195 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Sewaddle, Common_Movement_ExclamationMark
# 196 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Sewaddle
# 197 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 198 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 199 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	switch VAR_TEMP_1
# 201 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 5, SewaddleInCaveTrigger_4
# 222 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 6, SewaddleInCaveTrigger_5
	return

SewaddleInCaveTrigger_4:
# 202 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, SewaddleInCaveTrigger_Movement_0
# 203 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Sewaddle
# 204 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 205 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 206 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_2, MSGBOX_AUTOCLOSE
# 207 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 208 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SEWADDLE, 25
# 209 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 210 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 211 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SewaddleInCaveTrigger_6
	return

SewaddleInCaveTrigger_5:
# 223 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, SewaddleInCaveTrigger_Movement_0
# 224 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Sewaddle, SewaddleInCaveTrigger_Movement_1
# 225 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Sewaddle
# 226 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 227 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 228 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_2, MSGBOX_AUTOCLOSE
# 229 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 230 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SEWADDLE, 25
# 231 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 232 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 233 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SewaddleInCaveTrigger_8
	return

SewaddleInCaveTrigger_6:
# 213 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 214 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 215 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_3, MSGBOX_DEFAULT
# 216 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SEWADDLE_BATTLE
# 217 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 218 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 219 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

SewaddleInCaveTrigger_8:
# 235 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 236 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 237 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_3, MSGBOX_DEFAULT
# 238 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SEWADDLE_BATTLE
# 239 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 240 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 241 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


BlipbugInCave::
# 249 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 250 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 251 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_set FLAG_BLIPBUG_BATTLE, BlipbugInCave_1
# 263 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, ShroodleInCave_Movement_0
# 264 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 265 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 266 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, Common_Movement_ExclamationMark
# 267 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 268 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 269 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 270 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 271 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 272 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 273 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 274 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 275 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 276 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCave_4
	return

BlipbugInCave_1:
# 253 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 254 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 255 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_1, MSGBOX_DEFAULT
# 256 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 257 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 258 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

BlipbugInCave_4:
# 278 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 279 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 280 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_1, MSGBOX_DEFAULT
# 281 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 282 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 283 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 284 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


BlipbugInCaveTrigger::
# 292 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_unset FLAG_BLIPBUG_BATTLE, BlipbugInCaveTrigger_1
	return

BlipbugInCaveTrigger_1:
# 294 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 295 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, Common_Movement_ExclamationMark
# 296 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement
# 297 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 298 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 299 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	switch VAR_TEMP_2
# 301 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 13, BlipbugInCaveTrigger_4
# 323 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 12, BlipbugInCaveTrigger_5
# 345 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 11, BlipbugInCaveTrigger_6
# 367 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 10, BlipbugInCaveTrigger_7
	return

BlipbugInCaveTrigger_4:
# 302 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 303 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, BlipbugInCaveTrigger_Movement_0
# 304 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 305 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 306 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 307 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 308 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 309 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 310 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 311 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 312 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCaveTrigger_8
	return

BlipbugInCaveTrigger_5:
# 324 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 325 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, BlipbugInCaveTrigger_Movement_1
# 326 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 327 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 328 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 329 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 330 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 331 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 332 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 333 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 334 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCaveTrigger_10
	return

BlipbugInCaveTrigger_6:
# 346 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 347 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, ShroodleInCaveTrigger_Movement_1
# 348 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 349 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 350 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 351 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 352 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 353 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 354 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 355 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 356 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCaveTrigger_12
	return

BlipbugInCaveTrigger_7:
# 368 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 369 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 370 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 371 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 372 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 373 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 374 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 375 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 376 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCaveTrigger_14
	return

BlipbugInCaveTrigger_8:
# 314 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 315 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 316 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCaveTrigger_Text_0, MSGBOX_DEFAULT
# 317 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 318 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 319 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 320 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

BlipbugInCaveTrigger_10:
# 336 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 337 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 338 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCaveTrigger_Text_0, MSGBOX_DEFAULT
# 339 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 340 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 341 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 342 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

BlipbugInCaveTrigger_12:
# 358 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 359 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 360 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCaveTrigger_Text_0, MSGBOX_DEFAULT
# 361 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 362 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 363 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 364 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

BlipbugInCaveTrigger_14:
# 378 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 379 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 380 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCaveTrigger_Text_0, MSGBOX_DEFAULT
# 381 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 382 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 383 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 384 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


SinisteaDialog::
# 392 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 393 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 394 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq SinisteaDialog_1
# 406 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SinisteaDialog_Text_0
# 407 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SINISTEA, EMOTE_NORMAL
# 408 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SinisteaDialog_Text_2, MSGBOX_DEFAULT
# 409 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 410 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 411 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

SinisteaDialog_1:
# 396 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SinisteaDialog_Text_0
# 397 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SINISTEA, EMOTE_NORMAL
# 398 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SinisteaDialog_Text_1, MSGBOX_DEFAULT
# 399 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 400 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 401 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


NymbleDialog::
# 417 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 418 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 419 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq NymbleDialog_1
# 431 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername NymbleDialog_Text_0
# 432 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_NYMBLE, EMOTE_HAPPY
# 433 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox NymbleDialog_Text_2, MSGBOX_DEFAULT
# 434 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 435 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 436 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

NymbleDialog_1:
# 421 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername NymbleDialog_Text_0
# 422 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_NYMBLE, EMOTE_NORMAL
# 423 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox NymbleDialog_Text_1, MSGBOX_DEFAULT
# 424 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 425 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 426 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


# 63 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
ShroodleInCave_Movement_0:
# 63 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	face_player
	step_end

# 102 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
ShroodleInCaveTrigger_Movement_0:
# 102 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	face_up
	step_end

# 103 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
ShroodleInCaveTrigger_Movement_1:
# 103 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
	step_end

# 202 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
SewaddleInCaveTrigger_Movement_0:
# 202 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	face_left
	step_end

# 224 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
SewaddleInCaveTrigger_Movement_1:
# 224 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_right
	step_end

# 303 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
BlipbugInCaveTrigger_Movement_0:
# 303 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
# 303 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
# 303 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
	step_end

# 325 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
BlipbugInCaveTrigger_Movement_1:
# 325 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
# 325 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
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
# 21 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "WAIT... HEY!$"

TarountulaDialog_Text_4:
# 25 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "I guess a Ditto could use\nTransform...$"

TarountulaDialog_Text_5:
# 36 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "WAIT... HEY!\pHow did you fit in the tiny\nentrance?\p$"

TarountulaDialog_Text_6:
# 40 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "OH!\nA Ditto you say...$"

ShroodleInCave_Text_0:
# 53 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Shroodle$"

ShroodleInCave_Text_1:
# 55 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "I've yet to gain a single level.\n$"

ShroodleInCave_Text_2:
# 71 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "A trespasser!\n$"

ShroodleInCave_Text_3:
# 80 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Some say battling is the way to\ngain EXP in the Daycare...$"

SewaddleInCave_Text_0:
# 153 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Sewaddle$"

SewaddleInCave_Text_1:
# 155 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Now that I think about it,\nI haven't gained any EXP...\leven when I've won.$"

SewaddleInCave_Text_2:
# 171 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "I hope I level up after this\nbattle!$"

SewaddleInCave_Text_3:
# 180 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "I won't gain any EXP if I keep\nlosing...$"

BlipbugInCave_Text_0:
# 253 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Blipbug$"

BlipbugInCave_Text_1:
# 255 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "You just knew the perfect matchup.\n$"

BlipbugInCave_Text_2:
# 271 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Us little guys need to keep each\nother sharp!$"

BlipbugInCaveTrigger_Text_0:
# 316 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "It's best to pick your battles\nhere.\pIt's every Pokémon for\nthemselves, so try to only battle\lPokémon that you have a type\ladvantage over.$"

SinisteaDialog_Text_0:
# 396 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Sinistea$"

SinisteaDialog_Text_1:
# 398 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "In this cave, you'll find only the\nsmallest of Pokémon.\pWe're the only ones who can fit\nthrough that tiny little entrance!$"

SinisteaDialog_Text_2:
# 408 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Hey!\pAren't you a little too big to be\nin here?$"

NymbleDialog_Text_0:
# 421 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Nymble$"

NymbleDialog_Text_1:
# 423 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Our cave is quite barebones when it\ncomes to decor...\pSome Pokémon will make themselves\nright at home when they find space.$"

NymbleDialog_Text_2:
# 433 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Whoa... you're HUGE!\pPlease don't step on me.\n$"
