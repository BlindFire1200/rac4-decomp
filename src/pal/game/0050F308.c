/* cflags: -G0 */
#include "common.h"
extern s32 D_003D3548;

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x8];
    s32 f8;
};

s32 func_0015DB98(void);


void func_0050F308(Type1 *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg1 & 1;
    arg0->f8 = (s32)&D_003D3548;
    if (temp_a1 != 0) {
        func_0015DB98();
    }
}
