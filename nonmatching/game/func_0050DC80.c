/* Not matching yet: BYTES 8/152 (tools/try_func.py func_0050DC80 --diff). Not part of the build. */
#include "common.h"
typedef struct { u8 pad[8]; void (*f8)(void *, u32); void (*fC)(void *); } TypeVTable;
typedef struct { s32 type; TypeVTable *vtable; } TypeObject;
typedef struct { u8 pad0[0xC]; s32 fC; u8 pad1[0x40]; u16 f50; u8 pad52[4]; u8 f56; u8 pad57; TypeObject *f58; } TypeState;
void func_0050DC80(TypeState *arg0, s32 arg1) {
    TypeObject *obj;
    if ((arg0->f50 != arg1) && (arg0->f50 = arg1, arg1 != 0) && (obj = arg0->f58, obj != 0)) {
        if ((obj->type ^ 4) == 0) obj->vtable->fC(obj);
        if (arg0->fC & 0x8000) {
            arg0->f56 = 4;
            return;
        }
        arg0->f58->vtable->f8(arg0->f58, arg1 - 1);
    }
}
