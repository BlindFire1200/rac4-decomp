#include "common.h"
typedef struct Type1 Type1;
typedef struct Type7 Type7;
struct Type7 {
    u8 pad00[0x10]; s32 f10;
    u8 pad14[0x29]; u8 f3D;
    u8 pad3E[0x12]; s32 f50[8]; f32 f70[8];
};
extern Type7 *func_005A16E8(Type1 *);
f32 func_L01_005A21A8(Type1 *arg0, s32 arg1) {
    Type7 *object;
    s32 i;
    if (arg1 == 0) return 0.0f;
    object = func_005A16E8(arg0);
    if (object == 0) return 0.0f;
    if (arg1 == object->f10) {
        return object->f70[object->f3D];
    }
    for (i = 0; i < 8; i++) {
        if (object->f50[i] == arg1) return object->f70[i];
    }
    return 0.0f;
}
