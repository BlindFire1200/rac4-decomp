/* cflags: -G0 */
#include "common.h"

typedef struct { s32 f0; s32 f4; s32 *f8; s32 *fC; s32 pad[2]; } Obj;
extern Obj D_1A5B80;

Obj *func_00127DC8(s32 v) {
    D_1A5B80.f0 = v;
    D_1A5B80.f4 = 0;
    D_1A5B80.fC = D_1A5B80.pad;
    D_1A5B80.f8 = D_1A5B80.pad;
    return &D_1A5B80;
}
