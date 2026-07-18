// mac 1.2.2 NEW migrate_session_worktree 0x100a39ff0 d=1
int __fastcall codexmate_lib::core::sessions::update_session_cwd_in_connection::he26146f5a847e235(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        __int64 a8)
{
  __int64 v11; // r13
  unsigned __int64 v13; // rax
  __int64 v14; // r14
  __m128i v15; // xmm0
  __int64 v16; // rdi
  __int64 i; // rcx
  unsigned __int64 v18; // rax
  __m128i v19; // xmm2
  __int64 v21; // rsi
  __int64 v22; // rcx
  unsigned __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 j; // rcx
  unsigned __int64 v27; // rax
  __m128i v28; // xmm2
  __int64 v30; // rsi
  __int64 v31; // rbx
  const __m128i *v33; // r15
  int v34; // r12d
  size_t v35; // r15
  __int64 v36; // r15
  unsigned __int64 v37; // rcx
  __int128 v38; // xmm0
  void *v39; // rdi
  __int64 v40; // r12
  size_t v41; // rax
  size_t v43; // [rsp+8h] [rbp-1D8h] BYREF
  __int128 v44; // [rsp+10h] [rbp-1D0h]
  size_t v45[3]; // [rsp+20h] [rbp-1C0h] BYREF
  _QWORD v46[2]; // [rsp+38h] [rbp-1A8h] BYREF
  void **p_s2; // [rsp+48h] [rbp-198h] BYREF
  void *v48; // [rsp+50h] [rbp-190h]
  _QWORD *v49; // [rsp+58h] [rbp-188h]
  void *v50; // [rsp+60h] [rbp-180h]
  _QWORD *v51; // [rsp+68h] [rbp-178h]
  void *v52; // [rsp+70h] [rbp-170h]
  _QWORD v53[2]; // [rsp+78h] [rbp-168h] BYREF
  __int128 v54; // [rsp+88h] [rbp-158h] BYREF
  __int64 v55; // [rsp+98h] [rbp-148h]
  __int128 v56; // [rsp+A0h] [rbp-140h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-130h]
  void *__s2; // [rsp+B8h] [rbp-128h] BYREF
  __int64 v59; // [rsp+C0h] [rbp-120h]
  __int128 v60; // [rsp+C8h] [rbp-118h] BYREF
  void *v61; // [rsp+D8h] [rbp-108h]
  __int128 __n; // [rsp+E0h] [rbp-100h]
  __int64 v63; // [rsp+F0h] [rbp-F0h]
  __int128 v64; // [rsp+F8h] [rbp-E8h]
  void *__s1; // [rsp+108h] [rbp-D8h]
  _BYTE v66[80]; // [rsp+110h] [rbp-D0h] BYREF
  __int64 v67; // [rsp+160h] [rbp-80h]
  __int64 v68; // [rsp+168h] [rbp-78h]
  __m512i v69; // [rsp+178h] [rbp-68h] BYREF

  v53[0] = a3; /*0x100a3a012*/
  v53[1] = a4; /*0x100a3a019*/
  v46[0] = a5; /*0x100a3a020*/
  v46[1] = a6; /*0x100a3a027*/
  __s2 = a7; /*0x100a3a02e*/
  v59 = a8; /*0x100a3a035*/
  codexmate_lib::core::sessions::sqlite_table_columns::h0b8c3414b068df3e(v66, a2); /*0x100a3a046*/
  v69.i64[0] = *(_QWORD *)&v66[8]; /*0x100a3a059*/
  _RAX = *(_QWORD *)v66; /*0x100a3a059*/
  *(__int128 *)((char *)v69.i128 + 8) = *(_OWORD *)&v66[16]; /*0x100a3a064*/
  *(__int128 *)((char *)&v69.i128[1] + 8) = *(_OWORD *)&v66[32]; /*0x100a3a07a*/
  v69.i64[5] = *(_QWORD *)&v66[48]; /*0x100a3a090*/
  if ( *(_QWORD *)v66 != 10 ) /*0x100a3a098*/
  {
    *(_QWORD *)(a1 + 88) = v68; /*0x100a3a19c*/
    *(_QWORD *)(a1 + 80) = v67; /*0x100a3a1a4*/
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v66[72]; /*0x100a3a1af*/
    v22 = *(_QWORD *)&v66[56]; /*0x100a3a1b3*/
    *(_QWORD *)(a1 + 64) = *(_QWORD *)&v66[64]; /*0x100a3a1c1*/
    *(_QWORD *)(a1 + 56) = v22; /*0x100a3a1c5*/
    *(_QWORD *)(a1 + 48) = v69.i64[5]; /*0x100a3a1cd*/
    *(_OWORD *)(a1 + 32) = *(__int128 *)((char *)&v69.i128[1] + 8); /*0x100a3a1dd*/
    *(_QWORD *)(a1 + 24) = v69.i64[2]; /*0x100a3a1e5*/
    *(_OWORD *)(a1 + 8) = v69.i128[0]; /*0x100a3a1f5*/
    *(_QWORD *)a1 = _RAX; /*0x100a3a1f9*/
    return _RAX; /*0x100a3a1fc*/
  }
  v54 = v69.i128[0]; /*0x100a3a0a6*/
  v11 = v69.i64[3]; /*0x100a3a0bf*/
  v55 = v69.i64[2]; /*0x100a3a0bf*/
  v56 = *(__int128 *)((char *)&v69.i128[1] + 8); /*0x100a3a0ce*/
  v57 = v69.i64[5]; /*0x100a3a0d9*/
  if ( !v69.i64[3] ) /*0x100a3a0e3*/
  {
LABEL_18:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a3a2b5*/
    _RAX = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x34u, 1u); /*0x100a3a2c4*/
    if ( !_RAX ) /*0x100a3a2cc*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x100a3a941*/
    *(_QWORD *)(_RAX + 40) = 0xBFE8BD83E88DB8E4LL; /*0x100a3a2dc*/
    *(_QWORD *)(_RAX + 32) = 0x8CBCEFB5AEE697ADLL; /*0x100a3a2ea*/
    *(_QWORD *)(_RAX + 24) = 0xE5206477632F6469LL; /*0x100a3a2f8*/
    *(_QWORD *)(_RAX + 16) = 0x2091B0E5BABCE7A8LL; /*0x100a3a306*/
    *(_QWORD *)(_RAX + 8) = 0xA1E8207364616572LL; /*0x100a3a314*/
    *(_QWORD *)_RAX = 0x6874207865646F43LL; /*0x100a3a322*/
    *(_DWORD *)(_RAX + 48) = -1146624127; /*0x100a3a325*/
    *(_QWORD *)a1 = 9; /*0x100a3a32c*/
    *(_QWORD *)(a1 + 8) = 52; /*0x100a3a333*/
    *(_QWORD *)(a1 + 16) = _RAX; /*0x100a3a33b*/
    *(_QWORD *)(a1 + 24) = 52; /*0x100a3a33f*/
    v14 = *((_QWORD *)&v54 + 1); /*0x100a3a347*/
    goto LABEL_20; /*0x100a3a347*/
  }
  _RSI = (unsigned __int64)"id"; /*0x100a3a0f0*/
  v13 = core::hash::BuildHasher::hash_one::h6159beed3a7466cf((char *)&v56 + 8, "id", 2); /*0x100a3a0fc*/
  v14 = *((_QWORD *)&v54 + 1); /*0x100a3a10f*/
  v15 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v13 >> 57), (__m128i)0LL); /*0x100a3a11e*/
  v16 = v54 - 24; /*0x100a3a123*/
  for ( i = 0; ; i += 16 ) /*0x100a3a128*/
  {
    v18 = *((_QWORD *)&v54 + 1) & v13; /*0x100a3a12e*/
    v19 = _mm_loadu_si128((const __m128i *)(v54 + v18)); /*0x100a3a131*/
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v19, v15)); /*0x100a3a13f*/
    if ( _EDX ) /*0x100a3a145*/
      break; /*0x100a3a145*/
