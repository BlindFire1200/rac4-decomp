#include "common.h"

extern s32 func_00126FB0(s32 arg0);

/* Reports whether flag 0x10000 is set for device 4. */
s32 func_0012CD88(void) {
    if (func_00126FB0(4) & 0x10000) {
        return 1;
    } else {
        return 0;
    }
}
