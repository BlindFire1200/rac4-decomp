#include "common.h"

// Copy pvar+0x54 (when at least 2) and pvar+0x58 (as a float, when set) into arg1.

typedef struct Type3 {
    s32 f0;
    char _p4[0x18 - 0x4];
    f32 f18;
} Type3;

typedef struct Type2 {
    char _p0[0x54];
    s32 f54;
    u8 f58;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

void func_L01_0048F2A0(Type1 *arg0, Type3 *arg1) {
    Type2 *p = arg0->fAC;

    if (p->f54 >= 2) {
        arg1->f0 = p->f54;
    }
    if (p->f58 != 0) {
        arg1->f18 = p->f58;
    }
}
