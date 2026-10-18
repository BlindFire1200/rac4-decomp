#include "common.h"

typedef struct __attribute__((packed)) { u32 f0[4]; } Type1;
void *func_00501458(void *, void *, void *, void *, void *, void *);
void func_004D8D98(void);
void func_004D8E58(void);
void func_004D8EB0(void);
s32 D_00221B34 = 0;
s32 D_00221B38 = 0;
s32 D_00221B3C = 0;
s32 D_00221B40 = 0;
extern u8 D_3210B0[];
extern u8 D_3210C8[];
extern u8 D_3210E0[];
extern u8 D_3210F8[];
extern Type1 D_0021FC38;

s32 func_004D8B80(s32 arg0) {
    Type1 copy;
    if (D_00221B34 == 0) {
        func_00501458(D_3210B0, (void *)func_004D8D98, (void *)func_004D8E58, (void *)func_004D8EB0, 0, 0);
        D_00221B34 = 1;
    }
    if (D_00221B38 == 0) {
        func_00501458(D_3210C8, (void *)func_004D8D98, (void *)func_004D8E58, (void *)func_004D8EB0, 0, 0);
        D_00221B38 = 1;
    }
    if (D_00221B3C == 0) {
        func_00501458(D_3210E0, (void *)func_004D8D98, (void *)func_004D8E58, (void *)func_004D8EB0, 0, 0);
        D_00221B3C = 1;
    }
    if (D_00221B40 == 0) {
        func_00501458(D_3210F8, (void *)func_004D8D98, (void *)func_004D8E58, (void *)func_004D8EB0, 0, 0);
        D_00221B40 = 1;
    }
    copy = D_0021FC38;
    return copy.f0[arg0];
}
