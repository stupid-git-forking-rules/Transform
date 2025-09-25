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
	createfieldmugshot MUGSHOT_PIPLUP, EMOTE_NORMAL
# 8 "data/maps/DaycareMountainCave/scripts.pory"
	msgbox PiplupDialog_Text_1, MSGBOX_DEFAULT
# 9 "data/maps/DaycareMountainCave/scripts.pory"
	waitmessage
# 10 "data/maps/DaycareMountainCave/scripts.pory"
	removefieldmugshot
# 11 "data/maps/DaycareMountainCave/scripts.pory"
	release
	end


SnomDialog::
# 16 "data/maps/DaycareMountainCave/scripts.pory"
	lock
# 17 "data/maps/DaycareMountainCave/scripts.pory"
	faceplayer
# 18 "data/maps/DaycareMountainCave/scripts.pory"
	speakername SnomDialog_Text_0
# 19 "data/maps/DaycareMountainCave/scripts.pory"
	createfieldmugshot MUGSHOT_SNOM, EMOTE_NORMAL
# 20 "data/maps/DaycareMountainCave/scripts.pory"
	msgbox SnomDialog_Text_1, MSGBOX_DEFAULT
# 21 "data/maps/DaycareMountainCave/scripts.pory"
	waitmessage
# 22 "data/maps/DaycareMountainCave/scripts.pory"
	removefieldmugshot
# 23 "data/maps/DaycareMountainCave/scripts.pory"
	release
	end


DaycareMountainCave_FindLuckyEgg::
# 28 "data/maps/DaycareMountainCave/scripts.pory"
	finditem ITEM_LUCKY_EGG
	return


PiplupDialog_Text_0:
# 6 "data/maps/DaycareMountainCave/scripts.pory"
	.string "Piplup$"

PiplupDialog_Text_1:
# 8 "data/maps/DaycareMountainCave/scripts.pory"
	.string "Brr!\nHey there!\pYou must be cold!\pNot many Pokémon make it this far.\nI may not look it, but I hold\limperium down here!$"

SnomDialog_Text_0:
# 18 "data/maps/DaycareMountainCave/scripts.pory"
	.string "Snom$"

SnomDialog_Text_1:
# 20 "data/maps/DaycareMountainCave/scripts.pory"
	.string "I wiggled my way over here...\nBut now I'm lost.\pI hope you can find your way out.\n$"
