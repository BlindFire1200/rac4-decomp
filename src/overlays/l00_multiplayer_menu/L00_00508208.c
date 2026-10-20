#include "common.h"

// func_L00_0052ADF0 on the last index (+0x0 - 1), or 0 when empty.

typedef struct Type1 {
    s32 f0;
} Type1;

extern s32 func_L00_0052ADF0(Type1 *arg0, s32 arg1);

s32 func_L00_00508208(Type1 *arg0) {
    if (arg0 == 0 || arg0->f0 <= 0) {
        return 0;
    }
    return func_L00_0052ADF0(arg0, arg0->f0 - 1);
}
