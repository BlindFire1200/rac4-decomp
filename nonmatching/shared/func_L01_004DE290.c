/* Not matching yet: BYTES 13/136 (tools/try_func.py func_L01_004DE290 --diff). Not part of the build. */
#include "common.h"
extern u8 *D_00222D14;
extern u8 *D_00222D2C;

void func_L01_004DE290(void) {
    u8 *entry = D_00222D14;
    while (entry < D_00222D2C) {
        if (*(s16 *)(entry + 0xBC) == 0x2112) {
            u8 *linked = *(u8 **)(entry + 0xAC);
            u8 *item = linked;
            s32 end = (s32)(linked + 0x120);
            s16 value = *(s16 *)(item + 0x50);
            do {
                if (value == -1) {
                    if (*(s32 *)(item + 0x54) != value) *(u8 *)(item + 0x72) = 0xA;
                } else {
                    *(u8 *)(item + 0x72) = 0xA;
                }
                item += 0x24;
                value = *(s16 *)(item + 0x50);
            } while ((s32)item < end);
        }
        entry += 0x100;
    }
}
