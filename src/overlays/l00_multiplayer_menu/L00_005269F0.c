#include "common.h"

// Return +0x14, or 0 for a null object.

typedef struct Type1 {
    char _p0[0x14];
    s32 f14;
} Type1;

s32 func_L00_005269F0(Type1 *arg0) {
    if (arg0 == 0) {
        return 0;
    }
    return arg0->f14;
}
