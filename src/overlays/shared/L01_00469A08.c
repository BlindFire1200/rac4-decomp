#include "common.h"

extern void func_L00_005F6AE0(void *, s32, void *, s32, s32, s32, f32);
extern void func_L01_00468EC0(void *);
extern void func_L01_00591BD8(void *, s32, s32);

// Apply the action for event 2 or 4 and return success.
s32 func_L01_00469A08(void *object, s32 event) {
    switch (event) {
    case 2:
        func_L01_00468EC0(object);
        /* fall through */
    case 4:
        func_L00_005F6AE0(object, 8, 0, 0, 0, 0, 0.0f);
        func_L01_00591BD8(object, 0x14, -1);
        break;
    }
    return 1;
}
