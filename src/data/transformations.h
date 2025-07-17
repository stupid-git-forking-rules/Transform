const u32 gItemIcon_TransformDitto[] = INCBIN_U32("graphics/items/icons/transformditto.4bpp.lz");
const u16 gItemIconPalette_TransformDitto[] = INCBIN_U16("graphics/items/icon_palettes/transformditto.gbapal");
const u32 gItemIcon_TransformSurf[] = INCBIN_U32("graphics/items/icons/transformsurf3.4bpp.lz");
const u16 gItemIconPalette_TransformSurf[] = INCBIN_U16("graphics/items/icon_palettes/transformsurf3.gbapal");
const u32 gItemIcon_TransformStrength[] = INCBIN_U32("graphics/items/icons/transformstrength.4bpp.lz");
const u16 gItemIconPalette_TransformStrength[] = INCBIN_U16("graphics/items/icon_palettes/transformstrength.gbapal");
const u32 gItemIcon_TransformShrink[] = INCBIN_U32("graphics/items/icons/transformshrink2.4bpp.lz");
const u16 gItemIconPalette_TransformShrink[] = INCBIN_U16("graphics/items/icon_palettes/transformshrink2.gbapal");
const u32 gItemIcon_TransformFly[] = INCBIN_U32("graphics/items/icons/transformfly.4bpp.lz");
const u16 gItemIconPalette_TransformFly[] = INCBIN_U16("graphics/items/icon_palettes/transformfly.gbapal");
const u32 gItemIcon_TransformCut[] = INCBIN_U32("graphics/items/icons/transformcut.4bpp.lz");
const u16 gItemIconPalette_TransformCut[] = INCBIN_U16("graphics/items/icon_palettes/transformcut.gbapal");
const u32 gItemIcon_TransformMachBike[] = INCBIN_U32("graphics/items/icons/transformmachbike.4bpp.lz");
const u16 gItemIconPalette_TransformMachBike[] = INCBIN_U16("graphics/items/icon_palettes/transformmachbike.gbapal");
const u32 gItemIcon_TransformRockSmash[] = INCBIN_U32("graphics/items/icons/transformrocksmash.4bpp.lz");
const u16 gItemIconPalette_TransformRockSmash[] = INCBIN_U16("graphics/items/icon_palettes/transformrocksmash.gbapal"); 
const u32 gItemIcon_TransformAcrobike[] = INCBIN_U32("graphics/items/icons/transformacrobike.4bpp.lz");
const u16 gItemIconPalette_TransformAcrobike[] = INCBIN_U16("graphics/items/icon_palettes/transformacrobike.gbapal");
const u32 gItemIcon_TransformFlash[] = INCBIN_U32("graphics/items/icons/transformflash.4bpp.lz");
const u16 gItemIconPalette_TransformFlash[] = INCBIN_U16("graphics/items/icon_palettes/transformflash.gbapal");
const u32 gItemIcon_TransformWaterfall[] = INCBIN_U32("graphics/items/icons/transformwaterfall.4bpp.lz");
const u16 gItemIconPalette_TransformWaterfall[] = INCBIN_U16("graphics/items/icon_palettes/transformwaterfall.gbapal");
const u32 gItemIcon_TransformDive[] = INCBIN_U32("graphics/items/icons/transformdive.4bpp.lz");
const u16 gItemIconPalette_TransformDive[] = INCBIN_U16("graphics/items/icon_palettes/transformdive.gbapal");

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

    [SPECIES_MARILL] =
    {
        .name = _("MARILL"),
        .fieldUseFunc = ItemUseOutOfBattle_SurfTransform,
        .iconPic = gItemIcon_TransformSurf,
        .iconPalette = gItemIconPalette_TransformSurf,        
    },

    [SPECIES_RHYHORN] =
    {
        .name = _("Rhyhorn"),
        .fieldUseFunc = ItemUseOutOfBattle_RockSmashTransform,
        .iconPic = gItemIcon_TransformRockSmash,
        .iconPalette = gItemIconPalette_TransformRockSmash,        
    },

    [SPECIES_CUTIEFLY] =
    {
        .name = _("Cutiefly"),
        .fieldUseFunc = ItemUseOutOfBattle_ShrinkTransform,
        .iconPic = gItemIcon_TransformShrink,
        .iconPalette = gItemIconPalette_TransformShrink,        
    },
    [SPECIES_ARCANINE] =
    {
        .name = _("Arcanine"),
        .fieldUseFunc = ItemUseOutOfBattle_MachBikeTransform,
        .iconPic = gItemIcon_TransformMachBike,
        .iconPalette = gItemIconPalette_TransformMachBike,        
    },
    [SPECIES_WEAVILE] =
    {
        .name = _("Weavile"),
        .fieldUseFunc = ItemUseOutOfBattle_AcroBikeTransform,
        .iconPic = gItemIcon_TransformAcrobike,
        .iconPalette = gItemIconPalette_TransformAcrobike,        
    },
    [SPECIES_SCYTHER] =
    {
        .name = _("Scyther"),
        .fieldUseFunc = ItemUseOutOfBattle_CutTransform,
        .iconPic = gItemIcon_TransformCut,
        .iconPalette = gItemIconPalette_TransformCut,
    },
    [SPECIES_CHINCHOU] =
    {
        .name = _("Chinchou"),
        .fieldUseFunc = ItemUseOutOfBattle_DiveTransform,
        .iconPic = gItemIcon_TransformDive,
        .iconPalette = gItemIconPalette_TransformDive,        
    },
    [SPECIES_DRAGONAIR] =
    {
        .name = _("Dragonair"),
        .fieldUseFunc = ItemUseOutOfBattle_WaterfallTransform,
        .iconPic = gItemIcon_TransformWaterfall,
        .iconPalette = gItemIconPalette_TransformWaterfall,        
    },
    [SPECIES_MACHAMP] =
    {
        .name = _("Machamp"),
        .fieldUseFunc = ItemUseOutOfBattle_StrengthTransform,
        .iconPic = gItemIcon_TransformStrength,
        .iconPalette = gItemIconPalette_TransformStrength,        
    },
    [SPECIES_PIKACHU] =
    {
        .name = _("Pikachu"),
        .fieldUseFunc = ItemUseOutOfBattle_FlashTransform,
        .iconPic = gItemIcon_TransformFlash,
        .iconPalette = gItemIconPalette_TransformFlash,        
    },
    
};
