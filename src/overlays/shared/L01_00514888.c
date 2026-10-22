#include "common.h"

extern void func_L01_005D73D0(s32, s32);

typedef struct L01_Type1 L01_Type1;
typedef s32 (*L01_vtbl_fn)(L01_Type1 *);

struct L01_Type1 {
    s32 f00[5];
    L01_Type1 *f14;
    s32 f18[13];
    L01_vtbl_fn f4C;
};

/* Calls the object's virtual slot 0x4C with the object itself, then reports the result with code 0xF. */
void func_L01_00514888(s32 arg0, s32 arg1, L01_Type1 *arg2) {
    func_L01_005D73D0(arg2->f14->f4C(arg2), 0xF);
}
