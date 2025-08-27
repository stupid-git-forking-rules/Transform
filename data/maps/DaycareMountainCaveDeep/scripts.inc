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
# 31 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 32 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 33 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername SphealDialog_Text_0
# 34 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox SphealDialog_Text_2, MSGBOX_DEFAULT
# 34 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 35 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end

SphealDialog_1:
# 22 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 23 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 24 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername SphealDialog_Text_0
# 25 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox SphealDialog_Text_1, MSGBOX_DEFAULT
# 26 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 27 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end


EiscueDialog::
# 42 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	goto_if_unset FLAG_HIDE_EISCUE, EiscueDialog_1
	return

EiscueDialog_1:
# 44 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_RHYHORN
	goto_if_eq EiscueDialog_3
# 87 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 88 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 89 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername EiscueDialog_Text_0
# 90 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox EiscueDialog_Text_1, MSGBOX_DEFAULT
# 91 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 92 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox EiscueDialog_Text_5, MSGBOX_DEFAULT
# 93 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 94 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 95 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end

EiscueDialog_3:
# 45 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 46 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 47 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername EiscueDialog_Text_0
# 48 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox EiscueDialog_Text_1, MSGBOX_DEFAULT
# 49 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 50 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox EiscueDialog_Text_2, MSGBOX_YESNO
# 51 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 52 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EiscueDialog_6
# 81 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 82 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end

EiscueDialog_6:
# 54 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	fadenewbgm MUS_PMD_MOUNTAIN
# 55 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 56 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removeobject Eiscue
# 57 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_HIDE_EISCUE
# 58 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	playse SE_M_BRICK_BREAK
# 59 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SHOW_NOICE
# 60 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitse
# 61 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	addobject NoIce
# 62 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	applymovement NoIce, EiscueDialog_Movement_0
# 63 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmovement NoIce
# 64 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 65 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	playse SE_PIN
# 66 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	applymovement NoIce, Common_Movement_ExclamationMark
# 67 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmovement NoIce
# 68 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername EiscueDialog_Text_0
# 69 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox EiscueDialog_Text_3, MSGBOX_DEFAULT
# 70 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 71 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 72 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 73 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername EiscueDialog_Text_0
# 74 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox EiscueDialog_Text_4, MSGBOX_DEFAULT
# 75 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 76 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end


FreedEicscue::
# 103 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 104 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 105 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername EiscueDialog_Text_0
# 106 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox FreedEicscue_Text_0, MSGBOX_DEFAULT
# 107 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 108 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end


AlolanSandshrewDialog::
# 113 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 114 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 115 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername AlolanSandshrewDialog_Text_0
# 116 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox AlolanSandshrewDialog_Text_1, MSGBOX_DEFAULT
# 117 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 118 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end


DaycareMCDDittoOpenXforms::
# 125 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 126 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 127 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	goto_if_set FLAG_DITTO_INTRO, DaycareMCDDittoOpenXforms_1
# 186 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername DaycareMCDDittoOpenXforms_Text_0
# 187 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 188 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox DaycareMCDDittoOpenXforms_Text_4, MSGBOX_DEFAULT
# 188 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 189 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_DITTO_INTRO
# 190 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 191 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 192 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end

DaycareMCDDittoOpenXforms_1:
# 129 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	goto_if_set FLAG_XFORMS_TALKED_TO_DITTO, DaycareMCDDittoOpenXforms_4
# 155 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername DaycareMCDDittoOpenXforms_Text_0
# 156 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 157 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox DaycareMCDDittoOpenXforms_Text_3, MSGBOX_DEFAULT
# 157 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 158 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_XFORMS_TALKED_TO_DITTO
# 159 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 160 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox DaycareMCDDittoOpenXforms_Text_1, MSGBOX_YESNO
# 161 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareMCDDittoOpenXforms_10
# 172 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 173 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox DaycareMCDDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 174 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 175 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 176 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 177 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 178 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end

DaycareMCDDittoOpenXforms_4:
# 131 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername DaycareMCDDittoOpenXforms_Text_0
# 132 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox DaycareMCDDittoOpenXforms_Text_1, MSGBOX_YESNO
# 133 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareMCDDittoOpenXforms_7
# 144 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 145 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox DaycareMCDDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 146 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 147 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removefieldmugshot
# 148 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 149 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 150 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end

DaycareMCDDittoOpenXforms_7:
# 135 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	special OpenPCMoveMons
# 136 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitstate
# 137 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 138 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 139 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end

DaycareMCDDittoOpenXforms_10:
# 163 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	special OpenPCMoveMons
# 164 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitstate
# 165 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 166 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 167 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end


# 62 "data/maps/DaycareMountainCaveDeep/scripts.pory"
EiscueDialog_Movement_0:
# 62 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	face_player
	step_end

SphealDialog_Text_0:
# 24 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Spheal$"

SphealDialog_Text_1:
# 25 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "The water is much colder down here!\pThe beaches on the surface are too\nwarm for my taste.\pI just wish there were more round\nPokémon around here though...$"

SphealDialog_Text_2:
# 34 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Wow!\nYou're really round!\pJust like me!\pCan I tell you a secret?\pI once saw a Ditto carrying an\nEgg away from the beach in the\lOceanfront biome!\pThey must have gotten the Egg\nsomewhere around there!$"

EiscueDialog_Text_0:
# 47 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Eiscue$"

EiscueDialog_Text_1:
# 48 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Mmmmffff!\n$"

EiscueDialog_Text_2:
# 50 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "This Eiscue is having trouble\ncommunicating through the giant\lice cube on its head.\pWould you like to use Rock Smash?\n$"

EiscueDialog_Text_3:
# 69 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Goodness!\nThank you.\pI have been trying to get that\nice cube off my head forever!\pTake this as a token of my\nappreciation.$"

EiscueDialog_Text_4:
# 74 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "I think I might go for a swim now!\n$"

EiscueDialog_Text_5:
# 92 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "This Eiscue is having trouble\ncommunicating through the giant\lice cube on its head.$"

FreedEicscue_Text_0:
# 106 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Thank you again!\pI feel like I'm finally able\nto regain my balance.$"

AlolanSandshrewDialog_Text_0:
# 115 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Sandslash$"

AlolanSandshrewDialog_Text_1:
# 116 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "That Eiscue seems to be\nstruggling.\pI'm sure a Pokémon who can\nsmash rocks could smash that\lice cube.$"

DaycareMCDDittoOpenXforms_Text_0:
# 131 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Ditto$"

DaycareMCDDittoOpenXforms_Text_1:
# 132 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Would you like to change out your\ntransformation options?$"

DaycareMCDDittoOpenXforms_Text_2:
# 145 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Come back anytime!$"

DaycareMCDDittoOpenXforms_Text_3:
# 157 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Ditto!\pYou can only remember four\ntransformations at a time.\pWe Dittos can act as a way to\nswap out which transformations\lyou have active at anytime!\pYou'll find us scattered around\nthe Daycare.\pNow...\n$"

DaycareMCDDittoOpenXforms_Text_4:
# 188 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Hello there fellow Ditto!\pDaycare Man asked you to get an Egg\nfor him, did he?\pWell, you're about to learn the\nthe secret of how we Dittos are\lalways found holding Eggs.\pIt'll be quite the adventure!\pDon't forget, you are a Ditto,\nso you can transform into any\lPokémon you defeat in battle!\pThis does only apply to Pokémon\nwho are not already using\lTransform...\pPress the {SELECT_BUTTON} button to\nopen your transformation menu.\pIf you open your Transformation\nParty, you'll see which Pokémon\lyou can transform into!$"
