/* cflags: -fno-opt-stack */
#include "common.h"

#include "common.h"

typedef struct Node Node;
struct Node {
    Node *f0;
    s32 f4;
    s32 f8[0x20];
};

typedef struct Type1 {
    u8 pad0[0x148];
    Node *f148;
    Node f14C;
} Type1;

s32 func_0011EF60(s32 arg0);

extern Type1 *D_00163E74_[];
#define D_00163E74 (D_00163E74_[0])

// Appends arg0 to the global's entry list, allocating a new node when full.
s32 func_0011EAD0(s32 arg0) {
    Node *node;
    s32 i;

    node = D_00163E74->f148;
    if (node == 0) {
        node = (Node *)((u8 *)D_00163E74 + 0x14C);
        D_00163E74->f148 = node;
    }
    if (node->f4 >= 0x20) {
        node = (Node *)func_0011EF60(0x88);
        if (node == 0) {
            return -1;
        }
        node->f4 = 0;
        node->f0 = D_00163E74->f148;
        D_00163E74->f148 = node;
    }
    i = node->f4;
    node->f8[i] = arg0;
    node->f4 = i + 1;
    return 0;
}
