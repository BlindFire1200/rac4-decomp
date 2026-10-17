#include "common.h"
typedef struct { u8 pad[0xC]; s32 flags; } A;
typedef struct { u8 pad0[4]; u16 type; u8 pad6[2]; s32 value; } B;
s32 func_0050C090(A *arg0, B *arg1) {
    s32 result = 1;
    switch (arg1->type) {
    case 0x6B:
        if (arg1->value != 0) arg0->flags |= 1;
        else arg0->flags &= -2;
        break;
    case 0x6C:
        if (arg1->value != 0) arg0->flags |= 2;
        else arg0->flags &= -3;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}
