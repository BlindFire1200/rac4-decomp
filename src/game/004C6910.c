#include "common.h"

// Map a small index to a fixed value: 0-4 give 1-5, anything else gives 1.
s32 func_004C6910(s32 arg0) {
    s32 r = 1;

    switch (arg0) {
    case 0:
        r = 1;
        break;
    case 1:
        r = 2;
        break;
    case 2:
        r = 3;
        break;
    case 3:
        r = 4;
        break;
    case 4:
        r = 5;
        break;
    }
    return r;
}
