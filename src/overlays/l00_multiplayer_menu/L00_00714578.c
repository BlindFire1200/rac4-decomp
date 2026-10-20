#include "common.h"

// Set the value +0x60 to arg1 clamped to [+0x68, +0x6C] (0 for arg1 0 in mode 1) and copy it to +0x64.

typedef struct Type1 {
    char _p0[0x60];
    s32 f60;
    s32 f64;
    s32 f68;
    s32 f6C;
    char _p70[0x74 - 0x70];
    u8 f74;
} Type1;

void func_L00_00714578(Type1 *arg0, s32 arg1) {
    if (arg1 == 0 && arg0->f74 == 1) {
        arg0->f60 = 0;
    } else if (arg0->f6C < arg1) {
        arg0->f60 = arg0->f6C;
    } else if (arg1 < arg0->f68) {
        arg0->f60 = arg0->f68;
    } else {
        arg0->f60 = arg1;
    }
    arg0->f64 = arg0->f60;
}
