#include "common.h"
s32 func_0011A518(void *, s32, s32);
s32 func_0011AB04(s32);
void func_L00_005C1758(void *, s32, s32);
void func_L00_0076E478(void *, s32);
void func_L00_0076DC88(void *object, s32 text, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    void *buffer = (u8 *)object + 0x20;
    func_0011A518(buffer, 0, 0xAC);
    func_L00_005C1758(buffer, text, func_0011AB04(text));
    *(s32 *)((u8 *)object + 0xBC) = arg2;
    *(s32 *)((u8 *)object + 0x14) = arg3;
    *(s32 *)((u8 *)object + 0x18) = arg4;
    *(s32 *)((u8 *)object + 0xCC) = arg5;
    *(s32 *)((u8 *)object + 0xD0) = arg6;
    func_L00_0076E478(object, 5);
}
