/* cflags: -G0 */
/* C adapted from rac3-decomp func_003B2478 (NTSC-U func_003ACED0, commit 403f30a9) */
#include "common.h"

extern void func_004F1C50(void *);
extern s32 func_004F2048();
extern s32 func_004F2070();
extern s32 func_004F20A0();
extern s32 func_004F20C8();
extern s32 func_004F20F0();
extern s32 func_004F0CF0(void *, s32, s32, s32, s32, s32);
extern void func_001415E8(void);
extern void func_00142248(s32, s32, void *, s32);
s32 func_004F1AE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_001415E8();
    func_00142248(arg0, 0, &func_004F2048, 0);
    func_00142248(arg0, 1, &func_004F2070, 0);
    func_00142248(arg0, 2, &func_004F20A0, 0);
    func_00142248(arg0, 3, &func_004F20C8, 0);
    func_00142248(arg0, 5, &func_004F20F0, 0);
    func_004F1C50((void *)arg0);
    func_004F0CF0((void *)(arg0 + 0x48), arg3, arg4, arg5, arg6, arg7);
    return 1;
}
