#include "common.h"

extern s32 *D_0021DDA4;
extern s32 func_L00_005A0158(s32);

s32 func_L00_005A00F8(void) {
    s32 i;
    for (i = 0; i < *D_0021DDA4; i++) {
        if (func_L00_005A0158(i) != 0) return 1;
    }
    return 0;
}
