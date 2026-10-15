/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x4];
    s32 f4;
    char _p8[0x54];
    s32 f5C;
    s32 f60;
    char _p64[0x10];
    s32 f74;
};

s32 func_0069CC48(s32, s32, s32);
s32 func_0069D408(s32, s32);
s32 func_0069D5D8(s32, s32);

void func_L00_00712040(Type1 *arg0) {
    s32 temp_a0;
    s32 temp_v1;

    temp_v1 = arg0->f4;
    if ((temp_v1 != 0) && (temp_a0 = arg0->f5C, (temp_a0 != 0))) {
        if (temp_v1 == 1) {
            func_0069CC48(temp_a0, 1, 0);
            return;
        }
        func_0069CC48(temp_a0, 1, 1);
        func_0069D408(arg0->f5C, arg0->f74);
        func_0069D5D8(arg0->f5C, arg0->f60);
    }
}
