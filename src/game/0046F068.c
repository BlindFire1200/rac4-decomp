#include "common.h"

extern void func_00453630(void *, s32);
extern void func_0046FD10(void);
extern u8 D_266B00[];
extern u8 D_266F00[];

void func_0046F068(u8 *arg0) {
    if (arg0[0x15] & 4) func_0046FD10();
    D_266F00[((s32)(arg0 - D_266B00)) >> 5] = 0;
    func_00453630(arg0, 0x20);
}
