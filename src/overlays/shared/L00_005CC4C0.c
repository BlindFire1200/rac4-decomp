#include "common.h"

extern void func_L00_006701A8(void *, void *, s32);
extern u8 D_00245580[];

void func_L00_005CC4C0(void) {
    s32 i;
    for (i = 0; i < 8; i++) {
        u8 *row = D_00245580 + i * 0x30;
        if (*(s32 *)(row + 0x10) != 0) {
            u8 *base = *(u8 **)(row + 0xC);
            if (base != 0) {
                u8 *start = base + *(s16 *)(row + 8) * 2;
                func_L00_006701A8(start, start + *(s16 *)(row + 0xA) * 2, i);
                *(s16 *)(row + 8) = 0;
                *(s16 *)(row + 0xA) = 0;
            }
        }
    }
}
