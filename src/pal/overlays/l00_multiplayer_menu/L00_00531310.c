#include "common.h"

extern s32 func_003FD5F8();

// Returns 0x21B when arg0 is set and func_003FD5F8() is non-zero, else 0.
s32 func_L00_00531310(s32 arg0) {
    s32 result = 0;
    if (arg0 != 0) {
        result = func_003FD5F8() == 0 ? 0 : 0x21B;
    }
    return result;
}
