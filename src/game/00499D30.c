#include "common.h"

typedef struct {
    u8 *p;
    s32 pad[4];
} Type499D30;

void func_00499538(Type499D30 *);
extern Type499D30 D_2F3950[];

void func_00499D30(void) {
    s32 i;

    for (i = 0; i < 32; i++) {
        if (D_2F3950[i].p != NULL && *D_2F3950[i].p != 0) {
            func_00499538(&D_2F3950[i]);
        }
    }
}
