#include "common.h"

typedef int u128 __attribute__((mode(TI)));
typedef struct Type1 { s32 v[3]; } Type1;
typedef struct Type2 { u8 pad[0x20]; u8 f20; } Type2;

extern f32 *func_L00_005EAC30(Type2 *);
extern Type2 *func_L00_005EEF50(u128, u128, s32 *, Type2 **, s32, f32, f32, f32, s32, f32, f32, s32, s32 *, s32, s32, s32, s32);
extern Type2 *func_L01_0059E658(u128, u128, s32, s32 *, s32, s32, f32, f32, f32, s32, f32, f32, s32, s32 *, s32);
extern s32 D_0021E824;
extern s32 D_0021DDB8;
extern Type1 D_00220768;

#define P_CUR(p) (*(Type2 **)((u8 *)(p) + 0x2E94))
#define P_HIST(p) ((Type2 **)((u8 *)(p) + 0x2E98))
#define P_FRAME(p) (*(s32 *)((u8 *)(p) + 0x2EA8))

/* Pick a target for this frame: keep a live one, else query candidates and prefer recent history */
Type2 *func_L01_0068E830(u8 *p, u128 *a, u128 *b, s32 c, s32 d, f32 f0, f32 f1, f32 f2, f32 f3, f32 f4) {
    Type2 *list[8];
    Type1 ids;
    s32 count;
    s32 n;
    s32 found;
    s32 i;
    s32 j;
    s32 m;
    s32 k;
    s32 i2;
    Type2 *t;
    Type2 **h;
    f32 *f;
    u8 *q;

    s32 frame = D_0021DDB8;

    if (P_FRAME(p) != frame) {
        P_FRAME(p) = frame;
        t = *(Type2 **)(p + 0x5F0);
        if (t != 0 && t->f20 != 0xFE && t->f20 != 0xFD) {
            f = func_L00_005EAC30(t);
            if (f != 0 && *f > 0.0f) {
                return *(Type2 **)(p + 0x5F0);
            }
        }
        count = 0;
        ids = D_00220768;
        n = 0;
        if (*(s32 *)(p + 0x2318) != 0xD) {
            if (D_0021E824 != 1) {
                ids.v[0] = 0x2077;
            } else {
                ids.v[0] = 0x253A;
            }
            n = 1;
        }
        q = *(u8 **)(p + 0x2EF4);
        if (q == 0 || *(s16 *)(*(u8 **)(q + 0x2B0) + 0xBC) != 0x2054) {
            ids.v[n] = 0x209A;
        }
        if (D_0021E824 == 0) {
            P_CUR(p) = func_L00_005EEF50(*a, *b, &count, list, 5, f0, f1, f2, d, f3, f4, c, ids.v, 1, *(s16 *)(p + 0x2F8), 0, 0);
        } else {
            P_CUR(p) = func_L01_0059E658(*a, *b, *(s32 *)(p + 0x2F14), &count, 0, 0, f0, f1, f2, d, f3, f4, c, ids.v, 1);
        }
        found = count < 2;
        for (j = 0; j < count && !found; j++) {
            t = list[j];
            if (t == P_HIST(p)[0] && !(*(s32 *)(*(u8 **)(p + 0x2F00) + 0x1A4) & 3)) {
                P_CUR(p) = t;
                found = 1;
            }
        }
        for (i2 = 0; i2 < count && !found; i2++) {
            m = 0;
            for (i = 0; i < 4; i++) {
                if (list[i2] == (h = P_HIST(p))[i]) {
                    m = 1;
                }
            }
            if (!m) {
                found = 1;
                P_CUR(p) = list[i2];
            }
        }
        if (!found) {
            for (k = 3; k >= 0 && !found; k--) {
                h = P_HIST(p);
                t = h[k];
                if (t != 0 && t->f20 != 0xFE && t->f20 != 0xFD) {
                    f = func_L00_005EAC30(t);
                    if (f != 0 && *f > 0.0f) {
                        found = 1;
                        P_CUR(p) = h[k];
                    }
                }
            }
        }
        if (P_CUR(p) != 0 && P_CUR(p) != P_HIST(p)[0]) {
            h = P_HIST(p);
            m = 3;
            for (i = 0; i < 4; i++) {
                if (h[i] == P_CUR(p)) {
                    m = i;
                }
            }
            for (i = m; i > 0; i--) {
                h[i] = h[i - 1];
            }
            P_HIST(p)[0] = P_CUR(p);
        }
    }
    return P_CUR(p);
}
