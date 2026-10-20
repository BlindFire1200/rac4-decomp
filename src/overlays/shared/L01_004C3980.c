#include "common.h"

// Outside state 8, store arg1 at pvar+0x342; in states 9-11 with pvar+0x48B set, send event 6, 4 or 1.

typedef struct Type2 {
    char _p0[0x33C];
    s32 f33C;
    char _p340[0x342 - 0x340];
    u8 f342;
    char _p343[0x460 - 0x343];
    u8 f460;
    char _p461[0x470 - 0x461];
    s32 f470;
    char _p474[0x48B - 0x474];
    u8 f48B;
} Type2;

typedef struct Type1 {
    char _p0[0x20];
    u8 f20;
    char _p21[0xAC - 0x21];
    Type2 *fAC;
} Type1;

extern void func_L01_00591BD8(Type1 *arg0, s32 arg1, s32 arg2);

void func_L01_004C3980(Type1 *arg0, s32 arg1) {
    Type2 *p = arg0->fAC;

    if (arg0->f20 != 8) {
        p->f342 = arg1;
        if (p->f48B != 0 && (u32)(arg0->f20 - 9) < 3) {
            p->f33C = 3;
            if (arg0->f20 == 9 || arg0->f20 == 11) {
                func_L01_00591BD8(arg0, 6, -1);
            } else if (p->f460 != 0 && p->f470 != -1) {
                func_L01_00591BD8(arg0, 4, -1);
            } else {
                func_L01_00591BD8(arg0, 1, -1);
            }
        }
    }
}
