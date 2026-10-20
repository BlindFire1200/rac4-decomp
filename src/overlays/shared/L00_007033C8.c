#include "common.h"

extern void func_L00_005BCBF0(void *, u8 *, s32);
extern void func_L00_006F0A40(void *);

/* Builds a 32-byte record for the fourth argument and parses it; returns the record size. */
s32 func_L00_007033C8(s32 arg0, s32 arg1, s32 arg2, u8 *arg3) {
    u32 buf[8];
    s32 temp;

    temp = 0x18;
    if (arg3[0] & 4) {
        temp = 0x12;
    }
    func_L00_005BCBF0(buf, arg3, temp);
    if (((buf[1] >> 24) & 0xF) == 2) {
        func_L00_006F0A40(buf);
    }
    return temp;
}
