DaycareEast_MapScripts::
	.byte 0


KrabblyDialog::
# 5 "data/maps/DaycareEast/scripts.pory"
	lock
# 6 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 7 "data/maps/DaycareEast/scripts.pory"
	speakername KrabblyDialog_Text_0
# 8 "data/maps/DaycareEast/scripts.pory"
	msgbox KrabblyDialog_Text_1, MSGBOX_DEFAULT
# 9 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 10 "data/maps/DaycareEast/scripts.pory"
	release
	end


AlolanRaichuDialog::
# 15 "data/maps/DaycareEast/scripts.pory"
	lock
# 16 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 17 "data/maps/DaycareEast/scripts.pory"
	speakername AlolanRaichuDialog_Text_0
# 18 "data/maps/DaycareEast/scripts.pory"
	msgbox AlolanRaichuDialog_Text_1, MSGBOX_DEFAULT
# 19 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 20 "data/maps/DaycareEast/scripts.pory"
	release
	end


SandyghastDialog::
# 25 "data/maps/DaycareEast/scripts.pory"
	lock
# 26 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 27 "data/maps/DaycareEast/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_RHYHORN
	goto_if_eq SandyghastDialog_2
# 35 "data/maps/DaycareEast/scripts.pory"
	speakername SandyghastDialog_Text_0
# 36 "data/maps/DaycareEast/scripts.pory"
	msgbox SandyghastDialog_Text_2, MSGBOX_DEFAULT
# 37 "data/maps/DaycareEast/scripts.pory"
	waitmessage
SandyghastDialog_1:
# 39 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 40 "data/maps/DaycareEast/scripts.pory"
	release
	end

SandyghastDialog_2:
# 29 "data/maps/DaycareEast/scripts.pory"
	speakername SandyghastDialog_Text_0
# 30 "data/maps/DaycareEast/scripts.pory"
	msgbox SandyghastDialog_Text_1, MSGBOX_DEFAULT
# 31 "data/maps/DaycareEast/scripts.pory"
	waitmessage
	goto SandyghastDialog_1


DaycareEast_FindLuckyEgg::
# 45 "data/maps/DaycareEast/scripts.pory"
	lock
# 46 "data/maps/DaycareEast/scripts.pory"
	finditem ITEM_LUCKY_EGG
# 47 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 48 "data/maps/DaycareEast/scripts.pory"
	release
	end


ShellosEastDialog::
# 53 "data/maps/DaycareEast/scripts.pory"
	lock
# 54 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 55 "data/maps/DaycareEast/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_MARILL
	goto_if_eq ShellosEastDialog_2
# 61 "data/maps/DaycareEast/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CHINCHOU
	goto_if_eq ShellosEastDialog_3
# 69 "data/maps/DaycareEast/scripts.pory"
	speakername ShellosEastDialog_Text_0
# 70 "data/maps/DaycareEast/scripts.pory"
	msgbox ShellosEastDialog_Text_3, MSGBOX_DEFAULT
ShellosEastDialog_1:
# 72 "data/maps/DaycareEast/scripts.pory"
	release
	end

ShellosEastDialog_2:
# 57 "data/maps/DaycareEast/scripts.pory"
	speakername ShellosEastDialog_Text_0
# 58 "data/maps/DaycareEast/scripts.pory"
	msgbox ShellosEastDialog_Text_1, MSGBOX_DEFAULT
# 59 "data/maps/DaycareEast/scripts.pory"
	waitmessage
	goto ShellosEastDialog_1

ShellosEastDialog_3:
# 63 "data/maps/DaycareEast/scripts.pory"
	speakername ShellosEastDialog_Text_0
# 64 "data/maps/DaycareEast/scripts.pory"
	msgbox ShellosEastDialog_Text_2, MSGBOX_DEFAULT
# 65 "data/maps/DaycareEast/scripts.pory"
	waitmessage
	goto ShellosEastDialog_1


AlolanExeggutorDialog::
# 77 "data/maps/DaycareEast/scripts.pory"
	lock
