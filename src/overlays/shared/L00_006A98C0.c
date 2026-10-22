#include "common.h"

typedef struct {
    u8 pad00[0x56C];
    s32 f56C;
    s32 f570;
    u8 pad01[0x5C0 - 0x574];
} Entry;

extern Entry D_001EE600[];
extern void func_0015EEF0(s32 arg);
extern void func_0015EEF8(s32 arg);
extern void func_L00_00702E10(void);

// Clear the two flag fields of every entry of the 8-entry table.
void func_L00_006A98C0(void) {
    Entry *p;
    s32 end;

    func_0015EEF0(0);
    func_0015EEF8(0);
    func_L00_00702E10();

    p = D_001EE600;
    end = (s32)p + 0x2E00;
    do {
        p->f56C = 0;
        p->f570 = 0;
        p++;
    } while ((s32)p < end);
}
