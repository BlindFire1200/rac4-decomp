#include "common.h"
typedef struct __attribute__((packed)) { u32 f0[4]; } Type1;
void *func_00501458(void *, void *, void *, void *, void *, void *);
void func_004D1708(void);
void func_004D1960(void);
void func_004D1A18(void);
s32 D_002219AC = 0;
s32 D_002219B0 = 0;
s32 D_002219B4 = 0;
s32 D_002219B8 = 0;
extern u8 D_31AFF0[];
extern u8 D_31B008[];
extern u8 D_31B020[];
extern u8 D_31B038[];
extern Type1 D_0021FB00;
s32 func_004D14F0(s32 arg0) {
    Type1 copy;
    if (D_002219AC == 0) { func_00501458(D_31AFF0, (void *)func_004D1708, (void *)func_004D1960, (void *)func_004D1A18, 0, 0); D_002219AC = 1; }
    if (D_002219B0 == 0) { func_00501458(D_31B008, (void *)func_004D1708, (void *)func_004D1960, (void *)func_004D1A18, 0, 0); D_002219B0 = 1; }
    if (D_002219B4 == 0) { func_00501458(D_31B020, (void *)func_004D1708, (void *)func_004D1960, (void *)func_004D1A18, 0, 0); D_002219B4 = 1; }
    if (D_002219B8 == 0) { func_00501458(D_31B038, (void *)func_004D1708, (void *)func_004D1960, (void *)func_004D1A18, 0, 0); D_002219B8 = 1; }
    copy = D_0021FB00;
    return copy.f0[arg0];
}
