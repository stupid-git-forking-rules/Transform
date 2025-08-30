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
	createfieldmugshot MUGSHOT_HORSEA, EMOTE_NORMAL
# 8 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox HorseaDialog_Text_1, MSGBOX_DEFAULT
# 9 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 10 "data/maps/DaycareEastUnderwater/scripts.pory"
	removefieldmugshot
# 11 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


ShellderDialog::
# 16 "data/maps/DaycareEastUnderwater/scripts.pory"
	lock
# 17 "data/maps/DaycareEastUnderwater/scripts.pory"
	createfieldmugshot MUGSHOT_SHELLDER, EMOTE_NORMAL
# 18 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox ShellderDialog_Text_0, MSGBOX_DEFAULT
# 19 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 20 "data/maps/DaycareEastUnderwater/scripts.pory"
	removefieldmugshot
# 21 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


CorsolaDialog::
# 26 "data/maps/DaycareEastUnderwater/scripts.pory"
	lock
# 27 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername CorsolaDialog_Text_0
# 28 "data/maps/DaycareEastUnderwater/scripts.pory"
	createfieldmugshot MUGSHOT_CORSOLA, EMOTE_NORMAL
# 29 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_1, MSGBOX_DEFAULT
# 30 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 31 "data/maps/DaycareEastUnderwater/scripts.pory"
	removefieldmugshot
# 32 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_2, MSGBOX_YESNO
# 33 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 34 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CorsolaDialog_1
# 109 "data/maps/DaycareEastUnderwater/scripts.pory"
	createfieldmugshot MUGSHOT_CORSOLA, EMOTE_NORMAL
# 110 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_9, MSGBOX_AUTOCLOSE
# 111 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 112 "data/maps/DaycareEastUnderwater/scripts.pory"
	removefieldmugshot
# 113 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_1:
# 36 "data/maps/DaycareEastUnderwater/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 37 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CorsolaDialog_4
# 99 "data/maps/DaycareEastUnderwater/scripts.pory"
	createfieldmugshot MUGSHOT_CORSOLA, EMOTE_NORMAL
# 100 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_8, MSGBOX_AUTOCLOSE
# 101 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 102 "data/maps/DaycareEastUnderwater/scripts.pory"
	removefieldmugshot
# 103 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_4:
# 39 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername CorsolaDialog_Text_0
# 40 "data/maps/DaycareEastUnderwater/scripts.pory"
	createfieldmugshot MUGSHOT_CORSOLA, EMOTE_NORMAL
# 41 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_3, MSGBOX_DEFAULT
# 42 "data/maps/DaycareEastUnderwater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, CorsolaDialog_Text_4, CorsolaDialog_Text_5, CorsolaDialog_Text_6
# 43 "data/maps/DaycareEastUnderwater/scripts.pory"
	removefieldmugshot
# 44 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CorsolaDialog_8
# 52 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CorsolaDialog_11
# 74 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq CorsolaDialog_13
	return

CorsolaDialog_8:
# 46 "data/maps/DaycareEastUnderwater/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 47 "data/maps/DaycareEastUnderwater/scripts.pory"
	giveitem ITEM_SUPER_POTION
# 48 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 49 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_11:
# 54 "data/maps/DaycareEastUnderwater/scripts.pory"
	checkitem ITEM_LUCKY_EGG, 2
# 55 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CorsolaDialog_15
# 64 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername CorsolaDialog_Text_0
# 65 "data/maps/DaycareEastUnderwater/scripts.pory"
	createfieldmugshot MUGSHOT_CORSOLA, EMOTE_NORMAL
# 66 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_7, MSGBOX_DEFAULT
# 67 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 68 "data/maps/DaycareEastUnderwater/scripts.pory"
	removefieldmugshot
# 69 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_13:
# 76 "data/maps/DaycareEastUnderwater/scripts.pory"
	checkitem ITEM_LUCKY_EGG, 3
# 77 "data/maps/DaycareEastUnderwater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CorsolaDialog_18
# 86 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername CorsolaDialog_Text_0
# 87 "data/maps/DaycareEastUnderwater/scripts.pory"
	createfieldmugshot MUGSHOT_CORSOLA, EMOTE_NORMAL
# 88 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox CorsolaDialog_Text_7, MSGBOX_DEFAULT
# 89 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 90 "data/maps/DaycareEastUnderwater/scripts.pory"
	removefieldmugshot
# 91 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_15:
# 57 "data/maps/DaycareEastUnderwater/scripts.pory"
	removeitem ITEM_LUCKY_EGG, 2
# 58 "data/maps/DaycareEastUnderwater/scripts.pory"
	giveitem ITEM_SUPER_POTION, 2
# 59 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 60 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end

CorsolaDialog_18:
# 79 "data/maps/DaycareEastUnderwater/scripts.pory"
	removeitem ITEM_LUCKY_EGG, 3
