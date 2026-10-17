#include "common.h"

typedef struct { u8 pad[7]; u8 unk7; u8 unk8; } Type1;
Type1 *func_0048A970(s32);

s32 func_0048A290(s32 unused, s32 arg1) {
    s32 result = 0;
    Type1 *object = func_0048A970(arg1);
    if (object != 0 && object->unk8 != 5 && object->unk8 != 6 && object->unk8 != 7) {
        result = 1;
        object->unk7 |= 1;
    }
    return result;
}
