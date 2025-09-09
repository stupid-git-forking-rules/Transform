DaycareEast_MapScripts::
	.byte 0


KrabbyDialog::
# 5 "data/maps/DaycareEast/scripts.pory"
	lock
# 6 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 7 "data/maps/DaycareEast/scripts.pory"
	speakername KrabbyDialog_Text_0
# 8 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_KRABBY, EMOTE_NORMAL
# 9 "data/maps/DaycareEast/scripts.pory"
	msgbox KrabbyDialog_Text_1, MSGBOX_NPC
# 10 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 11 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 12 "data/maps/DaycareEast/scripts.pory"
	release
	end


AlolanRaichuDialog::
# 17 "data/maps/DaycareEast/scripts.pory"
	lock
# 18 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 19 "data/maps/DaycareEast/scripts.pory"
	speakername AlolanRaichuDialog_Text_0
# 20 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_ALOLANRAICHU, EMOTE_NORMAL
# 21 "data/maps/DaycareEast/scripts.pory"
	msgbox AlolanRaichuDialog_Text_1, MSGBOX_DEFAULT
# 22 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 23 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 24 "data/maps/DaycareEast/scripts.pory"
	release
	end


SandyghastDialog::
# 29 "data/maps/DaycareEast/scripts.pory"
	lock
# 30 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 31 "data/maps/DaycareEast/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_RHYHORN
	goto_if_eq SandyghastDialog_2
# 41 "data/maps/DaycareEast/scripts.pory"
	speakername SandyghastDialog_Text_0
# 42 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_SANDYGHAST, EMOTE_NORMAL
# 43 "data/maps/DaycareEast/scripts.pory"
	msgbox SandyghastDialog_Text_2, MSGBOX_DEFAULT
# 44 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 45 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
SandyghastDialog_1:
# 47 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 48 "data/maps/DaycareEast/scripts.pory"
	release
	end

SandyghastDialog_2:
# 33 "data/maps/DaycareEast/scripts.pory"
	speakername SandyghastDialog_Text_0
# 34 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_SANDYGHAST, EMOTE_HAPPY
# 35 "data/maps/DaycareEast/scripts.pory"
	msgbox SandyghastDialog_Text_1, MSGBOX_DEFAULT
# 36 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 37 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
	goto SandyghastDialog_1


DaycareEast_FindLuckyEgg::
# 53 "data/maps/DaycareEast/scripts.pory"
	lock
# 54 "data/maps/DaycareEast/scripts.pory"
	finditem ITEM_LUCKY_EGG
# 55 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 56 "data/maps/DaycareEast/scripts.pory"
	release
	end


ShellosEastDialog::
# 61 "data/maps/DaycareEast/scripts.pory"
	lock
# 62 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 63 "data/maps/DaycareEast/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_MARILL
	goto_if_eq ShellosEastDialog_2
# 70 "data/maps/DaycareEast/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CHINCHOU
	goto_if_eq ShellosEastDialog_3
# 79 "data/maps/DaycareEast/scripts.pory"
	speakername ShellosEastDialog_Text_0
# 80 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_SHELLOS, EMOTE_NORMAL
# 81 "data/maps/DaycareEast/scripts.pory"
	msgbox ShellosEastDialog_Text_3, MSGBOX_NPC
# 82 "data/maps/DaycareEast/scripts.pory"
	waitmessage
ShellosEastDialog_1:
# 84 "data/maps/DaycareEast/scripts.pory"
	release
	end

ShellosEastDialog_2:
# 65 "data/maps/DaycareEast/scripts.pory"
	speakername ShellosEastDialog_Text_0
# 66 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_SHELLOS, EMOTE_HAPPY
# 67 "data/maps/DaycareEast/scripts.pory"
	msgbox ShellosEastDialog_Text_1, MSGBOX_NPC
# 68 "data/maps/DaycareEast/scripts.pory"
	waitmessage
	goto ShellosEastDialog_1

ShellosEastDialog_3:
# 72 "data/maps/DaycareEast/scripts.pory"
	speakername ShellosEastDialog_Text_0
