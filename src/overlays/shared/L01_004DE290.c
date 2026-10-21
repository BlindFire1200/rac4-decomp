#include "common.h"
extern u8 *D_00222D14;
extern u8 *D_00222D2C;

void func_L01_004DE290(void) {
    u8 *entry = D_00222D14;
    while (entry < D_00222D2C) {
        if (*(s16 *)(entry + 0xBC) == 0x2112) {
            u8 *item = *(u8 **)(entry + 0xAC);
            u8 *end = item + 0x120;
            do {
                s16 value = *(s16 *)(item + 0x50);
                if (value != -1 || *(s32 *)(item + 0x54) != value) {
                    *(u8 *)(item + 0x72) = 0xA;
                }
                item += 0x24;
            } while ((s32)item < (s32)end);
        }
        entry += 0x100;
    }
}
