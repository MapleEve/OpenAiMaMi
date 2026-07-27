// __ZN13codexmate_lib4core8sessions32update_session_cwd_in_connection @ 0x10053c080 | 基线 same-set
void __fastcall codexmate_lib::core::sessions::update_session_cwd_in_connection::hff55390873cd6b8a(
        __int64 a1,
        __int64 _RSI,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        __int64 a8)
{
  __int64 v8; // r15
  char *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // rax
  __int64 v14; // r14
  __m128i v15; // xmm0
  __int64 i; // rcx
  unsigned __int64 v17; // rax
  __m128i v18; // xmm2
  __int64 v20; // rsi
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 j; // rcx
  unsigned __int64 v25; // rax
  __m128i v26; // xmm2
  __int64 v28; // rsi
  unsigned __int16 *v29; // rsi
  __int64 v31; // rbx
  const __m128i *v33; // r15
  int v34; // r12d
  __int64 v35; // rax
  __int64 v36; // rsi
  unsigned __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // r15
  __int64 v40; // r15
  unsigned __int64 v41; // rcx
  __int128 v42; // xmm0
  void *v43; // rdi
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // [rsp+8h] [rbp-1D8h] BYREF
  __int128 v47; // [rsp+10h] [rbp-1D0h]
  _QWORD v48[3]; // [rsp+20h] [rbp-1C0h] BYREF
  _QWORD v49[2]; // [rsp+38h] [rbp-1A8h] BYREF
  void **p_s2; // [rsp+48h] [rbp-198h] BYREF
  void *v51; // [rsp+50h] [rbp-190h]
  _QWORD *v52; // [rsp+58h] [rbp-188h]
  void *v53; // [rsp+60h] [rbp-180h]
  _QWORD *v54; // [rsp+68h] [rbp-178h]
  void *v55; // [rsp+70h] [rbp-170h]
  _QWORD v56[2]; // [rsp+78h] [rbp-168h] BYREF
  __int128 v57; // [rsp+88h] [rbp-158h] BYREF
  __int64 v58; // [rsp+98h] [rbp-148h]
  __int128 v59; // [rsp+A0h] [rbp-140h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-130h]
  void *__s2; // [rsp+B8h] [rbp-128h] BYREF
  __int64 v62; // [rsp+C0h] [rbp-120h]
  __int128 v63; // [rsp+C8h] [rbp-118h] BYREF
  void *v64; // [rsp+D8h] [rbp-108h]
  __int128 __n; // [rsp+E0h] [rbp-100h]
  __int64 v66; // [rsp+F0h] [rbp-F0h]
  __int128 v67; // [rsp+F8h] [rbp-E8h]
  void *__s1; // [rsp+108h] [rbp-D8h]
  _BYTE v69[80]; // [rsp+110h] [rbp-D0h] BYREF
  __int64 v70; // [rsp+160h] [rbp-80h]
  __int64 v71; // [rsp+168h] [rbp-78h]
  __m512i v72; // [rsp+178h] [rbp-68h] BYREF

  v8 = _RSI; /*0x10053c094*/
  v56[0] = a3; /*0x10053c0a2*/
  v56[1] = a4; /*0x10053c0a9*/
  v49[0] = a5; /*0x10053c0b0*/
  v49[1] = a6; /*0x10053c0b7*/
  __s2 = a7; /*0x10053c0be*/
  v62 = a8; /*0x10053c0c5*/
  v10 = v69; /*0x10053c0cc*/
  codexmate_lib::core::sessions::sqlite_table_columns::hffa44fdbd9ac0916((__int64)v69, _RSI); /*0x10053c0d6*/
  v72.i64[0] = *(_QWORD *)&v69[8]; /*0x10053c0e9*/
  v11 = *(_QWORD *)v69; /*0x10053c0e9*/
  *(__int128 *)((char *)v72.i128 + 8) = *(_OWORD *)&v69[16]; /*0x10053c0f4*/
  *(__int128 *)((char *)&v72.i128[1] + 8) = *(_OWORD *)&v69[32]; /*0x10053c10a*/
  v72.i64[5] = *(_QWORD *)&v69[48]; /*0x10053c120*/
  if ( *(_QWORD *)v69 != 11 ) /*0x10053c128*/
  {
    *(_QWORD *)(a1 + 88) = v71; /*0x10053c22c*/
    *(_QWORD *)(a1 + 80) = v70; /*0x10053c234*/
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v69[72]; /*0x10053c23f*/
    v21 = *(_QWORD *)&v69[56]; /*0x10053c243*/
    *(_QWORD *)(a1 + 64) = *(_QWORD *)&v69[64]; /*0x10053c251*/
    *(_QWORD *)(a1 + 56) = v21; /*0x10053c255*/
    *(_QWORD *)(a1 + 48) = v72.i64[5]; /*0x10053c25d*/
    *(_OWORD *)(a1 + 32) = *(__int128 *)((char *)&v72.i128[1] + 8); /*0x10053c26d*/
    *(_QWORD *)(a1 + 24) = v72.i64[2]; /*0x10053c275*/
    *(_OWORD *)(a1 + 8) = v72.i128[0]; /*0x10053c285*/
    *(_QWORD *)a1 = v11; /*0x10053c289*/
    return; /*0x10053c28c*/
  }
  v57 = v72.i128[0]; /*0x10053c136*/
  v12 = v72.i64[3]; /*0x10053c14f*/
  v58 = v72.i64[2]; /*0x10053c14f*/
  v59 = *(__int128 *)((char *)&v72.i128[1] + 8); /*0x10053c15e*/
  v60 = v72.i64[5]; /*0x10053c169*/
  if ( !v72.i64[3] ) /*0x10053c173*/
  {
LABEL_18:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, _RSI); /*0x10053c345*/
    _RAX = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(52, 1); /*0x10053c354*/
    if ( !_RAX ) /*0x10053c35c*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 52); /*0x10053c9d1*/
    *(_QWORD *)(_RAX + 40) = 0xBFE8BD83E88DB8E4LL; /*0x10053c36c*/
    *(_QWORD *)(_RAX + 32) = 0x8CBCEFB5AEE697ADLL; /*0x10053c37a*/
    *(_QWORD *)(_RAX + 24) = 0xE5206477632F6469LL; /*0x10053c388*/
    *(_QWORD *)(_RAX + 16) = 0x2091B0E5BABCE7A8LL; /*0x10053c396*/
    *(_QWORD *)(_RAX + 8) = 0xA1E8207364616572LL; /*0x10053c3a4*/
    *(_QWORD *)_RAX = 0x6874207865646F43LL; /*0x10053c3b2*/
    *(_DWORD *)(_RAX + 48) = -1146624127; /*0x10053c3b5*/
    *(_QWORD *)a1 = 10; /*0x10053c3bc*/
    *(_QWORD *)(a1 + 8) = 52; /*0x10053c3c3*/
    *(_QWORD *)(a1 + 16) = _RAX; /*0x10053c3cb*/
    *(_QWORD *)(a1 + 24) = 52; /*0x10053c3cf*/
    v14 = *((_QWORD *)&v57 + 1); /*0x10053c3d7*/
    goto LABEL_20; /*0x10053c3d7*/
  }
  _RSI = (__int64)&anon_92869709a5e99ce1936aa4e326b6c562_188; /*0x10053c180*/
  v13 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345( /*0x10053c18c*/
          (char *)&v59 + 8,
          &anon_92869709a5e99ce1936aa4e326b6c562_188,
          2);
  v14 = *((_QWORD *)&v57 + 1); /*0x10053c19f*/
  v15 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v13 >> 57), (__m128i)0LL); /*0x10053c1ae*/
  v10 = (char *)(v57 - 24); /*0x10053c1b3*/
  for ( i = 0; ; i += 16 ) /*0x10053c1b8*/
  {
    v17 = *((_QWORD *)&v57 + 1) & v13; /*0x10053c1be*/
    v18 = _mm_loadu_si128((const __m128i *)(v57 + v17)); /*0x10053c1c1*/
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v18, v15)); /*0x10053c1cf*/
    if ( _EDX ) /*0x10053c1d5*/
      break; /*0x10053c1d5*/
