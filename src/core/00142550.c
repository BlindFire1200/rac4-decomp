/* cflags: -mcheck-zero-division */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    s32 f0;
    s32 f4;
    s32 f8;
};

s32 func_00146638(s32, void *);
extern s32 D_00195688_[];
#define D_00195688 (D_00195688_[0])

s32 func_00142550(s32 arg0, Type1 *arg1, s32 arg2, u32 arg3) {
    s32 temp_v0;
    u32 temp_a0;

    temp_v0 = ((u32) ((arg1->f8 + arg3) - 1) / arg3) * arg3;
    temp_a0 = temp_v0 + arg2;
    if ((u32) (arg1->f0 + arg1->f4) < temp_a0) {
        func_00146638(arg0, &D_00195688);
        return 0;
    }
    arg1->f8 = temp_a0;
    return temp_v0;
}
