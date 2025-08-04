daycarebase_MapScripts::
	.byte 0


ShrinkToPikachuCave::
# 4 "data/maps/daycarebase/scripts.pory"
	lockall
# 5 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinkToPikachuCave_1
# 21 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_1, MSGBOX_AUTOCLOSE
# 22 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 23 "data/maps/daycarebase/scripts.pory"
	releaseall
	end

ShrinkToPikachuCave_1:
# 7 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_0, MSGBOX_YESNO
# 8 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinkToPikachuCave_4
# 14 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 15 "data/maps/daycarebase/scripts.pory"
	releaseall
	end

ShrinkToPikachuCave_4:
# 10 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_PIKACHU_SHRINK_CAVE, 0
	return


ShrinktoMausholdCave::
# 29 "data/maps/daycarebase/scripts.pory"
	lockall
# 30 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinktoMausholdCave_1
# 46 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinktoMausholdCave_Text_0, MSGBOX_AUTOCLOSE
# 47 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 48 "data/maps/daycarebase/scripts.pory"
	releaseall
	end

ShrinktoMausholdCave_1:
# 32 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_0, MSGBOX_YESNO
# 33 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinktoMausholdCave_4
# 39 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 40 "data/maps/daycarebase/scripts.pory"
	releaseall
	end

ShrinktoMausholdCave_4:
# 35 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_MAUSHOLD_SHRINK, 0
	return


MimikyuDialog::
# 54 "data/maps/daycarebase/scripts.pory"
	lock
# 55 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 56 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq MimikyuDialog_1
# 68 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 69 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_DEFAULT
# 70 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 71 "data/maps/daycarebase/scripts.pory"
	release
	end

MimikyuDialog_1:
# 58 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 59 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_DEFAULT
# 60 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_2
# 61 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_3, MSGBOX_DEFAULT
# 62 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 63 "data/maps/daycarebase/scripts.pory"
	release
	end


KecleonDialog::
# 76 "data/maps/daycarebase/scripts.pory"
	lock
# 77 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 78 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq KecleonDialog_1
# 88 "data/maps/daycarebase/scripts.pory"
	speakername KecleonDialog_Text_0
# 89 "data/maps/daycarebase/scripts.pory"
	msgbox KecleonDialog_Text_2, MSGBOX_DEFAULT
# 90 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 91 "data/maps/daycarebase/scripts.pory"
	release
	end

KecleonDialog_1:
# 80 "data/maps/daycarebase/scripts.pory"
	speakername KecleonDialog_Text_0
# 81 "data/maps/daycarebase/scripts.pory"
	msgbox KecleonDialog_Text_1, MSGBOX_DEFAULT
# 82 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 83 "data/maps/daycarebase/scripts.pory"
	release
	end


AzumarillDialog::
# 98 "data/maps/daycarebase/scripts.pory"
	lock
# 99 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 100 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq AzumarillDialog_1
# 110 "data/maps/daycarebase/scripts.pory"
	speakername AzumarillDialog_Text_0
# 111 "data/maps/daycarebase/scripts.pory"
	msgbox AzumarillDialog_Text_2, MSGBOX_DEFAULT
# 112 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 113 "data/maps/daycarebase/scripts.pory"
	release
	end

AzumarillDialog_1:
# 102 "data/maps/daycarebase/scripts.pory"
	speakername AzumarillDialog_Text_0
# 103 "data/maps/daycarebase/scripts.pory"
	msgbox AzumarillDialog_Text_1, MSGBOX_DEFAULT
# 104 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 105 "data/maps/daycarebase/scripts.pory"
	release
	end


DaycareOldManDialog::
# 119 "data/maps/daycarebase/scripts.pory"
	lock
# 120 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 121 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_OLDMAN_INTRO, DaycareOldManDialog_1
# 129 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_EGG_OBTAINED, DaycareOldManDialog_2
# 156 "data/maps/daycarebase/scripts.pory"
	speakername DaycareOldManDialog_Text_0