LABEL_8:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v19, (__m128i)-1LL)) ) /*0x100a3a181*/
      goto LABEL_18; /*0x100a3a187*/
    v13 = v18 + i + 16; /*0x100a3a18d*/
  }
  while ( 1 ) /*0x100a3a147*/
  {
    __asm { tzcnt esi, edx } /*0x100a3a147*/
    v21 = -3LL * (*((_QWORD *)&v54 + 1) & (v18 + _RSI)); /*0x100a3a154*/
    if ( *(_QWORD *)(v16 + 8 * v21 + 16) == 2 && **(_WORD **)(v16 + 8 * v21 + 8) == 25705 ) /*0x100a3a16d*/
      break; /*0x100a3a16d*/
    _RSI = (unsigned int)(_EDX - 1); /*0x100a3a173*/
    LOWORD(_RSI) = _EDX & (_EDX - 1); /*0x100a3a176*/
    _EDX = _RSI; /*0x100a3a179*/
    if ( !(_WORD)_RSI ) /*0x100a3a17b*/
      goto LABEL_8; /*0x100a3a17b*/
  }
  __s1 = (void *)(v54 - 24); /*0x100a3a201*/
  _RSI = (unsigned __int64)"cwd"; /*0x100a3a208*/
  v24 = core::hash::BuildHasher::hash_one::h6159beed3a7466cf((char *)&v56 + 8, "cwd", 3); /*0x100a3a21b*/
  v25 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v24 >> 57), (__m128i)0LL); /*0x100a3a22f*/
  for ( j = 0; ; j += 16 ) /*0x100a3a234*/
  {
    v27 = *((_QWORD *)&v54 + 1) & v24; /*0x100a3a241*/
    v28 = _mm_loadu_si128((const __m128i *)(v54 + v27)); /*0x100a3a244*/
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v28, v25)); /*0x100a3a252*/
    if ( _EDX ) /*0x100a3a258*/
      break; /*0x100a3a258*/
