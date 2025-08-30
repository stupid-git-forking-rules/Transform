DaycareMausholdShrink_MapScripts::
	.byte 0


FamilyofFour::
# 4 "data/maps/DaycareMausholdShrink/scripts.pory"
	lock
# 5 "data/maps/DaycareMausholdShrink/scripts.pory"
	faceplayer
# 6 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_unset FLAG_FAM_FOUR, FamilyofFour_1
# 101 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 102 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_9, MSGBOX_DEFAULT
# 103 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 104 "data/maps/DaycareMausholdShrink/scripts.pory"
	removefieldmugshot
# 105 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofFour_1:
# 8 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 9 "data/maps/DaycareMausholdShrink/scripts.pory"
	createfieldmugshot MUGSHOT_MAUSHOLD4, EMOTE_NORMAL
# 10 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_1, MSGBOX_DEFAULT
# 11 "data/maps/DaycareMausholdShrink/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, FamilyofFour_Text_2, FamilyofFour_Text_3, FamilyofFour_Text_4
# 12 "data/maps/DaycareMausholdShrink/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FamilyofFour_5
# 68 "data/maps/DaycareMausholdShrink/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FamilyofFour_8
# 83 "data/maps/DaycareMausholdShrink/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq FamilyofFour_13
	return

FamilyofFour_5:
# 14 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_unset FLAG_FAMTHREE_WRONG, FamilyofFour_11
# 47 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 48 "data/maps/DaycareMausholdShrink/scripts.pory"
	playse SE_PIN
# 49 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, Common_Movement_ExclamationMark
# 50 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 51 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, FamilyofFour_Movement_0
# 52 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 53 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_6, MSGBOX_DEFAULT
# 54 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 55 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, FamilyofFour_Movement_1
# 56 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement
# 57 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_7, MSGBOX_DEFAULT
# 58 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 59 "data/maps/DaycareMausholdShrink/scripts.pory"
	removefieldmugshot
# 60 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 61 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_FOUR
# 62 "data/maps/DaycareMausholdShrink/scripts.pory"
	giveitem ITEM_POTION, 4
# 63 "data/maps/DaycareMausholdShrink/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 64 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 65 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofFour_8:
# 70 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 71 "data/maps/DaycareMausholdShrink/scripts.pory"
	playse SE_PIN
# 72 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, Common_Movement_ExclamationMark
# 73 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 74 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_8, MSGBOX_DEFAULT
# 75 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 76 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_FOUR
# 77 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAMFOUR_WRONG
# 78 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 79 "data/maps/DaycareMausholdShrink/scripts.pory"
	removefieldmugshot
# 80 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofFour_11:
# 16 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_set FLAG_FAM_THREE, FamilyofFour_16
# 28 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 29 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, Common_Movement_ExclamationMark
# 30 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 31 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, FamilyofFour_Movement_0
# 32 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 33 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_6, MSGBOX_DEFAULT
# 34 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 35 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, FamilyofFour_Movement_1
# 36 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement
# 37 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_7, MSGBOX_DEFAULT
# 38 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 39 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 40 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_FOUR
# 41 "data/maps/DaycareMausholdShrink/scripts.pory"
	giveitem ITEM_POTION, 4
# 42 "data/maps/DaycareMausholdShrink/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 43 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 44 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofFour_13:
# 85 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 86 "data/maps/DaycareMausholdShrink/scripts.pory"
	playse SE_PIN
# 87 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, Common_Movement_ExclamationMark
# 88 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 89 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_8, MSGBOX_DEFAULT
# 90 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 91 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_FOUR
# 92 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAMFOUR_WRONG
# 93 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 94 "data/maps/DaycareMausholdShrink/scripts.pory"
	removefieldmugshot
# 95 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofFour_16:
# 18 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 19 "data/maps/DaycareMausholdShrink/scripts.pory"
	playse SE_PIN
# 20 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold4, Common_Movement_ExclamationMark
# 21 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold4
# 22 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_5, MSGBOX_DEFAULT
# 23 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_FOUR
# 24 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 25 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end


FamilyofThree::
# 111 "data/maps/DaycareMausholdShrink/scripts.pory"
	lock
# 112 "data/maps/DaycareMausholdShrink/scripts.pory"
	faceplayer
