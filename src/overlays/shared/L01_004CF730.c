#include "common.h"

extern u8 *D_00222D14;
extern u8 *D_00222D30;
s32 func_L01_004CF730(void) {
    s32 count = 0;
    u8 *entry = D_00222D14;
    while (entry != D_00222D30) {
        if (*(s16 *)(entry + 0xBC) == 0x2075) {
            u8 *object = *(u8 **)(entry + 0xAC);
            if ((*(u64 *)(object + 0x2D8) & (((u64)0xFF00 << 16) | 0xFF00) << 32) == 0 && object[0x2E4] == 0xA) {
                count++;
            }
        }
        entry += 0x100;
    }
    return count;
}
