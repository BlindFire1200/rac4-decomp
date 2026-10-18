/* Not matching yet: BYTES 5/956 (tools/try_func.py func_L00_00769F08 --diff). Not part of the build. */
#include "common.h"

typedef struct Item {
    s32 f0[6];
    s32 f18;
    s32 f1C;
    u8 f20[0xC8];
    s32 fE8;
    u8 fEC;
    u8 fED[3];
} Item;

typedef struct Entry {
    u8 f0[0xC8];
    u8 fC8;
    u8 fC9[3];
    s32 fCC;
    s32 fD0;
} Entry;

typedef struct Heap {
    s32 (*cmp)(Item *, Item *);
    s32 count;
    Item **arr;
} Heap;

typedef struct Pool {
    s32 f0[3];
    s32 fC;
    s32 f10[2];
    s32 f18;
    Item *f1C;
} Pool;

typedef struct Mgr {
    u8 f0[0x408];
    u8 f3D0;
    u8 f3D1[3];
    s32 f3D4;
    u8 f3D8;
    u8 f3D9[3];
    s32 f3DC;
    s32 f3E0;
    s32 f3E4;
    Heap heaps[2];
    Pool *f400;
} Mgr;

typedef struct Glob {
    s32 f0[4];
    s32 f10;
    s32 f14;
    u8 f18[5];
    u8 f1D;
    u8 f1E[0x1E];
    Mgr *f3C;
} Glob;

extern Glob *D_002233A4;
extern s32 func_0011A518(void *, s32, s32);
extern void func_005C17B0(void *, void *, s32);
extern void *func_15DB80(s32, void *);

static inline Item *pool_alloc(Pool *pool) {
    Item *item = pool->f1C;
    if (item != 0) {
        pool->f1C = *(Item **)((s32)item + pool->fC);
        pool->f18--;
    }
    return item;
}

void func_L00_00769F08(Item *arg0) {
    Mgr *mgr;
    Heap *heap;
    Heap *cur;
    s32 next;
    s32 mode;
    s32 c2;
    s32 i;
    s32 k;
    s32 m;
    s32 j;
    s32 child;
    s32 parent;
    Item *val;
    Item *tmp;

    mgr = D_002233A4->f3C;
    if (mgr->f3D0 == 0) {
        return;
    }
    if (D_002233A4->f1D != 0) {
        return;
    }
    next = 0;
    if (mgr->f3D4 == 0) {
        next = 1;
    }
    heap = &mgr->heaps[next];
    mode = arg0->f18;
    if (mode == 0) {
        if (heap->count < mgr->f3E4) {
            Item *item = pool_alloc(mgr->f400);
            if (item != 0) {
                Entry *e = (Entry *)func_15DB80(0xD4, item);
                func_005C17B0(e, arg0->f20, 0xC8);
                e->fC8 = 1;
                {
                    s32 a = arg0->f1C;
                    s32 b = arg0->fE8;
                    e->fCC = a;
                    e->fD0 = b;
                }
                item = (Item *)e;
                i = heap->count;
                heap->count = i + 1;
                heap->arr[i] = item;
                if (heap->cmp != 0) {
                    parent = i / 2;
                    while (i > 0 && (u8)heap->cmp(heap->arr[parent], heap->arr[i])) {
                        tmp = heap->arr[parent];
                        heap->arr[parent] = heap->arr[i];
                        heap->arr[i] = tmp;
                        i = parent;
                    }
                }
            }
        }
    } else if (mode == -990) {
        D_002233A4->f10 = 0x23;
        if (D_002233A4->f14 == 0) {
            D_002233A4->f14 = 0x23;
        }
    } else if (mode != 1) {
        if (arg0->fEC != 0) {
            func_0011A518(arg0, 0, 0xF0);
            arg0->fEC = 1;
        } else {
            func_0011A518(arg0, 0, 0xF0);
        }
    } else {
        arg0->fEC = mode;
    }
    if (arg0->fEC == 0) {
        return;
    }
    if (heap->cmp != 0 && heap->count >= 2) {
        for (k = heap->count - 1; k > 0; k--) {
            tmp = heap->arr[k];
            heap->arr[k] = heap->arr[0];
            heap->arr[0] = tmp;
            if (heap->cmp != 0) {
                j = k;
                val = heap->arr[k];
                child = j * 2 + 1;
                if (child < 0) do {
                    c2 = child + 1;
                    if (c2 < 0) {
                        if ((u8)heap->cmp(heap->arr[child], heap->arr[c2])) {
                            child = c2;
                        }
                        if (heap->cmp(val, heap->arr[child]) == 0) {
                            break;
                        }
                        heap->arr[j] = heap->arr[child];
                        j = child;
                        child = j * 2 + 1;
                    }
                } while (child < 0);
                heap->arr[j] = val;
            }
        }
    }
    cur = 0;
    if (mgr->f3D0 != 0 && mgr->f3D4 >= 0) {
        cur = &mgr->heaps[mgr->f3D4];
    }
    if (cur != 0) {
        for (m = 0; m < cur->count; m++) {
            Pool *pool = mgr->f400;
            Item *item = cur->arr[m];
            *(Item **)((s32)item + pool->fC) = pool->f1C;
            pool->f1C = item;
            pool->f18++;
        }
        cur->count = 0;
    }
    mgr->f3D4 = next;
    mgr->f3E0 = mgr->f3DC;
    mgr->f3D8 = 0;
}