# 157 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_6, MSGBOX_DEFAULT
# 158 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 159 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_OLDMAN_INTRO
# 160 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_1:
# 123 "data/maps/daycarebase/scripts.pory"
	speakername DaycareOldManDialog_Text_0
# 124 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_1, MSGBOX_DEFAULT
# 125 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 126 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_2:
# 131 "data/maps/daycarebase/scripts.pory"
	speakername DaycareOldManDialog_Text_0
# 132 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_2, MSGBOX_YESNO
# 133 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareOldManDialog_6
# 145 "data/maps/daycarebase/scripts.pory"
	speakername DaycareOldManDialog_Text_0
# 146 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_5, MSGBOX_DEFAULT
# 147 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_4, MSGBOX_DEFAULT
# 148 "data/maps/daycarebase/scripts.pory"
	playse MUS_LEVEL_UP
# 149 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 150 "data/maps/daycarebase/scripts.pory"
	release
	end

DaycareOldManDialog_6:
# 135 "data/maps/daycarebase/scripts.pory"
	speakername DaycareOldManDialog_Text_0
# 136 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_3, MSGBOX_DEFAULT
# 137 "data/maps/daycarebase/scripts.pory"
	msgbox DaycareOldManDialog_Text_4, MSGBOX_DEFAULT
# 138 "data/maps/daycarebase/scripts.pory"
	playse MUS_LEVEL_UP
# 139 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 140 "data/maps/daycarebase/scripts.pory"
	release
	end


VaporeonDialog::
# 166 "data/maps/daycarebase/scripts.pory"
	lock
# 167 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 168 "data/maps/daycarebase/scripts.pory"
	speakername VaporeonDialog_Text_0
# 169 "data/maps/daycarebase/scripts.pory"
	msgbox VaporeonDialog_Text_1
# 170 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 171 "data/maps/daycarebase/scripts.pory"
	release
	end


LaprasDialog::
# 177 "data/maps/daycarebase/scripts.pory"
	lock
# 178 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 179 "data/maps/daycarebase/scripts.pory"
	speakername LaprasDialog_Text_0
# 180 "data/maps/daycarebase/scripts.pory"
	msgbox LaprasDialog_Text_1
# 181 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 182 "data/maps/daycarebase/scripts.pory"
	release
	end


LinooneDialog::
# 187 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq LinooneDialog_1
# 199 "data/maps/daycarebase/scripts.pory"
	lock
# 200 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 201 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 202 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_2
# 203 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 204 "data/maps/daycarebase/scripts.pory"
	release
	end

LinooneDialog_1:
# 189 "data/maps/daycarebase/scripts.pory"
	lock
# 190 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 191 "data/maps/daycarebase/scripts.pory"
	speakername LinooneDialog_Text_0
# 192 "data/maps/daycarebase/scripts.pory"
	msgbox LinooneDialog_Text_1
# 193 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 194 "data/maps/daycarebase/scripts.pory"
	release
	end


BulbsaurDialog::
# 210 "data/maps/daycarebase/scripts.pory"
	lock
# 211 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 212 "data/maps/daycarebase/scripts.pory"
	speakername BulbsaurDialog_Text_0
# 213 "data/maps/daycarebase/scripts.pory"
	msgbox BulbsaurDialog_Text_1, MSGBOX_DEFAULT
# 214 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 215 "data/maps/daycarebase/scripts.pory"
	release
	end


CombeeDialog::
# 220 "data/maps/daycarebase/scripts.pory"
	lock
# 221 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 222 "data/maps/daycarebase/scripts.pory"
	speakername CombeeDialog_Text_0
# 223 "data/maps/daycarebase/scripts.pory"
	msgbox CombeeDialog_Text_1, MSGBOX_DEFAULT
# 224 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 225 "data/maps/daycarebase/scripts.pory"
	release
	end


Porygon2Dialog::
# 230 "data/maps/daycarebase/scripts.pory"
	lock
# 231 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 232 "data/maps/daycarebase/scripts.pory"
	speakername Porygon2Dialog_Text_0
# 233 "data/maps/daycarebase/scripts.pory"
	msgbox Porygon2Dialog_Text_1, MSGBOX_DEFAULT
