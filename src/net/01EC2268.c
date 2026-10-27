/* cflags: */
#include "common.h"

extern s32 D_00169510_[];
#define D_00169510 (D_00169510_[0])

/* Stores the word at D_00169510 through the pointer argument and returns 0. */
s32 func_01EC2268(s32 *arg0) {
    *arg0 = D_00169510;
    return 0;
}
