EventScript_UseSurf::
	//checkpartymove MOVE_SURF
    checkpartylearnknowsfieldmove ITEM_HM03
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_EndUseSurf
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	lockall
	msgbox gText_WantToUseSurf, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ReleaseUseSurf
	msgbox gText_PlayerUsedSurf, MSGBOX_DEFAULT
	EventScript_UseSurfMove:: @ qol_field_moves
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	end
