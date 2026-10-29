#include "common.h"

extern s32 func_005015B0(s32 arg0, s32 arg1);

// Returns 1 for a1 == 0x10, otherwise tail-calls func_005015B0 with the same arguments.
s32 func_004FF4C0(s32 arg0, s32 arg1) {
    if (arg1 == 0x10) {
        return 1;
    }
    return func_005015B0(arg0, arg1);
}
