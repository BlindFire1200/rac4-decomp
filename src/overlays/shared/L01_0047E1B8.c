#include "common.h"

extern void func_L00_005DD4A0(void *);

// Release the object (func_L00_005DD4A0) when its +0xB8 link is missing or in
// state 0xFE or 0xFD.
void func_L01_0047E1B8(unsigned char *object) {
    unsigned char *linked = *(unsigned char **)(object + 0xB8);
    if (linked == 0 || linked[0x20] == 0xFE || linked[0x20] == 0xFD) {
        func_L00_005DD4A0(object);
    }
}
