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
	createfieldmugshot MUGSHOT_GASTLY, EMOTE_NORMAL
# 10 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox GastlyDialog_Text_1, MSGBOX_NPC
# 11 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 12 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 13 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


HaunterDialog::
# 18 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 19 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 20 "data/maps/DaycareNoivernCave/scripts.pory"
	playse SE_PIN
# 21 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 22 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 23 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername HaunterDialog_Text_0
# 24 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_HAUNTER, EMOTE_NORMAL
# 25 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox HaunterDialog_Text_1, MSGBOX_NPC
# 26 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 27 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 28 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


GengarDialog::
# 33 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 34 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_unset FLAG_GENGAR_EGG, GengarDialog_1
# 54 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Gengar, GengarDialog_Movement_0
# 55 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Gengar
# 56 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername GengarDialog_Text_0
# 57 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_GENGAR, EMOTE_NORMAL
# 58 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox GengarDialog_Text_2, MSGBOX_DEFAULT
# 59 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 60 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 61 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

GengarDialog_1:
# 36 "data/maps/DaycareNoivernCave/scripts.pory"
	playse SE_PIN
# 37 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Gengar, GengarDialog_Movement_0
# 38 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Gengar
# 39 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Gengar, Common_Movement_ExclamationMark
# 40 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Gengar
# 41 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername GengarDialog_Text_0
# 42 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_GENGAR, EMOTE_NORMAL
# 43 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox GengarDialog_Text_1, MSGBOX_DEFAULT
# 44 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 45 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 46 "data/maps/DaycareNoivernCave/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 47 "data/maps/DaycareNoivernCave/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 48 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_GENGAR_EGG
# 49 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 50 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


LitwickDialog::
# 67 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_unset FLAG_LITWICK_EGG, LitwickDialog_1
# 103 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 104 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 105 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 106 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_LITWICK, EMOTE_NORMAL
# 107 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_4, MSGBOX_DEFAULT
# 108 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 109 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 110 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

LitwickDialog_1:
# 69 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_TRANS_NOIVERN, LitwickDialog_4
# 90 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 91 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 92 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 93 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_LITWICK, EMOTE_NORMAL
# 94 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_3, MSGBOX_DEFAULT
# 95 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 96 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 97 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

LitwickDialog_4:
# 71 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 72 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 73 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 74 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_LITWICK, EMOTE_NORMAL
# 75 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_1, MSGBOX_DEFAULT
# 76 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 77 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 78 "data/maps/DaycareNoivernCave/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 79 "data/maps/DaycareNoivernCave/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 80 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername LitwickDialog_Text_0
# 81 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_LITWICK, EMOTE_NORMAL
# 82 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox LitwickDialog_Text_2, MSGBOX_DEFAULT
# 83 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 84 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 85 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


MawileInCave::
# 116 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 117 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 118 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_MAWILE_BATTLE, MawileInCave_1
# 130 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Mawile, GengarDialog_Movement_0
# 131 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Mawile
# 132 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 133 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Mawile, Common_Movement_ExclamationMark
# 134 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Mawile
# 135 "data/maps/DaycareNoivernCave/scripts.pory"
	delay 60
# 136 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 137 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_MAWILE, EMOTE_NORMAL
# 138 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_2, MSGBOX_AUTOCLOSE
# 139 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 140 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_MAWILE, 25
# 141 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 142 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 143 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MawileInCave_4
	return

MawileInCave_1:
# 120 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 121 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_MAWILE, EMOTE_NORMAL
# 122 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_1, MSGBOX_DEFAULT
# 123 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 124 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 125 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

MawileInCave_4:
# 145 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 146 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_MAWILE, EMOTE_NORMAL
# 147 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_3, MSGBOX_DEFAULT
# 148 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_MAWILE_BATTLE
# 149 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 150 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 151 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


MawileInCaveTrigger::
# 158 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_unset FLAG_MAWILE_BATTLE, MawileInCaveTrigger_1
	return

MawileInCaveTrigger_1:
# 160 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 161 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Mawile, Common_Movement_ExclamationMark
# 162 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Mawile
# 163 "data/maps/DaycareNoivernCave/scripts.pory"
	delay 60
# 164 "data/maps/DaycareNoivernCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 165 "data/maps/DaycareNoivernCave/scripts.pory"
	switch VAR_TEMP_2
# 167 "data/maps/DaycareNoivernCave/scripts.pory"
	case 11, MawileInCaveTrigger_4
# 189 "data/maps/DaycareNoivernCave/scripts.pory"
	case 10, MawileInCaveTrigger_5
	return

