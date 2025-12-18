#ifndef __THEBOY181_WORKSPACE_H__
#define __THEBOY181_WORKSPACE_H__

#include "patches.h"

#define UNK_TYPE s32
#define UNK_TYPE1 s8
#define UNK_TYPE2 s16
#define UNK_TYPE4 s32
#define UNK_TYPE8 s64
#define UNK_PTR void*
#define UNK_RET UNK_TYPE
#define UNK_ARGS 
#define UNK_FUN_ARG void(*)(void)
//#define UNK_FUN_PTR(name) void(*name)(void)
typedef UNK_RET (*UNK_FUN_PTR)(UNK_ARGS);
#define UNK_SIZE 1

typedef enum EnumGameStateDataUnk00C {
    /* 0x00 */ GAMESTATEDATA_UNK_00C_0,
    /* 0x01 */ GAMESTATEDATA_UNK_00C_1,
    /* 0x02 */ GAMESTATEDATA_UNK_00C_2,
    /* 0x03 */ GAMESTATEDATA_UNK_00C_3,
    /* 0x04 */ GAMESTATEDATA_UNK_00C_4,
    /* 0x05 */ GAMESTATEDATA_UNK_00C_5,
    /* 0x06 */ GAMESTATEDATA_UNK_00C_6,
    /* 0x07 */ GAMESTATEDATA_UNK_00C_7,
    /* 0x08 */ GAMESTATEDATA_UNK_00C_8,
    /* 0x09 */ GAMESTATEDATA_UNK_00C_9,
    /* 0x0A */ GAMESTATEDATA_UNK_00C_A,
    /* 0x0B */ GAMESTATEDATA_UNK_00C_B,
    /* 0x0C */ GAMESTATEDATA_UNK_00C_C,
    /* 0x0D */ GAMESTATEDATA_UNK_00C_D,
    /* 0x0E */ GAMESTATEDATA_UNK_00C_E,
    /* 0x0F */ GAMESTATEDATA_UNK_00C_F,
    /* 0x10 */ GAMESTATEDATA_UNK_00C_10,
    /* 0x11 */ GAMESTATEDATA_UNK_00C_11,
    /* 0x12 */ GAMESTATEDATA_UNK_00C_12,
    /* 0x13 */ GAMESTATEDATA_UNK_00C_13,
    /* 0x14 */ GAMESTATEDATA_UNK_00C_14,
    /* 0x15 */ GAMESTATEDATA_UNK_00C_15,
    /* 0x16 */ GAMESTATEDATA_UNK_00C_16,
    /* 0x17 */ GAMESTATEDATA_UNK_00C_17,
    /* 0x18 */ GAMESTATEDATA_UNK_00C_18,
    /* 0x19 */ GAMESTATEDATA_UNK_00C_19,
    /* 0x1A */ GAMESTATEDATA_UNK_00C_1A,
    /* 0x1B */ GAMESTATEDATA_UNK_00C_1B,
    /* 0x1C */ GAMESTATEDATA_UNK_00C_1C,
    /* 0x1D */ GAMESTATEDATA_UNK_00C_1D,
    /* 0x1E */ GAMESTATEDATA_UNK_00C_1E,
    /* 0x1F */ GAMESTATEDATA_UNK_00C_1F,
    /* 0x20 */ GAMESTATEDATA_UNK_00C_DEBUG_CHARACTER_EDIT,
    /* 0x21 */ GAMESTATEDATA_UNK_00C_DEBUG_SETTINGS,
} EnumGameStateDataUnk00C;

