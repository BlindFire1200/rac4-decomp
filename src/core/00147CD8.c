#include "common.h"

typedef struct Type1 {
    u8 f00[0x1C];
    s32 *f1C;
} Type1;

typedef struct Type2 {
    u8 f00[0x04];
    s32 f04;
    s32 f08;
} Type2;

extern void func_001481C0(s32, s32, s32);

/* Calls func_001481C0 with two fields of the object at offset 0x1C and the constant 0x3210. */
void func_00147CD8(Type1 *arg0) {
    Type2 *temp;

    temp = arg0->f1C;
    func_001481C0(temp->f04, temp->f08, 0x3210);
}
