/* Not matching yet: BYTES 32/168 (tools/try_func.py func_L01_0045BA88 --diff). Not part of the build. */
extern void func_L00_005B0038(void *, void *, s32);
extern void *func_L00_005BD3C0(s16);
extern s32 func_L00_0066D220(s32, s32, void *);
extern void func_L01_0045B6A0(void);
extern u8 D_00222A98[];
extern void func_L01_0045C4F8(void);

void func_L01_0045BA88(u8 *arg0) {
    u8 *object;
    u8 *entry;
    s32 active;

    func_L01_0045B6A0();
    object = *(u8 **)(arg0 + 0xAC);
    if (*(u32 *)(*(u8 **)(object + 0x5F0) + 0x50) != 0) return;
    active = 0;
    entry = func_L00_005BD3C0(*(s16 *)(object + 0x620));
    if (entry != 0 && *(u8 **)(entry + 0x1C) == arg0)
        active = *(u8 *)(entry + 0x10) != 0;
    if (active == 0) *(s32 *)(object + 0x620) = func_L00_0066D220(0xB, 4, arg0);
    func_L00_005B0038(D_00222A98, func_L01_0045C4F8, arg0);
}
