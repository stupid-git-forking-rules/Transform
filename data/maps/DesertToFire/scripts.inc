DesertToFire_MapScripts::
	.byte 0


BlockVolcano::
# 6 "data/maps/DesertToFire/scripts.pory"
	goto_if_unset FLAG_TRANS_ARCANINE, BlockVolcano_1
	return

BlockVolcano_1:
# 8 "data/maps/DesertToFire/scripts.pory"
	compare VAR_TRANSFORM_MON, SPECIES_MARILL
	goto_if_ne BlockVolcano_3
	return

BlockVolcano_3:
# 10 "data/maps/DesertToFire/scripts.pory"
	lock
# 11 "data/maps/DesertToFire/scripts.pory"
	delay 15
# 12 "data/maps/DesertToFire/scripts.pory"
	setvar VAR_0x8004, 2
# 13 "data/maps/DesertToFire/scripts.pory"
	setvar VAR_0x8005, 6
# 14 "data/maps/DesertToFire/scripts.pory"
	setvar VAR_0x8006, 4
# 15 "data/maps/DesertToFire/scripts.pory"
	setvar VAR_0x8007, 4
# 16 "data/maps/DesertToFire/scripts.pory"
	special ShakeCamera
# 17 "data/maps/DesertToFire/scripts.pory"
	waitstate
# 18 "data/maps/DesertToFire/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 19 "data/maps/DesertToFire/scripts.pory"
	waitmovement LOCALID_PLAYER
# 20 "data/maps/DesertToFire/scripts.pory"
	applymovement LOCALID_PLAYER, BlockVolcano_Movement_0
# 21 "data/maps/DesertToFire/scripts.pory"
	waitmovement LOCALID_PLAYER
# 22 "data/maps/DesertToFire/scripts.pory"
	applymovement LOCALID_PLAYER, BlockVolcano_Movement_1
# 23 "data/maps/DesertToFire/scripts.pory"
	waitmovement LOCALID_PLAYER
# 24 "data/maps/DesertToFire/scripts.pory"
	applymovement LOCALID_PLAYER, BlockVolcano_Movement_2
# 25 "data/maps/DesertToFire/scripts.pory"
	waitmovement LOCALID_PLAYER
# 26 "data/maps/DesertToFire/scripts.pory"
	msgbox BlockVolcano_Text_0, MSGBOX_AUTOCLOSE
# 27 "data/maps/DesertToFire/scripts.pory"
	applymovement Volcarona, BlockVolcano_Movement_3
# 28 "data/maps/DesertToFire/scripts.pory"
	waitmovement Volcarona
# 29 "data/maps/DesertToFire/scripts.pory"
	special SpawnCameraObject
# 30 "data/maps/DesertToFire/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BlockVolcano_Movement_4
# 31 "data/maps/DesertToFire/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BlockVolcano_Movement_5
# 32 "data/maps/DesertToFire/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 33 "data/maps/DesertToFire/scripts.pory"
	delay 30
# 34 "data/maps/DesertToFire/scripts.pory"
	speakername BlockVolcano_Text_1
# 35 "data/maps/DesertToFire/scripts.pory"
	msgbox BlockVolcano_Text_2, MSGBOX_AUTOCLOSE
# 36 "data/maps/DesertToFire/scripts.pory"
	waitmessage
# 37 "data/maps/DesertToFire/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BlockVolcano_Movement_6
# 38 "data/maps/DesertToFire/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 39 "data/maps/DesertToFire/scripts.pory"
	special RemoveCameraObject
# 40 "data/maps/DesertToFire/scripts.pory"
	applymovement Volcarona, BlockVolcano_Movement_7
# 41 "data/maps/DesertToFire/scripts.pory"
	waitmovement Volcarona
# 42 "data/maps/DesertToFire/scripts.pory"
	release
	end


# 20 "data/maps/DesertToFire/scripts.pory"
BlockVolcano_Movement_0:
# 20 "data/maps/DesertToFire/scripts.pory"
	face_up
	step_end

# 22 "data/maps/DesertToFire/scripts.pory"
BlockVolcano_Movement_1:
# 22 "data/maps/DesertToFire/scripts.pory"
	lock_facing_direction
	step_end

# 24 "data/maps/DesertToFire/scripts.pory"
BlockVolcano_Movement_2:
# 24 "data/maps/DesertToFire/scripts.pory"
	walk_down
	step_end

# 27 "data/maps/DesertToFire/scripts.pory"
BlockVolcano_Movement_3:
# 27 "data/maps/DesertToFire/scripts.pory"
	face_left
	step_end

# 30 "data/maps/DesertToFire/scripts.pory"
BlockVolcano_Movement_4:
# 30 "data/maps/DesertToFire/scripts.pory"
	walk_right
# 30 "data/maps/DesertToFire/scripts.pory"
	walk_right
# 30 "data/maps/DesertToFire/scripts.pory"
	walk_right
# 30 "data/maps/DesertToFire/scripts.pory"
	walk_right
# 30 "data/maps/DesertToFire/scripts.pory"
	walk_right
# 30 "data/maps/DesertToFire/scripts.pory"
	walk_right
	step_end

# 31 "data/maps/DesertToFire/scripts.pory"
BlockVolcano_Movement_5:
# 31 "data/maps/DesertToFire/scripts.pory"
	walk_up
	step_end

# 37 "data/maps/DesertToFire/scripts.pory"
BlockVolcano_Movement_6:
# 37 "data/maps/DesertToFire/scripts.pory"
	walk_left
# 37 "data/maps/DesertToFire/scripts.pory"
	walk_left
# 37 "data/maps/DesertToFire/scripts.pory"
	walk_left
# 37 "data/maps/DesertToFire/scripts.pory"
	walk_left
# 37 "data/maps/DesertToFire/scripts.pory"
	walk_left
# 37 "data/maps/DesertToFire/scripts.pory"
	walk_left
	step_end

# 40 "data/maps/DesertToFire/scripts.pory"
BlockVolcano_Movement_7:
# 40 "data/maps/DesertToFire/scripts.pory"
	walk_in_place_down
	step_end

BlockVolcano_Text_0:
# 26 "data/maps/DesertToFire/scripts.pory"
	.string "Stop!\n$"

BlockVolcano_Text_1:
# 34 "data/maps/DesertToFire/scripts.pory"
	.string "Volcarona$"

BlockVolcano_Text_2:
# 35 "data/maps/DesertToFire/scripts.pory"
	.string "You are not the one who may pass.\pThe Boss likes a challenge,\nso he only lets Water_types into\lthe Volcano.$"
