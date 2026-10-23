#include "common.h"

extern u8 D_003DDB28[];

/* Word at arg0 * 0x28 + arg1 * 4 in the table at D_003DDB28. */
s32 func_0054A268(s32 arg0, s32 arg1) {
    s32 offset = arg1 * 4;

    offset += arg0 * 0x28;
    return *(s32 *)(D_003DDB28 + offset);
}
