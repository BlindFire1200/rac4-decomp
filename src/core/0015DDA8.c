/* cflags: -G0 */
#include "common.h"

typedef struct {
    s32 f0, f4, f8, fC, f10, f14, f18, f1C, f20, f24;
} Obj;

s32 func_0015DDA8(Obj *o) {
    if (o == 0) {
        return 1;
    }
    o->f8 = 1;
    o->f0 = 0;
    o->f4 = 0;
    o->fC = 0;
    o->f10 = 0;
    o->f14 = 0;
    o->f1C = 0;
    o->f20 = 0;
    o->f24 = 0;
    o->f18 = 0;
    return 0;
}
