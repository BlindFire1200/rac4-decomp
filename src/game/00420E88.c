#include "common.h"

extern s32 func_004259E0(void);

/* Calls func_004259E0 if arg0 is non-zero, returns 0 otherwise */
s32 func_00420E88(s32 arg0) {
    if (arg0 == 0) {
        return 0;
    }
    return func_004259E0();
}
