#include "common.h"

extern s32 func_L01_004CC160(s32);
// Return 1 when the linked +0xAC object is ready: its +0x2E0 word is set, both
// required slots at +0x28 pass func_L01_004CC160, and each optional slot at
// +0x2C0 that is set passes too. Otherwise 0.
s32 func_L01_004CC208(u8 *object) {
    u8 *linked = *(u8 **)(object + 0xAC);
    s32 result = 1;
    s32 i;
    if (*(s32 *)(linked + 0x2E0) == 0) return 0;
    for (i = 0; i < 2; i++) {
        s32 value = *(s32 *)(linked + 0x28 + i * 4);
        if (value == 0 || func_L01_004CC160(value) == 0) {
            result = 0;
            break;
        }
    }
    if (result == 1) {
        for (i = 0; i < 2; i++) {
            s32 value = *(s32 *)(linked + 0x2C0 + i * 4);
            if (value != 0 && func_L01_004CC160(value) == 0) {
                result = 0;
                break;
            }
        }
    }
    return result;
}
