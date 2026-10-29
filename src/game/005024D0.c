#include "common.h"

extern u32 func_00502448(void);

// Unpack a 32-bit value into high and low 16-bit parts.
void func_005024D0(void *unused, u32 *arg1, s32 *arg2) {
    u32 temp_v0;

    temp_v0 = func_00502448();
    *arg1 = temp_v0 >> 0x10;
    *arg2 = temp_v0 & 0xFFFF;
}
