#include "common.h"

s32 func_01EE98EC(char *arg0,s32 arg1,s32 arg2) {
    char *p = *(char **)(arg0 + 25436) + 4 * arg1;
    *(s32 *)(p + 8) = arg2;
    return (s32)p;
}
