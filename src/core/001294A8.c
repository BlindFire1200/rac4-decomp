/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00121718 (NTSC-U func_00121718, commit 403f30a9) */
#include "common.h"

extern s32 func_00128698(void *, void *, s32, s32, void *);
extern void func_001293B0(void);

s32 func_001294A8(s32 a0, s32 a1, s32 a2, ...) {
    return func_00128698(func_001293B0, &a0, a1, a2, (char *)__builtin_next_arg(a2) - 0x28);
}
