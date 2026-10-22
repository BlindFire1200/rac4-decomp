#include "common.h"

extern void func_00453608(void *p, s32 v, s32 n);
extern u8 D_0030A160[];
extern s32 D_0021EDD4;
extern s32 D_0021EDD8;
extern s8 D_003D93D4[];

/* Registers the 0x40-byte block D_0030A160 with func_00453608, then clears the flag byte D_003D93D4 if either setup flag D_0021EDD4 or D_0021EDD8 is set. */
void func_004B7D10(void) {
    func_00453608(D_0030A160, 0, 0x40);
    if (D_0021EDD4 != 0 || D_0021EDD8 != 0) {
        D_003D93D4[0] = 0;
    }
}