# 113 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_unset FLAG_FAM_THREE, FamilyofThree_1
# 210 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 211 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofThree_Text_2, MSGBOX_DEFAULT
# 212 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 213 "data/maps/DaycareMausholdShrink/scripts.pory"
	removefieldmugshot
# 214 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofThree_1:
# 115 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 116 "data/maps/DaycareMausholdShrink/scripts.pory"
	createfieldmugshot MUGSHOT_MAUSHOLD3, EMOTE_NORMAL
# 117 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_1, MSGBOX_DEFAULT
# 118 "data/maps/DaycareMausholdShrink/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, FamilyofFour_Text_2, FamilyofFour_Text_3, FamilyofFour_Text_4
# 119 "data/maps/DaycareMausholdShrink/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FamilyofThree_5
# 134 "data/maps/DaycareMausholdShrink/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FamilyofThree_8
# 192 "data/maps/DaycareMausholdShrink/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq FamilyofThree_10
	return

FamilyofThree_5:
# 121 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 122 "data/maps/DaycareMausholdShrink/scripts.pory"
	playse SE_PIN
# 123 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, Common_Movement_ExclamationMark
# 124 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 125 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_8, MSGBOX_DEFAULT
# 126 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 127 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_THREE
# 128 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAMTHREE_WRONG
# 129 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 130 "data/maps/DaycareMausholdShrink/scripts.pory"
	removefieldmugshot
# 131 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofThree_8:
# 136 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_set FLAG_FAM_FOUR, FamilyofThree_13
# 171 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 172 "data/maps/DaycareMausholdShrink/scripts.pory"
	playse SE_PIN
# 173 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, Common_Movement_ExclamationMark
# 174 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 175 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, FamilyofThree_Movement_0
# 176 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 177 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofThree_Text_0, MSGBOX_DEFAULT
# 178 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 179 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, FamilyofFour_Movement_1
# 180 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement
# 181 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofThree_Text_1, MSGBOX_DEFAULT
# 182 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 183 "data/maps/DaycareMausholdShrink/scripts.pory"
	removefieldmugshot
# 184 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 185 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_THREE
# 186 "data/maps/DaycareMausholdShrink/scripts.pory"
	giveitem ITEM_POTION, 3
# 187 "data/maps/DaycareMausholdShrink/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 188 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 189 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofThree_10:
# 194 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 195 "data/maps/DaycareMausholdShrink/scripts.pory"
	playse SE_PIN
# 196 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, Common_Movement_ExclamationMark
# 197 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 198 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_8, MSGBOX_DEFAULT
# 199 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 200 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_THREE
# 201 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAMTHREE_WRONG
# 202 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 203 "data/maps/DaycareMausholdShrink/scripts.pory"
	removefieldmugshot
# 204 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofThree_13:
# 138 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_unset FLAG_FAMFOUR_WRONG, FamilyofThree_16
# 150 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 151 "data/maps/DaycareMausholdShrink/scripts.pory"
	playse SE_PIN
# 152 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, Common_Movement_ExclamationMark
# 153 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 154 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, FamilyofThree_Movement_0
# 155 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 156 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofThree_Text_0, MSGBOX_DEFAULT
# 157 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 158 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, FamilyofFour_Movement_1
# 159 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement
# 160 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofThree_Text_1, MSGBOX_DEFAULT
# 161 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 162 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 163 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_THREE
# 164 "data/maps/DaycareMausholdShrink/scripts.pory"
	giveitem ITEM_POTION, 3
# 165 "data/maps/DaycareMausholdShrink/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 166 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 167 "data/maps/DaycareMausholdShrink/scripts.pory"
	removefieldmugshot
# 168 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

FamilyofThree_16:
# 140 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername FamilyofFour_Text_0
# 141 "data/maps/DaycareMausholdShrink/scripts.pory"
	playse SE_PIN
# 142 "data/maps/DaycareMausholdShrink/scripts.pory"
	applymovement Maushold3, Common_Movement_ExclamationMark
# 143 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmovement Maushold3
# 144 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox FamilyofFour_Text_5, MSGBOX_DEFAULT
# 145 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_THREE
# 146 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 147 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end


Familyoftwo::
# 220 "data/maps/DaycareMausholdShrink/scripts.pory"
	goto_if_unset FLAG_FAM_TWO, Familyoftwo_1
# 237 "data/maps/DaycareMausholdShrink/scripts.pory"
	lock
