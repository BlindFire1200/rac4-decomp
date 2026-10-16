/* Not matching yet: SIZE ours 188 / retail 184 (tools/try_func.py func_L00_006EA5B8 --diff). Not part of the build. */
#include "common.h"
typedef int s128 __attribute__((mode(TI)));
typedef struct { u8 pad[0x86]; s16 type; } Sub;
typedef struct { s128 data; u8 pad0[0x50-0x10]; Sub *sub; } Child;
typedef struct { u8 pad[0x2EFC]; Child *child; } Root;
void func_L00_005EB300(void *, void *);
void func_L00_005EE078(s128, void *);
void func_L00_005EE170(s128, void *);
void func_L00_006EA5B8(Root *root) {
    Child *child = root->child;
    if (child->sub->type != 0x21) {
        s128 value;
        s32 index, next, count;
        func_L00_005EB300((u8 *)child + 0x390, &value);
        index = *(s32 *)((u8 *)root + 0x2CC8);
        func_L00_005EE078(value, (u8 *)root + (index * 4 + 0x2CA8));
        child = root->child;
        value = child->data;
        index = *(s32 *)((u8 *)root + 0x2CC8);
        func_L00_005EE170(value, (u8 *)root + (index * 4 + 0x2C88));
        index = *(s32 *)((u8 *)root + 0x2CC8);
        count = *(s32 *)((u8 *)root + 0x2CCC);
        next = index + 1;
        count++;
        *(s32 *)((u8 *)root + 0x2CCC) = count < 9 ? count : 8;
        *(s32 *)((u8 *)root + 0x2CC8) = next - (((next > -1) ? next : (index + 8)) >> 3) * 8;
    }
}
