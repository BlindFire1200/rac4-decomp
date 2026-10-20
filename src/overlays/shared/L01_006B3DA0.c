#include "common.h"

extern u32 D_00222D2C;
extern s32 D_00223E00;
extern void *func_L00_006AA1F0(s32, s32, s32);
extern void *func_L00_005FE7C0(s32);
extern void func_L00_006AA598(void *, s32);

// Allocate an object of kind 6 for arg0 (if in range) and fill its header.
void *func_L01_006B3DA0(u32 arg0, s32 arg1, s32 arg2) {
    u8 *object;

    if (arg0 >= D_00222D2C) {
        return 0;
    }
    object = func_L00_006AA1F0(6, arg1 != -1 ? arg1 : D_00223E00, -1);
    if (object != 0) {
        *(u32 *)(object + 0x18) = arg0;
        *(u16 *)(object + 0x1C) = *(u16 *)(arg0 + 0x34);
        *(s32 *)(object + 0x20) = *(s32 *)((u8 *)func_L00_005FE7C0(arg0) + 8);
        func_L00_006AA598(object, arg0);
        object[0x2C] = arg2;
    }
    return object;
}