# 73 "data/maps/DaycareEast/scripts.pory"
	msgbox ShellosEastDialog_Text_2, MSGBOX_NPC
# 74 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_SHELLOS, EMOTE_HAPPY
# 75 "data/maps/DaycareEast/scripts.pory"
	waitmessage
	goto ShellosEastDialog_1


AlolanExeggutorDialog::
# 89 "data/maps/DaycareEast/scripts.pory"
	lock
# 90 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 91 "data/maps/DaycareEast/scripts.pory"
	speakername AlolanExeggutorDialog_Text_0
# 92 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_ALOLANEXEGGUTOR, EMOTE_NORMAL
# 93 "data/maps/DaycareEast/scripts.pory"
	msgbox AlolanExeggutorDialog_Text_1, MSGBOX_DEFAULT
# 94 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 95 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 96 "data/maps/DaycareEast/scripts.pory"
	release
	end


WingullDialog::
# 101 "data/maps/DaycareEast/scripts.pory"
	lock
# 102 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 103 "data/maps/DaycareEast/scripts.pory"
	speakername WingullDialog_Text_0
# 104 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_WINGULL, EMOTE_HAPPY
# 105 "data/maps/DaycareEast/scripts.pory"
	msgbox WingullDialog_Text_1, MSGBOX_DEFAULT
# 106 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 107 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 108 "data/maps/DaycareEast/scripts.pory"
	release
	end


RuffletDialog::
# 113 "data/maps/DaycareEast/scripts.pory"
	lock
# 114 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, RuffletDialog_Movement_0
# 115 "data/maps/DaycareEast/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq RuffletDialog_7
RuffletDialog_5:
# 178 "data/maps/DaycareEast/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq RuffletDialog_4
RuffletDialog_3:
# 245 "data/maps/DaycareEast/scripts.pory"
	speakername RuffletDialog_Text_0
# 246 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_RUFFLET, EMOTE_ANGRY
# 247 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_5, MSGBOX_DEFAULT
# 248 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 249 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 250 "data/maps/DaycareEast/scripts.pory"
	release
	end

RuffletDialog_1:
# 117 "data/maps/DaycareEast/scripts.pory"
	speakername RuffletDialog_Text_0
# 118 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_RUFFLET, EMOTE_ANGRY
# 119 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_1, MSGBOX_DEFAULT
# 120 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 121 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 122 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, Common_Movement_ExclamationMark
# 123 "data/maps/DaycareEast/scripts.pory"
	playse SE_PIN
# 124 "data/maps/DaycareEast/scripts.pory"
	waitfanfare
# 125 "data/maps/DaycareEast/scripts.pory"
	waitmovement
# 126 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_RUFFLET, EMOTE_ELATED
# 127 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_2, MSGBOX_DEFAULT
# 128 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 129 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, Common_Movement_ExclamationMark
# 130 "data/maps/DaycareEast/scripts.pory"
	playse SE_PIN
# 131 "data/maps/DaycareEast/scripts.pory"
	waitfanfare
# 132 "data/maps/DaycareEast/scripts.pory"
	waitmovement
# 133 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_3, MSGBOX_DEFAULT
# 134 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 135 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 136 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 137 "data/maps/DaycareEast/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 138 "data/maps/DaycareEast/scripts.pory"
	waitfanfare
# 139 "data/maps/DaycareEast/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 140 "data/maps/DaycareEast/scripts.pory"
	speakername RuffletDialog_Text_0
# 141 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_RUFFLET, EMOTE_ELATED
# 142 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_4, MSGBOX_AUTOCLOSE
# 143 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 144 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 145 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, RuffletFlyAway
# 146 "data/maps/DaycareEast/scripts.pory"
	waitmovement 0
# 147 "data/maps/DaycareEast/scripts.pory"
	playse SE_LEDGE
# 149 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, RuffletDialog_Movement_1
# 153 "data/maps/DaycareEast/scripts.pory"
	waitmovement 0
# 154 "data/maps/DaycareEast/scripts.pory"
	playse SE_FALL
