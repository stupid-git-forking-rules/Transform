DaycareMausholdShrink_MapScripts::
	.byte 0


FamilyofFour::
# 4 "data/maps/DaycareMausholdShrink/scripts.pory"
	lock
# 5 "data/maps/DaycareMausholdShrink/scripts.pory"
	faceplayer
# 6 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_unset FLAG_FAM_FOUR, FamilyofFour_1
# 72 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 73 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_9, MSGBOX_DEFAULT
# 74 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 75 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofFour_1:
# 8 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 9 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_1, MSGBOX_DEFAULT
# 10 "data/maps/DaycareMausholdShrink/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, FamilyofFour_Text_2, FamilyofFour_Text_3, FamilyofFour_Text_4
# 11 "data/maps/DaycareMausholdShrink/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FamilyofFour_5
# 43 "data/maps/DaycareMausholdShrink/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FamilyofFour_8
# 56 "data/maps/DaycareMausholdShrink/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq FamilyofFour_13
	return

FamilyofFour_5:
# 13 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_unset FLAG_FAMTHREE_WRONG, FamilyofFour_11
# 24 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 25 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, Common_Movement_ExclamationMark
# 26 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 27 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, FamilyofFour_Movement_0
# 28 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 29 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_6, MSGBOX_DEFAULT
# 30 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 31 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, FamilyofFour_Movement_1
# 32 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement
# 33 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_7, MSGBOX_DEFAULT
# 34 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 35 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 36 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_FOUR
# 37 "data/maps/DaycareMausholdShrink/scripts.pory"
	giveitem ITEM_POTION, 4
# 38 "data/maps/DaycareMausholdShrink/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 39 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 40 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofFour_8:
# 45 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 46 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, Common_Movement_ExclamationMark
# 47 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 48 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_8, MSGBOX_DEFAULT
# 49 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 50 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_FOUR
# 51 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAMFOUR_WRONG
# 52 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 53 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofFour_11:
# 15 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 16 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, Common_Movement_ExclamationMark
# 17 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 18 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_5, MSGBOX_DEFAULT
# 19 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_FOUR
# 20 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 21 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofFour_13:
# 58 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 59 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, Common_Movement_ExclamationMark
# 60 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 61 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_8, MSGBOX_DEFAULT
# 62 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 63 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_FOUR
# 64 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAMFOUR_WRONG
# 65 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 66 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end


FamilyofThree::
# 81 "data/maps/DaycareMausholdShrink/scripts.pory"
	lock
# 82 "data/maps/DaycareMausholdShrink/scripts.pory"
	faceplayer
# 83 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_unset FLAG_FAM_THREE, FamilyofThree_1
# 149 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 150 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofThree_Text_2, MSGBOX_DEFAULT
# 151 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 152 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofThree_1:
# 85 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 86 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_1, MSGBOX_DEFAULT
# 87 "data/maps/DaycareMausholdShrink/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, FamilyofFour_Text_2, FamilyofFour_Text_3, FamilyofFour_Text_4
# 88 "data/maps/DaycareMausholdShrink/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FamilyofThree_5
# 101 "data/maps/DaycareMausholdShrink/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FamilyofThree_8
# 133 "data/maps/DaycareMausholdShrink/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq FamilyofThree_10
	return

FamilyofThree_5:
# 90 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 91 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, Common_Movement_ExclamationMark
# 92 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 93 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_8, MSGBOX_DEFAULT
# 94 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 95 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_THREE
# 96 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAMTHREE_WRONG
# 97 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 98 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofThree_8:
# 103 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_unset FLAG_FAMFOUR_WRONG, FamilyofThree_13
# 114 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 115 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, Common_Movement_ExclamationMark
# 116 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 117 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, FamilyofThree_Movement_0
# 118 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 119 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofThree_Text_0, MSGBOX_DEFAULT
# 120 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 121 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, FamilyofFour_Movement_1
# 122 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement
# 123 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofThree_Text_1, MSGBOX_DEFAULT
# 124 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 125 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 126 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_THREE
# 127 "data/maps/DaycareMausholdShrink/scripts.pory"
	giveitem ITEM_POTION, 3
