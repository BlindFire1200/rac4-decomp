#include "common.h"

void *func_00549B18(s32);
s32 func_00549C18(void);

/* Validate index and loop clearing bytes */
s32 func_0054A038(s32 arg0, s32 arg1) {
    s32 counter;
    u8 *ptr;
    void *temp;

    if ((u32)(arg1 - 1) >= 6) {
        return 0;
    }

    if (func_00549C18() == 0) {
        return 0;
    }

    temp = func_00549B18(arg1);
    ptr = (u8 *)arg0 + (*(u8 *)((u8 *)temp + 0x8) * 0x44);

    for (counter = 1; counter >= 0; counter--) {
        if (*((u8 *)ptr + 0xA6C) == arg1) {
            *((u8 *)ptr + 0xA6C) = 0;
        }
        ptr += 4;
    }

    return 1;
}
