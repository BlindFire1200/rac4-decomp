/* Not matching yet: BYTES 5/128 (tools/try_func.py func_L01_005AC6C8 --diff). Not part of the build. */
#include "common.h"
extern void *func_00595D00(void *);
s32 func_L01_005AC6C8(void *arg0, u8 *arg1, s32 arg2, u8 arg3) {
    u8 *record = func_00595D00(arg0);
    if (!record) return 0;
    *(s32 *)(record + 0x10C) = (s32)arg1;
    *(s32 *)(record + 4) &= ~5;
    if (arg2 == -1) *(u8 *)(record + 0x10B) = arg1[0] - 1;
    else *(u8 *)(record + 0x10B) = arg2;
    *(u8 *)(record + 0x10A) = arg3;
    return 1;
}
