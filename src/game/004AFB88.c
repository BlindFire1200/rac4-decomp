#include "common.h"

extern void func_00453608(void *p, s32 v, s32 n);
extern s32 D_3094F8[40];
extern s32 D_00221708;

// Zeroes the 0xA0 byte block D_3094F8 and the 4 byte flag word D_00221708.
void func_004AFB88(void) {
    func_00453608(&D_3094F8[0], 0, 0xA0);
    func_00453608(&D_00221708, 0, 4);
}
