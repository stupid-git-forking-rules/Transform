# 1 "data//maps/Route117/scripts.pory"

# 2 "data//maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MON_0, 25
# 3 "data//maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MON_1, 26
# 4 "data//maps/Route117/scripts.pory"

# 5 "data//maps/Route117/scripts.pory"
Route117_MapScripts::
# 6 "data//maps/Route117/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_OnTransition
# 7 "data//maps/Route117/scripts.pory"
	.byte 0
# 8 "data//maps/Route117/scripts.pory"

# 9 "data//maps/Route117/scripts.pory"
Route117_OnTransition:
# 10 "data//maps/Route117/scripts.pory"
	call Route117_EventScript_TryMoveDayCareMan
# 11 "data//maps/Route117/scripts.pory"
	@ set flags for OW daycare mons
# 12 "data//maps/Route117/scripts.pory"
	setflag FLAG_TEMP_1
# 13 "data//maps/Route117/scripts.pory"
	setflag FLAG_TEMP_2
# 14 "data//maps/Route117/scripts.pory"
	getdaycaregfx VAR_OBJ_GFX_ID_0, VAR_OBJ_GFX_ID_1, VAR_TEMP_0, VAR_TEMP_1
# 15 "data//maps/Route117/scripts.pory"
	switch VAR_RESULT
# 16 "data//maps/Route117/scripts.pory"
	case 2, Route117_EventScript_ShowDaycareMon1
# 17 "data//maps/Route117/scripts.pory"
	case 1, Route117_EventScript_ShowDaycareMon0
# 18 "data//maps/Route117/scripts.pory"
	end
# 19 "data//maps/Route117/scripts.pory"

# 20 "data//maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon1:
# 21 "data//maps/Route117/scripts.pory"
	@ set pokemon movement type based on compatibility
# 22 "data//maps/Route117/scripts.pory"
	special SetDaycareCompatibilityString
# 23 "data//maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_INCOMPATIBLE, Route117_EventScript_DaycareMonIncompatible
# 24 "data//maps/Route117/scripts.pory"
	@ Don't do anything if PARENTS_LOW_COMPATIBILITY
# 25 "data//maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_MED_COMPATIBILITY, Route117_EventScript_DaycareMonMedCompatibility
# 26 "data//maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_MAX_COMPATIBILITY, Route117_EventScript_DaycareMonMaxCompatibility
# 27 "data//maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_2
# 28 "data//maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon0:
# 29 "data//maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_1
# 30 "data//maps/Route117/scripts.pory"
	end
# 31 "data//maps/Route117/scripts.pory"

# 32 "data//maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonIncompatible: @ mons never face each other
# 33 "data//maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT
# 34 "data//maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT
# 35 "data//maps/Route117/scripts.pory"
	return
# 36 "data//maps/Route117/scripts.pory"

# 37 "data//maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMedCompatibility: @ down and towards each other
# 38 "data//maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 39 "data//maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT
# 40 "data//maps/Route117/scripts.pory"
	return
# 41 "data//maps/Route117/scripts.pory"

# 42 "data//maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMaxCompatibility: @ facing; walk in place
# 43 "data//maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 44 "data//maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 45 "data//maps/Route117/scripts.pory"
	return
# 46 "data//maps/Route117/scripts.pory"

# 47 "data//maps/Route117/scripts.pory"
Route117_EventScript_TryMoveDayCareMan::
# 48 "data//maps/Route117/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route117_EventScript_StopMoveDayCareMan
# 49 "data//maps/Route117/scripts.pory"
	setobjectxyperm LOCALID_DAYCARE_MAN, 47, 6
# 50 "data//maps/Route117/scripts.pory"
Route117_EventScript_StopMoveDayCareMan::
# 51 "data//maps/Route117/scripts.pory"
	return
# 52 "data//maps/Route117/scripts.pory"

# 53 "data//maps/Route117/scripts.pory"
Route117_EventScript_Woman::
# 54 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_ArentTheseFlowersPretty, MSGBOX_NPC
# 55 "data//maps/Route117/scripts.pory"
	end
# 56 "data//maps/Route117/scripts.pory"

# 57 "data//maps/Route117/scripts.pory"
Route117_EventScript_LittleBoy::
# 58 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_AirIsTastyHere, MSGBOX_NPC
# 59 "data//maps/Route117/scripts.pory"
	end
