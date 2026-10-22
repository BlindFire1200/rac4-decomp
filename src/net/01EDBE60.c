#include "common.h"

extern s32 (*D_001BCA74[])(s32, s32);
extern s32 D_001BC87C[];

/* Loads the optional net callback, calls it with the fourth argument and the word at D_001BC87C, and returns 0xBC (188). */
s32 func_01EDBE60(s32 param1, s32 param2, s32 param3, s32 param4) {
    if (D_001BCA74[0] != 0) {
        D_001BCA74[0](param4, D_001BC87C[0]);
    }
    return 0xBC;
}
