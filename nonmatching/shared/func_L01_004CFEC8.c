/* Not matching yet: BYTES 31/140 (tools/try_func.py func_L01_004CFEC8 --diff). Not part of the build. */
#include "common.h"
extern void func_L00_0066CCE8(void *, s32);
extern void func_L01_00591BD8(void *, s32, s32);
extern s32 D_00220630;
extern s32 D_00172378;
void func_L01_004CFEC8(u8 *object) {
    u8 *linked;
    u8 *entry;
    *(s32 *)(object + 0x98) = 0;
    linked = *(u8 **)(object + 0xAC);
    entry = linked + 0x200;
    *(u16 *)(object + 0x34) = (*(u16 *)(object + 0x34) | 0x41) & 0xEFFF;
    func_L00_0066CCE8(object, 1);
    *(s32 *)(entry + 4) = 1;
    *(s32 *)(entry + 8) = D_00172378;
    *(s32 *)(linked + 0x20C) = 0;
    *(s32 *)(linked + 0x50) = 0;
    *(s32 *)(linked + 0x200) = D_00220630;
    func_L01_00591BD8(object, 6, -1);
}
