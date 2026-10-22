#include "common.h"

typedef void (*Type1)(s32, s32);

extern Type1 D_001BCB9C[];
extern s32 D_001BC9A4[];

/* Forwards a net event to the installed handler (passing the fourth incoming argument and a context word) when one is set, and returns the event opcode 0x1C. */
s32 func_01EDC970(s32 p0, s32 p1, s32 p2, s32 p3) {
    if (D_001BCB9C[0] != 0) {
        D_001BCB9C[0](p3, D_001BC9A4[0]);
    }
    return 0x1C;
}
