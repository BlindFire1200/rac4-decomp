#include "common.h"

s32 func_15DB80(s32, s32);
s32 func_L00_007756D8(s32);
s32 func_L00_00775778(s32, s32, s32, s32);
s32 func_L00_00773C70(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    if (*(u8 *)((u8 *)arg0 + 0x7A) == 0) {
        temp_s0 = func_L00_007756D8(*(s32 *)((u8 *)arg0 + 0x30));
        *(s32 *)((u8 *)arg0 + 0x58) = func_L00_00775778(func_15DB80(0x34, *(s32 *)((u8 *)arg0 + 0x30)), temp_s0, arg1, arg2);
        *(s32 *)((u8 *)arg0 + 0x2C) -= temp_s0;
        *(s32 *)((u8 *)arg0 + 0x30) += temp_s0;
        *(u8 *)((u8 *)arg0 + 0x7A) = 1;
    }
    return *(s32 *)((u8 *)arg0 + 0x58);
}