# 60 "data//maps/Route117/scripts.pory"

# 61 "data//maps/Route117/scripts.pory"
Route117_EventScript_Girl::
# 62 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCarePokemonHadNewMove, MSGBOX_NPC
# 63 "data//maps/Route117/scripts.pory"
	end
# 64 "data//maps/Route117/scripts.pory"

# 65 "data//maps/Route117/scripts.pory"
Route117_EventScript_RouteSignVerdanturf::
# 66 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignVerdanturf, MSGBOX_SIGN
# 67 "data//maps/Route117/scripts.pory"
	end
# 68 "data//maps/Route117/scripts.pory"

# 69 "data//maps/Route117/scripts.pory"
Route117_EventScript_RouteSignMauville::
# 70 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignMauville, MSGBOX_SIGN
# 71 "data//maps/Route117/scripts.pory"
	end
# 72 "data//maps/Route117/scripts.pory"

# 73 "data//maps/Route117/scripts.pory"
Route117_EventScript_DayCareSign::
# 74 "data//maps/Route117/scripts.pory"
	speakername DaycareSpeakernameTest
# 75 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCareSign, MSGBOX_SIGN
# 76 "data//maps/Route117/scripts.pory"
	end
# 77 "data//maps/Route117/scripts.pory"
	
# 78 "data//maps/Route117/scripts.pory"
DaycareSpeakernameTest:
# 79 "data//maps/Route117/scripts.pory"
.string "Day-Care Sign$"
# 80 "data//maps/Route117/scripts.pory"

# 81 "data//maps/Route117/scripts.pory"
Route117_EventScript_Isaac::
# 82 "data//maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_ISAAC_1, Route117_Text_IsaacIntro, Route117_Text_IsaacDefeat, Route117_EventScript_RegisterIsaac
# 83 "data//maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 84 "data//maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchIsaac
# 85 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostBattle, MSGBOX_DEFAULT
# 86 "data//maps/Route117/scripts.pory"
	release
# 87 "data//maps/Route117/scripts.pory"
	end
# 88 "data//maps/Route117/scripts.pory"

# 89 "data//maps/Route117/scripts.pory"
Route117_EventScript_RegisterIsaac::
# 90 "data//maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 91 "data//maps/Route117/scripts.pory"
	waitmovement 0
# 92 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacRegister, MSGBOX_DEFAULT
# 93 "data//maps/Route117/scripts.pory"
	register_matchcall TRAINER_ISAAC_1
# 94 "data//maps/Route117/scripts.pory"
	release
# 95 "data//maps/Route117/scripts.pory"
	end
# 96 "data//maps/Route117/scripts.pory"

# 97 "data//maps/Route117/scripts.pory"
Route117_EventScript_RematchIsaac::
# 98 "data//maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_ISAAC_1, Route117_Text_IsaacRematchIntro, Route117_Text_IsaacRematchDefeat
# 99 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostRematch, MSGBOX_AUTOCLOSE
# 100 "data//maps/Route117/scripts.pory"
	end
# 101 "data//maps/Route117/scripts.pory"

# 102 "data//maps/Route117/scripts.pory"
Route117_EventScript_Lydia::
# 103 "data//maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_LYDIA_1, Route117_Text_LydiaIntro, Route117_Text_LydiaDefeat, Route117_EventScript_RegisterLydia
# 104 "data//maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 105 "data//maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchLydia
# 106 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
# 107 "data//maps/Route117/scripts.pory"
	release
# 108 "data//maps/Route117/scripts.pory"
	end
# 109 "data//maps/Route117/scripts.pory"

# 110 "data//maps/Route117/scripts.pory"
Route117_EventScript_RegisterLydia::
# 111 "data//maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 112 "data//maps/Route117/scripts.pory"
	waitmovement 0
# 113 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
# 114 "data//maps/Route117/scripts.pory"
	register_matchcall TRAINER_LYDIA_1
# 115 "data//maps/Route117/scripts.pory"
	release
# 116 "data//maps/Route117/scripts.pory"
	end
# 117 "data//maps/Route117/scripts.pory"

# 118 "data//maps/Route117/scripts.pory"
Route117_EventScript_RematchLydia::
# 119 "data//maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
# 120 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
# 121 "data//maps/Route117/scripts.pory"
	end
