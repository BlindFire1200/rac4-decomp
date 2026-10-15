#include "common.h"

extern void func_0015A078(void *);
extern void func_00161E60(void);
extern s32 D_0010F1E0[];
extern s32 D_001170D0[];
extern u8 D_00172160[];

// Conditional initialization with cleanup
void func_0015BBF8(void) {
    u8 *s0 = D_00172160;

    if (s0[0x265] != 0) {
        func_00161E60();
    }

    if (s0[0x225] != 0) {
        func_0015A078(D_0010F1E0);
        func_0015A078(D_001170D0);
        s0[0x225] = 0;
    }
}
