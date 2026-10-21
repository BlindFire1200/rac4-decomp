#include "common.h"

// Set up the pool header (state 2, arg1, size arg2) and call func_L00_00775600.

typedef struct Type1 {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
} Type1;

extern void func_L00_00775600(Type1 *arg0);

Type1 *func_L00_007755C0(Type1 *arg0, s32 arg1, s32 arg2) {
    arg0->f0 = 2;
    arg0->f8 = arg2;
    arg0->fC = arg2;
    arg0->f4 = arg1;
    func_L00_00775600(arg0);
    return arg0;
}
