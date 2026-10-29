#include "common.h"

extern void func_00159308(s32 arg0);

// Passes the word at arg1[0] to func_00159308.
void func_0048AC48(s32 unused0, s32 *arg1) {
    func_00159308(*arg1);
}
