/* Not matching yet: BYTES 15/336 (tools/try_func.py func_004A52E0 --diff). Not part of the build. */
#include "common.h"

extern void func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004A54D8(void);
extern void func_004A5558(void);
extern void func_004A5588(void);
extern u8 D_307F08[];
extern u8 D_307F20[];
extern u8 D_307F38[];
extern u8 D_307F50[];
extern s32 D_0021F6A8[];
typedef struct __attribute__((packed)) { u64 f0; u64 f8; } Type1;
s32 D_004A52E0_flag0 = 0;
s32 D_004A52E0_flag1 = 0;
s32 D_004A52E0_flag2 = 0;
s32 D_004A52E0_flag3 = 0;

s32 func_004A52E0(s32 arg0) {
    Type1 vals;
    if (D_004A52E0_flag0 == 0) {
        func_00501458(D_307F08, func_004A54D8, func_004A5558, func_004A5588, 0, 0);
        D_004A52E0_flag0 = 1;
    }
    if (D_004A52E0_flag1 == 0) {
        func_00501458(D_307F20, func_004A54D8, func_004A5558, func_004A5588, 0, 0);
        D_004A52E0_flag1 = 1;
    }
    if (D_004A52E0_flag2 == 0) {
        func_00501458(D_307F38, func_004A54D8, func_004A5558, func_004A5588, 0, 0);
        D_004A52E0_flag2 = 1;
    }
    if (D_004A52E0_flag3 == 0) {
        func_00501458(D_307F50, func_004A54D8, func_004A5558, func_004A5588, 0, 0);
        D_004A52E0_flag3 = 1;
    }
    vals = *(Type1 *)D_0021F6A8;
    return ((s32 *)&vals)[arg0];
}
