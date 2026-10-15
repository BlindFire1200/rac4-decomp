/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x6A];
    u16 f6A;
    char _p6C[0x40];
    s32 fAC;
};

s32 func_L00_005BC980(s32);
s32 func_L00_005F15B8();

void func_L01_0050E338(Type1 *arg0) {
    s32 temp_s1;
    u16 temp_v1;

    temp_s1 = arg0->fAC;
    func_L00_005F15B8();
    temp_v1 = arg0->f6A;
    if (temp_v1 <= 0xFFFEU) {
        arg0->f6A = (u16) (temp_v1 + 1);
    }
    func_L00_005BC980(temp_s1 + 0x4A4);
}
