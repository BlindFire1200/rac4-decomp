#include "common.h"

extern s32 D_00167BC0[];

/* Bounds-checked lookup of a ten-entry table; zero outside the range. */
s32 func_00139AB8(u32 a0) {
    if (a0 > 9) {
        return 0;
    }
    return D_00167BC0[a0];
}
