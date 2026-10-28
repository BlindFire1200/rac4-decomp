#include "common.h"
typedef struct __attribute__((packed)) { unsigned int f0[4]; } WordTable4;
typedef struct { unsigned char f0[9]; unsigned char f9; unsigned char fa[2]; } Entry;
extern WordTable4 D_0021FC88;
extern Entry D_001F8878[];
static inline unsigned int add(unsigned int a, unsigned int b) { return a + b; }
int func_004D7CE8(void) {
    WordTable4 copy = D_0021FC88;
    int result = 0;
    unsigned int *p = copy.f0;
    int remaining;
    for (remaining = 0; remaining < 4; remaining++) {
        Entry *entry = (Entry *)add((unsigned int)D_001F8878, *p++ * 12);
        if (entry->f9) result++;
    }
    return result;
}
