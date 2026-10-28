/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012D4D8 (NTSC-U func_0012D4D8, commit 403f30a9) */
#include "common.h"

extern void *func_001384E0(void);
extern void func_00127600(int n);
extern void func_001268A0(int n, int id);
extern s32 func_00126880();
extern void func_00127668();
s32 func_00139940(s32 a0) {
    u8 *p;
    s32 old;
    p = func_001384E0();
    old = *(s32 *)(p + 8);
    if (a0 == 0) {
        func_00127600(2);
        func_001268A0(2, *(s32 *)(p + 0xC));
        *(s32 *)(p + 0xC) = 0;
        *(s32 *)(p + 8) = 0;
    } else {
        if (old != 0) {
            func_00127600(2);
            func_001268A0(2, *(s32 *)(p + 0xC));
        }
        *(s32 *)(p + 8) = a0;
        *(s32 *)(p + 0xC) = func_00126880(2, a0, -1);
        func_00127668(2);
    }
    return old;
}
