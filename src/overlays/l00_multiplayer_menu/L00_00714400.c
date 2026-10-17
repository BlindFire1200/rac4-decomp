#include "common.h"

extern void func_L00_007107F0(void);
void func_L00_00714400(void *arg0, void *arg1) {
    s32 value;
    func_L00_007107F0();
    *(s32 *)((u8 *)arg0 + 0x5C) = *(s32 *)((u8 *)arg1 + 0x40);
    value = *(s32 *)((u8 *)arg1 + 0x44);
    *(s32 *)((u8 *)arg0 + 0x60) = value;
    *(s32 *)((u8 *)arg0 + 0x64) = value + 1;
    *(s32 *)((u8 *)arg0 + 0x68) = *(s32 *)((u8 *)arg1 + 0x48);
    *(s32 *)((u8 *)arg0 + 0x6C) = *(s32 *)((u8 *)arg1 + 0x4C);
    *(s32 *)((u8 *)arg0 + 0x70) = *(s32 *)((u8 *)arg1 + 0x50);
    *(s32 *)((u8 *)arg0 + 0xA0) = *(s32 *)((u8 *)arg1 + 0x54);
    *(s32 *)((u8 *)arg0 + 0xA4) = *(s32 *)((u8 *)arg1 + 0x58);
    *(s32 *)((u8 *)arg0 + 0xA8) = *(s32 *)((u8 *)arg1 + 0x5C);
    *(u8 *)((u8 *)arg0 + 0x74) = *(u8 *)((u8 *)arg1 + 0x60);
}
