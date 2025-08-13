DaycareMountainCave_MapScripts::
	.byte 0


PiplupDialog::
# 4 "data/maps/DaycareMountainCave/scripts.pory"
	lock
# 5 "data/maps/DaycareMountainCave/scripts.pory"
	faceplayer
# 6 "data/maps/DaycareMountainCave/scripts.pory"
	speakername PiplupDialog_Text_0
# 7 "data/maps/DaycareMountainCave/scripts.pory"
	msgbox PiplupDialog_Text_1, MSGBOX_DEFAULT
# 8 "data/maps/DaycareMountainCave/scripts.pory"
	waitmessage
# 9 "data/maps/DaycareMountainCave/scripts.pory"
	release
	end


SnomDialog::
# 14 "data/maps/DaycareMountainCave/scripts.pory"
	lock
# 15 "data/maps/DaycareMountainCave/scripts.pory"
	faceplayer
# 16 "data/maps/DaycareMountainCave/scripts.pory"
	speakername SnomDialog_Text_0
# 17 "data/maps/DaycareMountainCave/scripts.pory"
	msgbox SnomDialog_Text_1, MSGBOX_DEFAULT
# 18 "data/maps/DaycareMountainCave/scripts.pory"
	waitmessage
# 19 "data/maps/DaycareMountainCave/scripts.pory"
	release
	end


DaycareMountainCave_FindLuckyEgg::
# 24 "data/maps/DaycareMountainCave/scripts.pory"
	lock
# 25 "data/maps/DaycareMountainCave/scripts.pory"
	finditem ITEM_LUCKY_EGG
# 26 "data/maps/DaycareMountainCave/scripts.pory"
	waitmessage
# 27 "data/maps/DaycareMountainCave/scripts.pory"
	release
	end


PiplupDialog_Text_0:
# 6 "data/maps/DaycareMountainCave/scripts.pory"
	.string "Piplup$"

PiplupDialog_Text_1:
# 7 "data/maps/DaycareMountainCave/scripts.pory"
	.string "Brr! Hey there!\pYou must be cold!\pNot many Pokémon make it this far.\nI may not look it, but I hold\limperium down here!$"

SnomDialog_Text_0:
# 16 "data/maps/DaycareMountainCave/scripts.pory"
	.string "Snom$"

SnomDialog_Text_1:
# 17 "data/maps/DaycareMountainCave/scripts.pory"
	.string "I wiggled my way over here...\nBut now I'm lost.\pI hope you can find your way out.\n$"
