/* cflags: -fno-opt-stack */
#include "common.h"

extern s32 func_00127168(s32, u8 *, s32);
extern s32 D_00164218_[];
extern u8 *D_0016421C_[];
extern u8 D_1A52B0[];

s32 func_00123CF0(s32 arg0, u8 *buf, u32 n, s32 flag) {
    u32 i;

    if (flag == 1) {
        s32 r = func_00127168(arg0, D_1A52B0, D_00164218_[0]);
        D_00164218_[0] = 0;
        D_0016421C_[0] = D_1A52B0;
        return r;
    }
    for (i = 0; i < n; i++) {
        {
            *D_0016421C_[0] = buf[i];
            D_0016421C_[0] += 1;
            D_00164218_[0] += 1;
            if (D_00164218_[0] >= 128) {
                s32 r = func_00127168(arg0, D_1A52B0, D_00164218_[0]);
                D_0016421C_[0] = D_1A52B0;
                D_00164218_[0] = 0;
                if (r == 0) {
                    return 0;
                }
            }
        }
    }
    return i;
}
