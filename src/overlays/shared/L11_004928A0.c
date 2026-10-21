#include "common.h"

// True when the moby exists and its class id is 0x2038.

typedef struct Type1 {
    char _p0[0xBC];
    s16 fBC;
} Type1;

s32 func_L11_004928A0(Type1 *arg0) {
    if (arg0 != 0 && arg0->fBC == 0x2038) {
        return 1;
    }
    return 0;
}