LABEL_8:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v18, (__m128i)-1LL)) ) /*0x10053c211*/
      goto LABEL_18; /*0x10053c217*/
    v13 = v17 + i + 16; /*0x10053c21d*/
  }
  while ( 1 ) /*0x10053c1d7*/
  {
    __asm { tzcnt esi, edx } /*0x10053c1d7*/
    v20 = -3LL * (*((_QWORD *)&v57 + 1) & (v17 + _RSI)); /*0x10053c1e4*/
    if ( *(_QWORD *)&v10[8 * v20 + 16] == 2 && **(_WORD **)&v10[8 * v20 + 8] == 25705 ) /*0x10053c1fd*/
      break; /*0x10053c1fd*/
    _RSI = (unsigned int)(_EDX - 1); /*0x10053c203*/
    LOWORD(_RSI) = _EDX & (_EDX - 1); /*0x10053c206*/
    _EDX = _RSI; /*0x10053c209*/
    if ( !(_WORD)_RSI ) /*0x10053c20b*/
      goto LABEL_8; /*0x10053c20b*/
  }
  __s1 = (void *)(v57 - 24); /*0x10053c291*/
  _RSI = (__int64)"cwd"; /*0x10053c298*/
  v10 = (char *)&v59 + 8; /*0x10053c2a4*/
  v22 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345((char *)&v59 + 8, "cwd", 3); /*0x10053c2ab*/
  v23 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v22 >> 57), (__m128i)0LL); /*0x10053c2bf*/
  for ( j = 0; ; j += 16 ) /*0x10053c2c4*/
  {
    v25 = *((_QWORD *)&v57 + 1) & v22; /*0x10053c2d1*/
    v26 = _mm_loadu_si128((const __m128i *)(v57 + v25)); /*0x10053c2d4*/
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v26, v23)); /*0x10053c2e2*/
    if ( _EDX ) /*0x10053c2e8*/
      break; /*0x10053c2e8*/
