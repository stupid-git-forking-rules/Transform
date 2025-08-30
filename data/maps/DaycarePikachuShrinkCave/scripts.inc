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
# 26 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername TarountulaDialog_Text_0
# 27 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_TAROUNTULA, EMOTE_HAPPY
# 28 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_2, MSGBOX_DEFAULT
# 29 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 30 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 31 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_TAROUNTULA, EMOTE_NORMAL
# 32 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_3, MSGBOX_AUTOCLOSE
# 33 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
TarountulaDialog_1:
# 35 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 36 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

TarountulaDialog_2:
# 8 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername TarountulaDialog_Text_0
# 9 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_TAROUNTULA, EMOTE_HAPPY
# 10 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_1, MSGBOX_AUTOCLOSE
# 11 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
	goto TarountulaDialog_1

TarountulaDialog_3:
# 15 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername TarountulaDialog_Text_0
# 16 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_TAROUNTULA, EMOTE_HAPPY
# 17 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_2, MSGBOX_DEFAULT
# 18 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 19 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 20 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_TAROUNTULA, EMOTE_NORMAL
# 21 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_3, MSGBOX_AUTOCLOSE
# 22 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
	goto TarountulaDialog_1


ShroodleInCave::
# 41 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 42 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 43 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_set FLAG_SHROODLE_BATTLE, ShroodleInCave_1
# 55 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Shroodle, ShroodleInCave_Movement_0
# 56 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Shroodle
# 57 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 58 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Shroodle, Common_Movement_ExclamationMark
# 59 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Shroodle
# 60 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 61 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 62 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_NORMAL
# 63 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_2, MSGBOX_AUTOCLOSE
# 64 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 65 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 25
# 66 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 67 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 68 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ShroodleInCave_4
	return

ShroodleInCave_1:
# 45 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 46 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_NORMAL
# 47 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_1, MSGBOX_DEFAULT
# 48 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 49 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 50 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShroodleInCave_4:
# 70 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 71 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_NORMAL
# 72 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_3, MSGBOX_DEFAULT
# 73 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SHROODLE_BATTLE
# 74 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 75 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 76 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


ShroodleInCaveTrigger::
# 84 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_unset FLAG_SHROODLE_BATTLE, ShroodleInCaveTrigger_1
	return

ShroodleInCaveTrigger_1:
# 86 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 87 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Shroodle, Common_Movement_ExclamationMark
# 88 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Shroodle
# 89 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 90 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 91 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	switch VAR_TEMP_2
# 93 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 33, ShroodleInCaveTrigger_4
# 115 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 32, ShroodleInCaveTrigger_5
	return

ShroodleInCaveTrigger_4:
# 94 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 95 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Shroodle, ShroodleInCaveTrigger_Movement_1
# 96 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Shroodle
# 97 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 98 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_NORMAL
# 99 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_2, MSGBOX_AUTOCLOSE
# 100 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 101 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 25
# 102 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 103 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 104 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ShroodleInCaveTrigger_6
	return

ShroodleInCaveTrigger_5:
# 116 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 117 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 118 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_NORMAL
# 119 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_2, MSGBOX_AUTOCLOSE
# 120 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 121 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SHROODLE, 25
# 122 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 123 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 124 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ShroodleInCaveTrigger_8
	return

ShroodleInCaveTrigger_6:
# 106 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 107 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_NORMAL
# 108 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_3, MSGBOX_DEFAULT
# 109 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SHROODLE_BATTLE
# 110 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 111 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 112 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

ShroodleInCaveTrigger_8:
# 126 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername ShroodleInCave_Text_0
# 127 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SHROODLE, EMOTE_NORMAL
# 128 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox ShroodleInCave_Text_3, MSGBOX_DEFAULT
# 129 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SHROODLE_BATTLE
# 130 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 131 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 132 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


SewaddleInCave::
# 141 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 142 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 143 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_set FLAG_SEWADDLE_BATTLE, SewaddleInCave_1
# 155 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Sewaddle, ShroodleInCave_Movement_0
# 156 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Sewaddle
# 157 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 158 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Sewaddle, Common_Movement_ExclamationMark
# 159 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Sewaddle
# 160 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 161 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 162 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 163 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_2, MSGBOX_AUTOCLOSE
# 164 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 165 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SEWADDLE, 25
# 166 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 167 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 168 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SewaddleInCave_4
	return

SewaddleInCave_1:
# 145 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 146 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 147 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_1, MSGBOX_DEFAULT
# 148 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 149 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 150 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

SewaddleInCave_4:
# 170 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 171 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 172 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_3, MSGBOX_DEFAULT
# 173 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SEWADDLE_BATTLE
# 174 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 175 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 176 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


