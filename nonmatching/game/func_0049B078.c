/* Not matching yet: BYTES 1/92 (tools/try_func.py func_0049B078 --diff). Not part of the build. */
#include "common.h"

extern u8 D_306DC0[];
extern s32 D_003D8E68[];

void func_0049B078(s32 arg0) {
    s32 offset;
    u8 *ptr;
    s32 field4;
    s32 v1;
    void (*func_ptr)(s32);

    offset = arg0 * 0x3C;
    ptr = D_306DC0 + offset;

    if (*ptr != 0) {
        field4 = *(s32 *)(ptr + 4);
        v1 = field4 << 4;
        func_ptr = (void (*)(s32))(*(s32 *)((char *)D_003D8E68 + v1 + 0xC));
        if (func_ptr != NULL) {
            func_ptr(arg0);
        }
    }
}
