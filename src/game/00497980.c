#include "common.h"

extern void func_004E0858(void);
extern s32 func_004E21D8(u32 index, s32 param_a, s32 param_b);

// Forward the index to the two helpers.
void func_00497980(s32 arg0) {
    func_004E21D8(arg0, 0, 0);
    func_004E0858();
}
