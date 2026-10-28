/* cflags: -fno-opt-stack */
/* Algorithm reference: Doug Lea malloc 2.6.4, newlib 8a0efa53e44919bcf5ccb1d3353618a82afdf8bc.
 * A version of malloc/free/realloc written by Doug Lea and released to the public domain.
 * Matching reconstruction, not an unchanged vendor file. */
#include "common.h"

typedef struct mc {
    u32 prev_size;
    u32 size;
    struct mc *fd;
    struct mc *bk;
} *mchunkptr;

extern void func_0011F338(s32);
extern void func_0011F398(s32);
extern void *func_00124F98(s32, u32);
extern void func_001256C8(s32, void *);
extern u64 func_00130480(u64, u64);

#define REMS(vs, n) (((vs) < (n)) ? -(long)(u32)((n) - (vs)) : (long)(u32)((vs) - (n)))
#define chunksize(p) ((p)->size & ~3)
#define chunk_at_offset(p, s) ((mchunkptr)((char *)(p) + (s)))
#define set_head(p, s) ((p)->size = (s))
#define set_head_size(p, s) ((p)->size = (((p)->size & 1) | (s)))
#define set_inuse_bit_at_offset(p, s) (((mchunkptr)((char *)(p) + (s)))->size |= 1)

void *func_00126170(s32 reent_ptr, u32 alignment, u32 bytes) {
    u32 nb;
    char *m;
    mchunkptr p;
    char *brk;
    mchunkptr newp;
    u32 newsize;
    u32 leadsize;
    mchunkptr remainder;
    long remainder_size;

    if (alignment <= 16) {
        return func_00124F98(reent_ptr, bytes);
    }
    if (alignment < 16) {
        alignment = 16;
    }
    nb = (bytes + 19 < 31) ? 16 : ((bytes + 19) & ~15);
    m = (char *)func_00124F98(reent_ptr, nb + alignment + 16);
    if (m == 0) {
        return 0;
    }
    func_0011F338(reent_ptr);
    p = (mchunkptr)(m - 8);
    if (func_00130480((u64)m, alignment) == 0) {
    } else {
        brk = (char *)(((u32)(m + alignment - 1)) & -(s32)alignment) - 8;
        if ((long)(brk - (char *)p) < 16) {
            brk = brk + alignment;
        }
        newp = (mchunkptr)brk;
        leadsize = brk - (char *)p;
        newsize = chunksize(p) - leadsize;
        set_head(newp, newsize | 1);
        set_inuse_bit_at_offset(newp, newsize);
        set_head_size(p, leadsize);
        func_001256C8(reent_ptr, (char *)p + 8);
        p = newp;
    }
    remainder_size = REMS(chunksize(p), nb);
    if (remainder_size >= 16) {
        remainder = chunk_at_offset(p, nb);
        set_head(remainder, remainder_size | 1);
        set_head_size(p, nb);
        func_001256C8(reent_ptr, (char *)remainder + 8);
    }
    func_0011F398(reent_ptr);
    return (char *)p + 8;
}
