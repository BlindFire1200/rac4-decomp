#include "common.h"
typedef struct __attribute__((packed)) { u32 f0[4]; } Type1;
void *func_00501458(void *, void *, void *, void *, void *, void *);
void func_004B9BE8(void); void func_004B9DF8(void); void func_004B9EB0(void);
s32 D_002217CC=0, D_002217D0=0, D_002217D4=0, D_002217D8=0;
extern u8 D_30A200[], D_30A218[], D_30A230[], D_30A248[];
extern Type1 D_0021F8C0;
s32 func_004B99D0(s32 arg0) {
 Type1 copy;
 if(!D_002217CC){func_00501458(D_30A200,(void*)func_004B9BE8,(void*)func_004B9DF8,(void*)func_004B9EB0,0,0);D_002217CC=1;}
 if(!D_002217D0){func_00501458(D_30A218,(void*)func_004B9BE8,(void*)func_004B9DF8,(void*)func_004B9EB0,0,0);D_002217D0=1;}
 if(!D_002217D4){func_00501458(D_30A230,(void*)func_004B9BE8,(void*)func_004B9DF8,(void*)func_004B9EB0,0,0);D_002217D4=1;}
 if(!D_002217D8){func_00501458(D_30A248,(void*)func_004B9BE8,(void*)func_004B9DF8,(void*)func_004B9EB0,0,0);D_002217D8=1;}
 copy=D_0021F8C0; return copy.f0[arg0];
}