SewaddleInCaveTrigger::
# 184 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_unset FLAG_SEWADDLE_BATTLE, SewaddleInCaveTrigger_1
	return

SewaddleInCaveTrigger_1:
# 186 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 187 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Sewaddle, Common_Movement_ExclamationMark
# 188 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Sewaddle
# 189 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 190 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 191 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	switch VAR_TEMP_1
# 193 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 5, SewaddleInCaveTrigger_4
# 214 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 6, SewaddleInCaveTrigger_5
	return

SewaddleInCaveTrigger_4:
# 194 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, SewaddleInCaveTrigger_Movement_0
# 195 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Sewaddle
# 196 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 197 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 198 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_2, MSGBOX_AUTOCLOSE
# 199 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 200 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SEWADDLE, 25
# 201 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 202 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 203 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SewaddleInCaveTrigger_6
	return

SewaddleInCaveTrigger_5:
# 215 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, SewaddleInCaveTrigger_Movement_0
# 216 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Sewaddle, SewaddleInCaveTrigger_Movement_1
# 217 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Sewaddle
# 218 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 219 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 220 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_2, MSGBOX_AUTOCLOSE
# 221 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 222 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_SEWADDLE, 25
# 223 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 224 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 225 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SewaddleInCaveTrigger_8
	return

SewaddleInCaveTrigger_6:
# 205 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 206 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 207 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_3, MSGBOX_DEFAULT
# 208 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SEWADDLE_BATTLE
# 209 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 210 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 211 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

SewaddleInCaveTrigger_8:
# 227 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SewaddleInCave_Text_0
# 228 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SEWADDLE, EMOTE_NORMAL
# 229 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SewaddleInCave_Text_3, MSGBOX_DEFAULT
# 230 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_SEWADDLE_BATTLE
# 231 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 232 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 233 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


BlipbugInCave::
# 241 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 242 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 243 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_set FLAG_BLIPBUG_BATTLE, BlipbugInCave_1
# 255 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, ShroodleInCave_Movement_0
# 256 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 257 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 258 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, Common_Movement_ExclamationMark
# 259 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 260 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 261 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 262 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 263 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 264 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 265 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 266 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 267 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 268 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCave_4
	return

BlipbugInCave_1:
# 245 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 246 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 247 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_1, MSGBOX_DEFAULT
# 248 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 249 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 250 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

BlipbugInCave_4:
# 270 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 271 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 272 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_1, MSGBOX_DEFAULT
# 273 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 274 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 275 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 276 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


BlipbugInCaveTrigger::
# 284 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	goto_if_unset FLAG_BLIPBUG_BATTLE, BlipbugInCaveTrigger_1
	return

BlipbugInCaveTrigger_1:
# 286 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 287 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, Common_Movement_ExclamationMark
# 288 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement
# 289 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	delay 60
# 290 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 291 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	switch VAR_TEMP_2
# 293 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 13, BlipbugInCaveTrigger_4
# 315 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 12, BlipbugInCaveTrigger_5
# 337 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 11, BlipbugInCaveTrigger_6
# 359 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	case 10, BlipbugInCaveTrigger_7
	return

BlipbugInCaveTrigger_4:
# 294 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 295 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, BlipbugInCaveTrigger_Movement_0
# 296 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 297 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 298 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 299 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 300 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 301 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 302 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 303 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 304 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCaveTrigger_8
	return

BlipbugInCaveTrigger_5:
# 316 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 317 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, BlipbugInCaveTrigger_Movement_1
# 318 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 319 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 320 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 321 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 322 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 323 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 324 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 325 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 326 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCaveTrigger_10
	return

BlipbugInCaveTrigger_6:
# 338 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 339 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement Blipbug, ShroodleInCaveTrigger_Movement_1
# 340 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmovement Blipbug
# 341 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 342 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 343 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 344 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 345 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 346 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 347 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 348 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCaveTrigger_12
	return

BlipbugInCaveTrigger_7:
# 360 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	applymovement LOCALID_PLAYER, ShroodleInCaveTrigger_Movement_0
# 361 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 362 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 363 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCave_Text_2, MSGBOX_AUTOCLOSE
# 364 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 365 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 25
# 366 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	dowildbattle
# 367 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 368 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BlipbugInCaveTrigger_14
	return

BlipbugInCaveTrigger_8:
# 306 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 307 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 308 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCaveTrigger_Text_0, MSGBOX_DEFAULT
# 309 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 310 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 311 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 312 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

BlipbugInCaveTrigger_10:
# 328 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 329 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 330 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCaveTrigger_Text_0, MSGBOX_DEFAULT
# 331 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 332 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 333 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 334 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

