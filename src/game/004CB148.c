#include "common.h"

extern void func_004CA850(void);
extern void func_004CA1D0(s32 param_a, s32 param_b);
extern s32 func_004E21D8(u32 index, s32 param_a, s32 param_b);
extern s32 D_0021FA2C;

/* Sets the level/state flag and requests states 3 and 7, or resets the state via func_004CA850 when arg0 is 0. */
void func_004CB148(s32 arg0) {
    if (arg0 != 0) {
        D_0021FA2C = 1;
        func_004CA1D0(3, 0);
        func_004E21D8(7, 0, 0);
    } else {
        func_004CA850();
    }
}
