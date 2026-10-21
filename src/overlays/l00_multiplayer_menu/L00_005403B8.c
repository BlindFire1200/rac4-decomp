#include "common.h"

// Clear +0x0, +0x58 and +0x5C and set +0x4 to 30.

typedef struct Type1 {
    s32 f0;
    s32 f4;
    char _p8[0x58 - 0x8];
    s32 f58;
    s32 f5C;
} Type1;

void func_L00_005403B8(Type1 *arg0) {
    arg0->f5C = 0;
    arg0->f0 = 0;
    arg0->f58 = 0;
    arg0->f4 = 30;
}
