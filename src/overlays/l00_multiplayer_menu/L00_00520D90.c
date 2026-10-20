#include "common.h"

// Call the handler at +0x4, or return -1 when there is none.

typedef struct Type1 Type1;

struct Type1 {
    s32 f0;
    s32 (*f4)(Type1 *arg0, s32 arg1, s32 arg2);
};

s32 func_L00_00520D90(Type1 *arg0, s32 arg1, s32 arg2) {
    if (arg0 == 0 || arg0->f4 == 0) {
        return -1;
    }
    return arg0->f4(arg0, arg1, arg2);
}