# 234 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 235 "data/maps/daycarebase/scripts.pory"
	release
	end


LurantisDialog::
# 240 "data/maps/daycarebase/scripts.pory"
	lock
# 241 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 242 "data/maps/daycarebase/scripts.pory"
	speakername LurantisDialog_Text_0
# 243 "data/maps/daycarebase/scripts.pory"
	msgbox LurantisDialog_Text_1, MSGBOX_DEFAULT
# 244 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 245 "data/maps/daycarebase/scripts.pory"
	release
	end


RioluDialog::
# 250 "data/maps/daycarebase/scripts.pory"
	lock
# 251 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 252 "data/maps/daycarebase/scripts.pory"
	goto_if_set FLAG_RIOLU_INTRO, RioluDialog_1
# 365 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 366 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_26
# 367 "data/maps/daycarebase/scripts.pory"
	setflag FLAG_RIOLU_INTRO
# 368 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 369 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_1:
# 254 "data/maps/daycarebase/scripts.pory"
	lock
# 255 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 256 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 257 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_1
# 258 "data/maps/daycarebase/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 259 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RioluDialog_4
# 355 "data/maps/daycarebase/scripts.pory"
	speakername RioluDialog_Text_0
# 356 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_25, MSGBOX_AUTOCLOSE
# 357 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 358 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_4:
# 262 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_2, MSGBOX_YESNO
# 263 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RioluDialog_7
# 347 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_24
# 348 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 349 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_7:
# 265 "data/maps/daycarebase/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 266 "data/maps/daycarebase/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, RioluDialog_Text_3, RioluDialog_Text_4, RioluDialog_Text_5, RioluDialog_Text_6, RioluDialog_Text_7, RioluDialog_Text_8, RioluDialog_Text_9, MimikyuDialog_Text_0, RioluDialog_Text_10, RioluDialog_Text_11, RioluDialog_Text_12
# 267 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RioluDialog_10
# 274 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RioluDialog_11
# 281 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RioluDialog_12
# 288 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RioluDialog_13
# 295 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq RioluDialog_14
# 302 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq RioluDialog_15
# 309 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq RioluDialog_16
# 316 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq RioluDialog_17
# 323 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq RioluDialog_18
# 330 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq RioluDialog_19
# 337 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq RioluDialog_20
	return

RioluDialog_10:
# 269 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_13, MSGBOX_DEFAULT
# 270 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 271 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_11:
# 276 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_14, MSGBOX_DEFAULT
# 277 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 278 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_12:
# 283 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_15, MSGBOX_DEFAULT
# 284 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 285 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_13:
# 290 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_16, MSGBOX_DEFAULT
# 291 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 292 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_14:
# 297 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_17, MSGBOX_DEFAULT
# 298 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 299 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_15:
# 304 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_18, MSGBOX_DEFAULT
# 305 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 306 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_16:
# 311 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_19, MSGBOX_DEFAULT
# 312 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 313 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_17:
# 318 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_20, MSGBOX_DEFAULT
# 319 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 320 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_18:
# 325 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_21, MSGBOX_DEFAULT
# 326 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 327 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_19:
# 332 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_22, MSGBOX_DEFAULT
# 333 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 334 "data/maps/daycarebase/scripts.pory"
	release
	end

RioluDialog_20:
# 339 "data/maps/daycarebase/scripts.pory"
	msgbox RioluDialog_Text_23, MSGBOX_DEFAULT
# 340 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 341 "data/maps/daycarebase/scripts.pory"
	release
	end


ShrinkToPikachuCave_Text_0:
# 7 "data/maps/daycarebase/scripts.pory"
	.string "There is a tiny hole that you can\nsqueeze through.\pWould you like to squeeze through it?$"

ShrinkToPikachuCave_Text_1:
# 21 "data/maps/daycarebase/scripts.pory"
	.string "There is a tiny hole, but you are not\n"
	.string "small enough to fit through it.$"

