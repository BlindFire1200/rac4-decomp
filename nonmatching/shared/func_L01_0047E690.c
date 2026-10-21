/* Not matching yet: BYTES 6/168 (tools/try_func.py func_L01_0047E690 --diff). Not part of the build. */
/* cflags: -mno-split-addresses */

extern u8 *D_00222D14_[];
#define D_00222D14 (D_00222D14_[0])
extern void func_L01_0064EA50(u8 *, s32);
extern void func_L01_0064EAC0(s32, s32);

void func_L01_0047E690(u8 *arg0, s32 arg1) {
    u8 *state = *(u8 **)(arg0 + 0xAC);
    s32 *p = (s32 *)state;
    s32 count = 1;
    s32 *q;
    do {
        s32 index = *p++;
        count--;
        if (index != -1) {
            func_L01_0064EA50(D_00222D14 + (index << 8), arg1);
        }
    } while (count >= 0);

    q = (s32 *)(state + 8);
    count = 1;
    do {
        func_L01_0064EAC0(*q++, arg1);
        count--;
    } while (count >= 0);
}
