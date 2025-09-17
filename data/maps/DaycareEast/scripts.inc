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
	finditem ITEM_LUCKY_EGG
	return


ShellosEastDialog::
# 57 "data/maps/DaycareEast/scripts.pory"
	lock
# 58 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 59 "data/maps/DaycareEast/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_MARILL
	goto_if_eq ShellosEastDialog_2
# 66 "data/maps/DaycareEast/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CHINCHOU
	goto_if_eq ShellosEastDialog_3
# 75 "data/maps/DaycareEast/scripts.pory"
	speakername ShellosEastDialog_Text_0
# 76 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_SHELLOS, EMOTE_NORMAL
# 77 "data/maps/DaycareEast/scripts.pory"
	msgbox ShellosEastDialog_Text_3, MSGBOX_NPC
# 78 "data/maps/DaycareEast/scripts.pory"
	waitmessage
ShellosEastDialog_1:
# 80 "data/maps/DaycareEast/scripts.pory"
	release
	end

ShellosEastDialog_2:
# 61 "data/maps/DaycareEast/scripts.pory"
	speakername ShellosEastDialog_Text_0
# 62 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_SHELLOS, EMOTE_HAPPY
# 63 "data/maps/DaycareEast/scripts.pory"
	msgbox ShellosEastDialog_Text_1, MSGBOX_NPC
# 64 "data/maps/DaycareEast/scripts.pory"
	waitmessage
	goto ShellosEastDialog_1

ShellosEastDialog_3:
# 68 "data/maps/DaycareEast/scripts.pory"
	speakername ShellosEastDialog_Text_0
# 69 "data/maps/DaycareEast/scripts.pory"
	msgbox ShellosEastDialog_Text_2, MSGBOX_NPC
# 70 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_SHELLOS, EMOTE_HAPPY
# 71 "data/maps/DaycareEast/scripts.pory"
	waitmessage
	goto ShellosEastDialog_1


AlolanExeggutorDialog::
# 85 "data/maps/DaycareEast/scripts.pory"
	lock
# 86 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 87 "data/maps/DaycareEast/scripts.pory"
	speakername AlolanExeggutorDialog_Text_0
# 88 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_ALOLANEXEGGUTOR, EMOTE_NORMAL
# 89 "data/maps/DaycareEast/scripts.pory"
	msgbox AlolanExeggutorDialog_Text_1, MSGBOX_DEFAULT
# 90 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 91 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 92 "data/maps/DaycareEast/scripts.pory"
	release
	end


WingullDialog::
# 97 "data/maps/DaycareEast/scripts.pory"
	lock
# 98 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 99 "data/maps/DaycareEast/scripts.pory"
	speakername WingullDialog_Text_0
# 100 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_WINGULL, EMOTE_HAPPY
# 101 "data/maps/DaycareEast/scripts.pory"
	msgbox WingullDialog_Text_1, MSGBOX_DEFAULT
# 102 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 103 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 104 "data/maps/DaycareEast/scripts.pory"
	release
	end


RuffletDialog::
# 109 "data/maps/DaycareEast/scripts.pory"
	lock
# 110 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, RuffletDialog_Movement_0
# 111 "data/maps/DaycareEast/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq RuffletDialog_7
RuffletDialog_5:
# 174 "data/maps/DaycareEast/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq RuffletDialog_4
RuffletDialog_3:
# 241 "data/maps/DaycareEast/scripts.pory"
	speakername RuffletDialog_Text_0
# 242 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_RUFFLET, EMOTE_ANGRY
# 243 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_5, MSGBOX_DEFAULT
# 244 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 245 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 246 "data/maps/DaycareEast/scripts.pory"
	release
	end

RuffletDialog_1:
# 113 "data/maps/DaycareEast/scripts.pory"
	speakername RuffletDialog_Text_0
# 114 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_RUFFLET, EMOTE_ANGRY
# 115 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_1, MSGBOX_DEFAULT
# 116 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 117 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 118 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, Common_Movement_ExclamationMark
# 119 "data/maps/DaycareEast/scripts.pory"
	playse SE_PIN
