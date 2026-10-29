#include "common.h"

extern s32 D_229C80_[];
#define D_229C80 (D_229C80_[0])

/* Initializes a field in a global array entry. */
void func_0043CF28(s32 arg0) {
    s32 *base = (s32 *)((u32)&D_229C80 + arg0 * 0x470);
    *(s32 *)((u8 *)base + 0x460) = 0;
}
