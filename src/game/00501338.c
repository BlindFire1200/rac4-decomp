#include "common.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 (*f10)(s32, s32);
} Type_00501338;

/* Initialises the object's fields and returns the object pointer. */
void *func_00501338(Type_00501338 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 (*arg4)(s32, s32)) {
    arg0->f8 = arg1;
    arg0->f4 = arg2;
    arg0->f10 = arg4;
    arg0->fC = arg3;
    arg0->f0 = 0;
    return arg0;
}