# 155 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, RuffletDialog_Movement_2
# 157 "data/maps/DaycareEast/scripts.pory"
	waitmovement 0
# 158 "data/maps/DaycareEast/scripts.pory"
	delay 30
# 160 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8004, 2
# 161 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8005, 6
# 162 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8006, 4
# 163 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8007, 4
# 164 "data/maps/DaycareEast/scripts.pory"
	special ShakeCamera
# 165 "data/maps/DaycareEast/scripts.pory"
	waitstate
# 166 "data/maps/DaycareEast/scripts.pory"
	delay 60
# 168 "data/maps/DaycareEast/scripts.pory"
	playse SE_BANG
# 169 "data/maps/DaycareEast/scripts.pory"
	waitfanfare
# 170 "data/maps/DaycareEast/scripts.pory"
	delay 60
# 171 "data/maps/DaycareEast/scripts.pory"
	playmoncry SPECIES_SHARPEDO, CRY_MODE_NORMAL
# 172 "data/maps/DaycareEast/scripts.pory"
	waitmoncry
# 173 "data/maps/DaycareEast/scripts.pory"
	removeobject Rufflet
# 174 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_HIDE_RUFFLET
# 175 "data/maps/DaycareEast/scripts.pory"
	release
	end

RuffletDialog_2:
# 180 "data/maps/DaycareEast/scripts.pory"
	speakername RuffletDialog_Text_0
# 181 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_RUFFLET, EMOTE_ANGRY
# 182 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_1, MSGBOX_DEFAULT
# 183 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 184 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 185 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, Common_Movement_ExclamationMark
# 186 "data/maps/DaycareEast/scripts.pory"
	playse SE_PIN
# 187 "data/maps/DaycareEast/scripts.pory"
	waitfanfare
# 188 "data/maps/DaycareEast/scripts.pory"
	waitmovement
# 189 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_RUFFLET, EMOTE_ELATED
# 190 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_2, MSGBOX_DEFAULT
# 191 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 192 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, Common_Movement_ExclamationMark
# 193 "data/maps/DaycareEast/scripts.pory"
	playse SE_PIN
# 194 "data/maps/DaycareEast/scripts.pory"
	waitfanfare
# 195 "data/maps/DaycareEast/scripts.pory"
	waitmovement
# 196 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_3, MSGBOX_DEFAULT
# 197 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 198 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 199 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 200 "data/maps/DaycareEast/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 201 "data/maps/DaycareEast/scripts.pory"
	waitfanfare
# 202 "data/maps/DaycareEast/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 203 "data/maps/DaycareEast/scripts.pory"
	speakername RuffletDialog_Text_0
# 204 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_RUFFLET, EMOTE_ELATED
# 205 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_4, MSGBOX_AUTOCLOSE
# 206 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 207 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 208 "data/maps/DaycareEast/scripts.pory"
	applymovement LOCALID_PLAYER, RuffletDialog_Movement_3
# 209 "data/maps/DaycareEast/scripts.pory"
	waitmovement LOCALID_PLAYER
# 210 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, RuffletFlyAway
# 211 "data/maps/DaycareEast/scripts.pory"
	waitmovement 0
# 212 "data/maps/DaycareEast/scripts.pory"
	playse SE_LEDGE
# 214 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, RuffletDialog_Movement_1
# 218 "data/maps/DaycareEast/scripts.pory"
	waitmovement 0
# 219 "data/maps/DaycareEast/scripts.pory"
	playse SE_FALL
# 220 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, RuffletDialog_Movement_2
# 222 "data/maps/DaycareEast/scripts.pory"
	waitmovement 0
# 223 "data/maps/DaycareEast/scripts.pory"
	delay 30
# 225 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8004, 2
# 226 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8005, 6
# 227 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8006, 4
# 228 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8007, 4
# 229 "data/maps/DaycareEast/scripts.pory"
	special ShakeCamera
# 230 "data/maps/DaycareEast/scripts.pory"
	waitstate
# 231 "data/maps/DaycareEast/scripts.pory"
	delay 60
