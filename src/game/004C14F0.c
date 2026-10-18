#include "common.h"
typedef struct __attribute__((packed)) { u32 f0[4]; } Type1;
void *func_00501458(void *, void *, void *, void *, void *, void *);
void func_004C1640(void);
void func_004C1E98(void);
void func_004C1FA0(void);
s32 D_0022186C = 0;
s32 D_00221870 = 0;
s32 D_00221874 = 0;
s32 D_00221878 = 0;
extern u8 D_30B698[];
extern u8 D_30B6B0[];
extern u8 D_30B6C8[];
extern u8 D_30B6E0[];
extern Type1 D_0021F998;
s32 func_004C14F0(s32 arg0) {
    Type1 copy;
    if (D_0022186C == 0) { func_00501458(D_30B698, (void *)func_004C1640, (void *)func_004C1E98, (void *)((u8 *)func_004C1FA0 + 8), 0, 0); D_0022186C = 1; }
    if (D_00221870 == 0) { func_00501458(D_30B6B0, (void *)func_004C1640, (void *)func_004C1E98, (void *)((u8 *)func_004C1FA0 + 8), 0, 0); D_00221870 = 1; }
    if (D_00221874 == 0) { func_00501458(D_30B6C8, (void *)func_004C1640, (void *)func_004C1E98, (void *)((u8 *)func_004C1FA0 + 8), 0, 0); D_00221874 = 1; }
    if (D_00221878 == 0) { func_00501458(D_30B6E0, (void *)func_004C1640, (void *)func_004C1E98, (void *)((u8 *)func_004C1FA0 + 8), 0, 0); D_00221878 = 1; }
    copy = D_0021F998;
    return copy.f0[arg0];
}
