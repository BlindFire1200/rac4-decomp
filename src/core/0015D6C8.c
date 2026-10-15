/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x4];
    s32 f4;
};

s32 func_00161118(s32);
s32 func_00161128();

void func_0015D6C8(Type1 *arg0) {
    if (func_00161128() >= 0) {
        func_00161118(arg0->f4);
    }
}
