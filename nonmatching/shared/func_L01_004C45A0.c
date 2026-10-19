/* Not matching yet: BYTES 16/116 (tools/try_func.py func_L01_004C45A0 --diff). Not part of the build. */
#include "common.h"

typedef struct S_arg0 S_arg0;
struct S_arg0 {
    char _p0[0x20];
    u8 f20;
};

void func_L00_005F15B8(void *);
s32 func_L00_0066D220(s32, s32, void *);
void func_L01_00593D50(void *, f32, f32, f32);
s32 func_L01_005AE158(void *);


s32 func_L01_004C45A0(S_arg0 *arg0) {
    if (arg0->f20 != 2) {
        if (func_L01_005AE158(arg0) != 0) {
            func_L00_0066D220(2, 0, arg0);
        }
        func_L01_00593D50(arg0, 32.0f, -1.0f, 0.0f);
        func_L00_005F15B8(arg0);
    }
    return 0;
}
