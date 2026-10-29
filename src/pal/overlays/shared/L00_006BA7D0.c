/* Return the word at +0x2318 if the tag at +0x2314 equals two; otherwise -1. */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x2314];
    s32 f2314;
    s32 f2318;
};

s32 func_L00_006BA7D0(Type1 *arg0) {
    if (arg0->f2314 == 2) {
        return arg0->f2318;
    }
    return -1;
}
