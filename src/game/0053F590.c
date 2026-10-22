#include "common.h"

extern void *func_00476660(int);
extern void func_00477120(int, int);

// Clears the flag at offset 0x5C on the object bound to arg0's handle, then releases that handle.
void func_0053F590(void *arg0) {
    void *temp_v0;

    temp_v0 = func_00476660(*(int *)((unsigned char *)arg0 + 0x2B0));
    if (temp_v0 != 0) {
        *(short *)((unsigned char *)temp_v0 + 0x5C) = 0;
    }
    func_00477120(*(int *)((unsigned char *)arg0 + 0x2B0), 0);
}
