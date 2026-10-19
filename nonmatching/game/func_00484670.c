/* Not matching yet: BYTES 8/160 (tools/try_func.py func_00484670 --diff). Not part of the build. */
extern void *func_00476660(void);
extern void func_00473A88(void *, u8, u8);
void func_00484670(void *arg0) {
    void *state = func_00476660();
    s32 mode;
    u8 first;
    u8 second;
    u8 third;
    if (state == 0) return;
    mode = *(s32 *)((u8 *)state + 0x48);
    if (*(u16 *)((u8 *)state + 0x60) != 0) {
        mode = ((mode ^ 6) != 0) ? 3 : mode;
    }
    first = *(u8 *)((u8 *)state + 0x15);
    if (first == 0xFF) first = *(u8 *)((u8 *)arg0 + 0x20);
    if ((u32)(mode - 5) < 2) {
        second = *(u8 *)((u8 *)state + 0x16);
        if (second != 0xFF) first = second;
    }
    third = *(u8 *)((u8 *)state + 0x17);
    if (third != 0xFF) {
        func_00473A88(arg0, first, third);
        return;
    }
    func_00473A88(arg0, first, 0xFF);
}
