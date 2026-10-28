#include "common.h"

extern s32 D_1BC98C[];
extern s32 D_1BCB84[];

// Calls the installed net callback (if any) with the incoming argument and the session pointer, then returns opcode 236.
s32 func_01EDC7B0(s32 a0, s32 a1, s32 a2, s32 a3) {
    if (D_1BCB84[0] != 0) {
        ((void (*)(s32, s32))D_1BCB84[0])(a3, D_1BC98C[0]);
    }

    return 0xEC;
}
