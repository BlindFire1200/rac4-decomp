/* Not matching yet: SIZE ours 244 / retail 240 (tools/try_func.py func_L01_00666D98 --diff). Not part of the build. */
#include "common.h"
typedef struct Node Node;
typedef struct { void (*fn)(Node *); } VTable;
struct Node { s32 mask; s32 id; s32 state; Node *next; Node *prev; s32 pad; VTable *vt; };
extern Node *D_0036613C[];
extern s32 D_00223E04;
extern u32 D_0036A000;
extern u32 D_0036A008;
void func_L00_006AAD78(Node *, s32, s32);
Node *func_L01_00666D98(Node *node) {
    Node *result = node->next;
    s32 shift = D_0036A008;
    s32 mask = D_0036A000;
    s32 index = ((node->mask & mask) >> shift);
    Node **head = &D_0036613C[index];
    Node **tail = head - 7;
    node->state = 2;
    if (D_00223E04 != -1 && node->id == D_00223E04) func_L00_006AAD78(node, D_00223E04, mask);
    if (node->prev != 0) node->prev->next = node->next;
    if (node->next != 0) node->next->prev = node->prev;
    if (*tail == node) *tail = node->next;
    node->prev = 0;
    node->next = *head;
    if (*head != 0) (*head)->prev = node;
    *head = node;
    return result;
}
