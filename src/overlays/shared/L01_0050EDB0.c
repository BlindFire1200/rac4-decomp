#include "common.h"

typedef struct Action { u32 pad0, pad4; s32 (*call)(void); } Action;
typedef struct RepeatAction { void (*call)(void *, s32, s32); } RepeatAction;
extern Action *func_L00_005DEBD0(s32, s32, s32);
extern s32 func_L00_006930D0(s32);

// Call the registered check (id 0x2102) and stop if it returns nonzero.
// Otherwise call the repeat callback (id 0xAE0) once per the count
// func_L00_006930D0 gives for the +0x284 stat.
void func_L01_0050EDB0(void *object) {
    u8 *stats = *(u8 **)((u8 *)object + 0xAC) + 0x280;
    s32 count;
    RepeatAction *repeat;
    Action *action = func_L00_005DEBD0(0x2102, 0x11, 0xC);
    if (action != 0 && action->call != 0 && action->call() != 0) return;
    count = func_L00_006930D0(*(s32 *)(stats + 4));
    repeat = (RepeatAction *)func_L00_005DEBD0(0xAE0, 0, 4);
    if (repeat != 0 && repeat->call != 0 && count > 0) {
        do {
            repeat->call((u8 *)object + 0x10, -1, -1);
            count--;
        } while (count != 0);
    }
}