# 233 "data/maps/DaycareEast/scripts.pory"
	playse SE_BANG
# 234 "data/maps/DaycareEast/scripts.pory"
	waitfanfare
# 235 "data/maps/DaycareEast/scripts.pory"
	delay 60
# 236 "data/maps/DaycareEast/scripts.pory"
	playmoncry SPECIES_SHARPEDO, CRY_MODE_NORMAL
# 237 "data/maps/DaycareEast/scripts.pory"
	waitmoncry
# 238 "data/maps/DaycareEast/scripts.pory"
	removeobject Rufflet
# 239 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_HIDE_RUFFLET
# 240 "data/maps/DaycareEast/scripts.pory"
	release
	end

RuffletDialog_4:
# 178 "data/maps/DaycareEast/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq RuffletDialog_2
	goto RuffletDialog_3

RuffletDialog_7:
# 115 "data/maps/DaycareEast/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_ne RuffletDialog_1
	goto RuffletDialog_5


# 256 "data/maps/DaycareEast/scripts.pory"
RuffletFlyAway:
# 257 "data/maps/DaycareEast/scripts.pory"
	face_down
# 258 "data/maps/DaycareEast/scripts.pory"
	lock_facing_direction
# 259 "data/maps/DaycareEast/scripts.pory"
	walk_slow_up
# 259 "data/maps/DaycareEast/scripts.pory"
	walk_slow_up
# 260 "data/maps/DaycareEast/scripts.pory"
	delay_16
# 260 "data/maps/DaycareEast/scripts.pory"
	delay_16
# 261 "data/maps/DaycareEast/scripts.pory"
	walk_fast_down
# 261 "data/maps/DaycareEast/scripts.pory"
	walk_fast_down
	step_end

RuffletOnShore::
# 266 "data/maps/DaycareEast/scripts.pory"
	lock
# 267 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 268 "data/maps/DaycareEast/scripts.pory"
	speakername RuffletDialog_Text_0
# 269 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_RUFFLET, EMOTE_ELATED
# 270 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletOnShore_Text_0, MSGBOX_DEFAULT
# 271 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 272 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 273 "data/maps/DaycareEast/scripts.pory"
	release
	end


SlowpokeDialog::
# 278 "data/maps/DaycareEast/scripts.pory"
	lock
# 279 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 280 "data/maps/DaycareEast/scripts.pory"
	speakername SlowpokeDialog_Text_0
# 281 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 282 "data/maps/DaycareEast/scripts.pory"
	msgbox SlowpokeDialog_Text_1, MSGBOX_DEFAULT
# 283 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 284 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 285 "data/maps/DaycareEast/scripts.pory"
	release
	end


SharpedoDialog::
# 290 "data/maps/DaycareEast/scripts.pory"
	lock
# 291 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 292 "data/maps/DaycareEast/scripts.pory"
	goto_if_set FLAG_HIDE_RUFFLET, SharpedoDialog_1
# 312 "data/maps/DaycareEast/scripts.pory"
	speakername SharpedoDialog_Text_0
# 313 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPEDO, EMOTE_NORMAL
# 314 "data/maps/DaycareEast/scripts.pory"
	msgbox SharpedoDialog_Text_3, MSGBOX_DEFAULT
# 315 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 316 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 317 "data/maps/DaycareEast/scripts.pory"
	release
	end

SharpedoDialog_1:
# 294 "data/maps/DaycareEast/scripts.pory"
	speakername SharpedoDialog_Text_0
# 295 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPEDO, EMOTE_NORMAL
# 296 "data/maps/DaycareEast/scripts.pory"
	msgbox SharpedoDialog_Text_1, MSGBOX_DEFAULT
# 297 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 298 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 299 "data/maps/DaycareEast/scripts.pory"
	applymovement Sharpedo, ContestHall_Movement_Heart
# 300 "data/maps/DaycareEast/scripts.pory"
	speakername SharpedoDialog_Text_0
# 301 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPEDO, EMOTE_ELATED
# 302 "data/maps/DaycareEast/scripts.pory"
	playse SE_PIN
