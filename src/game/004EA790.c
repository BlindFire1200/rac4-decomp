#include "common.h"

extern u8 D_328548[];

/* Clear every word equal to arg0 in the 0x20-entry table D_328548, entries 16 bytes apart. */
void func_004EA790(s32 arg0) {
    s32 i = 0x1F;
    u8 *base = D_328548;
    s32 *p = (s32 *)(base + 4);
    do {
        if (*p == arg0) {
            *p = 0;
        }
        i--;
        p += 4;
    } while (i >= 0);
}
