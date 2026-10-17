#include "common.h"

extern void func_L00_007107F0(void);

// Run func_L00_007107F0, then copy the fields at +0x40..+0x5C of src into dest
// (+0x5C, +0x60, +0x64 as +0x60 plus one, +0x68, +0x6C, +0x70, +0xA0..+0xA8)
// and the byte at +0x60 into +0x74.
void func_L00_00714400(void *dest, void *src) {
    s32 value;
    func_L00_007107F0();
    *(s32 *)((u8 *)dest + 0x5C) = *(s32 *)((u8 *)src + 0x40);
    value = *(s32 *)((u8 *)src + 0x44);
    *(s32 *)((u8 *)dest + 0x60) = value;
    *(s32 *)((u8 *)dest + 0x64) = value + 1;
    *(s32 *)((u8 *)dest + 0x68) = *(s32 *)((u8 *)src + 0x48);
    *(s32 *)((u8 *)dest + 0x6C) = *(s32 *)((u8 *)src + 0x4C);
    *(s32 *)((u8 *)dest + 0x70) = *(s32 *)((u8 *)src + 0x50);
    *(s32 *)((u8 *)dest + 0xA0) = *(s32 *)((u8 *)src + 0x54);
    *(s32 *)((u8 *)dest + 0xA4) = *(s32 *)((u8 *)src + 0x58);
    *(s32 *)((u8 *)dest + 0xA8) = *(s32 *)((u8 *)src + 0x5C);
    *(u8 *)((u8 *)dest + 0x74) = *(u8 *)((u8 *)src + 0x60);
}
