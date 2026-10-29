#include "common.h"

s32 func_0050FF00(char *arg0,float arg1) {
    char *p = *(char **)(arg0 + 64);
    *(float *)(p + 60) = arg1;
    *(u8 *)(arg0 + 68) = 1;
    return (s32)p;
}
