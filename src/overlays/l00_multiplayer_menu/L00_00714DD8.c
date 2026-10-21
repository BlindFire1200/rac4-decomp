#include "common.h"

// Store arg1 clamped to [+0x74, +0x78] at +0x70.

typedef struct Type1 {
    char _p0[0x70];
    s32 f70;
    s32 f74;
    s32 f78;
} Type1;

void func_L00_00714DD8(Type1 *arg0, s32 arg1) {
    if (arg1 > arg0->f78) {
        arg1 = arg0->f78;
    }
    if (arg1 < arg0->f74) {
        arg1 = arg0->f74;
    }
    arg0->f70 = arg1;
}
