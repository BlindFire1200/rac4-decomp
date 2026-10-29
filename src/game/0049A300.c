#include "common.h"

extern u8 D_306D20[];

// Set the byte at offset 1 of the 16-byte record at index arg0 to 1.
void func_0049A300(s32 arg0) {
    u8 *p = D_306D20 + (arg0 << 4);
    p[1] = 1;
}
