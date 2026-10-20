#include "common.h"

// True when pvar+0xEC is set (not -1).

typedef struct Type2 {
    char _p0[0xEC];
    s32 fEC;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

s32 func_L41_00411448(Type1 *arg0) {
    return arg0->fAC->fEC != -1;
}
