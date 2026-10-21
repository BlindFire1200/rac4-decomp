/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    s32 f0;
    char _p4[0x4];
    s32 f8;
};

s32 func_004F22D8();

s32 func_004F2360(Type1 *arg0) {
    if (func_004F22D8() != 0) {
        return 0;
    }
    return arg0->f0 + (arg0->f8 * 0xD0000);
}
