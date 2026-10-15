/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0xBC];
    s32 fBC;
};

s32 func_L41_004119A8(s16);

void func_L41_00411C00(Type1 *arg0) {
    func_L41_004119A8(arg0->fBC);
}
