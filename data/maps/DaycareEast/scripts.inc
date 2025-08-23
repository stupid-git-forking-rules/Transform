DaycareEast_MapScripts::
	.byte 0


KrabbyDialog::
# 5 "data/maps/DaycareEast/scripts.pory"
	lock
# 6 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 7 "data/maps/DaycareEast/scripts.pory"
	speakername KrabbyDialog_Text_0
# 8 "data/maps/DaycareEast/scripts.pory"
	msgbox KrabbyDialog_Text_1, MSGBOX_DEFAULT
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
# 158 "data/maps/DaycareEast/scripts.pory"
	speakername RuffletDialog_Text_0
# 159 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletDialog_Text_5, MSGBOX_DEFAULT
# 160 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 161 "data/maps/DaycareEast/scripts.pory"
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
	playse SE_PIN
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
	playse SE_PIN
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
# 123 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, RuffletFlyAway
# 124 "data/maps/DaycareEast/scripts.pory"
	waitmovement 0
# 125 "data/maps/DaycareEast/scripts.pory"
	playse SE_LEDGE
# 127 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, RuffletDialog_Movement_0
# 131 "data/maps/DaycareEast/scripts.pory"
	waitmovement 0
# 132 "data/maps/DaycareEast/scripts.pory"
	playse SE_FALL
# 133 "data/maps/DaycareEast/scripts.pory"
	applymovement Rufflet, RuffletDialog_Movement_1
# 135 "data/maps/DaycareEast/scripts.pory"
	waitmovement 0
# 136 "data/maps/DaycareEast/scripts.pory"
	delay 30
# 138 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8004, 2
# 139 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8005, 6
# 140 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8006, 4
# 141 "data/maps/DaycareEast/scripts.pory"
	setvar VAR_0x8007, 4
# 142 "data/maps/DaycareEast/scripts.pory"
	special ShakeCamera
# 143 "data/maps/DaycareEast/scripts.pory"
	waitstate
# 144 "data/maps/DaycareEast/scripts.pory"
	delay 60
# 146 "data/maps/DaycareEast/scripts.pory"
	playse SE_BANG
# 147 "data/maps/DaycareEast/scripts.pory"
	waitfanfare
# 148 "data/maps/DaycareEast/scripts.pory"
	delay 60
# 149 "data/maps/DaycareEast/scripts.pory"
	playmoncry SPECIES_SHARPEDO, CRY_MODE_NORMAL
# 150 "data/maps/DaycareEast/scripts.pory"
	waitmoncry
# 151 "data/maps/DaycareEast/scripts.pory"
	removeobject Rufflet
# 152 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_HIDE_RUFFLET
# 153 "data/maps/DaycareEast/scripts.pory"
	release
	end


# 167 "data/maps/DaycareEast/scripts.pory"
RuffletFlyAway:
# 168 "data/maps/DaycareEast/scripts.pory"
	face_down
# 169 "data/maps/DaycareEast/scripts.pory"
	lock_facing_direction
# 170 "data/maps/DaycareEast/scripts.pory"
	walk_slow_up
# 170 "data/maps/DaycareEast/scripts.pory"
	walk_slow_up
# 171 "data/maps/DaycareEast/scripts.pory"
	delay_16
# 171 "data/maps/DaycareEast/scripts.pory"
	delay_16
# 172 "data/maps/DaycareEast/scripts.pory"
	walk_fast_down
# 172 "data/maps/DaycareEast/scripts.pory"
	walk_fast_down
	step_end

RuffletOnShore::
# 177 "data/maps/DaycareEast/scripts.pory"
	lock
# 178 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 179 "data/maps/DaycareEast/scripts.pory"
	speakername RuffletDialog_Text_0
# 180 "data/maps/DaycareEast/scripts.pory"
	msgbox RuffletOnShore_Text_0, MSGBOX_DEFAULT
# 181 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 182 "data/maps/DaycareEast/scripts.pory"
	release
	end


SlowpokeDialog::
# 187 "data/maps/DaycareEast/scripts.pory"
	lock
