/* Not matching yet: BYTES 9/72 (tools/try_func.py func_L01_0045C0F0 --diff). Not part of the build. */
#include "common.h"
void func_L01_0045A838(void);
void func_L01_0045A690(void);
s32 func_L01_0045C0F0(u8 *a0, s32 a1) {
    if (a1 == 2) {
        u8 *linked = *(u8 **)(a0 + 0xAC);
        if (*(s32 *)(linked + 0x410) != 0) func_L01_0045A838();
        else func_L01_0045A690();
    }
    return 1;
}
