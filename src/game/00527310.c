#include "common.h"

extern s32 D_00171B40[];

// Zeroes four bytes of D_00171B40 walking downward from offset 0x2C.
void func_00527310(void) {
    s32 i;
    s8 *p;

    i = 3;
    p = (s8 *)D_00171B40;
    p += 0x2C;
    do {
        *p = 0;
        i -= 1;
        p -= 1;
    } while (i >= 0);
}
