#include "common.h"

// Object event handler: event 0 clears the s32 at +0x98, event 4 copies the s32 at +0x10 of the pointer at +0x24, and it always returns 1.
int func_L01_004C17F0(void *arg0, int arg1) {
    switch (arg1) {
    case 0:
        *(int *)((char *)arg0 + 0x98) = 0;
        break;
    case 4:
        *(int *)((char *)arg0 + 0x98) = *(int *)((char *)(*(void **)((char *)arg0 + 0x24)) + 0x10);
        break;
    }
    return 1;
}
