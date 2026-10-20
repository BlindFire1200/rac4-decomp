#include "common.h"

// Return func_004FB210() for arg0 == 2, else 0.

extern s32 func_004FB210(void);

s32 func_L00_004FBD60(s32 arg0) {
    if (arg0 != 2) {
        return 0;
    }
    return func_004FB210();
}
