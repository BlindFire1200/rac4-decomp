#include "common.h"

extern s32 func_0047D4E8(void);
extern u8 D_00171B80[];

/* Sets a flag in the object returned by func_0047D4E8 and in an array. */
void func_0047D368(s32 arg0) {
    s32 ptr;

    ptr = func_0047D4E8();
    *(u8 *)(ptr + arg0 + 0x1F4) = 1;
    D_00171B80[arg0] = 1;
}
