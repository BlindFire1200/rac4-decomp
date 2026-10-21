#include "common.h"

// When in state arg1, flag the buffer, set +0x40, move to state arg2 and clear +0x44; then call func_L00_00505F80(arg0, 0x14).

typedef struct Type2 {
    char _p0[0x4];
    u8 *f4;
} Type2;

typedef struct Type1 {
    char _p0[0x30];
    s32 f30;
    char _p34[0x3C - 0x34];
    Type2 *f3C;
    s32 f40;
    s32 f44;
} Type1;

extern void func_L00_00505F80(Type1 *arg0, s32 arg1);

void func_L00_00526EB0(Type1 *arg0, s32 arg1, s32 arg2) {
    if (arg0->f30 == arg1) {
        *arg0->f3C->f4 = 1;
        arg0->f40 = 1;
        arg0->f30 = arg2;
        arg0->f44 = 0;
    }
    func_L00_00505F80(arg0, 0x14);
}
