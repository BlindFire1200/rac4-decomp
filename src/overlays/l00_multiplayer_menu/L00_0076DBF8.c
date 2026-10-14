/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0xCC];
    s32 fCC;
    s32 fD0;
};

s32 func_0011A518(s32, s32, s32);
s32 func_0011AB04(s32);
s32 func_L00_005C1758(s32, s32, s32);
s32 func_L00_0076E478(void *, s32);

void func_L00_0076DBF8(Type1 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x20;
    func_0011A518(temp_s1, 0, 0xAC);
    func_L00_005C1758(temp_s1, arg1, func_0011AB04(arg1));
    arg0->fCC = arg2;
    arg0->fD0 = arg3;
    func_L00_0076E478(arg0, 4);
}
