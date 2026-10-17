#include "common.h"
extern void func_0011AFC8(void *, s32, s32);
void func_L00_0071AE38(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    *(s32 *)((u8 *)arg0 + 4) = arg1;
    *(s32 *)((u8 *)arg0 + 8) = arg2;
    if (arg3 != 0) {
        func_0011AFC8((u8 *)arg0 + 0xC, arg3, 0x33);
        *((u8 *)arg0 + 0x3F) = 0;
    } else *((u8 *)arg0 + 0xC) = 0;
    *(s32 *)((u8 *)arg0 + 0x40) = arg4;
    *(s32 *)arg0 = 0xA;
    if (arg5 != 0) {
        func_0011AFC8((u8 *)arg0 + 0x44, arg5, 0xC7);
        *((u8 *)arg0 + 0x10B) = 0;
    } else *((u8 *)arg0 + 0x44) = 0;
}
