DaycareEastUnderwater_MapScripts::
	.byte 0


HorseaDialog::
# 4 "data/maps/DaycareEastUnderwater/scripts.pory"
	lock
# 5 "data/maps/DaycareEastUnderwater/scripts.pory"
	faceplayer
# 6 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername HorseaDialog_Text_0
# 7 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox HorseaDialog_Text_1, MSGBOX_DEFAULT
# 8 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 9 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


ShellderDialog::
# 14 "data/maps/DaycareEastUnderwater/scripts.pory"
	lock
# 15 "data/maps/DaycareEastUnderwater/scripts.pory"
	faceplayer
# 16 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox ShellderDialog_Text_0, MSGBOX_DEFAULT
# 17 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 18 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


CorsolaDialog::
# 23 "data/maps/DaycareEastUnderwater/scripts.pory"
	lock
# 24 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername CorsolaDialog_Text_0
# 25 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_1, MSGBOX_YESNO
# 26 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 27 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CorsolaDialog_1
# 94 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_8, MSGBOX_AUTOCLOSE
# 95 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 96 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_1:
# 29 "data/maps/DaycareEastUnderwater/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 30 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CorsolaDialog_4
# 86 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_7, MSGBOX_AUTOCLOSE
# 87 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 88 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_4:
# 32 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername CorsolaDialog_Text_0
# 33 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_2, MSGBOX_DEFAULT
# 34 "data/maps/DaycareEastUnderwater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, CorsolaDialog_Text_3, CorsolaDialog_Text_4, CorsolaDialog_Text_5
# 35 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CorsolaDialog_8
# 43 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CorsolaDialog_11
# 63 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq CorsolaDialog_13
	return

CorsolaDialog_8:
# 37 "data/maps/DaycareEastUnderwater/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 38 "data/maps/DaycareEastUnderwater/scripts.pory"
	giveitem ITEM_SUPER_POTION
# 39 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 40 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_11:
# 45 "data/maps/DaycareEastUnderwater/scripts.pory"
	checkitem ITEM_LUCKY_EGG, 2
# 46 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CorsolaDialog_15
# 55 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername CorsolaDialog_Text_0
# 56 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_6, MSGBOX_DEFAULT
# 57 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 58 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_13:
# 65 "data/maps/DaycareEastUnderwater/scripts.pory"
	checkitem ITEM_LUCKY_EGG, 3
# 66 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CorsolaDialog_18
# 75 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername CorsolaDialog_Text_0
# 76 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_6, MSGBOX_DEFAULT
# 77 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 78 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_15:
# 48 "data/maps/DaycareEastUnderwater/scripts.pory"
	removeitem ITEM_LUCKY_EGG, 2
# 49 "data/maps/DaycareEastUnderwater/scripts.pory"
	giveitem ITEM_SUPER_POTION, 2
# 50 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 51 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_18:
# 68 "data/maps/DaycareEastUnderwater/scripts.pory"
	removeitem ITEM_LUCKY_EGG, 3
# 69 "data/maps/DaycareEastUnderwater/scripts.pory"
	giveitem ITEM_SUPER_POTION, 3
# 70 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 71 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


ClauncherDialog::
# 103 "data/maps/DaycareEastUnderwater/scripts.pory"
	lock
# 104 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox ClauncherDialog_Text_0, MSGBOX_DEFAULT
# 105 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 106 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


TentacoolDialog::
# 110 "data/maps/DaycareEastUnderwater/scripts.pory"
	lock
# 111 "data/maps/DaycareEastUnderwater/scripts.pory"
	faceplayer
# 112 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername TentacoolDialog_Text_0
# 113 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox TentacoolDialog_Text_1, MSGBOX_DEFAULT
# 114 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 115 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


BinacleDialog::
# 119 "data/maps/DaycareEastUnderwater/scripts.pory"
	lock
# 120 "data/maps/DaycareEastUnderwater/scripts.pory"
	faceplayer
# 121 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername BinacleDialog_Text_0
# 122 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox BinacleDialog_Text_1, MSGBOX_DEFAULT
# 123 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 124 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


SkrelpDialog::
# 128 "data/maps/DaycareEastUnderwater/scripts.pory"
	lock
# 129 "data/maps/DaycareEastUnderwater/scripts.pory"
	faceplayer
# 130 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername SkrelpDialog_Text_0
# 131 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox SkrelpDialog_Text_1, MSGBOX_DEFAULT
# 132 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 133 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


HorseaDialog_Text_0:
# 6 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Horsea$"

HorseaDialog_Text_1:
# 7 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "It's so vibrant and lively in\nthe reef.\pI'm glad the Daycare folks care\nso much for the environment.$"

ShellderDialog_Text_0:
# 16 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Shellder is intensely staring\nupward.\pIt looks ready to snap onto its\ntarget.$"

CorsolaDialog_Text_0:
# 24 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Corsola$"

CorsolaDialog_Text_1:
# 25 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Welcome to the Daycare Reef my\nfriend!\pI can exchange Lucky Eggs for\nSuper Potions!\pWould you like to trade?\n$"

CorsolaDialog_Text_2:
# 33 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "How many would you like to\nexchange?$"

CorsolaDialog_Text_3:
# 34 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "One$"

CorsolaDialog_Text_4:
# 34 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Two$"

CorsolaDialog_Text_5:
# 34 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Three$"

CorsolaDialog_Text_6:
# 56 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "You don't have enough!\n$"

CorsolaDialog_Text_7:
# 86 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "You don't have any Lucky Eggs!\pCome back when you do.$"

CorsolaDialog_Text_8:
# 94 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Oh, okay then.$"

ClauncherDialog_Text_0:
# 104 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "It's impossible to get this\nClauncher's attention...\pIt's humming and snapping its\npinchers to the theme of\l'Under the Sea'$"

TentacoolDialog_Text_0:
# 112 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Tentacool$"

TentacoolDialog_Text_1:
# 113 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "The sea is so beautiful.\nImagine if there was more of it!\pEveryone would get to experience\nits elegance!\pI wonder if there is an\norganization I can join to help\lfurther this mission!$"

BinacleDialog_Text_0:
# 121 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Binacle$"

BinacleDialog_Text_1:
# 122 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Rock on dude!\n$"

SkrelpDialog_Text_0:
# 130 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Skrelp$"

SkrelpDialog_Text_1:
# 131 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Wait you can see me?\pI need to work on my camoflauge...\n$"