# 120 "data/maps/DaycareEast/scripts.pory"
	waitfanfare
# 121 "data/maps/DaycareEast/scripts.pory"
	waitmovement
# 122 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_RUFFLET, EMOTE_ELATED
# 123 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_2, MSGBOX_DEFAULT
# 124 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 125 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, Common_Movement_ExclamationMark
# 126 "data/maps/DaycareEast/scripts.pory"
	playse SE_PIN
# 127 "data/maps/DaycareEast/scripts.pory"
	waitfanfare
# 128 "data/maps/DaycareEast/scripts.pory"
	waitmovement
# 129 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_3, MSGBOX_DEFAULT
# 130 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 131 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 132 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 133 "data/maps/DaycareEast/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 134 "data/maps/DaycareEast/scripts.pory"
	waitfanfare
# 135 "data/maps/DaycareEast/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 136 "data/maps/DaycareEast/scripts.pory"
	speakername RuffletDialog_Text_0
# 137 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_RUFFLET, EMOTE_ELATED
# 138 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_4, MSGBOX_AUTOCLOSE
# 139 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 140 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 141 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, RuffletFlyAway
# 142 "data/maps/DaycareEast/scripts.pory"
	waitmovement 0
# 143 "data/maps/DaycareEast/scripts.pory"
	playse SE_LEDGE
# 145 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, RuffletDialog_Movement_1
# 149 "data/maps/DaycareEast/scripts.pory"
	waitmovement 0
# 150 "data/maps/DaycareEast/scripts.pory"
	playse SE_FALL
# 151 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, RuffletDialog_Movement_2
# 153 "data/maps/DaycareEast/scripts.pory"
	waitmovement 0
# 154 "data/maps/DaycareEast/scripts.pory"
	delay 30
# 156 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8004, 2
# 157 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8005, 6
# 158 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8006, 4
# 159 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8007, 4
# 160 "data/maps/DaycareEast/scripts.pory"
	special ShakeCamera
# 161 "data/maps/DaycareEast/scripts.pory"
	waitstate
# 162 "data/maps/DaycareEast/scripts.pory"
	delay 60
# 164 "data/maps/DaycareEast/scripts.pory"
	playse SE_BANG
# 165 "data/maps/DaycareEast/scripts.pory"
	waitfanfare
# 166 "data/maps/DaycareEast/scripts.pory"
	delay 60
# 167 "data/maps/DaycareEast/scripts.pory"
	playmoncry SPECIES_SHARPEDO, CRY_MODE_NORMAL
# 168 "data/maps/DaycareEast/scripts.pory"
	waitmoncry
# 169 "data/maps/DaycareEast/scripts.pory"
	removeobject Rufflet
# 170 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_HIDE_RUFFLET
# 171 "data/maps/DaycareEast/scripts.pory"
	release
	end

RuffletDialog_2:
# 176 "data/maps/DaycareEast/scripts.pory"
	speakername RuffletDialog_Text_0
# 177 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_RUFFLET, EMOTE_ANGRY
# 178 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_1, MSGBOX_DEFAULT
# 179 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 180 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 181 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, Common_Movement_ExclamationMark
# 182 "data/maps/DaycareEast/scripts.pory"
	playse SE_PIN
# 183 "data/maps/DaycareEast/scripts.pory"
	waitfanfare
# 184 "data/maps/DaycareEast/scripts.pory"
	waitmovement
# 185 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_RUFFLET, EMOTE_ELATED
# 186 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_2, MSGBOX_DEFAULT
# 187 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 188 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, Common_Movement_ExclamationMark
# 189 "data/maps/DaycareEast/scripts.pory"
	playse SE_PIN
# 190 "data/maps/DaycareEast/scripts.pory"
	waitfanfare
# 191 "data/maps/DaycareEast/scripts.pory"
	waitmovement
# 192 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_3, MSGBOX_DEFAULT
# 193 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 194 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 195 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 196 "data/maps/DaycareEast/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 197 "data/maps/DaycareEast/scripts.pory"
	waitfanfare
# 198 "data/maps/DaycareEast/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 199 "data/maps/DaycareEast/scripts.pory"
	speakername RuffletDialog_Text_0
