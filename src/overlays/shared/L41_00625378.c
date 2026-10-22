/* cflags: -mno-split-addresses */
#include "common.h"

extern s32 D_0021DFF0;

// Counts how many of the 20 flag bits stored at offset 0x3C of the object pointed to by D_0021DFF0 are set.
s32 func_L41_00625378(void) {
    s32 count = 0;
    s32 i = 0;
    s32 base = D_0021DFF0;
    s32 flags = *(s32 *)(base + 0x3C);

    do {
        s32 mask = 1 << i;
        s32 inc = count + 1;
        s32 bit = flags & mask;
        i++;
        count = (bit != 0) ? inc : count;
    } while (i < 0x14);

    return count;
}
