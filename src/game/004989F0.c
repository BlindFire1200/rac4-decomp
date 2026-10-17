#include "common.h"

extern s32 func_00498918(s32, s32);
s32 func_004989F0(s32 arg0) {
    s32 a0, a1;
    switch (arg0 - 1) {
    case 0: a0 = 10; a1 = 2; break;
    case 1: a0 = 0; a1 = 0; break;
    case 2: a0 = 0; a1 = 3; break;
    case 3: a0 = 4; a1 = 0; break;
    case 4: a0 = 5; a1 = 0; break;
    case 5: a0 = 3; a1 = 1; break;
    case 6: a0 = 2; a1 = 1; break;
    case 7: a0 = 6; a1 = 0; break;
    default: a0 = 4; a1 = 3; break;
    }
    return func_00498918(a0, a1);
}
