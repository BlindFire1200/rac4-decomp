#include "common.h"

extern void func_L00_00607960(void *);

// Release the four handles of the linked block and set the object's byte 0x30 from its 0x1C float.
void func_L41_0043C088(void *object) {
    char *linked = *(char **)((char *)object + 0xAC);
    void **p = (void **)(linked + 0x30);
    int i;
    for (i = 3; i >= 0; i--) {
        if (*p != 0) {
            func_L00_00607960(*p);
            *p = 0;
        }
        p++;
    }
    *(unsigned char *)((char *)object + 0x30) = *(float *)(linked + 0x1C) > 0.0f ? 0xFF : 0x40;
}
