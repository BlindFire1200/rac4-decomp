/* Not matching yet: BYTES 244/1964 (tools/try_func.py func_L00_0072A178 --diff). Not part of the build. */
typedef struct Type2 Type2;
typedef struct Type3 {
    char pad0[0x20];
    void (*f20)(Type2 *, s32, s32);
    char pad24[4];
    void (*f28)(Type2 *, s32);
    char pad2C[0x10];
    void (*f3C)(Type2 *, s32);
} Type3;
struct Type2 {
    char pad0[0x58];
    Type3 *f58;
};
typedef struct Type1 {
    char pad0[0xB0];
    Type2 *fB0[100];
    s32 f240;
    char pad244[0x20];
    s32 f264;
    u8 f268;
} Type1;

extern void func_0011D920(void *dst, void *fmt, ...);
extern s32 func_L00_005C9F50(s32);
extern char D_00220F28[];
extern s32 D_004BB948[];
extern s32 D_004BB968[];
extern s32 D_004BB988[];
extern s32 D_004BB9A8[];

typedef struct { s32 v[8]; } Arr8;
typedef struct { s32 v[3][3]; } Arr9;

// Set up the eight entries of the menu at +0xB0 and their labels from arg1's bits.
void func_L00_0072A178(Type1 *obj, s32 flags) {
    Arr8 idx = *(Arr8 *)D_004BB948;
    Arr8 mask = *(Arr8 *)D_004BB968;
    Arr8 name = *(Arr8 *)D_004BB988;
    Arr8 val = *(Arr8 *)D_004BB9A8;
    Arr9 tab = (Arr9){ {
        { obj->f240 | 7, 0, 0 },
        { obj->f240 | 8, obj->f240 | 6, 0 },
        { obj->f240 | 8, obj->f240 | 7, obj->f240 | 6 },
    } };
    s32 i;
    s32 n;

    obj->f264 = 0;
    for (i = 0; i < 8; i++) {
        obj->fB0[idx.v[i]]->f58->f28(obj->fB0[idx.v[i]], func_L00_005C9F50(name.v[i]));
        if (flags & mask.v[i]) {
            obj->f264 = obj->f264 + 1;
        }
    }
    if (obj->f264 > 3) {
        obj->f264 = 3;
    }
    if (obj->f264 != 0) {
        char buf[32];
        n = 0;
        for (i = 0; i < 8; i++) {
            if (n < 3 && (flags & mask.v[i])) {
                obj->fB0[idx.v[i]]->f58->f3C(obj->fB0[idx.v[i]], tab.v[obj->f264 - 1][n]);
                n++;
                obj->fB0[idx.v[i]]->f58->f20(obj->fB0[idx.v[i]], 4, 0);
            } else {
                obj->fB0[idx.v[i]]->f58->f3C(obj->fB0[idx.v[i]], 0);
                obj->fB0[idx.v[i]]->f58->f20(obj->fB0[idx.v[i]], 0, 0);
            }
        }
        if (obj->f264 == 1) {
            if (flags & 4) {
                func_0011D920(buf, D_00220F28, val.v[1], func_L00_005C9F50(name.v[1]));
                obj->fB0[idx.v[1]]->f58->f28(obj->fB0[idx.v[1]], (s32)buf);
                obj->fB0[idx.v[1]]->f58->f20(obj->fB0[idx.v[1]], 2, 0);
            }
        } else if (obj->f264 == 2) {
            if ((flags & 3) == 3) {
                func_0011D920(buf, D_00220F28, val.v[0], func_L00_005C9F50(name.v[0]));
                obj->fB0[idx.v[0]]->f58->f28(obj->fB0[idx.v[0]], (s32)buf);
                obj->fB0[idx.v[0]]->f58->f20(obj->fB0[idx.v[0]], 2, 0);
                func_0011D920(buf, D_00220F28, val.v[4], func_L00_005C9F50(name.v[4]));
                obj->fB0[idx.v[4]]->f58->f28(obj->fB0[idx.v[4]], (s32)buf);
                obj->fB0[idx.v[4]]->f58->f20(obj->fB0[idx.v[4]], 2, 0);
            } else if ((flags & 0x14) == 0x14) {
                func_0011D920(buf, D_00220F28, val.v[1], func_L00_005C9F50(name.v[1]));
                obj->fB0[idx.v[1]]->f58->f28(obj->fB0[idx.v[1]], (s32)buf);
                obj->fB0[idx.v[1]]->f58->f20(obj->fB0[idx.v[1]], 2, 0);
                func_0011D920(buf, D_00220F28, val.v[5], func_L00_005C9F50(name.v[5]));
                obj->fB0[idx.v[5]]->f58->f28(obj->fB0[idx.v[5]], (s32)buf);
                obj->fB0[idx.v[5]]->f58->f20(obj->fB0[idx.v[5]], 2, 0);
            } else if ((flags & 0x28) == 0x28) {
                func_0011D920(buf, D_00220F28, val.v[2], func_L00_005C9F50(name.v[2]));
                obj->fB0[idx.v[2]]->f58->f28(obj->fB0[idx.v[2]], (s32)buf);
                obj->fB0[idx.v[2]]->f58->f20(obj->fB0[idx.v[2]], 2, 0);
                func_0011D920(buf, D_00220F28, val.v[6], func_L00_005C9F50(name.v[6]));
                obj->fB0[idx.v[6]]->f58->f28(obj->fB0[idx.v[6]], (s32)buf);
                obj->fB0[idx.v[6]]->f58->f20(obj->fB0[idx.v[6]], 2, 0);
            } else if ((flags & 0x18) == 0x18) {
                func_0011D920(buf, D_00220F28, val.v[2], func_L00_005C9F50(name.v[2]));
                obj->fB0[idx.v[2]]->f58->f28(obj->fB0[idx.v[2]], (s32)buf);
                obj->fB0[idx.v[2]]->f58->f20(obj->fB0[idx.v[2]], 2, 0);
                func_0011D920(buf, D_00220F28, val.v[5], func_L00_005C9F50(name.v[5]));
                obj->fB0[idx.v[5]]->f58->f28(obj->fB0[idx.v[5]], (s32)buf);
                obj->fB0[idx.v[5]]->f58->f20(obj->fB0[idx.v[5]], 2, 0);
            } else if ((flags & 0xC0) == 0xC0) {
                func_0011D920(buf, D_00220F28, val.v[3], func_L00_005C9F50(name.v[3]));
                obj->fB0[idx.v[3]]->f58->f28(obj->fB0[idx.v[3]], (s32)buf);
                obj->fB0[idx.v[3]]->f58->f20(obj->fB0[idx.v[3]], 2, 0);
                func_0011D920(buf, D_00220F28, val.v[7], func_L00_005C9F50(name.v[7]));
                obj->fB0[idx.v[7]]->f58->f28(obj->fB0[idx.v[7]], (s32)buf);
                obj->fB0[idx.v[7]]->f58->f20(obj->fB0[idx.v[7]], 2, 0);
            }
        }
        obj->f268 = (flags >> 8) & 1;
    }
}
