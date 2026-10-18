/* Not matching yet: BYTES 25/508 (tools/try_func.py func_004B1F38 --diff). Not part of the build. */
extern s32 func_00497810(s32);
extern s32 func_004A1A60(void *, s32);
extern s32 func_00501638(s32 *, s32, s32);
extern void func_00504238(s32, f32, f32);
extern void func_00504550(s32, void *, f32 *);
extern void func_00504E68(s32, s32, s32);
extern void func_00504F68(s32, s32);
extern void func_00505040(s32, s32);
extern void func_00505238(s32, s32);
extern void func_005054F8(s32, u16);
extern s32 func_00505B70(s32, s32);
extern void func_004B1758(void);
extern void func_004B1850(void);

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    void (*fC)(void);
    s32 f10;
} Type1;

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
} Type2;

extern f32 D_003D1B98[];
extern Type2 D_003D92D0[];
extern s32 D_221728;
extern Type1 D_309650[];
extern char D_309670[][6];

// Pick the mode handler by state, then set up the screen widgets.
void func_004B1F38(void) {
    f32 pos[2];
    s32 mode;
    s32 i;

    mode = func_00497810(0);
    switch (mode) {
    case 0:
    case 2:
        func_00501638(&D_221728, 0x15, -1);
        D_309650[0].fC = func_004B1758;
        D_309650[0].f10 = 0;
        break;
    case 1:
    case 3:
    case 4:
        func_00501638(&D_221728, 0x16, -1);
        D_309650[0].fC = func_004B1850;
        D_309650[0].f10 = 4;
        break;
    }
    func_00505B70(5, D_221728);
    func_005054F8(func_004A1A60(&D_221728, 0x18), 0x7586);
    func_00504F68(func_004A1A60(&D_221728, 0x18), 0);
    func_00505040(func_004A1A60(&D_221728, 0x18), 1);
    func_00504E68(func_004A1A60(&D_221728, 0x19), 1, 2);
    func_00504550(func_004A1A60(&D_221728, 0x19), &pos[0], &pos[1]);
    func_00504238(func_004A1A60(&D_221728, 0x19), pos[0] + D_003D1B98[mode], pos[1]);
    func_00504F68(func_004A1A60(&D_221728, 0x19), 0);
    for (i = 0; i < 4; i++) {
        func_00505238(func_004A1A60(&D_221728, D_003D92D0[i].f10), (s32)D_309670[i]);
    }
}
