daycarebase_MapScripts::
	.byte 0


ShrinkToPikachuCave::
# 4 "data/maps/daycarebase/scripts.pory"
	lockall
# 5 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinkToPikachuCave_1
# 21 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_1, MSGBOX_AUTOCLOSE
# 22 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 23 "data/maps/daycarebase/scripts.pory"
	releaseall
	end

ShrinkToPikachuCave_1:
# 7 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_0, MSGBOX_YESNO
# 8 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinkToPikachuCave_4
# 14 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 15 "data/maps/daycarebase/scripts.pory"
	releaseall
	end

ShrinkToPikachuCave_4:
# 10 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_PIKACHU_SHRINK_CAVE, 0
	return


ShrinktoMausholdCave::
# 29 "data/maps/daycarebase/scripts.pory"
	lockall
# 30 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq ShrinktoMausholdCave_1
# 46 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_1, MSGBOX_AUTOCLOSE
# 47 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 48 "data/maps/daycarebase/scripts.pory"
	releaseall
	end

ShrinktoMausholdCave_1:
# 32 "data/maps/daycarebase/scripts.pory"
	msgbox ShrinkToPikachuCave_Text_0, MSGBOX_YESNO
# 33 "data/maps/daycarebase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShrinktoMausholdCave_4
# 39 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 40 "data/maps/daycarebase/scripts.pory"
	releaseall
	end

ShrinktoMausholdCave_4:
# 35 "data/maps/daycarebase/scripts.pory"
	warp MAP_DAYCARE_MAUSHOLD_SHRINK, 0
	return


MimikyuDialog::
# 54 "data/maps/daycarebase/scripts.pory"
	lockall
# 55 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 56 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq MimikyuDialog_1
# 70 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 71 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_AUTOCLOSE
# 72 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 73 "data/maps/daycarebase/scripts.pory"
	releaseall
	end

MimikyuDialog_1:
# 58 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_0
# 59 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_1, MSGBOX_AUTOCLOSE
# 60 "data/maps/daycarebase/scripts.pory"
	lockall
# 61 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 62 "data/maps/daycarebase/scripts.pory"
	speakername MimikyuDialog_Text_2
# 63 "data/maps/daycarebase/scripts.pory"
	msgbox MimikyuDialog_Text_3, MSGBOX_AUTOCLOSE
# 64 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 65 "data/maps/daycarebase/scripts.pory"
	releaseall
	end


KecleonDialog::
# 78 "data/maps/daycarebase/scripts.pory"
	lockall
# 79 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 80 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq KecleonDialog_1
# 90 "data/maps/daycarebase/scripts.pory"
	speakername KecleonDialog_Text_0
# 91 "data/maps/daycarebase/scripts.pory"
	msgbox KecleonDialog_Text_2, MSGBOX_AUTOCLOSE
# 92 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 93 "data/maps/daycarebase/scripts.pory"
	releaseall
	end

KecleonDialog_1:
# 82 "data/maps/daycarebase/scripts.pory"
	speakername KecleonDialog_Text_0
# 83 "data/maps/daycarebase/scripts.pory"
	msgbox KecleonDialog_Text_1, MSGBOX_AUTOCLOSE
# 84 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 85 "data/maps/daycarebase/scripts.pory"
	releaseall
	end


AzumarillDialog::
# 100 "data/maps/daycarebase/scripts.pory"
	lockall
# 101 "data/maps/daycarebase/scripts.pory"
	faceplayer
# 102 "data/maps/daycarebase/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq AzumarillDialog_1
# 112 "data/maps/daycarebase/scripts.pory"
	speakername AzumarillDialog_Text_0
# 113 "data/maps/daycarebase/scripts.pory"
	msgbox AzumarillDialog_Text_2, MSGBOX_AUTOCLOSE
# 114 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 115 "data/maps/daycarebase/scripts.pory"
	releaseall
	end

AzumarillDialog_1:
# 104 "data/maps/daycarebase/scripts.pory"
	speakername AzumarillDialog_Text_0
# 105 "data/maps/daycarebase/scripts.pory"
	msgbox AzumarillDialog_Text_1, MSGBOX_AUTOCLOSE
# 106 "data/maps/daycarebase/scripts.pory"
	waitmessage
# 107 "data/maps/daycarebase/scripts.pory"
	releaseall
	end


ShrinkToPikachuCave_Text_0:
# 7 "data/maps/daycarebase/scripts.pory"
	.string "There is a tiny hole that you can\nsqueeze through.\pWould you like to squeeze through it?$"

ShrinkToPikachuCave_Text_1:
# 21 "data/maps/daycarebase/scripts.pory"
	.string "There is a tiny hole, but you are not\n"
	.string "small enough to fit through it.$"

MimikyuDialog_Text_0:
# 58 "data/maps/daycarebase/scripts.pory"
	.string "Pikachu$"

MimikyuDialog_Text_1:
# 59 "data/maps/daycarebase/scripts.pory"
	.string "Hey!\pI'm just a normal Pikachu in my usual\nspot!$"

MimikyuDialog_Text_2:
# 62 "data/maps/daycarebase/scripts.pory"
	.string "Mimikyu$"

MimikyuDialog_Text_3:
# 63 "data/maps/daycarebase/scripts.pory"
	.string "Oh...\nYou caught me.\pI wish I could disguise myself as\nwell as you can...\pMaybe then people would like me more...$"

KecleonDialog_Text_0:
# 82 "data/maps/daycarebase/scripts.pory"
	.string "Kecleon$"

KecleonDialog_Text_1:
# 83 "data/maps/daycarebase/scripts.pory"
	.string "Where do eggs come from?\pMy trainer left me here a long time\nago and I've yet to find one.\pDo you know?\pI've always heard of Dittos\nholding onto eggs...$"

KecleonDialog_Text_2:
# 91 "data/maps/daycarebase/scripts.pory"
	.string "Where do eggs come from?\pMy trainer left me here a long time\nago and I've yet to find one.$"

AzumarillDialog_Text_0:
# 104 "data/maps/daycarebase/scripts.pory"
	.string "Azumarill$"

AzumarillDialog_Text_1:
# 105 "data/maps/daycarebase/scripts.pory"
	.string "Welcome to the Daycare!\pYou'll fit in well here.$"

AzumarillDialog_Text_2:
# 113 "data/maps/daycarebase/scripts.pory"
	.string "Oh!\nThank goodness you aren't a Ditto...\pMy trainer keeps putting me in here\nwith Dittos hoping we'll breed.\pThey even gave me this Sea Incence\nto set the mood...\pThey're just not my type.$"
