/* Not matching yet: BYTES 4/68 (tools/try_func.py func_01EDBBC0 --diff). Not part of the build. */
extern s8 D_00169CE0_[];
#define D_00169CE0 (D_00169CE0_[0])
extern s32 D_1BC840_[];
#define D_1BC840 (D_1BC840_[0])
extern s32 D_1BCA38_[];
#define D_1BCA38 (D_1BCA38_[0])

/* Clears a flag when the word at +0x18 is zero, then calls the optional handler with the 4th argument and a global; returns 0x1C. */
s32 func_01EDBBC0(s32 *arg3) {
    if (arg3[6] == 0) {
        D_00169CE0 = 0;
    }
    if (D_1BCA38 != 0) {
        ((s32 (*)(s32 *, s32))D_1BCA38)(arg3, D_1BC840);
    }
    return 0x1C;
}
