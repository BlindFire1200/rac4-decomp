#include "common.h"

// Zeroes the three words at arg0 and returns arg0.
void *func_00503B70(void *arg0) {
    ((s32 *)arg0)[0] = 0;
    ((s32 *)arg0)[1] = 0;
    ((s32 *)arg0)[2] = 0;
    return arg0;
}
