/* C adapted from rac4-decomp func_003E6F80 (commit 5d517a2) */
#include "common.h"

extern void func_00510A78(void *, s32, s32, s32);
extern s32 func_00500D68(s32);
s32 func_005011F8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var1;

    if ((arg3 != 0) && (arg4 < 0x258)) {
        if (arg2 <= 0x31FFF) {
            var1 = arg1 * 4;
            if ((*(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 4)) + var1) + 0x18)) == 0) {
                (*(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 4)) + var1) + 0x18)) = func_00500D68(arg1);
                func_00510A78((void *)func_00500D68(arg1), arg4, arg3, arg2);
                return 1;
            }
            goto L1;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return 0;
    }
L1:
    return 0;
}
