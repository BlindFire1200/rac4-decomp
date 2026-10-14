/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x6A];
    u16 f6A;
};

s32 func_L00_005FC990(void *);
s32 func_L01_00506E90();

void func_L01_00506C78(Type1 *arg0) {
    u16 temp_v1;

    if (func_L01_00506E90() == 0) {
        temp_v1 = arg0->f6A;
        if (temp_v1 <= 0xFFFEU) {
            arg0->f6A = (u16) (temp_v1 + 1);
        }
        func_L00_005FC990(arg0);
    }
}
