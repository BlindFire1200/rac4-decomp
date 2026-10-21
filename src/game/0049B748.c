/* cflags: -mno-split-addresses */
#include "common.h"

s32 func_0049B378();
s32 func_0049B3D8(s32);
s32 func_00501498(s32);
s32 func_00505AD8(s32);
s32 func_00505B20();
s32 func_00505C90(s32);
extern s32 *D_0021DDA4;

void func_0049B748(void) {
    s32 temp_s1;
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    temp_s1 = func_00505B20();
    if (*D_0021DDA4 > 0) {
        do {
            func_00505AD8(var_s0);
            func_00501498(func_0049B3D8(var_s0));
            temp_v0 = func_0049B3D8(var_s0);
            var_s0 += 1;
            func_00505C90(temp_v0);
        } while (var_s0 < *D_0021DDA4);
    }
    func_00505AD8(4);
    func_00501498(func_0049B378());
    func_00505C90(func_0049B378());
    func_00505AD8(temp_s1);
}