# 200 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_RUFFLET, EMOTE_ELATED
# 201 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_4, MSGBOX_AUTOCLOSE
# 202 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 203 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 204 "data/maps/DaycareEast/scripts.pory"
	applymovement LOCALID_PLAYER, RuffletDialog_Movement_3
# 205 "data/maps/DaycareEast/scripts.pory"
	waitmovement LOCALID_PLAYER
# 206 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, RuffletFlyAway
# 207 "data/maps/DaycareEast/scripts.pory"
	waitmovement 0
# 208 "data/maps/DaycareEast/scripts.pory"
	playse SE_LEDGE
# 210 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, RuffletDialog_Movement_1
# 214 "data/maps/DaycareEast/scripts.pory"
	waitmovement 0
# 215 "data/maps/DaycareEast/scripts.pory"
	playse SE_FALL
# 216 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, RuffletDialog_Movement_2
# 218 "data/maps/DaycareEast/scripts.pory"
	waitmovement 0
# 219 "data/maps/DaycareEast/scripts.pory"
	delay 30
# 221 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8004, 2
# 222 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8005, 6
# 223 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8006, 4
# 224 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8007, 4
# 225 "data/maps/DaycareEast/scripts.pory"
	special ShakeCamera
# 226 "data/maps/DaycareEast/scripts.pory"
	waitstate
# 227 "data/maps/DaycareEast/scripts.pory"
	delay 60
# 229 "data/maps/DaycareEast/scripts.pory"
	playse SE_BANG
# 230 "data/maps/DaycareEast/scripts.pory"
	waitfanfare
# 231 "data/maps/DaycareEast/scripts.pory"
	delay 60
# 232 "data/maps/DaycareEast/scripts.pory"
	playmoncry SPECIES_SHARPEDO, CRY_MODE_NORMAL
# 233 "data/maps/DaycareEast/scripts.pory"
	waitmoncry
# 234 "data/maps/DaycareEast/scripts.pory"
	removeobject Rufflet
# 235 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_HIDE_RUFFLET
# 236 "data/maps/DaycareEast/scripts.pory"
	release
	end

RuffletDialog_4:
# 174 "data/maps/DaycareEast/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq RuffletDialog_2
	goto RuffletDialog_3

RuffletDialog_7:
# 111 "data/maps/DaycareEast/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_ne RuffletDialog_1
	goto RuffletDialog_5


# 252 "data/maps/DaycareEast/scripts.pory"
RuffletFlyAway:
# 253 "data/maps/DaycareEast/scripts.pory"
	face_down
# 254 "data/maps/DaycareEast/scripts.pory"
	lock_facing_direction
# 255 "data/maps/DaycareEast/scripts.pory"
	walk_slow_up
# 255 "data/maps/DaycareEast/scripts.pory"
	walk_slow_up
# 256 "data/maps/DaycareEast/scripts.pory"
	delay_16
# 256 "data/maps/DaycareEast/scripts.pory"
	delay_16
# 257 "data/maps/DaycareEast/scripts.pory"
	walk_fast_down
# 257 "data/maps/DaycareEast/scripts.pory"
	walk_fast_down
	step_end

RuffletOnShore::
# 262 "data/maps/DaycareEast/scripts.pory"
	lock
# 263 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 264 "data/maps/DaycareEast/scripts.pory"
	speakername RuffletDialog_Text_0
# 265 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_RUFFLET, EMOTE_ELATED
# 266 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletOnShore_Text_0, MSGBOX_DEFAULT
# 267 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 268 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 269 "data/maps/DaycareEast/scripts.pory"
	release
	end


SlowpokeDialog::
# 274 "data/maps/DaycareEast/scripts.pory"
	lock
# 275 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 276 "data/maps/DaycareEast/scripts.pory"
	speakername SlowpokeDialog_Text_0
# 277 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_SLOWPOKE, EMOTE_NORMAL
# 278 "data/maps/DaycareEast/scripts.pory"
	msgbox SlowpokeDialog_Text_1, MSGBOX_DEFAULT
