#include "common.h"
s32 func_0011EB70(u8 *);
f32 func_00131628(s32);

u8 *func_004FDC78(u8 *arg0, f32 *arg1) {
    s32 c;

    *arg1 = func_00131628(func_0011EB70(arg0));
    while (c = *arg0, (u32)(c - '0') < 10 || (u8)c == '.' || (u8)c == '-') {
        arg0++;
    }
    return arg0;
}
