/* cflags: @ee29 -O2 -G0 -fno-schedule-insns */
#include "common.h"

s32 func_00425BC0(char *arg0,s32 arg1,s32 arg2) {
    char *p = *(char **)(arg0 + 172);
    *(s32 *)(p + 116) = arg2;
    *(s32 *)(p + 112) = arg1;
    *(u8 *)(arg0 + 48) = 255;
    return (s32)p;
}