# 279 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 280 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 281 "data/maps/DaycareEast/scripts.pory"
	release
	end


SharpedoDialog::
# 286 "data/maps/DaycareEast/scripts.pory"
	lock
# 287 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 288 "data/maps/DaycareEast/scripts.pory"
	goto_if_set FLAG_HIDE_RUFFLET, SharpedoDialog_1
# 308 "data/maps/DaycareEast/scripts.pory"
	speakername SharpedoDialog_Text_0
# 309 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPEDO, EMOTE_NORMAL
# 310 "data/maps/DaycareEast/scripts.pory"
	msgbox SharpedoDialog_Text_3, MSGBOX_DEFAULT
# 311 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 312 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 313 "data/maps/DaycareEast/scripts.pory"
	release
	end

SharpedoDialog_1:
# 290 "data/maps/DaycareEast/scripts.pory"
	speakername SharpedoDialog_Text_0
# 291 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPEDO, EMOTE_NORMAL
# 292 "data/maps/DaycareEast/scripts.pory"
	msgbox SharpedoDialog_Text_1, MSGBOX_DEFAULT
# 293 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 294 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 295 "data/maps/DaycareEast/scripts.pory"
	applymovement Sharpedo, ContestHall_Movement_Heart
# 296 "data/maps/DaycareEast/scripts.pory"
	speakername SharpedoDialog_Text_0
# 297 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPEDO, EMOTE_ELATED
# 298 "data/maps/DaycareEast/scripts.pory"
	playse SE_PIN
# 299 "data/maps/DaycareEast/scripts.pory"
	msgbox SharpedoDialog_Text_2, MSGBOX_DEFAULT
# 300 "data/maps/DaycareEast/scripts.pory"
	clearflag FLAG_SHOW_RUFFLET
# 301 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 302 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 303 "data/maps/DaycareEast/scripts.pory"
	release
	end


DaycareEastDittoOpenXforms::
# 319 "data/maps/DaycareEast/scripts.pory"
	lock
# 320 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 321 "data/maps/DaycareEast/scripts.pory"
	goto_if_set FLAG_DITTO_INTRO, DaycareEastDittoOpenXforms_1
# 384 "data/maps/DaycareEast/scripts.pory"
	speakername DaycareEastDittoOpenXforms_Text_1
# 385 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 386 "data/maps/DaycareEast/scripts.pory"
	msgbox DaycareEastDittoOpenXforms_Text_4, MSGBOX_DEFAULT
# 386 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 387 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_DITTO_INTRO
# 388 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 389 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 390 "data/maps/DaycareEast/scripts.pory"
	release
	end

DaycareEastDittoOpenXforms_1:
# 323 "data/maps/DaycareEast/scripts.pory"
	goto_if_set FLAG_XFORMS_TALKED_TO_DITTO, DaycareEastDittoOpenXforms_4
# 350 "data/maps/DaycareEast/scripts.pory"
	speakername DaycareEastDittoOpenXforms_Text_1
# 351 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 352 "data/maps/DaycareEast/scripts.pory"
	msgbox DaycareEastDittoOpenXforms_Text_3, MSGBOX_DEFAULT
# 353 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 354 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_XFORMS_TALKED_TO_DITTO
# 355 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 356 "data/maps/DaycareEast/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 357 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 358 "data/maps/DaycareEast/scripts.pory"
	msgbox DaycareEastDittoOpenXforms_Text_0, MSGBOX_YESNO
# 359 "data/maps/DaycareEast/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareEastDittoOpenXforms_10
# 369 "data/maps/DaycareEast/scripts.pory"
	speakername DaycareEastDittoOpenXforms_Text_1
# 370 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 371 "data/maps/DaycareEast/scripts.pory"
	msgbox DaycareEastDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 372 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 373 "data/maps/DaycareEast/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 374 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 375 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 376 "data/maps/DaycareEast/scripts.pory"
	release
	end

DaycareEastDittoOpenXforms_4:
# 325 "data/maps/DaycareEast/scripts.pory"
	msgbox DaycareEastDittoOpenXforms_Text_0, MSGBOX_YESNO
