#include "common.h"

typedef s32 (*func_t)(s32);

typedef struct {
    u8 f00[0x44];
    func_t f44;
} Type1;

extern void *func_0046D408(s32 arg0, s32 arg1);
extern void func_00446E90(void);
extern void func_0046FD40(void);

// Looks up the entry with id 0x2022 and, if it exists, dispatches its callback with arg0 then refreshes state.
void func_004F8708(s32 arg0) {
    Type1 *temp_v0;

    temp_v0 = (Type1 *)func_0046D408(0x2022, 0x50);
    if (temp_v0 != 0) {
        temp_v0->f44(arg0);
        func_00446E90();
        func_0046FD40();
    }
}
