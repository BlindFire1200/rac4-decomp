#include "common.h"
extern s32 func_15DB80(s32, s32);
extern s32 func_L00_00772AA0(s32, s32, s32);
extern s32 func_L00_00772BC8(s32);
s32 func_L00_00773BE0(void *arg0, s32 arg1) {
    s32 amount;
    if (*((u8 *)arg0 + 0x79) == 0) {
        amount = func_L00_00772BC8(*(s32 *)((u8 *)arg0 + 0x30));
        *(s32 *)((u8 *)arg0 + 0x54) = func_L00_00772AA0(func_15DB80(0x28, *(s32 *)((u8 *)arg0 + 0x30)), amount, arg1);
        *(s32 *)((u8 *)arg0 + 0x2C) -= amount;
        *(s32 *)((u8 *)arg0 + 0x30) += amount;
        *((u8 *)arg0 + 0x79) = 1;
    }
    return *(s32 *)((u8 *)arg0 + 0x54);
}
