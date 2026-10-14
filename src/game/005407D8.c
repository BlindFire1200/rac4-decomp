#include "common.h"

void func_00511520(void);
void func_00540858(void *, s32, s32, s32);
extern s32 D_00172170[];

void func_005407D8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 arg2_masked, arg3_masked;

    arg2_masked = arg2 & 0xFF;
    arg3_masked = arg3 & 0xFF;

    if (*(s32 *)((u8 *)arg0 + 0x34) == D_00172170[0]) {
        func_00511520();
    }

    func_00540858(arg0, arg1, arg2_masked, arg3_masked);

    *(s32 *)((u8 *)arg0 + 0x34) = -1;
    *(s32 *)((u8 *)arg0 + 0x4) = -1;
}
