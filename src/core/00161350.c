#include "common.h"

extern s32 func_001518C8(s32 arg0, s32 arg1);

s32 D_0021E020 = 0;

// Clear the pending request and hand the channel over with no arguments.
s32 func_00161350(void) {
    D_0021E020 = -1;
    func_001518C8(0, 0);
    return 0;
}