# 238 "data/maps/DaycareMausholdShrink/scripts.pory"
	faceplayer
# 239 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername Familyoftwo_Text_0
# 240 "data/maps/DaycareMausholdShrink/scripts.pory"
	createfieldmugshot MUGSHOT_TANDEMAUS, EMOTE_NORMAL
# 241 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox Familyoftwo_Text_2, MSGBOX_DEFAULT
# 242 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 243 "data/maps/DaycareMausholdShrink/scripts.pory"
	removefieldmugshot
# 244 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end

Familyoftwo_1:
# 222 "data/maps/DaycareMausholdShrink/scripts.pory"
	lock
# 223 "data/maps/DaycareMausholdShrink/scripts.pory"
	faceplayer
# 224 "data/maps/DaycareMausholdShrink/scripts.pory"
	speakername Familyoftwo_Text_0
# 225 "data/maps/DaycareMausholdShrink/scripts.pory"
	createfieldmugshot MUGSHOT_TANDEMAUS, EMOTE_NORMAL
# 226 "data/maps/DaycareMausholdShrink/scripts.pory"
	msgbox Familyoftwo_Text_1, MSGBOX_DEFAULT
# 227 "data/maps/DaycareMausholdShrink/scripts.pory"
	removefieldmugshot
# 228 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 229 "data/maps/DaycareMausholdShrink/scripts.pory"
	setflag FLAG_FAM_TWO
# 230 "data/maps/DaycareMausholdShrink/scripts.pory"
	giveitem ITEM_LUCKY_EGG, 2
# 231 "data/maps/DaycareMausholdShrink/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 232 "data/maps/DaycareMausholdShrink/scripts.pory"
	waitmessage
# 233 "data/maps/DaycareMausholdShrink/scripts.pory"
	release
	end


# 31 "data/maps/DaycareMausholdShrink/scripts.pory"
FamilyofFour_Movement_0:
# 31 "data/maps/DaycareMausholdShrink/scripts.pory"
	face_left
	step_end

# 35 "data/maps/DaycareMausholdShrink/scripts.pory"
FamilyofFour_Movement_1:
# 35 "data/maps/DaycareMausholdShrink/scripts.pory"
	face_player
	step_end

# 154 "data/maps/DaycareMausholdShrink/scripts.pory"
FamilyofThree_Movement_0:
# 154 "data/maps/DaycareMausholdShrink/scripts.pory"
	face_right
	step_end

FamilyofFour_Text_0:
# 8 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Maushold$"

FamilyofFour_Text_1:
# 10 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "You!\pWelcome to our Maushold Haushold!\pWe've put in great work making\nthis haus a home.\pWe're in a bit of a dispute with\nthe neighbors over the proper\lhaushold size...\pWhat would you say the proper\nsize would be?$"

FamilyofFour_Text_2:
# 11 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Four$"

FamilyofFour_Text_3:
# 11 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Three$"

FamilyofFour_Text_4:
# 11 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Two$"

FamilyofFour_Text_5:
# 22 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Don't pander to me!\pWe heard the neighbors yell\nover to us!$"

FamilyofFour_Text_6:
# 33 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Aha!\pSee that!\nFour is the right number.$"

FamilyofFour_Text_7:
# 37 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Here. Take these four items.\n$"

FamilyofFour_Text_8:
# 74 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Hey!\pHow dare you insult my family!\n$"

FamilyofFour_Text_9:
# 102 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Things in fours just makes sense!\n$"

FamilyofThree_Text_0:
# 156 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Aha!\pSee that!\nThree is the right number.$"

FamilyofThree_Text_1:
# 160 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Here. Take these three items.\n$"

FamilyofThree_Text_2:
# 211 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Things in threes just makes sense!\n$"

Familyoftwo_Text_0:
# 224 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "Tandemaus$"

Familyoftwo_Text_1:
# 226 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "The neighbors at the bottom of\nthe cliff are always feuding...\pWe decided not to have kids\nand we've been perfectly happy\lup here.\pHere. Take these two items.\n$"

Familyoftwo_Text_2:
# 241 "data/maps/DaycareMausholdShrink/scripts.pory"
	.string "We've been quite happy up here.\pWe've built a nice life for\nourselves.\pWe even have enough items\nleftover to afford to make\lfrequent trips around the Daycare!$"
