#include "common.h"

// Set pvar+0x4 to 30 when the moby exists.

typedef struct Type2 {
    s32 f0;
    s32 f4;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

void func_L08_004CFFC0(Type1 *arg0) {
    if (arg0 != 0) {
        arg0->fAC->f4 = 30;
    }
}
