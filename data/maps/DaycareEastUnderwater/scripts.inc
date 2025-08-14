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
	msgbox ShellderDialog_Text_0, MSGBOX_DEFAULT
# 16 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 17 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


CorsolaDialog::
# 22 "data/maps/DaycareEastUnderwater/scripts.pory"
	lock
# 23 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername CorsolaDialog_Text_0
# 24 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_1, MSGBOX_YESNO
# 25 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 26 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CorsolaDialog_1
# 93 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_8, MSGBOX_AUTOCLOSE
# 94 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 95 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_1:
# 28 "data/maps/DaycareEastUnderwater/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 29 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CorsolaDialog_4
# 85 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_7, MSGBOX_AUTOCLOSE
# 86 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 87 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_4:
# 31 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername CorsolaDialog_Text_0
# 32 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_2, MSGBOX_DEFAULT
# 33 "data/maps/DaycareEastUnderwater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, CorsolaDialog_Text_3, CorsolaDialog_Text_4, CorsolaDialog_Text_5
# 34 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CorsolaDialog_8
# 42 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CorsolaDialog_11
# 62 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq CorsolaDialog_13
	return

CorsolaDialog_8:
# 36 "data/maps/DaycareEastUnderwater/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 37 "data/maps/DaycareEastUnderwater/scripts.pory"
	giveitem ITEM_SUPER_POTION
# 38 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 39 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_11:
# 44 "data/maps/DaycareEastUnderwater/scripts.pory"
	checkitem ITEM_LUCKY_EGG, 2
# 45 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CorsolaDialog_15
# 54 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername CorsolaDialog_Text_0
# 55 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_6, MSGBOX_DEFAULT
# 56 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 57 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_13:
# 64 "data/maps/DaycareEastUnderwater/scripts.pory"
	checkitem ITEM_LUCKY_EGG, 3
# 65 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CorsolaDialog_18
# 74 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername CorsolaDialog_Text_0
# 75 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_6, MSGBOX_DEFAULT
# 76 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 77 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_15:
# 47 "data/maps/DaycareEastUnderwater/scripts.pory"
	removeitem ITEM_LUCKY_EGG, 2
# 48 "data/maps/DaycareEastUnderwater/scripts.pory"
	giveitem ITEM_SUPER_POTION, 2
# 49 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 50 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_18:
# 67 "data/maps/DaycareEastUnderwater/scripts.pory"
	removeitem ITEM_LUCKY_EGG, 3
# 68 "data/maps/DaycareEastUnderwater/scripts.pory"
	giveitem ITEM_SUPER_POTION, 3
# 69 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 70 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


ClauncherDialog::
# 102 "data/maps/DaycareEastUnderwater/scripts.pory"
	lock
# 103 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox ClauncherDialog_Text_0, MSGBOX_DEFAULT
# 104 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 105 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


TentacoolDialog::
# 109 "data/maps/DaycareEastUnderwater/scripts.pory"
	lock
# 110 "data/maps/DaycareEastUnderwater/scripts.pory"
	faceplayer
# 111 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername TentacoolDialog_Text_0
# 112 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox TentacoolDialog_Text_1, MSGBOX_DEFAULT
# 113 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 114 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


BinacleDialog::
# 118 "data/maps/DaycareEastUnderwater/scripts.pory"
	lock
# 119 "data/maps/DaycareEastUnderwater/scripts.pory"
	faceplayer
# 120 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername BinacleDialog_Text_0
# 121 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox BinacleDialog_Text_1, MSGBOX_DEFAULT
# 122 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 123 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


SkrelpDialog::
# 127 "data/maps/DaycareEastUnderwater/scripts.pory"
	lock
# 128 "data/maps/DaycareEastUnderwater/scripts.pory"
	faceplayer
# 129 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername SkrelpDialog_Text_0
# 130 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox SkrelpDialog_Text_1, MSGBOX_DEFAULT
# 131 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 132 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


HorseaDialog_Text_0:
# 6 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Horsea$"

HorseaDialog_Text_1:
# 7 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "It's so vibrant and lively in\nthe reef.\pI'm glad the Daycare folks care\nso much for the environment.$"

ShellderDialog_Text_0:
# 15 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Shellder is intensely staring\nupward.\pIt looks ready to snap onto its\ntarget.$"

CorsolaDialog_Text_0:
# 23 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Corsola$"

CorsolaDialog_Text_1:
# 24 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Welcome to the Daycare Reef my\nfriend!\pI can exchange Lucky Eggs for\nSuper Potions!\pWould you like to trade?\n$"

CorsolaDialog_Text_2:
# 32 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "How many would you like to\nexchange?$"

CorsolaDialog_Text_3:
# 33 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "One$"

CorsolaDialog_Text_4:
# 33 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Two$"

CorsolaDialog_Text_5:
# 33 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Three$"

CorsolaDialog_Text_6:
# 55 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "You don't have enough!\n$"

CorsolaDialog_Text_7:
# 85 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "You don't have any Lucky Eggs!\pCome back when you do.$"

CorsolaDialog_Text_8:
# 93 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Oh, okay then.$"

ClauncherDialog_Text_0:
# 103 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "It's impossible to get this\nClauncher's attention...\pIt's humming and snapping its\npinchers to the theme of\l'Under the Sea'.$"

TentacoolDialog_Text_0:
# 111 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Tentacool$"

TentacoolDialog_Text_1:
# 112 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "The sea is so beautiful.\nImagine if there was more of it!\pEveryone would get to experience\nits elegance!\pI wonder if there is an\norganization I can join to help\lfurther this mission!$"

BinacleDialog_Text_0:
# 120 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Binacle$"

BinacleDialog_Text_1:
# 121 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Rock on dude!\n$"

SkrelpDialog_Text_0:
# 129 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Skrelp$"

SkrelpDialog_Text_1:
# 130 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Wait you can see me?\pI need to work on my camoflauge...\n$"
