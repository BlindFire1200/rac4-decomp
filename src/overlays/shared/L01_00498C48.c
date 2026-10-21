#include "common.h"

// For a class 0x2682 moby: count (pvar+0x4) arg1 when its class matches pvar+0x58 (or any class when -1).

typedef struct Type2 {
    char _p0[0x4];
    s32 f4;
    char _p8[0x50 - 0x8];
    s32 f50;
    char _p54[0x58 - 0x54];
    s32 f58;
} Type2;

typedef struct Type1 {
    char _p0[0x20];
    u8 f20;
    char _p21[0xAC - 0x21];
    Type2 *fAC;
    char _pB0[0xBC - 0xB0];
    s16 fBC;
} Type1;

extern void func_L01_00497878(Type1 *arg0);

void func_L01_00498C48(Type1 *arg0, Type1 *arg1) {
    Type2 *p;
    s32 ok;

    if (arg0->fBC == 0x2682) {
        p = arg0->fAC;
        if (arg0->f20 == 0) {
            func_L01_00497878(arg0);
        }
        if (p->f50 != 0) {
            ok = 1;
            if (p->f58 != -1) {
                if (arg1->fBC != p->f58) {
                    ok = 0;
                }
            }
            if (ok) {
                p->f4++;
            }
        }
    }
}
