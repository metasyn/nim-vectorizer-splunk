/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w -O3  -I/Users/aljohnson/.choosenim/toolchains/nim-0.18.0/lib -o /Users/aljohnson/code/nim-splunk-vectorizer/src/nimcache/arraymancer_exporting.o /Users/aljohnson/code/nim-splunk-vectorizer/src/nimcache/arraymancer_exporting.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
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
#undef powerpc
#undef unix
typedef struct tySequence_Is9bsejK6Dzx0wAHnaSKL3Q tySequence_Is9bsejK6Dzx0wAHnaSKL3Q;
typedef struct tySequence_Zj5xKXgsXnI4n4hPS6nACA tySequence_Zj5xKXgsXnI4n4hPS6nACA;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_Tensor_urhjHEwA2NkLvIUFwuBxiQ tyObject_Tensor_urhjHEwA2NkLvIUFwuBxiQ;
typedef struct tyObject_DynamicStackArray_sGjc7KeArQw8Nb9cdBLtCaw tyObject_DynamicStackArray_sGjc7KeArQw8Nb9cdBLtCaw;
typedef struct tyObject_CpuStorage_M9ai5QMEb9bZ9cMikEuLTKxTQ tyObject_CpuStorage_M9ai5QMEb9bZ9cMikEuLTKxTQ;
typedef struct tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct tySequence_uB9b75OUPRENsBAu4AnoePA tySequence_uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NI tyArray_7faYhUidbIkFZQJndG6Ggw[7];
struct tyObject_DynamicStackArray_sGjc7KeArQw8Nb9cdBLtCaw {
tyArray_7faYhUidbIkFZQJndG6Ggw data;
NI len;
};
struct tyObject_CpuStorage_M9ai5QMEb9bZ9cMikEuLTKxTQ {
tySequence_Zj5xKXgsXnI4n4hPS6nACA* Fdata;
};
struct tyObject_Tensor_urhjHEwA2NkLvIUFwuBxiQ {
tyObject_DynamicStackArray_sGjc7KeArQw8Nb9cdBLtCaw shape;
tyObject_DynamicStackArray_sGjc7KeArQw8Nb9cdBLtCaw strides;
NI offset;
tyObject_CpuStorage_M9ai5QMEb9bZ9cMikEuLTKxTQ storage;
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence_uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA {
  Exception Sup;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
typedef NI tyArray_HU7qaqKu9czJLT84iCBJnsA[2];
struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct tySequence_Zj5xKXgsXnI4n4hPS6nACA {
  TGenericSeq Sup;
  NF data[SEQ_DECL_SIZE];
};
struct tySequence_Is9bsejK6Dzx0wAHnaSKL3Q {
  TGenericSeq Sup;
  tySequence_Zj5xKXgsXnI4n4hPS6nACA* data[SEQ_DECL_SIZE];
};
struct tySequence_uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
static N_INLINE(NI, rank_9c9bGcb6H7uf0KFeicXmH40Ap_accessors_macros_write)(tyObject_Tensor_urhjHEwA2NkLvIUFwuBxiQ* t);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_LIB_PRIVATE N_NIMCALL(tySequence_Is9bsejK6Dzx0wAHnaSKL3Q*, newSeq_tLeDRG3vacngqyBYeM7zZw)(NI len);
static N_INLINE(NI, X5BX5D__m4A0oZJCb0QRWXjDxP2nVgdata_structure)(tyObject_DynamicStackArray_sGjc7KeArQw8Nb9cdBLtCaw* a, NI idx);
N_LIB_PRIVATE N_NIMCALL(tySequence_Zj5xKXgsXnI4n4hPS6nACA*, newSeq_QEg0mebvlEuej5bmGcaclQ)(NI len);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src, TNimType* mt);
static N_INLINE(NF, atIndex_nmYTaGRAJtCWFyZjbbX7Fgexporting)(tyObject_Tensor_urhjHEwA2NkLvIUFwuBxiQ* t, NI* idx, NI idxLen_0);
static N_INLINE(tySequence_Zj5xKXgsXnI4n4hPS6nACA*, data_f3dmQo1BA9a0pnOqq2lT9cYwexporting)(tyObject_Tensor_urhjHEwA2NkLvIUFwuBxiQ* t);
static N_INLINE(NI, getIndex_JI9b9bhedwUjLDTdiHSBej8whasher)(tyObject_Tensor_urhjHEwA2NkLvIUFwuBxiQ* t, NI* idx, NI idxLen_0);
extern TNimType NTI_yCEN9anxCD6mzBxGjuaRBdg_;
extern TNimType NTI_Gi06FkNeykJn7mrqRZYrkA_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
extern TNimType NTI_Is9bsejK6Dzx0wAHnaSKL3Q_;
STRING_LITERAL(TM_gZSYNY0scQoiy9cJpmJPMvA_2, "Tensor must be of rank 2", 24);

static N_INLINE(NI, rank_9c9bGcb6H7uf0KFeicXmH40Ap_accessors_macros_write)(tyObject_Tensor_urhjHEwA2NkLvIUFwuBxiQ* t) {
	NI result;
	result = (NI)0;
	result = (*t).shape.len;
	return result;
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);
	}
	LA8_: ;
	(*dest) = src;
}

