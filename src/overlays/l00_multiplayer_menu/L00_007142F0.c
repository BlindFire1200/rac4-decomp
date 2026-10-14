#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x10A60];
    s32 f10A60;
    s32 f10A64;
};

s32 func_L00_007142F0(Type1 *arg0) {
    return arg0->f10A60 != arg0->f10A64;
}
