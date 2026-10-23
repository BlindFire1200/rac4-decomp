/* cflags: -fno-opt-stack */
#include "common.h"

#include "common.h"

extern void func_0011C510(void *, s32, s32, void *);
extern void func_0011C950(void *);

// Registers the three sub-objects of one transfer object.
void func_0011C6C0(u8 *arg0) {
    u8 *p;

    p = arg0 + 0x1E4;
    *(s32 *)(arg0 + 0x3C) = (s32)func_0011C950;
    *(s32 *)(arg0 + 0x38) = 1;
    func_0011C510(p, 4, 0, arg0);
    func_0011C510(arg0 + 0x23C, 9, 1, arg0);
    func_0011C510(arg0 + 0x294, 0xA, 2, arg0);
    *(s32 *)(arg0 + 0x1D8) = 0;
    *(s32 *)(arg0 + 0x1DC) = 3;
    *(u8 **)(arg0 + 0x1E0) = p;
}
