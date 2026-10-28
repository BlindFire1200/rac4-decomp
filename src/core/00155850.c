/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0013AB10 (NTSC-U func_0013AB10, commit 403f30a9) */
#include "common.h"

typedef struct {
    s8 d[12];
} Type1;

extern Type1 D_001A4628;

void func_00155850(u8 *t)
{
    Type1 var1;
    s32 y;

    y = t[7];
    var1 = D_001A4628;
    t[5]++;
    if ((y & 3) == 0) {
        var1.d[1] = 29;
    }
    if (var1.d[t[6] - 1] < t[5]) {
        t[5] = 1;
        t[6]++;
        if (t[6] == 13) {
            if (t[7] == 99) {
                t[7] = 0;
            } else {
                t[7]++;
            }
            t[6] = 1;
        }
    }
}
