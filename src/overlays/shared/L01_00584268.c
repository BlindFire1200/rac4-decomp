#include "common.h"

extern s32 func_L00_00696490(s32, s32);
extern s32 func_L01_006534A8();

// Compares the current value with the argument: equal returns 1, otherwise the argument is forwarded with flag 1.
s32 func_L01_00584268(s32 arg0) {
    if (func_L01_006534A8() == arg0) {
        return 1;
    }
    return func_L00_00696490(arg0, 1);
}
