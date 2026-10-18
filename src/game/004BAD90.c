#include "common.h"
typedef struct __attribute__((packed)) { u32 f0[4]; } Type1;
void *func_00501458(void *, void *, void *, void *, void *, void *);
void func_004BB018(void); void func_004BB150(void); void func_004BB300(void);
s32 D_002217EC=0, D_002217F0=0, D_002217F4=0, D_002217F8=0;
extern u8 D_30A5A0[], D_30A5B8[], D_30A5D0[], D_30A5E8[];
extern Type1 D_0021F8F0;
s32 func_004BAD90(s32 arg0) {
 Type1 copy;
 if(!D_002217EC){func_00501458(D_30A5A0,(void*)func_004BB018,(void*)func_004BB150,(void*)func_004BB300,0,0);D_002217EC=1;}
 if(!D_002217F0){func_00501458(D_30A5B8,(void*)func_004BB018,(void*)func_004BB150,(void*)func_004BB300,0,0);D_002217F0=1;}
 if(!D_002217F4){func_00501458(D_30A5D0,(void*)func_004BB018,(void*)func_004BB150,(void*)func_004BB300,0,0);D_002217F4=1;}
 if(!D_002217F8){func_00501458(D_30A5E8,(void*)func_004BB018,(void*)func_004BB150,(void*)func_004BB300,0,0);D_002217F8=1;}
 copy=D_0021F8F0; return copy.f0[arg0];
}
