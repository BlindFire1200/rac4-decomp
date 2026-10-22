#include "common.h"

extern s32 func_0058FF08(s32 a0);

// Looks up entry (arg0 - 1) and returns it, or one more when that entry is at least arg1.
s32 func_L01_00501170(s32 arg0, s32 arg1) {
    s32 r = func_0058FF08(arg0 - 1);
    if (r >= arg1) {
        r = r + 1;
    }
    return r;
}
