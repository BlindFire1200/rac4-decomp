#include "common.h"

s32 func_00126E20(s32);                              /* extern */
s32 func_00126F60(void *, s32);                      /* extern */

/* Initialize and loop until condition, return arg3 */
s32 func_004EFD08(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp_data[4];

    if (arg3 <= 0) {
        return 0;
    }

    func_00126E20(0);
    sp_data[0] = arg2;
    sp_data[1] = arg1;
    sp_data[2] = arg3;
    sp_data[3] = 0;

    while (func_00126F60(sp_data, 1) == 0) {
        ;
    }

    return arg3;
}
