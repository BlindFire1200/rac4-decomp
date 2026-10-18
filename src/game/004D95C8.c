#include "common.h"

typedef struct __attribute__((packed)) { u32 f0[4]; } Type1;
extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004D97E0(void);
extern void func_004D98A0(void);
extern void func_004D98F8(void);
s32 D_00221B54 = 0;
s32 D_00221B58 = 0;
s32 D_00221B5C = 0;
s32 D_00221B60 = 0;
extern u8 D_3215C0[];
extern u8 D_3215D8[];
extern u8 D_3215F0[];
extern u8 D_321608[];
extern Type1 D_0021FC50;

s32 func_004D95C8(s32 arg0) {
    Type1 copy;
    if (D_00221B54 == 0) {
        func_00501458(D_3215C0, (void *)func_004D97E0, (void *)func_004D98A0, (void *)func_004D98F8, 0, 0);
        D_00221B54 = 1;
    }
    if (D_00221B58 == 0) {
        func_00501458(D_3215D8, (void *)func_004D97E0, (void *)func_004D98A0, (void *)func_004D98F8, 0, 0);
        D_00221B58 = 1;
    }
    if (D_00221B5C == 0) {
        func_00501458(D_3215F0, (void *)func_004D97E0, (void *)func_004D98A0, (void *)func_004D98F8, 0, 0);
        D_00221B5C = 1;
    }
    if (D_00221B60 == 0) {
        func_00501458(D_321608, (void *)func_004D97E0, (void *)func_004D98A0, (void *)func_004D98F8, 0, 0);
        D_00221B60 = 1;
    }
    copy = D_0021FC50;
    return copy.f0[arg0];
}