# 80 "data/maps/DaycareEastUnderwater/scripts.pory"
	giveitem ITEM_SUPER_POTION, 3
# 81 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 82 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


ClauncherDialog::
# 120 "data/maps/DaycareEastUnderwater/scripts.pory"
	lock
# 121 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox ClauncherDialog_Text_0, MSGBOX_DEFAULT
# 122 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 123 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


TentacoolDialog::
# 127 "data/maps/DaycareEastUnderwater/scripts.pory"
	lock
# 128 "data/maps/DaycareEastUnderwater/scripts.pory"
	faceplayer
# 129 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername TentacoolDialog_Text_0
# 130 "data/maps/DaycareEastUnderwater/scripts.pory"
	createfieldmugshot MUGSHOT_TENTACOOL, EMOTE_NORMAL
# 131 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox TentacoolDialog_Text_1, MSGBOX_DEFAULT
# 132 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 133 "data/maps/DaycareEastUnderwater/scripts.pory"
	removefieldmugshot
# 134 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


BinacleDialog::
# 138 "data/maps/DaycareEastUnderwater/scripts.pory"
	lock
# 139 "data/maps/DaycareEastUnderwater/scripts.pory"
	faceplayer
# 140 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername BinacleDialog_Text_0
# 141 "data/maps/DaycareEastUnderwater/scripts.pory"
	createfieldmugshot MUGSHOT_BINACLE, EMOTE_NORMAL
# 142 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox BinacleDialog_Text_1, MSGBOX_DEFAULT
# 143 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 144 "data/maps/DaycareEastUnderwater/scripts.pory"
	removefieldmugshot
# 145 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


SkrelpDialog::
# 149 "data/maps/DaycareEastUnderwater/scripts.pory"
	lock
# 150 "data/maps/DaycareEastUnderwater/scripts.pory"
	faceplayer
# 151 "data/maps/DaycareEastUnderwater/scripts.pory"
	speakername SkrelpDialog_Text_0
# 152 "data/maps/DaycareEastUnderwater/scripts.pory"
	createfieldmugshot MUGSHOT_SKRELP, EMOTE_NORMAL
# 153 "data/maps/DaycareEastUnderwater/scripts.pory"
	msgbox SkrelpDialog_Text_1, MSGBOX_DEFAULT
# 154 "data/maps/DaycareEastUnderwater/scripts.pory"
	waitmessage
# 155 "data/maps/DaycareEastUnderwater/scripts.pory"
	removefieldmugshot
# 156 "data/maps/DaycareEastUnderwater/scripts.pory"
	release
	end


HorseaDialog_Text_0:
# 6 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Horsea$"

HorseaDialog_Text_1:
# 8 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "It's so vibrant and lively in\nthe reef.\pI'm glad the Daycare folks care\nso much for the environment.$"

ShellderDialog_Text_0:
# 18 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Shellder is intensely staring\nupward.\pIt looks ready to snap onto its\ntarget.$"

CorsolaDialog_Text_0:
# 27 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Corsola$"

CorsolaDialog_Text_1:
# 29 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Welcome to the Daycare Reef my\nfriend!\pI can exchange Lucky Eggs for\nSuper Potions!$"

CorsolaDialog_Text_2:
# 32 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Would you like to trade?$"

CorsolaDialog_Text_3:
# 41 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "How many would you like to\nexchange?$"

CorsolaDialog_Text_4:
# 42 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "One$"

CorsolaDialog_Text_5:
# 42 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Two$"

CorsolaDialog_Text_6:
# 42 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Three$"

CorsolaDialog_Text_7:
# 66 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "You don't have enough!\n$"

CorsolaDialog_Text_8:
# 100 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "You don't have any Lucky Eggs!\pCome back when you do.$"

CorsolaDialog_Text_9:
# 110 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Oh, okay then.$"

ClauncherDialog_Text_0:
# 121 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "It's impossible to get this\nClauncher's attention...\pIt's humming and snapping its\npinchers to the theme of\l'Under the Sea'.$"

TentacoolDialog_Text_0:
# 129 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Tentacool$"

TentacoolDialog_Text_1:
# 131 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "The sea is so beautiful.\nImagine if there was more of it!\pEveryone would get to experience\nits elegance!\pI wonder if there is an\norganization I can join to help\lfurther this mission!$"

BinacleDialog_Text_0:
# 140 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Binacle$"

BinacleDialog_Text_1:
# 142 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Rock on dude!\n$"

SkrelpDialog_Text_0:
# 151 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Skrelp$"

SkrelpDialog_Text_1:
# 153 "data/maps/DaycareEastUnderwater/scripts.pory"
	.string "Wait you can see me?\pI need to work on my camoflauge...\n$"
