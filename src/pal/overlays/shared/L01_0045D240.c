/* cflags: -mno-split-addresses */
#include "common.h"

extern s32 func_L01_00553130(void *, void *, void *, void *, void *, s32, s32);
extern u8 D_00222C20[];

// Runs func_L01_00553130 on the object (position +0x10, rotation +0xF0, linked +0x5F0) and sets
// the linked object's halfword at +0x60E to 100.
void func_L01_0045D240(void *arg0) {
    u8 *linked = *(u8 **)((u8 *)arg0 + 0xAC);
    func_L01_00553130(D_00222C20, arg0, (u8 *)arg0 + 0x10, (u8 *)arg0 + 0xF0, linked + 0x5F0, 1, 0);
    *(s16 *)(linked + 0x60E) = 0x64;
}
