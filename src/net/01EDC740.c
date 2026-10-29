#include "common.h"

extern s32 D_1BC984[];
extern s32 D_1BCB7C[];

// Calls the installed net callback (if any) with the incoming argument and the session pointer, then returns opcode 28.
s32 func_01EDC740(s32 a0, s32 a1, s32 a2, s32 a3) {
    if (D_1BCB7C[0] != 0) {
        ((void (*)(s32, s32))D_1BCB7C[0])(a3, D_1BC984[0]);
    }

    return 28;
}
