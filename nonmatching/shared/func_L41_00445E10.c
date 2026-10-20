/* Not matching yet: BYTES 7/216 (tools/try_func.py func_L41_00445E10 --diff). Not part of the build. */
/* cflags: -mno-split-addresses */
#include "common.h"

extern u8 *D_00222794;
extern u8 *D_002227B0;
void func_L41_00445DA0(s32 arg0, s32 arg1);

s32 func_L41_00445E10(s32 arg0, s32 arg1) {
    u8 *p;
    s32 count;
    s32 i;
    s32 v;

    count = 0;
    i = 0;
    for (p = D_00222794; p != D_002227B0; p += 0x100, i++) {
        if (p != NULL) {
            if (*(s16 *)(p + 0xBC) == 0x261F) {
                v = (*(s32 **)(p + 0xAC))[0x20];
            } else if (*(s16 *)(p + 0xBC) == 0x2628) {
                v = **(s32 **)(p + 0xAC);
            } else {
                continue;
            }
            if (v == arg1) {
                func_L41_00445DA0(arg0, i);
                count++;
            }
        }
    }
    return count;
}
