#include "common.h"

// Return +0x60 when set, else +0x10 of the object at +0xDC (0 when there is none).

typedef struct Type2 {
    char _p0[0x10];
    s32 f10;
} Type2;

typedef struct Type1 {
    char _p0[0x60];
    s32 f60;
    char _p64[0xDC - 0x64];
    Type2 *fDC;
} Type1;

s32 func_L00_004FFF68(Type1 *arg0) {
    if (arg0 != 0 && arg0->f60 != 0) {
        return arg0->f60;
    }
    if (arg0->fDC == 0) {
        return 0;
    }
    return arg0->fDC->f10;
}
