/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
struct Type2 {
    char _p0[0xA0];
    s32 fA0;
};
struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
};

s32 func_L00_005DD4A0(void *);
s32 func_L00_0067C350(s32);

void func_L01_0040F2B8(Type1 *arg0) {
    func_L00_0067C350(arg0->fAC->fA0);
    func_L00_005DD4A0(arg0);
}
