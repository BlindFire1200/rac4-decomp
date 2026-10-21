#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004C97B8(void);
extern void func_004CA0E0(void);
extern void func_004C9C20(void);

s32 D_002218E4 = 0;
s32 D_002218E8 = 0;
s32 D_002218EC = 0;
s32 D_002218F0 = 0;
extern u8 D_0030E538[];
extern u8 D_0030E550[];
extern u8 D_0030E568[];
extern u8 D_0030E580[];
extern WordTable4 D_0021FA38;

// On first use register the four blocks D_0030E538, D_0030E550, D_0030E568 and
// D_0030E580 through func_00501458 (with the callbacks func_004C97B8,
// func_004CA0E0, func_004C9C20), each guarded by its own flag, then return word
// index of the table D_0021FA38.
s32 func_004C94F8(s32 index) {
    WordTable4 copy;
    if (D_002218E4 == 0) {
        func_00501458(D_0030E538, (void *)func_004C97B8, (void *)func_004CA0E0,
                      (void *)func_004C9C20, 0, 0);
        D_002218E4 = 1;
    }
    if (D_002218E8 == 0) {
        func_00501458(D_0030E550, (void *)func_004C97B8, (void *)func_004CA0E0,
                      (void *)func_004C9C20, 0, 0);
        D_002218E8 = 1;
    }
    if (D_002218EC == 0) {
        func_00501458(D_0030E568, (void *)func_004C97B8, (void *)func_004CA0E0,
                      (void *)func_004C9C20, 0, 0);
        D_002218EC = 1;
    }
    if (D_002218F0 == 0) {
        func_00501458(D_0030E580, (void *)func_004C97B8, (void *)func_004CA0E0,
                      (void *)func_004C9C20, 0, 0);
        D_002218F0 = 1;
    }
    copy = D_0021FA38;
    return copy.f0[index];
}
