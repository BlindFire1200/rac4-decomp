/* cflags: -fno-opt-stack */
#include "common.h"

void *func_0011EBB8(void *key, u8 *base, u32 nmemb, u32 size, s32 (*compar)(void *, void *)) {
    u32 lo = 0;
    u32 hi = nmemb;
    u32 mid;
    u8 *p;
    s32 r;

    if (nmemb == 0) {
        return 0;
    }
    if (size == 0) {
        return 0;
    }
    while (lo < hi) {
        mid = (lo + hi) >> 1;
        p = base + mid * size;
        r = compar(key, p);
        if (r < 0) {
            hi = mid;
        } else if (r > 0) {
            lo = mid + 1;
        } else {
            return p;
        }
    }
    return 0;
}
