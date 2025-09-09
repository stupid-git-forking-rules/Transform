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
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 10 "data/maps/DaycareWest/scripts.pory"
	msgbox ChanseyDaycareWestHeal_Text_1, MSGBOX_DEFAULT
# 11 "data/maps/DaycareWest/scripts.pory"
	removefieldmugshot
# 12 "data/maps/DaycareWest/scripts.pory"
	msgbox ChanseyDaycareWestHeal_Text_2, MSGBOX_YESNO
# 13 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 14 "data/maps/DaycareWest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChanseyDaycareWestHeal_1
# 44 "data/maps/DaycareWest/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 45 "data/maps/DaycareWest/scripts.pory"
	msgbox ChanseyDaycareWestHeal_Text_5, MSGBOX_AUTOCLOSE
# 46 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 47 "data/maps/DaycareWest/scripts.pory"
	removefieldmugshot
# 48 "data/maps/DaycareWest/scripts.pory"
	release
	end

ChanseyDaycareWestHeal_1:
# 16 "data/maps/DaycareWest/scripts.pory"
	checkitem ITEM_LUCKY_EGG
# 17 "data/maps/DaycareWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChanseyDaycareWestHeal_4
# 34 "data/maps/DaycareWest/scripts.pory"
	createfieldmugshot MUGSHOT_CHANSEY, EMOTE_NORMAL
# 35 "data/maps/DaycareWest/scripts.pory"
	msgbox ChanseyDaycareWestHeal_Text_4, MSGBOX_AUTOCLOSE
# 36 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 37 "data/maps/DaycareWest/scripts.pory"
	removefieldmugshot
# 38 "data/maps/DaycareWest/scripts.pory"
	release
	end

ChanseyDaycareWestHeal_4:
# 19 "data/maps/DaycareWest/scripts.pory"
	removeitem ITEM_LUCKY_EGG
# 20 "data/maps/DaycareWest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 21 "data/maps/DaycareWest/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 22 "data/maps/DaycareWest/scripts.pory"
	playfanfare MUS_HEAL
# 23 "data/maps/DaycareWest/scripts.pory"
	waitfanfare
# 24 "data/maps/DaycareWest/scripts.pory"
	special HealPlayerParty
# 25 "data/maps/DaycareWest/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 26 "data/maps/DaycareWest/scripts.pory"
	msgbox ChanseyDaycareWestHeal_Text_3, MSGBOX_AUTOCLOSE
# 27 "data/maps/DaycareWest/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 28 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 29 "data/maps/DaycareWest/scripts.pory"
	release
	end


DaycareWestDittoOpenXforms::
# 55 "data/maps/DaycareWest/scripts.pory"
	lock
# 56 "data/maps/DaycareWest/scripts.pory"
	faceplayer
# 57 "data/maps/DaycareWest/scripts.pory"
	goto_if_set FLAG_DITTO_INTRO, DaycareWestDittoOpenXforms_1
# 119 "data/maps/DaycareWest/scripts.pory"
	speakername DaycareWestDittoOpenXforms_Text_1
# 120 "data/maps/DaycareWest/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 121 "data/maps/DaycareWest/scripts.pory"
	msgbox DaycareWestDittoOpenXforms_Text_4, MSGBOX_DEFAULT
# 121 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 122 "data/maps/DaycareWest/scripts.pory"
	setflag FLAG_DITTO_INTRO
# 123 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 124 "data/maps/DaycareWest/scripts.pory"
	removefieldmugshot
# 125 "data/maps/DaycareWest/scripts.pory"
	release
	end

DaycareWestDittoOpenXforms_1:
# 59 "data/maps/DaycareWest/scripts.pory"
	goto_if_set FLAG_XFORMS_TALKED_TO_DITTO, DaycareWestDittoOpenXforms_4
# 86 "data/maps/DaycareWest/scripts.pory"
	speakername DaycareWestDittoOpenXforms_Text_1
# 87 "data/maps/DaycareWest/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 88 "data/maps/DaycareWest/scripts.pory"
	msgbox DaycareWestDittoOpenXforms_Text_3, MSGBOX_DEFAULT
