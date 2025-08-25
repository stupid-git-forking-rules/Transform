DaycareMausholdShrink_MapScripts::
	.byte 0


FamilyofFour::
# 4 "data/maps/DaycareMausholdShrink/scripts.pory"
	lock
# 5 "data/maps/DaycareMausholdShrink/scripts.pory"
	faceplayer
# 6 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_unset FLAG_FAM_FOUR, FamilyofFour_1
# 97 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 98 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_9, MSGBOX_DEFAULT
# 99 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 100 "data/maps/DaycareMausholdShrink/scripts.pory"
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
# 66 "data/maps/DaycareMausholdShrink/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FamilyofFour_8
# 80 "data/maps/DaycareMausholdShrink/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq FamilyofFour_13
	return

FamilyofFour_5:
# 13 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_unset FLAG_FAMTHREE_WRONG, FamilyofFour_11
# 46 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 47 "data/maps/DaycareMausholdShrink/scripts.pory"
	playse SE_PIN
# 48 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, Common_Movement_ExclamationMark
# 49 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 50 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, FamilyofFour_Movement_0
# 51 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 52 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_6, MSGBOX_DEFAULT
# 53 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 54 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, FamilyofFour_Movement_1
# 55 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement
# 56 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_7, MSGBOX_DEFAULT
# 57 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 58 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 59 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_FOUR
# 60 "data/maps/DaycareMausholdShrink/scripts.pory"
	giveitem ITEM_POTION, 4
# 61 "data/maps/DaycareMausholdShrink/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 62 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 63 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofFour_8:
# 68 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 69 "data/maps/DaycareMausholdShrink/scripts.pory"
	playse SE_PIN
# 70 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, Common_Movement_ExclamationMark
# 71 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 72 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_8, MSGBOX_DEFAULT
# 73 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 74 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_FOUR
# 75 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAMFOUR_WRONG
# 76 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 77 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofFour_11:
# 15 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_set FLAG_FAM_THREE, FamilyofFour_16
# 27 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 28 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, Common_Movement_ExclamationMark
# 29 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 30 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, FamilyofFour_Movement_0
# 31 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 32 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_6, MSGBOX_DEFAULT
# 33 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 34 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, FamilyofFour_Movement_1
# 35 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement
# 36 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_7, MSGBOX_DEFAULT
# 37 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 38 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 39 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_FOUR
# 40 "data/maps/DaycareMausholdShrink/scripts.pory"
	giveitem ITEM_POTION, 4
# 41 "data/maps/DaycareMausholdShrink/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 42 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 43 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofFour_13:
# 82 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 83 "data/maps/DaycareMausholdShrink/scripts.pory"
	playse SE_PIN
# 84 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, Common_Movement_ExclamationMark
# 85 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 86 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_8, MSGBOX_DEFAULT
# 87 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 88 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_FOUR
# 89 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAMFOUR_WRONG
# 90 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 91 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofFour_16:
# 17 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 18 "data/maps/DaycareMausholdShrink/scripts.pory"
	playse SE_PIN
# 19 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, Common_Movement_ExclamationMark
# 20 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 21 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_5, MSGBOX_DEFAULT
# 22 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_FOUR
# 23 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 24 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end


FamilyofThree::
# 106 "data/maps/DaycareMausholdShrink/scripts.pory"
	lock
# 107 "data/maps/DaycareMausholdShrink/scripts.pory"
	faceplayer
# 108 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_unset FLAG_FAM_THREE, FamilyofThree_1
# 200 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 201 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofThree_Text_2, MSGBOX_DEFAULT
# 202 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 203 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofThree_1:
# 110 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 111 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_1, MSGBOX_DEFAULT
# 112 "data/maps/DaycareMausholdShrink/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, FamilyofFour_Text_2, FamilyofFour_Text_3, FamilyofFour_Text_4
# 113 "data/maps/DaycareMausholdShrink/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FamilyofThree_5
# 127 "data/maps/DaycareMausholdShrink/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FamilyofThree_8
# 183 "data/maps/DaycareMausholdShrink/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq FamilyofThree_10
	return

FamilyofThree_5:
# 115 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 116 "data/maps/DaycareMausholdShrink/scripts.pory"
	playse SE_PIN
# 117 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, Common_Movement_ExclamationMark
# 118 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 119 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_8, MSGBOX_DEFAULT
# 120 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 121 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_THREE
# 122 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAMTHREE_WRONG
# 123 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 124 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofThree_8:
# 129 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_set FLAG_FAM_FOUR, FamilyofThree_13
# 163 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 164 "data/maps/DaycareMausholdShrink/scripts.pory"
	playse SE_PIN
