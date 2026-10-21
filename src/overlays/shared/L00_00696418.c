#include "common.h"

extern unsigned char D_1711A8[];

// Check byte at offset 0x16 and set byte at 0x11 if non-zero
void func_L00_00696418(void) {
    if (D_1711A8[0x16] != 0) {
        D_1711A8[0x11] = 1;
    }
}
