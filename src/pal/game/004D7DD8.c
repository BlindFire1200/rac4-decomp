#include "common.h"
typedef struct __attribute__((packed, aligned(4))) { int v[3]; } Table;
typedef struct { char pad[9]; unsigned char flag; char pad2[2]; } Entry;
extern Table D_0021FC98;
extern char D_001F8878[];
static inline unsigned int addr(unsigned int a, unsigned int b) { return a + b; }
static inline int bit(int x) { return (x >> 3) & 1; }
int func_004D7DD8(void) {
    Table copy = D_0021FC98;
    int n;
    int result = 0;

    for (n = 0; n < 3; n++) {
        Entry *e = (Entry *)addr((unsigned int)D_001F8878, (unsigned int)copy.v[n] * 12);
        if (e->flag) result++;

    }
    return result + bit(*(unsigned char *)addr((unsigned int)D_001F8878, 0xF10));
}
