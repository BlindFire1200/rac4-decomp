#include "common.h"

extern void *func_L01_006B4FC0(void *, s32, s32, s32);
extern void func_006A9B38(void *, void *, s32);

// Creates the object of type 7 through func_L01_006B4FC0 and, when that
// returns something, hands its address plus a one byte tag to func_006A9B38.
void func_L01_004CA820(s32 arg0, s32 arg1) {
    s32 tag = arg1 & 0xFF;
    void *p = func_L01_006B4FC0(arg0, 7, 0, 250);
    if (p != 0) {
        u8 b = tag;
        func_006A9B38(p, &b, 1);
    }
}
