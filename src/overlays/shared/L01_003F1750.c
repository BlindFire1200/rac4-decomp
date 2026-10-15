/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0xBC];
    s32 fBC;
};

s32 func_L00_005DEBD0(s16, s32, s32);
s32 func_L00_005E8130(void *);

s32 func_L01_003F1750(Type1 *arg0) {
    if ((arg0 != NULL) && (func_L00_005DEBD0(arg0->fBC, 6, 0xD0) != 0)) {
        return func_L00_005E8130(arg0) != 0;
    }
    return 0;
}
