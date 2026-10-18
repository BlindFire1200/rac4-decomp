/* Not matching yet: BYTES 23/320 (tools/try_func.py func_L41_0043A718 --diff). Not part of the build. */
extern s32 func_0043A3B8();
extern s32 func_L00_006FF6D0(s32, s32);
extern s16 func_L00_006FF700(s32, s32);
extern s32 func_L00_00700708(s32, s32);
extern void func_L01_004DE8B0(void *);
extern int func_L41_0043A328(void *);
extern s32 func_L41_0043A5A8(s32);
extern u8 *D_0021DFF0;

static inline u8 func_L41_0043A718_check(char *arg0) {
    u8 *p = *(u8 **)(arg0 + 0x2EFC);
    if (p == 0) return 0;
    if (p[0x27B] == 0) return 0;
    return *(s32 *)(arg0 + 0x25CC) == 0x31;
}

// Decide whether the object may act on its linked target this frame.
s32 func_L41_0043A718(char *arg0, char *arg1) {
    s32 ret = 0;
    s32 target;

    if (func_0043A3B8(arg1) != 0) goto end;
    if (*(s32 *)(arg0 + 0x25D4) == 0x14) goto end;
    if (func_L41_0043A718_check(arg0)) goto end;
    if (*(s32 *)(arg0 + 0x25CC) == 0x31) goto end;
    if (!(*(f32 *)(arg0 + 0x2E20) > 0.0f)) goto end;
    if (func_L41_0043A328(arg1) != 0) {
        target = func_L41_0043A5A8(**(s32 **)(arg1 + 0xAC));
        if (target == 0) goto end;
        if ((u8)func_L00_00700708(*(s32 *)(arg0 + 0x26E4), target) != 0) {
            if (D_0021DFF0[0x20] != 0) goto end;
            if (!(func_L00_006FF6D0(*(s32 *)(arg0 + 0x26E4), target) <
                  func_L00_006FF700(*(s32 *)(arg0 + 0x26E4), target))) goto end;
        }
        ret = 1;
    } else {
        func_L01_004DE8B0(arg1);
    }
end:
    return ret;
}
