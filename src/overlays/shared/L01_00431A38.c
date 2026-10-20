#include "common.h"

typedef struct Type2 Type2;
struct Type2 {
    char _p0[0x19];
    u8 f19;
};

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x20];
    u8 f20;
    char _p21[0x6A - 0x21];
    u16 f6A;
    char _p6C[0xAC - 0x6C];
    Type2 *fAC;
};

void func_004310E0(Type1 *);
void func_L01_004315D8(Type1 *, Type2 *);
extern void func_L01_00591BD8(u8 *object, s32 new_state, s32 param);

void func_L01_00431A38(Type1 *arg0) {
    Type2 *s1 = arg0->fAC;
    s32 done;

    switch (arg0->f20) {
    case 1:
        if (arg0->f6A == 0) {
            func_L01_00591BD8((u8 *)arg0, 2, -1);
        } else {
            arg0->f6A--;
        }
        break;
    case 2:
        arg0->f6A++;
        if (arg0->f6A >= 0x78) {
            done = 1;
        } else {
            func_L01_004315D8(arg0, s1);
            done = s1->f19 == 0;
        }
        if (done) {
            func_L01_00591BD8((u8 *)arg0, 3, -1);
        }
        break;
    case 3:
        func_004310E0(arg0);
        break;
    }
}
