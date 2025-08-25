DaycareMausholdShrink_MapScripts::
	.byte 0


FamilyofFour::
# 4 "data/maps/DaycareMausholdShrink/scripts.pory"
	lock
# 5 "data/maps/DaycareMausholdShrink/scripts.pory"
	faceplayer
# 6 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_unset FLAG_FAM_FOUR, FamilyofFour_1
# 93 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 94 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_9, MSGBOX_DEFAULT
# 95 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 96 "data/maps/DaycareMausholdShrink/scripts.pory"
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
# 64 "data/maps/DaycareMausholdShrink/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FamilyofFour_8
# 77 "data/maps/DaycareMausholdShrink/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq FamilyofFour_13
	return

FamilyofFour_5:
# 13 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_unset FLAG_FAMTHREE_WRONG, FamilyofFour_11
# 45 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 46 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, Common_Movement_ExclamationMark
# 47 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 48 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, FamilyofFour_Movement_0
# 49 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 50 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_6, MSGBOX_DEFAULT
# 51 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 52 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, FamilyofFour_Movement_1
# 53 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement
# 54 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_7, MSGBOX_DEFAULT
# 55 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 56 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 57 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_FOUR
# 58 "data/maps/DaycareMausholdShrink/scripts.pory"
	giveitem ITEM_POTION, 4
# 59 "data/maps/DaycareMausholdShrink/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 60 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 61 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofFour_8:
# 66 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 67 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, Common_Movement_ExclamationMark
# 68 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 69 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_8, MSGBOX_DEFAULT
# 70 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 71 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_FOUR
# 72 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAMFOUR_WRONG
# 73 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 74 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofFour_11:
# 15 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_set FLAG_FAM_THREE, FamilyofFour_16
# 26 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 27 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, Common_Movement_ExclamationMark
# 28 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 29 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, FamilyofFour_Movement_0
# 30 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 31 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_6, MSGBOX_DEFAULT
# 32 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 33 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, FamilyofFour_Movement_1
# 34 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement
# 35 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_7, MSGBOX_DEFAULT
# 36 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 37 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 38 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_FOUR
# 39 "data/maps/DaycareMausholdShrink/scripts.pory"
	giveitem ITEM_POTION, 4
# 40 "data/maps/DaycareMausholdShrink/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 41 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 42 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofFour_13:
# 79 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 80 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, Common_Movement_ExclamationMark
# 81 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 82 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_8, MSGBOX_DEFAULT
# 83 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 84 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_FOUR
# 85 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAMFOUR_WRONG
# 86 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 87 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofFour_16:
# 17 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 18 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, Common_Movement_ExclamationMark
# 19 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 20 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_5, MSGBOX_DEFAULT
# 21 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_FOUR
# 22 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 23 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end


FamilyofThree::
# 102 "data/maps/DaycareMausholdShrink/scripts.pory"
	lock
# 103 "data/maps/DaycareMausholdShrink/scripts.pory"
	faceplayer
# 104 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_unset FLAG_FAM_THREE, FamilyofThree_1
# 191 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 192 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofThree_Text_2, MSGBOX_DEFAULT
# 193 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 194 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofThree_1:
# 106 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 107 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_1, MSGBOX_DEFAULT
# 108 "data/maps/DaycareMausholdShrink/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, FamilyofFour_Text_2, FamilyofFour_Text_3, FamilyofFour_Text_4
# 109 "data/maps/DaycareMausholdShrink/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FamilyofThree_5
# 122 "data/maps/DaycareMausholdShrink/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FamilyofThree_8
# 175 "data/maps/DaycareMausholdShrink/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq FamilyofThree_10
	return

FamilyofThree_5:
# 111 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 112 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, Common_Movement_ExclamationMark
# 113 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 114 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_8, MSGBOX_DEFAULT
# 115 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 116 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_THREE
# 117 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAMTHREE_WRONG
# 118 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 119 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofThree_8:
# 124 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_set FLAG_FAM_FOUR, FamilyofThree_13
# 156 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 157 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, Common_Movement_ExclamationMark
# 158 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 159 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, FamilyofThree_Movement_0
# 160 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 161 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofThree_Text_0, MSGBOX_DEFAULT
# 162 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 163 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, FamilyofFour_Movement_1
# 164 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement
# 165 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofThree_Text_1, MSGBOX_DEFAULT
# 166 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 167 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 168 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_THREE
# 169 "data/maps/DaycareMausholdShrink/scripts.pory"
	giveitem ITEM_POTION, 3
