/* Not matching yet: BYTES 177/272 (tools/try_func.py func_L00_006AA1F0 --diff). Not part of the build. */
#include "common.h"
typedef struct Node Node;
typedef struct { void (*run)(Node *); } VTable;
struct Node { s32 value; s32 arg; s32 active; Node *next; Node *prev; s32 reserved; VTable *vt; };
extern Node *D_00343EBC[];
extern s32 *D_00343ED8[];
extern s32 *D_004B49E0[];
extern s32 D_002233A0;
s32 func_L00_006AA5A0(s32, s32, s32);
void func_L00_006AACA8(Node *, s32);
Node *func_L00_006AA1F0(s32 index, s32 arg1, s32 arg2) {
    Node **head = &D_00343EBC[index];
    Node **tail = (Node **)((u8 *)head - 0x1C);
    Node *node = *head;
    if (node == 0) return 0;
    *head = node->next;
    node->next->prev = 0;
    node->prev = 0;
    node->next = *tail;
    if (node->next != 0) node->next->prev = node;
    *tail = node;
    node->value = func_L00_006AA5A0(arg1 != -1 ? arg1 : D_002233A0,
       ((s32)node - (s32)D_00343ED8[index]) / *D_004B49E0[index], index);
    node->active = 1;
    node->arg = arg2;
    node->vt->run(node);
    if (D_002233A0 != -1 && arg2 == D_002233A0) func_L00_006AACA8(node, 1);
    return node;
}
