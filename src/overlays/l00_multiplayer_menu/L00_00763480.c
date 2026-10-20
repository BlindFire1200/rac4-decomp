#include "common.h"

// Copy 20 bytes from arg1 to +0x260.

typedef struct Type1 {
    char _p0[0x260];
    u8 f260[20];
} Type1;

void func_L00_00763480(Type1 *arg0, u8 *arg1) {
    s32 i;

    for (i = 0; i < 20; i++) {
        arg0->f260[i] = arg1[i];
    }
}
