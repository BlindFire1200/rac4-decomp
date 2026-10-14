/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0xF0];
    f32 fF0;
    f32 fF4;
};

f32 func_00453928(f32);
f32 func_00453940(f32);
f32 func_00453B10(f32, f32);

void func_004796C8(Type1 *arg0, f32 *arg1, f32 *arg2, f32 fparg0, f32 fparg1, f32 fparg2) {
    f32 temp_f20;
    f32 temp_f20_2;

    temp_f20 = func_00453940(*arg1);
    arg0->fF0 = (f32) (fparg0 * temp_f20 * func_00453940(*arg2));
    temp_f20_2 = func_00453940(*arg1);
    arg0->fF4 = (f32) (fparg0 * temp_f20_2 * func_00453928(*arg2));
    *arg1 = func_00453B10(*arg1, fparg1);
    *arg2 = func_00453B10(*arg2, fparg2);
}