# 88 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 89 "data/maps/DaycareWest/scripts.pory"
	setflag FLAG_XFORMS_TALKED_TO_DITTO
# 90 "data/maps/DaycareWest/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 91 "data/maps/DaycareWest/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 92 "data/maps/DaycareWest/scripts.pory"
	removefieldmugshot
# 93 "data/maps/DaycareWest/scripts.pory"
	msgbox DaycareWestDittoOpenXforms_Text_0, MSGBOX_YESNO
# 94 "data/maps/DaycareWest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareWestDittoOpenXforms_10
# 104 "data/maps/DaycareWest/scripts.pory"
	speakername DaycareWestDittoOpenXforms_Text_1
# 105 "data/maps/DaycareWest/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 106 "data/maps/DaycareWest/scripts.pory"
	msgbox DaycareWestDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 107 "data/maps/DaycareWest/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 108 "data/maps/DaycareWest/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 109 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 110 "data/maps/DaycareWest/scripts.pory"
	removefieldmugshot
# 111 "data/maps/DaycareWest/scripts.pory"
	release
	end

DaycareWestDittoOpenXforms_4:
# 61 "data/maps/DaycareWest/scripts.pory"
	msgbox DaycareWestDittoOpenXforms_Text_0, MSGBOX_YESNO
# 62 "data/maps/DaycareWest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DaycareWestDittoOpenXforms_7
# 74 "data/maps/DaycareWest/scripts.pory"
	speakername DaycareWestDittoOpenXforms_Text_1
# 75 "data/maps/DaycareWest/scripts.pory"
	createfieldmugshot MUGSHOT_DITTO, EMOTE_NORMAL
# 76 "data/maps/DaycareWest/scripts.pory"
	msgbox DaycareWestDittoOpenXforms_Text_2, MSGBOX_AUTOCLOSE
# 77 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 78 "data/maps/DaycareWest/scripts.pory"
	removefieldmugshot
# 79 "data/maps/DaycareWest/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 80 "data/maps/DaycareWest/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 81 "data/maps/DaycareWest/scripts.pory"
	release
	end

DaycareWestDittoOpenXforms_7:
# 64 "data/maps/DaycareWest/scripts.pory"
	dittotransform SPECIES_DITTO
# 65 "data/maps/DaycareWest/scripts.pory"
	special OpenPCMoveMons
# 66 "data/maps/DaycareWest/scripts.pory"
	waitstate
# 67 "data/maps/DaycareWest/scripts.pory"
	setflag FLAG_SUPPRESS_SPEAKER_NAME
# 68 "data/maps/DaycareWest/scripts.pory"
	clearflag FLAG_SUPPRESS_SPEAKER_NAME
# 69 "data/maps/DaycareWest/scripts.pory"
	release
	end

DaycareWestDittoOpenXforms_10:
# 96 "data/maps/DaycareWest/scripts.pory"
	dittotransform SPECIES_DITTO
# 97 "data/maps/DaycareWest/scripts.pory"
	special OpenPCMoveMons
# 98 "data/maps/DaycareWest/scripts.pory"
	waitstate
# 99 "data/maps/DaycareWest/scripts.pory"
	release
	end


ApplinDialog::
# 133 "data/maps/DaycareWest/scripts.pory"
	lock
# 134 "data/maps/DaycareWest/scripts.pory"
	faceplayer
# 135 "data/maps/DaycareWest/scripts.pory"
	speakername ApplinDialog_Text_0
# 136 "data/maps/DaycareWest/scripts.pory"
	createfieldmugshot MUGSHOT_APPLIN, EMOTE_NORMAL
# 137 "data/maps/DaycareWest/scripts.pory"
	msgbox ApplinDialog_Text_1, MSGBOX_DEFAULT
# 138 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 139 "data/maps/DaycareWest/scripts.pory"
	removefieldmugshot
# 140 "data/maps/DaycareWest/scripts.pory"
	release
	end


SurskitDialog::
# 145 "data/maps/DaycareWest/scripts.pory"
	lock
