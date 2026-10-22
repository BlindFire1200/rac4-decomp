#include "common.h"

// Calls the callback stored at offset 0x14 of the argument struct if that callback is non-null.
typedef struct {
    u32 f00;
    u32 f04;
    u32 f08;
    u32 f0c;
    u32 f10;
    void (*f14)(void *);
} Type1;

void func_00501570(Type1 *arg0) {
    void (*fp)(void *) = arg0->f14;
    if (fp) {
        fp(arg0);
    }
}
