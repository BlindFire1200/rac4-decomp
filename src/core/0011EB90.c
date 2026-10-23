#include "common.h"

extern s64 func_00126718(s32 arg0, s64 arg1, s32 arg2);

/* Calls the logger with a 64-bit zero id and 10, truncating the result. */
s32 func_0011EB90(s32 a0) {
    return (s32)func_00126718(a0, 0, 0xA);
}
