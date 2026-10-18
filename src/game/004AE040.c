#include "common.h"
typedef struct __attribute__((packed)) { u32 f0[4]; } Type1;
void *func_00501458(void *, void *, void *, void *, void *, void *);
void func_004AE2A0(void);
void func_004AE6D8(void);
void func_004AE448(void);
s32 D_0022169C = 0;
s32 D_002216A0 = 0;
s32 D_002216A4 = 0;
s32 D_002216A8 = 0;
extern u8 D_309240[];
extern u8 D_309258[];
extern u8 D_309270[];
extern u8 D_309288[];
extern Type1 D_0021F740;
s32 func_004AE040(s32 arg0) {
    Type1 copy;
    if (D_0022169C == 0) { func_00501458(D_309240, (void *)func_004AE2A0, (void *)func_004AE6D8, (void *)func_004AE448, 0, 0); D_0022169C = 1; }
    if (D_002216A0 == 0) { func_00501458(D_309258, (void *)func_004AE2A0, (void *)func_004AE6D8, (void *)func_004AE448, 0, 0); D_002216A0 = 1; }
    if (D_002216A4 == 0) { func_00501458(D_309270, (void *)func_004AE2A0, (void *)func_004AE6D8, (void *)func_004AE448, 0, 0); D_002216A4 = 1; }
    if (D_002216A8 == 0) { func_00501458(D_309288, (void *)func_004AE2A0, (void *)func_004AE6D8, (void *)func_004AE448, 0, 0); D_002216A8 = 1; }
    copy = D_0021F740;
    return copy.f0[arg0];
}