ShrinktoMausholdCave_Text_0:
# 46 "data/maps/daycarebase/scripts.pory"
	.string "There is a tiny hole.\nA small Pokémon may be able\lto squeeze through it.$"

MimikyuDialog_Text_0:
# 58 "data/maps/daycarebase/scripts.pory"
	.string "Pikachu$"

MimikyuDialog_Text_1:
# 59 "data/maps/daycarebase/scripts.pory"
	.string "Hey!\pI'm just a normal Pikachu in my usual\nspot!$"

MimikyuDialog_Text_2:
# 60 "data/maps/daycarebase/scripts.pory"
	.string "Mimikyu$"

MimikyuDialog_Text_3:
# 61 "data/maps/daycarebase/scripts.pory"
	.string "Oh...\nYou caught me.\pI wish I could disguise myself as\nwell as you can...\pMaybe then people would like me more...$"

KecleonDialog_Text_0:
# 80 "data/maps/daycarebase/scripts.pory"
	.string "Kecleon$"

KecleonDialog_Text_1:
# 81 "data/maps/daycarebase/scripts.pory"
	.string "Where do eggs come from?\pMy trainer left me here a long time\nago and I've yet to find one.\pDo you know?\pI've always heard of Dittos\nholding onto eggs...$"

KecleonDialog_Text_2:
# 89 "data/maps/daycarebase/scripts.pory"
	.string "Where do eggs come from?\pMy trainer left me here a long time\nago and I've yet to find one.$"

AzumarillDialog_Text_0:
# 102 "data/maps/daycarebase/scripts.pory"
	.string "Azumarill$"

AzumarillDialog_Text_1:
# 103 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pYou'll fit in well here.$"

AzumarillDialog_Text_2:
# 111 "data/maps/daycarebase/scripts.pory"
	.string "Oh!\nThank goodness you aren't a Ditto...\pMy trainer keeps putting me in here\nwith Dittos hoping we'll breed.\pThey even gave me this Sea Incence\nto set the mood...\pThey're just not my type.$"

DaycareOldManDialog_Text_0:
# 123 "data/maps/daycarebase/scripts.pory"
	.string "Daycare Man$"

DaycareOldManDialog_Text_1:
# 124 "data/maps/daycarebase/scripts.pory"
	.string "Back from exploring the Daycare?\pAh!\nBut where is your egg!\pKeep doing whatever it is you\nDittos do and come back when\lyou have one!$"

DaycareOldManDialog_Text_2:
# 132 "data/maps/daycarebase/scripts.pory"
	.string "Why what do we have here?\nGoodness!\pYou're holding an Egg!\pWherever did you get this?\pIt's the darndest thing.\pYou Pokémon always seem to find\nthese eggs, but I can never figure\lout where they come from.\pWould you like to give me the Egg\nso that I may give it to your\lTrainer?$"

DaycareOldManDialog_Text_3:
# 136 "data/maps/daycarebase/scripts.pory"
	.string "Thank your for the Egg!\pAs a reward, take this experience!\n$"

DaycareOldManDialog_Text_4:
# 137 "data/maps/daycarebase/scripts.pory"
	.string "Ditto gained 1 level!$"

DaycareOldManDialog_Text_5:
# 146 "data/maps/daycarebase/scripts.pory"
	.string "Oh, I see...\pGIMME THAT EGG!!\pThank your for the Egg!\pAs a reward, take this experience!\n$"

DaycareOldManDialog_Text_6:
# 157 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pDespite what trainers may see from\nRoute 117, the Daycare is a vast\larea filled with biomes for nearly\levery type of Pokémon!\pExplore the Daycare and interact\nwith many of the Pokémon we are\lraising.\pYou never know what friends you\nwill make along the way!\pNow, I do expect you to be holding\nan Egg at some point... Every Ditto\lI've raised has produced one.\pWhen you're holding an Egg,\ncome back and talk to me and\lwe can get it to your trainer.$"

VaporeonDialog_Text_0:
# 168 "data/maps/daycarebase/scripts.pory"
	.string "Vaporeon$"

