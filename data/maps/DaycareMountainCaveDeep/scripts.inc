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
# 84 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 85 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 86 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername EiscueDialog_Text_0
# 87 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox EiscueDialog_Text_1, MSGBOX_DEFAULT
# 88 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 89 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox EiscueDialog_Text_5, MSGBOX_DEFAULT
# 90 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 91 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 92 "data/maps/DaycareMountainCaveDeep/scripts.pory"
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
# 78 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 79 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end

EiscueDialog_6:
# 54 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 55 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	removeobject Eiscue
# 56 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_HIDE_EISCUE
# 57 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	playse SE_M_BRICK_BREAK
# 58 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SHOW_NOICE
# 59 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitse
# 60 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	addobject NoIce
# 61 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 62 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	playse SE_PIN
# 63 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	applymovement NoIce, Common_Movement_ExclamationMark
# 64 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmovement NoIce
# 65 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername EiscueDialog_Text_0
# 66 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox EiscueDialog_Text_3, MSGBOX_DEFAULT
# 67 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 68 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 69 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 70 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername EiscueDialog_Text_0
# 71 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox EiscueDialog_Text_4, MSGBOX_DEFAULT
# 72 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 73 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end


FreedEicscue::
# 100 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 101 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 102 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername EiscueDialog_Text_0
# 103 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox FreedEicscue_Text_0, MSGBOX_DEFAULT
# 104 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 105 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end


AlolanSandshrewDialog::
# 110 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	lock
# 111 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	faceplayer
# 112 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	speakername AlolanSandshrewDialog_Text_0
# 113 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	msgbox AlolanSandshrewDialog_Text_1, MSGBOX_DEFAULT
# 114 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	waitmessage
# 115 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	release
	end


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
# 66 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Goodness!\nThank you.\pI have been trying to get that\nice cube off my head forever!\pTake this as a token of my\nappreciation.$"

EiscueDialog_Text_4:
# 71 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "I think I might go for a swim now!\n$"

EiscueDialog_Text_5:
# 89 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "This Eiscue is having trouble\ncommunicating through the giant\lice cube on its head.$"

FreedEicscue_Text_0:
# 103 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Thank you again!\pI feel like I'm finally able\nto regain my balance.$"

AlolanSandshrewDialog_Text_0:
# 112 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "Sandslash$"

AlolanSandshrewDialog_Text_1:
# 113 "data/maps/DaycareMountainCaveDeep/scripts.pory"
	.string "That Eiscue seems to be\nstruggling.\pI'm sure a Pokémon who can\nsmash rocks could smash that\lice cube.$"
