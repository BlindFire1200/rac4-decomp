#include "common.h"

typedef struct { s32 f0; s32 f4; s32 f8; s32 fC; } FlagWords;
extern FlagWords D_0032ED60[];

// Return the +8 word of the entry for index with the bits of its +0xC word
// masked out.
s32 func_L01_005DAF90(s32 index) {
    FlagWords *entry = &D_0032ED60[index];
    return entry->f8 & ~entry->fC;
}
