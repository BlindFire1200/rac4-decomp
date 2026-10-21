#include "common.h"

// Copy the 20 bytes at +0x260 to arg1.

typedef struct Type1 {
    char _p0[0x260];
    u8 f260[20];
} Type1;

void func_L00_007634B0(Type1 *arg0, u8 *arg1) {
    s32 i;

    for (i = 0; i < 20; i++) {
        arg1[i] = arg0->f260[i];
    }
}
