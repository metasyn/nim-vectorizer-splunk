/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w -O3  -I/Users/aljohnson/.choosenim/toolchains/nim-0.18.0/lib -o /Users/aljohnson/code/nim-splunk-vectorizer/src/nimcache/arraymancer_metadataArray.o /Users/aljohnson/code/nim-splunk-vectorizer/src/nimcache/arraymancer_metadataArray.c */
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
typedef struct tyObject_DynamicStackArray_sGjc7KeArQw8Nb9cdBLtCaw tyObject_DynamicStackArray_sGjc7KeArQw8Nb9cdBLtCaw;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NI tyArray_7faYhUidbIkFZQJndG6Ggw[7];
struct tyObject_DynamicStackArray_sGjc7KeArQw8Nb9cdBLtCaw {
tyArray_7faYhUidbIkFZQJndG6Ggw data;
NI len;
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
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
TNimType NTI_sGjc7KeArQw8Nb9cdBLtCaw_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
TNimType NTI_7faYhUidbIkFZQJndG6Ggw_;
NIM_EXTERNC N_NOINLINE(void, arraymancer_metadataArrayInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, arraymancer_metadataArrayDatInit000)(void) {
static TNimNode* TM_WjfozmsLZqUjHTWke8Om0g_2[2];
static TNimNode TM_WjfozmsLZqUjHTWke8Om0g_0[3];
NTI_sGjc7KeArQw8Nb9cdBLtCaw_.size = sizeof(tyObject_DynamicStackArray_sGjc7KeArQw8Nb9cdBLtCaw);
NTI_sGjc7KeArQw8Nb9cdBLtCaw_.kind = 18;
NTI_sGjc7KeArQw8Nb9cdBLtCaw_.base = 0;
NTI_sGjc7KeArQw8Nb9cdBLtCaw_.flags = 3;
TM_WjfozmsLZqUjHTWke8Om0g_2[0] = &TM_WjfozmsLZqUjHTWke8Om0g_0[1];
NTI_7faYhUidbIkFZQJndG6Ggw_.size = sizeof(tyArray_7faYhUidbIkFZQJndG6Ggw);
NTI_7faYhUidbIkFZQJndG6Ggw_.kind = 16;
NTI_7faYhUidbIkFZQJndG6Ggw_.base = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
NTI_7faYhUidbIkFZQJndG6Ggw_.flags = 3;
TM_WjfozmsLZqUjHTWke8Om0g_0[1].kind = 1;
TM_WjfozmsLZqUjHTWke8Om0g_0[1].offset = offsetof(tyObject_DynamicStackArray_sGjc7KeArQw8Nb9cdBLtCaw, data);
TM_WjfozmsLZqUjHTWke8Om0g_0[1].typ = (&NTI_7faYhUidbIkFZQJndG6Ggw_);
TM_WjfozmsLZqUjHTWke8Om0g_0[1].name = "data";
TM_WjfozmsLZqUjHTWke8Om0g_2[1] = &TM_WjfozmsLZqUjHTWke8Om0g_0[2];
TM_WjfozmsLZqUjHTWke8Om0g_0[2].kind = 1;
TM_WjfozmsLZqUjHTWke8Om0g_0[2].offset = offsetof(tyObject_DynamicStackArray_sGjc7KeArQw8Nb9cdBLtCaw, len);
TM_WjfozmsLZqUjHTWke8Om0g_0[2].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_WjfozmsLZqUjHTWke8Om0g_0[2].name = "len";
TM_WjfozmsLZqUjHTWke8Om0g_0[0].len = 2; TM_WjfozmsLZqUjHTWke8Om0g_0[0].kind = 2; TM_WjfozmsLZqUjHTWke8Om0g_0[0].sons = &TM_WjfozmsLZqUjHTWke8Om0g_2[0];
NTI_sGjc7KeArQw8Nb9cdBLtCaw_.node = &TM_WjfozmsLZqUjHTWke8Om0g_0[0];
}
