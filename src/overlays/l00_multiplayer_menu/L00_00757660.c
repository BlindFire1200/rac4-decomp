#include "common.h"

// True when +0x298 is clear or func_L00_007575D8 reports at least 2.

typedef struct Type1 {
    char _p0[0x298];
    u8 f298;
} Type1;

extern s32 func_L00_007575D8(Type1 *arg0);

s32 func_L00_00757660(Type1 *arg0) {
    s32 r = 0;

    if (arg0->f298 == 0 || func_L00_007575D8(arg0) >= 2) {
        r = 1;
    }
    return r;
}
