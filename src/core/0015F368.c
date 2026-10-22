#include "common.h"

extern s32 func_0015CB28(s32 arg0);
s32 D_pad[4];
s32 D_00172160[1403];

/* Look up arg0 in the 16-entry table at D_00172160 + 1387; return 1 on a hit, else func_0015CB28(arg0). */
s32 func_0015F368(s32 arg0) {
    s32 i;

    for (i = 0; i < 16; i++) {
        if (D_00172160[1387 + i] == arg0) {
            return 1;
        }
    }
    return func_0015CB28(arg0);
}
