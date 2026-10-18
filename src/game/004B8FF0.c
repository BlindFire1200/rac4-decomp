#include "common.h"
typedef struct __attribute__((packed)) { u32 f0[4]; } Type1;
void *func_00501458(void *, void *, void *, void *, void *, void *);
void func_004B9240(void);
void func_004B9330(void);
void func_004B93B0(void);
s32 D_0022179C = 0;
s32 D_002217A0 = 0;
s32 D_002217A4 = 0;
s32 D_002217A8 = 0;
extern u8 D_30A1A0[];
extern u8 D_30A1B8[];
extern u8 D_30A1D0[];
extern u8 D_30A1E8[];
extern Type1 D_0021F890;
s32 func_004B8FF0(s32 arg0) {
    Type1 copy;
    if (D_0022179C == 0) { func_00501458(D_30A1A0, (void *)func_004B9240, (void *)func_004B9330, (void *)func_004B93B0, 0, 0); D_0022179C = 1; }
    if (D_002217A0 == 0) { func_00501458(D_30A1B8, (void *)func_004B9240, (void *)func_004B9330, (void *)func_004B93B0, 0, 0); D_002217A0 = 1; }
    if (D_002217A4 == 0) { func_00501458(D_30A1D0, (void *)func_004B9240, (void *)func_004B9330, (void *)func_004B93B0, 0, 0); D_002217A4 = 1; }
    if (D_002217A8 == 0) { func_00501458(D_30A1E8, (void *)func_004B9240, (void *)func_004B9330, (void *)func_004B93B0, 0, 0); D_002217A8 = 1; }
    copy = D_0021F890;
    return copy.f0[arg0];
}
