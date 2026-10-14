/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x30D0];
    s32 f30D0;
};

s32 func_01F04CEC(s32, s32, s32);

void func_01EEF814(Type1 *arg0, s32 arg1, s32 arg2) {
    func_01F04CEC(arg0->f30D0, arg2, arg1);
}
