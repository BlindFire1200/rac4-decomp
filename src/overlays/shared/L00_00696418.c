#include "common.h"

extern u8 D_1711A8[];

/* Raises a flag byte of D_1711A8 when the byte at 0x16 is set. */
void func_L00_00696418(void) {
    if (D_1711A8[0x16] != 0) {
        D_1711A8[0x11] = 1;
    }
}
