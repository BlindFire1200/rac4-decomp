#include "common.h"

typedef struct __attribute__((packed)) { u32 f0[4]; } Type1;
void *func_00501458(void *, void *, void *, void *, void *, void *);
void func_004AD888(void);
void func_004AD8E8(void);
void func_004AD918(void);
s32 D_0022167C = 0;
s32 D_00221680 = 0;
s32 D_00221684 = 0;
s32 D_00221688 = 0;
extern u8 D_309140[];
extern u8 D_309158[];
extern u8 D_309170[];
extern u8 D_309188[];
extern Type1 D_0021F700;

s32 func_004AD690(s32 arg0) {
    Type1 copy;
    if (D_0022167C == 0) {
        func_00501458(D_309140, (void *)func_004AD888, (void *)func_004AD8E8, (void *)func_004AD918, 0, 0);
        D_0022167C = 1;
    }
    if (D_00221680 == 0) {
        func_00501458(D_309158, (void *)func_004AD888, (void *)func_004AD8E8, (void *)func_004AD918, 0, 0);
        D_00221680 = 1;
    }
    if (D_00221684 == 0) {
        func_00501458(D_309170, (void *)func_004AD888, (void *)func_004AD8E8, (void *)func_004AD918, 0, 0);
        D_00221684 = 1;
    }
    if (D_00221688 == 0) {
        func_00501458(D_309188, (void *)func_004AD888, (void *)func_004AD8E8, (void *)func_004AD918, 0, 0);
        D_00221688 = 1;
    }
    copy = D_0021F700;
    return copy.f0[arg0];
}
