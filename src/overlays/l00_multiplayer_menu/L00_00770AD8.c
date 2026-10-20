#include "common.h"

// Store arg1 in slot 0 or 1 of +0x30 (chosen by +0x1C); with no choice (-1) store it in both.

typedef struct Type2 {
    s32 f0;
    char _p4[0xC - 0x4];
} Type2;

typedef struct Type1 {
    char _p0[0x1C];
    s32 f1C;
    char _p20[0x30 - 0x20];
    Type2 f30[2];
} Type1;

void func_L00_00770AD8(Type1 *arg0, s32 arg1) {
    s32 i = 0;

    if (arg0->f1C == -1) {
        arg0->f30[1].f0 = arg1;
    } else {
        i = arg0->f1C == 0;
    }
    arg0->f30[i].f0 = arg1;
}
