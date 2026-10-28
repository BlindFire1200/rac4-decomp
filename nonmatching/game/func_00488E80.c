/* Not matching yet: BYTES 2/56 (tools/try_func.py func_00488E80 --diff). Not part of the build. */
/* Stores the result of func_00158400() at +0x90 of the entry indexed by a1 in D_1D2200. */
extern s32 func_00158400();
extern u8 D_1D2200[];

void func_00488E80(s32 a0, s32 a1) {
    s32 v;
    s32 i;
    u8 *p;

    v = func_00158400();
    i = a1 << 2;
    p = (u8 *)D_1D2200;
    p = p + i;
    *(s32 *)(p + 0x90) = v;
}
