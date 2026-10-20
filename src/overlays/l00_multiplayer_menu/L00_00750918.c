#include "common.h"

// Store arg1 at +0x260 and arg2 at +0x26C, clear +0x264 and set +0x26E.

typedef struct Type1 {
    char _p0[0x260];
    s32 f260;
    s32 f264;
    char _p268[0x26C - 0x268];
    u8 f26C;
    char _p26D[0x26E - 0x26D];
    u8 f26E;
} Type1;

void func_L00_00750918(Type1 *arg0, s32 arg1, u8 arg2) {
    arg0->f26C = arg2;
    arg0->f26E = 1;
    arg0->f260 = arg1;
    arg0->f264 = 0;
}
