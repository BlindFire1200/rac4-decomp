/* Not matching yet: BYTES 11/96 (tools/try_func.py func_0011C040 --diff). Not part of the build. */
typedef s32 u128 __attribute__((mode(TI)));

extern s32 func_00127290(s32, s32, s32);
extern s32 D_1A5180[];

s32 func_0011C040(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u128 _unused[2];
    s32 temp_v0;

    D_1A5180[0] = 0;
    temp_v0 = func_00127290(arg1, arg2, arg3);
    if ((temp_v0 == -1) && (D_1A5180[0] != 0)) {
        *arg0 = D_1A5180[0];
    }
    return temp_v0;
}
