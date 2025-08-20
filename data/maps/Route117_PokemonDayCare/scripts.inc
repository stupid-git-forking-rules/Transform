Route117_PokemonDayCare_MapScripts::
# 2 "data/maps/Route117_PokemonDayCare/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route117_PokemonDayCare_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route117_PokemonDayCare_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 2 "data/maps/Route117_PokemonDayCare/scripts.pory"
	map_script_2 VAR_TEMP_A, 0, IntroScript
	.2byte 0


IntroScript::
# 8 "data/maps/Route117_PokemonDayCare/scripts.pory"
	lock
# 9 "data/maps/Route117_PokemonDayCare/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_ROUTE117_POKEMON_DAY_CARE
# 10 "data/maps/Route117_PokemonDayCare/scripts.pory"
	special SpawnCameraObject
# 11 "data/maps/Route117_PokemonDayCare/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, IntroScript_Movement_0
# 12 "data/maps/Route117_PokemonDayCare/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 13 "data/maps/Route117_PokemonDayCare/scripts.pory"
	delay 30
# 14 "data/maps/Route117_PokemonDayCare/scripts.pory"
	clearflag FLAG_SHOW_BRENDAN_INTRO
# 15 "data/maps/Route117_PokemonDayCare/scripts.pory"
	special RemoveCameraObject
# 16 "data/maps/Route117_PokemonDayCare/scripts.pory"
	addobject BrendanDaycare
# 17 "data/maps/Route117_PokemonDayCare/scripts.pory"
	delay 30
# 18 "data/maps/Route117_PokemonDayCare/scripts.pory"
	playse SE_DOOR
# 19 "data/maps/Route117_PokemonDayCare/scripts.pory"
	waitse
# 20 "data/maps/Route117_PokemonDayCare/scripts.pory"
	delay 60
# 21 "data/maps/Route117_PokemonDayCare/scripts.pory"
	applymovement BrendanDaycare, IntroScript_Movement_1
# 22 "data/maps/Route117_PokemonDayCare/scripts.pory"
	waitmovement BrendanDaycare
# 23 "data/maps/Route117_PokemonDayCare/scripts.pory"
	delay 30
# 24 "data/maps/Route117_PokemonDayCare/scripts.pory"
	speakername IntroScript_Text_0
# 25 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox IntroScript_Text_1, MSGBOX_DEFAULT
# 26 "data/maps/Route117_PokemonDayCare/scripts.pory"
	waitmessage
# 27 "data/maps/Route117_PokemonDayCare/scripts.pory"
	applymovement BrendanDaycare, IntroScript_Movement_2
# 28 "data/maps/Route117_PokemonDayCare/scripts.pory"
	waitmovement BrendanDaycare
# 29 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox IntroScript_Text_2, MSGBOX_DEFAULT
# 30 "data/maps/Route117_PokemonDayCare/scripts.pory"
	waitmessage
# 31 "data/maps/Route117_PokemonDayCare/scripts.pory"
	applymovement BrendanDaycare, IntroScript_Movement_2
# 32 "data/maps/Route117_PokemonDayCare/scripts.pory"
	waitmovement BrendanDaycare
# 33 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox IntroScript_Text_3, MSGBOX_DEFAULT
# 34 "data/maps/Route117_PokemonDayCare/scripts.pory"
	waitmessage
# 35 "data/maps/Route117_PokemonDayCare/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 24
# 36 "data/maps/Route117_PokemonDayCare/scripts.pory"
	warp MAP_DAYCAREBASE, 20, 40
# 37 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_A, 1
# 38 "data/maps/Route117_PokemonDayCare/scripts.pory"
	release
	end


# 11 "data/maps/Route117_PokemonDayCare/scripts.pory"
IntroScript_Movement_0:
# 11 "data/maps/Route117_PokemonDayCare/scripts.pory"
	walk_up
# 11 "data/maps/Route117_PokemonDayCare/scripts.pory"
	walk_up
# 11 "data/maps/Route117_PokemonDayCare/scripts.pory"
	walk_up
# 11 "data/maps/Route117_PokemonDayCare/scripts.pory"
	walk_up
# 11 "data/maps/Route117_PokemonDayCare/scripts.pory"
	walk_up
# 11 "data/maps/Route117_PokemonDayCare/scripts.pory"
	walk_up
	step_end

# 21 "data/maps/Route117_PokemonDayCare/scripts.pory"
IntroScript_Movement_1:
# 21 "data/maps/Route117_PokemonDayCare/scripts.pory"
	walk_up
# 21 "data/maps/Route117_PokemonDayCare/scripts.pory"
	walk_up
# 21 "data/maps/Route117_PokemonDayCare/scripts.pory"
	walk_up
# 21 "data/maps/Route117_PokemonDayCare/scripts.pory"
	walk_up
	step_end

# 27 "data/maps/Route117_PokemonDayCare/scripts.pory"
IntroScript_Movement_2:
# 27 "data/maps/Route117_PokemonDayCare/scripts.pory"
	walk_in_place_up
# 27 "data/maps/Route117_PokemonDayCare/scripts.pory"
	walk_in_place_up
	step_end

IntroScript_Text_0:
# 24 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Daycare Lady$"

IntroScript_Text_1:
# 25 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "I'm the Daycare Lady.\pWe can raise Pokémon for you.\pWould you like us to raise one?$"

IntroScript_Text_2:
# 29 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Which Pokémon should we raise for\nyou?$"

IntroScript_Text_3:
# 33 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Fine, we'll raise your Ditto and\nVaporeon for a while.\pCome back for them later.\n$"
