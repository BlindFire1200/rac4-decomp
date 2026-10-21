#include "common.h"

extern s32 func_0077B9C0(s32);
extern void func_0077BA28(s32, s32, s32, s32);

// Once (flag +0x6C clear): take an amount from the +0x2C pool into +0x30 and
// pass it with param to func_0077BA28, then raise the flag.
void func_L00_00773E30(void *object, s32 param) {
    s32 value;
    if (*(u8 *)((u8 *)object + 0x6C) != 0) return;
    value = func_0077B9C0(*(s32 *)((u8 *)object + 0x30));
    func_0077BA28(*(s32 *)((u8 *)object + 0x68), *(s32 *)((u8 *)object + 0x30), value, param);
    *(u8 *)((u8 *)object + 0x6C) = 1;
    *(s32 *)((u8 *)object + 0x2C) -= value;
    *(s32 *)((u8 *)object + 0x30) += value;
}