# 122 "data//maps/Route117/scripts.pory"

# 123 "data//maps/Route117/scripts.pory"
Route117_EventScript_Dylan::
# 124 "data//maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DYLAN_1, Route117_Text_DylanIntro, Route117_Text_DylanDefeat, Route117_EventScript_RegisterDylan
# 125 "data//maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 126 "data//maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchDylan
# 127 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
# 128 "data//maps/Route117/scripts.pory"
	release
# 129 "data//maps/Route117/scripts.pory"
	end
# 130 "data//maps/Route117/scripts.pory"

# 131 "data//maps/Route117/scripts.pory"
Route117_EventScript_RegisterDylan::
# 132 "data//maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 133 "data//maps/Route117/scripts.pory"
	waitmovement 0
# 134 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
# 135 "data//maps/Route117/scripts.pory"
	register_matchcall TRAINER_DYLAN_1
# 136 "data//maps/Route117/scripts.pory"
	release
# 137 "data//maps/Route117/scripts.pory"
	end
# 138 "data//maps/Route117/scripts.pory"

# 139 "data//maps/Route117/scripts.pory"
Route117_EventScript_RematchDylan::
# 140 "data//maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
# 141 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
# 142 "data//maps/Route117/scripts.pory"
	end
# 143 "data//maps/Route117/scripts.pory"

# 144 "data//maps/Route117/scripts.pory"
Route117_EventScript_Maria::
# 145 "data//maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MARIA_1, Route117_Text_MariaIntro, Route117_Text_MariaDefeat, Route117_EventScript_RegisterMaria
# 146 "data//maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 147 "data//maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMaria
# 148 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
# 149 "data//maps/Route117/scripts.pory"
	release
# 150 "data//maps/Route117/scripts.pory"
	end
# 151 "data//maps/Route117/scripts.pory"

# 152 "data//maps/Route117/scripts.pory"
Route117_EventScript_RegisterMaria::
# 153 "data//maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 154 "data//maps/Route117/scripts.pory"
	waitmovement 0
# 155 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
# 156 "data//maps/Route117/scripts.pory"
	register_matchcall TRAINER_MARIA_1
# 157 "data//maps/Route117/scripts.pory"
	release
# 158 "data//maps/Route117/scripts.pory"
	end
# 159 "data//maps/Route117/scripts.pory"

# 160 "data//maps/Route117/scripts.pory"
Route117_EventScript_RematchMaria::
# 161 "data//maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
# 162 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
# 163 "data//maps/Route117/scripts.pory"
	end
# 164 "data//maps/Route117/scripts.pory"

# 165 "data//maps/Route117/scripts.pory"
Route117_EventScript_Derek::
# 166 "data//maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DEREK, Route117_Text_DerekIntro, Route117_Text_DerekDefeat
# 167 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 168 "data//maps/Route117/scripts.pory"
	end
# 169 "data//maps/Route117/scripts.pory"

# 170 "data//maps/Route117/scripts.pory"
Route117_EventScript_Anna::
# 171 "data//maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaIntro, Route117_Text_AnnaDefeat, Route117_Text_AnnaNotEnoughMons, Route117_EventScript_RegisterAnna
# 172 "data//maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 173 "data//maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchAnna
# 174 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
# 175 "data//maps/Route117/scripts.pory"
	release
# 176 "data//maps/Route117/scripts.pory"
	end
# 177 "data//maps/Route117/scripts.pory"

# 178 "data//maps/Route117/scripts.pory"
Route117_EventScript_RegisterAnna::
# 179 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 180 "data//maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 181 "data//maps/Route117/scripts.pory"
	release
# 182 "data//maps/Route117/scripts.pory"
	end
# 183 "data//maps/Route117/scripts.pory"

# 184 "data//maps/Route117/scripts.pory"
Route117_EventScript_RematchAnna::
# 185 "data//maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat, Route117_Text_AnnaRematchNotEnoughMons
# 186 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
# 187 "data//maps/Route117/scripts.pory"
	end
# 188 "data//maps/Route117/scripts.pory"

# 189 "data//maps/Route117/scripts.pory"
Route117_EventScript_Meg::
# 190 "data//maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegIntro, Route117_Text_MegDefeat, Route117_Text_MegNotEnoughMons, Route117_EventScript_RegisterMeg
# 191 "data//maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 192 "data//maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMeg
# 193 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
# 194 "data//maps/Route117/scripts.pory"
	release
