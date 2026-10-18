#include "common.h"

typedef struct Type3 {
    char _p0[0xC];
    u8 fC;
} Type3;

typedef struct Type2 {
    char _p0[0x24];
    Type3 *f24;
    char _p28[0x2D];
    u8 f55;
    char _p56[0x68];
    u8 fBE;
} Type2;

typedef struct Type1 {
    char _p0[0x67C];
    u8 f67C;
    char _p67D[0x4B];
    Type2 *f6C8;
} Type1;

extern void func_L00_005E7538(void *, s32, f32);
extern void func_L01_004A3208(void *, u8, s32, s32);

// Clear bit 2 of the linked object's flags, then per mode refresh and start it.
s32 func_L01_004A9E28(void *arg0, s32 arg1) {
    Type1 *s;
    Type2 *p;
    s32 n;

    s = *(Type1 **)((char *)arg0 + 0xAC);
    p = s->f6C8;
    if (p != 0) {
        p->fBE &= 0xFB;
    }
    if (arg1 == 0) {
        p = s->f6C8;
        if (p != 0 && p->f24 != 0) {
            n = p->f24->fC;
            if (n >= 3) {
                p->f55 |= 0x10;
                func_L00_005E7538(s->f6C8, 2, 0.0f);
            }
        }
    } else if (arg1 == 2) {
        func_L01_004A3208(arg0, s->f67C, 0, 0);
        p = s->f6C8;
        if (p != 0 && p->f24 != 0) {
            n = p->f24->fC;
            if (n >= 3) {
                p->f55 |= 0x10;
                func_L00_005E7538(s->f6C8, 0, 0.0f);
            }
        }
    } else if (arg1 == 4) {
        func_L01_004A3208(arg0, s->f67C, 0, 0);
        if (s->f6C8 != 0 && s->f6C8->f24 != 0) {
            n = s->f6C8->f24->fC;
            if (n >= 3) {
                func_L00_005E7538(s->f6C8, 1, 0.0f);
            }
        }
    }
    return 1;
}
