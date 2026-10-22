#include "common.h"

extern s32 func_0011A518(void *, s32, s32);
extern void *D_003367B8[];

typedef struct {
    s32 f00[0x2F14 / 4];
    s32 f2F14;
} Entity;

typedef struct {
    s32 f00[0x6C / 4];
    s32 f6C;
    s32 f70;
} Global;

extern Global D_00354630;

/* func_005420D0: marks the slots of the live entities listed in the table and counts them */
void func_005420D0(void) {
    s64 buf[2];
    void **p;
    void *e;
    s32 i;

    func_0011A518((void *)buf, 0, 0xB);

    for (i = 9, p = D_003367B8; i >= 0; p++, i--) {
        e = *p;
        if (e != 0) {
            D_00354630.f6C++;
            if (((Entity *)e)->f2F14 < 0xB && ((u8 *)buf)[((Entity *)e)->f2F14] == 0) {
                D_00354630.f70++;
                ((u8 *)buf)[((Entity *)e)->f2F14] = 1;
            }
        }
    }
}
