#include "common.h"

extern u8 D_004C3410[];

// Clear the fields in eight groups of eight entries.
void func_L00_005999D0(void) {
    s32 outer = 0;
    do {
        u8 *ptr = D_004C3410 + (outer << 7);
        s32 inner = 7;
        do {
            ptr[0] = 0;
            inner--;
            ptr[1] = 0;
            *(u16 *)(ptr + 0xA) = 0;
            *(u16 *)(ptr + 0xC) = 0;
            ptr[0xE] = 0;
            ptr += 0x10;
        } while (inner >= 0);
        outer++;
    } while (outer < 8);
}
