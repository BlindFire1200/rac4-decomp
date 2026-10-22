#include "common.h"

typedef int u128 __attribute__((mode(TI)));

typedef struct {
    char f00[0x10];
    u128 f10;
} Type1;

typedef struct {
    char f00[0xD4];
    f32 fD4;
} Type2;

extern void *func_004765F0(void);
extern s32 func_0047F8A0(void *a0, u128 a1, s32 a2, f32 a3, f32 a4);

/* looks up the global actor object and forwards a float-driven effect request */
s32 func_00480F40(Type1 *arg0) {
    Type2 *temp_v0 = (Type2 *)func_004765F0();
    if (temp_v0 == NULL) {
        return 0;
    }
    return func_0047F8A0(arg0, arg0->f10, 0, 0.0f, temp_v0->fD4);
}
