#include "common.h"
extern void *func_L00_005BD3C0(s32);
extern s32 func_L00_0066D220(s32, s32, void *);
extern s32 func_L00_0066D2C8(s32, s32, void *, s32);
void func_L07_0049A3A0(void *arg0) {
    u8 *state = *(u8 **)(arg0 + 0xAC);
    s32 active = 0;
    void *info = func_L00_005BD3C0(*(s16 *)(state + 0x28));
    if (info && arg0 == *(void **)((u8 *)info + 0x1C)) active = *(u8 *)((u8 *)info + 0x10) != 0;
    if (!active) {
        if (*(s16 *)(arg0 + 0xBC) == 0x2490)
            *(s32 *)(state + 0x28) = func_L00_0066D220(0, 4, arg0);
        else
            *(s32 *)(state + 0x28) = func_L00_0066D2C8(1, 4, arg0, 0x2490);
    }
}
