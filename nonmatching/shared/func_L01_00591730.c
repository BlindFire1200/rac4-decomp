/* Not matching yet: BYTES 14/108 (tools/try_func.py func_L01_00591730 --diff). Not part of the build. */
#include "common.h"
extern s32 func_L00_005C88C0(void);
extern u8 D_171B40[];

void func_L01_00591730(void) {
    s32 next;
    u8 value;
    if (func_L00_005C88C0() == 0) return;
    if ((s32)D_171B40[0x1E] + 1 >= 0x14) return;
    value = D_171B40[0x1F] + 1;
    D_171B40[0x1F] = value;
    next = D_171B40[0x1E] + 1;
    if ((value & 0xFF) < (next >> 1)) return;
    D_171B40[0x1E] = next;
    D_171B40[0x1F] = 0;
}
