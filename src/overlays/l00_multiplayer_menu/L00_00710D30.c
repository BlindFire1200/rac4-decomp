/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x5C];
    s32 f5C;
};

s32 func_L00_007107F0();

void func_L00_00710D30(Type1 *arg0) {
    func_L00_007107F0();
    arg0->f5C = 0;
}
