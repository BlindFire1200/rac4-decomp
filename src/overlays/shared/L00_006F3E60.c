/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
struct Type2 {
    char _p0[0x60];
    s32 f60;
};
struct Type1 {
    char _p0[0x2B0];
    Type2 *f2B0;
};

s32 func_006F5670(s32);
s32 func_L00_005F4648(void *, s32);
extern s32 D_0021E6B4_[];
#define D_0021E6B4 (D_0021E6B4_[0])

void func_L00_006F3E60(Type1 *arg0, s32 arg1) {
    arg0->f2B0->f60 = func_006F5670(arg1);
    if (D_0021E6B4 == 1) {
        func_L00_005F4648(arg0->f2B0, arg1);
    }
}
