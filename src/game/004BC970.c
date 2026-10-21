#include "common.h"

s32 func_004BCA10();
s32 func_004BCAE0();
s32 func_004BCB90();
s32 func_0054AB78(s32);
extern s32 D_0021DE10;
extern s32 D_0021F930;

// Choose a result: func_004BCA10 when D_0021DE10 equals
// func_0054AB78(D_0021F930), else func_004BCAE0, func_004BCA10 and
// func_004BCB90 in turn until one gives something other than -1. Returns 0 when
// all give -1.
s32 func_004BC970(void) {
    s32 result;

    result = -1;
    if (D_0021DE10 == func_0054AB78(D_0021F930)) {
        result = func_004BCA10();
    }
    if (result == -1) {
        result = func_004BCAE0();
        if (result == -1) {
            result = func_004BCA10();
            if (result == -1) {
                result = func_004BCB90();
            }
        }
    }
    return result == -1 ? 0 : result;
}
