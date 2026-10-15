/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    u64 f0;
    s32 f8;
    char _pC[0xA];
    u8 f16;
};

void func_L00_00553678(Type1 *arg0, s32 arg1, s64 arg2) {
    arg0->f8 = arg1;
    arg0->f0 = (u64) ((u64) (arg2 << 0x20) >> 0x20);
    arg0->f16 = (u8) (arg0->f16 | 8);
}
