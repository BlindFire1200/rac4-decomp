#include "common.h"

extern void func_L01_00574B48(u16, s32);
extern u16 D_00222D3C;
extern s32 D_0021DE40;
extern u8 D_0024F220[];

// Walks the list of 0x30-byte entries from D_00222D3C (end 0x801) and calls func_L01_00574B48 on
// each one whose +0x24 value plus 150 is below D_0021DE40; returns 1.
s32 func_L01_005768F8(void) {
    u16 i = D_00222D3C;

    while (i != 0x801) {
        u8 *e = D_0024F220 + i * 0x30;
        s32 now = D_0021DE40;
        u16 next = *(u16 *)(e + 0x28);
        if (now >= 0x97 && *(u16 *)(e + 0x24) + 0x96 < now) {
            func_L01_00574B48(i, now);
        }
        i = next;
    }
    return 1;
}
