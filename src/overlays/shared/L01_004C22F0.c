#include "common.h"

extern int func_L00_005BC9B8(void *);
extern short func_L00_005E60D0(int, int);
extern void func_L00_005F6C28(void *, int, int);
extern void func_L01_0056CDB0(void *);
extern void func_L01_00591BD8(void *, int, int);

// Handle an event for the object: event 0 stores a func_L00_005E60D0 value at
// +0x4A0, event 1 runs func_L00_005F6C28 once the +0x4A0 check passes, event 4
// runs func_L01_0056CDB0 and moves to state 3 (-1). Always returns 1.
int func_L01_004C22F0(void *object, int event) {
    unsigned char *linked = *(unsigned char **)((char *)object + 0xAC);
    switch (event) {
    case 0:
        *(short *)(linked + 0x4A0) = func_L00_005E60D0(0x1E, 0x2D);
        break;
    case 1:
        if (func_L00_005BC9B8(linked + 0x4A0) != 0)
            func_L00_005F6C28(object, linked[0x123], 0);
        break;
    case 4:
        func_L01_0056CDB0(object);
        func_L01_00591BD8(object, 3, -1);
        break;
    }
    return 1;
}
