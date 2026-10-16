#include "common.h"

// Store arg1 through the linked pointer at +0xAC when it is non-null.
void func_L01_004787D0(void *arg0, s32 arg1) {
    u8 *linked = *(u8 **)((u8 *)arg0 + 0xAC);
    if (linked != NULL) {
        *(s32 *)linked = arg1;
    }
}
