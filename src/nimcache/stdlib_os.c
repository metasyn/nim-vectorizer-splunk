/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w -O3  -I/Users/aljohnson/.choosenim/toolchains/nim-0.18.0/lib -o /Users/aljohnson/code/nim-splunk-vectorizer/src/nimcache/stdlib_os.o /Users/aljohnson/code/nim-splunk-vectorizer/src/nimcache/stdlib_os.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <sys/param.h>
#include <mach-o/dyld.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <setjmp.h>
#include <unistd.h>
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence_uB9b75OUPRENsBAu4AnoePA tySequence_uB9b75OUPRENsBAu4AnoePA;
typedef struct TSafePoint TSafePoint;
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
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ;
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
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence_uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (Exception* e, void* ClE_0);
void* ClE_0;
} tyProc_KeeAOYBd84Ofsw6Y7LizaQ;
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
tyProc_KeeAOYBd84Ofsw6Y7LizaQ raiseAction;
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
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
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
struct tySequence_uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosexpandFilename)(NimStringDesc* filename);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError_bEwAamo1N7TKcaU9akpiyIg)(NI32 errorCode, NimStringDesc* additionalInfo);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError_tNPXXFl9cb3BG0pJKzUn9bew)(void);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, tryMoveFSObject_kAUHL0UShtIjkMl3w2BG3A)(NimStringDesc* source, NimStringDesc* dest);
N_LIB_PRIVATE N_NIMCALL(void, noscopyFile)(NimStringDesc* source, NimStringDesc* dest);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open_sEp0GH2306oGo9bqBpj5oTQ)(FILE** f, NimStringDesc* filename, tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ mode, NI bufSize);
N_LIB_PRIVATE N_NIMCALL(void, close_BWnr8V7RERYno9bIdPmw8Hw_3)(FILE* f);
N_LIB_PRIVATE N_NOCONV(void*, alloc_sVm4rDImKK2ZDdylByayiA)(NI size);
N_LIB_PRIVATE N_NIMCALL(NI, readBuffer_1qjbrvfnPD4PaIieHVDvhw_2)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(NI, writeBuffer_1qjbrvfnPD4PaIieHVDvhw)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NOCONV(void, dealloc_RCjNtRnHdRYntrcE7YtwWw)(void* p);
N_LIB_PRIVATE N_NIMCALL(void, flushFile_BWnr8V7RERYno9bIdPmw8Hw_2)(FILE* f);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_LIB_PRIVATE N_NIMCALL(void, nosremoveFile)(NimStringDesc* file);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nostryRemoveFile)(NimStringDesc* file);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, reraiseException)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NIM_BOOL, eqeq__9ccNWqrTIE9bcAqE2Q0ro7zgospaths)(NCSTRING x, NCSTRING y);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NOINLINE(void, raiseAssert_PpfSiTIeNpMAb9a5o6SglJw_2)(NimStringDesc* msg);
extern int cmdCount;
extern NCSTRING* cmdLine;
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern Exception* currException_9bVPeDJlYTi9bQApZpfH8wjg;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_yu6cxgKBBXbNsTkT9cyMd4g_2, "", 0);
STRING_LITERAL(TM_yu6cxgKBBXbNsTkT9cyMd4g_4, "\0120 <= bufsize ", 14);

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosexpandFilename)(NimStringDesc* filename) {
	NimStringDesc* result;
	NCSTRING r;
	result = (NimStringDesc*)0;
	r = realpath(filename->data, NIM_NIL);
	{
		NI32 T5_;
		if (!(r == 0)) goto LA3_;
		T5_ = (NI32)0;
		T5_ = osLastError_tNPXXFl9cb3BG0pJKzUn9bew();
		raiseOSError_bEwAamo1N7TKcaU9akpiyIg(T5_, ((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_2));
	}
	goto LA1_;
	LA3_: ;
	{
		result = cstrToNimstr(r);
		free(((void*) (r)));
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosgetAppFilename)(void) {
	NimStringDesc* result;
	unsigned int size;
	result = (NimStringDesc*)0;
	size = (unsigned int)0;
	_NSGetExecutablePath(NIM_NIL, (&size));
	result = mnewString(((NI) (size)));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = _NSGetExecutablePath(result->data, (&size));
		if (!T3_) goto LA4_;
		result = copyString(((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_2));
	}
	LA4_: ;
	{
		if (!(((NI) 0) < (result ? result->Sup.len : 0))) goto LA8_;
		result = nosexpandFilename(result);
	}
	LA8_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, tryMoveFSObject_kAUHL0UShtIjkMl3w2BG3A)(NimStringDesc* source, NimStringDesc* dest) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		int T3_;
		NI32 err;
		T3_ = (int)0;
		T3_ = rename(source->data, dest->data);
		if (!!((T3_ == ((NI32) 0)))) goto LA4_;
		err = osLastError_tNPXXFl9cb3BG0pJKzUn9bew();
		{
			if (!(err == EXDEV)) goto LA8_;
			result = NIM_FALSE;
			goto BeforeRet_;
		}
		goto LA6_;
		LA8_: ;
		{
			NCSTRING T11_;
			NimStringDesc* T12_;
			T11_ = (NCSTRING)0;
			T11_ = strerror(errno);
			T12_ = (NimStringDesc*)0;
			T12_ = cstrToNimstr(T11_);
			raiseOSError_bEwAamo1N7TKcaU9akpiyIg(err, T12_);
		}
		LA6_: ;
	}
	LA4_: ;
	result = NIM_TRUE;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, noscopyFile)(NimStringDesc* source, NimStringDesc* dest) {
	FILE* d;
	FILE* s;
	void* buf;
	d = (FILE*)0;
	s = (FILE*)0;
	{
		NIM_BOOL T3_;
		NI32 T6_;
		T3_ = (NIM_BOOL)0;
		T3_ = open_sEp0GH2306oGo9bqBpj5oTQ(&s, source, ((tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ) 0), ((NI) -1));
		if (!!(T3_)) goto LA4_;
		T6_ = (NI32)0;
		T6_ = osLastError_tNPXXFl9cb3BG0pJKzUn9bew();
		raiseOSError_bEwAamo1N7TKcaU9akpiyIg(T6_, ((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_2));
	}
	LA4_: ;
	{
		NIM_BOOL T9_;
		NI32 T12_;
		T9_ = (NIM_BOOL)0;
		T9_ = open_sEp0GH2306oGo9bqBpj5oTQ(&d, dest, ((tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ) 1), ((NI) -1));
		if (!!(T9_)) goto LA10_;
		close_BWnr8V7RERYno9bIdPmw8Hw_3(s);
		T12_ = (NI32)0;
		T12_ = osLastError_tNPXXFl9cb3BG0pJKzUn9bew();
		raiseOSError_bEwAamo1N7TKcaU9akpiyIg(T12_, ((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_2));
	}
	LA10_: ;
	buf = alloc_sVm4rDImKK2ZDdylByayiA(((NI) 8000));
	{
		while (1) {
			NI bytesread;
			bytesread = readBuffer_1qjbrvfnPD4PaIieHVDvhw_2(s, buf, ((NI) 8000));
			{
				NI byteswritten;
				if (!(((NI) 0) < bytesread)) goto LA17_;
				byteswritten = writeBuffer_1qjbrvfnPD4PaIieHVDvhw(d, buf, ((NI) (bytesread)));
				{
					NI32 T23_;
					if (!!((bytesread == byteswritten))) goto LA21_;
					dealloc_RCjNtRnHdRYntrcE7YtwWw(buf);
					close_BWnr8V7RERYno9bIdPmw8Hw_3(s);
					close_BWnr8V7RERYno9bIdPmw8Hw_3(d);
					T23_ = (NI32)0;
					T23_ = osLastError_tNPXXFl9cb3BG0pJKzUn9bew();
					raiseOSError_bEwAamo1N7TKcaU9akpiyIg(T23_, ((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_2));
				}
				LA21_: ;
			}
			LA17_: ;
			{
				if (!!((bytesread == ((NI) 8000)))) goto LA26_;
				goto LA13;
			}
			LA26_: ;
		}
	} LA13: ;
	dealloc_RCjNtRnHdRYntrcE7YtwWw(buf);
	close_BWnr8V7RERYno9bIdPmw8Hw_3(s);
	flushFile_BWnr8V7RERYno9bIdPmw8Hw_2(d);
	close_BWnr8V7RERYno9bIdPmw8Hw_3(d);
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = s;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nostryRemoveFile)(NimStringDesc* file) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = NIM_TRUE;
	{
		NIM_BOOL T3_;
		int T4_;
		T3_ = (NIM_BOOL)0;
		T4_ = (int)0;
		T4_ = remove(file->data);
		T3_ = !((T4_ == ((NI32) 0)));
		if (!(T3_)) goto LA5_;
		T3_ = !((errno == ENOENT));
		LA5_: ;
		if (!T3_) goto LA6_;
		result = NIM_FALSE;
	}
	LA6_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, nosremoveFile)(NimStringDesc* file) {
	{
		NIM_BOOL T3_;
		NI32 T6_;
		NCSTRING T7_;
		NimStringDesc* T8_;
		T3_ = (NIM_BOOL)0;
		T3_ = nostryRemoveFile(file);
		if (!!(T3_)) goto LA4_;
		T6_ = (NI32)0;
		T6_ = osLastError_tNPXXFl9cb3BG0pJKzUn9bew();
		T7_ = (NCSTRING)0;
		T7_ = strerror(errno);
		T8_ = (NimStringDesc*)0;
		T8_ = cstrToNimstr(T7_);
		raiseOSError_bEwAamo1N7TKcaU9akpiyIg(T6_, T8_);
	}
	LA4_: ;
}

static N_INLINE(void, popSafePoint)(void) {
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = (*excHandler_rqLlY5bs9atDw2OXYqJEn5g).prev;
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
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

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currException_9bVPeDJlYTi9bQApZpfH8wjg), (*currException_9bVPeDJlYTi9bQApZpfH8wjg).up);
}

