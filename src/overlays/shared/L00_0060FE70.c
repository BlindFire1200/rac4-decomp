#include "common.h"

extern s32 func_L00_005BC9B8(void *);
extern void func_L00_00607960(void *);

// Release the entry when its +0xA id is set and the check passes.
void func_L00_0060FE70(u8 *entry) {
    if (*(s16 *)(entry + 0xA) != -1 && func_L00_005BC9B8(entry + 0xA) != 0) {
        func_L00_00607960(entry);
    }
}
