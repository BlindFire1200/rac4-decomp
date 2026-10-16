#include "common.h"

extern s32 func_L00_005E60A0(s32);
extern void func_L01_00591BD8(void *, s32, s32);

// Map the returned action value to its corresponding state transition.
void func_L01_00469288(void *object) {
    s32 action = func_L00_005E60A0(3);

    switch (action) {
    case 0:
        func_L01_00591BD8(object, 0x17, -1);
        return;
    case 1:
        func_L01_00591BD8(object, 0x15, -1);
        return;
    case 2:
        func_L01_00591BD8(object, 0x16, -1);
        return;
    }
}
