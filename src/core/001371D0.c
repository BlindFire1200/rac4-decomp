/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012AE20 (NTSC-U func_0012AE20, commit 403f30a9) */
#include "common.h"

extern s32 D_00165FE4[];
extern s32 D_00166008[];
extern void func_00137178(void);
extern void func_00129918();
extern s32 func_0012D420(void);
extern s32 func_0012D470(void);

s32 func_001371D0(void) {
    s32 r;
    D_00165FE4[0] = 1;
    r = func_0012D420();
    func_00129918(0x80000012, func_00137178, 0);
    if (r != 0) {
        func_0012D470();
    }
    D_00165FE4[0] = 0;
    D_00166008[0] = 1;
    return 1;
}
