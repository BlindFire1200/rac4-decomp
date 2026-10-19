/* Not matching yet: BYTES 12/140 (tools/try_func.py func_L05_00490F70 --diff). Not part of the build. */
#include "common.h"
extern s32 D_00396BD0[];
extern void func_L05_00491000(void *);
extern void func_L05_004910E0(void *, s32);
s32 func_L05_00490F70(void *arg0) {
    u8 *state = *(u8 **)(arg0 + 0xAC);
    s32 *p = (s32 *)((u8 *)D_00396BD0 + 0xC60 + 99 * 0x20);
    s32 i;
    *(u16 *)(state + 0xEA) = 7;
    *(s32 *)(state + 0x268) = 0;
    for (i = 99; i >= 0; i--) { *p = 0; p -= 8; }
    *(u16 *)(arg0 + 0x34) |= 4;
    if (*(u8 *)(state + 0x1A8) && *(u8 *)(state + 0x1A9)) func_L05_00491000(arg0);
    else func_L05_004910E0(arg0, 1);
    return 1;
}
