#include "common.h"

extern s32 func_00453CE8(void *);
extern void func_004915B0(void *);
extern void func_004EEDC8(void *, void *, s32);

// Unless func_00453CE8 on the block at +0x20 returns non-zero (then it calls func_004915B0), calls
// func_004EEDC8 on +0x10, adds the block's float at +0x4 to the float at +0xC and, while the
// block's first word is below 5, sets the top byte of +0x4 to n * 127 / 5.
void func_L00_0060C6D0(u8 *arg0) {
    s32 *timer = (s32 *)(arg0 + 0x20);
    s32 t;

    if (func_00453CE8(timer) != 0) {
        func_004915B0(arg0);
        return;
    }
    func_004EEDC8(arg0 + 0x10, arg0 + 0x10, 0);
    t = timer[0];
    *(f32 *)(arg0 + 0xC) = *(f32 *)(arg0 + 0xC) + *(f32 *)&timer[1];
    if (t < 5) {
        *(s32 *)(arg0 + 4) = (*(s32 *)(arg0 + 4) & 0xFFFFFF) | (((t * 0x7F) / 5) << 24);
    }
}
