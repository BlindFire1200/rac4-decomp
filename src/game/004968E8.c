/* cflags: -G0 */
/* C adapted from rac3-decomp func_003B3408 (NTSC-U func_003B3268, commit 403f30a9) */
#include "common.h"

extern void *func_005010E0();
extern void func_00500E68(void *);
extern u8 D_00222038[];

void func_004968E8(void) {
    void *x = D_00222038;
    if (*(s32 *)((u8 *)x + 0x4) == 0) {
        x = func_005010E0();
    }
    func_00500E68(x);
}
