/* Not matching yet: SIZE ours 208 / retail 240 (tools/try_func.py func_L01_004CFBF0 --diff). Not part of the build. */
#include "common.h"
typedef struct { u8 pad0[0x180]; s32 id; } Entry;
typedef struct { u8 pad0[0xBC]; s16 type; u8 padBE[0x226]; u8 stateE4; u8 padE5[2]; u8 stateE7; } Entity;
typedef struct { u8 pad0[0x658]; Entry *entries; } Root;
extern u8 D_0038EAC0[];
extern u8 *D_0038EAC0_GP;
s32 func_004CA868(Entity *);
void func_L01_004CA890(Entity *, s32, s8);
s32 func_L01_004CFBF0(void) {
    s32 result = 0, i;
    Entry *entries = *(Entry **)(D_0038EAC0 + 0x658);
    for (i = 0; i < 2; i++) {
        s32 id = entries[i].id;
        if (id != -1) {
            Entity *e = (Entity *)(D_0038EAC0_GP + (id << 8));
            if (e != 0 && e->type == 0x2075) {
                result = 1;
                if (func_004CA868(e) == 0) {
                    func_L01_004CA890(e, 1, (s8)i);
                    e->stateE4 = i;
                    e->stateE7 = 1;
                    e->stateE7 = i;
                    e->stateE7 = i;
                    result = 1;
                }
            }
        }
    }
    return result;
}
