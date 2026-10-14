#include "common.h"

typedef int u128 __attribute__((mode(TI)));

extern s32 func_L00_0059FB08(u128 arg0, f32 arg1);

s32 func_L00_005891A8(u128 *arg0) {
    return func_L00_0059FB08(*arg0, 0.0f) != 0;
}
