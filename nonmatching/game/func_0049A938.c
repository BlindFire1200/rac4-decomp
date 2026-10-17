/* Not matching yet: BYTES 35/336 (tools/try_func.py func_0049A938 --diff). Not part of the build. */
/* cflags: -G8 */
#include "common.h"

extern void func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_0049ABE8(void);
extern void func_0049AC78(void);
extern void func_0049AD48(void);
extern u8 D_306D60[];
extern u8 D_306D78[];
extern u8 D_306D90[];
extern u8 D_306DA8[];
extern s32 D_0021F630[];
s32 D_0049A938_flag0 = 0;
s32 D_0049A938_flag1 = 0;
s32 D_0049A938_flag2 = 0;
s32 D_0049A938_flag3 = 0;

s32 func_0049A938(s32 arg0) {
    s32 vals[4];
    s32 i;
    if (D_0049A938_flag0 == 0) {
        func_00501458(D_306D60, func_0049ABE8, func_0049AC78, func_0049AD48, 0, 0);
        D_0049A938_flag0 = 1;
    }
    if (D_0049A938_flag1 == 0) {
        func_00501458(D_306D78, func_0049ABE8, func_0049AC78, func_0049AD48, 0, 0);
        D_0049A938_flag1 = 1;
    }
    if (D_0049A938_flag2 == 0) {
        func_00501458(D_306D90, func_0049ABE8, func_0049AC78, func_0049AD48, 0, 0);
        D_0049A938_flag2 = 1;
    }
    if (D_0049A938_flag3 == 0) {
        func_00501458(D_306DA8, func_0049ABE8, func_0049AC78, func_0049AD48, 0, 0);
        D_0049A938_flag3 = 1;
    }
    for (i = 0; i < 4; i++) vals[i] = D_0021F630[i];
    return vals[arg0];
}
