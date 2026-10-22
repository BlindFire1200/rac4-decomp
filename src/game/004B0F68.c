#include "common.h"

extern void func_00453608(void *p, s32 v, s32 n);
extern s32 D_309650[];

/* Zeroes a 0x3C-byte block at D_309650 and then sets the flag word right after it to -1. */
void func_004B0F68(void) {
    s32 *p = D_309650;
    func_00453608(p, 0, 0x3C);
    p[1] = -1;
}
