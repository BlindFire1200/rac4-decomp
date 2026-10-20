#include "common.h"

// Add arg1 to +0x40.

typedef struct Type1 {
    char _p0[0x40];
    s32 f40;
} Type1;

s32 func_L00_00528554(Type1 *arg0, s32 arg1) {
    arg0->f40 += arg1;
    return 0;
}
