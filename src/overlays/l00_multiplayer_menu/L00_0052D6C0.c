#include "common.h"

// func_L00_0052FAA8 on +0x18 of the object at +0x4, or 0 when there is none.

typedef struct Type2 {
    char _p0[0x18];
    s32 f18;
} Type2;

typedef struct Type1 {
    char _p0[0x4];
    Type2 * f4;
} Type1;

extern s32 func_L00_0052FAA8(s32 arg0);

s32 func_L00_0052D6C0(Type1 *arg0) {
    if (arg0 == 0 || arg0->f4 == 0) {
        return 0;
    }
    return func_L00_0052FAA8(arg0->f4->f18);
}
