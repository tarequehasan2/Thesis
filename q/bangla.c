
/* This file was generated automatically by the Snowball to ANSI C compiler */

#include "header.h"

#ifdef __cplusplus
extern "C" {
#endif
extern int H_stem(struct SN_env * z);
#ifdef __cplusplus
}
#endif
static int r_replace2(struct SN_env * z);
static int r_replace1(struct SN_env * z);
static int r_remove(struct SN_env * z);
#ifdef __cplusplus
extern "C" {
#endif


extern struct SN_env * H_create_env(void);
extern void H_close_env(struct SN_env * z);


#ifdef __cplusplus
}
#endif
static const symbol s_0_0[12] = { 0xE0, 0xA6, 0x85, 0xE0, 0xA6, 0xA8, 0xE0, 0xA7, 0x87, 0xE0, 0xA6, 0x95 };
static const symbol s_0_1[3] = { 0xE0, 0xA6, 0x87 };
static const symbol s_0_2[3] = { 0xE0, 0xA6, 0x93 };
static const symbol s_0_3[9] = { 0xE0, 0xA6, 0xAA, 0xE0, 0xA7, 0x8C, 0xE0, 0xA6, 0xB7 };
static const symbol s_0_4[9] = { 0xE0, 0xA6, 0xB2, 0xE0, 0xA7, 0x87, 0xE0, 0xA6, 0xAE };
static const symbol s_0_5[6] = { 0xE0, 0xA7, 0x87, 0xE0, 0xA6, 0xB2 };
static const symbol s_0_6[6] = { 0xE0, 0xA7, 0x8B, 0xE0, 0xA6, 0xA4 };

static const struct among a_0[7] =
{
/*  0 */ { 12, s_0_0, -1, 5, 0},
/*  1 */ { 3, s_0_1, -1, 2, 0},
/*  2 */ { 3, s_0_2, -1, 3, 0},
/*  3 */ { 9, s_0_3, -1, 7, 0},
/*  4 */ { 9, s_0_4, -1, 6, 0},
/*  5 */ { 6, s_0_5, -1, 1, 0},
/*  6 */ { 6, s_0_6, -1, 4, 0}
};

static const symbol s_1_0[6] = { 0xE0, 0xA6, 0xB0, 0xE0, 0xA6, 0x9B };
static const symbol s_1_1[6] = { 0xE0, 0xA6, 0xB0, 0xE0, 0xA6, 0xAC };

static const struct among a_1[2] =
{
/*  0 */ { 6, s_1_0, -1, 1, 0},
/*  1 */ { 6, s_1_1, -1, 2, 0}
};

static const symbol s_0[] = { 0xE0, 0xA6, 0x85, 0xE0, 0xA6, 0xA8, 0xE0, 0xA6, 0xBF, 0xE0, 0xA6, 0x95 };
static const symbol s_1[] = { 0xE0, 0xA6, 0xAA, 0xE0, 0xA6, 0xB8 };
static const symbol s_2[] = { 0xE0, 0xA6, 0xB0 };
static const symbol s_3[] = { 0xE0, 0xA6, 0xAC, 0xE0, 0xA6, 0x97 };

static int r_remove(struct SN_env * z) {
    int among_var;
    z->bra = z->c; /* [, line 88 */
    among_var = find_among(z, a_0, 7); /* substring, line 88 */
    if (!(among_var)) return 0;
    z->ket = z->c; /* ], line 88 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            {   int ret = slice_from_s(z, 0, 0); /* <-, line 89 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 0, 0); /* <-, line 90 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 0, 0); /* <-, line 91 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 0, 0); /* <-, line 92 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = slice_from_s(z, 12, s_0); /* <-, line 94 */
                if (ret < 0) return ret;
            }
            break;
        case 6:
            {   int ret = slice_from_s(z, 0, 0); /* <-, line 96 */
                if (ret < 0) return ret;
            }
            break;
        case 7:
            {   int ret = slice_from_s(z, 6, s_1); /* <-, line 97 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_replace1(struct SN_env * z) {
    int among_var;
    z->bra = z->c; /* [, line 105 */
    if (z->c + 5 >= z->l || (z->p[z->c + 5] != 155 && z->p[z->c + 5] != 172)) return 0;
    among_var = find_among(z, a_1, 2); /* substring, line 105 */
    if (!(among_var)) return 0;
    z->ket = z->c; /* ], line 105 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            {   int ret = slice_from_s(z, 3, s_2); /* <-, line 106 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 6, s_3); /* <-, line 107 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_replace2(struct SN_env * z) {
    return 1;
}

extern int H_stem(struct SN_env * z) {
    {   int c1 = z->c; /* do, line 119 */
        {   int ret = r_remove(z);
            if (ret == 0) goto lab0; /* call remove, line 119 */
            if (ret < 0) return ret;
        }
    lab0:
        z->c = c1;
    }
    {   int c2 = z->c; /* do, line 121 */
        {   int ret = r_replace1(z);
            if (ret == 0) goto lab1; /* call replace1, line 121 */
            if (ret < 0) return ret;
        }
    lab1:
        z->c = c2;
    }
     /* do, line 122 */
    {   int ret = r_replace2(z);
        if (ret == 0) goto lab2; /* call replace2, line 122 */
        if (ret < 0) return ret;
    }
lab2:
    return 1;
}

extern struct SN_env * H_create_env(void) { return SN_create_env(0, 0, 0); }

extern void H_close_env(struct SN_env * z) { SN_close_env(z, 0); }