LABEL_16:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v26, (__m128i)-1LL)) ) /*0x10053c332*/
      goto LABEL_18; /*0x10053c338*/
    v22 = v25 + j + 16; /*0x10053c33a*/
  }
  while ( 1 ) /*0x10053c2ea*/
  {
    __asm { tzcnt esi, edx } /*0x10053c2ea*/
    v28 = -3LL * (*((_QWORD *)&v57 + 1) & (v25 + _RSI)); /*0x10053c2f7*/
    if ( *((_QWORD *)__s1 + v28 + 2) == 3 ) /*0x10053c301*/
    {
      v29 = *((unsigned __int16 **)__s1 + v28 + 1); /*0x10053c307*/
      v10 = (char *)(*v29 ^ 0x7763u); /*0x10053c30e*/
      if ( !(*v29 ^ 0x7763 | *((unsigned __int8 *)v29 + 2) ^ 0x64) ) /*0x10053c31b*/
        break; /*0x10053c31b*/
    }
    _RSI = (unsigned int)(_EDX - 1); /*0x10053c324*/
    LOWORD(_RSI) = _EDX & (_EDX - 1); /*0x10053c327*/
    _EDX = _RSI; /*0x10053c32a*/
    if ( !(_WORD)_RSI ) /*0x10053c32c*/
      goto LABEL_16; /*0x10053c32c*/
  }
  p_s2 = &__s2; /*0x10053c4c4*/
  v51 = &unk_101964270; /*0x10053c4d2*/
  v52 = v56; /*0x10053c4e0*/
  v53 = &unk_101964270; /*0x10053c4e7*/
  v54 = v49; /*0x10053c4f5*/
  v55 = &unk_101964270; /*0x10053c4fc*/
  rusqlite::Connection::execute::h1e8b76b744a4c88a( /*0x10053c526*/
    &v63,
    v8,
    "UPDATE threads SET cwd = ?1 WHERE id = ?2 AND cwd = ?3SELECT cwd FROM threads WHERE id = ?1",
    54,
    &p_s2,
    3);
  HIDWORD(_RAX) = 0x80000000; /*0x10053c52b*/
  if ( (_QWORD)v63 != 0x8000000000000016LL ) /*0x10053c53c*/
  {
    v72.i128[3] = v67; /*0x10053c56e*/
    v72.i64[5] = v66; /*0x10053c579*/
    *(__int128 *)((char *)&v72.i128[1] + 8) = __n; /*0x10053c58f*/
    v72.i64[2] = (__int64)v64; /*0x10053c59a*/
    v72.i128[0] = v63; /*0x10053c5b0*/
    *(_QWORD *)v69 = &v72; /*0x10053c5b8*/
    *(_QWORD *)&v69[8] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10053c5c6*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v46, &unk_1017C1CA0, v69); /*0x10053c5e2*/
    v39 = v46; /*0x10053c5e7*/
    *(_OWORD *)v69 = v47; /*0x10053c5f5*/
    HIDWORD(_RAX) = (unsigned __int64)core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v72) >> 32; /*0x10053c60e*/
    qmemcpy((void *)(a1 + 16), v69, 0x50u); /*0x10053c623*/
    *(_QWORD *)a1 = 10; /*0x10053c626*/
    *(_QWORD *)(a1 + 8) = v39; /*0x10053c62d*/
    goto LABEL_20; /*0x10053c631*/
  }
  if ( *((_QWORD *)&v63 + 1) ) /*0x10053c546*/
  {
    *(_BYTE *)(a1 + 8) = 1; /*0x10053c54c*/
    *(_QWORD *)a1 = 11; /*0x10053c550*/
    goto LABEL_20; /*0x10053c557*/
  }
  p_s2 = (void **)v56; /*0x10053c63d*/
  v51 = &unk_101964270; /*0x10053c644*/
  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(v69, v8, "SELECT cwd FROM threads WHERE id = ?1", 37); /*0x10053c664*/
  v72 = *(__m512i *)&v69[8]; /*0x10053c680*/
  if ( *(_DWORD *)v69 == 1 ) /*0x10053c6d4*/
  {
    v67 = v72.i128[3]; /*0x10053c6e5*/
    v66 = v72.i64[5]; /*0x10053c6f0*/
    __n = *(__int128 *)((char *)&v72.i128[1] + 8); /*0x10053c706*/
    v64 = (void *)v72.i64[2]; /*0x10053c711*/
    v63 = v72.i128[0]; /*0x10053c727*/
  }
  else
  {
    *(__m512i *)v69 = v72; /*0x10053c742*/
    rusqlite::statement::Statement::query_row::h3d4cfd9960bff95e(&v63, v69, &p_s2, 1, *(double *)v23.i64, NAN); /*0x10053c7a5*/
    core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(v69); /*0x10053c7b1*/
  }
  if ( (_QWORD)v63 != 0x8000000000000016LL ) /*0x10053c7bd*/
  {
    v72.i128[3] = v67; /*0x10053c7f9*/
    v72.i64[5] = v66; /*0x10053c804*/
    *(__int128 *)((char *)&v72.i128[1] + 8) = __n; /*0x10053c81a*/
    v72.i64[2] = (__int64)v64; /*0x10053c825*/
    v72.i128[0] = v63; /*0x10053c83b*/
    codexmate_lib::core::sessions::update_session_cwd_in_connection::_$u7b$$u7b$closure$u7d$$u7d$::hb72b970f9dfb0bd1( /*0x10053c84a*/
      v69,
      &v72,
      *(double *)v23.i64,
      NAN);
    v41 = *(_QWORD *)&v69[24]; /*0x10053c856*/
    _RAX = *(_QWORD *)&v69[16]; /*0x10053c856*/
    *(_QWORD *)(a1 + 88) = v71; /*0x10053c861*/
    *(_QWORD *)(a1 + 80) = v70; /*0x10053c869*/
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v69[64]; /*0x10053c87f*/
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v69[48]; /*0x10053c895*/
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v69[32]; /*0x10053c8ab*/
    v42 = *(_OWORD *)v69; /*0x10053c8af*/
    *(_OWORD *)(a1 + 16) = __PAIR128__(v41, _RAX); /*0x10053c8b6*/
    *(_OWORD *)a1 = v42; /*0x10053c8be*/
LABEL_20:
    if ( v14 ) /*0x10053c3e1*/
    {
      if ( v12 ) /*0x10053c3ea*/
      {
        v31 = v57; /*0x10053c3f0*/
        _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v57)); /*0x10053c400*/
        v33 = (const __m128i *)(v57 + 16); /*0x10053c403*/
        do /*0x10053c421*/
        {
          if ( !(_WORD)_R12D ) /*0x10053c427*/
          {
            do /*0x10053c44c*/
            {
              v34 = _mm_movemask_epi8(_mm_load_si128(v33)); /*0x10053c435*/
              v31 -= 384; /*0x10053c43a*/
              ++v33; /*0x10053c441*/
            }
            while ( v34 == 0xFFFF ); /*0x10053c44c*/
            _R12D = ~v34; /*0x10053c44e*/
          }
          __asm { tzcnt eax, r12d } /*0x10053c451*/
          v35 = -3 * _RAX; /*0x10053c459*/
          v36 = *(_QWORD *)(v31 + 8 * v35 - 24); /*0x10053c45d*/
          if ( v36 ) /*0x10053c465*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v31 + 8 * v35 - 16), v36, 1); /*0x10053c474*/
          --v12; /*0x10053c410*/
          _RAX = _R12D & (unsigned int)(_R12D - 1); /*0x10053c418*/
          _R12D &= _R12D - 1; /*0x10053c41b*/
        }
        while ( v12 ); /*0x10053c421*/
      }
      v37 = (24 * v14 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x10053c487*/
      v38 = v37 + v14 + 17; /*0x10053c48e*/
      if ( v38 ) /*0x10053c492*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57 - v37, v38, 16); /*0x10053c4a6*/
    }
    return; /*0x10053c4a6*/
  }
  v40 = *((_QWORD *)&v63 + 1); /*0x10053c7c2*/
  if ( *((_QWORD *)&v63 + 1) == 0x8000000000000000LL ) /*0x10053c7d0*/
  {
    codexmate_lib::core::sessions::update_session_cwd_in_connection::_$u7b$$u7b$closure$u7d$$u7d$::h5b30e6150e075785( /*0x10053c7dd*/
      v69,
      *(double *)v23.i64,
      NAN);
  }
  else
  {
    v43 = v64; /*0x10053c8c6*/
    v44 = __n; /*0x10053c8cd*/
    if ( (_QWORD)__n == v62 ) /*0x10053c8db*/
    {
      __s1 = v64; /*0x10053c8e4*/
      LODWORD(_RAX) = memcmp(v64, __s2, __n); /*0x10053c8f5*/
      v43 = __s1; /*0x10053c8fa*/
      if ( !(_DWORD)_RAX ) /*0x10053c903*/
      {
        *(_BYTE *)(a1 + 8) = 0; /*0x10053c9a1*/
        *(_QWORD *)a1 = 11; /*0x10053c9a5*/
        if ( v40 ) /*0x10053c9af*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, v40, 1); /*0x10053c9bd*/
        goto LABEL_20; /*0x10053c9c2*/
      }
    }
    *(_QWORD *)v69 = v40; /*0x10053c909*/
    *(_QWORD *)&v69[8] = v43; /*0x10053c910*/
    *(_QWORD *)&v69[16] = v44; /*0x10053c917*/
  }
  v72.i64[0] = (__int64)v69; /*0x10053c925*/
  v72.i64[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10053c930*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v48, &unk_1017C1C54, &v72); /*0x10053c946*/
  if ( *(_QWORD *)v69 ) /*0x10053c955*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v69[8], *(_QWORD *)v69, 1); /*0x10053c963*/
  *(_QWORD *)(a1 + 24) = v48[2]; /*0x10053c96f*/
  v45 = v48[0]; /*0x10053c973*/
  *(_QWORD *)(a1 + 16) = v48[1]; /*0x10053c981*/
  *(_QWORD *)(a1 + 8) = v45; /*0x10053c985*/
  *(_QWORD *)a1 = 10; /*0x10053c989*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1f9aaecb72bffb70(&v57); /*0x10053c997*/
}