#include "common.h"

extern void func_00513E28(void *, unsigned char, int, int, int);
extern void func_00520F30(void *, int, int, int);

// PAL version of func_00512D08 (6 instead of 7 in the second call): sets a status flag byte on the object and applies a status effect to it.
void func_00513DE0(void *arg0) {
    void *obj = arg0;
    func_00513E28(obj, ((unsigned char *)obj)[0x43B], 0, 1, 0x32);
    func_00520F30(obj, 0x1C, 6, 0);
}
