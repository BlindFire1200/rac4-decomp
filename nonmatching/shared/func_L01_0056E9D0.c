/* Not matching yet: BYTES 7/100 (tools/try_func.py func_L01_0056E9D0 --diff). Not part of the build. */
#include "common.h"
extern void *func_L00_005C8EB8(void *);
s32 func_L01_0056E9D0(void *arg0, void *arg1) {
    void *record;
    if (arg0 && *(s32 *)(arg0 + 0x14)) *(s32 *)(arg0 + 0x14) = 0;
    if (!arg1) return 1;
    record = func_L00_005C8EB8(arg1);
    if (!record) return 1;
    *(s32 *)(record + 4) = 0;
    *(u8 *)(record + 0x22) = 1;
    *(s32 *)(record + 0x18) = 0;
    *(s32 *)(record + 0x1C) = 0;
    *(u8 *)(record + 0x20) = 0;
    *(u8 *)(record + 0x21) = 0;
    return 1;
}
