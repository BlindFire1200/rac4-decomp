#include "common.h"

extern void func_00611808(int, void *, int);

// Open a network message of type 0xA and send it with a single 4-byte payload.
void func_L41_003DF528(void *object, int arg1) {
    int local0;
    int handle;

    handle = func_L01_006B4FC0(object, 0xA, 0, 0xFA);
    if (handle != 0) {
        local0 = arg1;
        func_00611808(handle, &local0, 4);
    }
}
