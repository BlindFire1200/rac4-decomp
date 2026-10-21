#include "common.h"

// Set pvar+0xC to 1 when it is not 1 already.

typedef struct Type2 {
    char _p0[0xC];
    u8 fC;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

void func_L05_003E1F88(Type1 *arg0) {
    Type2 *p = arg0->fAC;

    if (p->fC != 1) {
        p->fC = 1;
    }
}
