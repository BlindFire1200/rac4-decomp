#include "common.h"

/* Handles the two special message ids: stores 4 to the out-parameter and returns the matching global. */
static char D_00221320[8] = {0};
static char D_00221328[8] = {0};

/* Handles the two special message ids: stores 4 to the out-parameter and returns the matching global. */
s32 func_L41_00411728(s32 arg0, s32 arg1, s32 *arg2) {
    s32 ret = 0;

    switch (arg1) {
    case 0x4027571:
        ret = (s32)D_00221320;
        *arg2 = 4;
        break;
    case 0x4027572:
        ret = (s32)D_00221328;
        *arg2 = 4;
        break;
    }
    return ret;
}
