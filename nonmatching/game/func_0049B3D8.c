/* Not matching yet: BYTES 15/336 (tools/try_func.py func_0049B3D8 --diff). Not part of the build. */
#include "common.h"

extern void func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_0049B8E0(void);
extern void func_0049B900(void);
extern void func_0049B920(void);
extern u8 D_306EC8[];
extern u8 D_306EE0[];
extern u8 D_306EF8[];
extern u8 D_306F10[];
extern s32 D_0021F640[];
typedef struct __attribute__((packed)) { u64 f0; u64 f8; } Type1;
s32 D_0049B3D8_flag0 = 0;
s32 D_0049B3D8_flag1 = 0;
s32 D_0049B3D8_flag2 = 0;
s32 D_0049B3D8_flag3 = 0;

s32 func_0049B3D8(s32 arg0) {
    Type1 vals;
    if (D_0049B3D8_flag0 == 0) {
        func_00501458(D_306EC8, func_0049B8E0, func_0049B900, func_0049B920, 0, 0);
        D_0049B3D8_flag0 = 1;
    }
    if (D_0049B3D8_flag1 == 0) {
        func_00501458(D_306EE0, func_0049B8E0, func_0049B900, func_0049B920, 0, 0);
        D_0049B3D8_flag1 = 1;
    }
    if (D_0049B3D8_flag2 == 0) {
        func_00501458(D_306EF8, func_0049B8E0, func_0049B900, func_0049B920, 0, 0);
        D_0049B3D8_flag2 = 1;
    }
    if (D_0049B3D8_flag3 == 0) {
        func_00501458(D_306F10, func_0049B8E0, func_0049B900, func_0049B920, 0, 0);
        D_0049B3D8_flag3 = 1;
    }
    vals = *(Type1 *)D_0021F640;
    return ((s32 *)&vals)[arg0];
}
