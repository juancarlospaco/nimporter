/* Generated by Nim Compiler v1.0.6 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <sys/types.h>
#define _GNU_SOURCE
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
typedef struct tyObject_GcThread__hgJQSlfXDOK3SwSHjeZBXg tyObject_GcThread__hgJQSlfXDOK3SwSHjeZBXg;
typedef struct tyTuple__JfHvHzMrhKkWAUvQKe0i1A tyTuple__JfHvHzMrhKkWAUvQKe0i1A;
typedef struct tyObject_Env_asyncfuturesdotnim___diB2NTuAIWY0FO9c5IUJRGg tyObject_Env_asyncfuturesdotnim___diB2NTuAIWY0FO9c5IUJRGg;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Exception Exception;
typedef struct tySequence__WF89a8QyKeDCh4DYWTmSiBg tySequence__WF89a8QyKeDCh4DYWTmSiBg;
typedef struct TGenericSeq TGenericSeq;
typedef struct TSafePoint TSafePoint;
typedef struct GcFrameHeader GcFrameHeader;
typedef struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack__7fytPA5bBsob6See21YMRA tyObject_GcStack__7fytPA5bBsob6See21YMRA;
typedef struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyTuple__ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw;
typedef struct tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg;
typedef struct tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc__IIomJ6ptE6vfJ5zRbATgkQ;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyProc__IIomJ6ptE6vfJ5zRbATgkQ cbproc, void* ClE_0);
void* ClE_0;
} tyProc__Ig6kXMs9apW5862wHsbFhGw;
typedef NF tyArray__iV2wVpdhi9coq9cstlcqapXg[2001];
struct tyObject_GcThread__hgJQSlfXDOK3SwSHjeZBXg {
tyArray__iV2wVpdhi9coq9cstlcqapXg tls;
};
struct tyTuple__JfHvHzMrhKkWAUvQKe0i1A {
void* Field0;
tyObject_Env_asyncfuturesdotnim___diB2NTuAIWY0FO9c5IUJRGg* Field1;
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc__9axCnCRMUx32AHzFgBrzSMg) (Exception* e);
struct TGenericSeq {
NI len;
NI reserved;
};
struct tyObject_GcStack__7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ* tyArray__SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray__BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* tyArray__N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray__N1u1nqOgmuJN9cSZrnMHgOQ tyArray__B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw* tyArray__lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA {
tyArray__lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* tyArray__0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw {
tyArray__0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyArray__LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray__LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray__SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray__BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray__B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg {
NI collections;
NI maxThreshold;
NI maxStackSize;
NI freedObjects;
};
struct tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw {
tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg* head;
tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg* tail;
pthread_mutex_t lock;
};
struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack__7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw toDispose;
NI gcThreadId;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w additionalRoots;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tySequence__WF89a8QyKeDCh4DYWTmSiBg {
  TGenericSeq Sup;
  tyProc__IIomJ6ptE6vfJ5zRbATgkQ data[SEQ_DECL_SIZE];
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
typedef struct {tyProc__9axCnCRMUx32AHzFgBrzSMg localRaiseHook__EIvMhANBvB9cp2Ezvt29cADg;
tySequence__WF89a8QyKeDCh4DYWTmSiBg* threadDestructionHandlers__8OmU3x0fNdA0DLtOmU3kWw;
NI threadId__wzrdPYhtL9czkCWS4o9an9cRw;
TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
TSafePoint* excHandler__rqLlY5bs9atDw2OXYqJEn5g;
Exception* currException__9bVPeDJlYTi9bQApZpfH8wjg;
NU raiseCounter__riK0d3t9bHYm6l5Rp6xbpRg;
GcFrameHeader* gcFramePtr__ot48iojqko9aFxGhyjjjVaA;
tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__IcYaEuuWivYAS86vFMTS3Q;
tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw* utcInstance__oeKVHn4dFpBJO35HhEkelw;
tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw* localInstance__cLtN9cK9bCe6IPhJ3UFNLNKA;
NIM_BOOL envComputed__LLyFo9bsdu1ZXMDvAe8DhrQ;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* environment__mlhK49b6YMgc9cgrcYkKq9a3g;
NIM_BOOL pyThreadFrameInited__0LBR4zzVR5uWvgtv8SrMjg;
NIM_BOOL gcInited__uuy3PWTwb5gov9ao9bXJYBPg;
tyProc__Ig6kXMs9apW5862wHsbFhGw callSoonProc__9b9b4iUSd60RO2UqC52ifJ6A;
} NimThreadVars;
static N_INLINE(void*, GetThreadLocalVars)(void);
static N_INLINE(void*, threadVarGetValue__lkcYbr6A37jd9cYTDiZRxdAsystem)(pthread_key_t s);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM__vnqLhdH9cCREQ2r9aXVOqbvQ_3)(void);
N_NIMCALL(void, nimRegisterThreadLocalMarker)(tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
extern pthread_key_t globalsSlot__ciXDZu9c27pHpCRMoz4RIgw;
TNimType NTI__Ig6kXMs9apW5862wHsbFhGw_;
extern TNimType NTI__vr5DoT1jILTGdRlYv1OYpw_;
extern TNimType NTI__HsJiUUcO9cHBdUCi0HwkSTA_;
static N_INLINE(void*, threadVarGetValue__lkcYbr6A37jd9cYTDiZRxdAsystem)(pthread_key_t s) {	void* result;
	result = (void*)0;
	result = pthread_getspecific(s);
	return result;
}
static N_INLINE(void*, GetThreadLocalVars)(void) {	void* result;
	void* T1_;
	result = (void*)0;
	T1_ = (void*)0;
	T1_ = threadVarGetValue__lkcYbr6A37jd9cYTDiZRxdAsystem(globalsSlot__ciXDZu9c27pHpCRMoz4RIgw);
	result = ((void*) ((*((tyObject_GcThread__hgJQSlfXDOK3SwSHjeZBXg*) (T1_))).tls));
	return result;
}
static N_NIMCALL(void, TM__vnqLhdH9cCREQ2r9aXVOqbvQ_3)(void) {
	NimThreadVars* NimTV_;
	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	nimGCvisit((void*)NimTV_->callSoonProc__9b9b4iUSd60RO2UqC52ifJ6A.ClE_0, 0);
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_asyncfuturesInit000)(void) {
{
	TFrame FR_; FR_.len = 0;
	NimThreadVars* NimTV_;
	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
}
{

	nimRegisterThreadLocalMarker(TM__vnqLhdH9cCREQ2r9aXVOqbvQ_3);

}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_asyncfuturesDatInit000)(void) {
static TNimNode* TM__vnqLhdH9cCREQ2r9aXVOqbvQ_2_2[2];
static TNimNode TM__vnqLhdH9cCREQ2r9aXVOqbvQ_0[3];
NTI__Ig6kXMs9apW5862wHsbFhGw_.size = sizeof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A);
NTI__Ig6kXMs9apW5862wHsbFhGw_.kind = 18;
NTI__Ig6kXMs9apW5862wHsbFhGw_.base = 0;
TM__vnqLhdH9cCREQ2r9aXVOqbvQ_2_2[0] = &TM__vnqLhdH9cCREQ2r9aXVOqbvQ_0[1];
TM__vnqLhdH9cCREQ2r9aXVOqbvQ_0[1].kind = 1;
TM__vnqLhdH9cCREQ2r9aXVOqbvQ_0[1].offset = offsetof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A, Field0);
TM__vnqLhdH9cCREQ2r9aXVOqbvQ_0[1].typ = (&NTI__vr5DoT1jILTGdRlYv1OYpw_);
TM__vnqLhdH9cCREQ2r9aXVOqbvQ_0[1].name = "Field0";
TM__vnqLhdH9cCREQ2r9aXVOqbvQ_2_2[1] = &TM__vnqLhdH9cCREQ2r9aXVOqbvQ_0[2];
TM__vnqLhdH9cCREQ2r9aXVOqbvQ_0[2].kind = 1;
TM__vnqLhdH9cCREQ2r9aXVOqbvQ_0[2].offset = offsetof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A, Field1);
TM__vnqLhdH9cCREQ2r9aXVOqbvQ_0[2].typ = (&NTI__HsJiUUcO9cHBdUCi0HwkSTA_);
TM__vnqLhdH9cCREQ2r9aXVOqbvQ_0[2].name = "Field1";
TM__vnqLhdH9cCREQ2r9aXVOqbvQ_0[0].len = 2; TM__vnqLhdH9cCREQ2r9aXVOqbvQ_0[0].kind = 2; TM__vnqLhdH9cCREQ2r9aXVOqbvQ_0[0].sons = &TM__vnqLhdH9cCREQ2r9aXVOqbvQ_2_2[0];
NTI__Ig6kXMs9apW5862wHsbFhGw_.node = &TM__vnqLhdH9cCREQ2r9aXVOqbvQ_0[0];
}

