#include "common.h"

extern void func_L00_006ACA80(void *a, void *b);

typedef struct {
    u8 unk000[0x2E56];
    s16 f2E56;
} Type1;

/* Reset the flag and run the setup callback over the eighteen entries */
void func_L00_006ACE58(Type1 *arg0) {
    s32 i;
    u8 *p;

    arg0->f2E56 = 0;
    p = (u8 *)arg0 + 0x820;
    for (i = 17; i >= 0; i--) {
        func_L00_006ACA80(arg0, p);
        p += 0xB0;
    }
}