MawileInCaveTrigger_4:
# 168 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, MawileInCaveTrigger_Movement_0
# 169 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Mawile, MawileInCaveTrigger_Movement_1
# 170 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Mawile
# 171 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 172 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_MAWILE, EMOTE_NORMAL
# 173 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_2, MSGBOX_AUTOCLOSE
# 174 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 175 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_MAWILE, 25
# 176 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 177 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 178 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MawileInCaveTrigger_6
	return

MawileInCaveTrigger_5:
# 190 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, MawileInCaveTrigger_Movement_0
# 191 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 192 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_MAWILE, EMOTE_NORMAL
# 193 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_2, MSGBOX_AUTOCLOSE
# 194 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 195 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_MAWILE, 25
# 196 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 197 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 198 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MawileInCaveTrigger_8
	return

MawileInCaveTrigger_6:
# 180 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 181 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_MAWILE, EMOTE_NORMAL
# 182 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_3, MSGBOX_DEFAULT
# 183 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_MAWILE_BATTLE
# 184 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 185 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 186 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

MawileInCaveTrigger_8:
# 200 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername MawileInCave_Text_0
# 201 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_MAWILE, EMOTE_NORMAL
# 202 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox MawileInCave_Text_3, MSGBOX_DEFAULT
# 203 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_MAWILE_BATTLE
# 204 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 205 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 206 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


DuskullInCave::
# 214 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 215 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 216 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_DUSKULL_BATTLE, DuskullInCave_1
# 228 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Duskull, GengarDialog_Movement_0
# 229 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Duskull
# 230 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 231 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Duskull, Common_Movement_ExclamationMark
# 232 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Duskull
# 233 "data/maps/DaycareNoivernCave/scripts.pory"
	delay 60
# 234 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 235 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_DUSKULL, EMOTE_NORMAL
# 236 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_2, MSGBOX_AUTOCLOSE
# 237 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 238 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_DUSKULL, 25
# 239 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 240 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 241 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq DuskullInCave_4
	return

DuskullInCave_1:
# 218 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 219 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_DUSKULL, EMOTE_NORMAL
# 220 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_1, MSGBOX_DEFAULT
# 221 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 222 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 223 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

DuskullInCave_4:
# 243 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 244 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_DUSKULL, EMOTE_NORMAL
# 245 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_1, MSGBOX_DEFAULT
# 246 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_DUSKULL_BATTLE
# 247 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 248 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 249 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


DuskullInCaveTrigger::
# 256 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_unset FLAG_DUSKULL_BATTLE, DuskullInCaveTrigger_1
	return

DuskullInCaveTrigger_1:
# 258 "data/maps/DaycareNoivernCave/scripts.pory"
	special PlayTrainerEncounterMusic
# 259 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Duskull, Common_Movement_ExclamationMark
# 260 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Duskull
# 261 "data/maps/DaycareNoivernCave/scripts.pory"
	delay 60
# 262 "data/maps/DaycareNoivernCave/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 263 "data/maps/DaycareNoivernCave/scripts.pory"
	switch VAR_TEMP_1
# 265 "data/maps/DaycareNoivernCave/scripts.pory"
	case 15, DuskullInCaveTrigger_4
	return

DuskullInCaveTrigger_4:
# 266 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, DuskullInCaveTrigger_Movement_0
# 267 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Duskull, DuskullInCaveTrigger_Movement_1
# 268 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Duskull
# 269 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 270 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_DUSKULL, EMOTE_NORMAL
# 271 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_2, MSGBOX_AUTOCLOSE
# 272 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 273 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_DUSKULL, 25
# 274 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 275 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 276 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq DuskullInCaveTrigger_5
	return

DuskullInCaveTrigger_5:
# 278 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername DuskullInCave_Text_0
# 279 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_DUSKULL, EMOTE_NORMAL
# 280 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox DuskullInCave_Text_1, MSGBOX_DEFAULT
# 281 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_DUSKULL_BATTLE
# 282 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 283 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 284 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


BattleVsNoivern::
# 293 "data/maps/DaycareNoivernCave/scripts.pory"
	goto_if_set FLAG_TRANS_NOIVERN, BattleVsNoivern_2
# 297 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 298 "data/maps/DaycareNoivernCave/scripts.pory"
	playbgm MUS_NONE, FALSE
# 299 "data/maps/DaycareNoivernCave/scripts.pory"
	playmoncry SPECIES_NOIVERN, CRY_MODE_NORMAL
# 300 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmoncry
# 301 "data/maps/DaycareNoivernCave/scripts.pory"
	playse SE_PIN
# 302 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 303 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 304 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, MawileInCaveTrigger_Movement_0
# 305 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 306 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsNoivern_Movement_0
# 307 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 308 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement LOCALID_PLAYER, BattleVsNoivern_Movement_1
# 309 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement LOCALID_PLAYER
# 310 "data/maps/DaycareNoivernCave/scripts.pory"
	playse SE_M_SCREECH
