#include "common.h"

// Reset: +0x0 to -1, +0x24 and the bytes +0x28..+0x2D to 0.

typedef struct Type1 {
    s32 f0;
    char _p4[0x24 - 0x4];
    s32 f24;
    u8 f28;
    u8 f29;
    u8 f2A;
    u8 f2B;
    u8 f2C;
    u8 f2D;
} Type1;

Type1 *func_L00_00765208(Type1 *arg0) {
    arg0->f24 = 0;
    arg0->f0 = -1;
    arg0->f28 = 0;
    arg0->f29 = 0;
    arg0->f2A = 0;
    arg0->f2B = 0;
    arg0->f2C = 0;
    arg0->f2D = 0;
    return arg0;
}
