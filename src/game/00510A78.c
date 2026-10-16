#include "common.h"
typedef struct { char pad[4]; s32 f4,f8,fC,f10,f14,f18; } Type1;
void func_00510A78(Type1 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->f4 = arg2; arg0->f8 = arg3; arg0->fC = arg1;
    arg0->f18 = 0; arg0->f10 = 0; arg0->f14 = 0;
}
