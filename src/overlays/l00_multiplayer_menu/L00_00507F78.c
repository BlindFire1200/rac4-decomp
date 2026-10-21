#include "common.h"

// Store arg1 at +0x10, clearing +0x8 when it changes.

typedef struct Type1 {
    char _p0[0x8];
    s32 f8;
    char _pC[0x10 - 0xC];
    s32 f10;
} Type1;

void func_L00_00507F78(Type1 *arg0, s32 arg1) {
    if (arg0->f10 != arg1) {
        arg0->f8 = 0;
    }
    arg0->f10 = arg1;
}
