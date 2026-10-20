#include "common.h"

extern void func_L00_005DD4A0(void *);
extern void func_L01_004DE8B0(void *);
extern int func_L41_0043A328(void *);

// Release the linked object's held resources, then clear its state word.
void func_L41_0043B330(void *object) {
    char *linked = *(char **)((char *)object + 0xAC);
    if (*(void **)(linked + 4) != 0) {
        if (func_L41_0043A328(object) != 0) {
            if (*(short *)(*(char **)(linked + 4) + 0xBC) == 0x2106) {
                func_L00_005DD4A0(*(void **)(linked + 0x20));
                *(void **)(linked + 0x20) = 0;
            }
            func_L00_005DD4A0(*(void **)(linked + 4));
        } else {
            func_L01_004DE8B0(object);
        }
        *(void **)(linked + 4) = 0;
    }
    *(int *)(linked + 0x40) = 0;
}
