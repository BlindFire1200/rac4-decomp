/* cflags: -G0 */
#include "common.h"

typedef struct Ent Ent;
struct Ent {
    s32 key;
    u8 pad[0x34];
    Ent *next;
};

typedef struct Blk Blk;
struct Blk {
    u8 pad[8];
    Ent *list;
    u8 pad2[8];
    Blk *next;
};

typedef struct {
    u8 pad[0x28];
    Blk *blocks;
} Owner;

Ent *func_0012A3D8(s32 key, Owner *o) {
    Blk *b;
    Ent *e;

    for (b = o->blocks; b != 0; b = b->next) {
        for (e = b->list; e != 0; e = e->next) {
            if (e->key == key) {
                return e;
            }
        }
    }
    return 0;
}
