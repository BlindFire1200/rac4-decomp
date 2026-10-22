#include "common.h"

typedef struct {
    unsigned char pad0[0x20];
    unsigned int f20;
    unsigned char pad1[0x63C - 0x24];
    unsigned short f63C;
} Type_0015F068;

extern Type_0015F068 D_00172160;
extern unsigned char *D_0021DFE8;

/* Copies two bytes from the object at D_0021DFE8 into the struct at D_00172160 (word at +0x20, halfword at +0x63C), unless the third argument is -2. */
void func_0015F068(int arg0, int arg1, int arg2) {
    if (arg2 != -2) {
        unsigned char *obj = D_0021DFE8;
        D_00172160.f20 = obj[0x1A6];
        D_00172160.f63C = obj[0x1A7];
    }
}
