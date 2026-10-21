#include "common.h"

// Call func_L00_0052ACF0(arg0, arg1, +0x0).

typedef struct Type1 {
    s32 f0;
} Type1;

extern void func_L00_0052ACF0(Type1 *arg0, s32 arg1, s32 arg2);

void func_L00_005081E0(Type1 *arg0, s32 arg1) {
    func_L00_0052ACF0(arg0, arg1, arg0->f0);
}
