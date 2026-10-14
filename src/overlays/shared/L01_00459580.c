/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
struct Type2 {
    char _p0[0x410];
    s32 f410;
};
struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
};

s32 func_L01_00459978(void *);
s32 func_L01_0045BF60(void *);
s32 func_L01_0045C0A0();

void func_L01_00459580(Type1 *arg0) {
    if ((arg0->fAC->f410 != 0) && (func_L01_0045C0A0() != 0)) {
        func_L01_00459978(arg0);
        func_L01_0045BF60(arg0);
    }
}
