/* Not matching yet: BYTES 18/92 (tools/try_func.py func_00509C60 --diff). Not part of the build. */
s32 func_0050EE28(void *, f32);
extern s32 D_00220B68_[];
#define D_00220B68 (D_00220B68_[0])

// Calls function pointer with D_00220B68 argument, conditionally calls func_0050EE28
s32 func_00509C60(void *arg0, f32 fparg0) {
    s32 (*func_ptr)(s32);
    s32 result;
    s32 *p;

    p = (s32 *)arg0;
    func_ptr = (s32 (*)(s32))(*(s32 *)(p[2] + 0x14));
    result = func_ptr(D_00220B68);

    if (result != 0) {
        func_0050EE28(arg0, fparg0);
        return 1;
    }
    return 0;
}
