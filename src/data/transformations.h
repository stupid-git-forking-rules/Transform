const struct Transformation gTransformations[] =
{
    [SPECIES_DITTO] =
    {
        .name = _("Ditto"),
        .fieldUseFunc = ItemUseOutOfBattle_DittoTransform,
        .iconPic = gItemIcon_TransformDitto,
        .iconPalette = gItemIconPalette_TransformDitto,        
    },

    [SPECIES_NOIVERN] =
    {
        .name = _("Noivern"),
        .fieldUseFunc = ItemUseOutOfBattle_FlyTransform,
        .iconPic = gItemIcon_TransformFly,
        .iconPalette = gItemIconPalette_TransformFly,
    },

    [SPECIES_CLAUNCHER] =
    {
        .name = _("Clauncher"),
        .fieldUseFunc = ItemUseOutOfBattle_SurfTransform,
        .iconPic = gItemIcon_TransformSurf,
        .iconPalette = gItemIconPalette_TransformSurf,        
    },

    [SPECIES_RHYHORN] =
    {
        .name = _("Rhyhorn"),
        .fieldUseFunc = ItemUseOutOfBattle_StrengthTransform,
        .iconPic = gItemIcon_TransformStrength,
        .iconPalette = gItemIconPalette_TransformStrength,        
    },

    [SPECIES_JOLTIK] =
    {
        .name = _("Joltik"),
        .fieldUseFunc = ItemUseOutOfBattle_ShrinkTransform,
        .iconPic = gItemIcon_TransformShrink,
        .iconPalette = gItemIconPalette_TransformShrink,        
    },
};
