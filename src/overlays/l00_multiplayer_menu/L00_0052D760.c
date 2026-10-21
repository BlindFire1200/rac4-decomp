#include "common.h"

// For type 1, func_L00_0052D600(func_L00_00508600(+0x4)); else 0.

typedef struct Type1 {
    s32 f0;
    s32 f4;
} Type1;

extern s32 func_L00_00508600(s32 arg0);
extern s32 func_L00_0052D600(s32 arg0);

s32 func_L00_0052D760(Type1 *arg0) {
    if (arg0->f0 != 1) {
        return 0;
    }
    return func_L00_0052D600(func_L00_00508600(arg0->f4));
}
