#include "common.h"

// While +0x260 is set: call func_L00_007647B0(0xBC) and the three updates, then clear it.

typedef struct Type1 {
    char _p0[0x260];
    u8 f260;
} Type1;

extern void func_L00_007647B0(s32 arg0);
extern void func_L00_0071B478(Type1 *arg0);
extern void func_L00_0071BC68(Type1 *arg0);
extern void func_L00_0071BB58(Type1 *arg0);

void func_L00_007397C0(Type1 *arg0) {
    if (arg0->f260 != 0) {
        func_L00_007647B0(0xBC);
        func_L00_0071B478(arg0);
        func_L00_0071BC68(arg0);
        func_L00_0071BB58(arg0);
        arg0->f260 = 0;
    }
}
