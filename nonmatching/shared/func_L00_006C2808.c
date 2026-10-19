/* Not matching yet: SIZE ours 188 / retail 208 (tools/try_func.py func_L00_006C2808 --diff). Not part of the build. */
typedef int u128 __attribute__((mode(TI)));
typedef int s128 __attribute__((mode(TI)));
typedef struct Type1 {
    u8 pad0[0xA0]; u128 fA0;
    u8 padB0[0x25BD]; u8 f266D;
    u8 pad266E[0x82]; u128 f26F0;
    u8 pad2700[0x578]; s32 f2C78; s32 f2C7C;
} Type1;
s32 func_L00_006C21F0(void *, s32);                 /* extern */

void func_L00_006C2808(Type1 *arg0) {
    s32 temp_a0;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s1;

    temp_s2 = (arg0->f266D != 0) ? 0x10 : 1;
    var_s1 = 0;
    if (temp_s2 != 0) {
loop_2:
        if (func_L00_006C21F0(arg0, var_s1) != 1) {
            temp_v1 = arg0->f2C7C;
            temp_v0 = arg0->f2C78;
            if (temp_v1 >= 2) {
                arg0->f2C7C = (s32) (temp_v1 - 1);
                temp_a0 = temp_v0 + 0x1F;
                arg0->f2C78 = (s32) (temp_a0 - (((s32) ((temp_a0 > -1) ? temp_a0 : (temp_v0 + 0x3E)) >> 5) << 5));
            }
            var_s1 += 1;
            arg0->fA0 = (s128) *((u128 *)((u8 *)arg0 + arg0->f2C78 * 0x10 + 0x26F0));
            if (var_s1 < temp_s2) {
                goto loop_2;
            }
        }
    }
}
