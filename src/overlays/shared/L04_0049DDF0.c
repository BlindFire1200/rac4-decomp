#include "common.h"

typedef int u128 __attribute__((mode(TI)));

extern void func_0053A3F0(s64 arg0, s32 arg1, u64 *arg2);

/* asks func_0053A3F0 to build a 16-byte value in a local scratch area and copies it to the caller's out pointer */
void func_L04_0049DDF0(s64 arg0, u128 *arg1) {
    u64 local[8];
    func_0053A3F0(arg0, 8, local);
    *arg1 = *(u128 *)(local + 6);
}
