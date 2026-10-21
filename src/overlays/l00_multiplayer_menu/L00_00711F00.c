#include "common.h"

// True when +0x14A8 and +0x14AC differ.

typedef struct Type1 {
    char _p0[0x14A8];
    s32 f14A8;
    s32 f14AC;
} Type1;

s32 func_L00_00711F00(Type1 *arg0) {
    return arg0->f14A8 != arg0->f14AC;
}