# 128 "data/maps/DaycareMausholdShrink/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 129 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 130 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofThree_10:
# 135 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 136 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, Common_Movement_ExclamationMark
# 137 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 138 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_8, MSGBOX_DEFAULT
# 139 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 140 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_THREE
# 141 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAMTHREE_WRONG
# 142 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 143 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofThree_13:
# 105 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 106 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, Common_Movement_ExclamationMark
# 107 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 108 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_5, MSGBOX_DEFAULT
# 109 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_FOUR
# 110 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 111 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end


Familyoftwo::
# 158 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_unset FLAG_FAM_TWO, Familyoftwo_1
# 173 "data/maps/DaycareMausholdShrink/scripts.pory"
	lock
# 174 "data/maps/DaycareMausholdShrink/scripts.pory"
	faceplayer
# 175 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername Familyoftwo_Text_0
# 176 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox Familyoftwo_Text_2, MSGBOX_DEFAULT
# 177 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 178 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

Familyoftwo_1:
# 160 "data/maps/DaycareMausholdShrink/scripts.pory"
	lock
# 161 "data/maps/DaycareMausholdShrink/scripts.pory"
	faceplayer
# 162 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername Familyoftwo_Text_0
# 163 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox Familyoftwo_Text_1, MSGBOX_DEFAULT
# 164 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 165 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_TWO
# 166 "data/maps/DaycareMausholdShrink/scripts.pory"
	giveitem ITEM_LUCKY_EGG, 2
# 167 "data/maps/DaycareMausholdShrink/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 168 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 169 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end


# 27 "data/maps/DaycareMausholdShrink/scripts.pory"
FamilyofFour_Movement_0:
# 27 "data/maps/DaycareMausholdShrink/scripts.pory"
	face_left
	step_end

# 31 "data/maps/DaycareMausholdShrink/scripts.pory"
FamilyofFour_Movement_1:
# 31 "data/maps/DaycareMausholdShrink/scripts.pory"
	face_player
	step_end

# 117 "data/maps/DaycareMausholdShrink/scripts.pory"
FamilyofThree_Movement_0:
# 117 "data/maps/DaycareMausholdShrink/scripts.pory"
	face_right
	step_end

FamilyofFour_Text_0:
# 8 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Maushold$"

FamilyofFour_Text_1:
# 9 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "You!\pWelcome to our Maushold Haushold!\pWe've put in great work making\nthis haus a home.\pWe're in a bit of a dispute with\nthe neighbors over the proper\lhaushold size...\pWhat would you say the proper\nsize would be?$"

FamilyofFour_Text_2:
# 10 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Four$"

FamilyofFour_Text_3:
# 10 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Three$"

FamilyofFour_Text_4:
# 10 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Two$"

FamilyofFour_Text_5:
# 18 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Don't pander to me!\pI we heard the neighbors yell\nover to us!$"

FamilyofFour_Text_6:
# 29 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Aha!\pSee that!\nFour is the right number.$"

FamilyofFour_Text_7:
# 33 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Here. Take these four items.\n$"

FamilyofFour_Text_8:
# 48 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Hey!\pHow dare you insult my family!\n$"

FamilyofFour_Text_9:
# 73 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Things in fours just makes sense!\n$"

FamilyofThree_Text_0:
# 119 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Aha!\pSee that!\nThree is the right number.$"

FamilyofThree_Text_1:
# 123 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Here. Take these three items.\n$"

FamilyofThree_Text_2:
# 150 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Things in threes just makes sense!\n$"

Familyoftwo_Text_0:
# 162 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Tandemaus$"

Familyoftwo_Text_1:
# 163 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "The neighbors at the bottom of\nthe cliff are always feuding...\pWe decided not to have kids\nand we've been perfectly happy\lup here.\pHere. Take these two items.\n$"

Familyoftwo_Text_2:
# 176 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "We've been quite happy up here.\pWe've built a nice life for\nourselves.\pWe even have enough items\nleftover to afford to make\lfrequent trips around the Daycare!$"
