#include "common.h"

// Return func_L00_0066D468(arg0, arg1, 0) after calling func_L00_0066B1A8 twice.

extern s32 func_L00_0066D468(s32 arg0, s32 arg1, s32 arg2);
extern void func_L00_0066B1A8();

s32 func_L00_00764920(s32 arg0, s32 arg1) {
    s32 r = func_L00_0066D468(arg0, arg1, 0);

    func_L00_0066B1A8();
    func_L00_0066B1A8();
    return r;
}