# 78 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 79 "data/maps/DaycareEast/scripts.pory"
	speakername AlolanExeggutorDialog_Text_0
# 80 "data/maps/DaycareEast/scripts.pory"
	msgbox AlolanExeggutorDialog_Text_1, MSGBOX_DEFAULT
# 81 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 82 "data/maps/DaycareEast/scripts.pory"
	release
	end


WingullDialog::
# 87 "data/maps/DaycareEast/scripts.pory"
	lock
# 88 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 89 "data/maps/DaycareEast/scripts.pory"
	speakername WingullDialog_Text_0
# 90 "data/maps/DaycareEast/scripts.pory"
	msgbox WingullDialog_Text_1, MSGBOX_DEFAULT
# 91 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 92 "data/maps/DaycareEast/scripts.pory"
	release
	end


RuffletDialog::
# 97 "data/maps/DaycareEast/scripts.pory"
	lock
# 98 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 99 "data/maps/DaycareEast/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_NOIVERN
	goto_if_eq RuffletDialog_1
# 149 "data/maps/DaycareEast/scripts.pory"
	speakername RuffletDialog_Text_0
# 150 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_5, MSGBOX_DEFAULT
# 151 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 152 "data/maps/DaycareEast/scripts.pory"
	release
	end

RuffletDialog_1:
# 101 "data/maps/DaycareEast/scripts.pory"
	speakername RuffletDialog_Text_0
# 102 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_1, MSGBOX_DEFAULT
# 103 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 104 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, Common_Movement_ExclamationMark
# 105 "data/maps/DaycareEast/scripts.pory"
	playSE SE_PIN
# 106 "data/maps/DaycareEast/scripts.pory"
	waitfanfare
# 107 "data/maps/DaycareEast/scripts.pory"
	waitmovement
# 108 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_2, MSGBOX_DEFAULT
# 109 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 110 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, Common_Movement_ExclamationMark
# 111 "data/maps/DaycareEast/scripts.pory"
	playSE SE_PIN
# 112 "data/maps/DaycareEast/scripts.pory"
	waitfanfare
# 113 "data/maps/DaycareEast/scripts.pory"
	waitmovement
# 114 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_3, MSGBOX_DEFAULT
# 115 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 116 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 117 "data/maps/DaycareEast/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 118 "data/maps/DaycareEast/scripts.pory"
	waitfanfare
# 119 "data/maps/DaycareEast/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 120 "data/maps/DaycareEast/scripts.pory"
	speakername RuffletDialog_Text_0
# 121 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_4, MSGBOX_AUTOCLOSE
# 122 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 124 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, RuffletFlyAway
# 125 "data/maps/DaycareEast/scripts.pory"
	waitmovement 0
# 126 "data/maps/DaycareEast/scripts.pory"
	removeobject Rufflet
# 128 "data/maps/DaycareEast/scripts.pory"
	playse SE_FALL
# 129 "data/maps/DaycareEast/scripts.pory"
	waitfanfare
# 130 "data/maps/DaycareEast/scripts.pory"
	delay 30
# 132 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8004, 2
# 133 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8005, 6
# 134 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8006, 4
# 135 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8007, 4
# 136 "data/maps/DaycareEast/scripts.pory"
	special ShakeCamera
# 137 "data/maps/DaycareEast/scripts.pory"
	waitstate
# 138 "data/maps/DaycareEast/scripts.pory"
	delay 60
# 140 "data/maps/DaycareEast/scripts.pory"
	playse SE_BANG
# 141 "data/maps/DaycareEast/scripts.pory"
	waitfanfare
# 143 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_HIDE_RUFFLET
# 144 "data/maps/DaycareEast/scripts.pory"
	release
	end


# 158 "data/maps/DaycareEast/scripts.pory"
RuffletFlyAway:
# 159 "data/maps/DaycareEast/scripts.pory"
	face_down
# 160 "data/maps/DaycareEast/scripts.pory"
	walk_down
# 160 "data/maps/DaycareEast/scripts.pory"
	walk_down
# 161 "data/maps/DaycareEast/scripts.pory"
	levitate
