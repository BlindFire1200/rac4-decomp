#include "common.h"

extern void func_00453608(void *p, s32 v, s32 n);
extern u8 D_003093C8[0xD0];
extern u32 D_002216E0;

/* Clears the 0xD0-byte buffer at 0x3093C8 and zeroes the flag word D_002216E0. */
void func_004AF890(void) {
    func_00453608(D_003093C8, 0, 0xD0);
    func_00453608(&D_002216E0, 0, 4);
}
