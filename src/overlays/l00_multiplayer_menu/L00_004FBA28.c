#include "common.h"

// Write bytes 2, 1, 0 of +0x8 to arg1[0..2] (when given) and return 3.

typedef struct Type1 {
    char _p0[0x8];
    s64 f8;
} Type1;

s32 func_L00_004FBA28(Type1 *arg0, u8 *arg1) {
    s64 v;

    if (arg1 != 0) {
        v = arg0->f8;
        arg1[0] = v >> 16;
        arg1[1] = v >> 8;
        arg1[2] = v;
    }
    return 3;
}