typedef enum EnumGameStateDataUnk014 {
    /* 0x00 */ GAMESTATEDATA_UNK_014_0,
    /* 0x01 */ GAMESTATEDATA_UNK_014_1,
    /* 0x02 */ GAMESTATEDATA_UNK_014_2,
    /* 0x03 */ GAMESTATEDATA_UNK_014_3,
    /* 0x04 */ GAMESTATEDATA_UNK_014_4,
    /* 0x05 */ GAMESTATEDATA_UNK_014_5,
    /* 0x06 */ GAMESTATEDATA_UNK_014_6,
    /* 0x07 */ GAMESTATEDATA_UNK_014_7,
    /* 0x08 */ GAMESTATEDATA_UNK_014_8,
    /* 0x09 */ GAMESTATEDATA_UNK_014_9,
    /* 0x0A */ GAMESTATEDATA_UNK_014_A,
    /* 0x0B */ GAMESTATEDATA_UNK_014_B,
    /* 0x0C */ GAMESTATEDATA_UNK_014_C,
    /* 0x0D */ GAMESTATEDATA_UNK_014_D,
    /* 0x0E */ GAMESTATEDATA_UNK_014_E,
    /* 0x0F */ GAMESTATEDATA_UNK_014_F,
    /* 0x10 */ GAMESTATEDATA_UNK_014_10,
    /* 0x11 */ GAMESTATEDATA_UNK_014_11,
    /* 0x12 */ GAMESTATEDATA_UNK_014_12,
    /* 0x13 */ GAMESTATEDATA_UNK_014_13,
    /* 0x14 */ GAMESTATEDATA_UNK_014_14,
    /* 0x15 */ GAMESTATEDATA_UNK_014_15,
    /* 0x16 */ GAMESTATEDATA_UNK_014_16,
    /* 0x17 */ GAMESTATEDATA_UNK_014_17,
    /* 0x18 */ GAMESTATEDATA_UNK_014_18,
} EnumGameStateDataUnk014;

typedef enum CharAnimeMode {
    /*  0 */ CHARANIMEMODE_M,
    /*  1 */ CHARANIMEMODE_N,
    /*  2 */ CHARANIMEMODE_H,
    /*  3 */ CHARANIMEMODE_I,
    /*  4 */ CHARANIMEMODE_J,
    /*  5 */ CHARANIMEMODE_D,
    /*  6 */ CHARANIMEMODE_E,
    /*  7 */ CHARANIMEMODE_F,
    /*  8 */ CHARANIMEMODE_A,
    /*  9 */ CHARANIMEMODE_B,
    /* 10 */ CHARANIMEMODE_C,
    /* 11 */ CHARANIMEMODE_G,
    /* 12 */ CHARANIMEMODE_K,
    /* 13 */ CHARANIMEMODE_L,
    /* 14 */ CHARANIMEMODE_O,
    /* 15 */ CHARANIMEMODE_MARIO,
    /* 16 */ CHARANIMEMODE_VIRUS_R,
    /* 17 */ CHARANIMEMODE_VIRUS_Y,
    /* 18 */ CHARANIMEMODE_VIRUS_B,
    /* 19 */ CHARANIMEMODE_SMOG,
    /* 20 */ CHARANIMEMODE_MAX
} CharAnimeMode;

typedef enum AnimeNo {
    /* 0 */ ANIMENO_0,
    /* 1 */ ANIMENO_1,
    /* 2 */ ANIMENO_2,
    /* 3 */ ANIMENO_3,
    /* 4 */ ANIMENO_4,
} AnimeNo;

typedef struct SAnimeSeq {
    /* 0x00 */ u8 labelStack[4]; /* Original name: labelStack */
    /* 0x04 */ u8 countStack[4]; /* Original name: countStack */
    /* 0x08 */ s32 stackDepth; /* Original name: stackDepth */
    /* 0x0C */ u8 **seqArray; /* Original name: seqArray */ // indexed by animeNo (AnimeNo) and seqCount
    /* 0x10 */ AnimeNo animeNo; /* Original name: animeNo */ // TODO: enum?
    /* 0x14 */ s32 seqCount; /* Original name: seqCount */
    /* 0x18 */ s32 textureNo; /* Original name: textureNo */
} SAnimeSeq; // size = 0x1C

typedef struct SAnimeStateCenter {
    /* 0x0 */ s32 cx;
    /* 0x4 */ s32 cy;
} SAnimeStateCenter; // size = 0x8

typedef struct SAnimeState {
    /* 0x00 */ SAnimeSeq animeSeq; /* Original name: animeSeq */
    /* 0x1C */ struct TiTexData *texArray; /* Original name: texArray */
    /* 0x20 */ u32 frameCount; /* Original name: frameCount */
    /* 0x24 */ SAnimeStateCenter center; /* Original name: center */
    /* 0x2C */ CharAnimeMode animeMode; /* Original name: charNo */
    /* 0x30 */ s32 primColor[4]; /* Original name: color */
} SAnimeState; // size = 0x40


typedef struct struct_game_state_data_unk_050 {
    /* 0x0 */ u16 unk_0;
    /* 0x2 */ u16 unk_2;
} struct_game_state_data_unk_050; // size = 0x4

typedef struct struct_game_state_data_unk_140 {
    /* 0x00 */ UNK_TYPE4 unk_00[UNK_SIZE];
    /* 0x04 */ UNK_TYPE1 unk_04[0x20];
} struct_game_state_data_unk_140; // size = 0x24

