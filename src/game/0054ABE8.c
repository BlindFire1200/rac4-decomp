#include "common.h"

extern void *func_0054A980(s32 arg0);
s32 func_0054ADC8(s32 arg0);

/* Returns 0 for a zero arg; else passes the pointer from func_0054A980 plus 0x20 to func_0054ADC8. */
s32 func_0054ABE8(s32 arg0) {
    if (arg0 == 0) {
        return 0;
    }
    return func_0054ADC8((s32)((u8 *)func_0054A980(arg0) + 0x20));
}
