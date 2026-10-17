/* Not matching yet: BYTES 15/336 (tools/try_func.py func_004A9E50 --diff). Not part of the build. */
#include "common.h"

extern void func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004A9FA0(void);
extern void func_004AA068(void);
extern void func_004AA0B0(void);
extern u8 D_308400[];
extern u8 D_308418[];
extern u8 D_308430[];
extern u8 D_308448[];
extern s32 D_0021F6E0[];
typedef struct __attribute__((packed)) { u64 f0; u64 f8; } Type1;
s32 D_004A9E50_flag0 = 0;
s32 D_004A9E50_flag1 = 0;
s32 D_004A9E50_flag2 = 0;
s32 D_004A9E50_flag3 = 0;

s32 func_004A9E50(s32 arg0) {
    Type1 vals;
    if (D_004A9E50_flag0 == 0) {
        func_00501458(D_308400, func_004A9FA0, func_004AA068, func_004AA0B0, 0, 0);
        D_004A9E50_flag0 = 1;
    }
    if (D_004A9E50_flag1 == 0) {
        func_00501458(D_308418, func_004A9FA0, func_004AA068, func_004AA0B0, 0, 0);
        D_004A9E50_flag1 = 1;
    }
    if (D_004A9E50_flag2 == 0) {
        func_00501458(D_308430, func_004A9FA0, func_004AA068, func_004AA0B0, 0, 0);
        D_004A9E50_flag2 = 1;
    }
    if (D_004A9E50_flag3 == 0) {
        func_00501458(D_308448, func_004A9FA0, func_004AA068, func_004AA0B0, 0, 0);
        D_004A9E50_flag3 = 1;
    }
    vals = *(Type1 *)D_0021F6E0;
    return ((s32 *)&vals)[arg0];
}
