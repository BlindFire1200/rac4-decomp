/* Not matching yet: BYTES 78/516 (tools/try_func.py func_L00_00599710 --diff). Not part of the build. */
typedef struct {
    u8 pad0[0x74];
    u16 f74;
    u8 pad76[0xBC - 0x76];
    s16 fBC;
} Type1;

typedef struct {
    u8 pad0[0x31];
    u8 f31;
} Type2;

typedef struct {
    u8 pad0[0x2EF0];
    Type2 *f2EF0;
} Type4;

typedef struct {
    u8 pad0[0x70];
    s32 f70;
    u8 pad74[0x84 - 0x74];
    s16 f84;
    u8 pad86[0x1F0 - 0x86];
    Type1 *f1F0[1];
} Type3;

extern void func_L00_00596A28(s32, s32, s32, s32);
extern void func_L00_00598118(s32);
extern Type3 D_0023BE00[];
extern Type4 *D_00343E78[];

// Set per-entry effects by type, then clear a flag in ten slots
void func_L00_00599710(void) {
    Type3 *base = D_0023BE00;
    Type4 **q = D_00343E78;
    s32 i;
    Type1 *p;

    for (i = 0; i < base->f84; i++) {
        p = base->f1F0[i];
        if (p == NULL) {
            continue;
        }
        if (p->fBC == 0x216A || p->fBC == 0x2691
            || (p->fBC == 0x2429 && *(s32 *)0x21DE10 == 0x2574)
            || p->fBC == 0x20FD || p->fBC == 0x2703 || p->fBC == 0x2505) {
            func_L00_00596A28(i, 0x96, 0, 0);
        }
        if (p->fBC == 0x216A || p->fBC == 0x2691) {
            base->f1F0[i]->f74 |= 0x1000;
        }
        if (p->fBC == 0xA) {
            if (base->f70 == 2) {
                base->f1F0[i]->f74 |= 0x1000;
            } else {
                base->f1F0[i]->f74 |= 0x1002;
            }
            func_L00_00596A28(i, 0x6E, 0x80306629, 0x8058B856);
        }
        if (p->fBC == 0x243D) {
            func_L00_00596A28(i, 0x168, 0xC0808080, 0x80505050);
        }
        if (p->fBC == 0x247F || p->fBC == 0x24D9 || p->fBC == 0x24D5) {
            func_L00_00596A28(i, 0x5A, 0xFFC0C0C0, 0xB0505050);
        }
    }
    func_L00_00598118(0);
    for (i = 0; i < 10; i++) {
        if (q[i] != NULL) {
            q[i]->f2EF0->f31 = 0;
        }
    }
}