#define STRUCT_GAME_STATE_DATA_UNK_178_UNK_LEN 2

typedef struct struct_game_state_data_unk_178 {
    /* 0x0 */ s8 pos_x[STRUCT_GAME_STATE_DATA_UNK_178_UNK_LEN];
    /* 0x2 */ s8 pos_y[STRUCT_GAME_STATE_DATA_UNK_178_UNK_LEN];
    /* 0x4 */ s8 casel_g[STRUCT_GAME_STATE_DATA_UNK_178_UNK_LEN];
    /* 0x6 */ s8 capsel_p[STRUCT_GAME_STATE_DATA_UNK_178_UNK_LEN];
    /* 0x8 */ s8 capsel_flg_0;
    /* 0x9 */ s8 capsel_flg_1;
    /* 0xA */ s8 capsel_flg_2;
} struct_game_state_data_unk_178; // size = 0xB

#define STRUCT_AIFLAG_UNK_LEN 10
#define AIROOT_LEN 50
#define GAME_MAP_ROWS 17
#define GAME_MAP_COLUMNS 8


typedef void Texture;

typedef struct TiTexData {
    #define TI_TEX_TLUT (0)
    #define TI_TEX_TEX (1)
    /**
     * [0]: tlut
     * [1]: texture
     */
    /* 0x0 */ Texture **texs; /* Original name: addr */

    #define TI_INFO_IDX_WIDTH (0)
    #define TI_INFO_IDX_HEIGHT (1)
    #define TI_INFO_IDX_FORMAT (2)
    #define TI_INFO_IDX_FLAGS (3)
    /**
     * [0]: width
     * [1]: height
     * [2]: format. See TiTexDataFormat
     * [3]: bitflags: See TITEX_FLAGS_*
     */
    /* 0x4 */ u16 *info; /* Original name: size */
} TiTexData; // size = 0x8

typedef struct struct_aiFlag {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
    /* 0x02 */ u8 unk_02;
    /* 0x03 */ u8 unk_03;
    /* 0x04 */ u8 unk_04;
    /* 0x05 */ UNK_TYPE1 unk_05[0x3];
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ u8 unk_10[STRUCT_AIFLAG_UNK_LEN];
    /* 0x1A */ u8 unk_1A[STRUCT_AIFLAG_UNK_LEN];
    /* 0x24 */ u8 unk_24[STRUCT_AIFLAG_UNK_LEN];
    /* 0x2E */ u8 unk_2E[STRUCT_AIFLAG_UNK_LEN];
    /* 0x38 */ u8 unk_38[UNK_SIZE]; // TODO: at least size 2
    /* 0x39 */ u8 unk_39;
    /* 0x3A */ u8 unk_3A;
    /* 0x3B */ u8 unk_3B;
    /* 0x3C */ u8 unk_3C;
    /* 0x3D */ u8 unk_3D;
    /* 0x3E */ u8 unk_3E;
    /* 0x3F */ u8 unk_3F;
} struct_aiFlag; // size = 0x40

