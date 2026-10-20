#include "common.h"

typedef struct Type2 { u8 pad[0x604]; s32 f604; } Type2;
typedef struct Type1 { u8 pad[0xAC]; Type2 *fAC; } Type1;

extern s32 func_L01_0045B3A0(u8 *object);
extern void func_00591C70(Type1 *object, s32 arg1);

void func_L01_00459BE0(Type1 *arg0) {
    Type2 *s1;

    s1 = arg0->fAC;
    if (func_L01_0045B3A0((u8 *)arg0) != 0) {
        s1->f604 = 0;
        func_00591C70(arg0, 0);
    } else {
        func_00591C70(arg0, 4);
    }
}
