#include "common.h"

extern void func_00512D50(void *, unsigned char, int, int, int);
extern void func_0051FD70(void *, int, int, int);

// Sets a status flag byte on the object and applies a status effect to it.
void func_00512D08(void *arg0) {
    void *obj = arg0;
    func_00512D50(obj, ((unsigned char *)obj)[0x43B], 0, 1, 0x32);
    func_0051FD70(obj, 0x1C, 7, 0);
}
