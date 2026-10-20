#include "common.h"

extern s32 func_L00_0066D220(s32, s32, void *);
extern void func_L01_004B2E60(void *);
extern void func_L01_004B3830(void *);

// Handle message 2 (notify, reset, clear linked flag) or 4 for this object.
s32 func_L01_004B3EA8(void *arg0, s32 arg1) {
    u8 *linked = *(u8 **)((u8 *)arg0 + 0xAC);

    switch (arg1) {
    case 2:
        func_L00_0066D220(0x14, 0, arg0);
        func_L01_004B2E60(arg0);
        linked[0x688] = 0;
        break;
    case 4:
        func_L01_004B3830(arg0);
        break;
    }
    return 1;
}