N_LIB_PRIVATE N_NIMCALL(void, nosmoveFile)(NimStringDesc* source, NimStringDesc* dest) {
	{
		NIM_BOOL T3_;
		TSafePoint TM_yu6cxgKBBXbNsTkT9cyMd4g_3;
		T3_ = (NIM_BOOL)0;
		T3_ = tryMoveFSObject_kAUHL0UShtIjkMl3w2BG3A(source, dest);
		if (!!(T3_)) goto LA4_;
		noscopyFile(source, dest);
		pushSafePoint(&TM_yu6cxgKBBXbNsTkT9cyMd4g_3);
		TM_yu6cxgKBBXbNsTkT9cyMd4g_3.status = _setjmp(TM_yu6cxgKBBXbNsTkT9cyMd4g_3.context);
		if (TM_yu6cxgKBBXbNsTkT9cyMd4g_3.status == 0) {
			nosremoveFile(source);
			popSafePoint();
		}
		else {
			popSafePoint();
			{
				NIM_BOOL T9_;
				TM_yu6cxgKBBXbNsTkT9cyMd4g_3.status = 0;
				T9_ = (NIM_BOOL)0;
				T9_ = nostryRemoveFile(dest);
				T9_;
				reraiseException();
				popCurrentException();
			}
		}
		if (TM_yu6cxgKBBXbNsTkT9cyMd4g_3.status != 0) reraiseException();
	}
	LA4_: ;
}

