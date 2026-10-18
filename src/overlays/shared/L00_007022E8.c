#include "common.h"

typedef struct {
    u8 pad0[4];
    u16 f4;
    u16 f6;
    u16 f8;
    u8 padA[2];
    u16 fC;
    u16 fE;
    u16 f10;
    u16 f12;
    u16 f14;
    u16 f16;
    u16 f18;
    u16 f1A;
    u16 f1C;
    u16 f1E;
    u8 pad20[8];
    u8 f28;
    u8 f29;
    u8 f2A;
    u8 f2B;
    u8 pad2C[0xC];
    u16 f38;
    u16 f3A;
} Type1;

extern s32 func_L00_006FF628(s32, s32);
extern Type1 *func_L00_00700690(s32, s32);

// For entries 1..19 that are active, copy one of three settings sets by func_L00_006FF628's result.
void func_L00_007022E8(s32 arg0) {
    s32 i;
    Type1 *p;
    s32 r;

    for (i = 1; i < 20; i++) {
        p = func_L00_00700690(i, 0);
        if (p->f28 != 0) {
            r = func_L00_006FF628(arg0, i);
            if (r < 9) {
                u16 a = p->fC, b = p->fE, c = p->f10, d = p->f12;
                u8 e = p->f2A;
                p->f29 = e; p->f38 = b; p->f8 = c; p->f6 = d; p->f4 = a;
            } else if (r == 9) {
                u16 a = p->f1C, b = p->f3A, c = p->f14, d = p->f18;
                u8 e = p->f2B;
                p->f29 = e; p->f38 = b; p->f8 = c; p->f6 = d; p->f4 = a;
            } else {
                u16 a = p->f1E, b = p->f3A, c = p->f16, d = p->f1A;
                u8 e = p->f2B;
                p->f29 = e; p->f38 = b; p->f8 = c; p->f6 = d; p->f4 = a;
            }
        }
    }
}
