/* Not matching yet: BYTES 67/508 (tools/try_func.py func_L00_0067FB70 --diff). Not part of the build. */
/* cflags: -mno-split-addresses */
typedef struct Type1 {
    u8 pad0[0x20];
    s8 f20;
    u8 pad21[0x7];
    struct Type1 *f28;
    u8 pad2C[0x8];
    u16 f34;
    u8 pad36[0x72];
    void (*fA8)(struct Type1 *);
    u8 padAC[0x10];
    s16 fBC;
} Type1;

void func_001634F0(f32);
s32 func_005D6FC8(void);
s32 func_00676088(void);
void func_006A9160(s32);
void func_L00_005C4AC0(s32, s32, s32);
void func_L00_005E0158(Type1 *);
Type1 *func_L00_005E3940(void *);
void func_L00_005E4118(Type1 *);
s32 func_L00_005F5068(s32, s32, s32, s32, s32);
s32 func_L00_00600020(void *, s32, s32 *);
void func_L00_00600080(void *, s32);
void func_L00_00607B68(void);
void func_L00_0066B1A8(s32 *);
void func_L00_00675FB8(void);
void func_L00_00675FE0(void);
void func_L00_0067D0E8(s32);
void func_L00_006959E8(void);
void func_L00_00695A20(void);

extern s32 D_0021EC14;
extern s32 D_0021DDB4;
extern Type1 *D_00222474;
extern u8 D_00222478[];
extern u8 D_00222548[];
extern s32 D_171FC8[];

// Per-frame level update: set up, then run the update hooks of the listed objects
void func_L00_0067FB70(s32 arg0) {
    s32 sp0;
    Type1 *p;

    if (arg0 == 0) {
        func_006A9160(0);
    }
    func_L00_005C4AC0(0, 0, 0);
    D_171FC8[0] = 0x400;
    D_171FC8[1] = 0x400;
    func_L00_0066B1A8(D_171FC8);
    func_001634F0(0.0f);
    if (func_L00_00600020(D_00222548, D_0021EC14, &sp0) != 0 && sp0 == 4) {
        func_L00_00600080(D_00222548, D_0021EC14);
    }
    if (func_005D6FC8() == 3 && D_0021DDB4 == 0 && func_L00_005F5068(4, 1, 1, 0, 0) == 0) {
        return;
    }
    if (func_00676088() != 0) {
        return;
    }
    func_L00_00675FB8();
    func_L00_006959E8();
    D_00222474 = func_L00_005E3940(D_00222478);
    func_L00_00695A20();
    p = D_00222474;
    while (p != 0) {
        if (p->f20 >= 0) {
            s16 id = p->fBC;
            if (id == 0xDC1) {
                p->fA8(p);
                if (!(p->f34 & 4)) {
                    func_L00_005E4118(p);
                }
            } else if (id == 0xCB2 || id == 0xB02 || id == 0x259 || id == 0xA5C || id == 0x1192) {
                func_L00_005E0158(p);
                func_L00_005E4118(p);
            }
        }
        p = p->f28;
    }
    func_L00_0067D0E8(0);
    func_L00_00607B68();
    func_L00_00675FE0();
}