# 311 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Noivern, BattleVsNoivern_Movement_2
# 312 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Noivern
# 313 "data/maps/DaycareNoivernCave/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 314 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername BattleVsNoivern_Text_0
# 315 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_NOIVERN, EMOTE_ANGRY
# 316 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox BattleVsNoivern_Text_1, MSGBOX_AUTOCLOSE
# 317 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 318 "data/maps/DaycareNoivernCave/scripts.pory"
	setwildbattle SPECIES_NOIVERN, 25, move1 = MOVE_HURRICANE, move2 = MOVE_BOOMBURST, move3 = MOVE_DRAGON_PULSE, move4 = MOVE_DOUBLE_TEAM
# 319 "data/maps/DaycareNoivernCave/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 0, 4, 4, 0, 2, 0, 0
# 320 "data/maps/DaycareNoivernCave/scripts.pory"
	dowildbattle
# 321 "data/maps/DaycareNoivernCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 322 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsNoivern_4
	return

BattleVsNoivern_2:
	end

BattleVsNoivern_4:
# 324 "data/maps/DaycareNoivernCave/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 325 "data/maps/DaycareNoivernCave/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 326 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_TRANS_NOIVERN
# 327 "data/maps/DaycareNoivernCave/scripts.pory"
	delay 15
# 328 "data/maps/DaycareNoivernCave/scripts.pory"
	dittotransform SPECIES_NOIVERN
# 329 "data/maps/DaycareNoivernCave/scripts.pory"
	playse MUS_LEVEL_UP
# 330 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox BattleVsNoivern_Text_2, MSGBOX_DEFAULT
# 331 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 332 "data/maps/DaycareNoivernCave/scripts.pory"
	dittotransform VAR_TEMP_0
# 333 "data/maps/DaycareNoivernCave/scripts.pory"
	givemon SPECIES_NOIVERN, 25, move1 = MOVE_AIR_CUTTER, move2 = MOVE_DRAGON_BREATH, move3 = MOVE_SUPERSONIC, move4 = MOVE_SUPER_FANG
# 334 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 335 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername BattleVsNoivern_Text_0
# 336 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_NOIVERN, EMOTE_NORMAL
# 337 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox BattleVsNoivern_Text_3, MSGBOX_AUTOCLOSE
# 338 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 339 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 340 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Noivern, BattleVsNoivern_Movement_3
# 341 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Noivern
# 342 "data/maps/DaycareNoivernCave/scripts.pory"
	applymovement Noivern, BattleVsNoivern_Movement_4
# 343 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmovement Noivern
# 344 "data/maps/DaycareNoivernCave/scripts.pory"
	fadenewbgm MUS_PMD_NOIVERNCAVE
# 345 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


ChanseyDaycareNoivern::
# 352 "data/maps/DaycareNoivernCave/scripts.pory"
	lock
# 353 "data/maps/DaycareNoivernCave/scripts.pory"
	faceplayer
# 354 "data/maps/DaycareNoivernCave/scripts.pory"
	speakername ChanseyDaycareNoivern_Text_0
# 355 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 356 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox ChanseyDaycareNoivern_Text_1, MSGBOX_DEFAULT
# 357 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 358 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox ChanseyDaycareNoivern_Text_2, MSGBOX_YESNO
# 359 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 360 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyDaycareNoivern_1
# 390 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 391 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox ChanseyDaycareNoivern_Text_5, MSGBOX_AUTOCLOSE
# 392 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 393 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 394 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

ChanseyDaycareNoivern_1:
# 362 "data/maps/DaycareNoivernCave/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 363 "data/maps/DaycareNoivernCave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyDaycareNoivern_4
# 380 "data/maps/DaycareNoivernCave/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 381 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox ChanseyDaycareNoivern_Text_4, MSGBOX_AUTOCLOSE
# 382 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 383 "data/maps/DaycareNoivernCave/scripts.pory"
	removefieldmugshot
# 384 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end

ChanseyDaycareNoivern_4:
# 365 "data/maps/DaycareNoivernCave/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 366 "data/maps/DaycareNoivernCave/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 367 "data/maps/DaycareNoivernCave/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 368 "data/maps/DaycareNoivernCave/scripts.pory"
	playfanfare MUS_HEAL
# 369 "data/maps/DaycareNoivernCave/scripts.pory"
	waitfanfare
# 370 "data/maps/DaycareNoivernCave/scripts.pory"
	special HealPlayerParty
# 371 "data/maps/DaycareNoivernCave/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 372 "data/maps/DaycareNoivernCave/scripts.pory"
	msgbox ChanseyDaycareNoivern_Text_3, MSGBOX_AUTOCLOSE
# 373 "data/maps/DaycareNoivernCave/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 374 "data/maps/DaycareNoivernCave/scripts.pory"
	waitmessage
# 375 "data/maps/DaycareNoivernCave/scripts.pory"
	release
	end