# 165 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, Common_Movement_ExclamationMark
# 166 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 167 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, FamilyofThree_Movement_0
# 168 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 169 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofThree_Text_0, MSGBOX_DEFAULT
# 170 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 171 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, FamilyofFour_Movement_1
# 172 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement
# 173 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofThree_Text_1, MSGBOX_DEFAULT
# 174 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 175 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 176 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_THREE
# 177 "data/maps/DaycareMausholdShrink/scripts.pory"
	giveitem ITEM_POTION, 3
# 178 "data/maps/DaycareMausholdShrink/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 179 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 180 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofThree_10:
# 185 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 186 "data/maps/DaycareMausholdShrink/scripts.pory"
	playse SE_PIN
# 187 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, Common_Movement_ExclamationMark
# 188 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 189 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_8, MSGBOX_DEFAULT
# 190 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 191 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_THREE
# 192 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAMTHREE_WRONG
# 193 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 194 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofThree_13:
# 131 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_unset FLAG_FAMFOUR_WRONG, FamilyofThree_16
# 143 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 144 "data/maps/DaycareMausholdShrink/scripts.pory"
	playse SE_PIN
# 145 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, Common_Movement_ExclamationMark
# 146 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 147 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, FamilyofThree_Movement_0
# 148 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 149 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofThree_Text_0, MSGBOX_DEFAULT
# 150 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 151 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, FamilyofFour_Movement_1
# 152 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement
# 153 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofThree_Text_1, MSGBOX_DEFAULT
# 154 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 155 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 156 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_THREE
# 157 "data/maps/DaycareMausholdShrink/scripts.pory"
	giveitem ITEM_POTION, 3
# 158 "data/maps/DaycareMausholdShrink/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 159 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 160 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofThree_16:
# 133 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 134 "data/maps/DaycareMausholdShrink/scripts.pory"
	playse SE_PIN
# 135 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, Common_Movement_ExclamationMark
# 136 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 137 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_5, MSGBOX_DEFAULT
# 138 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_THREE
# 139 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 140 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end


Familyoftwo::
# 209 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_unset FLAG_FAM_TWO, Familyoftwo_1
# 224 "data/maps/DaycareMausholdShrink/scripts.pory"
	lock
# 225 "data/maps/DaycareMausholdShrink/scripts.pory"
	faceplayer
# 226 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername Familyoftwo_Text_0
# 227 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox Familyoftwo_Text_2, MSGBOX_DEFAULT
# 228 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 229 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

Familyoftwo_1:
# 211 "data/maps/DaycareMausholdShrink/scripts.pory"
	lock
# 212 "data/maps/DaycareMausholdShrink/scripts.pory"
	faceplayer
# 213 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername Familyoftwo_Text_0
# 214 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox Familyoftwo_Text_1, MSGBOX_DEFAULT
# 215 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 216 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_TWO
# 217 "data/maps/DaycareMausholdShrink/scripts.pory"
	giveitem ITEM_LUCKY_EGG, 2
# 218 "data/maps/DaycareMausholdShrink/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 219 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 220 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end


# 30 "data/maps/DaycareMausholdShrink/scripts.pory"
FamilyofFour_Movement_0:
# 30 "data/maps/DaycareMausholdShrink/scripts.pory"
	face_left
	step_end

# 34 "data/maps/DaycareMausholdShrink/scripts.pory"
FamilyofFour_Movement_1:
# 34 "data/maps/DaycareMausholdShrink/scripts.pory"
	face_player
	step_end

# 147 "data/maps/DaycareMausholdShrink/scripts.pory"
FamilyofThree_Movement_0:
# 147 "data/maps/DaycareMausholdShrink/scripts.pory"
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
# 21 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Don't pander to me!\pWe heard the neighbors yell\nover to us!$"

FamilyofFour_Text_6:
# 32 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Aha!\pSee that!\nFour is the right number.$"

FamilyofFour_Text_7:
# 36 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Here. Take these four items.\n$"

FamilyofFour_Text_8:
# 72 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Hey!\pHow dare you insult my family!\n$"

FamilyofFour_Text_9:
# 98 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Things in fours just makes sense!\n$"

FamilyofThree_Text_0:
# 149 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Aha!\pSee that!\nThree is the right number.$"

FamilyofThree_Text_1:
# 153 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Here. Take these three items.\n$"

FamilyofThree_Text_2:
# 201 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Things in threes just makes sense!\n$"

Familyoftwo_Text_0:
# 213 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Tandemaus$"

Familyoftwo_Text_1:
# 214 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "The neighbors at the bottom of\nthe cliff are always feuding...\pWe decided not to have kids\nand we've been perfectly happy\lup here.\pHere. Take these two items.\n$"

Familyoftwo_Text_2:
# 227 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "We've been quite happy up here.\pWe've built a nice life for\nourselves.\pWe even have enough items\nleftover to afford to make\lfrequent trips around the Daycare!$"
