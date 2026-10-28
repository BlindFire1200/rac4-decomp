/* cflags: -G0 */
#include "common.h"

typedef struct {
    u8 pad[0x10];
    u32 f10;
    u8 pad2[4];
    s32 f18;
} Obj;

void func_00155CC8(Obj *o) {
    o->f18 = 0;
    o->f10 &= ~1;
}
