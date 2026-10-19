#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004D8D98(void);
extern void func_004D8E58(void);
extern void func_004D8EB0(void);

s32 D_00221B34 = 0;
s32 D_00221B38 = 0;
s32 D_00221B3C = 0;
s32 D_00221B40 = 0;
extern u8 D_3210B0[];
extern u8 D_3210C8[];
extern u8 D_3210E0[];
extern u8 D_3210F8[];
extern WordTable4 D_0021FC38;

// On first use register the four blocks D_3210B0, D_3210C8, D_3210E0 and
// D_3210F8 through func_00501458 (with the callbacks func_004D8D98,
// func_004D8E58, func_004D8EB0), each guarded by its own flag, then return word
// index of the table D_0021FC38.
s32 func_004D8B80(s32 index) {
    WordTable4 copy;
    if (D_00221B34 == 0) {
        func_00501458(D_3210B0, (void *)func_004D8D98, (void *)func_004D8E58,
                      (void *)func_004D8EB0, 0, 0);
        D_00221B34 = 1;
    }
    if (D_00221B38 == 0) {
        func_00501458(D_3210C8, (void *)func_004D8D98, (void *)func_004D8E58,
                      (void *)func_004D8EB0, 0, 0);
        D_00221B38 = 1;
    }
    if (D_00221B3C == 0) {
        func_00501458(D_3210E0, (void *)func_004D8D98, (void *)func_004D8E58,
                      (void *)func_004D8EB0, 0, 0);
        D_00221B3C = 1;
    }
    if (D_00221B40 == 0) {
        func_00501458(D_3210F8, (void *)func_004D8D98, (void *)func_004D8E58,
                      (void *)func_004D8EB0, 0, 0);
        D_00221B40 = 1;
    }
    copy = D_0021FC38;
    return copy.f0[index];
}