# 326 "data/maps/DaycareEast/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareEastDittoOpenXforms_7
# 338 "data/maps/DaycareEast/scripts.pory"
	speakername DaycareEastDittoOpenXforms_Text_1
# 339 "data/maps/DaycareEast/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 340 "data/maps/DaycareEast/scripts.pory"
	msgbox DaycareEastDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 341 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 342 "data/maps/DaycareEast/scripts.pory"
	removefieldmugshot
# 343 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 344 "data/maps/DaycareEast/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 345 "data/maps/DaycareEast/scripts.pory"
	release
	end

DaycareEastDittoOpenXforms_7:
# 328 "data/maps/DaycareEast/scripts.pory"
	dittotransform SPECIES_DITTO
# 329 "data/maps/DaycareEast/scripts.pory"
	special OpenPCMoveMons
# 330 "data/maps/DaycareEast/scripts.pory"
	waitstate
# 331 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 332 "data/maps/DaycareEast/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 333 "data/maps/DaycareEast/scripts.pory"
	release
	end

DaycareEastDittoOpenXforms_10:
# 361 "data/maps/DaycareEast/scripts.pory"
	dittotransform SPECIES_DITTO
# 362 "data/maps/DaycareEast/scripts.pory"
	special OpenPCMoveMons
# 363 "data/maps/DaycareEast/scripts.pory"
	waitstate
# 364 "data/maps/DaycareEast/scripts.pory"
	release
	end


# 110 "data/maps/DaycareEast/scripts.pory"
RuffletDialog_Movement_0:
# 110 "data/maps/DaycareEast/scripts.pory"
	face_player
	step_end

# 145 "data/maps/DaycareEast/scripts.pory"
RuffletDialog_Movement_1:
# 146 "data/maps/DaycareEast/scripts.pory"
	jump_2_down
# 147 "data/maps/DaycareEast/scripts.pory"
	delay_16
# 147 "data/maps/DaycareEast/scripts.pory"
	delay_16
	step_end

# 151 "data/maps/DaycareEast/scripts.pory"
RuffletDialog_Movement_2:
# 152 "data/maps/DaycareEast/scripts.pory"
	slide_down
# 152 "data/maps/DaycareEast/scripts.pory"
	slide_down
# 152 "data/maps/DaycareEast/scripts.pory"
	slide_down
# 152 "data/maps/DaycareEast/scripts.pory"
	slide_down
# 152 "data/maps/DaycareEast/scripts.pory"
	slide_down
	step_end

# 204 "data/maps/DaycareEast/scripts.pory"
RuffletDialog_Movement_3:
# 204 "data/maps/DaycareEast/scripts.pory"
	walk_fast_left
# 204 "data/maps/DaycareEast/scripts.pory"
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
# 61 "data/maps/DaycareEast/scripts.pory"
	.string "Shellos$"

ShellosEastDialog_Text_1:
# 63 "data/maps/DaycareEast/scripts.pory"
	.string "Wow a Marill!\pGastrodon told me about a cave\nwith a powerful flying Pokémon at\lthe top of the waterfall.\pMaybe you can reach it!\n$"

ShellosEastDialog_Text_2:
# 69 "data/maps/DaycareEast/scripts.pory"
	.string "Wow a Chinchou!\pGastrodon told me about a reef\nunder the sea.\pMaybe you can reach it!\n$"

ShellosEastDialog_Text_3:
# 77 "data/maps/DaycareEast/scripts.pory"
	.string "You seem nice and all...\nbut Gastrodon told me to only\ltalk to Water_types.$"

AlolanExeggutorDialog_Text_0:
# 87 "data/maps/DaycareEast/scripts.pory"
	.string "Exeggutor$"

AlolanExeggutorDialog_Text_1:
# 89 "data/maps/DaycareEast/scripts.pory"
	.string "I hang out here all day long,\nbut I'm still not sure how to\lgain EXP.\pI haven't interacted with the\nDaycare Man much though.\pMaybe he controls it?\pIt's all so confusing.\n$"

WingullDialog_Text_0:
# 99 "data/maps/DaycareEast/scripts.pory"
	.string "Wingull$"

