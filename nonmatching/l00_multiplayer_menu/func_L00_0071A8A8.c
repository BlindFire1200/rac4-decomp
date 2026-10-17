/* Not matching yet: BYTES 10/152 (tools/try_func.py func_L00_0071A8A8 --diff). Not part of the build. */
void func_0011A9EC(s32, void *); /* extern */
void func_L00_0071B478(void *); /* extern */
void func_L00_0071BB58(void *); /* extern */
void func_L00_00741990(void *); /* extern */
void func_L00_0071A8A8(void *arg0) {
    ((void (**)(void *))(*(u8 **)(*(u8 **)((u8 *)arg0 + 0x268) + 0x58) + 0x140))[0](*(u8 **)((u8 *)arg0 + 0x268));
    *(u8 *)(*(u8 **)((u8 *)arg0 + 0x268) + 0xA8) = *(u8 *)((u8 *)arg0 + 0x26C);
    *(u8 *)(*(u8 **)((u8 *)arg0 + 0x268) + 0xA9) = *(u8 *)((u8 *)arg0 + 0x26D);
    *(s32 *)(*(u8 **)((u8 *)arg0 + 0x268) + 0x250) = *(s32 *)((u8 *)arg0 + 0x270);
    *(s32 *)(*(u8 **)((u8 *)arg0 + 0x268) + 0x254) = *(s32 *)((u8 *)arg0 + 0x274);
    func_L00_00741990(*(void **)((u8 *)arg0 + 0x268));
    if (*(s32 *)((u8 *)arg0 + 0x27C) == 1) {
        func_0011A9EC(*(s32 *)((u8 *)arg0 + 0x288), (u8 *)arg0 + 0x28C);
    }
    func_L00_0071B478(arg0);
    func_L00_0071BB58(arg0);
}
