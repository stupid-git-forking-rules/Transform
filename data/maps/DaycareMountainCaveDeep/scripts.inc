DaycareMountainCaveDeep_MapScripts::
	.byte 0


Daycaremountaincavedeep_FindSuperPotion::
# 4 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 5 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	finditem ITEM_SUPER_POTION
# 6 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 7 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end


DaycareMCD_FindLuckyEgg::
# 12 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 13 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	finditem ITEM_LUCKY_EGG
# 14 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 15 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end


SphealDialog::
# 20 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_MARILL
	goto_if_ne SphealDialog_1
# 33 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 34 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 35 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername SphealDialog_Text_0
# 36 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_SPHEAL, EMOTE_ELATED
# 37 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox SphealDialog_Text_2, MSGBOX_DEFAULT
# 37 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 38 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
# 39 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
	end

SphealDialog_1:
# 22 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 23 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 24 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername SphealDialog_Text_0
# 25 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_SPHEAL, EMOTE_NORMAL
# 26 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox SphealDialog_Text_1, MSGBOX_DEFAULT
# 27 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 28 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 29 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end


EiscueDialog::
# 46 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	goto_if_unset FLAG_HIDE_EISCUE, EiscueDialog_1
	return

EiscueDialog_1:
# 48 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_RHYHORN
	goto_if_eq EiscueDialog_3
# 98 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 99 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 100 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername EiscueDialog_Text_0
# 101 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_EISCUE, EMOTE_SAD
# 102 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox EiscueDialog_Text_1, MSGBOX_DEFAULT
# 103 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 104 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 105 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 106 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox EiscueDialog_Text_5, MSGBOX_DEFAULT
# 107 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 108 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 109 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end

EiscueDialog_3:
# 49 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 50 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 51 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername EiscueDialog_Text_0
# 52 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_EISCUE, EMOTE_SAD
# 53 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox EiscueDialog_Text_1, MSGBOX_DEFAULT
# 54 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 55 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 56 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 57 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox EiscueDialog_Text_2, MSGBOX_YESNO
# 58 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 59 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EiscueDialog_6
# 92 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 93 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end

EiscueDialog_6:
# 61 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	fadenewbgm MUS_PMD_MOUNTAIN
# 62 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 63 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removeobject Eiscue
# 64 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_HIDE_EISCUE
# 65 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	playse SE_M_BRICK_BREAK
# 66 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SHOW_NOICE
# 67 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitse
# 68 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	addobject NoIce
# 69 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	applymovement NoIce, EiscueDialog_Movement_0
# 70 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmovement NoIce
# 71 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 72 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	playse SE_PIN
# 73 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	applymovement NoIce, Common_Movement_ExclamationMark
# 74 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmovement NoIce
# 75 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername EiscueDialog_Text_0
# 76 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_EISCUENOICE, EMOTE_NORMAL
# 77 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox EiscueDialog_Text_3, MSGBOX_DEFAULT
# 78 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 79 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 80 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 81 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 82 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername EiscueDialog_Text_0
# 83 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_EISCUENOICE, EMOTE_NORMAL
# 84 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox EiscueDialog_Text_4, MSGBOX_DEFAULT
# 85 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 86 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 87 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end


FreedEicscue::
# 117 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 118 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 119 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername EiscueDialog_Text_0
# 120 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_EISCUENOICE, EMOTE_NORMAL
# 121 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox FreedEicscue_Text_0, MSGBOX_DEFAULT
# 122 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 123 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 124 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end


AlolanSandshrewDialog::
# 129 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 130 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 131 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername AlolanSandshrewDialog_Text_0
# 132 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_ALOLANSANDSLASH, EMOTE_NORMAL
# 133 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox AlolanSandshrewDialog_Text_1, MSGBOX_DEFAULT
# 134 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 135 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 136 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end


DaycareMCDDittoOpenXforms::
# 143 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 144 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 145 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	goto_if_set FLAG_DITTO_INTRO, DaycareMCDDittoOpenXforms_1
# 207 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername DaycareMCDDittoOpenXforms_Text_1
# 208 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 209 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox DaycareMCDDittoOpenXforms_Text_4, MSGBOX_DEFAULT
# 209 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 210 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_DITTO_INTRO
# 211 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 212 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 213 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end

