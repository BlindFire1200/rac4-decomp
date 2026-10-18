/* Not matching yet: BYTES 15/428 (tools/try_func.py func_L41_003E3060 --diff). Not part of the build. */
typedef s32 (*ActionCallback)();
extern ActionCallback *func_L00_005DEBD0(s32, s32, s32);
typedef struct { s32 a[2]; s32 b[2]; s32 c[2]; s32 d[2]; } Type2;
typedef struct { u8 pad[0x65C]; Type2 *f65C; } Type1;
extern Type1 D_0036D600;
ActionCallback *D_00220F44 = 0;
u8 *D_0021DFF0 = 0;
u8 *D_00222794 = 0;

// Run the 0x1C2F action callback on every slot entry of the current table; 0 when one rejects.
s32 func_L41_003E3060(u8 *object) {
    Type1 *base = &D_0036D600;
    u8 *state = *(u8 **)(object + 0xAC);
    s32 result = 1;
    s32 count;
    s32 i;
    s32 idx;
    u8 *p;

    if (base->f65C == 0) {
        return 1;
    }
    if (D_00220F44 != 0 || (D_00220F44 = func_L00_005DEBD0(0x1C2F, 0, 8)) != 0) {
        if (D_00220F44[1] != 0) {
            count = *(s8 *)(D_0021DFF0 + 0x36);
            if (count <= 0) {
                count = 1;
            }
            for (i = 0; i < count; i++) {
                idx = -1;
                switch (*state) {
                case 0:
                    idx = base->f65C->a[i];
                    break;
                case 1:
                    idx = base->f65C->b[i];
                    break;
                case 2:
                    idx = base->f65C->c[i];
                    break;
                case 3:
                    idx = base->f65C->d[i];
                    break;
                }
                if (idx != -1) {
                    p = (u8 *)(idx << 8) + (u32)D_00222794;
                    if (p[0x20] != 0xFE) {
                        if (p[0x20] != 0xFD) {
                            if (p != 0) {
                                if (D_00220F44[1](p) == 0) {
                                    result = 0;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return result;
}
