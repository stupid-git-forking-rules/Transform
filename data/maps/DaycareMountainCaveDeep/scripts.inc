DaycareMountainCaveDeep_MapScripts::
	.byte 0


Daycaremountaincavedeep_FindSuperPotion::
# 4 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 5 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removeobject mcdpotion
# 6 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	giveitem ITEM_SUPER_POTION
# 7 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 8 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_ITEM_DAYCARE_MCD1
# 9 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end


DaycareMCD_FindLuckyEgg::
# 14 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 15 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removeobject mcdegg
# 16 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 17 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 18 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_ITEM_DAYCARE_MCD2
# 19 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end


SphealDialog::
# 24 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_MARILL
	goto_if_ne SphealDialog_1
# 37 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 38 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 39 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername SphealDialog_Text_0
# 40 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_SPHEAL, EMOTE_ELATED
# 41 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox SphealDialog_Text_2, MSGBOX_DEFAULT
# 41 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 42 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
# 43 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
	end

SphealDialog_1:
# 26 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 27 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 28 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername SphealDialog_Text_0
# 29 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_SPHEAL, EMOTE_NORMAL
# 30 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox SphealDialog_Text_1, MSGBOX_DEFAULT
# 31 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 32 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 33 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end


EiscueDialog::
# 50 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	goto_if_unset FLAG_HIDE_EISCUE, EiscueDialog_1
	return

EiscueDialog_1:
# 52 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_RHYHORN
	goto_if_eq EiscueDialog_3
# 102 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 103 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 104 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername EiscueDialog_Text_0
# 105 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_EISCUE, EMOTE_SAD
# 106 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox EiscueDialog_Text_1, MSGBOX_DEFAULT
# 107 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 108 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 109 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 110 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox EiscueDialog_Text_5, MSGBOX_DEFAULT
# 111 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 112 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 113 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end

EiscueDialog_3:
# 53 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 54 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 55 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername EiscueDialog_Text_0
# 56 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_EISCUE, EMOTE_SAD
# 57 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox EiscueDialog_Text_1, MSGBOX_DEFAULT
# 58 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 59 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 60 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 61 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox EiscueDialog_Text_2, MSGBOX_YESNO
# 62 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 63 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EiscueDialog_6
# 96 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 97 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end

EiscueDialog_6:
# 65 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	fadenewbgm MUS_PMD_MOUNTAIN
# 66 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 67 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removeobject Eiscue
# 68 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_HIDE_EISCUE
# 69 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	playse SE_M_BRICK_BREAK
# 70 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SHOW_NOICE
# 71 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitse
# 72 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	addobject NoIce
# 73 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	applymovement NoIce, EiscueDialog_Movement_0
# 74 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmovement NoIce
# 75 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 76 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	playse SE_PIN
# 77 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	applymovement NoIce, Common_Movement_ExclamationMark
# 78 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmovement NoIce
# 79 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername EiscueDialog_Text_0
# 80 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_EISCUENOICE, EMOTE_NORMAL
# 81 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox EiscueDialog_Text_3, MSGBOX_DEFAULT
# 82 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 83 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 84 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 85 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 86 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername EiscueDialog_Text_0
# 87 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_EISCUENOICE, EMOTE_NORMAL
# 88 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox EiscueDialog_Text_4, MSGBOX_DEFAULT
# 89 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 90 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 91 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end


FreedEicscue::
# 121 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 122 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 123 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername EiscueDialog_Text_0
# 124 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_EISCUENOICE, EMOTE_NORMAL
# 125 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox FreedEicscue_Text_0, MSGBOX_DEFAULT
# 126 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 127 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 128 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end


AlolanSandshrewDialog::
# 133 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 134 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 135 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername AlolanSandshrewDialog_Text_0
# 136 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_ALOLANSANDSLASH, EMOTE_NORMAL
# 137 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox AlolanSandshrewDialog_Text_1, MSGBOX_DEFAULT
# 138 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 139 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 140 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end


DaycareMCDDittoOpenXforms::
# 147 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 148 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 149 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	goto_if_set FLAG_DITTO_INTRO, DaycareMCDDittoOpenXforms_1
# 211 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername DaycareMCDDittoOpenXforms_Text_1
# 212 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 213 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox DaycareMCDDittoOpenXforms_Text_4, MSGBOX_DEFAULT
# 213 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 214 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_DITTO_INTRO
# 215 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 216 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 217 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end

