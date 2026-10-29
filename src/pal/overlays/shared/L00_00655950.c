/* Invoke the helper with zero if the observed byte flag is set, otherwise four. */
#include "common.h"

extern u8 D_0021E778;
s32 func_0049FC68(s32);

void func_L00_00655950(void) {
    func_0049FC68((D_0021E778 != 0) ? 0 : 4);
}
