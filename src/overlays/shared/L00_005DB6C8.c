#include "common.h"

s32 D_0021EA5C = 0;
extern void func_L00_005DC4B8(void);

// Clear a flag and reset related state.
void func_L00_005DB6C8(void) {
    D_0021EA5C = 0;
    func_L00_005DC4B8();
}
