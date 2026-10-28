/* cflags: -fno-opt-stack */
#include "common.h"

extern s32 func_00127168(s32, u8 *, s32);
extern s32 D_00164210_[];
extern u8 *D_00164214_[];
extern u8 D_1A5230[];

s32 func_00122920(s32 arg0, u8 *buf, u32 n, s32 flag) {
    u32 i;

    if (flag == 1) {
        s32 r = func_00127168(arg0, D_1A5230, D_00164210_[0]);
        D_00164210_[0] = 0;
        D_00164214_[0] = D_1A5230;
        return r;
    }
    for (i = 0; i < n; i++) {
        {
            *D_00164214_[0] = buf[i];
            D_00164214_[0] += 1;
            D_00164210_[0] += 1;
            if (D_00164210_[0] >= 128) {
                s32 r = func_00127168(arg0, D_1A5230, D_00164210_[0]);
                D_00164214_[0] = D_1A5230;
                D_00164210_[0] = 0;
                if (r == 0) {
                    return 0;
                }
            }
        }
    }
    return i;
}
