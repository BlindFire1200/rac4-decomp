/* cflags: -mno-split-addresses */
#include "common.h"

typedef void (*Type1)(void *, void *);

typedef struct {
    char f00[0x14];
    Type1 f14;
} Type2;

typedef struct {
    char f00[0x4];
    Type2 *f4;
} Type3;

s32 func_L00_005BC9B8(void *);
s32 func_L00_00607960(void *);

/* Dispatches through the table at arg0+0x34, or falls back to a plain update. */
void func_L00_0061AAA0(Type3 *arg0) {
    Type3 *temp_s1;

    temp_s1 = (Type3 *)((char *)arg0 + 0x30);
    if (temp_s1 != NULL) {
        if (func_L00_005BC9B8((void *)((char *)arg0 + 0xA)) != 0) {
            func_L00_00607960(arg0);
        } else {
            temp_s1->f4->f14(arg0, temp_s1);
        }
    }
}
