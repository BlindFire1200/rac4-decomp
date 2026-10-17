#include "common.h"

// Map a value 0-6 to its code (0 gives 2, 1 gives 5, 2 gives 3, 3 gives 4, 4
// gives 7, 5 gives 6, 6 gives 1); 7, 8 and anything else give -1.
s32 func_005469B8(s32 value) {
    s32 result = -1;
    switch (value) {
    case 0: result = 2; break;
    case 1: result = 5; break;
    case 2: result = 3; break;
    case 3: result = 4; break;
    case 4: result = 7; break;
    case 5: result = 6; break;
    case 6: result = 1; break;
    case 7: break;
    case 8: break;
    }
    return result;
}
