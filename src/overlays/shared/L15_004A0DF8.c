/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
struct Type2 {
    char _p0[0x6C];
    s32 f6C;
};
struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
};

s32 func_L00_005E6560(s32);
extern s32 D_00222694_[];
#define D_00222694 (D_00222694_[0])

s32 func_L15_004A0DF8(Type1 *arg0) {
    return func_L00_005E6560(D_00222694 + (arg0->fAC->f6C << 8)) != 0;
}
