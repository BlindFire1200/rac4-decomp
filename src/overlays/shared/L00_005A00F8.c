/* cflags: -mno-split-addresses */
#include "common.h"

extern s32 func_L00_005A0158(s32);

extern s32 *D_0021DDA4_[];
#define D_0021DDA4 (D_0021DDA4_[0])

/* Walks the registered list; returns 1 as soon as one entry reports activity */
s32 func_L00_005A00F8(void) {
    s32 i = 0;

    while (i < *D_0021DDA4) {
        if (func_L00_005A0158(i) != 0) {
            return 1;
        }
        i++;
    }
    return 0;
}
