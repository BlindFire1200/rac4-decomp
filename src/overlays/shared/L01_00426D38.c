#include "common.h"

s32 func_L01_006B5028(void *, s32, s32);

// Return whether func_L01_006B5028(object, 0, 0) is nonzero.
s32 func_L01_00426D38(void *object) {
    return func_L01_006B5028(object, 0, 0) != 0;
}
