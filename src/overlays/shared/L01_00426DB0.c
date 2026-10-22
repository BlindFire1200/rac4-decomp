#include "common.h"

extern void *func_L01_006B4FC0(void *, int, int, int);
extern void func_006A9B38(void *, void *, int);

// Write the given 32-bit value into the object through a sink made from it.
void func_L01_00426DB0(void *object, int value) {
    void *sink = func_L01_006B4FC0(object, 0, 0, 0xFA);
    int local = value;
    func_006A9B38(sink, &local, 4);
}
