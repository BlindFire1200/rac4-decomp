#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004D01E8(void);
extern void func_004D03E0(void);
extern void func_004D04A0(void);

s32 D_0022198C = 0;
s32 D_00221990 = 0;
s32 D_00221994 = 0;
s32 D_00221998 = 0;
extern u8 D_0031A8D0[];
extern u8 D_0031A8E8[];
extern u8 D_0031A900[];
extern u8 D_0031A918[];
extern WordTable4 D_0021FAE0;

// On first use register the four blocks D_0031A8D0, D_0031A8E8, D_0031A900 and
// D_0031A918 through func_00501458 (with the callbacks func_004D01E8,
// func_004D03E0, func_004D04A0), each guarded by its own flag, then return word
// index of the table D_0021FAE0.
s32 func_004CFEE8(s32 index) {
    WordTable4 copy;
    if (D_0022198C == 0) {
        func_00501458(D_0031A8D0, (void *)func_004D01E8, (void *)func_004D03E0,
                      (void *)func_004D04A0, 0, 0);
        D_0022198C = 1;
    }
    if (D_00221990 == 0) {
        func_00501458(D_0031A8E8, (void *)func_004D01E8, (void *)func_004D03E0,
                      (void *)func_004D04A0, 0, 0);
        D_00221990 = 1;
    }
    if (D_00221994 == 0) {
        func_00501458(D_0031A900, (void *)func_004D01E8, (void *)func_004D03E0,
                      (void *)func_004D04A0, 0, 0);
        D_00221994 = 1;
    }
    if (D_00221998 == 0) {
        func_00501458(D_0031A918, (void *)func_004D01E8, (void *)func_004D03E0,
                      (void *)func_004D04A0, 0, 0);
        D_00221998 = 1;
    }
    copy = D_0021FAE0;
    return copy.f0[index];
}
