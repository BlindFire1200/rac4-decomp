/* Not matching yet: BYTES 7/64 (tools/try_func.py func_0054A810 --diff). Not part of the build. */
#include "common.h"

extern void func_0054A7E0(void);

u8 func_0054A810(char *base, s32 i) {
    s32 temp;

    func_0054A7E0();
    temp = i * 0x44;
    return *(u8 *)(base + temp + 0xA40);
}
