/* Not matching yet: BYTES 1/68 (tools/try_func.py func_01EBA450 --diff). Not part of the build. */
typedef struct {
    u8 f0;
    u8 f1;
    u8 b;
    u8 d;
    u32 f;
} Type3;

/* Stores the word of the packet at arg2 into entry b (0x18 bytes each) of the table at 0x188, when the table is set. */
s32 func_01EBA450(u8 *arg0, s32 unused, Type3 *arg2) {
    Type3 packet;
    void *table;
    u32 i;

    packet = *arg2;
    table = *(void **)(arg0 + 0x188);
    if (table != NULL) {
        i = packet.b;
        *(u32 *)((u8 *)table + (((i << 1) + i) << 3) + 0x14) = packet.f;
    }
    return 0;
}
