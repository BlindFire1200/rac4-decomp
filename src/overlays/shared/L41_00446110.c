#include "common.h"

// Store mode arg1 at pvar+0x0 and set the timer +0x78 to 60000 (modes 1, 2) or 30000.

typedef struct Type2 {
    s32 f0;
    char _p4[0x78 - 0x4];
    s32 f78;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

void func_L41_00446110(Type1 *arg0, s32 arg1) {
    Type2 *p = arg0->fAC;

    p->f78 = 30;
    p->f0 = arg1;
    if (arg1 == 1) {
        p->f78 = 60;
    } else if (arg1 == 2) {
        p->f78 = 60;
    }
    p->f78 *= 1000;
}
