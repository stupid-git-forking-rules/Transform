const u32 gItemIcon_TransformDitto[] = INCBIN_U32("graphics/items/icons/transformditto.4bpp.lz");
const u16 gItemIconPalette_TransformDitto[] = INCBIN_U16("graphics/items/icon_palettes/transformditto.gbapal");
const u32 gItemIcon_TransformSurf[] = INCBIN_U32("graphics/items/icons/transformsurf.4bpp.lz");
const u16 gItemIconPalette_TransformSurf[] = INCBIN_U16("graphics/items/icon_palettes/transformsurf.gbapal");
const u32 gItemIcon_TransformStrength[] = INCBIN_U32("graphics/items/icons/transformstrength.4bpp.lz");
const u16 gItemIconPalette_TransformStrength[] = INCBIN_U16("graphics/items/icon_palettes/transformstrength.gbapal");
const u32 gItemIcon_TransformShrink[] = INCBIN_U32("graphics/items/icons/transformshrink.4bpp.lz");
const u16 gItemIconPalette_TransformShrink[] = INCBIN_U16("graphics/items/icon_palettes/transformshrink.gbapal");
const u32 gItemIcon_TransformFly[] = INCBIN_U32("graphics/items/icons/transformfly.4bpp.lz");
const u16 gItemIconPalette_TransformFly[] = INCBIN_U16("graphics/items/icon_palettes/transformfly.gbapal");

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