BlipbugInCaveTrigger_12:
# 350 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 351 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 352 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCaveTrigger_Text_0, MSGBOX_DEFAULT
# 353 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 354 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 355 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 356 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

BlipbugInCaveTrigger_14:
# 370 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername BlipbugInCave_Text_0
# 371 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_BLIPBUG, EMOTE_NORMAL
# 372 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox BlipbugInCaveTrigger_Text_0, MSGBOX_DEFAULT
# 373 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	setflag FLAG_BLIPBUG_BATTLE
# 374 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 375 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 376 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


SinisteaDialog::
# 384 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 385 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 386 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq SinisteaDialog_1
# 398 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SinisteaDialog_Text_0
# 399 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SINISTEA, EMOTE_NORMAL
# 400 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SinisteaDialog_Text_2, MSGBOX_DEFAULT
# 401 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 402 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 403 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

SinisteaDialog_1:
# 388 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername SinisteaDialog_Text_0
# 389 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_SINISTEA, EMOTE_NORMAL
# 390 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox SinisteaDialog_Text_1, MSGBOX_DEFAULT
# 391 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 392 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 393 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


NymbleDialog::
# 409 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lock
# 410 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 411 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq NymbleDialog_1
# 423 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername NymbleDialog_Text_0
# 424 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_NYMBLE, EMOTE_HAPPY
# 425 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox NymbleDialog_Text_2, MSGBOX_DEFAULT
# 426 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 427 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 428 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end

NymbleDialog_1:
# 413 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername NymbleDialog_Text_0
# 414 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	createfieldmugshot MUGSHOT_NYMBLE, EMOTE_NORMAL
# 415 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox NymbleDialog_Text_1, MSGBOX_DEFAULT
# 416 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
# 417 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	removefieldmugshot
# 418 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	release
	end


# 55 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
ShroodleInCave_Movement_0:
# 55 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	face_player
	step_end

# 94 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
ShroodleInCaveTrigger_Movement_0:
# 94 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	face_up
	step_end

# 95 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
ShroodleInCaveTrigger_Movement_1:
# 95 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
	step_end

# 194 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
SewaddleInCaveTrigger_Movement_0:
# 194 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	face_left
	step_end

# 216 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
SewaddleInCaveTrigger_Movement_1:
# 216 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_right
	step_end

# 295 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
BlipbugInCaveTrigger_Movement_0:
# 295 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
# 295 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
# 295 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
	step_end

# 317 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
BlipbugInCaveTrigger_Movement_1:
# 317 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	walk_down
# 317 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
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
	.string "WAIT... HEY!\pI guess a Ditto could use\nTransform...$"

ShroodleInCave_Text_0:
# 45 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Shroodle$"

ShroodleInCave_Text_1:
# 47 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "I've yet to gain a single level.\n$"

ShroodleInCave_Text_2:
# 63 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "A trespasser!\n$"

ShroodleInCave_Text_3:
# 72 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Some say battling is the way to\ngain EXP in the Daycare...$"

SewaddleInCave_Text_0:
# 145 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Sewaddle$"

SewaddleInCave_Text_1:
# 147 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Now that I think about it,\nI haven't gained any EXP...\leven when I've won.$"

SewaddleInCave_Text_2:
# 163 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "I hope I level up after this\nbattle!$"

SewaddleInCave_Text_3:
# 172 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "I won't gain any EXP if I keep\nlosing...$"

BlipbugInCave_Text_0:
# 245 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Blipbug$"

BlipbugInCave_Text_1:
# 247 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "You just knew the perfect matchup.\n$"

BlipbugInCave_Text_2:
# 263 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Us little guys need to keep each\nother sharp!$"

BlipbugInCaveTrigger_Text_0:
# 308 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "It's best to pick your battles\nhere.\pIt's every Pokémon for\nthemselves, so try to only battle\lPokémon that you have a type\ladvantage over.$"

SinisteaDialog_Text_0:
# 388 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Sinistea$"

SinisteaDialog_Text_1:
# 390 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "In this cave, you'll find only the\nsmallest of Pokémon.\pWe're the only ones who can fit\nthrough that tiny little entrance!$"

SinisteaDialog_Text_2:
# 400 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Hey!\pAren't you a little too big to be\nin here?$"

NymbleDialog_Text_0:
# 413 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Nymble$"

NymbleDialog_Text_1:
# 415 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Our cave is quite barebones when it\ncomes to decor...\pSome Pokémon will make themselves\nright at home when they find space.$"

NymbleDialog_Text_2:
# 425 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Whoa... you're HUGE!\pPlease don't step on me.\n$"
