#include "common.h"

typedef void (*NetHook)(s32, s32);

extern NetHook D_001BCC18[];
extern s32 D_001BCA20[];

// Calls the registered network hook with the fourth argument and a global value, then returns 36.
s32 func_01EDDE60(s32 unused0, s32 unused1, s32 unused2, s32 arg3) {
    if (D_001BCC18[0] != 0) {
        D_001BCC18[0](arg3, D_001BCA20[0]);
    }
    return 0x24;
}
