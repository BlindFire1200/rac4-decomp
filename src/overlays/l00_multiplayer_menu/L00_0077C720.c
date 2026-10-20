#include "common.h"

extern u64 func_0012E370(void);
extern s64 func_0012FEB0(u64, s64);
extern void func_L00_0077BDF0(void *, u8);
s32 func_L00_0077C720(void *arg0) {
    s32 var_s1 = 1;
    s32 var_v0;
    if (*((u8 *)arg0 + 0x2F88) != 0) {
        var_v0 = 1;
        if (*((u8 *)arg0 + 0x2F89) != 0) {
            var_v0 = 1;
            if (((s32)func_0012FEB0(func_0012E370(), 0x24000) - *(s32 *)((u8 *)arg0 + 0x2F8C)) >= 0x3A99) {
                *((u8 *)arg0 + 0x2F89) = 0;
                var_s1 = 0;
                func_L00_0077BDF0(arg0, *((u8 *)arg0 + 0x2F8A));
                goto block_4;
            }
        }
    } else {
block_4:
        var_v0 = var_s1;
    }
    return var_v0;
}
