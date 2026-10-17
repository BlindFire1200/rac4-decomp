#include "common.h"

extern s32 func_0077B9C0(s32);
extern void func_0077BA28(s32, s32, s32, s32);
void func_L00_00773E30(void *obj, s32 arg1) {
    s32 value;
    if (*(u8 *)((u8 *)obj + 0x6C) != 0) return;
    value = func_0077B9C0(*(s32 *)((u8 *)obj + 0x30));
    func_0077BA28(*(s32 *)((u8 *)obj + 0x68), *(s32 *)((u8 *)obj + 0x30), value, arg1);
    *(u8 *)((u8 *)obj + 0x6C) = 1;
    *(s32 *)((u8 *)obj + 0x2C) -= value;
    *(s32 *)((u8 *)obj + 0x30) += value;
}
