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

extern void func_0011F338(void);
extern void func_0011F398(s32);
extern void func_001259C0(s32, u32);
extern mchunkptr D_00164220[];
extern u64 D_00164628[];
extern u32 D_00164630[];

#define av_ D_00164220
#define bin_at(i) ((mchunkptr)((char *)&av_[2 * (i) + 2] - 8))
#define top (bin_at(0)->fd)
#define last_remainder (bin_at(1))
#define binblocks (bin_at(0)->size)
#define chunksize(p) ((p)->size & ~3)
#define chunk_at_offset(p, s) ((mchunkptr)((char *)(p) + (s)))
#define inuse_bit_at_offset(p, s) (((mchunkptr)((char *)(p) + (s)))->size & 1)
#define set_head(p, s) ((p)->size = (s))
#define set_foot(p, s) (((mchunkptr)((char *)(p) + (s)))->prev_size = (s))
#define unlink(P, BK, FD) \
    { \
        BK = P->bk; \
        FD = P->fd; \
        FD->bk = BK; \
        BK->fd = FD; \
    }
#define smallbin_index(sz) (((u32)(sz)) >> 3)
#define bin_index(sz) \
    (((((u32)(sz)) >> 9) == 0) ? (((u32)(sz)) >> 3) : \
     ((((u32)(sz)) >> 9) <= 4) ? 56 + (((u32)(sz)) >> 6) : \
     ((((u32)(sz)) >> 9) <= 20) ? 91 + (((u32)(sz)) >> 9) : \
     ((((u32)(sz)) >> 9) <= 84) ? 110 + (((u32)(sz)) >> 12) : \
     ((((u32)(sz)) >> 9) <= 340) ? 119 + (((u32)(sz)) >> 15) : \
     ((((u32)(sz)) >> 9) <= 1364) ? 124 + (((u32)(sz)) >> 18) : 126)
#define idx2binblock(ii) ((long)1 << ((ii) / 4))
#define mark_binblock(ii) (binblocks |= idx2binblock(ii))
#define frontlink(P, S, IDX, BK, FD) \
    { \
        if (S < 512) { \
            IDX = smallbin_index(S); \
            mark_binblock(IDX); \
            BK = bin_at(IDX); \
            FD = BK->fd; \
            P->bk = BK; \
            P->fd = FD; \
            FD->bk = BK->fd = P; \
        } else { \
            IDX = bin_index(S); \
            BK = bin_at(IDX); \
            FD = BK->fd; \
            if (FD == BK) { \
                mark_binblock(IDX); \
            } else { \
                while (FD != BK && S < chunksize(FD)) { \
                    FD = FD->fd; \
                } \
                BK = FD->bk; \
            } \
            P->bk = BK; \
            P->fd = FD; \
            FD->bk = BK->fd = P; \
        } \
    }

void func_001256C8(s32 reent_ptr, void *mem) {
    mchunkptr p;
    u32 hd;
    u32 sz;
    s32 idx;
    mchunkptr next;
    u32 nextsz;
    u32 prevsz;
    mchunkptr bck;
    mchunkptr fwd;
    s32 islr;

    if (mem == 0) {
        return;
    }
    func_0011F338();
    p = (mchunkptr)((char *)mem - 8);
    hd = p->size;
    sz = hd & ~1;
    next = chunk_at_offset(p, sz);
    nextsz = chunksize(next);
    if (next == top) {
        sz += nextsz;
        if (!(hd & 1)) {
            prevsz = p->prev_size;
            p = chunk_at_offset(p, -((long)prevsz));
            sz += prevsz;
            unlink(p, bck, fwd);
        }
        set_head(p, sz | 1);
        top = p;
        if ((u64)sz >= D_00164628[0]) {
            func_001259C0(reent_ptr, D_00164630[0]);
        }
        func_0011F398(reent_ptr);
        return;
    }
    set_head(next, nextsz);
    islr = 0;
    if (!(hd & 1)) {
        prevsz = p->prev_size;
        p = chunk_at_offset(p, -((long)prevsz));
        sz += prevsz;
        if (p->fd == last_remainder) {
            islr = 1;
        } else {
            unlink(p, bck, fwd);
        }
    }
    if (!(inuse_bit_at_offset(next, nextsz))) {
        sz += nextsz;
        if (!islr && next->fd == last_remainder) {
            islr = 1;
            last_remainder->fd = last_remainder->bk = p;
            p->fd = p->bk = last_remainder;
        } else {
            unlink(next, bck, fwd);
        }
    }
    set_head(p, sz | 1);
    set_foot(p, sz);
    if (!islr) {
        frontlink(p, sz, idx, bck, fwd);
    }
    func_0011F398(reent_ptr);
}