static N_INLINE(NIM_BOOL, eqeq__9ccNWqrTIE9bcAqE2Q0ro7zgospaths)(NCSTRING x, NCSTRING y) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		if (!(((void*) (x)) == ((void*) (y)))) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		T6_ = (NIM_BOOL)0;
		T6_ = (x == 0);
		if (T6_) goto LA7_;
		T6_ = (y == 0);
		LA7_: ;
		if (!T6_) goto LA8_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA8_: ;
	{
		int T11_;
		T11_ = (int)0;
		T11_ = strcmp(x, y);
		result = (T11_ == ((NI32) 0));
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void) {
	NimStringDesc* result;
	NI bufsize;
	result = (NimStringDesc*)0;
	bufsize = ((NI) 1024);
	result = mnewString(((NI) (bufsize)));
	{
		while (1) {
			{
				NCSTRING T5_;
				NIM_BOOL T6_;
				int T9_;
				T5_ = (NCSTRING)0;
				T5_ = getcwd(result->data, bufsize);
				T6_ = (NIM_BOOL)0;
				T6_ = eqeq__9ccNWqrTIE9bcAqE2Q0ro7zgospaths(T5_, NIM_NIL);
				if (!!(T6_)) goto LA7_;
				T9_ = (int)0;
				T9_ = strlen(result->data);
				result = setLengthStr(result, ((NI) (T9_)));
				goto LA1;
			}
			goto LA3_;
			LA7_: ;
			{
				NI32 err;
				err = osLastError_tNPXXFl9cb3BG0pJKzUn9bew();
				{
					if (!(err == ERANGE)) goto LA13_;
					bufsize = (NI)((NU64)(bufsize) << (NU64)(((NI) 1)));
					{
						if (!!((((NI) 0) <= bufsize))) goto LA17_;
						raiseAssert_PpfSiTIeNpMAb9a5o6SglJw_2(((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_4));
					}
					LA17_: ;
					result = mnewString(((NI) (bufsize)));
				}
				goto LA11_;
				LA13_: ;
				{
					NI32 T20_;
					T20_ = (NI32)0;
					T20_ = osLastError_tNPXXFl9cb3BG0pJKzUn9bew();
					raiseOSError_bEwAamo1N7TKcaU9akpiyIg(T20_, ((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_2));
				}
				LA11_: ;
			}
			LA3_: ;
		}
	} LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit000)(void) {
}
