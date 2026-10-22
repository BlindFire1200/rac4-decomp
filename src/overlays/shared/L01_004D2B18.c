#include "common.h"

// Return whether the object looked up for the type halfword at +0xBC has kind 1.
extern s32 func_00588670(s32 arg0, s32 arg1, s32 arg2);

s32 func_L01_004D2B18(u8 *object) {
    s32 *found;

    found = func_00588670(*(s16 *)(object + 0xBC), 6, 0xD0);
    if (found != 0) {
        if (*found == 1) {
            return 1;
        }
    }
    return 0;
}
