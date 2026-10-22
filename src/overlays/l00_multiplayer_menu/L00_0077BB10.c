#include "common.h"

extern u8 D_00191F01[];

// For each character of a NUL-terminated byte string, subtract 0x20 when the
// character's entry in the table at 0x191F01 has bit 0x02 set, else keep it.
void func_L00_0077BB10(s32 arg0, u8 *str) {
    u8 *p = str;
    u8 c;
    s32 out;

    while (*p != 0) {
        c = *p;
        out = c - 0x20;
        if ((D_00191F01[c] & 2) == 0) {
            out = c;
        }
        *p = out;
        p += 1;
    }
}
