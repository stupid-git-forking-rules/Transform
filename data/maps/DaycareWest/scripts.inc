DaycareWest_MapScripts::
	.byte 0


ChanseyDaycareWestHeal::
# 6 "data/maps/DaycareWest/scripts.pory"
	lock
# 7 "data/maps/DaycareWest/scripts.pory"
	faceplayer
# 8 "data/maps/DaycareWest/scripts.pory"
	speakername ChanseyDaycareWestHeal_Text_0
# 9 "data/maps/DaycareWest/scripts.pory"
	msgbox ChanseyDaycareWestHeal_Text_1, MSGBOX_YESNO
# 10 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 11 "data/maps/DaycareWest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyDaycareWestHeal_1
# 37 "data/maps/DaycareWest/scripts.pory"
	msgbox ChanseyDaycareWestHeal_Text_4, MSGBOX_AUTOCLOSE
# 38 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 39 "data/maps/DaycareWest/scripts.pory"
	release
	end

ChanseyDaycareWestHeal_1:
# 13 "data/maps/DaycareWest/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 14 "data/maps/DaycareWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyDaycareWestHeal_4
# 29 "data/maps/DaycareWest/scripts.pory"
	msgbox ChanseyDaycareWestHeal_Text_3, MSGBOX_AUTOCLOSE
# 30 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 31 "data/maps/DaycareWest/scripts.pory"
	release
	end

ChanseyDaycareWestHeal_4:
# 16 "data/maps/DaycareWest/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 17 "data/maps/DaycareWest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 18 "data/maps/DaycareWest/scripts.pory"
	playfanfare MUS_HEAL
# 19 "data/maps/DaycareWest/scripts.pory"
	waitfanfare
# 20 "data/maps/DaycareWest/scripts.pory"
	special HealPlayerParty
# 21 "data/maps/DaycareWest/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 22 "data/maps/DaycareWest/scripts.pory"
	msgbox ChanseyDaycareWestHeal_Text_2, MSGBOX_AUTOCLOSE
# 23 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 24 "data/maps/DaycareWest/scripts.pory"
	release
	end


DaycareWestDittoOpenXforms::
# 46 "data/maps/DaycareWest/scripts.pory"
	lock
# 47 "data/maps/DaycareWest/scripts.pory"
	faceplayer
# 48 "data/maps/DaycareWest/scripts.pory"
	goto_if_set FLAG_XFORMS_TALKED_TO_DITTO, DaycareWestDittoOpenXforms_1
# 73 "data/maps/DaycareWest/scripts.pory"
	speakername DaycareWestDittoOpenXforms_Text_0
# 74 "data/maps/DaycareWest/scripts.pory"
	msgbox DaycareWestDittoOpenXforms_Text_3, MSGBOX_DEFAULT
# 74 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 75 "data/maps/DaycareWest/scripts.pory"
	setflag FLAG_XFORMS_TALKED_TO_DITTO
# 76 "data/maps/DaycareWest/scripts.pory"
	msgbox DaycareWestDittoOpenXforms_Text_1, MSGBOX_YESNO
# 77 "data/maps/DaycareWest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareWestDittoOpenXforms_7
# 88 "data/maps/DaycareWest/scripts.pory"
	msgbox DaycareWestDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 89 "data/maps/DaycareWest/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 90 "data/maps/DaycareWest/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 91 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 92 "data/maps/DaycareWest/scripts.pory"
	release
	end

DaycareWestDittoOpenXforms_1:
# 50 "data/maps/DaycareWest/scripts.pory"
	speakername DaycareWestDittoOpenXforms_Text_0
# 51 "data/maps/DaycareWest/scripts.pory"
	msgbox DaycareWestDittoOpenXforms_Text_1, MSGBOX_YESNO
# 52 "data/maps/DaycareWest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareWestDittoOpenXforms_4
# 63 "data/maps/DaycareWest/scripts.pory"
	msgbox DaycareWestDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 64 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 65 "data/maps/DaycareWest/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 66 "data/maps/DaycareWest/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 67 "data/maps/DaycareWest/scripts.pory"
	release
	end

DaycareWestDittoOpenXforms_4:
# 54 "data/maps/DaycareWest/scripts.pory"
	special OpenPCMoveMons
# 55 "data/maps/DaycareWest/scripts.pory"
	waitstate
# 56 "data/maps/DaycareWest/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 57 "data/maps/DaycareWest/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 58 "data/maps/DaycareWest/scripts.pory"
	release
	end

DaycareWestDittoOpenXforms_7:
# 79 "data/maps/DaycareWest/scripts.pory"
	special OpenPCMoveMons
# 80 "data/maps/DaycareWest/scripts.pory"
	waitstate
