/* cflags: -G0 */
#include "common.h"

extern void func_01ECD368(s32, s32);

s32 func_01ECF548(s32 a0, s32 a1, s32 a2) {
    func_01ECD368(a0, a2);
    return 1;
}
