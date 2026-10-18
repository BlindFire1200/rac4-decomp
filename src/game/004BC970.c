#include "common.h"

s32 func_004BCA10();                                /* extern */
s32 func_004BCAE0();                                /* extern */
s32 func_004BCB90();                                /* extern */
s32 func_0054AB78(s32);                             /* extern */
extern s32 D_0021DE10;
extern s32 D_0021F930;

s32 func_004BC970(void) {
    s32 var_s0;

    var_s0 = -1;
    if (D_0021DE10 == func_0054AB78(D_0021F930)) {
        var_s0 = func_004BCA10();
    }
    if (var_s0 == -1) {
        var_s0 = func_004BCAE0();
        if (var_s0 == -1) {
            var_s0 = func_004BCA10();
            if (var_s0 == -1) {
                var_s0 = func_004BCB90();
            }
        }
    }
    return var_s0 == -1 ? 0 : var_s0;
}