# 188 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 189 "data/maps/DaycareEast/scripts.pory"
	speakername SlowpokeDialog_Text_0
# 190 "data/maps/DaycareEast/scripts.pory"
	msgbox SlowpokeDialog_Text_1, MSGBOX_DEFAULT
# 191 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 192 "data/maps/DaycareEast/scripts.pory"
	release
	end


SharpedoDialog::
# 197 "data/maps/DaycareEast/scripts.pory"
	lock
# 198 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 199 "data/maps/DaycareEast/scripts.pory"
	goto_if_set FLAG_HIDE_RUFFLET, SharpedoDialog_1
# 214 "data/maps/DaycareEast/scripts.pory"
	speakername SharpedoDialog_Text_0
# 215 "data/maps/DaycareEast/scripts.pory"
	msgbox SharpedoDialog_Text_3, MSGBOX_DEFAULT
# 216 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 217 "data/maps/DaycareEast/scripts.pory"
	release
	end

SharpedoDialog_1:
# 201 "data/maps/DaycareEast/scripts.pory"
	speakername SharpedoDialog_Text_0
# 202 "data/maps/DaycareEast/scripts.pory"
	msgbox SharpedoDialog_Text_1, MSGBOX_DEFAULT
# 203 "data/maps/DaycareEast/scripts.pory"
	applymovement Sharpedo, ContestHall_Movement_Heart
# 204 "data/maps/DaycareEast/scripts.pory"
	speakername SharpedoDialog_Text_0
# 205 "data/maps/DaycareEast/scripts.pory"
	playse SE_PIN
# 206 "data/maps/DaycareEast/scripts.pory"
	msgbox SharpedoDialog_Text_2, MSGBOX_DEFAULT
# 207 "data/maps/DaycareEast/scripts.pory"
	clearflag FLAG_SHOW_RUFFLET
# 208 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 209 "data/maps/DaycareEast/scripts.pory"
	release
	end


DaycareEastDittoOpenXforms::
# 223 "data/maps/DaycareEast/scripts.pory"
	lock
# 224 "data/maps/DaycareEast/scripts.pory"
	faceplayer
# 225 "data/maps/DaycareEast/scripts.pory"
	goto_if_set FLAG_XFORMS_TALKED_TO_DITTO, DaycareEastDittoOpenXforms_1
# 250 "data/maps/DaycareEast/scripts.pory"
	speakername DaycareEastDittoOpenXforms_Text_0
# 251 "data/maps/DaycareEast/scripts.pory"
	msgbox DaycareEastDittoOpenXforms_Text_3, MSGBOX_DEFAULT
# 251 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 252 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_XFORMS_TALKED_TO_DITTO
# 253 "data/maps/DaycareEast/scripts.pory"
	msgbox DaycareEastDittoOpenXforms_Text_1, MSGBOX_YESNO
# 254 "data/maps/DaycareEast/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareEastDittoOpenXforms_7
# 265 "data/maps/DaycareEast/scripts.pory"
	msgbox DaycareEastDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 266 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 267 "data/maps/DaycareEast/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 268 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 269 "data/maps/DaycareEast/scripts.pory"
	release
	end

DaycareEastDittoOpenXforms_1:
# 227 "data/maps/DaycareEast/scripts.pory"
	speakername DaycareEastDittoOpenXforms_Text_0
# 228 "data/maps/DaycareEast/scripts.pory"
	msgbox DaycareEastDittoOpenXforms_Text_1, MSGBOX_YESNO
# 229 "data/maps/DaycareEast/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareEastDittoOpenXforms_4
# 240 "data/maps/DaycareEast/scripts.pory"
	msgbox DaycareEastDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 241 "data/maps/DaycareEast/scripts.pory"
	waitmessage
# 242 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 243 "data/maps/DaycareEast/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 244 "data/maps/DaycareEast/scripts.pory"
	release
	end

DaycareEastDittoOpenXforms_4:
# 231 "data/maps/DaycareEast/scripts.pory"
	special OpenPCMoveMons
# 232 "data/maps/DaycareEast/scripts.pory"
	waitstate
