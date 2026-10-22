#include "common.h"

extern s32 func_00547D58();
extern s32 func_00548398(s32, s32, s32, s32);

/* Forwards the incoming arguments, inserting the result of func_00547D58 as the second argument. */
s32 func_00548478(s32 p0, s32 p1, s32 p2, s32 p3) {
    return func_00548398(p1, func_00547D58(p0), p2, p3);
}
