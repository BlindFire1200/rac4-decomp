/* Not matching yet: BYTES 1/116 (tools/try_func.py func_L08_004D1258 --diff). Not part of the build. */
#include "common.h"
extern void func_L08_004D1238(void *);
extern void func_L01_00586440(void *, s32);
extern void func_L01_00591BD8(void *, s32, s32);
void func_L08_004D1258(void *arg0) {
    u8 *state = *(u8 **)(arg0 + 0xAC);
    s32 i;
    func_L08_004D1238(arg0);
    for (i = 0; i < 3; i++) {
        if (*(s32 *)(state + 0x1F4 + i * 0x1E0) < 2) return;
    }
    func_L01_00586440(arg0, 1);
    func_L01_00591BD8(arg0, 2, -1);
}
