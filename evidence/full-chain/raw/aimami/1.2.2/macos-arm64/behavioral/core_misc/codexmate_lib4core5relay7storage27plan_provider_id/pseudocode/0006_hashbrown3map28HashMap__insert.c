// mac 1.2.2 NEW codexmate_lib4core5relay7storage27plan_provider_id 0x100900f60 d=1
__int64 __fastcall hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h51bc55f4d52d0730(__int64 a1, __int64 *a2)
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

  _RAX = core::hash::BuildHasher::hash_one::hd601b40b93b963b8(a1 + 32, a2); /*0x100900f7e*/
  v4 = _RAX; /*0x100900f83*/
  if ( !*(_QWORD *)(a1 + 16) ) /*0x100900f86*/
    HIDWORD(_RAX) = (unsigned __int64)hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h6cca294c8f1b4c57( /*0x10090117f*/
                                        a1,
                                        1,
                                        a1 + 32,
                                        1) >> 32;
  v5 = *(const __m128i **)a1; /*0x100900f91*/
  v32 = (const __m128i *)a1; /*0x100900f94*/
  v6 = *(_QWORD *)(a1 + 8); /*0x100900f98*/
  v7 = v4 >> 57; /*0x100900f9f*/
  v8 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v4 >> 57), (__m128i)0LL); /*0x100900fac*/
  v9 = (const void *)a2[1]; /*0x100900fb1*/
  v10 = a2[2]; /*0x100900fb5*/
  v11 = 0; /*0x100900fb9*/
  v12 = (__m128i)-1LL; /*0x100900fbb*/
  for ( i = 0; ; i += 16 ) /*0x100900fbf*/
  {
    v14 = v6 & v4; /*0x100900fc1*/
    v15 = _mm_loadu_si128((const __m128i *)((char *)v5 + v14)); /*0x100900fc4*/
    _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v15, v8)); /*0x100900fd2*/
    if ( _EBX ) /*0x100900fd8*/
      break; /*0x100900fd8*/
LABEL_9:
    _R8 = v38; /*0x100901080*/
    if ( v11 != 1 ) /*0x100901088*/
    {
      _RAX = (unsigned int)_mm_movemask_epi8(v15); /*0x10090108a*/
      if ( !(_DWORD)_RAX ) /*0x100901090*/
      {
        v11 = 0; /*0x1009010b0*/
        goto LABEL_15; /*0x1009010b0*/
      }
      __asm { tzcnt r8d, eax } /*0x100901092*/
      _R8 = v6 & (v14 + _R8); /*0x10090109a*/
    }
    _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v15, v12)); /*0x1009010a1*/
    if ( (_DWORD)_RAX ) /*0x1009010a7*/
    {
      v21 = v5->i8[_R8]; /*0x1009010df*/
      if ( v21 >= 0 ) /*0x1009010e6*/
      {
        _EAX = _mm_movemask_epi8(_mm_load_si128(v5)); /*0x10090118e*/
        __asm { tzcnt r8d, eax } /*0x100901192*/
        v21 = v5->i8[_R8]; /*0x100901197*/
      }
      v31 = a2[2]; /*0x1009010f0*/
      v22 = *a2; /*0x1009010f4*/
      v30 = a2[1]; /*0x1009010fc*/
      v29 = v22; /*0x100901100*/
      v5->i8[_R8] = v7; /*0x100901110*/
      v5[1].i8[v6 & (_R8 - 16)] = v7; /*0x100901114*/
      v32[1] = _mm_sub_epi64( /*0x100901135*/
                 _mm_loadu_si128(v32 + 1),
                 _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_101591350), v21 & 1, 0));
      v23 = -3LL * _R8; /*0x10090113d*/
      v5->i64[v23 - 1] = v31; /*0x100901145*/
      v24 = v29; /*0x10090114a*/
      v5[-1].i64[v23] = v30; /*0x100901152*/
      *((_QWORD *)&v5[-1] + v23 - 1) = v24; /*0x100901157*/
      return 0; /*0x10090115c*/
    }
    v11 = 1; /*0x1009010a9*/
LABEL_15:
    v38 = _R8; /*0x1009010b2*/
    v4 = i + v14 + 16; /*0x1009010b6*/
  }
  v33 = v6; /*0x100900fde*/
  v34 = v7; /*0x100900fe2*/
  v27 = v8; /*0x100900fe6*/
  v35 = v14; /*0x100900fee*/
  v36 = i; /*0x100900ff2*/
  v37 = v11; /*0x100900ff6*/
  v28 = v15; /*0x100900ffa*/
  while ( 1 ) /*0x100901002*/
  {
    __asm { tzcnt eax, ebx } /*0x100901002*/
    v17 = -3LL * (v6 & (v14 + _RAX)); /*0x10090100f*/
    if ( v10 == v5->i64[v17 - 1] ) /*0x100901018*/
    {
      v18 = v5; /*0x10090102b*/
      v19 = memcmp(v9, (const void *)v5[-1].i64[v17], v10); /*0x10090102e*/
      v5 = v18; /*0x100901033*/
      if ( !v19 ) /*0x10090103e*/
        break; /*0x10090103e*/
    }
    _RAX = _EBX - 1; /*0x100901044*/
    LOWORD(_RAX) = _EBX & (_EBX - 1); /*0x100901047*/
    _EBX = _RAX; /*0x10090104a*/
    v6 = v33; /*0x10090104c*/
    v7 = v34; /*0x100901050*/
    v8 = _mm_load_si128(&v27); /*0x100901054*/
    v14 = v35; /*0x10090105c*/
    v12 = (__m128i)-1LL; /*0x100901060*/
    i = v36; /*0x100901064*/
    v11 = v37; /*0x100901068*/
    v15 = _mm_load_si128(&v28); /*0x10090106c*/
    if ( !(_WORD)_RAX ) /*0x100901074*/
      goto LABEL_9; /*0x100901074*/
  }
  LOBYTE(_EBX) = 1; /*0x1009010c8*/
  if ( *a2 ) /*0x1009010c4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009010d8*/
  return _EBX; /*0x100901160*/
}