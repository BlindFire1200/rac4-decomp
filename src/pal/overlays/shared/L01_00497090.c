/* cflags: -mno-split-addresses */
#include "common.h"

extern s32 func_L01_00553130(void *, void *, void *, void *, void *, s32, s32);
extern u8 D_00222C20[];

// Runs func_L01_00553130 on the object (position +0x10, rotation +0xF0, and the address of the
// argument itself) and sets the linked object's halfword at +0x4D4 to 100.
void func_L01_00497090(void *arg0) {
    u8 *obj = arg0;
    u8 *linked = *(u8 **)(obj + 0xAC);
    func_L01_00553130(D_00222C20, obj, obj + 0x10, obj + 0xF0, &arg0, 1, 0);
    *(s16 *)(linked + 0x4D4) = 0x64;
}
