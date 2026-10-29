#include "common.h"

extern s32 func_01EA95C0(s32*);

// Stores its argument in a local and passes the local's address on when the argument is nonzero.
void func_01ED3F20(s32 arg0) {
    s32 local;

    local = arg0;
    if (arg0 != 0) {
        func_01EA95C0(&local);
    }
}
