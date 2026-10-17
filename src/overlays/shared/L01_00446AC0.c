#include "common.h"

void func_L00_005DD4A0(void *);

// Clear the +0xB8 word and run func_L00_005DD4A0 on the object.
void func_L01_00446AC0(void *object) {
    *(s32 *)(object + 0xB8) = 0;
    func_L00_005DD4A0(object);
}
