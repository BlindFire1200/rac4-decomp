/* Not matching yet: NOT IN US (PAL-mapped address; US 0x00536020 holds other code and no US overlay function has these bytes). Not part of the build. */
#include "common.h"

// Calls func_00155AE0(0) and reports success.

extern s32 func_00155AE0(s32);

s32 func_L04_00536020(void) {
    func_00155AE0(0);
    return 1;
}
