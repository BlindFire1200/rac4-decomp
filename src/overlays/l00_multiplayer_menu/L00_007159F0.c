/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x68];
    s32 f68;
    char _p6C[0xB00];
    s32 fB6C;
    s32 fB70;
};

s32 func_L00_007159F0(Type1 *arg0) {
    return (arg0->fB70 + arg0->f68) >= arg0->fB6C;
}
