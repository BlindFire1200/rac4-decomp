#include "common.h"

extern void func_L00_006735D8(s32);
extern void func_00679408(void);
extern s32 D_0021DA30;

// Run the global-parameter call, then the follow-up.
void func_L00_006702B0(void) {
    func_L00_006735D8(D_0021DA30);
    func_00679408();
}
