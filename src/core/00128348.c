/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_001205B8 (NTSC-U func_001205B8, commit 403f30a9) */
#include "common.h"

extern int D_00164694;
extern char D_001A5F40[];
extern s32 func_00127DA0();

void func_00128348(int c)
{
    int i;

    if (D_00164694 >= 0x7E) {
        D_00164694 = 0;
        D_001A5F40[0x7F] = 0;
        func_00127DA0(D_001A5F40);
    }
    i = D_00164694;
    if (c == '\n') {
        D_00164694 = 0;
        D_001A5F40[i] = c;
        D_001A5F40[i + 1] = 0;
        func_00127DA0(D_001A5F40);
        return;
    }
    D_00164694 = i + 1;
    D_001A5F40[i] = c;
}
