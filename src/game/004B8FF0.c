#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004B9240(void);
extern void func_004B9330(void);
extern void func_004B93B0(void);

s32 D_0022179C = 0;
s32 D_002217A0 = 0;
s32 D_002217A4 = 0;
s32 D_002217A8 = 0;
extern u8 D_30A1A0[];
extern u8 D_30A1B8[];
extern u8 D_30A1D0[];
extern u8 D_30A1E8[];
extern WordTable4 D_0021F890;

// On first use register the four blocks D_30A1A0, D_30A1B8, D_30A1D0 and
// D_30A1E8 through func_00501458 (with the callbacks func_004B9240,
// func_004B9330, func_004B93B0), each guarded by its own flag, then return word
// index of the table D_0021F890.
s32 func_004B8FF0(s32 index) {
    WordTable4 copy;
    if (D_0022179C == 0) {
        func_00501458(D_30A1A0, (void *)func_004B9240, (void *)func_004B9330,
                      (void *)func_004B93B0, 0, 0);
        D_0022179C = 1;
    }
    if (D_002217A0 == 0) {
        func_00501458(D_30A1B8, (void *)func_004B9240, (void *)func_004B9330,
                      (void *)func_004B93B0, 0, 0);
        D_002217A0 = 1;
    }
    if (D_002217A4 == 0) {
        func_00501458(D_30A1D0, (void *)func_004B9240, (void *)func_004B9330,
                      (void *)func_004B93B0, 0, 0);
        D_002217A4 = 1;
    }
    if (D_002217A8 == 0) {
        func_00501458(D_30A1E8, (void *)func_004B9240, (void *)func_004B9330,
                      (void *)func_004B93B0, 0, 0);
        D_002217A8 = 1;
    }
    copy = D_0021F890;
    return copy.f0[index];
}
