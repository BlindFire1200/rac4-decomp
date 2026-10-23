#include "common.h"

extern s32 func_00453CE8(void *);
extern void func_004915B0(void *);

// When func_00453CE8 on the block at +0x20 returns 0, adds the block's float at +0x4 to the float
// at +0xC and, while the block's first word is below 5, sets the top byte of +0x4 to n * 127 / 5;
// otherwise calls func_004915B0.
void func_L00_0060D020(u8 *arg0) {
    s32 *timer = (s32 *)(arg0 + 0x20);
    s32 t;

    if (func_00453CE8(timer) != 0) {
        func_004915B0(arg0);
        return;
    }
    t = timer[0];
    *(f32 *)(arg0 + 0xC) = *(f32 *)(arg0 + 0xC) + *(f32 *)&timer[1];
    if (t < 5) {
        *(s32 *)(arg0 + 4) = (*(s32 *)(arg0 + 4) & 0xFFFFFF) | (((t * 0x7F) / 5) << 24);
    }
}
