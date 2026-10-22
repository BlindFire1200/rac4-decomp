/* cflags: -fno-opt-stack */
#include "common.h"

extern void (*D_0016F744_[])(s32);
#define D_0016F744 (D_0016F744_[0])

void func_0014A498(u8 *);
void func_0014B8F8(s32 *);
void func_001491C8(s32 *);
void func_00148A18(s32 **);
void func_00148D98(s32 *);

// Releases every sub-object of the object and then the object itself.
s32 func_0014E330(u8 **arg0) {
    u8 *p = *arg0;

    if (p != 0) {
        func_0014A498(p);
        func_0014B8F8((s32 *)(p + 0x4));
        func_001491C8((s32 *)(p + 0x10));
        func_00148A18((s32 **)(p + 0x14));
        func_00148D98((s32 *)(p + 0x18));
        if (*(s32 *)(p + 0x48) != 0) {
            D_0016F744(*(s32 *)(p + 0x48));
            *(s32 *)(p + 0x48) = 0;
        }
        D_0016F744((s32)p);
    }
    return 0;
}
