/* Not matching yet: BYTES 88/1036 (tools/try_func.py func_L00_0076B5C0 --diff). Not part of the build. */
typedef struct Type1 {
    u8 pad0[0x18];
    s32 f18;
    u8 pad1C[0x1BC - 0x1C];
    u8 f1BC;
    u8 pad1BD[0x1C4 - 0x1BD];
} Type1;

typedef struct Type2 {
    s32 (*cmp)(Type1 *, Type1 *);
    s32 count;
    Type1 **items;
} Type2;

typedef struct Type3 {
    u8 pad0[0xC];
    s32 fC;
    u8 pad10[0x18 - 0x10];
    s32 f18;
    Type1 *f1C;
} Type3;

typedef struct Type4 {
    u8 pad0[0x4F8];
    u8 f4F8;
    s32 f4FC;
    u8 f500;
    s32 f504;
    s32 f508;
    s32 f50C;
    Type2 heaps[2];
    Type3 *f528;
} Type4;

typedef struct Type5 {
    u8 pad0[0x1D];
    u8 f1D;
    u8 pad1E[0x3C - 0x1E];
    Type4 *f3C;
} Type5;

extern s32 func_0011A518(void *, s32, s32);
extern Type5 *D_002233A4;

static inline u8 heap_less(Type2 *heap, Type1 *a, Type1 *b) {
    return heap->cmp(a, b);
}

/* Move the item at hole down while it orders before a child below end. */
static inline void heap_sift_down(Type2 *heap, s32 hole, s32 end) {
    Type1 *value;
    s32 child;
    s32 right;

    if (heap->cmp == 0) {
        return;
    }
    child = hole * 2 + 1;
    value = heap->items[hole];
    while (child < end) {
        right = child + 1;
        if (right < end) {
            if (heap_less(heap, heap->items[child], heap->items[right])) {
                child = right;
            }
            if (!heap->cmp(value, heap->items[child])) {
                break;
            }
            heap->items[hole] = heap->items[child];
            hole = child;
            child = hole * 2 + 1;
        }
    }
    heap->items[hole] = value;
}

static inline Type1 *pool_alloc(Type3 *pool) {
    Type1 *node = pool->f1C;
    if (node != 0) {
        pool->f1C = *(Type1 **)((u8 *)node + pool->fC);
        pool->f18--;
    }
    return node;
}

/* Queue an entry into the inactive heap of the current manager, heap-sort it when flagged, then swap heaps. */
void func_L00_0076B5C0(Type1 *entry) {
    Type4 *mgr;
    Type2 *heap;
    Type2 *used;
    Type3 *pool;
    Type1 *node;
    Type1 **items;
    Type1 *value;
    s32 next;
    s32 kind;
    s32 i;
    s32 parent;
    Type1 *tmp;

    mgr = D_002233A4->f3C;
    if (mgr->f4F8 == 0) {
        return;
    }
    if (D_002233A4->f1D != 0) {
        return;
    }
    next = 0;
    if (mgr->f4FC == 0) {
        next = 1;
    }
    heap = &mgr->heaps[next];

    kind = entry->f18;
    if (kind == 0) {
        if (heap->count < mgr->f50C) {
            Type1 *node = pool_alloc(mgr->f528);

            if (node != 0) {
                *node = *entry;
                i = heap->count;
                heap->count = i + 1;
                heap->items[i] = node;
                if (heap->cmp != 0) {
                    parent = i / 2;
                    while (i > 0 && heap_less(heap, heap->items[parent], heap->items[i])) {
                        items = heap->items;
                        value = items[parent];
                        items[parent] = items[i];
                        heap->items[i] = value;
                        i = parent;
                    }
                }
            }
        }
    } else if (kind != 1) {
        if (entry->f1BC != 0) {
            func_0011A518(entry, 0, 0x1C4);
            entry->f1BC = 1;
        } else {
            func_0011A518(entry, 0, 0x1C4);
        }
    } else {
        entry->f1BC = kind;
    }

    if (entry->f1BC == 0) {
        return;
    }

    if (heap->cmp != 0 && heap->count >= 2) {
        for (i = heap->count - 1; i > 0; i--) {
            tmp = heap->items[i];
            heap->items[i] = heap->items[0];
            heap->items[0] = tmp;
            heap_sift_down(heap, i, 0);
        }
    }

    used = 0;
    if (mgr->f4F8 != 0 && mgr->f4FC >= 0) {
        used = &mgr->heaps[mgr->f4FC];
    }
    if (used != 0) {
        for (i = 0; i < used->count; i++) {
            pool = mgr->f528;
            node = used->items[i];
            *(Type1 **)((u8 *)node + pool->fC) = pool->f1C;
            pool->f1C = node;
            pool->f18++;
        }
        used->count = 0;
    }
    mgr->f4FC = next;
    mgr->f508 = mgr->f504;
    mgr->f500 = 0;
}
