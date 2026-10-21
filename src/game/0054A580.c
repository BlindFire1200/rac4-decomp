#include "common.h"

void func_00549D20(s32, u8, s32, s32);

/* Loop checking and clearing bytes */
s32 func_0054A580(s32 arg0, s32 arg1, s32 arg2) {
    s32 counter;
    u8 *ptr;
    s32 temp;
    s32 result = 0;

    ptr = (u8 *)arg0 + (arg1 * 0x44);

    for (counter = 9; counter >= 0; counter--) {
        temp = *(u8 *)((u8 *)ptr + 0xA44);
        if (temp > 0) {
            *(u8 *)((u8 *)ptr + 0xA44) = 0;
            if (arg2 != 0) {
                func_00549D20(arg0, (u8)temp, -1, 0);
            }
            result = 1;
        }
        ptr += 4;
    }

    return result;
}
