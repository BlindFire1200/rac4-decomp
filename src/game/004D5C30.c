#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004D5E48(void);
extern void func_004D5F68(void);
extern void func_004D5FD0(void);

s32 D_00221A04 = 0;
s32 D_00221A08 = 0;
s32 D_00221A0C = 0;
s32 D_00221A10 = 0;
extern u8 D_0031CD70[];
extern u8 D_0031CD88[];
extern u8 D_0031CDA0[];
extern u8 D_0031CDB8[];
extern WordTable4 D_0021FBC8;

// On first use register the four blocks D_0031CD70, D_0031CD88, D_0031CDA0 and
// D_0031CDB8 through func_00501458 (with the callbacks func_004D5E48,
// func_004D5F68, func_004D5FD0), each guarded by its own flag, then return word
// index of the table D_0021FBC8.
s32 func_004D5C30(s32 index) {
    WordTable4 copy;
    if (D_00221A04 == 0) {
        func_00501458(D_0031CD70, (void *)func_004D5E48, (void *)func_004D5F68,
                      (void *)func_004D5FD0, 0, 0);
        D_00221A04 = 1;
    }
    if (D_00221A08 == 0) {
        func_00501458(D_0031CD88, (void *)func_004D5E48, (void *)func_004D5F68,
                      (void *)func_004D5FD0, 0, 0);
        D_00221A08 = 1;
    }
    if (D_00221A0C == 0) {
        func_00501458(D_0031CDA0, (void *)func_004D5E48, (void *)func_004D5F68,
                      (void *)func_004D5FD0, 0, 0);
        D_00221A0C = 1;
    }
    if (D_00221A10 == 0) {
        func_00501458(D_0031CDB8, (void *)func_004D5E48, (void *)func_004D5F68,
                      (void *)func_004D5FD0, 0, 0);
        D_00221A10 = 1;
    }
    copy = D_0021FBC8;
    return copy.f0[index];
}