static N_INLINE(NI, X5BX5D__m4A0oZJCb0QRWXjDxP2nVgdata_structure)(tyObject_DynamicStackArray_sGjc7KeArQw8Nb9cdBLtCaw* a, NI idx) {
	NI result;
	result = (NI)0;
	result = (*a).data[(idx)- 0];
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		if (!!((src == NIM_NIL))) goto LA3_;
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	(*dest) = src;
}

static N_INLINE(tySequence_Zj5xKXgsXnI4n4hPS6nACA*, data_f3dmQo1BA9a0pnOqq2lT9cYwexporting)(tyObject_Tensor_urhjHEwA2NkLvIUFwuBxiQ* t) {
	tySequence_Zj5xKXgsXnI4n4hPS6nACA* result;
	result = (*t).storage.Fdata;
	return result;
}

static N_INLINE(NI, getIndex_JI9b9bhedwUjLDTdiHSBej8whasher)(tyObject_Tensor_urhjHEwA2NkLvIUFwuBxiQ* t, NI* idx, NI idxLen_0) {
	NI result;
	result = (NI)0;
	result = (*t).offset;
	{
		NI i;
		NI colontmp_;
		NI i_2;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = idxLen_0;
		i_2 = ((NI) 0);
		{
			while (1) {
				NI T4_;
				if (!(i_2 < colontmp_)) goto LA3;
				i = i_2;
				T4_ = (NI)0;
				T4_ = X5BX5D__m4A0oZJCb0QRWXjDxP2nVgdata_structure((&(*t).strides), i);
				result += (NI)(T4_ * idx[i]);
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}

static N_INLINE(NF, atIndex_nmYTaGRAJtCWFyZjbbX7Fgexporting)(tyObject_Tensor_urhjHEwA2NkLvIUFwuBxiQ* t, NI* idx, NI idxLen_0) {
	NF result;
	tySequence_Zj5xKXgsXnI4n4hPS6nACA* T1_;
	NI T2_;
	result = (NF)0;
	T1_ = (tySequence_Zj5xKXgsXnI4n4hPS6nACA*)0;
	T1_ = data_f3dmQo1BA9a0pnOqq2lT9cYwexporting(t);
	T2_ = (NI)0;
	T2_ = getIndex_JI9b9bhedwUjLDTdiHSBej8whasher(t, idx, idxLen_0);
	result = T1_->data[T2_];
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tySequence_Is9bsejK6Dzx0wAHnaSKL3Q*, toSeq2D_NFRWIJQ28ecH4V1bqSBhNA)(tyObject_Tensor_urhjHEwA2NkLvIUFwuBxiQ* t) {
	tySequence_Is9bsejK6Dzx0wAHnaSKL3Q* result;
	tySequence_Is9bsejK6Dzx0wAHnaSKL3Q* result_2;
	NI T7_;
	result = (tySequence_Is9bsejK6Dzx0wAHnaSKL3Q*)0;
	{
		NI T3_;
		tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA* e;
		NimStringDesc* T6_;
		T3_ = (NI)0;
		T3_ = rank_9c9bGcb6H7uf0KFeicXmH40Ap_accessors_macros_write(t);
		if (!!((T3_ == ((NI) 2)))) goto LA4_;
		e = (tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA*)0;
		e = (tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA*) newObj((&NTI_yCEN9anxCD6mzBxGjuaRBdg_), sizeof(tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA));
		(*e).Sup.Sup.m_type = (&NTI_Gi06FkNeykJn7mrqRZYrkA_);
		T6_ = (NimStringDesc*)0;
		T6_ = (*e).Sup.message; (*e).Sup.message = copyStringRC1(((NimStringDesc*) &TM_gZSYNY0scQoiy9cJpmJPMvA_2));
		if (T6_) nimGCunrefNoCycle(T6_);
		asgnRef((void**) (&(*e).Sup.parent), NIM_NIL);
		raiseException((Exception*)e, "ValueError");
	}
	LA4_: ;
	T7_ = (NI)0;
	T7_ = X5BX5D__m4A0oZJCb0QRWXjDxP2nVgdata_structure((&(*t).shape), ((NI) 0));
	result_2 = newSeq_tLeDRG3vacngqyBYeM7zZw(((NI) (T7_)));
	{
		NI i;
		NI colontmp_;
		NI i_2;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = X5BX5D__m4A0oZJCb0QRWXjDxP2nVgdata_structure((&(*t).shape), ((NI) 0));
		i_2 = ((NI) 0);
		{
			while (1) {
				NI T11_;
				if (!(i_2 < colontmp_)) goto LA10;
				i = i_2;
				T11_ = (NI)0;
				T11_ = X5BX5D__m4A0oZJCb0QRWXjDxP2nVgdata_structure((&(*t).shape), ((NI) 1));
				asgnRefNoCycle((void**) (&result_2->data[i]), newSeq_QEg0mebvlEuej5bmGcaclQ(((NI) (T11_))));
				i_2 += ((NI) 1);
			} LA10: ;
		}
	}
	genericSeqAssign((&result), result_2, (&NTI_Is9bsejK6Dzx0wAHnaSKL3Q_));
	{
		NI i_3;
		NI colontmp__2;
		NI i_4;
		i_3 = (NI)0;
		colontmp__2 = (NI)0;
		colontmp__2 = X5BX5D__m4A0oZJCb0QRWXjDxP2nVgdata_structure((&(*t).shape), ((NI) 0));
		i_4 = ((NI) 0);
		{
			while (1) {
				if (!(i_4 < colontmp__2)) goto LA14;
				i_3 = i_4;
				{
					NI j;
					NI colontmp__3;
					NI i_5;
					j = (NI)0;
					colontmp__3 = (NI)0;
					colontmp__3 = X5BX5D__m4A0oZJCb0QRWXjDxP2nVgdata_structure((&(*t).shape), ((NI) 1));
					i_5 = ((NI) 0);
					{
						while (1) {
							tyArray_HU7qaqKu9czJLT84iCBJnsA T18_;
							if (!(i_5 < colontmp__3)) goto LA17;
							j = i_5;
							T18_[0] = i_3;
							T18_[1] = j;
							result->data[i_3]->data[j] = atIndex_nmYTaGRAJtCWFyZjbbX7Fgexporting(t, T18_, 2);
							i_5 += ((NI) 1);
						} LA17: ;
					}
				}
				i_4 += ((NI) 1);
			} LA14: ;
		}
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, arraymancer_exportingInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, arraymancer_exportingDatInit000)(void) {
}
