#include "common.h"

extern s32 func_15DB80(s32, s32);
extern s32 func_L00_00772AA0(s32, s32, s32);
extern s32 func_L00_00772BC8(s32);

// On the first call (flag +0x79 clear) take an amount from the +0x2C pool into
// +0x30, store the func_L00_00772AA0 result at +0x54 and raise the flag.
// Returns the stored +0x54 value.
s32 func_L00_00773BE0(void *object, s32 param) {
    s32 amount;
    if (*((u8 *)object + 0x79) == 0) {
        amount = func_L00_00772BC8(*(s32 *)((u8 *)object + 0x30));
        *(s32 *)((u8 *)object + 0x54) = func_L00_00772AA0(func_15DB80(0x28, *(s32 *)((u8 *)object + 0x30)), amount, param);
        *(s32 *)((u8 *)object + 0x2C) -= amount;
        *(s32 *)((u8 *)object + 0x30) += amount;
        *((u8 *)object + 0x79) = 1;
    }
    return *(s32 *)((u8 *)object + 0x54);
}
