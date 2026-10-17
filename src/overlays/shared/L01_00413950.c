#include "common.h"

void func_L00_00599C48(s32);                           /* extern */

void func_L01_00413950(void *arg0) {
    s32 temp_a0;

    temp_a0 = *(s32 *)((u8 *)arg0 + 0x28);
    if (temp_a0 >= 0) {
        func_L00_00599C48(temp_a0);
        *(s32 *)((u8 *)arg0 + 0x28) = -1;
    }
}
