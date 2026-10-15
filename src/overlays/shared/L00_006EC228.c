#include "common.h"

extern void *func_L00_006AA100(s32);

void func_L00_006EC228(u8 *arg0) {
    void *record = func_L00_006AA100(*(s32 *)(arg0 + 8));
    arg0[0x54] = 0;
    if (record != 0) {
        void *table = *(void **)((u8 *)record + 0x14);
        void (*callback)(void *, void *) = *(void (**)(void *, void *))((u8 *)table + 0x14);
        callback(record, arg0);
    }
}
