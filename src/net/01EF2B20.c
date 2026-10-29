#include "common.h"

// Returns 1 when the word at +0x144 is nonzero and the word at +0x10 is nonzero, else 0.
s32 func_01EF2B20(void *arg0) {
    s32 r;

    r = 0;
    if (*(s32 *)((u8 *)arg0 + 0x10) != 0) {
        r = *(s32 *)((u8 *)arg0 + 0x144) != 0;
    }
    return r;
}
