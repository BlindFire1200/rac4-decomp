#include "common.h"

extern s32 D_00220D88;
extern s32 D_00220D8C;

s32 D_00220D88 = 0;
s32 D_00220D8C = 0;

/* Swaps the head of a list with a second list head, moving the old head's link at +0x58. */
void *func_0053CA80(void) {
    void *temp_v1;

    temp_v1 = (void *)D_00220D88;
    D_00220D88 = *(s32 *)((u8 *)temp_v1 + 0x58);
    *(s32 *)((u8 *)temp_v1 + 0x58) = D_00220D8C;
    D_00220D8C = (s32)temp_v1;
    return temp_v1;
}
