#include "common.h"

extern void (*D_001BCA78[])(s32, s32);
extern s32 D_001BC880[];

/* Calls the global net handler in D_001BCA78 with the 4th incoming arg plus the word in D_001BC880, returns 0xB8. */
s32 func_01EDBE98(s32 a, s32 b, s32 c, s32 d) {
    if (D_001BCA78[0] != 0) {
        D_001BCA78[0](d, D_001BC880[0]);
    }
    return 0xB8;
}
