#include "common.h"

// Clears pvar+0xC when it is set.

typedef struct Type2 {
    char _p0[0xC];
    u8 fC;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

void func_L05_003E1FB8(Type1 *arg0) {
    Type2 *p = arg0->fAC;

    if (p->fC != 0) {
        p->fC = 0;
    }
}
