#include "common.h"
u8 *func_006658C0(void);
void func_L01_005A8C48(s32 a0, s32 value) {
    u8 *object = func_006658C0();
    if (object != 0 && value != 0 && *(s32 *)(object + 0x25CC) != 0x66) {
        *(s32 *)(object + 0x31E0) = value;
    }
}
