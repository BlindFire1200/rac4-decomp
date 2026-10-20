#include "common.h"

// Clear +0xB78, +0xB7C and +0xF7C, then call func_L00_007162A0.

typedef struct Type1 {
    char _p0[0xB78];
    s32 fB78;
    u8 fB7C;
    char _pB7D[0xF7C - 0xB7D];
    s32 fF7C;
} Type1;

extern void func_L00_007162A0(Type1 *arg0);

void func_L00_00716768(Type1 *arg0) {
    arg0->fB78 = 0;
    arg0->fB7C = 0;
    arg0->fF7C = 0;
    func_L00_007162A0(arg0);
}
