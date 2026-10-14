/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x34];
    s32 f34;
    s32 f38;
    s32 f3C;
    s32 f40;
    s32 f44;
    s32 f48;
    s32 f4C;
    s32 f50;
    s32 f54;
    s32 f58;
    s32 f5C;
    s32 f60;
    s32 f64;
    s32 f68;
};

s32 func_L00_00765238(s32);
s32 func_L00_00766300(s32);
s32 func_L00_00766EB8(s32);
s32 func_L00_0076CB98(s32);
s32 func_L00_0076E620(s32);
s32 func_L00_00770340(s32);
s32 func_L00_00770DB0(s32);
s32 func_L00_00771A48(s32);
s32 func_L00_00772B88(s32);
s32 func_L00_00773AE8();
s32 func_L00_00775868(s32);
s32 func_L00_00776698(s32);
s32 func_L00_00777150(s32);
s32 func_L00_00779248(s32);
s32 func_L00_0077B958(s32);

void func_L00_00773B18(Type1 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;

    func_L00_00773AE8();
    func_L00_00765238(arg0->f34);
    func_L00_00766300(arg0->f38);
    func_L00_00766EB8(arg0->f3C);
    temp_a0 = arg0->f40;
    if (temp_a0 != 0) {
        func_L00_0076CB98(temp_a0);
    }
    temp_a0_2 = arg0->f44;
    if (temp_a0_2 != 0) {
        func_L00_00770340(temp_a0_2);
    }
    func_L00_0076E620(arg0->f48);
    func_L00_00770DB0(arg0->f4C);
    func_L00_00771A48(arg0->f50);
    temp_a0_3 = arg0->f54;
    if (temp_a0_3 != 0) {
        func_L00_00772B88(temp_a0_3);
    }
    temp_a0_4 = arg0->f58;
    if (temp_a0_4 != 0) {
        func_L00_00775868(temp_a0_4);
    }
    func_L00_00776698(arg0->f5C);
    func_L00_00777150(arg0->f60);
    func_L00_00779248(arg0->f64);
    func_L00_0077B958(arg0->f68);
}
