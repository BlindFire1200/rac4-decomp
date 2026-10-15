#include "common.h"

extern void *func_004765F0(void);

typedef struct {
    u8 padding[0xC0];
    f32 f_0xC0;
    f32 f_0xC4;
    f32 f_0xC8;
} Type1;

// Store float arguments to structure fields
s32 func_00488980(f32 fparg0, f32 fparg1, f32 fparg2) {
    Type1 *temp_v0;

    temp_v0 = (Type1 *)func_004765F0();
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->f_0xC0 = fparg0;
    temp_v0->f_0xC4 = fparg1;
    temp_v0->f_0xC8 = fparg2;
    return 1;
}
