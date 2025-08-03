DaycarePikachuShrinkCave_MapScripts::
	.byte 0


TarountulaDialog::
# 4 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	lockall
# 5 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	faceplayer
# 6 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_CUTIEFLY
	goto_if_eq TarountulaDialog_1
# 12 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_DITTO
	goto_if_eq TarountulaDialog_2
# 20 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername TarountulaDialog_Text_0
# 21 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_3, MSGBOX_AUTOCLOSE
# 22 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
	return

TarountulaDialog_1:
# 8 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername TarountulaDialog_Text_0
# 9 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_1, MSGBOX_AUTOCLOSE
# 10 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
	return

TarountulaDialog_2:
# 14 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	speakername TarountulaDialog_Text_0
# 15 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	msgbox TarountulaDialog_Text_2, MSGBOX_AUTOCLOSE
# 16 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	waitmessage
	return


TarountulaDialog_Text_0:
# 8 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "Tarountula$"

TarountulaDialog_Text_1:
# 9 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "This cave feels so much bigger\nfor us small bug types.\pI'm sure bigger Pokemon suspect\nnothing is in here!$"

TarountulaDialog_Text_2:
# 15 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "This cave feels so much bigger\nfor us small bug types.\pWAIT... HEY!\pI guess a Ditto could use\nTransform...$"

TarountulaDialog_Text_3:
# 21 "data/maps/DaycarePikachuShrinkCave/scripts.pory"
	.string "This cave feels so much bigger\nfor us small bug types.\pWAIT... HEY!\pHow did you fit in the tiny\nentrance?\pOH!\nA Ditto you say...$"
