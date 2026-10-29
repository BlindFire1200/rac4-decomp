#include "common.h"

extern s8 D_266F00[];

/* Clear the 0x20 bytes at D_266F00, from the last one down to the first. */
void func_0046F0D0(void) {
    s32 i = 0x1F;
    s8 *p = D_266F00;
    p += 0x1F;
    do {
        *p = 0;
        i -= 1;
        p -= 1;
    } while (i >= 0);
}
