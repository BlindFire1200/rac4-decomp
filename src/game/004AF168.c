#include "common.h"

extern u8 D_3092A0[];

/* Set bit 0 of the words at offsets 0x10 and 0x74 of the block D_3092A0. */
void func_004AF168(void) {
    s32 *p = (s32 *)D_3092A0;
    s32 a = p[4];
    s32 b = p[29];
    p[4] = a | 1;
    p[29] = b | 1;
}
