#include "common.h"

typedef struct {
    char pad0[0x25CC];
    s32 f25CC;
    s32 f25D4;
    char pad1[0x2EF0 - 0x25D8];
    void *f2EF0;
} Type1;

extern void func_L00_005F1400(void *, s32);
extern void func_L00_005F1498(void *);
extern void func_L00_005F15B8(void *);
extern void func_L00_005F1620();

/* Picks a branch depending on two state fields, then calls the mode helpers. */
void func_L00_006B7048(Type1 *arg0) {
    if (arg0->f25D4 == 0x14 || arg0->f25CC == 0x76) {
        func_L00_005F1400(arg0->f2EF0, 0);
        func_L00_005F1498(arg0->f2EF0);
    } else {
        func_L00_005F1400(arg0->f2EF0, 1);
        func_L00_005F15B8(arg0->f2EF0);
        func_L00_005F1620();
    }
}
