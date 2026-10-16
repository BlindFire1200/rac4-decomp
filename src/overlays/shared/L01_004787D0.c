#include "common.h"

// Store value through the linked pointer at +0xAC when it is non-null.
void func_L01_004787D0(void *object, s32 value) {
    u8 *linked = *(u8 **)((u8 *)object + 0xAC);
    if (linked != NULL) {
        *(s32 *)linked = value;
    }
}
