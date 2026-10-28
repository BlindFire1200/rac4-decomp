/* C adapted from rac3-decomp func_003C3C98 (NTSC-U func_003C3B80, commit 403f30a9) */
#include "common.h"

extern int D_002213F4;
extern int D_00221410;
int func_0046D5C0(void) {
    unsigned char *var1 = (unsigned char *)(*(volatile int *)&D_002213F4);
    unsigned char *end = (unsigned char *)(*(volatile int *)&D_00221410);
    int var2 = (int)end;

    if (var1 != end) {
        do {
            var2 = *(int *)(var1 + 0x24);
            var1 += 0x100;
        } while (var1 != end);
    }
    return var2;
}
