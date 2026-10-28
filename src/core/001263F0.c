/* cflags: -fno-opt-stack */
/* Algorithm reference: Doug Lea malloc 2.6.4, newlib 8a0efa53e44919bcf5ccb1d3353618a82afdf8bc.
 * A version of malloc/free/realloc written by Doug Lea and released to the public domain.
 * Matching reconstruction, not an unchanged vendor file. */
#include "common.h"

typedef struct {
    s32 f[10];
} MI;

extern void func_0011F338(s32);
extern void func_0011F398(s32);
extern void func_00126340(void);
extern MI D_00164650;

MI func_001263F0(s32 reent_ptr) {
    MI mi;

    func_0011F338(reent_ptr);
    func_00126340();
    mi = D_00164650;
    func_0011F398(reent_ptr);
    return mi;
}