VaporeonDialog_Text_1:
# 169 "data/maps/daycarebase/scripts.pory"
	.string "Ew!\pGet away from me.\pI know it's you Ditto.\pGoodness,\nwhy is everyone so into me?$"

LaprasDialog_Text_0:
# 179 "data/maps/daycarebase/scripts.pory"
	.string "Lapras$"

LaprasDialog_Text_1:
# 180 "data/maps/daycarebase/scripts.pory"
	.string "I love the Daycare!\pIt's so peaceful and quiet here.\pI can just float around all day\nand relax.\pThose waterfalls are pretty\nvicious, I won't go near them.\pI've heard that Dragonair can\neasily scale even the largest\lof waterfalls!$"

LinooneDialog_Text_0:
# 191 "data/maps/daycarebase/scripts.pory"
	.string "Linoone$"

LinooneDialog_Text_1:
# 192 "data/maps/daycarebase/scripts.pory"
	.string "The Daycare is huge!\pIt's a bit scary to expore,\nso I stay up here.\pRiolu is way more brave than I\nam and has explored the entirety\lof the Daycare.\pYou should talk with Riolu if\nyou get lost!\pI'm sure they can help!\n$"

LinooneDialog_Text_2:
# 202 "data/maps/daycarebase/scripts.pory"
	.string "Those Dittos really freak me out.\pThey could be any one of use right\nnow...\pEven you!... or me!\n$"

BulbsaurDialog_Text_0:
# 212 "data/maps/daycarebase/scripts.pory"
	.string "Bulbasaur$"

BulbsaurDialog_Text_1:
# 213 "data/maps/daycarebase/scripts.pory"
	.string "You want to know where Eggs\ncome from?\pI heard that a Pokémon needs\nto go on a great adventure to\lmeet a shapeshifting Pokémon.\pIf you can best them, they will\ngive you an egg!\pAt least, that's what Venusaur\ntold me...$"

CombeeDialog_Text_0:
# 222 "data/maps/daycarebase/scripts.pory"
	.string "Combee$"

CombeeDialog_Text_1:
# 223 "data/maps/daycarebase/scripts.pory"
	.string "I've been in this Daycare\nfor ages!\pI've flown all around and\npollenated so many flowers\lbut I still haven't gained a\lsingle level.\pI'm beginning to believe gaining\nexperience here is nothing more\lthan a big ole myth!$"

Porygon2Dialog_Text_0:
# 232 "data/maps/daycarebase/scripts.pory"
	.string "Porygon2$"

Porygon2Dialog_Text_1:
# 233 "data/maps/daycarebase/scripts.pory"
	.string "Another Ditto...\pI'm actually a Ditto too,\nI just prefer this look.\pThe Daycare population must be at\nleast 75 percent Dittos!\pMost Dittos will take on different\nforms.\pYou won't be able to transform\ninto a form that another Ditto has\ltaken on though.$"

LurantisDialog_Text_0:
# 242 "data/maps/daycarebase/scripts.pory"
	.string "Lurantis$"

LurantisDialog_Text_1:
# 243 "data/maps/daycarebase/scripts.pory"
	.string "One in every fifty Dittos that I\nsee here are blue.\pMust be all those shiny hunters\ntrying to capitalize on Gen 2\lmechanics.\pWhen will they learn that this is\nGen3...$"

RioluDialog_Text_0:
# 256 "data/maps/daycarebase/scripts.pory"
	.string "Riolu$"

RioluDialog_Text_1:
# 257 "data/maps/daycarebase/scripts.pory"
	.string "Back with a Lucky Egg?\n$"

RioluDialog_Text_2:
# 262 "data/maps/daycarebase/scripts.pory"
	.string "Great!\pI can tell about the habitat and\nability of a Pokémon in the Daycare.\pWould you like to exchange a\nLucky Egg?$"

RioluDialog_Text_3:
# 266 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine$"

RioluDialog_Text_4:
# 266 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou$"

RioluDialog_Text_5:
# 266 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly$"

RioluDialog_Text_6:
# 266 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair$"

RioluDialog_Text_7:
# 266 "data/maps/daycarebase/scripts.pory"
	.string "Marill$"

