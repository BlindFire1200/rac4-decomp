#include "common.h"

typedef struct { unsigned char pad0[0x5C]; s32 f5C; unsigned char pad60[0xC0]; s32 f120; unsigned char pad124[0x400]; s32 f524; s32 f528; s32 f52C; } TypeClamp;

// Set the +0x52C position from value: -1 gives 0, -2 gives the maximum (+0x120
// minus +0x5C), other negatives keep it and a value below +0x120 is taken as
// is. The result is then clamped to 0..maximum.
void func_L00_00712DF8(TypeClamp *obj, s32 value) {
    if (value == -1) obj->f52C = 0;
    else if (value == -2) obj->f52C = obj->f120 - obj->f5C;
    else if (value < 0) { }
    else if (value < obj->f120) obj->f52C = value;
    if (obj->f120 - obj->f5C < obj->f52C) obj->f52C = obj->f120 - obj->f5C;
    if (obj->f52C < 0) obj->f52C = 0;
}