# 81 "data/maps/DaycareWest/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 82 "data/maps/DaycareWest/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 83 "data/maps/DaycareWest/scripts.pory"
	release
	end


ApplinDialog::
# 101 "data/maps/DaycareWest/scripts.pory"
	lock
# 102 "data/maps/DaycareWest/scripts.pory"
	faceplayer
# 103 "data/maps/DaycareWest/scripts.pory"
	speakername ApplinDialog_Text_0
# 104 "data/maps/DaycareWest/scripts.pory"
	msgbox ApplinDialog_Text_1, MSGBOX_DEFAULT
# 105 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 106 "data/maps/DaycareWest/scripts.pory"
	release
	end


SurskitDialog::
# 111 "data/maps/DaycareWest/scripts.pory"
	lock
# 112 "data/maps/DaycareWest/scripts.pory"
	faceplayer
# 113 "data/maps/DaycareWest/scripts.pory"
	speakername SurskitDialog_Text_0
# 114 "data/maps/DaycareWest/scripts.pory"
	msgbox SurskitDialog_Text_1, MSGBOX_DEFAULT
# 115 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 116 "data/maps/DaycareWest/scripts.pory"
	release
	end


MasquerainDialog::
# 121 "data/maps/DaycareWest/scripts.pory"
	lock
# 122 "data/maps/DaycareWest/scripts.pory"
	faceplayer
# 123 "data/maps/DaycareWest/scripts.pory"
	speakername MasquerainDialog_Text_0
# 124 "data/maps/DaycareWest/scripts.pory"
	msgbox MasquerainDialog_Text_1, MSGBOX_DEFAULT
# 125 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 126 "data/maps/DaycareWest/scripts.pory"
	release
	end


BattleVsCutiefly::
# 131 "data/maps/DaycareWest/scripts.pory"
	lock
# 132 "data/maps/DaycareWest/scripts.pory"
	faceplayer
# 133 "data/maps/DaycareWest/scripts.pory"
	goto_if_unset FLAG_TRANS_RYHORN, BattleVsCutiefly_2
# 141 "data/maps/DaycareWest/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq BattleVsCutiefly_3
# 149 "data/maps/DaycareWest/scripts.pory"
	goto_if_set FLAG_TRANS_CUTIEFLY, BattleVsCutiefly_4
# 157 "data/maps/DaycareWest/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 158 "data/maps/DaycareWest/scripts.pory"
	playse SE_PIN
# 159 "data/maps/DaycareWest/scripts.pory"
	applymovement Cutiefly, Common_Movement_ExclamationMark
# 160 "data/maps/DaycareWest/scripts.pory"
	waitmovement Cutiefly
# 161 "data/maps/DaycareWest/scripts.pory"
	speakername BattleVsCutiefly_Text_0
# 162 "data/maps/DaycareWest/scripts.pory"
	msgbox BattleVsCutiefly_Text_3, MSGBOX_AUTOCLOSE
# 163 "data/maps/DaycareWest/scripts.pory"
	setwildbattle SPECIES_CUTIEFLY, 25
# 164 "data/maps/DaycareWest/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 165 "data/maps/DaycareWest/scripts.pory"
	dowildbattle
# 166 "data/maps/DaycareWest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 167 "data/maps/DaycareWest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsCutiefly_8
	return

BattleVsCutiefly_2:
# 135 "data/maps/DaycareWest/scripts.pory"
	speakername BattleVsCutiefly_Text_0
# 136 "data/maps/DaycareWest/scripts.pory"
	msgbox BattleVsCutiefly_Text_1, MSGBOX_DEFAULT
# 137 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 138 "data/maps/DaycareWest/scripts.pory"
	release
	end

BattleVsCutiefly_3:
# 143 "data/maps/DaycareWest/scripts.pory"
	speakername BattleVsCutiefly_Text_0
# 144 "data/maps/DaycareWest/scripts.pory"
	msgbox BattleVsCutiefly_Text_1, MSGBOX_DEFAULT
# 145 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 146 "data/maps/DaycareWest/scripts.pory"
	release
	end

BattleVsCutiefly_4:
# 151 "data/maps/DaycareWest/scripts.pory"
	speakername BattleVsCutiefly_Text_0
# 152 "data/maps/DaycareWest/scripts.pory"
	msgbox BattleVsCutiefly_Text_2, MSGBOX_DEFAULT
# 153 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 154 "data/maps/DaycareWest/scripts.pory"
	release
	end

BattleVsCutiefly_8:
# 169 "data/maps/DaycareWest/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 170 "data/maps/DaycareWest/scripts.pory"
	setflag FLAG_TRANS_CUTIEFLY
# 171 "data/maps/DaycareWest/scripts.pory"
	delay 30
# 172 "data/maps/DaycareWest/scripts.pory"
	dittotransform SPECIES_CUTIEFLY
