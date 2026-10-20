#include "common.h"

extern void *func_L00_005DEBD0(s32, s32, s32);

s32 func_L01_00588C68(s32 arg0) {
    u8 *p = func_L00_005DEBD0(arg0, 0xF, 0x10);
    s32 n;
    if (p == 0) {
        return 0;
    }
    p = *(u8 **)(p + 8);
    n = 0;
    while (p != 0) {
        p = *(u8 **)(p + 0xB8);
        n++;
    }
    return n;
}
