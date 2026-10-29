#include "common.h"

extern void func_00453608(void *p, s32 v, s32 n);

// Clears 0x180 bytes starting at +8, then zeroes the word at +4.
void func_005009B8(void *arg0) {
    func_00453608((u8 *)arg0 + 8, 0, 0x180);
    ((s32 *)arg0)[1] = 0;
}
