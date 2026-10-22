#include "common.h"

// Call the function pointer stored at offset 4 of the first argument, if it is not null.
void func_005014D0(s32 *arg0) {
    void (*fp)(void) = *(void (**)(void))((s32 *)arg0 + 1);
    if (fp != 0) {
        fp();
    }
}
