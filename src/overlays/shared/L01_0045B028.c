#include "common.h"

extern void func_L01_005AB318(void *);
extern void func_L01_005AB5E0(void *);

// Run func_L01_005AB5E0 when the linked +0xAC object's +0x614 byte is set,
// otherwise func_L01_005AB318.
void func_L01_0045B028(void *object) {
    if (*(*(unsigned char **)((unsigned char *)object + 0xAC) + 0x614) != 0) {
        func_L01_005AB5E0(object);
    } else {
        func_L01_005AB318(object);
    }
}
