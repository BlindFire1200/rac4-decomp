#include "common.h"

s32 D_00220910 = 0;

// Stores two fields of arg0 and returns 1.
s32 func_004F0A70(void *arg0, s32 arg1, s32 arg2) {
    s32 *p = (s32 *)arg0;
    D_00220910 = 0;
    p[2] = arg1;
    p[0] = arg2;
    return 1;
}
