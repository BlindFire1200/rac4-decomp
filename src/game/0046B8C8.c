#include "common.h"

extern void func_00453608(void *p, s32 v, s32 n);
extern char D_002426D8[];

s32 D_0021F1A0 = 0;

/* Clears the 0x80-byte block at D_002426D8, then resets the global flag D_0021F1A0. */
void func_0046B8C8(void) {
    func_00453608((void *)D_002426D8, 0, 0x80);
    D_0021F1A0 = 0;
}
