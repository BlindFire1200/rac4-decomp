#include "common.h"

extern void func_004979A8(void *, s32, s32);
extern s32 func_00499CA0(void *, s32);
extern void func_0049C400(s32 slot, s32 offset, s32 param_a, s32 param_b, s32 mode);
extern void func_0049D170(s32 param_a, s32 param_b, s32 source);
extern void func_0049D280(s32, s32);
extern s32 func_004A0BE8(void *arg0, s8 arg1);
extern void func_004A0BF0(s32 param_a, s32 source, s64 param_b);
extern void func_004A1140(void *, void *, s32, void *, s32, s32);
extern void func_004A11F0(void *, void *);
extern s32 func_004A1A60(void *, s32);
extern void func_004D5A08(void);
extern void func_005054F8(s32, u16);
extern void func_00505DD0(s32, s32);
extern s32 func_00506120(s32, s32);
extern void func_004D4E80(void);
extern void func_004D5898(void);
extern s32 D_00171B40[];
extern char D_1CDAC0[];
extern s32 D_2219F8;
extern s32 D_31B9B8[];

/* Initialize the single entry at D_31B9B8 and register its handles. */
void func_004D49A8(void) {
    s32 *p;
    s32 key;

    D_31B9B8[0] = 0;
    func_004D5A08();
    p = &D_31B9B8[0x130C / 4];
    func_004A1140(p, &D_31B9B8[0xD0C / 4], 0x40, func_004D4E80, 0x2E, 1);
    func_004A11F0(p, func_004D5898);
    func_004A0BF0((s32)p, func_004A1A60(&D_2219F8, 0xF), 0);
    func_004A0BE8(p, 1);
    func_00505DD0(D_2219F8, p[0x2C / 4]);
    func_0049D170(0, 0, func_004A1A60(&D_2219F8, 0x10));
    func_0049D280(0, 1);
    key = D_2219F8;
    func_0049C400(0, 0, key, func_004A1A60(&D_2219F8, 0x10), 0);
    D_31B9B8[0x1388 / 4] = D_00171B40[0];
    func_004979A8(&D_31B9B8[0x1378 / 4], D_00171B40[0], 0);
    D_31B9B8[0x138C / 4] = func_00499CA0(D_1CDAC0, -1);
    func_005054F8(func_004A1A60(&D_2219F8, 2), 1);
    func_00506120(func_004A1A60(&D_2219F8, 2), D_31B9B8[0x138C / 4]);
    D_31B9B8[0x1390 / 4] = func_00499CA0(D_1CDAC0 - 8, -1);
    func_005054F8(func_004A1A60(&D_2219F8, 1), 1);
    func_00506120(func_004A1A60(&D_2219F8, 1), D_31B9B8[0x1390 / 4]);
    D_31B9B8[0x1394 / 4] = func_00499CA0(D_1CDAC0 + 0x3E8, -1);
    func_005054F8(func_004A1A60(&D_2219F8, 9), 1);
    func_00506120(func_004A1A60(&D_2219F8, 9), D_31B9B8[0x1394 / 4]);
    D_31B9B8[1] = 7;
}