# 303 "data/maps/DaycareEast/scripts.pory"
	msgbox SharpedoDialog_Text_2, MSGBOX_DEFAULT
# 304 "data/maps/DaycareEast/scripts.pory"
	clearflag FLAG_SHOW_RUFFLET
# 305 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 306 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 307 "data/maps/DaycareEast/scripts.pory"
	release
	end


DaycareEastDittoOpenXforms::
# 323 "data/maps/DaycareEast/scripts.pory"
	lock
# 324 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 325 "data/maps/DaycareEast/scripts.pory"
	goto_if_set FLAG_DITTO_INTRO, DaycareEastDittoOpenXforms_1
# 388 "data/maps/DaycareEast/scripts.pory"
	speakername DaycareEastDittoOpenXforms_Text_1
# 389 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 390 "data/maps/DaycareEast/scripts.pory"
	msgbox DaycareEastDittoOpenXforms_Text_4, MSGBOX_DEFAULT
# 390 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 391 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_DITTO_INTRO
# 392 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 393 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 394 "data/maps/DaycareEast/scripts.pory"
	release
	end

DaycareEastDittoOpenXforms_1:
# 327 "data/maps/DaycareEast/scripts.pory"
	goto_if_set FLAG_XFORMS_TALKED_TO_DITTO, DaycareEastDittoOpenXforms_4
# 354 "data/maps/DaycareEast/scripts.pory"
	speakername DaycareEastDittoOpenXforms_Text_1
# 355 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 356 "data/maps/DaycareEast/scripts.pory"
	msgbox DaycareEastDittoOpenXforms_Text_3, MSGBOX_DEFAULT
# 357 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 358 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_XFORMS_TALKED_TO_DITTO
# 359 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 360 "data/maps/DaycareEast/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 361 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 362 "data/maps/DaycareEast/scripts.pory"
	msgbox DaycareEastDittoOpenXforms_Text_0, MSGBOX_YESNO
# 363 "data/maps/DaycareEast/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareEastDittoOpenXforms_10
# 373 "data/maps/DaycareEast/scripts.pory"
	speakername DaycareEastDittoOpenXforms_Text_1
# 374 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 375 "data/maps/DaycareEast/scripts.pory"
	msgbox DaycareEastDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 376 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 377 "data/maps/DaycareEast/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 378 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 379 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 380 "data/maps/DaycareEast/scripts.pory"
	release
	end

DaycareEastDittoOpenXforms_4:
# 329 "data/maps/DaycareEast/scripts.pory"
	msgbox DaycareEastDittoOpenXforms_Text_0, MSGBOX_YESNO
# 330 "data/maps/DaycareEast/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareEastDittoOpenXforms_7
# 342 "data/maps/DaycareEast/scripts.pory"
	speakername DaycareEastDittoOpenXforms_Text_1
# 343 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 344 "data/maps/DaycareEast/scripts.pory"
	msgbox DaycareEastDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 345 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 346 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 347 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 348 "data/maps/DaycareEast/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 349 "data/maps/DaycareEast/scripts.pory"
	release
	end

DaycareEastDittoOpenXforms_7:
# 332 "data/maps/DaycareEast/scripts.pory"
	dittotransform SPECIES_DITTO
# 333 "data/maps/DaycareEast/scripts.pory"
	special OpenPCMoveMons
# 334 "data/maps/DaycareEast/scripts.pory"
	waitstate
# 335 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 336 "data/maps/DaycareEast/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 337 "data/maps/DaycareEast/scripts.pory"
	release
	end

DaycareEastDittoOpenXforms_10:
# 365 "data/maps/DaycareEast/scripts.pory"
	dittotransform SPECIES_DITTO
# 366 "data/maps/DaycareEast/scripts.pory"
	special OpenPCMoveMons
# 367 "data/maps/DaycareEast/scripts.pory"
	waitstate
# 368 "data/maps/DaycareEast/scripts.pory"
	release
	end


