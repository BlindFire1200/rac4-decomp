#include "common.h"

// Extract field arg0 of arg1: mask and shift from func_L00_0070C418.

extern void func_L00_0070C418(s32 arg0, s32 *arg1, s32 *arg2);

s32 func_L00_0070C490(s32 arg0, s32 arg1) {
    s32 f[2];

    func_L00_0070C418(arg0, &f[0], &f[1]);
    return (arg1 & f[0]) >> f[1];
}
