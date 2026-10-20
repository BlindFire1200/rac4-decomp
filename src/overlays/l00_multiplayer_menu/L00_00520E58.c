#include "common.h"

// Call the handler at +0x8 with request 0x10 and arg1 by address, or return 0 when there is none.

typedef struct Type1 Type1;

struct Type1 {
    s32 f0;
    s32 f4;
    s32 (*f8)(Type1 *arg0, s32 arg1, s32 *arg2);
};

s32 func_L00_00520E58(Type1 *arg0, s32 arg1) {
    s32 t = arg1;

    if (arg0 == 0 || arg0->f8 == 0) {
        return 0;
    }
    return arg0->f8(arg0, 0x10, &t);
}
