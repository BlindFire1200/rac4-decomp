#include "common.h"

typedef struct Item {
    s32 f0[6];
    s32 f18;
    s32 f1C[97];
    u8 f1A0;
    u8 f1A1[3];
} Item;

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
    s32 f0[7];
    s32 f1C;
    u8 f20;
    u8 f21[3];
    s32 f24;
    s32 f28;
    s32 f2C;
    Heap heaps[2];
    Pool *f48;
} Mgr;

typedef struct Glob {
    u8 f0[0x1D];
    u8 f1D;
    u8 f1E[0x26];
    Mgr *f44;
} Glob;

extern Glob *D_002233A4;
extern Heap *func_L00_00770CA8(Mgr *);

static inline Item *pool_alloc(Pool *pool) {
    Item *item = pool->f1C;
    if (item != 0) {
        pool->f1C = *(Item **)((s32)item + pool->fC);
        pool->f18--;
    }
    return item;
}

void func_L00_00770730(Item *arg0) {
    Mgr *mgr;
    Heap *heap;
    Heap *cur;
    s32 next;
    s32 c2;
    s32 i;
    s32 k;
    s32 m;
    s32 j;
    s32 child;
    s32 parent;
    Item *val;
    Item *tmp;

    mgr = D_002233A4->f44;
    if (mgr == 0) {
        return;
    }
    if (D_002233A4->f1D != 0) {
        return;
    }
    next = 0;
    if (mgr->f1C == 0) {
        next = 1;
    }
    heap = &mgr->heaps[next];
    if (arg0->f18 == 0) {
        if (heap->count < mgr->f2C) {
            Item *item = pool_alloc(mgr->f48);
            if (item != 0) {
                *item = *arg0;
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
    }
    if (arg0->f1A0 == 0) {
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
    cur = func_L00_00770CA8(mgr);
    if (cur != 0) {
        for (m = 0; m < cur->count; m++) {
            Pool *pool = mgr->f48;
            Item *item = cur->arr[m];
            *(Item **)((s32)item + pool->fC) = pool->f1C;
            pool->f1C = item;
            pool->f18++;
        }
        cur->count = 0;
    }
    mgr->f1C = next;
    mgr->f28 = mgr->f24;
    mgr->f20 = 0;
}
