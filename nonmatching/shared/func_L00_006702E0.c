/* Not matching yet: BYTES 45/192 (tools/try_func.py func_L00_006702E0 --diff). Not part of the build. */
#include "common.h"
typedef struct { u8 pad0[0xF]; u8 count; u8 pad10[0xC]; u8 *entries; } Root;
typedef struct { s32 value; u8 pad4[0x2F]; u8 index; } Entry;
extern Root *D_0032C400[];
extern s16 D_00331300[];
extern s32 D_00331900;
void func_L00_006702E0(void) {
    s32 *list = &D_00331900;
    s32 id = *list;
    if (id >= 0) {
        do {
            s32 i = 0;
            Root *root = D_0032C400[id];
            Entry *entry = (Entry *)root->entries;
            if (root->count != 0) {
                do {
                    s16 *table = &D_00331300[entry->index * 2];
                    s16 a = table[0];
                    if (a != 0) entry->value = (entry->value & 0xFFFFC000) | a;
                    if (table[1] != 0) *(s32 *)((u8 *)entry + 0x20) = (*(s32 *)((u8 *)entry + 0x20) & 0xFFFFC000) | table[1];
                    i++;
                    entry = (Entry *)((u8 *)entry + 0x50);
                } while (i < root->count);
            }
            id = *++list;
        } while (id >= 0);
    }
}
