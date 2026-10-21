#include "common.h"

typedef struct {
    char pad0[0x408];
    s16 f408;
    char pad40A[0x266D - 0x40A];
    u8 f266D;
    char pad266E[0x2DF0 - 0x266E];
    void *f2DF0;
    char pad2DF4[0x2F24 - 0x2DF4];
    f32 f2F24;
    char pad2F28[0x31F0 - 0x2F28];
} Type1;

s32 func_L00_005A7230(void *, s32, void *, s32, f32);
s32 func_L00_006A92C8(void *);
s32 *func_005CEC98(void *);
void func_L00_006AC8E8(void *, f32);
void *func_00616C98(void *);
void func_L00_006EF5C0(void *, u32, s32, s32);
extern s32 D_002204A0;
extern s32 D_002204A8;
extern void *D_00244DC0[];
extern Type1 D_00347AA0[];
extern u8 D_172160[];
extern s32 *D_0021DDA4;

/* walks the objects found near arg0 and resets the players or objects they hold */
void func_L41_0044DDA0(u8 *arg0) {
    s32 n;
    s32 i;
    s32 j;
    s32 found;
    s32 *p;
    Type1 *q;
    Type1 *pl;
    u8 *r;
    Type1 *a;
    Type1 *b;

    n = func_L00_005A7230(arg0 + 0x10, 1, arg0, 0, *(f32 *)(*(u8 **)(arg0 + 0xAC) + 0xC));
    if (n == 0) {
        return;
    }
    for (i = 0; i < n; i++) {
        if (func_L00_006A92C8(D_00244DC0[i]) != 0) {
            p = func_005CEC98(D_00244DC0[i]);
            q = 0;
            if (p != 0) {
                q = ((u32)(*p & D_002204A8) >> D_002204A0) == 0 ? (Type1 *)p : 0;
            }
            if (q != 0 && q->f266D != 0) {
                q->f408 = 0;
                func_L00_006AC8E8(q, q->f2F24);
            }
            continue;
        }
        if (*(s16 *)((u8 *)D_00244DC0[i] + 0xBC) == 0xE7D) {
            found = 0;
            j = 0;
            pl = D_00347AA0;
            while (j < *D_0021DDA4) {
                if (pl->f2DF0 == D_00244DC0[i]) {
                    pl->f408 = 0;
                    func_L00_006AC8E8(pl, pl->f2F24);
                    found = 1;
                    break;
                }
                j++;
                pl = &D_00347AA0[j];
            }
            if (found) {
                continue;
            }
        }
        r = func_00616C98(D_00244DC0[i]);
        if (r == 0) {
            continue;
        }
        if ((*(u8 **)(r + 0x2B0))[0x67] != 0) {
            continue;
        }
        a = *(Type1 **)(r + 0x2B8);
        if (a == 0 || a->f266D == 0) {
            b = *(Type1 **)(r + 0x2BC);
            if (b == 0 || b->f266D == 0) {
                if (a != 0) {
                    continue;
                }
                if (b != 0) {
                    continue;
                }
                if (D_172160[0x250] == 0) {
                    continue;
                }
            }
        }
        *(s32 *)(r + 0x2E8) = 0;
        func_L00_006EF5C0(r, 0xFFFFFFFF, 7, -1);
    }
}
