#include "common.h"

typedef struct { s32 f0; s32 f4; s32 f8; s32 fC; } Type1;
extern Type1 D_0032ED60[];

s32 func_L01_005DAF90(s32 arg0) {
    Type1 *p = &D_0032ED60[arg0];
    return p->f8 & ~p->fC;
}
