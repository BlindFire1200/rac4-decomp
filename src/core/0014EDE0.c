/* cflags: -fno-opt-stack */
#include "common.h"

extern void (*D_0016F744_[])(s32);

extern u16 D_0016F748_[];

s32 func_0014E330(u8 *);

// Destroys the object, releasing its sub-objects and clearing the owner's pointer.
s32 func_0014EDE0(u8 **arg0) {
    u8 *obj;

    if (arg0 == 0) {
        return 0x181A;
    }
    if (*arg0 == 0 || *(s64 *)*arg0 != 0xFACE) {
        return 0x17D4;
    }
    if ((*arg0)[0x18] != 0xA) {
        return 0x17E3;
    }
    D_0016F748_[0] = D_0016F748_[0] - 1;
    obj = *arg0;
    *(s64 *)obj = 0;
    func_0014E330(obj + 0x1C);
    if (*(s32 *)(obj + 0x30) != 0) {
        D_0016F744_[0](*(s32 *)(obj + 0x30));
        *(s32 *)(obj + 0x30) = 0;
    }
    if (*(s32 *)(obj + 0x34) != 0) {
        D_0016F744_[0](*(s32 *)(obj + 0x34));
        *(s32 *)(obj + 0x34) = 0;
    }
    if (obj != 0) {
        D_0016F744_[0]((s32)obj);
    }
    *arg0 = 0;
    return 0;
}
