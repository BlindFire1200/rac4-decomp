#include "common.h"

typedef struct Type1 {
    u8 pad[0x14];
    s32 f14;
} Type1;

extern Type1 *func_006C1008(s32);
extern s32 func_L00_00702608(s32, s32);
extern void func_L01_00591BD8(u8 *object, s32 new_state, s32 param);

extern s32 D_0021DE10;
extern u8 *D_0021EBD0;
extern u8 D_0021EBF0;
typedef struct Type2 {
    u8 pad[9];
    u8 f9;
    u8 pad2[2];
} Type2;

extern u8 D_001F87F0[];

u8 D_00220B61 = 0;

static inline Type2 *func_L01_003CC2F8_entry(s32 i) {
    return (Type2 *)(i * 0xC + ((D_0021DE10 - 1) % 20) * 0x304 + D_001F87F0);
}

void func_L01_003CC2F8(s32 arg0) {
    Type1 *p;

    p = func_006C1008(func_L00_00702608(D_0021DE10, arg0));
    if (arg0 >= 9 && (p->f14 != 0 ||
        func_L01_003CC2F8_entry(arg0)->f9 != 0)) {
        D_00220B61 = 0;
    } else {
        D_00220B61 = 1;
    }
    if (D_0021EBF0 == 0) {
        func_L01_00591BD8(D_0021EBD0, 0x10, -1);
    }
}
