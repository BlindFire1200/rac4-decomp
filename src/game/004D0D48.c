#include "common.h"

typedef struct Entry1A4 {
    char pad0[0x18C];
    s32 f18C;
    char pad190[0x14];
} Entry1A4;

typedef struct Type78 Type78;
struct Type78 {
    char pad0[4];
    u8 f4;
    char pad5[0x13];
    void (*f18)(Type78 *, s32);
    char pad1C[0x5C];
};

extern Entry1A4 D_0031A960[];
extern Type78 D_003D95C8[];
extern s32 func_00505B20(void);
extern s32 func_004983E8(s32);
extern void func_00497980(s32);
extern void func_0049B208(s32);
extern void func_004D0C18(s32);
extern void func_004D0E78(void);

void func_004D0D48(void) {
    s32 flag = 0;
    s32 id = func_00505B20();
    Entry1A4 *e = &D_0031A960[id];
    Type78 *t;

    switch (func_004983E8(6)) {
    case 7:
        t = &D_003D95C8[e->f18C];
        if (t->f4 != 0) {
            goto busy;
        }
        D_003D95C8[e->f18C].f18(t, 1);
        func_00497980(0x10);
        break;
    case 1:
    case 8:
        t = &D_003D95C8[e->f18C];
        if (t->f4 != 0) {
            goto busy;
        }
        D_003D95C8[e->f18C].f18(t, 0);
        func_00497980(0x10);
        break;
    busy:
        func_00497980(4);
        break;
    case 2:
        func_0049B208(id);
        break;
    case 5:
        flag = 1;
    case 6:
        func_004D0C18(flag);
        break;
    case 13:
        func_004D0E78();
        break;
    }
}
