#include "common.h"

extern void func_00497980(s32);
extern u8 D_0021F939;
extern u8 D_30A6F0[];

u8 D_0021F8E8 = 0;

/* Process array element and conditionally call function */
void func_004BAFB8(s32 arg0) {
    s32 offset;
    s32 *ptr;
    u8 temp;

    offset = arg0 * 0x534;
    ptr = (s32 *)(D_30A6F0 + offset);
    *ptr = 2;
    temp = D_0021F8E8;
    if (temp != 0) {
        return;
    }
    if (D_0021F939 != 0) {
        func_00497980(8);
    } else {
        func_00497980(6);
    }
}
