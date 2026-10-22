#include "common.h"

extern s32 D_00172160[];

s32 D_0021DFA8 = 0;

// Increments a global counter and bumps the s32 at 0x172160+0x218 by 0x10 plus a carry from count % 3.
void func_0015AD70(void) {
    s32 count = D_0021DFA8 + 1;
    D_0021DFA8 = count;
    D_00172160[0x86] = D_00172160[0x86] + 0x10 + (count % 3 != 0);
}