# 233 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 234 "data/maps/DaycareEast/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 235 "data/maps/DaycareEast/scripts.pory"
	release
	end

DaycareEastDittoOpenXforms_7:
# 256 "data/maps/DaycareEast/scripts.pory"
	special OpenPCMoveMons
# 257 "data/maps/DaycareEast/scripts.pory"
	waitstate
# 258 "data/maps/DaycareEast/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 259 "data/maps/DaycareEast/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 260 "data/maps/DaycareEast/scripts.pory"
	release
	end


# 127 "data/maps/DaycareEast/scripts.pory"
RuffletDialog_Movement_0:
# 128 "data/maps/DaycareEast/scripts.pory"
	jump_2_down
# 129 "data/maps/DaycareEast/scripts.pory"
	delay_16
# 129 "data/maps/DaycareEast/scripts.pory"
	delay_16
	step_end

# 133 "data/maps/DaycareEast/scripts.pory"
RuffletDialog_Movement_1:
# 134 "data/maps/DaycareEast/scripts.pory"
	slide_down
# 134 "data/maps/DaycareEast/scripts.pory"
	slide_down
# 134 "data/maps/DaycareEast/scripts.pory"
	slide_down
# 134 "data/maps/DaycareEast/scripts.pory"
	slide_down
# 134 "data/maps/DaycareEast/scripts.pory"
	slide_down
	step_end

KrabbyDialog_Text_0:
# 7 "data/maps/DaycareEast/scripts.pory"
	.string "Krabby$"

KrabbyDialog_Text_1:
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
	.string "I hang out here all day long,\nbut I'm still not sure how to\lgain EXP.\pI haven't interacted with the\nDaycare Man much though.\pMaybe he controls it?\pIt's all so confusing.\n$"

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
# 159 "data/maps/DaycareEast/scripts.pory"
	.string "I wish I had the confidence to jump\nand try to fly but I don't have\la role model to show me how.$"

RuffletOnShore_Text_0:
# 180 "data/maps/DaycareEast/scripts.pory"
	.string "That Sharpedo was nice enough to\nbring me ashore.\pI don't know why they get such a\nbad rap...$"

SlowpokeDialog_Text_0:
# 189 "data/maps/DaycareEast/scripts.pory"
	.string "Slowpoke$"

SlowpokeDialog_Text_1:
# 190 "data/maps/DaycareEast/scripts.pory"
	.string "I stay close to the shore.\pThere are some scary Pokémon\nfurther out!$"

SharpedoDialog_Text_0:
# 201 "data/maps/DaycareEast/scripts.pory"
	.string "Sharpedo$"

SharpedoDialog_Text_1:
# 202 "data/maps/DaycareEast/scripts.pory"
	.string "That little Rufflet fell into\nthe water.\pPoor fellow couldn't swim so\nI carried it to the shore.$"

SharpedoDialog_Text_2:
# 206 "data/maps/DaycareEast/scripts.pory"
	.string "Looks can be deceiving!\n$"

SharpedoDialog_Text_3:
# 215 "data/maps/DaycareEast/scripts.pory"
	.string "I don't understand why Pokémon are\nso afraid of me...\pIs it something stuck in my teeth?\n$"

DaycareEastDittoOpenXforms_Text_0:
# 227 "data/maps/DaycareEast/scripts.pory"
	.string "Ditto$"

DaycareEastDittoOpenXforms_Text_1:
# 228 "data/maps/DaycareEast/scripts.pory"
	.string "Would you like to change out your\ntransformation options?$"

DaycareEastDittoOpenXforms_Text_2:
# 240 "data/maps/DaycareEast/scripts.pory"
	.string "Come back anytime!$"

DaycareEastDittoOpenXforms_Text_3:
# 251 "data/maps/DaycareEast/scripts.pory"
	.string "Ditto!\pYou can only remember four\ntransformations at a time.\pWe Dittos can act as a way to\nswap out which transformations\lyou have active at anytime!\pYou'll find us scattered around\nthe Daycare.\pNow...\n$"
