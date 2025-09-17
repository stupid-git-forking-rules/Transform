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
	createfieldmugshot MUGSHOT_ROGGENROLA, EMOTE_NORMAL
# 9 "data/maps/EasttoDesert/scripts.pory"
	msgbox RoggenrolaDialog_Text_1, MSGBOX_DEFAULT
# 10 "data/maps/EasttoDesert/scripts.pory"
	waitmessage
# 11 "data/maps/EasttoDesert/scripts.pory"
	removefieldmugshot
# 12 "data/maps/EasttoDesert/scripts.pory"
	release
	end


RolycolyDialog::
# 17 "data/maps/EasttoDesert/scripts.pory"
	lock
# 18 "data/maps/EasttoDesert/scripts.pory"
	faceplayer
# 19 "data/maps/EasttoDesert/scripts.pory"
	speakername RolycolyDialog_Text_0
# 20 "data/maps/EasttoDesert/scripts.pory"
	createfieldmugshot MUGSHOT_ROLYCOLY, EMOTE_HAPPY
# 21 "data/maps/EasttoDesert/scripts.pory"
	msgbox RolycolyDialog_Text_1, MSGBOX_DEFAULT
# 22 "data/maps/EasttoDesert/scripts.pory"
	waitmessage
# 23 "data/maps/EasttoDesert/scripts.pory"
	removefieldmugshot
# 24 "data/maps/EasttoDesert/scripts.pory"
	release
	end


EasttoDesert_FindLuckyEgg::
# 29 "data/maps/EasttoDesert/scripts.pory"
	finditem ITEM_LUCKY_EGG
	return


RoggenrolaDialog_Text_0:
# 7 "data/maps/EasttoDesert/scripts.pory"
	.string "Roggenrola$"

RoggenrolaDialog_Text_1:
# 9 "data/maps/EasttoDesert/scripts.pory"
	.string "If only I was fast enough to\nclimb this slope...$"

RolycolyDialog_Text_0:
# 19 "data/maps/EasttoDesert/scripts.pory"
	.string "Rolycoly$"

RolycolyDialog_Text_1:
# 21 "data/maps/EasttoDesert/scripts.pory"
	.string "Haha!\pYou've got some serious speed\nif you made it up here!$"