# 170 "data/maps/DaycareMausholdShrink/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 171 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 172 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofThree_10:
# 177 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 178 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, Common_Movement_ExclamationMark
# 179 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 180 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_8, MSGBOX_DEFAULT
# 181 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 182 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_THREE
# 183 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAMTHREE_WRONG
# 184 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 185 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofThree_13:
# 126 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_unset FLAG_FAMFOUR_WRONG, FamilyofThree_16
# 137 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 138 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, Common_Movement_ExclamationMark
# 139 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 140 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, FamilyofThree_Movement_0
# 141 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 142 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofThree_Text_0, MSGBOX_DEFAULT
# 143 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 144 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, FamilyofFour_Movement_1
# 145 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement
# 146 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofThree_Text_1, MSGBOX_DEFAULT
# 147 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 148 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 149 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_THREE
# 150 "data/maps/DaycareMausholdShrink/scripts.pory"
	giveitem ITEM_POTION, 3
# 151 "data/maps/DaycareMausholdShrink/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 152 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 153 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofThree_16:
# 128 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 129 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, Common_Movement_ExclamationMark
# 130 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 131 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_5, MSGBOX_DEFAULT
# 132 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_THREE
# 133 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 134 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end


Familyoftwo::
# 200 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_unset FLAG_FAM_TWO, Familyoftwo_1
# 215 "data/maps/DaycareMausholdShrink/scripts.pory"
	lock
# 216 "data/maps/DaycareMausholdShrink/scripts.pory"
	faceplayer
# 217 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername Familyoftwo_Text_0
# 218 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox Familyoftwo_Text_2, MSGBOX_DEFAULT
# 219 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 220 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

Familyoftwo_1:
# 202 "data/maps/DaycareMausholdShrink/scripts.pory"
	lock
# 203 "data/maps/DaycareMausholdShrink/scripts.pory"
	faceplayer
# 204 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername Familyoftwo_Text_0
# 205 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox Familyoftwo_Text_1, MSGBOX_DEFAULT
# 206 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 207 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_TWO
# 208 "data/maps/DaycareMausholdShrink/scripts.pory"
	giveitem ITEM_LUCKY_EGG, 2
# 209 "data/maps/DaycareMausholdShrink/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 210 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 211 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end


# 29 "data/maps/DaycareMausholdShrink/scripts.pory"
FamilyofFour_Movement_0:
# 29 "data/maps/DaycareMausholdShrink/scripts.pory"
	face_left
	step_end

# 33 "data/maps/DaycareMausholdShrink/scripts.pory"
FamilyofFour_Movement_1:
# 33 "data/maps/DaycareMausholdShrink/scripts.pory"
	face_player
	step_end

# 140 "data/maps/DaycareMausholdShrink/scripts.pory"
FamilyofThree_Movement_0:
# 140 "data/maps/DaycareMausholdShrink/scripts.pory"
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
# 20 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Don't pander to me!\pI we heard the neighbors yell\nover to us!$"

FamilyofFour_Text_6:
# 31 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Aha!\pSee that!\nFour is the right number.$"

FamilyofFour_Text_7:
# 35 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Here. Take these four items.\n$"

FamilyofFour_Text_8:
# 69 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Hey!\pHow dare you insult my family!\n$"

FamilyofFour_Text_9:
# 94 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Things in fours just makes sense!\n$"

FamilyofThree_Text_0:
# 142 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Aha!\pSee that!\nThree is the right number.$"

FamilyofThree_Text_1:
# 146 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Here. Take these three items.\n$"

FamilyofThree_Text_2:
# 192 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Things in threes just makes sense!\n$"

Familyoftwo_Text_0:
# 204 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Tandemaus$"

Familyoftwo_Text_1:
# 205 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "The neighbors at the bottom of\nthe cliff are always feuding...\pWe decided not to have kids\nand we've been perfectly happy\lup here.\pHere. Take these two items.\n$"

Familyoftwo_Text_2:
# 218 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "We've been quite happy up here.\pWe've built a nice life for\nourselves.\pWe even have enough items\nleftover to afford to make\lfrequent trips around the Daycare!$"