# 173 "data/maps/DaycareWest/scripts.pory"
	playse MUS_LEVEL_UP
# 174 "data/maps/DaycareWest/scripts.pory"
	msgbox BattleVsCutiefly_Text_4, MSGBOX_DEFAULT
# 175 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 176 "data/maps/DaycareWest/scripts.pory"
	dittotransform VAR_TEMP_0
# 177 "data/maps/DaycareWest/scripts.pory"
	givemon SPECIES_CUTIEFLY, 25, move1 = MOVE_BUG_BUZZ, move2 = MOVE_DAZZLING_GLEAM, move3 = MOVE_SWEET_SCENT, move4 = MOVE_PSYCHIC
# 178 "data/maps/DaycareWest/scripts.pory"
	speakername BattleVsCutiefly_Text_0
# 179 "data/maps/DaycareWest/scripts.pory"
	msgbox BattleVsCutiefly_Text_2, MSGBOX_DEFAULT
# 180 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 181 "data/maps/DaycareWest/scripts.pory"
	release
	end


ChanseyDaycareWestHeal_Text_0:
# 8 "data/maps/DaycareWest/scripts.pory"
	.string "Chansey$"

ChanseyDaycareWestHeal_Text_1:
# 9 "data/maps/DaycareWest/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.\pWould you like to heal?$"

ChanseyDaycareWestHeal_Text_2:
# 22 "data/maps/DaycareWest/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyDaycareWestHeal_Text_3:
# 29 "data/maps/DaycareWest/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyDaycareWestHeal_Text_4:
# 37 "data/maps/DaycareWest/scripts.pory"
	.string "Oh, okay then.$"

DaycareWestDittoOpenXforms_Text_0:
# 50 "data/maps/DaycareWest/scripts.pory"
	.string "Ditto$"

DaycareWestDittoOpenXforms_Text_1:
# 51 "data/maps/DaycareWest/scripts.pory"
	.string "Would you like to change out your\ntransformation options?$"

DaycareWestDittoOpenXforms_Text_2:
# 63 "data/maps/DaycareWest/scripts.pory"
	.string "Come back anytime!$"

DaycareWestDittoOpenXforms_Text_3:
# 74 "data/maps/DaycareWest/scripts.pory"
	.string "Ditto!\pYou can only remember four\ntransformations at a time.\pWe Dittos can act as a way to\nswap out which transformations\lyou have active at anytime!\pYou'll find us scattered around\nthe Daycare.\pNow...\n$"

ApplinDialog_Text_0:
# 103 "data/maps/DaycareWest/scripts.pory"
	.string "Applin$"

ApplinDialog_Text_1:
# 104 "data/maps/DaycareWest/scripts.pory"
	.string "The Daycare Woman is so kind.\pShe carried me around until I\nfound my favorite tree.\pNow I can hang out here all day!\n$"

SurskitDialog_Text_0:
# 113 "data/maps/DaycareWest/scripts.pory"
	.string "Surskit$"

SurskitDialog_Text_1:
# 114 "data/maps/DaycareWest/scripts.pory"
	.string "I'm not sure when my trainer is\ncoming back, but I don't mind!\pThe pondskipping here is radical!\n$"

MasquerainDialog_Text_0:
# 123 "data/maps/DaycareWest/scripts.pory"
	.string "Masquerain$"

MasquerainDialog_Text_1:
# 124 "data/maps/DaycareWest/scripts.pory"
	.string "Bro!\pI wish my trainer didn't evolve me\nbefore dropping me off.\pSurskit has been skipping up the\npond and I'm mad jealous.$"

BattleVsCutiefly_Text_0:
# 135 "data/maps/DaycareWest/scripts.pory"
	.string "Cutiefly$"

BattleVsCutiefly_Text_1:
# 136 "data/maps/DaycareWest/scripts.pory"
	.string "Being tiny is great!\p...Unless you visit a biome\nlike the desert.\pThe winds are a bit too harsh\nfor a Pokémon of my size.\pThat just makes me think of how\nI miss my friend Rhyhorn...$"

BattleVsCutiefly_Text_2:
# 152 "data/maps/DaycareWest/scripts.pory"
	.string "I'll stick to my flowers.\pBe on the lookout for places only a\ntiny Pokémon can squeeze through!$"

BattleVsCutiefly_Text_3:
# 162 "data/maps/DaycareWest/scripts.pory"
	.string "Welcome to the flower patch big\nfriend!\pSometimes it pays to be tiny!\pBeat me here on my home turf\nand you too can transform to be\ltiny.$"

BattleVsCutiefly_Text_4:
# 174 "data/maps/DaycareWest/scripts.pory"
	.string "You have gained the ability to\ntransform into Cutiefly!$"
