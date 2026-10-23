/* cflags: -fno-opt-stack */
#include "common.h"

typedef struct SFile {
    char pad0[0xC];
    u16 flags;
    s16 h;
    char pad10[0x44];
    s32 fd;
} SFile;

extern s32 func_0011C040(s32, s32, s32, s32);
extern s64 func_0011C1C0(s32, s32, s32, s32);

// Clears the stale flag, then runs the second lookup and truncates it.
s32 func_0011DAA8(SFile *p, s32 arg1, s32 arg2) {
    if (p->flags & 0x100) {
        func_0011C040(p->fd, p->h, 0, 2);
    }
    p->flags &= 0xEFFF;
    return (s32)func_0011C1C0(p->fd, p->h, arg1, arg2);
}
