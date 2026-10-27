#include "common.h"

extern u8 D_00172160[];
s8 D_0021DFA4 = 0;

/* Clears the byte D_0021DFA4, then copies the word at +0x218 of the global block to +0x7F4. */
void func_0015CAF8(void) {
    s32 *p;
    D_0021DFA4 = 0;
    p = (s32 *)D_00172160;
    p[0x1FD] = p[0x86];
}