# 162 "data/maps/DaycareEast/scripts.pory"
	slide_down
	step_end

KrabblyDialog_Text_0:
# 7 "data/maps/DaycareEast/scripts.pory"
	.string "Krabbly$"

KrabblyDialog_Text_1:
# 8 "data/maps/DaycareEast/scripts.pory"
	.string "I love it here at the Daycare!\pI don't have to battle anyone that\nI don't want to!\pAlthough some Pokémon see it\ndifferently...$"

AlolanRaichuDialog_Text_0:
# 17 "data/maps/DaycareEast/scripts.pory"
	.string "Raichu$"

AlolanRaichuDialog_Text_1:
# 18 "data/maps/DaycareEast/scripts.pory"
	.string "Move out of my way!\nYou're blocking my waves dude.$"

SandyghastDialog_Text_0:
# 29 "data/maps/DaycareEast/scripts.pory"
	.string "Sandyghast$"

SandyghastDialog_Text_1:
# 30 "data/maps/DaycareEast/scripts.pory"
	.string "A fellow Ground_type!\pLet me give you some info...\nGround_type to Ground_type.\pI've heard a Pokémon will give an\nEgg for defeating it in a special\lbattle.\pBut...\pThat's just a rumor as no one has\nseen that Pokémon in ages.$"

SandyghastDialog_Text_2:
# 36 "data/maps/DaycareEast/scripts.pory"
	.string "...\n$"

ShellosEastDialog_Text_0:
# 57 "data/maps/DaycareEast/scripts.pory"
	.string "Shellos$"

ShellosEastDialog_Text_1:
# 58 "data/maps/DaycareEast/scripts.pory"
	.string "Wow a Marill!\pGastrodon told me about a cave\nwith a powerful flying Pokémon at\lthe top of the waterfall.\pMaybe you can reach it!\n$"

ShellosEastDialog_Text_2:
# 64 "data/maps/DaycareEast/scripts.pory"
	.string "Wow a Chinchou!\pGastrodon told me about a reef\nunder the sea.\pMaybe you can reach it!\n$"

ShellosEastDialog_Text_3:
# 70 "data/maps/DaycareEast/scripts.pory"
	.string "You seem nice and all...\nbut Gastrodon told me to only\ltalk to Water_types.$"

AlolanExeggutorDialog_Text_0:
# 79 "data/maps/DaycareEast/scripts.pory"
	.string "Exeggutor$"

AlolanExeggutorDialog_Text_1:
# 80 "data/maps/DaycareEast/scripts.pory"
	.string "I hang out here all day long,\nbut I'm still not sure how to\lgain experience.\pI haven't interacted with the\nDaycare Man much though.\pMaybe he controls it?\pIt's all so confusing.\n$"

WingullDialog_Text_0:
# 89 "data/maps/DaycareEast/scripts.pory"
	.string "Wingull$"

WingullDialog_Text_1:
# 90 "data/maps/DaycareEast/scripts.pory"
	.string "I wish more Pokémon could make\nway up here.\pSuch a beautiful view.\n$"

RuffletDialog_Text_0:
# 101 "data/maps/DaycareEast/scripts.pory"
	.string "Rufflet$"

RuffletDialog_Text_1:
# 102 "data/maps/DaycareEast/scripts.pory"
	.string "I wish I had the confidence to jump\nand try to fly...$"

RuffletDialog_Text_2:
# 108 "data/maps/DaycareEast/scripts.pory"
	.string "Wow a Flying_type Pokémon!\pWhere do you get the confidence to\nsoar like that?$"

RuffletDialog_Text_3:
# 114 "data/maps/DaycareEast/scripts.pory"
	.string "It just takes a leap of faith\nyou say?\pAlright, I'll try it!\pHere. Take this.$"

RuffletDialog_Text_4:
# 121 "data/maps/DaycareEast/scripts.pory"
	.string "Thanks for the confidence boost.$"

RuffletDialog_Text_5:
# 150 "data/maps/DaycareEast/scripts.pory"
	.string "I wish I had the confidence to jump\nand try to fly but I don't have\la role model to show me how.$"
