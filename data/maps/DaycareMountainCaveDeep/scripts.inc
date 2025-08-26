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
	goto_if_set FLAG_XFORMS_TALKED_TO_DITTO, DaycareMCDDittoOpenXforms_1
# 152 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername DaycareMCDDittoOpenXforms_Text_0
# 153 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox DaycareMCDDittoOpenXforms_Text_3, MSGBOX_DEFAULT
# 153 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 154 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_XFORMS_TALKED_TO_DITTO
# 155 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox DaycareMCDDittoOpenXforms_Text_1, MSGBOX_YESNO
# 156 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareMCDDittoOpenXforms_7
# 167 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox DaycareMCDDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 168 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 169 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 170 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 171 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end

DaycareMCDDittoOpenXforms_1:
# 129 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername DaycareMCDDittoOpenXforms_Text_0
# 130 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox DaycareMCDDittoOpenXforms_Text_1, MSGBOX_YESNO
# 131 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareMCDDittoOpenXforms_4
# 142 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox DaycareMCDDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 143 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 144 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 145 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 146 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end

DaycareMCDDittoOpenXforms_4:
# 133 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	special OpenPCMoveMons
# 134 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitstate
# 135 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 136 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 137 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end

DaycareMCDDittoOpenXforms_7:
# 158 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	special OpenPCMoveMons
# 159 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitstate
# 160 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 161 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 162 "data/maps/DaycareMountainCaveDeep/scripts.pory"
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
# 129 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Ditto$"

DaycareMCDDittoOpenXforms_Text_1:
# 130 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Would you like to change out your\ntransformation options?$"

DaycareMCDDittoOpenXforms_Text_2:
# 142 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Come back anytime!$"

DaycareMCDDittoOpenXforms_Text_3:
# 153 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Ditto!\pYou can only remember four\ntransformations at a time.\pWe Dittos can act as a way to\nswap out which transformations\lyou have active at anytime!\pYou'll find us scattered around\nthe Daycare.\pNow...\n$"