# 146 "data/maps/DaycareWest/scripts.pory"
	faceplayer
# 147 "data/maps/DaycareWest/scripts.pory"
	speakername SurskitDialog_Text_0
# 148 "data/maps/DaycareWest/scripts.pory"
	createfieldmugshot MUGSHOT_SURSKIT, EMOTE_HAPPY
# 149 "data/maps/DaycareWest/scripts.pory"
	msgbox SurskitDialog_Text_1, MSGBOX_NPC
# 150 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 151 "data/maps/DaycareWest/scripts.pory"
	removefieldmugshot
# 152 "data/maps/DaycareWest/scripts.pory"
	release
	end


MasquerainDialog::
# 157 "data/maps/DaycareWest/scripts.pory"
	lock
# 158 "data/maps/DaycareWest/scripts.pory"
	faceplayer
# 159 "data/maps/DaycareWest/scripts.pory"
	speakername MasquerainDialog_Text_0
# 160 "data/maps/DaycareWest/scripts.pory"
	createfieldmugshot MUGSHOT_MASQUERAIN, EMOTE_NORMAL
# 161 "data/maps/DaycareWest/scripts.pory"
	msgbox MasquerainDialog_Text_1, MSGBOX_NPC
# 162 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 163 "data/maps/DaycareWest/scripts.pory"
	removefieldmugshot
# 164 "data/maps/DaycareWest/scripts.pory"
	release
	end


BattleVsCutiefly::
# 169 "data/maps/DaycareWest/scripts.pory"
	lock
# 170 "data/maps/DaycareWest/scripts.pory"
	faceplayer
# 171 "data/maps/DaycareWest/scripts.pory"
	goto_if_unset FLAG_TRANS_RYHORN, BattleVsCutiefly_2
# 181 "data/maps/DaycareWest/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq BattleVsCutiefly_3
# 191 "data/maps/DaycareWest/scripts.pory"
	goto_if_set FLAG_TRANS_CUTIEFLY, BattleVsCutiefly_4
# 201 "data/maps/DaycareWest/scripts.pory"
	playbgm MUS_PMD_BOSS_INTRO, FALSE
# 202 "data/maps/DaycareWest/scripts.pory"
	playse SE_PIN
# 203 "data/maps/DaycareWest/scripts.pory"
	applymovement Cutiefly, Common_Movement_ExclamationMark
# 204 "data/maps/DaycareWest/scripts.pory"
	waitmovement Cutiefly
# 205 "data/maps/DaycareWest/scripts.pory"
	speakername BattleVsCutiefly_Text_0
# 206 "data/maps/DaycareWest/scripts.pory"
	createfieldmugshot MUGSHOT_CUTIEFLY, EMOTE_NORMAL
# 207 "data/maps/DaycareWest/scripts.pory"
	msgbox BattleVsCutiefly_Text_3, MSGBOX_AUTOCLOSE
# 208 "data/maps/DaycareWest/scripts.pory"
	removefieldmugshot
# 209 "data/maps/DaycareWest/scripts.pory"
	setwildbattle SPECIES_CUTIEFLY, 25
# 210 "data/maps/DaycareWest/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 0
# 211 "data/maps/DaycareWest/scripts.pory"
	dowildbattle
# 212 "data/maps/DaycareWest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 213 "data/maps/DaycareWest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleVsCutiefly_8
	return

BattleVsCutiefly_2:
# 173 "data/maps/DaycareWest/scripts.pory"
	speakername BattleVsCutiefly_Text_0
# 174 "data/maps/DaycareWest/scripts.pory"
	createfieldmugshot MUGSHOT_CUTIEFLY, EMOTE_NORMAL
# 175 "data/maps/DaycareWest/scripts.pory"
	msgbox BattleVsCutiefly_Text_1, MSGBOX_DEFAULT
# 176 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 177 "data/maps/DaycareWest/scripts.pory"
	removefieldmugshot
# 178 "data/maps/DaycareWest/scripts.pory"
	release
	end

