#include "common.h"

// Call the function pointer stored at offset 8 of the argument, if it is not null.
void func_005014F8(void *arg0) {
    void (*fp)(void) = *(void (**)(void))((s32 *)arg0 + 2);

    if (fp != 0) {
        fp();
    }
}
