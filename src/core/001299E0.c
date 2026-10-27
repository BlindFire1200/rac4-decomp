/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00121C38 (NTSC-U func_00121C38, commit 403f30a9) */
#include "common.h"

typedef struct {
    u32 f0 : 8;
    u32 f0_8 : 24;
    void *f4;
    s32 f8;
    u32 fC;
} Type1;

typedef struct {
    u32 f0;
    u32 f4;
    s32 f8;
    s32 fC;
} Type2;

extern void *D_001A60A0;
extern void func_00129CE0(void *, s32);
extern s32 func_00126F70(Type2 *, s32);
extern s32 func_00126F60(Type2 *, s32);

s32 func_001299E0(s32 arg0, s32 arg1, Type1 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6)
{
    Type2 var1[2];
    s32 n;

    if ((u32)(arg3 - 16) > 0x60) {
        return 0;
    }
    n = 0;
    if (arg6 > 0) {
        n = 1;
        var1[0].f0 = (u32)arg4;
        var1[0].f4 = (u32)arg5;
        var1[0].f8 = arg6;
        var1[0].fC = 0;
        arg2->f4 = (void *)arg5;
        arg2->f0_8 = arg6;
        if (arg1 & 4) {
            func_00129CE0((void *)arg4, arg6);
        }
    } else {
        arg2->f0_8 = 0;
        arg2->f4 = 0;
    }
    var1[n].f0 = (u32)arg2;
    var1[n].f4 = (u32)D_001A60A0;
    var1[n].f8 = arg3;
    arg2->f8 = arg0;
    arg2->f0 = arg3;
    var1[n].fC = 0x44;
    n++;
    func_00129CE0(arg2, arg3);
    if (arg1 & 1) {
        return func_00126F70(var1, n);
    }
    return func_00126F60(var1, n);
}
