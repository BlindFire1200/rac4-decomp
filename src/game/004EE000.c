#include "common.h"

typedef struct TypeObj TypeObj;
typedef struct { u8 pad0[0x10]; s32 f10; } TypeState;
typedef struct { u8 pad0[0x24]; TypeState *f24; } TypeChild;
struct TypeObj { u8 pad0[8]; void (*f8)(void); void (*fC)(s32); u8 pad1[0x2F14 - 0x10]; s32 f2F14; };
typedef struct { u8 pad0[8]; void (*f8)(void); void (*fC)(s32); } TypeResult;
extern TypeObj *D_3367B8[];
extern TypeChild *D_3284A0[];
extern s32 D_0021EDD4;
extern s32 D_0021EDD8;
extern void *func_0046D428(s32, s32, s32);

// For each of the 10 slots of D_3367B8 whose object is missing or does not
// match the id, copy the +0x10 word of the state at +0x24 into the +0x98 word
// of each of its four D_3284A0 children. Then call the registered callbacks
// (ids 0x263B and 0x265B) as the global state D_0021EDD4 requires.
void func_004EE000(s32 owner_id) {
    s32 i, j;
    TypeObj *obj;
    TypeResult *r;
    for (i = 0; i < 10; i++) {
        obj = D_3367B8[i];
        if (obj == 0 || (obj->f2F14 != owner_id && (D_0021EDD4 != 0 || D_0021EDD8 != 1 || owner_id < 0))) {
            for (j = 0; j < 4; j++) {
                TypeChild *child = D_3284A0[i * 4 + j];
                if (child != 0) *(s32 *)((u8 *)child + 0x98) = child->f24->f10;
            }
        }
    }
    if (D_0021EDD4 == 0 && owner_id == -1) {
        r = func_0046D428(0x263B, 0, 0xC);
        if (r != 0 && r->f8 != 0) r->f8();
    }
    if (D_0021EDD4 == 1) {
        r = func_0046D428(0x265B, 0, 0x14);
        if (r != 0 && r->fC != 0) r->fC(owner_id);
    }
}
