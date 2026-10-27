#include "common.h"

typedef struct Buf {
    char pad0[0x54];
    u8 used;
} Buf;

extern void func_00453718(void *arg0, s32 arg1, s32 arg2);

// Passes the write position (base + 0xC + used) to a copy routine, then advances the used count by n.
void func_0053CB20(Buf *b, void *a, s32 n) {
    func_00453718(a, (s32)((char *)b + (b->used + 0xC)), n);
    b->used = b->used + n;
}
