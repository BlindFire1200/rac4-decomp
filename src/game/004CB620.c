#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004CB848(void);
extern void func_004CBE10(void);
extern void func_004CBEF8(void);

s32 D_00221904 = 0;
s32 D_00221908 = 0;
s32 D_0022190C = 0;
s32 D_00221910 = 0;
extern u8 D_0030E9F0[];
extern u8 D_0030EA08[];
extern u8 D_0030EA20[];
extern u8 D_0030EA38[];
extern WordTable4 D_0021FA80;

// On first use register the four blocks D_0030E9F0, D_0030EA08, D_0030EA20 and
// D_0030EA38 through func_00501458 (with the callbacks func_004CB848,
// func_004CBE10, func_004CBEF8), each guarded by its own flag, then return word
// index of the table D_0021FA80.
s32 func_004CB620(s32 index) {
    WordTable4 copy;
    if (D_00221904 == 0) {
        func_00501458(D_0030E9F0, (void *)func_004CB848, (void *)func_004CBE10,
                      (void *)func_004CBEF8, 0, 0);
        D_00221904 = 1;
    }
    if (D_00221908 == 0) {
        func_00501458(D_0030EA08, (void *)func_004CB848, (void *)func_004CBE10,
                      (void *)func_004CBEF8, 0, 0);
        D_00221908 = 1;
    }
    if (D_0022190C == 0) {
        func_00501458(D_0030EA20, (void *)func_004CB848, (void *)func_004CBE10,
                      (void *)func_004CBEF8, 0, 0);
        D_0022190C = 1;
    }
    if (D_00221910 == 0) {
        func_00501458(D_0030EA38, (void *)func_004CB848, (void *)func_004CBE10,
                      (void *)func_004CBEF8, 0, 0);
        D_00221910 = 1;
    }
    copy = D_0021FA80;
    return copy.f0[index];
}