DaycareMCDDittoOpenXforms_1:
# 151 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	goto_if_set FLAG_XFORMS_TALKED_TO_DITTO, DaycareMCDDittoOpenXforms_4
# 178 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername DaycareMCDDittoOpenXforms_Text_1
# 179 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 180 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox DaycareMCDDittoOpenXforms_Text_3, MSGBOX_DEFAULT
# 180 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 181 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_XFORMS_TALKED_TO_DITTO
# 182 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 183 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 184 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 185 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox DaycareMCDDittoOpenXforms_Text_0, MSGBOX_YESNO
# 186 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareMCDDittoOpenXforms_10
# 196 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername DaycareMCDDittoOpenXforms_Text_1
# 197 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 198 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox DaycareMCDDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 199 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 200 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 201 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 202 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 203 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end

DaycareMCDDittoOpenXforms_4:
# 153 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox DaycareMCDDittoOpenXforms_Text_0, MSGBOX_YESNO
# 154 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareMCDDittoOpenXforms_7
# 166 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername DaycareMCDDittoOpenXforms_Text_1
# 167 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 168 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox DaycareMCDDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 169 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 170 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 171 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 172 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 173 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end

DaycareMCDDittoOpenXforms_7:
# 156 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	dittotransform SPECIES_DITTO
# 157 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	special OpenPCMoveMons
# 158 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitstate
# 159 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 160 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 161 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end

DaycareMCDDittoOpenXforms_10:
# 188 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	dittotransform SPECIES_DITTO
# 189 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	special OpenPCMoveMons
# 190 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitstate
# 191 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end


# 73 "data/maps/DaycareMountainCaveDeep/scripts.pory"
EiscueDialog_Movement_0:
# 73 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	face_player
	step_end

SphealDialog_Text_0:
# 28 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Spheal$"

SphealDialog_Text_1:
# 30 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "The water is much colder down here!\pThe beaches on the surface are too\nwarm for my taste.\pI just wish there were more round\nPokémon around here though...$"

SphealDialog_Text_2:
# 41 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Wow!\nYou're really round!\pJust like me!\pCan I tell you a secret?\pI once saw a Ditto carrying an\nEgg away from the beach in the\lOceanfront biome!\pThey must have gotten the Egg\nsomewhere around there!$"

EiscueDialog_Text_0:
# 55 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Eiscue$"

EiscueDialog_Text_1:
# 57 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Mmmmffff!\n$"

EiscueDialog_Text_2:
# 61 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "This Eiscue is having trouble\ncommunicating through the giant\lice cube on its head.\pWould you like to use Rock Smash?\n$"

EiscueDialog_Text_3:
# 81 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Goodness!\nThank you.\pI have been trying to get that\nice cube off my head forever!\pTake this as a token of my\nappreciation.$"

EiscueDialog_Text_4:
# 88 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "I think I might go for a swim now!\n$"

EiscueDialog_Text_5:
# 110 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "This Eiscue is having trouble\ncommunicating through the giant\lice cube on its head.$"

FreedEicscue_Text_0:
# 125 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Thank you again!\pI feel like I'm finally able\nto regain my balance.$"

AlolanSandshrewDialog_Text_0:
# 135 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Sandslash$"

AlolanSandshrewDialog_Text_1:
# 137 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "That Eiscue seems to be\nstruggling.\pI'm sure a Pokémon who can\nsmash rocks could smash that\lice cube.$"

DaycareMCDDittoOpenXforms_Text_0:
# 153 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Would you like to change out your\ntransformation options?$"

DaycareMCDDittoOpenXforms_Text_1:
# 166 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Ditto$"

DaycareMCDDittoOpenXforms_Text_2:
# 168 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Come back anytime!$"

DaycareMCDDittoOpenXforms_Text_3:
# 180 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Ditto!\pYou can only remember four\ntransformations at a time.\pWe Dittos can act as a way to\nswap out which transformations\lyou have active at anytime!\pYou'll find us scattered around\nthe Daycare.\pNow...\n$"

DaycareMCDDittoOpenXforms_Text_4:
# 213 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Hello there fellow Ditto!\pDaycare Man asked you to get an Egg\nfor him, did he?\pWell, you're about to learn the\nthe secret of how we Dittos are\lalways found holding Eggs.\pIt'll be quite the adventure!\pDon't forget, you are a Ditto,\nso you can transform into any\lPokémon you defeat in battle!\pThis does only apply to Pokémon\nwho are not already using\lTransform...\pPress the {SELECT_BUTTON} button to\nopen your transformation menu.\pIf you open your Transformation\nParty, you'll see which Pokémon\lyou can transform into!$"
