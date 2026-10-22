#include "common.h"

extern void func_0011A518(void *, s32, s32);
extern s32 D_00164724[];
extern s32 D_001A9268[];

// Clears a global flag and reinitializes a system with a fixed mode, then returns 0.
s32 func_0012B300(void) {
    D_00164724[0] = 0;
    func_0011A518((void *)D_001A9268, 0, 4);
    return 0;
}
