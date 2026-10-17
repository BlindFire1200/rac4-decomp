#include "common.h"

void func_L00_007410B8(void *);

// Update the selection state at +0x265, +0x266 and +0x26C from the two
// parameters and the current +0x265 flag: it is cleared, started at index 1, or
// moved on modulo the count at +0x270 (+0x266 records whether the index wrapped
// to 1). Then run func_L00_007410B8.
void func_L00_00741760(void *object, s32 param_a, s32 param_b) {
    u8 *p = (u8 *)object;
    s32 count = param_a;
    s32 next;
    if (p[0x265] == 0) goto flag_off;
    if (param_b != 0) goto common;
    goto clear;
flag_off:
    if (param_b != 0) {
        p[0x266] = 0;
        *(s32 *)(p + 0x26C) = 1;
        p[0x265] = 1;
        goto call;
    }
common:
    if (count == 0) {
        if (p[0x266] == 0) goto call;
        goto clear;
    }
    count = *(s32 *)(p + 0x270);
    p[0x265] = 0;
    next = (*(s32 *)(p + 0x26C) + 1) % count;
    *(s32 *)(p + 0x26C) = next;
    p[0x266] = (u8)(next == 1);
    goto call;
clear:
    *(s32 *)(p + 0x26C) = 0;
    p[0x265] = 0;
    p[0x266] = 0;
call:
    func_L00_007410B8(object);
}
