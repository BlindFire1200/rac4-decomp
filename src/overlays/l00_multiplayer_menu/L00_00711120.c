#include "common.h"

typedef struct {
    u8 pad[0x60];
    s32 f60;
    u8 f64[8];
    u8 f6C[8];
} Type1;

typedef struct {
    u8 pad[0x40];
    s32 f40;
    u8 f44[8];
    u8 f4C[8];
} Type2;

extern void func_L00_007107F0(Type1 *arg0, Type2 *arg1);
extern void func_0011AFC8(void *dst, void *src, s32 len);

/* Fills a multiplayer menu entry from the lobby player list and copies both player-name strings into it. */
void func_L00_00711120(Type1 *arg0, Type2 *arg1) {
    func_L00_007107F0(arg0, arg1);
    arg0->f60 = arg1->f40;
    func_0011AFC8(arg0->f64, arg1->f44, 7);
    func_0011AFC8(arg0->f6C, arg1->f4C, 7);
}
