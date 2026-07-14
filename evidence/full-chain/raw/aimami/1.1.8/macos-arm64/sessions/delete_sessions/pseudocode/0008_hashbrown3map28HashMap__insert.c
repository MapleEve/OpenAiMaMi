// mac 1.1.8 delete_sessions node va=0x10071c020 depth=1
// hashbrown3map28HashMap::insert
__int64 __fastcall hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h1d31b66c0e1d63b4(__int64 a1, __int64 *a2)
{
  unsigned __int64 v4; // r15
  const __m128i *v5; // r10
  __int64 v6; // rsi
  unsigned __int64 v7; // r9
  __m128i v8; // xmm1
  const void *v9; // rdi
  size_t v10; // r14
  __int64 v11; // rdx
  __m128i v12; // xmm2
  __int64 i; // rcx
  unsigned __int64 v14; // r15
  __m128i v15; // xmm3
  __int64 v17; // rax
  const __m128i *v18; // r15
  int v19; // eax
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __m128i v27; // [rsp+0h] [rbp-A0h] BYREF
  __m128i v28; // [rsp+10h] [rbp-90h] BYREF
  __int64 v29; // [rsp+28h] [rbp-78h]
  __int64 v30; // [rsp+30h] [rbp-70h]
  __int64 v31; // [rsp+38h] [rbp-68h]
  const __m128i *v32; // [rsp+40h] [rbp-60h]
  __int64 v33; // [rsp+48h] [rbp-58h]
  unsigned __int64 v34; // [rsp+50h] [rbp-50h]
  unsigned __int64 v35; // [rsp+58h] [rbp-48h]
  __int64 v36; // [rsp+60h] [rbp-40h]
  __int64 v37; // [rsp+68h] [rbp-38h]
  unsigned __int64 v38; // [rsp+70h] [rbp-30h]

  _RAX = core::hash::BuildHasher::hash_one::hf01745fa5506c7f9(a1 + 32, a2); /*0x10071c03e*/
  v4 = _RAX; /*0x10071c043*/
  if ( !*(_QWORD *)(a1 + 16) ) /*0x10071c046*/
    HIDWORD(_RAX) = (unsigned __int64)hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h6cca294c8f1b4c57( /*0x10071c23f*/
                                        a1,
                                        1,
                                        a1 + 32,
                                        1) >> 32;
  v5 = *(const __m128i **)a1; /*0x10071c051*/
  v32 = (const __m128i *)a1; /*0x10071c054*/
  v6 = *(_QWORD *)(a1 + 8); /*0x10071c058*/
  v7 = v4 >> 57; /*0x10071c05f*/
  v8 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v4 >> 57), (__m128i)0LL); /*0x10071c06c*/
  v9 = (const void *)a2[1]; /*0x10071c071*/
  v10 = a2[2]; /*0x10071c075*/
  v11 = 0; /*0x10071c079*/
  v12 = (__m128i)-1LL; /*0x10071c07b*/
  for ( i = 0; ; i += 16 ) /*0x10071c07f*/
  {
    v14 = v6 & v4; /*0x10071c081*/
    v15 = _mm_loadu_si128((const __m128i *)((char *)v5 + v14)); /*0x10071c084*/
    _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v15, v8)); /*0x10071c092*/
    if ( _EBX ) /*0x10071c098*/
      break; /*0x10071c098*/
LABEL_9:
    _R8 = v38; /*0x10071c140*/
    if ( v11 != 1 ) /*0x10071c148*/
    {
      _RAX = (unsigned int)_mm_movemask_epi8(v15); /*0x10071c14a*/
      if ( !(_DWORD)_RAX ) /*0x10071c150*/
      {
        v11 = 0; /*0x10071c170*/
        goto LABEL_15; /*0x10071c170*/
      }
      __asm { tzcnt r8d, eax } /*0x10071c152*/
      _R8 = v6 & (v14 + _R8); /*0x10071c15a*/
    }
    _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v15, v12)); /*0x10071c161*/
    if ( (_DWORD)_RAX ) /*0x10071c167*/
    {
      v21 = v5->i8[_R8]; /*0x10071c19f*/
      if ( v21 >= 0 ) /*0x10071c1a6*/
      {
        _EAX = _mm_movemask_epi8(_mm_load_si128(v5)); /*0x10071c24e*/
        __asm { tzcnt r8d, eax } /*0x10071c252*/
        v21 = v5->i8[_R8]; /*0x10071c257*/
      }
      v31 = a2[2]; /*0x10071c1b0*/
      v22 = *a2; /*0x10071c1b4*/
      v30 = a2[1]; /*0x10071c1bc*/
      v29 = v22; /*0x10071c1c0*/
      v5->i8[_R8] = v7; /*0x10071c1d0*/
      v5[1].i8[v6 & (_R8 - 16)] = v7; /*0x10071c1d4*/
      v32[1] = _mm_sub_epi64( /*0x10071c1f5*/
                 _mm_loadu_si128(v32 + 1),
                 _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_10125B150), v21 & 1, 0));
      v23 = -3LL * _R8; /*0x10071c1fd*/
      v5->i64[v23 - 1] = v31; /*0x10071c205*/
      v24 = v29; /*0x10071c20a*/
      v5[-1].i64[v23] = v30; /*0x10071c212*/
      *((_QWORD *)&v5[-1] + v23 - 1) = v24; /*0x10071c217*/
      return 0; /*0x10071c21c*/
    }
    v11 = 1; /*0x10071c169*/
LABEL_15:
    v38 = _R8; /*0x10071c172*/
    v4 = i + v14 + 16; /*0x10071c176*/
  }
  v33 = v6; /*0x10071c09e*/
  v34 = v7; /*0x10071c0a2*/
  v27 = v8; /*0x10071c0a6*/
  v35 = v14; /*0x10071c0ae*/
  v36 = i; /*0x10071c0b2*/
  v37 = v11; /*0x10071c0b6*/
  v28 = v15; /*0x10071c0ba*/
  while ( 1 ) /*0x10071c0c2*/
  {
    __asm { tzcnt eax, ebx } /*0x10071c0c2*/
    v17 = -3LL * (v6 & (v14 + _RAX)); /*0x10071c0cf*/
    if ( v10 == v5->i64[v17 - 1] ) /*0x10071c0d8*/
    {
      v18 = v5; /*0x10071c0eb*/
      v19 = memcmp(v9, (const void *)v5[-1].i64[v17], v10); /*0x10071c0ee*/
      v5 = v18; /*0x10071c0f3*/
      if ( !v19 ) /*0x10071c0fe*/
        break; /*0x10071c0fe*/
    }
    _RAX = _EBX - 1; /*0x10071c104*/
    LOWORD(_RAX) = _EBX & (_EBX - 1); /*0x10071c107*/
    _EBX = _RAX; /*0x10071c10a*/
    v6 = v33; /*0x10071c10c*/
    v7 = v34; /*0x10071c110*/
    v8 = _mm_load_si128(&v27); /*0x10071c114*/
    v14 = v35; /*0x10071c11c*/
    v12 = (__m128i)-1LL; /*0x10071c120*/
    i = v36; /*0x10071c124*/
    v11 = v37; /*0x10071c128*/
    v15 = _mm_load_si128(&v28); /*0x10071c12c*/
    if ( !(_WORD)_RAX ) /*0x10071c134*/
      goto LABEL_9; /*0x10071c134*/
  }
  LOBYTE(_EBX) = 1; /*0x10071c188*/
  if ( *a2 ) /*0x10071c184*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10071c198*/
  return _EBX; /*0x10071c220*/
}