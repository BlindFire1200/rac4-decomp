/* Invoke the overlay helper with zero if the observed byte flag is set, otherwise four. */
#include "common.h"

extern u8 D_0021E778;
s32 func_L00_00629AE8(s32);

void func_L00_006559D0(void) {
    func_L00_00629AE8((D_0021E778 != 0) ? 0 : 4);
}