RioluDialog_Text_8:
# 266 "data/maps/daycarebase/scripts.pory"
	.string "Machamp$"

RioluDialog_Text_9:
# 266 "data/maps/daycarebase/scripts.pory"
	.string "Noivern$"

RioluDialog_Text_10:
# 266 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn$"

RioluDialog_Text_11:
# 266 "data/maps/daycarebase/scripts.pory"
	.string "Scyther$"

RioluDialog_Text_12:
# 266 "data/maps/daycarebase/scripts.pory"
	.string "Weavile$"

RioluDialog_Text_13:
# 269 "data/maps/daycarebase/scripts.pory"
	.string "Arcanine can be found deep in the\nVolcano.\pIt can run really fast and scale\nhills that would normally be to\lslippery to climb!$"

RioluDialog_Text_14:
# 276 "data/maps/daycarebase/scripts.pory"
	.string "Chinchou can be found in a cave\non the water in the desert.\pIt can dive deep underwater.\n$"

RioluDialog_Text_15:
# 283 "data/maps/daycarebase/scripts.pory"
	.string "Cutiefly can be found in the\nDaycare's flowers to the west.\pIt's a tiny Pokémon that can\nfit through small openings.$"

RioluDialog_Text_16:
# 290 "data/maps/daycarebase/scripts.pory"
	.string "Dragonair can be found at the lake.\pIt can be a bit cryptic so it\nmay be difficult to reach.\pIt can scale large waterfalls\nwith ease.$"

RioluDialog_Text_17:
# 297 "data/maps/daycarebase/scripts.pory"
	.string "Marill can be found at the lake,\nusually by the shore.\pIt's a bit shy so it may be hiding.\pIt can float in any body of water.\n$"

RioluDialog_Text_18:
# 304 "data/maps/daycarebase/scripts.pory"
	.string "Machamp likes to train deep in\nthe mountains.\pIt is a very tough and solitary\nPokémon.\pIts strength can move large\nboulders.$"

RioluDialog_Text_19:
# 311 "data/maps/daycarebase/scripts.pory"
	.string "Noivern hangs out in a dark\ncave above the Daycare Falls.\pIt's quite a powerful Pokémon,\nso be prepared for a fight.\pIt can soar through the air,\nreaching places unreachable by\lnon_flying types.$"

RioluDialog_Text_20:
# 318 "data/maps/daycarebase/scripts.pory"
	.string "Pikachu is standing on that cliff\nright over there.\pIts electricity can light up even\nthe darkest of caves.$"

RioluDialog_Text_21:
# 325 "data/maps/daycarebase/scripts.pory"
	.string "Rhyhorn lives in the desert.\pIt's quite a friendly Pokémon,\nbut don't upset it!\pIt is strong enough to smash\nsolid rocks!$"

RioluDialog_Text_22:
# 332 "data/maps/daycarebase/scripts.pory"
	.string "Scyther has been spending time\nacross the water in the mountains.\pIts sharp scythes can cut through\nsmall trees.$"

RioluDialog_Text_23:
# 339 "data/maps/daycarebase/scripts.pory"
	.string "Weavile is quite the ninja.\pIt spends time in the tall trees\nin the jungle.\pIt demands a fierce challenger\nto battle it.\pIts agility allows it to cross\neven the smallest of walkways.$"

RioluDialog_Text_24:
# 347 "data/maps/daycarebase/scripts.pory"
	.string "Oh.\pWhat else are you gonna do\nwith that egg?$"

RioluDialog_Text_25:
# 356 "data/maps/daycarebase/scripts.pory"
	.string "No?\nCome back when you do!$"

RioluDialog_Text_26:
# 366 "data/maps/daycarebase/scripts.pory"
	.string "Hiya!\pI'm Riolu!\pI've visited every biome the\nDaycare has to offer.\lI know it like the back of my paw!\pIf you need guidance on where a\ncertain Pokémon might be,\lI'm your Pokémon!\pAlthough I won't do it for free...\pBring me Lucky Eggs, and I'll tell\nyou what I know.$"
