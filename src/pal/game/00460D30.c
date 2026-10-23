#include "common.h"

extern void func_00453E20(void *, s32, s32);

// Clears the four words at the start of the block, zeroes the 0x2328 bytes after them and sets
// the first word of each of the 25 entries (0x168 bytes apart, last one at +0x21D0) to -1.
void func_00460D30(s32 *arg0) {
    s32 *p;
    s32 i;

    arg0[0] = 0;
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0;
    func_00453E20(arg0 + 4, 0, 0x2328);
    p = (s32 *)((u8 *)arg0 + 0x21D0);
    i = 0x18;
    do {
        *p = -1;
        i--;
        p = (s32 *)((u8 *)p - 0x168);
    } while (i >= 0);
}
