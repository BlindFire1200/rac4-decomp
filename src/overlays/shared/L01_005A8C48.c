#include "common.h"

u8 *func_006658C0(void);

// Store value in the +0x31E0 word of the object func_006658C0 returns, unless
// the object is missing, value is zero or its +0x25CC word is 0x66.
void func_L01_005A8C48(s32 unused0, s32 value) {
    u8 *object = func_006658C0();
    if (object != 0 && value != 0 && *(s32 *)(object + 0x25CC) != 0x66) {
        *(s32 *)(object + 0x31E0) = value;
    }
}
