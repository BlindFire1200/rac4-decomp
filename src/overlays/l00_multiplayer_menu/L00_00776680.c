#include "common.h"

// Clear the bytes +0x0, +0x14C and +0x1C0 and return the object.

typedef struct Type1 {
    u8 f0;
    char _p1[0x14C - 0x1];
    u8 f14C;
    char _p14D[0x1C0 - 0x14D];
    u8 f1C0;
} Type1;

Type1 *func_L00_00776680(Type1 *arg0) {
    arg0->f0 = 0;
    arg0->f14C = 0;
    arg0->f1C0 = 0;
    return arg0;
}
