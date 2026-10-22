#include "common.h"

// Map a state id (0-4) to its group value; any other id maps to 8.
s32 func_004BEF28(s32 a0) {
    s32 r;

    r = 8;
    switch (a0) {
    case 0:
        r = 8;
        break;
    case 1:
        r = 0xD;
        break;
    case 2:
        r = 0x11;
        break;
    case 3:
        r = 0x15;
        break;
    case 4:
        r = 0x1C;
        break;
    }
    return r;
}