BattleVsCutiefly_3:
# 183 "data/maps/DaycareWest/scripts.pory"
	speakername BattleVsCutiefly_Text_0
# 184 "data/maps/DaycareWest/scripts.pory"
	createfieldmugshot MUGSHOT_CUTIEFLY, EMOTE_NORMAL
# 185 "data/maps/DaycareWest/scripts.pory"
	msgbox BattleVsCutiefly_Text_1, MSGBOX_DEFAULT
# 186 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 187 "data/maps/DaycareWest/scripts.pory"
	removefieldmugshot
# 188 "data/maps/DaycareWest/scripts.pory"
	release
	end

BattleVsCutiefly_4:
# 193 "data/maps/DaycareWest/scripts.pory"
	speakername BattleVsCutiefly_Text_0
# 194 "data/maps/DaycareWest/scripts.pory"
	createfieldmugshot MUGSHOT_CUTIEFLY, EMOTE_NORMAL
# 195 "data/maps/DaycareWest/scripts.pory"
	msgbox BattleVsCutiefly_Text_2, MSGBOX_DEFAULT
# 196 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 197 "data/maps/DaycareWest/scripts.pory"
	removefieldmugshot
# 198 "data/maps/DaycareWest/scripts.pory"
	release
	end

BattleVsCutiefly_8:
# 215 "data/maps/DaycareWest/scripts.pory"
	playbgm MUS_PMD_HAPPINESS, FALSE
# 216 "data/maps/DaycareWest/scripts.pory"
	copyvar VAR_TEMP_0, VAR_TRANSFORM_MON
# 217 "data/maps/DaycareWest/scripts.pory"
	setflag FLAG_TRANS_CUTIEFLY
# 218 "data/maps/DaycareWest/scripts.pory"
	delay 15
# 219 "data/maps/DaycareWest/scripts.pory"
	dittotransform SPECIES_CUTIEFLY
# 220 "data/maps/DaycareWest/scripts.pory"
	playse MUS_LEVEL_UP
# 221 "data/maps/DaycareWest/scripts.pory"
	msgbox BattleVsCutiefly_Text_4, MSGBOX_DEFAULT
# 222 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 223 "data/maps/DaycareWest/scripts.pory"
	dittotransform VAR_TEMP_0
# 224 "data/maps/DaycareWest/scripts.pory"
	givemon SPECIES_CUTIEFLY, 25, move1 = MOVE_BUG_BUZZ, move2 = MOVE_DAZZLING_GLEAM, move3 = MOVE_SWEET_SCENT, move4 = MOVE_PSYCHIC
# 225 "data/maps/DaycareWest/scripts.pory"
	speakername BattleVsCutiefly_Text_0
# 226 "data/maps/DaycareWest/scripts.pory"
	createfieldmugshot MUGSHOT_CUTIEFLY, EMOTE_HAPPY
# 227 "data/maps/DaycareWest/scripts.pory"
	msgbox BattleVsCutiefly_Text_2, MSGBOX_DEFAULT
# 228 "data/maps/DaycareWest/scripts.pory"
	waitmessage
# 229 "data/maps/DaycareWest/scripts.pory"
	removefieldmugshot
# 230 "data/maps/DaycareWest/scripts.pory"
	fadenewbgm MUS_PMD_HEARTWARMING
# 231 "data/maps/DaycareWest/scripts.pory"
	release
	end


ChanseyDaycareWestHeal_Text_0:
# 8 "data/maps/DaycareWest/scripts.pory"
	.string "Chansey$"

ChanseyDaycareWestHeal_Text_1:
# 10 "data/maps/DaycareWest/scripts.pory"
	.string "Hello there!\pI can heal you in exchange for\na Lucky Egg.$"

ChanseyDaycareWestHeal_Text_2:
# 12 "data/maps/DaycareWest/scripts.pory"
	.string "Would you like to heal?$"

ChanseyDaycareWestHeal_Text_3:
# 26 "data/maps/DaycareWest/scripts.pory"
	.string "You have been restored to full health!$"

