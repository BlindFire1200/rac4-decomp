#include "common.h"

typedef struct Type1 {
    u8 f00[0x10];
    s32 f10;
    void *f14;
} Type1;

// Publishes arg0's old chain tail to *arg1, links arg1 in as arg0's new tail, and drops arg0's counter by one.
void func_004EED78(Type1 *arg0, void **arg1) {
    *arg1 = arg0->f14;
    arg0->f14 = arg1;
    arg0->f10 = arg0->f10 - 1;
}