typedef struct struct_game_state_data {
    /* 0x000 */ u32 unk_000;
    /* 0x004 */ u16 unk_004;
    /* 0x006 */ s16 unk_006;
    /* 0x008 */ s16 unk_008;
    /* 0x008 */ s8 unk_00A;
    /* 0x008 */ UNK_TYPE1 unk_00B[0x1];
    /* 0x00C */ EnumGameStateDataUnk00C unk_00C;
    /* 0x010 */ EnumGameStateDataUnk00C unk_010;
    /* 0x014 */ EnumGameStateDataUnk014 unk_014;
    /* 0x018 */ EnumGameStateDataUnk014 unk_018;
    /* 0x01C */ UNK_TYPE4 unk_01C;
    /* 0x020 */ u32 unk_020; // TODO: enum?
    /* 0x024 */ u8 unk_024;
    /* 0x025 */ u8 unk_025;
    /* 0x026 */ u8 unk_026;
    /* 0x027 */ u8 unk_027;
    /* 0x028 */ s8 unk_028;
    /* 0x029 */ u8 unk_029;
    /* 0x02A */ u8 unk_02A;
    /* 0x02B */ u8 unk_02B;
    /* 0x02C */ u8 unk_02C;
    /* 0x02D */ u8 unk_02D;
    /* 0x02E */ u8 unk_02E;
    /* 0x02F */ u8 unk_02F;
    /* 0x030 */ u8 unk_030;
    /* 0x031 */ u8 unk_031;
    /* 0x032 */ u8 unk_032;
    /* 0x033 */ u8 unk_033;
    /* 0x034 */ s8 unk_034;
    /* 0x035 */ u8 unk_035;
    /* 0x036 */ u8 unk_036;
    /* 0x037 */ u8 unk_037;
    /* 0x038 */ u8 unk_038;
    /* 0x039 */ u8 unk_039;
    /* 0x03A */ u8 unk_03A;
    /* 0x03B */ u8 unk_03B;
    /* 0x03C */ u8 unk_03C[4];
    /* 0x040 */ u8 unk_040;
    /* 0x041 */ UNK_TYPE1 unk_041[0x3];
    /* 0x040 */ UNK_TYPE unk_044;
    /* 0x048 */ u8 unk_048;
    /* 0x048 */ u8 unk_049;
    /* 0x048 */ u8 unk_04A;
    /* 0x04B */ u8 unk_04B;
    /* 0x04C */ u8 unk_04C;
    /* 0x04D */ u8 unk_04D;
    /* 0x04E */ u8 unk_04E;
    /* 0x04F */ u8 unk_04F;
    /* 0x050 */ struct_game_state_data_unk_050 unk_050[0x10];
    /* 0x090 */ CharAnimeMode unk_090;
    /* 0x094 */ SAnimeState unk_094;
    /* 0x0D4 */ s32 unk_0D4[9][3];
    /* 0x140 */ struct_game_state_data_unk_140 unk_140;
    /* 0x164 */ s32 unk_164;
    /* 0x168 */ s32 unk_168;
    /* 0x16C */ s32 unk_16C;
    /* 0x170 */ UNK_TYPE4 unk_170;
    /* 0x174 */ UNK_TYPE4 unk_174;
    /* 0x178 */ struct_game_state_data_unk_178 unk_178;
    /* 0x183 */ UNK_TYPE1 unk_183[1];
    /* 0x184 */ struct_game_state_data_unk_178 unk_184;
    /* 0x18F */ UNK_TYPE1 unk_18F[1];
    /* 0x190 */ struct_aiFlag unk_190;
    /* 0x1D0 */ u8 unk_1D0[AIROOT_LEN][2];
    /* 0x234 */ u8 unk_234;
    /* 0x235 */ u8 unk_235;
    /* 0x236 */ u8 unk_236;
    /* 0x237 */ u8 unk_237;
    /* 0x238 */ u8 unk_238;
    /* 0x239 */ u8 unk_239;
    /* 0x23A */ u8 unk_23A;
    /* 0x23A */ u8 unk_23B;
    /* 0x23C */ u8 unk_23C;
    /* 0x23D */ u8 unk_23D;
    /* 0x23E */ u8 unk_23E;
    /* 0x23F */ u8 unk_23F;
    /* 0x240 */ u8 unk_240;
    /* 0x241 */ u8 unk_241;
    /* 0x242 */ u8 unk_242[0x10];
    /* 0x252 */ s16 unk_252[0x10];
    /* 0x272 */ s16 unk_272[0x10];
    /* 0x292 */ u8 unk_292;
    /* 0x293 */ u8 unk_293;
    /* 0x294 */ u8 unk_294;
    /* 0x295 */ UNK_TYPE1 unk_295[0x1];
    /* 0x296 */ u16 unk_296;
    /* 0x298 */ u8 unk_298;
    /* 0x299 */ u8 unk_299;
    /* 0x29A */ u8 unk_29A;
    /* 0x29B */ u8 unk_29B;
    /* 0x29C */ u8 unk_29C[GAME_MAP_ROWS][GAME_MAP_COLUMNS][2]; // TODO: use Unk_AIFEntry instead?
    /* 0x34C */ UNK_TYPE1 unk_3AC[0x10];
    /* 0x3BC */ u8 unk_3BC;
    /* 0x3BD */ u8 unk_3BD;
    /* 0x3BE */ UNK_TYPE1 unk_3BE[0x2];
    /* 0x3C0 */ u8 unk_3C0;
    /* 0x3C1 */ u8 unk_3C1;
    /* 0x3C2 */ UNK_TYPE1 unk_3C2[0x2];
} struct_game_state_data; // size = 0x3C4




#endif // __THEBOY181_WORKSPACE_H__