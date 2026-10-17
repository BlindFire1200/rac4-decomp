#include "common.h"

void *func_L00_007756B0(s32, s32);
void func_L00_00775680(s32, void *);

// With a source: set the record's +0x2C flag and refresh the slot's flags,
// copying the source's +0x98 word when it changed (skipped when skip is set).
// Without one: release the slot unless +0x2C is set, set +0x1C to 4 and advance
// the +0x28 index.
void func_L00_00775E10(s32 unused, void *source, s32 skip, u8 *record) {
    s32 old_value;
    s32 old_flags;
    s32 masked_flags;
    s32 current_flags;
    void *slot;

    if (source != 0) {
        if (skip == 0) {
            record[0x2C] = 1;
            slot = func_L00_007756B0(*(s32 *)(record + 0x20), *(s32 *)(record + 0x28));
            old_flags = *(s32 *)slot;
            masked_flags = old_flags & 0xFFFFFFBF;
            *(s32 *)slot = masked_flags | 0x100;
            old_value = *(s32 *)((u8 *)slot + 0x10);
            if (old_value != *(s32 *)((u8 *)source + 0x98)) {
                *(s32 *)((u8 *)slot + 0x10) = *(s32 *)((u8 *)source + 0x98);
                *(s32 *)slot = masked_flags | 0x102;
            }
            current_flags = *(s32 *)slot;
            if (old_flags != current_flags) {
                *(s32 *)slot = current_flags | 2;
            }
        }
    } else {
        if (record[0x2C] == 0) {
            func_L00_00775680(*(s32 *)(record + 0x20), func_L00_007756B0(*(s32 *)(record + 0x20), *(s32 *)(record + 0x28)));
        }
        *(s32 *)(record + 0x1C) = 4;
        *(s32 *)(record + 0x28) += 1;
    }
}
