EasttoDesert_MapScripts::
	.byte 0


RoggenrolaDialog::
# 5 "data/maps/EasttoDesert/scripts.pory"
	lock
# 6 "data/maps/EasttoDesert/scripts.pory"
	faceplayer
# 7 "data/maps/EasttoDesert/scripts.pory"
	speakername RoggenrolaDialog_Text_0
# 8 "data/maps/EasttoDesert/scripts.pory"
	msgbox RoggenrolaDialog_Text_1, MSGBOX_DEFAULT
# 9 "data/maps/EasttoDesert/scripts.pory"
	waitmessage
# 10 "data/maps/EasttoDesert/scripts.pory"
	release
	end


RolycolyDialog::
# 15 "data/maps/EasttoDesert/scripts.pory"
	lock
# 16 "data/maps/EasttoDesert/scripts.pory"
	faceplayer
# 17 "data/maps/EasttoDesert/scripts.pory"
	speakername RolycolyDialog_Text_0
# 18 "data/maps/EasttoDesert/scripts.pory"
	msgbox RolycolyDialog_Text_1, MSGBOX_DEFAULT
# 19 "data/maps/EasttoDesert/scripts.pory"
	waitmessage
# 20 "data/maps/EasttoDesert/scripts.pory"
	release
	end


EasttoDesert_FindLuckyEgg::
# 25 "data/maps/EasttoDesert/scripts.pory"
	lock
# 26 "data/maps/EasttoDesert/scripts.pory"
	finditem ITEM_LUCKY_EGG
# 27 "data/maps/EasttoDesert/scripts.pory"
	waitmessage
# 28 "data/maps/EasttoDesert/scripts.pory"
	release
	end


RoggenrolaDialog_Text_0:
# 7 "data/maps/EasttoDesert/scripts.pory"
	.string "Roggenrola$"

RoggenrolaDialog_Text_1:
# 8 "data/maps/EasttoDesert/scripts.pory"
	.string "If only I was fast enough to\nclimb this slope...$"

RolycolyDialog_Text_0:
# 17 "data/maps/EasttoDesert/scripts.pory"
	.string "Rolycoly$"

RolycolyDialog_Text_1:
# 18 "data/maps/EasttoDesert/scripts.pory"
	.string "Haha!\pYou've got some serious speed\nif you made it up here!$"