WingullDialog_Text_1:
# 101 "data/maps/DaycareEast/scripts.pory"
	.string "I wish more Pokémon could make\nway up here.\pSuch a beautiful view.\n$"

RuffletDialog_Text_0:
# 113 "data/maps/DaycareEast/scripts.pory"
	.string "Rufflet$"

RuffletDialog_Text_1:
# 115 "data/maps/DaycareEast/scripts.pory"
	.string "I wish I had the confidence to jump\nand try to fly...$"

RuffletDialog_Text_2:
# 123 "data/maps/DaycareEast/scripts.pory"
	.string "Wow a Flying_type Pokémon!\pWhere do you get the confidence to\nsoar like that?$"

RuffletDialog_Text_3:
# 129 "data/maps/DaycareEast/scripts.pory"
	.string "It just takes a leap of faith\nyou say?\pAlright, I'll try it!\pHere. Take this.$"

RuffletDialog_Text_4:
# 138 "data/maps/DaycareEast/scripts.pory"
	.string "Thanks for the confidence boost.$"

RuffletDialog_Text_5:
# 243 "data/maps/DaycareEast/scripts.pory"
	.string "I wish I had the confidence to jump\nand try to fly but I don't have\la role model to show me how.$"

RuffletOnShore_Text_0:
# 266 "data/maps/DaycareEast/scripts.pory"
	.string "That Sharpedo was nice enough to\nbring me ashore.\pI don't know why they get such a\nbad rap...$"

SlowpokeDialog_Text_0:
# 276 "data/maps/DaycareEast/scripts.pory"
	.string "Slowpoke$"

SlowpokeDialog_Text_1:
# 278 "data/maps/DaycareEast/scripts.pory"
	.string "I stay close to the shore.\pThere are some scary Pokémon\nfurther out!$"

SharpedoDialog_Text_0:
# 290 "data/maps/DaycareEast/scripts.pory"
	.string "Sharpedo$"

SharpedoDialog_Text_1:
# 292 "data/maps/DaycareEast/scripts.pory"
	.string "That little Rufflet fell into\nthe water.\pPoor fellow couldn't swim so\nI carried it to the shore.$"

SharpedoDialog_Text_2:
# 299 "data/maps/DaycareEast/scripts.pory"
	.string "Looks can be deceiving!\n$"

SharpedoDialog_Text_3:
# 310 "data/maps/DaycareEast/scripts.pory"
	.string "I don't understand why Pokémon are\nso afraid of me...\pIs it something stuck in my teeth?\n$"

DaycareEastDittoOpenXforms_Text_0:
# 325 "data/maps/DaycareEast/scripts.pory"
	.string "Would you like to change out your\ntransformation options?$"

DaycareEastDittoOpenXforms_Text_1:
# 338 "data/maps/DaycareEast/scripts.pory"
	.string "Ditto$"

DaycareEastDittoOpenXforms_Text_2:
# 340 "data/maps/DaycareEast/scripts.pory"
	.string "Come back anytime!$"

DaycareEastDittoOpenXforms_Text_3:
# 352 "data/maps/DaycareEast/scripts.pory"
	.string "Ditto!\pYou can only remember four\ntransformations at a time.\pWe Dittos can act as a way to\nswap out which transformations\lyou have active at anytime!\pYou'll find us scattered around\nthe Daycare.\pNow...\n$"

DaycareEastDittoOpenXforms_Text_4:
# 386 "data/maps/DaycareEast/scripts.pory"
	.string "Hello there fellow Ditto!\pDaycare Man asked you to get an Egg\nfor him, did he?\pWell, you're about to learn the\nthe secret of how we Dittos are\lalways found holding Eggs.\pIt'll be quite the adventure!\pDon't forget, you are a Ditto,\nso you can transform into any\lPokémon you defeat in battle!\pThis does only apply to Pokémon\nwho are not already using\lTransform...\pPress the {SELECT_BUTTON} button to\nopen your transformation menu.\pIf you open your Transformation\nParty, you'll see which Pokémon\lyou can transform into!$"
