#include "common.h"

extern u8 D_00172160[];

/* Clears the byte at 0x610 of D_00172160 and stores arg0's word at 0x18 into 0x614. */
void func_0015BC58(void *arg0) {
    u8 *p = D_00172160;

    p[0x610] = 0;
    *(s32 *)(p + 0x614) = *(s32 *)((u8 *)arg0 + 0x18);
}
