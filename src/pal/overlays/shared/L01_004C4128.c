#include "common.h"

extern int func_00453D20(void *);
extern short func_00472E70(int, int);
extern void func_00481A48(void *, int, int);
extern void func_L01_0056F988(void *);
extern void func_00474368(void *, int, int);

// PAL version of func_L01_004C22F0: handle an event for the object; event 0 stores a
// func_00472E70 frame count at +0x4A0, converted to 50 Hz ((n * 5 + 2) / 6), event 1
// runs func_00481A48 once the +0x4A0 check passes, event 4 runs func_L01_0056F988 and
// moves to state 3 (-1). Always returns 1.
int func_L01_004C4128(void *object, int event) {
    unsigned char *linked = *(unsigned char **)((char *)object + 0xAC);
    switch (event) {
    case 0:
        *(short *)(linked + 0x4A0) = (func_00472E70(0x1E, 0x2D) * 5 + 2) / 6;
        break;
    case 1:
        if (func_00453D20(linked + 0x4A0) != 0)
            func_00481A48(object, linked[0x123], 0);
        break;
    case 4:
        func_L01_0056F988(object);
        func_00474368(object, 3, -1);
        break;
    }
    return 1;
}