DaycareMCDDittoOpenXforms_1:
# 147 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	goto_if_set FLAG_XFORMS_TALKED_TO_DITTO, DaycareMCDDittoOpenXforms_4
# 174 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername DaycareMCDDittoOpenXforms_Text_1
# 175 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 176 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox DaycareMCDDittoOpenXforms_Text_3, MSGBOX_DEFAULT
# 176 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 177 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_XFORMS_TALKED_TO_DITTO
# 178 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 179 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 180 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 181 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox DaycareMCDDittoOpenXforms_Text_0, MSGBOX_YESNO
# 182 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareMCDDittoOpenXforms_10
# 192 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername DaycareMCDDittoOpenXforms_Text_1
# 193 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 194 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox DaycareMCDDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 195 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 196 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 197 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 198 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 199 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end

DaycareMCDDittoOpenXforms_4:
# 149 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox DaycareMCDDittoOpenXforms_Text_0, MSGBOX_YESNO
# 150 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareMCDDittoOpenXforms_7
# 162 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername DaycareMCDDittoOpenXforms_Text_1
# 163 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 164 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox DaycareMCDDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 165 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 166 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 167 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 168 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 169 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end

DaycareMCDDittoOpenXforms_7:
# 152 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	dittotransform SPECIES_DITTO
# 153 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	special OpenPCMoveMons
# 154 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitstate
# 155 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 156 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 157 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end

DaycareMCDDittoOpenXforms_10:
# 184 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	dittotransform SPECIES_DITTO
# 185 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	special OpenPCMoveMons
# 186 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitstate
# 187 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end


# 69 "data/maps/DaycareMountainCaveDeep/scripts.pory"
EiscueDialog_Movement_0:
# 69 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	face_player
	step_end

SphealDialog_Text_0:
# 24 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Spheal$"

SphealDialog_Text_1:
# 26 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "The water is much colder down here!\pThe beaches on the surface are too\nwarm for my taste.\pI just wish there were more round\nPokémon around here though...$"

SphealDialog_Text_2:
# 37 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Wow!\nYou're really round!\pJust like me!\pCan I tell you a secret?\pI once saw a Ditto carrying an\nEgg away from the beach in the\lOceanfront biome!\pThey must have gotten the Egg\nsomewhere around there!$"

EiscueDialog_Text_0:
# 51 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Eiscue$"

EiscueDialog_Text_1:
# 53 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Mmmmffff!\n$"

EiscueDialog_Text_2:
# 57 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "This Eiscue is having trouble\ncommunicating through the giant\lice cube on its head.\pWould you like to use Rock Smash?\n$"

EiscueDialog_Text_3:
# 77 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Goodness!\nThank you.\pI have been trying to get that\nice cube off my head forever!\pTake this as a token of my\nappreciation.$"

EiscueDialog_Text_4:
# 84 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "I think I might go for a swim now!\n$"

EiscueDialog_Text_5:
# 106 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "This Eiscue is having trouble\ncommunicating through the giant\lice cube on its head.$"

FreedEicscue_Text_0:
# 121 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Thank you again!\pI feel like I'm finally able\nto regain my balance.$"

AlolanSandshrewDialog_Text_0:
# 131 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Sandslash$"

AlolanSandshrewDialog_Text_1:
# 133 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "That Eiscue seems to be\nstruggling.\pI'm sure a Pokémon who can\nsmash rocks could smash that\lice cube.$"

DaycareMCDDittoOpenXforms_Text_0:
# 149 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Would you like to change out your\ntransformation options?$"

DaycareMCDDittoOpenXforms_Text_1:
# 162 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Ditto$"

DaycareMCDDittoOpenXforms_Text_2:
# 164 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Come back anytime!$"

DaycareMCDDittoOpenXforms_Text_3:
# 176 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Ditto!\pYou can only remember four\ntransformations at a time.\pWe Dittos can act as a way to\nswap out which transformations\lyou have active at anytime!\pYou'll find us scattered around\nthe Daycare.\pNow...\n$"

DaycareMCDDittoOpenXforms_Text_4:
# 209 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Hello there fellow Ditto!\pDaycare Man asked you to get an Egg\nfor him, did he?\pWell, you're about to learn the\nthe secret of how we Dittos are\lalways found holding Eggs.\pIt'll be quite the adventure!\pDon't forget, you are a Ditto,\nso you can transform into any\lPokémon you defeat in battle!\pThis does only apply to Pokémon\nwho are not already using\lTransform...\pPress the {SELECT_BUTTON} button to\nopen your transformation menu.\pIf you open your Transformation\nParty, you'll see which Pokémon\lyou can transform into!$"
