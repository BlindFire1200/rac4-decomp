/* Not matching yet: BYTES 8/96 (tools/try_func.py func_004B5550 --diff). Not part of the build. */
extern void *func_004B5478(void);
extern void func_005014B0(s32 *a0);
extern void func_00505AD8(s32 a);
extern s32 func_00505B20(void);
extern u8 D_221770;
s8 D_0021F770 = 0;

// Decrements a byte counter; when it reaches zero, reinitializes the object at func_004B5478.
void func_004B5550(void) {
    s32 temp_s0;
    s32 temp_v0;

    temp_v0 = D_221770 - 1;
    D_0021F770 = temp_v0;
    if (!(temp_v0 & 0xFF)) {
        temp_s0 = func_00505B20();
        func_00505AD8(4);
        func_005014B0(func_004B5478());
        func_00505AD8(temp_s0);
    }
}