LABEL_16:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v28, (__m128i)-1LL)) ) /*0x100a3a2a2*/
      goto LABEL_18; /*0x100a3a2a8*/
    v24 = v27 + j + 16; /*0x100a3a2aa*/
  }
  while ( 1 ) /*0x100a3a25a*/
  {
    __asm { tzcnt esi, edx } /*0x100a3a25a*/
    v30 = -3LL * (*((_QWORD *)&v54 + 1) & (v27 + _RSI)); /*0x100a3a267*/
    if ( *((_QWORD *)__s1 + v30 + 2) == 3 /*0x100a3a28b*/
      && !(**((_WORD **)__s1 + v30 + 1) ^ 0x7763 | *(unsigned __int8 *)(*((_QWORD *)__s1 + v30 + 1) + 2LL) ^ 0x64) )
    {
      break; /*0x100a3a28b*/
    }
    _RSI = (unsigned int)(_EDX - 1); /*0x100a3a294*/
    LOWORD(_RSI) = _EDX & (_EDX - 1); /*0x100a3a297*/
    _EDX = _RSI; /*0x100a3a29a*/
    if ( !(_WORD)_RSI ) /*0x100a3a29c*/
      goto LABEL_16; /*0x100a3a29c*/
  }
  p_s2 = &__s2; /*0x100a3a434*/
  v48 = &unk_1018A04F8; /*0x100a3a442*/
  v49 = v53; /*0x100a3a450*/
  v50 = &unk_1018A04F8; /*0x100a3a457*/
  v51 = v46; /*0x100a3a465*/
  v52 = &unk_1018A04F8; /*0x100a3a46c*/
  rusqlite::Connection::execute::hc461a37495bc99f3( /*0x100a3a496*/
    &v60,
    a2,
    "UPDATE threads SET cwd = ?1 WHERE id = ?2 AND cwd = ?3SELECT cwd FROM threads WHERE id = ?1",
    54,
    &p_s2,
    3,
    *(double *)v25.i64,
    NAN);
  _RAX = 0x8000000000000016LL; /*0x100a3a49b*/
  if ( (_QWORD)v60 != 0x8000000000000016LL ) /*0x100a3a4ac*/
  {
    v69.i128[3] = v64; /*0x100a3a4de*/
    v69.i64[5] = v63; /*0x100a3a4e9*/
    *(__int128 *)((char *)&v69.i128[1] + 8) = __n; /*0x100a3a4ff*/
    v69.i64[2] = (__int64)v61; /*0x100a3a50a*/
    v69.i128[0] = v60; /*0x100a3a520*/
    *(_QWORD *)v66 = &v69; /*0x100a3a528*/
    *(_QWORD *)&v66[8] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100a3a536*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v43, byte_1016F88FF, (unsigned __int64)v66); /*0x100a3a552*/
    v35 = v43; /*0x100a3a557*/
    *(_OWORD *)v66 = v44; /*0x100a3a565*/
    _RAX = core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2(&v69); /*0x100a3a57e*/
    qmemcpy((void *)(a1 + 16), v66, 0x50u); /*0x100a3a593*/
    *(_QWORD *)a1 = 9; /*0x100a3a596*/
    *(_QWORD *)(a1 + 8) = v35; /*0x100a3a59d*/
    goto LABEL_20; /*0x100a3a5a1*/
  }
  if ( *((_QWORD *)&v60 + 1) ) /*0x100a3a4b6*/
  {
    *(_BYTE *)(a1 + 8) = 1; /*0x100a3a4bc*/
    *(_QWORD *)a1 = 10; /*0x100a3a4c0*/
    goto LABEL_20; /*0x100a3a4c7*/
  }
  p_s2 = (void **)v53; /*0x100a3a5ad*/
  v48 = &unk_1018A04F8; /*0x100a3a5b4*/
  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(v66, a2, "SELECT cwd FROM threads WHERE id = ?1", 37); /*0x100a3a5d4*/
  v69 = *(__m512i *)&v66[8]; /*0x100a3a5f0*/
  if ( *(_DWORD *)v66 == 1 ) /*0x100a3a644*/
  {
    v64 = v69.i128[3]; /*0x100a3a655*/
    v63 = v69.i64[5]; /*0x100a3a660*/
    __n = *(__int128 *)((char *)&v69.i128[1] + 8); /*0x100a3a676*/
    v61 = (void *)v69.i64[2]; /*0x100a3a681*/
    v60 = v69.i128[0]; /*0x100a3a697*/
  }
  else
  {
    *(__m512i *)v66 = v69; /*0x100a3a6b2*/
    rusqlite::statement::Statement::query_row::h9d97296b32050540(&v60, v66, &p_s2, 1); /*0x100a3a715*/
    core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h43ec02918eaa5d70(v66); /*0x100a3a721*/
  }
  if ( (_QWORD)v60 != 0x8000000000000016LL ) /*0x100a3a72d*/
  {
    v69.i128[3] = v64; /*0x100a3a769*/
    v69.i64[5] = v63; /*0x100a3a774*/
    *(__int128 *)((char *)&v69.i128[1] + 8) = __n; /*0x100a3a78a*/
    v69.i64[2] = (__int64)v61; /*0x100a3a795*/
    v69.i128[0] = v60; /*0x100a3a7ab*/
    codexmate_lib::core::sessions::update_session_cwd_in_connection::_$u7b$$u7b$closure$u7d$$u7d$::h1629fcdd02e6eab3( /*0x100a3a7ba*/
      v66,
      &v69);
    v37 = *(_QWORD *)&v66[24]; /*0x100a3a7c6*/
    _RAX = *(_QWORD *)&v66[16]; /*0x100a3a7c6*/
    *(_QWORD *)(a1 + 88) = v68; /*0x100a3a7d1*/
    *(_QWORD *)(a1 + 80) = v67; /*0x100a3a7d9*/
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v66[64]; /*0x100a3a7ef*/
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v66[48]; /*0x100a3a805*/
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v66[32]; /*0x100a3a81b*/
    v38 = *(_OWORD *)v66; /*0x100a3a81f*/
    *(_OWORD *)(a1 + 16) = __PAIR128__(v37, _RAX); /*0x100a3a826*/
    *(_OWORD *)a1 = v38; /*0x100a3a82e*/
LABEL_20:
    if ( v14 ) /*0x100a3a351*/
    {
      if ( v11 ) /*0x100a3a35a*/
      {
        v31 = v54; /*0x100a3a360*/
        _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v54)); /*0x100a3a370*/
        v33 = (const __m128i *)(v54 + 16); /*0x100a3a373*/
        do /*0x100a3a391*/
        {
          if ( !(_WORD)_R12D ) /*0x100a3a397*/
          {
            do /*0x100a3a3bc*/
            {
              v34 = _mm_movemask_epi8(_mm_load_si128(v33)); /*0x100a3a3a5*/
              v31 -= 384; /*0x100a3a3aa*/
              ++v33; /*0x100a3a3b1*/
            }
            while ( v34 == 0xFFFF ); /*0x100a3a3bc*/
            _R12D = ~v34; /*0x100a3a3be*/
          }
          __asm { tzcnt eax, r12d } /*0x100a3a3c1*/
          if ( *(_QWORD *)(v31 - 24 * _RAX - 24) ) /*0x100a3a3cd*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3a3e4*/
          --v11; /*0x100a3a380*/
          _RAX = _R12D & (unsigned int)(_R12D - 1); /*0x100a3a388*/
          _R12D &= _R12D - 1; /*0x100a3a38b*/
        }
        while ( v11 ); /*0x100a3a391*/
      }
      _RAX = (24 * v14 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100a3a3f7*/
      if ( _RAX + v14 != -17 ) /*0x100a3a402*/
        LODWORD(_RAX) = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3a416*/
    }
    return _RAX; /*0x100a3a416*/
  }
  v36 = *((_QWORD *)&v60 + 1); /*0x100a3a732*/
  if ( *((_QWORD *)&v60 + 1) == 0x8000000000000000LL ) /*0x100a3a740*/
  {
    codexmate_lib::core::sessions::update_session_cwd_in_connection::_$u7b$$u7b$closure$u7d$$u7d$::he67e78f5686108c3(v66); /*0x100a3a74d*/
  }
  else
  {
    v39 = v61; /*0x100a3a836*/
    v40 = __n; /*0x100a3a83d*/
    if ( (_QWORD)__n == v59 ) /*0x100a3a84b*/
    {
      __s1 = v61; /*0x100a3a854*/
      LODWORD(_RAX) = memcmp(v61, __s2, __n); /*0x100a3a865*/
      v39 = __s1; /*0x100a3a86a*/
      if ( !(_DWORD)_RAX ) /*0x100a3a873*/
      {
        *(_BYTE *)(a1 + 8) = 0; /*0x100a3a911*/
        *(_QWORD *)a1 = 10; /*0x100a3a915*/
        if ( v36 ) /*0x100a3a91f*/
          _RAX = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3a92d*/
        goto LABEL_20; /*0x100a3a932*/
      }
    }
    *(_QWORD *)v66 = v36; /*0x100a3a879*/
    *(_QWORD *)&v66[8] = v39; /*0x100a3a880*/
    *(_QWORD *)&v66[16] = v40; /*0x100a3a887*/
  }
  v69.i64[0] = (__int64)v66; /*0x100a3a895*/
  v69.i64[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100a3a8a0*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v45, byte_1016FECCD, (unsigned __int64)&v69); /*0x100a3a8b6*/
  if ( *(_QWORD *)v66 ) /*0x100a3a8c5*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3a8d3*/
  *(_QWORD *)(a1 + 24) = v45[2]; /*0x100a3a8df*/
  v41 = v45[0]; /*0x100a3a8e3*/
  *(_QWORD *)(a1 + 16) = v45[1]; /*0x100a3a8f1*/
  *(_QWORD *)(a1 + 8) = v41; /*0x100a3a8f5*/
  *(_QWORD *)a1 = 9; /*0x100a3a8f9*/
  LODWORD(_RAX) = _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h757372ece31f1f2e(&v54); /*0x100a3a907*/
  return _RAX; /*0x100a3a41b*/
}