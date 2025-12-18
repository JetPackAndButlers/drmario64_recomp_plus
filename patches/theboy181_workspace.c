#include "patches.h"
#include "misc_funcs.h"
#include "rt64_extended_gbi.h"
#include "theboy181_workspace.h"


RECOMP_PATCH void dm_draw_capsel_by_cpu_tentative(struct_game_state_data *gameStateDataRef, s32 arg1[2], s32 arg2[2]) {
    struct_game_state_data_unk_178 *pill = &gameStateDataRef->unk_178;
    TiTexData *tex;
    s32 size;
    s32 set;
    s32 i;

    size = gameStateDataRef->unk_00A;
    set = (size == 0xA) ? 0 : 1;

    /* Match the game's normal 2D textured draw setup. */
    gSPDisplayList(gGfxHead++, normal_texture_init_dl);

    /* Make sure we are in a sane state for CI4 + TLUT rectangles. */
    gDPPipeSync(gGfxHead++);
    gDPSetCycleType(gGfxHead++, G_CYC_1CYCLE);
    gDPSetTexturePersp(gGfxHead++, G_TP_NONE);
    gDPSetTextureLUT(gGfxHead++, G_TT_RGBA16);

    gSPTexture(gGfxHead++, 0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON);

    gDPSetRenderMode(gGfxHead++, G_RM_TEX_EDGE, G_RM_TEX_EDGE2);
    gDPSetCombineMode(gGfxHead++, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM);
    gDPSetPrimColor(gGfxHead++, 0, 0, 255, 255, 255, 255);

    /* Load the capsule CI4 atlas once. */
    tex = dm_game_get_capsel_tex(set);
    load_TexTile_4b(tex->texs[TI_TEX_TEX],
                    tex->info[TI_INFO_IDX_WIDTH],
                    tex->info[TI_INFO_IDX_HEIGHT],
                    0, 0,
                    tex->info[TI_INFO_IDX_WIDTH] - 1,
                    tex->info[TI_INFO_IDX_HEIGHT] - 1);

    for (i = 0; i < 2; i++) {
        s32 x, y;
        s32 v;

        if ((arg2[i] < 0) || ((arg2[i] + size) > SCREEN_HEIGHT)) {
            continue;
        }
        if ((arg1[i] < 0) || ((arg1[i] + size) > SCREEN_WIDTH)) {
            continue;
        }

        /* Load the palette for this half. */
        tex = dm_game_get_capsel_pal(set, pill->capsel_p[i]);
        load_TexPal(tex->texs[TI_TEX_TLUT]);

        x = arg1[i];
        y = arg2[i];

        /* Vertical frame selection in the atlas, in pixels -> 5.5 fixed for texture rect. */
        v = (pill->casel_g[i] * size) << 5;

        gSPTextureRectangle(gGfxHead++,
                            (x * 4), (y * 4),
                            ((x + size) * 4), ((y + size) * 4),
                            G_TX_RENDERTILE,
                            0, v,
                            1 << 10, 1 << 10);
    }

    gSPTexture(gGfxHead++, 0, 0, 0, G_TX_RENDERTILE, G_OFF);
}