ChanseyDaycareWestHeal_Text_4:
# 35 "data/maps/DaycareWest/scripts.pory"
	.string "You don't have a Lucky Egg!\pCome back when you do.$"

ChanseyDaycareWestHeal_Text_5:
# 45 "data/maps/DaycareWest/scripts.pory"
	.string "Oh, okay then.$"

DaycareWestDittoOpenXforms_Text_0:
# 61 "data/maps/DaycareWest/scripts.pory"
	.string "Would you like to change out your\ntransformation options?$"

DaycareWestDittoOpenXforms_Text_1:
# 74 "data/maps/DaycareWest/scripts.pory"
	.string "Ditto$"

DaycareWestDittoOpenXforms_Text_2:
# 76 "data/maps/DaycareWest/scripts.pory"
	.string "Come back anytime!$"

DaycareWestDittoOpenXforms_Text_3:
# 88 "data/maps/DaycareWest/scripts.pory"
	.string "Ditto!\pYou can only remember four\ntransformations at a time.\pWe Dittos can act as a way to\nswap out which transformations\lyou have active at anytime!\pYou'll find us scattered around\nthe Daycare.\pNow...\n$"

DaycareWestDittoOpenXforms_Text_4:
# 121 "data/maps/DaycareWest/scripts.pory"
	.string "Hello there fellow Ditto!\pDaycare Man asked you to get an Egg\nfor him, did he?\pWell, you're about to learn the\nthe secret of how we Dittos are\lalways found holding Eggs.\pIt'll be quite the adventure!\pDon't forget, you are a Ditto,\nso you can transform into any\lPokémon you defeat in battle!\pThis does only apply to Pokémon\nwho are not already using\lTransform...\pPress the {SELECT_BUTTON} button to\nopen your transformation menu.\pIf you open your Transformation\nParty, you'll see which Pokémon\lyou can transform into!$"

ApplinDialog_Text_0:
# 135 "data/maps/DaycareWest/scripts.pory"
	.string "Applin$"

ApplinDialog_Text_1:
# 137 "data/maps/DaycareWest/scripts.pory"
	.string "The Daycare Woman is so kind.\pShe carried me around until I\nfound my favorite tree.\pNow I can hang out here all day!\n$"

SurskitDialog_Text_0:
# 147 "data/maps/DaycareWest/scripts.pory"
	.string "Surskit$"

SurskitDialog_Text_1:
# 149 "data/maps/DaycareWest/scripts.pory"
	.string "I'm not sure when my trainer is\ncoming back, but I don't mind!\pThe pondskipping here is radical!\n$"

MasquerainDialog_Text_0:
# 159 "data/maps/DaycareWest/scripts.pory"
	.string "Masquerain$"

MasquerainDialog_Text_1:
# 161 "data/maps/DaycareWest/scripts.pory"
	.string "Bro!\pI wish my trainer didn't evolve me\nbefore dropping me off.\pSurskit has been skipping up the\npond and I'm mad jealous.$"

BattleVsCutiefly_Text_0:
# 173 "data/maps/DaycareWest/scripts.pory"
	.string "Cutiefly$"

BattleVsCutiefly_Text_1:
# 175 "data/maps/DaycareWest/scripts.pory"
	.string "Being tiny is great!\p...Unless you visit a biome\nlike the desert.\pThe winds are a bit too harsh\nfor a Pokémon of my size.\pThat just makes me think of how\nI miss my friend Rhyhorn...$"

BattleVsCutiefly_Text_2:
# 195 "data/maps/DaycareWest/scripts.pory"
	.string "I'll stick to my flowers.\pBe on the lookout for places only a\ntiny Pokémon can squeeze through!$"

BattleVsCutiefly_Text_3:
# 207 "data/maps/DaycareWest/scripts.pory"
	.string "Welcome to the flower patch big\nfriend!\pSometimes it pays to be tiny!\pBeat me here on my home turf\nand you too can transform to be\ltiny.$"

BattleVsCutiefly_Text_4:
# 221 "data/maps/DaycareWest/scripts.pory"
	.string "You have gained the ability to\ntransform into Cutiefly!$"
