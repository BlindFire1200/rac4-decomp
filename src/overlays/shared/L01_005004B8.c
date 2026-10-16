#include "common.h"
extern void *func_L00_005DEBD0(s32, s32, s32);
extern void func_L01_00591BD8(void *, s32, s32);
extern u8 *D_00222D14;

void func_L01_005004B8(void *arg0) {
    u8 *state = *(u8 **)((u8 *)arg0 + 0xAC);
    u8 *object;
    *(u16 *)((u8 *)arg0 + 0x34) &= 0xEFFF;
    *(s32 *)state = 0;
    object = D_00222D14 + (*(s32 *)(state + 0x1C0) << 8);
    *(u8 **)(state + 0x1D8) = object;
    *(void **)(state + 0x204) = func_L00_005DEBD0(*(s16 *)(object + 0xBC), 0, 0x48);
    if (*(s32 *)(state + 0x1D4) == -1) {
        s32 value = *(s32 *)(state + 0x140);
        if (value != -1) *(s32 *)(state + 0x1D4) = value;
    }
    func_L01_00591BD8(arg0, 2, -1);
}
