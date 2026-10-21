#include "common.h"

extern s16 D_00171B50_[];
#define D_00171B50 (D_00171B50_[0])

// Check if global value modulo 5 is 0
s32 func_L00_005736E8(void) {
    return (D_00171B50 % 5) == 0;
}