# 114 "data/maps/DaycareEast/scripts.pory"
RuffletDialog_Movement_0:
# 114 "data/maps/DaycareEast/scripts.pory"
	face_player
	step_end

# 149 "data/maps/DaycareEast/scripts.pory"
RuffletDialog_Movement_1:
# 150 "data/maps/DaycareEast/scripts.pory"
	jump_2_down
# 151 "data/maps/DaycareEast/scripts.pory"
	delay_16
# 151 "data/maps/DaycareEast/scripts.pory"
	delay_16
	step_end

# 155 "data/maps/DaycareEast/scripts.pory"
RuffletDialog_Movement_2:
# 156 "data/maps/DaycareEast/scripts.pory"
	slide_down
# 156 "data/maps/DaycareEast/scripts.pory"
	slide_down
# 156 "data/maps/DaycareEast/scripts.pory"
	slide_down
# 156 "data/maps/DaycareEast/scripts.pory"
	slide_down
# 156 "data/maps/DaycareEast/scripts.pory"
	slide_down
	step_end

# 208 "data/maps/DaycareEast/scripts.pory"
RuffletDialog_Movement_3:
# 208 "data/maps/DaycareEast/scripts.pory"
	walk_fast_left
# 208 "data/maps/DaycareEast/scripts.pory"
	face_right
	step_end

KrabbyDialog_Text_0:
# 7 "data/maps/DaycareEast/scripts.pory"
	.string "Krabby$"

KrabbyDialog_Text_1:
# 9 "data/maps/DaycareEast/scripts.pory"
	.string "I love it here at the Daycare!\pI don't have to battle anyone that\nI don't want to!\pAlthough some Pokémon see it\ndifferently...$"

AlolanRaichuDialog_Text_0:
# 19 "data/maps/DaycareEast/scripts.pory"
	.string "Raichu$"

AlolanRaichuDialog_Text_1:
# 21 "data/maps/DaycareEast/scripts.pory"
	.string "Move out of my way!\nYou're blocking my waves dude.$"

SandyghastDialog_Text_0:
# 33 "data/maps/DaycareEast/scripts.pory"
	.string "Sandyghast$"

SandyghastDialog_Text_1:
# 35 "data/maps/DaycareEast/scripts.pory"
	.string "A fellow Ground_type!\pLet me give you some info...\nGround_type to Ground_type.\pI've heard a Pokémon will give an\nEgg for defeating it in a special\lbattle.\pBut...\pThat's just a rumor as no one has\nseen that Pokémon in ages.$"

SandyghastDialog_Text_2:
# 43 "data/maps/DaycareEast/scripts.pory"
	.string "...\n$"

ShellosEastDialog_Text_0:
# 65 "data/maps/DaycareEast/scripts.pory"
	.string "Shellos$"

ShellosEastDialog_Text_1:
# 67 "data/maps/DaycareEast/scripts.pory"
	.string "Wow a Marill!\pGastrodon told me about a cave\nwith a powerful flying Pokémon at\lthe top of the waterfall.\pMaybe you can reach it!\n$"

ShellosEastDialog_Text_2:
# 73 "data/maps/DaycareEast/scripts.pory"
	.string "Wow a Chinchou!\pGastrodon told me about a reef\nunder the sea.\pMaybe you can reach it!\n$"

ShellosEastDialog_Text_3:
# 81 "data/maps/DaycareEast/scripts.pory"
	.string "You seem nice and all...\nbut Gastrodon told me to only\ltalk to Water_types.$"

AlolanExeggutorDialog_Text_0:
# 91 "data/maps/DaycareEast/scripts.pory"
	.string "Exeggutor$"

AlolanExeggutorDialog_Text_1:
# 93 "data/maps/DaycareEast/scripts.pory"
	.string "I hang out here all day long,\nbut I'm still not sure how to\lgain EXP.\pI haven't interacted with the\nDaycare Man much though.\pMaybe he controls it?\pIt's all so confusing.\n$"

WingullDialog_Text_0:
# 103 "data/maps/DaycareEast/scripts.pory"
	.string "Wingull$"