SetNoivernRespawn::
# 401 "data/maps/DaycareNoivernCave/scripts.pory"
	setrespawn HEAL_LOCATION_DAYCARE_NOIVERN_CAVE
	end


# 37 "data/maps/DaycareNoivernCave/scripts.pory"
GengarDialog_Movement_0:
# 37 "data/maps/DaycareNoivernCave/scripts.pory"
	face_player
	step_end

# 168 "data/maps/DaycareNoivernCave/scripts.pory"
MawileInCaveTrigger_Movement_0:
# 168 "data/maps/DaycareNoivernCave/scripts.pory"
	face_up
	step_end

# 169 "data/maps/DaycareNoivernCave/scripts.pory"
MawileInCaveTrigger_Movement_1:
# 169 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_down
	step_end

# 266 "data/maps/DaycareNoivernCave/scripts.pory"
DuskullInCaveTrigger_Movement_0:
# 266 "data/maps/DaycareNoivernCave/scripts.pory"
	face_right
	step_end

# 267 "data/maps/DaycareNoivernCave/scripts.pory"
DuskullInCaveTrigger_Movement_1:
# 267 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_left
# 267 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_left
# 267 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_left
	step_end

# 306 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_0:
# 306 "data/maps/DaycareNoivernCave/scripts.pory"
	lock_facing_direction
	step_end

# 308 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_1:
# 308 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
	step_end

# 311 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_2:
# 311 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
# 311 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
# 311 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
# 311 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_down
	step_end

# 340 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_3:
# 340 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
# 340 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
# 340 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
# 340 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_fast_up
	step_end

# 342 "data/maps/DaycareNoivernCave/scripts.pory"
BattleVsNoivern_Movement_4:
# 342 "data/maps/DaycareNoivernCave/scripts.pory"
	walk_in_place_down
	step_end

GastlyDialog_Text_0:
# 8 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Gastly$"

GastlyDialog_Text_1:
# 10 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "It's no Mt. Pyre, but this cave\ndoes the trick.$"

HaunterDialog_Text_0:
# 23 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Haunter$"

HaunterDialog_Text_1:
# 25 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "BOO!$"

GengarDialog_Text_0:
# 41 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Gengar$"

GengarDialog_Text_1:
# 43 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "How did you manage to pass\nthrough that rock?\pMaybe you've got a bit of\nGhost_type in you.\pKekeh!\n$"

GengarDialog_Text_2:
# 58 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Back for more?\pI have nothing left for you\pKekeh!\n$"

LitwickDialog_Text_0:
# 73 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Litwick$"

LitwickDialog_Text_1:
# 75 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Noivern is quite the challenge,\nisn't he?\pHere. Take this.\n$"

LitwickDialog_Text_2:
# 82 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "I know a Chansey will exchange\nit to heal your wounds.$"

LitwickDialog_Text_3:
# 94 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Careful, that bat is fiesty!\n$"

LitwickDialog_Text_4:
# 107 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Noivern is quite the challenge,\nisn't he?$"

MawileInCave_Text_0:
# 120 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Mawile$"

MawileInCave_Text_1:
# 122 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Keep your guard up.\nA strong challenge is ahead.$"

MawileInCave_Text_2:
# 138 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Not many get this far...\nLet's see if you're clever or just lucky.$"

MawileInCave_Text_3:
# 147 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "You’ve got bite.\nMaybe we’re not so different.$"

DuskullInCave_Text_0:
# 218 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Duskull$"

DuskullInCave_Text_1:
# 220 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Even spirits respect strength.\pWander well, traveler.\n$"

DuskullInCave_Text_2:
# 236 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Not many dare to speak to me...\nYou must be bold.$"

BattleVsNoivern_Text_0:
# 314 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Noivern$"

BattleVsNoivern_Text_1:
# 316 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "You tread where echos rule.\pI've ruled over this cave since\nI bested my little brother as a\lNoibat.\pI hope you've come prepared.\pLet's see if you can keep up with\nthe speed of sound!$"

BattleVsNoivern_Text_2:
# 330 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "You have gained the ability to\ntransform into Noivern!$"

BattleVsNoivern_Text_3:
# 337 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Soar high gooey friend.\pYou'll need my flight to reach your\ndestination\pYou near the end of your quest!$"

ChanseyDaycareNoivern_Text_0:
# 354 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Chansey$"

ChanseyDaycareNoivern_Text_1:
# 356 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.$"

ChanseyDaycareNoivern_Text_2:
# 358 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Would you like to heal?$"

ChanseyDaycareNoivern_Text_3:
# 372 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyDaycareNoivern_Text_4:
# 381 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyDaycareNoivern_Text_5:
# 391 "data/maps/DaycareNoivernCave/scripts.pory"
	.string "Oh, okay then.$"
