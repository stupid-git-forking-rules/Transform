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
	createfieldmugshot MUGSHOT_CORSOLA, EMOTE_NORMAL
# 25 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_1, MSGBOX_YESNO
# 26 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 27 "data/maps/DaycareEastUnderwater/scripts.pory"
	removefieldmugshot
# 28 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CorsolaDialog_1
# 103 "data/maps/DaycareEastUnderwater/scripts.pory"
	createfieldmugshot MUGSHOT_CORSOLA, EMOTE_NORMAL
# 104 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_8, MSGBOX_AUTOCLOSE
# 105 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 106 "data/maps/DaycareEastUnderwater/scripts.pory"
	removefieldmugshot
# 107 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_1:
# 30 "data/maps/DaycareEastUnderwater/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 31 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CorsolaDialog_4
# 93 "data/maps/DaycareEastUnderwater/scripts.pory"
	createfieldmugshot MUGSHOT_CORSOLA, EMOTE_NORMAL
# 94 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_7, MSGBOX_AUTOCLOSE
# 95 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 96 "data/maps/DaycareEastUnderwater/scripts.pory"
	removefieldmugshot
# 97 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_4:
# 33 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername CorsolaDialog_Text_0
# 34 "data/maps/DaycareEastUnderwater/scripts.pory"
	createfieldmugshot MUGSHOT_CORSOLA, EMOTE_NORMAL
# 35 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_2, MSGBOX_DEFAULT
# 36 "data/maps/DaycareEastUnderwater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, CorsolaDialog_Text_3, CorsolaDialog_Text_4, CorsolaDialog_Text_5
# 37 "data/maps/DaycareEastUnderwater/scripts.pory"
	removefieldmugshot
# 38 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CorsolaDialog_8
# 46 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CorsolaDialog_11
# 68 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq CorsolaDialog_13
	return

CorsolaDialog_8:
# 40 "data/maps/DaycareEastUnderwater/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 41 "data/maps/DaycareEastUnderwater/scripts.pory"
	giveitem ITEM_SUPER_POTION
# 42 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 43 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_11:
# 48 "data/maps/DaycareEastUnderwater/scripts.pory"
	checkitem ITEM_LUCKY_EGG, 2
# 49 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CorsolaDialog_15
# 58 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername CorsolaDialog_Text_0
# 59 "data/maps/DaycareEastUnderwater/scripts.pory"
	createfieldmugshot MUGSHOT_CORSOLA, EMOTE_NORMAL
# 60 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_6, MSGBOX_DEFAULT
# 61 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 62 "data/maps/DaycareEastUnderwater/scripts.pory"
	removefieldmugshot
# 63 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_13:
# 70 "data/maps/DaycareEastUnderwater/scripts.pory"
	checkitem ITEM_LUCKY_EGG, 3
# 71 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CorsolaDialog_18
# 80 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername CorsolaDialog_Text_0
# 81 "data/maps/DaycareEastUnderwater/scripts.pory"
	createfieldmugshot MUGSHOT_CORSOLA, EMOTE_NORMAL
# 82 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_6, MSGBOX_DEFAULT
# 83 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 84 "data/maps/DaycareEastUnderwater/scripts.pory"
	removefieldmugshot
# 85 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_15:
# 51 "data/maps/DaycareEastUnderwater/scripts.pory"
	removeitem ITEM_LUCKY_EGG, 2
# 52 "data/maps/DaycareEastUnderwater/scripts.pory"
	giveitem ITEM_SUPER_POTION, 2
# 53 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 54 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_18:
# 73 "data/maps/DaycareEastUnderwater/scripts.pory"
	removeitem ITEM_LUCKY_EGG, 3
# 74 "data/maps/DaycareEastUnderwater/scripts.pory"
	giveitem ITEM_SUPER_POTION, 3
# 75 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 76 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


ClauncherDialog::
# 114 "data/maps/DaycareEastUnderwater/scripts.pory"
	lock
# 115 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox ClauncherDialog_Text_0, MSGBOX_DEFAULT
# 116 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 117 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


TentacoolDialog::
# 121 "data/maps/DaycareEastUnderwater/scripts.pory"
	lock
# 122 "data/maps/DaycareEastUnderwater/scripts.pory"
	faceplayer
# 123 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername TentacoolDialog_Text_0
# 124 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox TentacoolDialog_Text_1, MSGBOX_DEFAULT
# 125 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 126 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


BinacleDialog::
# 130 "data/maps/DaycareEastUnderwater/scripts.pory"
	lock
# 131 "data/maps/DaycareEastUnderwater/scripts.pory"
	faceplayer
# 132 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername BinacleDialog_Text_0
# 133 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox BinacleDialog_Text_1, MSGBOX_DEFAULT
# 134 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 135 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


SkrelpDialog::
# 139 "data/maps/DaycareEastUnderwater/scripts.pory"
	lock
# 140 "data/maps/DaycareEastUnderwater/scripts.pory"
	faceplayer
# 141 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername SkrelpDialog_Text_0
# 142 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox SkrelpDialog_Text_1, MSGBOX_DEFAULT
# 143 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 144 "data/maps/DaycareEastUnderwater/scripts.pory"
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
# 25 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Welcome to the Daycare Reef my\nfriend!\pI can exchange Lucky Eggs for\nSuper Potions!\pWould you like to trade?\n$"

CorsolaDialog_Text_2:
# 35 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "How many would you like to\nexchange?$"

CorsolaDialog_Text_3:
# 36 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "One$"

CorsolaDialog_Text_4:
# 36 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Two$"

CorsolaDialog_Text_5:
# 36 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Three$"

CorsolaDialog_Text_6:
# 60 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "You don't have enough!\n$"

CorsolaDialog_Text_7:
# 94 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "You don't have any Lucky Eggs!\pCome back when you do.$"

CorsolaDialog_Text_8:
# 104 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Oh, okay then.$"

ClauncherDialog_Text_0:
# 115 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "It's impossible to get this\nClauncher's attention...\pIt's humming and snapping its\npinchers to the theme of\l'Under the Sea'.$"

TentacoolDialog_Text_0:
# 123 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Tentacool$"

TentacoolDialog_Text_1:
# 124 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "The sea is so beautiful.\nImagine if there was more of it!\pEveryone would get to experience\nits elegance!\pI wonder if there is an\norganization I can join to help\lfurther this mission!$"

BinacleDialog_Text_0:
# 132 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Binacle$"

BinacleDialog_Text_1:
# 133 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Rock on dude!\n$"

SkrelpDialog_Text_0:
# 141 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Skrelp$"

SkrelpDialog_Text_1:
# 142 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Wait you can see me?\pI need to work on my camoflauge...\n$"
