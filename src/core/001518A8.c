/* cflags: -G0 */
#include "common.h"

typedef struct {
    u8 pad[0x1C];
    u8 *p;
} Obj;

s32 func_001518A8(Obj *o, u8 *out) {
    *out = o->p[0x5C];
    return 0;
}
