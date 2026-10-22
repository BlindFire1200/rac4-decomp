#include "common.h"

extern void func_0054F548();

/* Reset the object's state to 3 when its current state field is 1, otherwise forward the current state value. */
void func_L14_003E9840(void *o) {
    if (*(unsigned char *)((unsigned char *)o + 0x20) == 1) {
        func_0054F548(o, 3, 0);
    } else {
        func_0054F548(o, *(unsigned char *)((unsigned char *)o + 0x20), 0);
    }
}
