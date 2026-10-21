/* cflags: -G0 */
#include "common.h"

extern void func_01EAB210(s32*);

s32 func_01EA0BD0(void) {
    s32 val;
    func_01EAB210(&val);
    return val;
}