# 195 "data//maps/Route117/scripts.pory"
	end
# 196 "data//maps/Route117/scripts.pory"

# 197 "data//maps/Route117/scripts.pory"
Route117_EventScript_RegisterMeg::
# 198 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 199 "data//maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 200 "data//maps/Route117/scripts.pory"
	release
# 201 "data//maps/Route117/scripts.pory"
	end
# 202 "data//maps/Route117/scripts.pory"

# 203 "data//maps/Route117/scripts.pory"
Route117_EventScript_RematchMeg::
# 204 "data//maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat, Route117_Text_MegRematchNotEnoughMons
# 205 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
# 206 "data//maps/Route117/scripts.pory"
	end
# 207 "data//maps/Route117/scripts.pory"

# 208 "data//maps/Route117/scripts.pory"
Route117_EventScript_Melina::
# 209 "data//maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MELINA, Route117_Text_MelinaIntro, Route117_Text_MelinaDefeat
# 210 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
# 211 "data//maps/Route117/scripts.pory"
	end
# 212 "data//maps/Route117/scripts.pory"

# 213 "data//maps/Route117/scripts.pory"
Route117_EventScript_Brandi::
# 214 "data//maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_BRANDI, Route117_Text_BrandiIntro, Route117_Text_BrandiDefeat
# 215 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 216 "data//maps/Route117/scripts.pory"
	end
# 217 "data//maps/Route117/scripts.pory"

# 218 "data//maps/Route117/scripts.pory"
Route117_EventScript_Aisha::
# 219 "data//maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_AISHA, Route117_Text_AishaIntro, Route117_Text_AishaDefeat
# 220 "data//maps/Route117/scripts.pory"
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 221 "data//maps/Route117/scripts.pory"
	end
# 222 "data//maps/Route117/scripts.pory"

# 223 "data//maps/Route117/scripts.pory"
Route117_Text_DayCarePokemonHadNewMove:
# 224 "data//maps/Route117/scripts.pory"
	.string "I left my POKéMON at the DAY CARE.\p"
# 225 "data//maps/Route117/scripts.pory"
	.string "When I got it back, it had a new move\n"
# 226 "data//maps/Route117/scripts.pory"
	.string "that I didn't teach it.\l"
# 227 "data//maps/Route117/scripts.pory"
	.string "I was really, really surprised.$"
# 228 "data//maps/Route117/scripts.pory"

# 229 "data//maps/Route117/scripts.pory"
Route117_Text_ArentTheseFlowersPretty:
# 230 "data//maps/Route117/scripts.pory"
	.string "What do you think?\n"
# 231 "data//maps/Route117/scripts.pory"
	.string "Aren't these flowers pretty?\p"
# 232 "data//maps/Route117/scripts.pory"
	.string "I planted them all!$"
# 233 "data//maps/Route117/scripts.pory"

# 234 "data//maps/Route117/scripts.pory"
Route117_Text_AirIsTastyHere:
# 235 "data//maps/Route117/scripts.pory"
	.string "The air is tasty here!$"
# 236 "data//maps/Route117/scripts.pory"

# 237 "data//maps/Route117/scripts.pory"
Route117_Text_RouteSignVerdanturf:
# 238 "data//maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 239 "data//maps/Route117/scripts.pory"
	.string "{LEFT_ARROW} VERDANTURF TOWN$"
# 240 "data//maps/Route117/scripts.pory"

# 241 "data//maps/Route117/scripts.pory"
Route117_Text_RouteSignMauville:
# 242 "data//maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 243 "data//maps/Route117/scripts.pory"
	.string "{RIGHT_ARROW} MAUVILLE CITY$"
# 244 "data//maps/Route117/scripts.pory"

# 245 "data//maps/Route117/scripts.pory"
Route117_Text_DayCareSign:
# 246 "data//maps/Route117/scripts.pory"
	.string "POKéMON DAY CARE\n"
# 247 "data//maps/Route117/scripts.pory"
	.string "“Let us raise your POKéMON.”$"

Route117_test_formchange::
# 251 "data//maps/Route117/scripts.pory"
	lockall
# 252 "data//maps/Route117/scripts.pory"
	dittotransform SPECIES_MARILL
# 253 "data//maps/Route117/scripts.pory"
	releaseall
	end