WingullDialog_Text_1:
# 105 "data/maps/DaycareEast/scripts.pory"
	.string "I wish more Pokémon could make\nway up here.\pSuch a beautiful view.\n$"

RuffletDialog_Text_0:
# 117 "data/maps/DaycareEast/scripts.pory"
	.string "Rufflet$"

RuffletDialog_Text_1:
# 119 "data/maps/DaycareEast/scripts.pory"
	.string "I wish I had the confidence to jump\nand try to fly...$"

RuffletDialog_Text_2:
# 127 "data/maps/DaycareEast/scripts.pory"
	.string "Wow a Flying_type Pokémon!\pWhere do you get the confidence to\nsoar like that?$"

RuffletDialog_Text_3:
# 133 "data/maps/DaycareEast/scripts.pory"
	.string "It just takes a leap of faith\nyou say?\pAlright, I'll try it!\pHere. Take this.$"

RuffletDialog_Text_4:
# 142 "data/maps/DaycareEast/scripts.pory"
	.string "Thanks for the confidence boost.$"

RuffletDialog_Text_5:
# 247 "data/maps/DaycareEast/scripts.pory"
	.string "I wish I had the confidence to jump\nand try to fly but I don't have\la role model to show me how.$"

RuffletOnShore_Text_0:
# 270 "data/maps/DaycareEast/scripts.pory"
	.string "That Sharpedo was nice enough to\nbring me ashore.\pI don't know why they get such a\nbad rap...$"

SlowpokeDialog_Text_0:
# 280 "data/maps/DaycareEast/scripts.pory"
	.string "Slowpoke$"

SlowpokeDialog_Text_1:
# 282 "data/maps/DaycareEast/scripts.pory"
	.string "I stay close to the shore.\pThere are some scary Pokémon\nfurther out!$"

SharpedoDialog_Text_0:
# 294 "data/maps/DaycareEast/scripts.pory"
	.string "Sharpedo$"

SharpedoDialog_Text_1:
# 296 "data/maps/DaycareEast/scripts.pory"
	.string "That little Rufflet fell into\nthe water.\pPoor fellow couldn't swim so\nI carried it to the shore.$"

SharpedoDialog_Text_2:
# 303 "data/maps/DaycareEast/scripts.pory"
	.string "Looks can be deceiving!\n$"

SharpedoDialog_Text_3:
# 314 "data/maps/DaycareEast/scripts.pory"
	.string "I don't understand why Pokémon are\nso afraid of me...\pIs it something stuck in my teeth?\n$"

DaycareEastDittoOpenXforms_Text_0:
# 329 "data/maps/DaycareEast/scripts.pory"
	.string "Would you like to change out your\ntransformation options?$"

DaycareEastDittoOpenXforms_Text_1:
# 342 "data/maps/DaycareEast/scripts.pory"
	.string "Ditto$"

DaycareEastDittoOpenXforms_Text_2:
# 344 "data/maps/DaycareEast/scripts.pory"
	.string "Come back anytime!$"

DaycareEastDittoOpenXforms_Text_3:
# 356 "data/maps/DaycareEast/scripts.pory"
	.string "Ditto!\pYou can only remember four\ntransformations at a time.\pWe Dittos can act as a way to\nswap out which transformations\lyou have active at anytime!\pYou'll find us scattered around\nthe Daycare.\pNow...\n$"

DaycareEastDittoOpenXforms_Text_4:
# 390 "data/maps/DaycareEast/scripts.pory"
	.string "Hello there fellow Ditto!\pDaycare Man asked you to get an Egg\nfor him, did he?\pWell, you're about to learn the\nthe secret of how we Dittos are\lalways found holding Eggs.\pIt'll be quite the adventure!\pDon't forget, you are a Ditto,\nso you can transform into any\lPokémon you defeat in battle!\pThis does only apply to Pokémon\nwho are not already using\lTransform...\pPress the {SELECT_BUTTON} button to\nopen your transformation menu.\pIf you open your Transformation\nParty, you'll see which Pokémon\lyou can transform into!$"
