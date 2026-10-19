#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004BB018(void);
extern void func_004BB150(void);
extern void func_004BB300(void);

s32 D_002217EC = 0;
s32 D_002217F0 = 0;
s32 D_002217F4 = 0;
s32 D_002217F8 = 0;
extern u8 D_30A5A0[];
extern u8 D_30A5B8[];
extern u8 D_30A5D0[];
extern u8 D_30A5E8[];
extern WordTable4 D_0021F8F0;

// On first use register the four blocks D_30A5A0, D_30A5B8, D_30A5D0 and
// D_30A5E8 through func_00501458 (with the callbacks func_004BB018,
// func_004BB150, func_004BB300), each guarded by its own flag, then return word
// index of the table D_0021F8F0.
s32 func_004BAD90(s32 index) {
    WordTable4 copy;
    if (D_002217EC == 0) {
        func_00501458(D_30A5A0, (void *)func_004BB018, (void *)func_004BB150,
                      (void *)func_004BB300, 0, 0);
        D_002217EC = 1;
    }
    if (D_002217F0 == 0) {
        func_00501458(D_30A5B8, (void *)func_004BB018, (void *)func_004BB150,
                      (void *)func_004BB300, 0, 0);
        D_002217F0 = 1;
    }
    if (D_002217F4 == 0) {
        func_00501458(D_30A5D0, (void *)func_004BB018, (void *)func_004BB150,
                      (void *)func_004BB300, 0, 0);
        D_002217F4 = 1;
    }
    if (D_002217F8 == 0) {
        func_00501458(D_30A5E8, (void *)func_004BB018, (void *)func_004BB150,
                      (void *)func_004BB300, 0, 0);
        D_002217F8 = 1;
    }
    copy = D_0021F8F0;
    return copy.f0[index];
}
