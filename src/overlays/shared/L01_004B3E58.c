#include "common.h"

extern void func_L01_004B3070(void *);
extern void func_L01_004B3830(void *);

// Handle message 2 (reset) or 4 (message handler) for this object.
s32 func_L01_004B3E58(void *arg0, s32 arg1) {
    switch (arg1) {
    case 2:
        func_L01_004B3070(arg0);
        break;
    case 4:
        func_L01_004B3830(arg0);
        break;
    }
    return 1;
}
