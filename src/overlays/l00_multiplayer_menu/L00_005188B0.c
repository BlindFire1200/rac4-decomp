/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x1C];
    s32 f1C;
};

s32 func_L00_0051EB68(s32);

s32 func_L00_005188B0(Type1 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->f1C;
    if (temp_a0 != 0) {
        func_L00_0051EB68(temp_a0);
    }
    return 0;
}
