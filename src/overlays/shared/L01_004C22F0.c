#include "common.h"

extern int func_L00_005BC9B8(void *);
extern short func_L00_005E60D0(int, int);
extern void func_L00_005F6C28(void *, int, int);
extern void func_L01_0056CDB0(void *);
extern void func_L01_00591BD8(void *, int, int);
int func_L01_004C22F0(void *arg0, int arg1) {
    unsigned char *state = *(unsigned char **)((char *)arg0 + 0xAC);
    switch (arg1) {
    case 0:
        *(short *)(state + 0x4A0) = func_L00_005E60D0(0x1E, 0x2D);
        break;
    case 1:
        if (func_L00_005BC9B8(state + 0x4A0) != 0)
            func_L00_005F6C28(arg0, state[0x123], 0);
        break;
    case 4:
        func_L01_0056CDB0(arg0);
        func_L01_00591BD8(arg0, 3, -1);
        break;
    }
    return 1;
}
