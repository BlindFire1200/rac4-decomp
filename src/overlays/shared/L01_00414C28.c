#include "common.h"

// True for no moby, a moby without flag 0x4000 in +0x34, or one of class 0x1F8C.

typedef struct Type1 {
    char _p0[0x34];
    u16 f34;
    char _p36[0xBC - 0x36];
    s16 fBC;
} Type1;

s32 func_L01_00414C28(Type1 *arg0) {
    s32 r = 0;

    if (arg0 == 0 || !(arg0->f34 & 0x4000) || arg0->fBC == 0x1F8C) {
        r = 1;
    }
    return r;
}
