#include "common.h"

extern s32 func_00163928(void);
extern void func_001634F0(f32);
extern s32 D_21D940_[];

/* Calls func_00163928; when it returns nonzero, sets bit 2 of the word at D_21D940+8 and calls func_001634F0 with 0.0. */
void func_001638E8(void) {
    s32 *g;

    if (func_00163928() != 0) {
        g = D_21D940_;
        g[2] = g[2] | 4;
        func_001634F0(0.0f);
    }
}
