/* Not matching yet: BYTES 14/96 (tools/try_func.py func_0011C1C0 --diff). Not part of the build. */
extern s32 func_00127168(s32, s32, s32);
extern s32 D_1A5180_[];
#define D_1A5180 (D_1A5180_[0])

// Set a global based on function result
s32 func_0011C1C0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    D_1A5180 = 0;
    temp_v0 = func_00127168(arg1, arg2, arg3);
    if ((temp_v0 == -1) && (D_1A5180 != 0)) {
        *arg0 = D_1A5180;
    }
    return temp_v0;
}
