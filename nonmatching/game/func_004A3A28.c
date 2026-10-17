/* Not matching yet: BYTES 15/336 (tools/try_func.py func_004A3A28 --diff). Not part of the build. */
#include "common.h"

extern void func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004A3B78(void);
extern void func_004A4578(void);
extern void func_004A45F8(void);
extern u8 D_307A08[];
extern u8 D_307A20[];
extern u8 D_307A38[];
extern u8 D_307A50[];
extern s32 D_0021F680[];
typedef struct __attribute__((packed)) { u64 f0; u64 f8; } Type1;
s32 D_004A3A28_flag0 = 0;
s32 D_004A3A28_flag1 = 0;
s32 D_004A3A28_flag2 = 0;
s32 D_004A3A28_flag3 = 0;

s32 func_004A3A28(s32 arg0) {
    Type1 vals;
    if (D_004A3A28_flag0 == 0) {
        func_00501458(D_307A08, func_004A3B78, func_004A4578, func_004A45F8, 0, 0);
        D_004A3A28_flag0 = 1;
    }
    if (D_004A3A28_flag1 == 0) {
        func_00501458(D_307A20, func_004A3B78, func_004A4578, func_004A45F8, 0, 0);
        D_004A3A28_flag1 = 1;
    }
    if (D_004A3A28_flag2 == 0) {
        func_00501458(D_307A38, func_004A3B78, func_004A4578, func_004A45F8, 0, 0);
        D_004A3A28_flag2 = 1;
    }
    if (D_004A3A28_flag3 == 0) {
        func_00501458(D_307A50, func_004A3B78, func_004A4578, func_004A45F8, 0, 0);
        D_004A3A28_flag3 = 1;
    }
    vals = *(Type1 *)D_0021F680;
    return ((s32 *)&vals)[arg0];
}
