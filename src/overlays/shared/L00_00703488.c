#include "common.h"

extern void func_L00_005BCBF0(void *, s32, s32);
extern void func_L00_006FA788(void *);

/* Fills a 24-byte record for arg3 and hands it to the parser; returns 24. */
s32 func_L00_00703488(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 buf[0x18];

    func_L00_005BCBF0(buf, arg3, 0x18);
    func_L00_006FA788(buf);
    return 0x18;
}
