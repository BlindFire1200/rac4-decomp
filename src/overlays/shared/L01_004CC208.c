#include "common.h"

extern s32 func_L01_004CC160(s32);
s32 func_L01_004CC208(u8 *arg0) {
    u8 *entry = *(u8 **)(arg0 + 0xAC);
    s32 result = 1;
    s32 i;
    if (*(s32 *)(entry + 0x2E0) == 0) return 0;
    for (i = 0; i < 2; i++) {
        s32 value = *(s32 *)(entry + 0x28 + i * 4);
        if (value == 0 || func_L01_004CC160(value) == 0) {
            result = 0;
            break;
        }
    }
    if (result == 1) {
        for (i = 0; i < 2; i++) {
            s32 value = *(s32 *)(entry + 0x2C0 + i * 4);
            if (value != 0 && func_L01_004CC160(value) == 0) {
                result = 0;
                break;
            }
        }
    }
    return result;
}
