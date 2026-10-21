#include "common.h"

// If the pvar's +0x9C equals arg1, clears it, calls func_L01_00591BD8(moby, 1, -1) and returns 1.

typedef struct Type2 {
    char _p0[0x9C];
    s32 f9C;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

extern void func_L01_00591BD8(Type1 *arg0, s32 arg1, s32 arg2);

s32 func_L01_00481820(Type1 *arg0, s32 arg1) {
    Type2 *p = arg0->fAC;

    if (p->f9C != arg1) {
        return 0;
    }
    p->f9C = 0;
    func_L01_00591BD8(arg0, 1, -1);
    return 1;
}
