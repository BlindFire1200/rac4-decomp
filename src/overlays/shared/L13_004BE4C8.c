#include "common.h"

s32 D_00222914 = 0;

/* Step the frame's link list: flag each table entry the frame now points at, then bump the frame counter. */
void func_L13_004BE4C8(void *arg0) {
    s32 *p;
    s32 idx;
    u8 v;

    p = *(s32 **)((char *)arg0 + 0xAC);
    v = *(u8 *)((char *)arg0 + 0x67);

    switch (v) {
    case 0:
        idx = p[0];
        break;
    case 1:
        idx = p[1];
        break;
    case 2:
        idx = p[2];
        if (idx >= 0) {
            *(u8 *)((idx << 8) + D_00222914 + 0xBE) |= 4;
        }
        idx = p[3];
        break;
    default:
        goto out;
    }

    if (idx >= 0) {
        *(u8 *)((idx << 8) + D_00222914 + 0xBE) |= 4;
    }

out:
    *(u8 *)((char *)arg0 + 0x67) = *(u8 *)((char *)arg0 + 0x67) + 1;
}
