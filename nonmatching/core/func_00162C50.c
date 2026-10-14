/* Not matching yet: BYTES 3/68 (tools/try_func.py func_00162C50 --diff). Not part of the build. */
/* cflags: -mno-split-addresses */
#include "common.h"

s32 func_0014D2C0(s32);
s32 func_0014EDE0(s32 *);
s32 func_001516D8(void *, void *, void *);

void func_00162C50(s32 *arg0) {
    if (arg0 != NULL) {
        func_0014D2C0(*arg0);
        func_001516D8(arg0 + 4, arg0 + 8, arg0 + 0xC);
        func_0014EDE0(arg0);
    }
}
