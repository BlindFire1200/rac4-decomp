#include "common.h"

extern void func_L05_003E6710(void);
extern void func_00568B98(void *o, unsigned char state, int type);

// Checks the object flag at +0x20: if it is clear it kicks the object and returns 1, otherwise 0.
int func_L05_003E66C0(void *o) {
    if (*(unsigned char *)(o + 0x20) == 0) {
        func_L05_003E6710();
        func_00568B98(o, 1, -1);
        return 1;
    }
    return 0;
}
