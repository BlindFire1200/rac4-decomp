#include "common.h"

extern s32 func_L00_005BC9B8(void *);

typedef struct {
    s32 f0;
    u8 f4;
    u8 pad[0x1F];
} Type1;

typedef struct {
    u8 pad[0x68];
    Type1 entries[8];
} Type2;

s32 func_L01_0056B6E0(Type2 *owner, s32 index) {
    if (func_L00_005BC9B8((u8 *)owner + 0x1A2) == 0) {
        return 0;
    }
    if (owner->entries[index].f4 != 0 && owner->entries[index].f0 != 0) {
        return 0;
    }
    return 1;
}
