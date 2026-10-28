/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012B138 (NTSC-U func_0012B138, commit 403f30a9) */
#include "common.h"

extern s32 D_00165FD0[];
extern u8 D_00167B40[];
extern char D_00194948[];
extern s32 func_0012A918(void *);
extern s32 func_00127A08(s32);
extern void func_001294F0(const char *, ...);

s32 func_001374E8(s32 arg0) {
    if (arg0 == 0) {
        if (D_00165FD0[0] > 0) {
            func_001294F0(D_00194948);
        }
        while (func_0012A918(D_00167B40) != 0) {
            func_00127A08(0xFA0);
        }
        return 0;
    }
    return func_0012A918(D_00167B40);
}
