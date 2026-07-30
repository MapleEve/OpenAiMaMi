// __ZN13codexmate_lib4core5relay13codex_catalog24NativeThreadModelCatalog18supports_reasoning @ 0x100220fd0 | 1.2.4 NEW-delta
char __fastcall codexmate_lib::core::relay::codex_catalog::NativeThreadModelCatalog::supports_reasoning::hf70039d15a408170(
        _QWORD *a1,
        const void *a2,
        size_t a3,
        const void *a4,
        size_t a5)
{
  unsigned __int64 v8; // rax
  __int64 v10; // r13
  __int64 v11; // rdx
  __m128i v12; // xmm1
  __int64 v13; // rsi
  __m128i v14; // xmm2
  __int64 v15; // rax
  __m128i v16; // xmm3
  __int64 v18; // r14
  int v19; // eax
  bool v20; // zf
  unsigned __int64 v21; // rax
  __int64 v23; // r15
  __int64 v24; // r12
  __m128i v25; // xmm1
  __int64 v26; // r14
  __int64 v27; // rdx
  __m128i v28; // xmm2
  unsigned __int64 v29; // rax
  __m128i v30; // xmm3
  unsigned __int64 v32; // rbx
  char result; // al
  int v34; // eax
  __m128i v35; // [rsp-88h] [rbp-88h] BYREF
  __int64 v36; // [rsp-70h] [rbp-70h]
  __m128i v37; // [rsp-68h] [rbp-68h] BYREF
  __m128i v38; // [rsp-58h] [rbp-58h] BYREF
  const void *v39; // [rsp-48h] [rbp-48h]
  size_t v40; // [rsp-40h] [rbp-40h]
  __int64 v41; // [rsp-38h] [rbp-38h]

  if ( !a1[18] ) /*0x100220fd0*/
    return 0; /*0x1002211cf*/
  v39 = a4; /*0x100220ff8*/
  v8 = core::hash::BuildHasher::hash_one::h374e6b9f2f19d75f(a1 + 19); /*0x100221009*/
  _RCX = v8 >> 57; /*0x100221011*/
  v10 = a1[15]; /*0x100221015*/
  v11 = a1[16]; /*0x100221019*/
  v12 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v8 >> 57), (__m128i)0LL); /*0x100221028*/
  v13 = 0; /*0x10022102d*/
  v14 = (__m128i)-1LL; /*0x10022102f*/
  while ( 1 ) /*0x100221033*/
  {
    v15 = v11 & v8; /*0x100221033*/
    v16 = _mm_loadu_si128((const __m128i *)(v10 + v15)); /*0x100221036*/
    _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v16, v12)); /*0x100221045*/
    if ( _EBX ) /*0x10022104b*/
      break; /*0x10022104b*/
LABEL_8:
    _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v16, v14)); /*0x1002210c0*/
    if ( (_DWORD)_RCX ) /*0x1002210ca*/
      return 0; /*0x1002210ca*/
    v8 = v15 + v13 + 16; /*0x1002210d0*/
    v13 += 16; /*0x1002210d5*/
  }
  v37.i64[0] = v15; /*0x10022104d*/
  v40 = a5; /*0x100221051*/
  v41 = v11; /*0x100221055*/
  v38 = v12; /*0x100221059*/
  v36 = v13; /*0x10022105e*/
  v35 = v16; /*0x100221062*/
  while ( 1 ) /*0x100221067*/
  {
    __asm { tzcnt ecx, ebx } /*0x100221067*/
    _RCX = -(__int64)(v11 & (v15 + _RCX)); /*0x100221071*/
    if ( a3 == *(_QWORD *)(v10 + 72 * _RCX - 56) ) /*0x10022107d*/
    {
      v18 = v10 + 72 * _RCX; /*0x10022107f*/
      if ( !memcmp(a2, *(const void **)(v18 - 64), a3) ) /*0x10022108e*/
        break; /*0x10022108e*/
    }
    v19 = _EBX - 1; /*0x100221097*/
    LOWORD(v19) = _EBX & (_EBX - 1); /*0x10022109a*/
    v20 = (_WORD)v19 == 0; /*0x10022109a*/
    _EBX = v19; /*0x10022109d*/
    v15 = v37.i64[0]; /*0x10022109f*/
    a5 = v40; /*0x1002210a3*/
    v11 = v41; /*0x1002210a7*/
    v12 = _mm_load_si128(&v38); /*0x1002210ab*/
    v13 = v36; /*0x1002210b0*/
    v14 = (__m128i)-1LL; /*0x1002210b4*/
    v16 = _mm_load_si128(&v35); /*0x1002210b8*/
    if ( v20 ) /*0x1002210bd*/
      goto LABEL_8; /*0x1002210bd*/
  }
  if ( !*(_QWORD *)(v18 - 24) ) /*0x1002210e3*/
    return 0; /*0x1002211be*/
  v21 = core::hash::BuildHasher::hash_one::h374e6b9f2f19d75f(v18 - 16); /*0x1002210f5*/
  _RCX = v21 >> 57; /*0x1002210fd*/
  v23 = *(_QWORD *)(v18 - 48); /*0x100221101*/
  v24 = *(_QWORD *)(v18 - 40); /*0x100221105*/
  v25 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v21 >> 57), (__m128i)0LL); /*0x100221111*/
  v26 = v23 - 24; /*0x100221116*/
  v27 = 0; /*0x10022111a*/
  v28 = (__m128i)-1LL; /*0x10022111c*/
  while ( 1 ) /*0x100221120*/
  {
    v29 = v24 & v21; /*0x100221120*/
    v30 = _mm_loadu_si128((const __m128i *)(v23 + v29)); /*0x100221123*/
    _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v30, v25)); /*0x100221131*/
    if ( _R13D ) /*0x100221139*/
      break; /*0x100221139*/
LABEL_17:
    _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v30, v28)); /*0x1002211a4*/
    if ( (_DWORD)_RCX ) /*0x1002211ae*/
      return 0; /*0x1002211ae*/
    v21 = v29 + v27 + 16; /*0x1002211b0*/
    v27 += 16; /*0x1002211b5*/
  }
  v37 = v25; /*0x10022113b*/
  v41 = v27; /*0x100221140*/
  v38 = v30; /*0x100221144*/
  while ( 1 ) /*0x100221149*/
  {
    __asm { tzcnt ecx, r13d } /*0x100221149*/
    v32 = v29; /*0x10022114e*/
    _RCX = -(__int64)(v24 & (v29 + _RCX)); /*0x100221157*/
    if ( v40 == *(_QWORD *)(v26 + 24 * _RCX + 16) ) /*0x100221167*/
    {
      _RCX = (unsigned int)memcmp(v39, *(const void **)(v26 + 24 * _RCX + 8), v40); /*0x10022117a*/
      result = 1; /*0x10022117c*/
      if ( !(_DWORD)_RCX ) /*0x100221180*/
        return result; /*0x1002211ce*/
    }
    v34 = _R13D - 1; /*0x100221182*/
    LOWORD(v34) = _R13D & (_R13D - 1); /*0x100221186*/
    v20 = (_WORD)v34 == 0; /*0x100221186*/
    _R13D = v34; /*0x10022118a*/
    v29 = v32; /*0x10022118d*/
    v25 = _mm_load_si128(&v37); /*0x100221190*/
    v27 = v41; /*0x100221195*/
    v28 = (__m128i)-1LL; /*0x100221199*/
    v30 = _mm_load_si128(&v38); /*0x10022119d*/
    if ( v20 ) /*0x1002211a2*/
      goto LABEL_17; /*0x1002211a2*/
  }
}