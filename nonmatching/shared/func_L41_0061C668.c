/* Not matching yet: BYTES 7/148 (tools/try_func.py func_L41_0061C668 --diff). Not part of the build. */
extern u32 D_002204A0;
extern u32 D_002204A8;
extern s32 D_00223754;
u8 *func_005CEC98(s32);
s32 func_L41_0061D570(u8 *);

static inline s32 func_L41_0061C668_inl(s32 arg0) {
    u8 *p = func_005CEC98(arg0);
    s64 r = 0;
    if (p != 0) {
        r = func_L41_0061D570(p) != 0;
    }
    return r;
}

/* Tests whether the looked-up object is of kind 6 and owned, else asks func_L41_0061D570. */
s32 func_L41_0061C668(s32 arg0) {
    u8 *p;

    p = func_005CEC98(arg0);
    if (p != 0 && ((*(u32 *)p & D_002204A8) >> D_002204A0) == 6 && p[0x2C] != 0) {
        return *(s32 *)(p + 4) == D_00223754;
    }
    return func_L41_0061C668_inl(arg0);
}
