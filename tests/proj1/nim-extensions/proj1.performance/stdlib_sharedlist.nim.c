/* Generated by Nim Compiler v1.0.6 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <pthread.h>
#include <sys/types.h>
                          #include <pthread.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw;
typedef struct tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg;
struct tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw {
tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg* head;
tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg* tail;
pthread_mutex_t lock;
};
typedef void* tyArray__Rrw59cMvNu8cDA9cQDh4v2oA[100];
struct tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg {
tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg* next;
NI dataLen;
tyArray__Rrw59cMvNu8cDA9cQDh4v2oA d;
};
static N_INLINE(void, initLock__Mz9ax9a7rBFxTQq0g0dLnxAwlocks)(pthread_mutex_t* lock);
static N_INLINE(void, initLock__Mz9ax9a7rBFxTQq0g0dLnxAwlocks)(pthread_mutex_t* lock) {	pthread_mutex_init(lock, NIM_NIL);
}
N_LIB_PRIVATE N_NIMCALL(void, init__rlyb6Y54ONML4HcId0P2OA)(tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw* t) {	initLock__Mz9ax9a7rBFxTQq0g0dLnxAwlocks((&(*t).lock));
	(*t).head = NIM_NIL;
	(*t).tail = NIM_NIL;
}
