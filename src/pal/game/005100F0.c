#include "common.h"

s32 func_005100F0(char *arg0,u8 arg1) {
    char *p = *(char **)(arg0 + 64);
    *(u8 *)(p + 80) = arg1;
    *(u8 *)(arg0 + 68) = 1;
    return (s32)p;
}
