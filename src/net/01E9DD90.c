#include "common.h"

extern void func_0011D920(s32 a0, void *a1, s32 a2, s32 a3, s32 a4);
extern char D_00195B58[];

/* Returns 0x17 for a null handle, otherwise reports the event through func_0011D920 and returns 0. */
u64 func_01E9DD90(s32 arg0) {
    u64 var_v0;

    var_v0 = 0x17;
    if (arg0 != 0) {
        func_0011D920(arg0, D_00195B58, 2, 0xA, 0x68);
        var_v0 = 0;
    }
    return var_v0;
}
