#include "common.h"

extern void func_00574AC0(s32);
extern void func_L01_00413990(s32, s32);

// Reset the handle at +0x20 of arg2 to -1, releasing it first if it is set.
void func_L01_00413A98(void *arg0, s32 arg1, void *arg2) {
    s32 handle;

    if (*(u8 *)((u8 *)arg0 + 0x20) != 0) {
        func_L01_00413990(arg1, 1);
        handle = *(s32 *)((u8 *)arg2 + 0x20);
        if (handle >= 0) {
            func_00574AC0(handle);
        }
        *(s32 *)((u8 *)arg2 + 0x20) = -1;
    }
}
