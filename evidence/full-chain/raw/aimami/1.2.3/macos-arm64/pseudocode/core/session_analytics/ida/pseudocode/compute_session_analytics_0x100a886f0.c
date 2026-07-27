// __ZN13codexmate_lib4core17session_analytics25compute_session_analytics @ 0x100a886f0 | 基线 same-set
const __m128i **__fastcall codexmate_lib::core::session_analytics::compute_session_analytics::h01ab3df6f12cb50e(
        const __m128i **a1,
        __m128i *a2,
        __int64 a3,
        __int64 a4)
{
  const __m128i **v4; // rbx
  const __m128i *v5; // rax
  unsigned __int64 v6; // r15
  double v7; // xmm0_8
  __int64 v8; // rax
  int v9; // ecx
  const __m128i *v10; // rcx
  unsigned __int64 v11; // rcx
  int *v12; // rcx
  __m128i v13; // xmm0
  __int64 v14; // rdx
  __m128i v15; // xmm1
  __m128i v16; // xmm1
  __m128i v17; // xmm0
  unsigned __int64 v18; // rdx
  __int32 *v19; // rax
  unsigned __int64 *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // rax
  const __m128i *v26; // rdx
  __m128i *v27; // r12
  __m128i *v28; // rbx
  int v29; // r15d
  __int64 v30; // rbx
  unsigned __int64 v31; // r9
  __int64 v33; // r11
  char v35; // r9
  unsigned __int64 v36; // r11
  unsigned __int64 v37; // rdi
  unsigned __int64 *v38; // rax
  unsigned __int64 v39; // rdx
  const __m128i *v40; // rcx
  __int64 v41; // r8
  unsigned __int32 v43; // eax
  int v44; // eax
  int v45; // edx
  unsigned __int64 v46; // r14
  __int64 v47; // r15
  __int64 v48; // rax
  __int64 v49; // r14
  unsigned __int64 v50; // rax
  __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  __int64 v53; // r13
  double v54; // xmm0_8
  __int64 v55; // r13
  int v56; // edx
  int v57; // esi
  const __m128i *v58; // rax
  unsigned __int64 v59; // r14
  unsigned __int64 v60; // rbx
  const __m128i *v61; // r15
  const __m128i *v63; // r12
  int v64; // r13d
  __int8 *v66; // rax
  __int64 v67; // rsi
  unsigned __int64 v68; // rax
  __int64 v69; // r14
  bool v70; // zf
  __int64 v71; // r14
  _QWORD v73[3]; // [rsp+8h] [rbp-128h] BYREF
  _QWORD v74[3]; // [rsp+20h] [rbp-110h] BYREF
  __int64 v75; // [rsp+38h] [rbp-F8h]
  unsigned __int64 v76; // [rsp+40h] [rbp-F0h]
  const __m128i *v77; // [rsp+48h] [rbp-E8h] BYREF
  unsigned __int64 v78; // [rsp+50h] [rbp-E0h]
  unsigned __int64 v79; // [rsp+58h] [rbp-D8h]
  unsigned __int64 v80; // [rsp+60h] [rbp-D0h]
  __int64 v81; // [rsp+68h] [rbp-C8h]
  const __m128i *v82; // [rsp+70h] [rbp-C0h]
  const __m128i *v83; // [rsp+78h] [rbp-B8h]
  const __m128i *v84; // [rsp+80h] [rbp-B0h]
  const __m128i *v85; // [rsp+88h] [rbp-A8h]
  const __m128i *v86; // [rsp+90h] [rbp-A0h]
  const __m128i *v87; // [rsp+98h] [rbp-98h]
  const __m128i *v88; // [rsp+A0h] [rbp-90h]
  double v89; // [rsp+A8h] [rbp-88h]
  const __m128i **v90; // [rsp+B0h] [rbp-80h]
  __int64 v91; // [rsp+B8h] [rbp-78h]
  __m128i *v92; // [rsp+C0h] [rbp-70h]
  __int64 v93; // [rsp+C8h] [rbp-68h] BYREF
  unsigned __int64 v94; // [rsp+D0h] [rbp-60h]
  __int64 v95; // [rsp+D8h] [rbp-58h]
  unsigned __int64 v96; // [rsp+E0h] [rbp-50h] BYREF
  unsigned __int64 v97; // [rsp+E8h] [rbp-48h]
  unsigned __int64 v98; // [rsp+F0h] [rbp-40h]
  const __m128i *v99; // [rsp+F8h] [rbp-38h]
  unsigned __int64 v100; // [rsp+100h] [rbp-30h]

  v4 = a1; /*0x100a88704*/
  v75 = a3; /*0x100a8870e*/
  v91 = a4; /*0x100a88715*/
  codexmate_lib::core::session_analytics::parse_all_sessions::h61d984ccd4ee9321(&v77, a2, a3, a4); /*0x100a88719*/
  v5 = v77; /*0x100a8871e*/
  v96 = v78; /*0x100a8872c*/
  v97 = v79; /*0x100a88737*/
  v98 = v80; /*0x100a88742*/
  if ( v77 != (const __m128i *)11 ) /*0x100a8874a*/
  {
    a1[11] = v88; /*0x100a887a0*/
    a1[10] = v87; /*0x100a887ab*/
    a1[9] = v86; /*0x100a887b6*/
    a1[8] = v85; /*0x100a887c1*/
    a1[7] = v84; /*0x100a887cc*/
    a1[6] = v83; /*0x100a887d7*/
    v10 = (const __m128i *)v81; /*0x100a887db*/
    a1[5] = v82; /*0x100a887e9*/
    a1[4] = v10; /*0x100a887ed*/
    a1[3] = (const __m128i *)v98; /*0x100a887f5*/
    v11 = v96; /*0x100a887f9*/
    a1[2] = (const __m128i *)v97; /*0x100a88801*/
    a1[1] = (const __m128i *)v11; /*0x100a88805*/
    *a1 = v5; /*0x100a88809*/
    return v4; /*0x100a8880c*/
  }
  v74[0] = v96; /*0x100a88754*/
  v92 = (__m128i *)v97; /*0x100a8875b*/
  v74[1] = v97; /*0x100a8875f*/
  v6 = v98; /*0x100a88766*/
  v74[2] = v98; /*0x100a8876a*/
  v7 = 0.0; /*0x100a88771*/
  v89 = 0.0; /*0x100a88775*/
  if ( v98 ) /*0x100a88780*/
  {
    if ( v98 >= 8 ) /*0x100a8878a*/
    {
      v8 = v98 & 0x1FFFFFFFFFFFFF8LL; /*0x100a8881b*/
      v12 = &v92[55].i32[2]; /*0x100a88822*/
      v13 = 0; /*0x100a88829*/
      v14 = v98 & 0x1FFFFFFFFFFFFF8LL; /*0x100a8882d*/
      v15 = 0; /*0x100a88830*/
      do /*0x100a88898*/
      {
        v13 = _mm_add_epi32( /*0x100a88885*/
                v13,
                _mm_insert_epi32(
                  _mm_insert_epi32(_mm_insert_epi32(_mm_cvtsi32_si128(*(v12 - 196)), *(v12 - 168), 1), *(v12 - 140), 2),
                  *(v12 - 112),
                  3));
        v15 = _mm_add_epi32( /*0x100a88889*/
                v15,
                _mm_insert_epi32(
                  _mm_insert_epi32(_mm_insert_epi32(_mm_cvtsi32_si128(*(v12 - 84)), *(v12 - 56), 1), *(v12 - 28), 2),
                  *v12,
                  3));
        v12 += 224; /*0x100a8888d*/
        v14 -= 8; /*0x100a88894*/
      }
      while ( v14 ); /*0x100a88898*/
      v16 = _mm_add_epi32(v15, v13); /*0x100a8889a*/
      v17 = _mm_add_epi32(_mm_shuffle_epi32(v16, 238), v16); /*0x100a888a3*/
      v9 = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v17, 85), v17)); /*0x100a888b0*/
      if ( v98 == v8 ) /*0x100a888b7*/
        goto LABEL_11; /*0x100a888b7*/
    }
    else
    {
      v8 = 0; /*0x100a88790*/
      v9 = 0; /*0x100a88792*/
    }
    v18 = v98 - v8; /*0x100a888bc*/
    a2 = v92; /*0x100a888c3*/
    v19 = &v92[7 * v8 + 6].i32[2]; /*0x100a888c7*/
    do /*0x100a888d9*/
    {
      v9 += *v19; /*0x100a888d0*/
      v19 += 28; /*0x100a888d2*/
      --v18; /*0x100a888d6*/
    }
    while ( v18 ); /*0x100a888d9*/
LABEL_11:
    v7 = (double)v9; /*0x100a888db*/
  }
  if ( (int)v98 > 0 ) /*0x100a888e5*/
    v89 = v7 / (double)(int)v98; /*0x100a888f3*/
  v20 = (unsigned __int64 *)&std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384; /*0x100a888fb*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100a88902*/
  v24 = v21; /*0x100a88904*/
  if ( *(_BYTE *)(v21 + 16) == 1 ) /*0x100a8890b*/
  {
    v25 = *(_QWORD *)v21; /*0x100a88911*/
    v26 = *(const __m128i **)(v24 + 8); /*0x100a88914*/
  }
  else
  {
    v25 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x100a88db7*/
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            a2,
            v22,
            v23);
    *(_QWORD *)v24 = v25; /*0x100a88dbc*/
    *(_QWORD *)(v24 + 8) = v26; /*0x100a88dbf*/
    *(_BYTE *)(v24 + 16) = 1; /*0x100a88dc3*/
  }
  *(_QWORD *)v24 = v25 + 1; /*0x100a8891c*/
  v80 = 0; /*0x100a88926*/
  v79 = 0; /*0x100a88934*/
  v78 = 0; /*0x100a88942*/
  v77 = (const __m128i *)&xmmword_1015FBEC0; /*0x100a88950*/
  v81 = v25; /*0x100a88957*/
  v82 = v26; /*0x100a8895e*/
  v90 = v4; /*0x100a88968*/
  v76 = v6; /*0x100a8896c*/
  if ( v6 ) /*0x100a88973*/
  {
    v27 = v92; /*0x100a88979*/
    v28 = &v92[7 * v6]; /*0x100a8897d*/
    do /*0x100a88a5e*/
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v93, v27); /*0x100a88a66*/
      v20 = &v96; /*0x100a88a6b*/
      a2 = (__m128i *)&v77; /*0x100a88a6e*/
      hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::h01c540736c64bb01( /*0x100a88a78*/
        &v96,
        &v77,
        &v93);
      v39 = v96; /*0x100a88a7d*/
      v38 = (unsigned __int64 *)v97; /*0x100a88a81*/
      if ( v96 != 0x8000000000000000LL ) /*0x100a88a88*/
      {
        v40 = v99; /*0x100a88a8a*/
        a2 = (__m128i *)v99->i64[0]; /*0x100a88a92*/
        v41 = v99->i64[1]; /*0x100a88a95*/
        v31 = v100 & v41; /*0x100a88a9c*/
        _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(v99->i64[0] + (v100 & v41)))); /*0x100a88aa5*/
        if ( !(_DWORD)_R10 ) /*0x100a88aad*/
        {
          v33 = 16; /*0x100a88ab3*/
          do /*0x100a889cb*/
          {
            v31 = v41 & (v33 + v31); /*0x100a889b6*/
            _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((__m128i *)((char *)a2 + v31))); /*0x100a889bf*/
            v33 += 16; /*0x100a889c4*/
          }
          while ( !(_DWORD)_R10 ); /*0x100a889cb*/
        }
        __asm { tzcnt r10d, r10d } /*0x100a889d3*/
        _R10 = v41 & (v31 + _R10); /*0x100a889db*/
        v35 = a2->i8[_R10]; /*0x100a889de*/
        if ( v35 >= 0 ) /*0x100a889e6*/
        {
          _R9D = _mm_movemask_epi8(_mm_load_si128(a2)); /*0x100a88ac2*/
          __asm { tzcnt r10d, r9d } /*0x100a88ac7*/
          v35 = a2->i8[_R10]; /*0x100a88acc*/
        }
        v36 = v98; /*0x100a889ec*/
        v37 = v100 >> 57; /*0x100a889f0*/
        a2->i8[_R10] = v100 >> 57; /*0x100a889fb*/
        a2[1].i8[v41 & (_R10 - 16)] = v37; /*0x100a889ff*/
        v20 = (unsigned __int64 *)&a2[-2 * _R10]; /*0x100a88a0b*/
        *(v20 - 4) = v39; /*0x100a88a19*/
        *(v20 - 3) = (unsigned __int64)v38; /*0x100a88a1e*/
        *(v20 - 2) = v36; /*0x100a88a22*/
        *((_DWORD *)v20 - 2) = 0; /*0x100a88a26*/
        v40[1] = _mm_sub_epi64( /*0x100a88a45*/
                   _mm_loadu_si128(v40 + 1),
                   _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015FB9F0), v35 & 1, 0));
        v38 = v20; /*0x100a88a4a*/
      }
      v27 += 7; /*0x100a88a54*/
      ++*((_DWORD *)v38 - 2); /*0x100a88a58*/
    }
    while ( v27 != v28 ); /*0x100a88a5e*/
    v29 = v80; /*0x100a88ad6*/
    v30 = 7; /*0x100a88add*/
    if ( v91 != 5 ) /*0x100a88ae7*/
      goto LABEL_36; /*0x100a88ae7*/
    goto LABEL_29; /*0x100a88ae7*/
  }
  v29 = 0; /*0x100a8899b*/
  v30 = 7; /*0x100a8899e*/
  if ( v91 == 5 ) /*0x100a889a8*/
  {
LABEL_29:
    if ( *(_DWORD *)v75 ^ 0x61646F74 | *(unsigned __int8 *)(v75 + 4) ^ 0x79 ) /*0x100a88afe*/
    {
      v43 = _byteswap_ulong(*(_DWORD *)v75); /*0x100a88b04*/
      if ( v43 == 1836019316 ) /*0x100a88b0b*/
        v44 = *(unsigned __int8 *)(v75 + 4) - 104; /*0x100a88b11*/
      else
        v44 = 2 * (v43 >= 0x6D6F6E74) - 1; /*0x100a88b23*/
      if ( !v44 ) /*0x100a88b2e*/
        v30 = 30; /*0x100a88b2e*/
    }
    else
    {
      v30 = 1; /*0x100a88b16*/
    }
  }
LABEL_36:
  v93 = std::time::SystemTime::now::h1fe79e41f9d5677f(v20, a2); /*0x100a88b32*/
  LODWORD(v94) = v45; /*0x100a88b3b*/
  std::time::SystemTime::duration_since::had059553cab94f96(&v96, &v93, 0, 0); /*0x100a88b4a*/
  if ( (_BYTE)v96 ) /*0x100a88b53*/
    v46 = 0; /*0x100a88b5b*/
  else
    v46 = v97; /*0x100a88b55*/
  LODWORD(v91) = v29; /*0x100a88b5e*/
  v47 = 3LL * (unsigned int)(8 * v30); /*0x100a88b69*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v96, &v93); /*0x100a88b6d*/
  v48 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v47, 8); /*0x100a88b7a*/
  if ( !v48 ) /*0x100a88b82*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, v47); /*0x100a88dd5*/
  v93 = v30; /*0x100a88b88*/
  v94 = v48; /*0x100a88b8c*/
  v95 = 0; /*0x100a88b90*/
  v49 = v46 - 86400 * v30 + 86400; /*0x100a88ba2*/
  do /*0x100a88bf7*/
  {
    v54 = codexmate_lib::core::session_analytics::timestamp_to_date::he1c90a1f37b1b076(&v96, v49); /*0x100a88bff*/
    v55 = v95; /*0x100a88c04*/
    if ( v95 == v93 ) /*0x100a88c0c*/
      v54 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v93); /*0x100a88c11*/
    --v30; /*0x100a88bc0*/
    v50 = v94; /*0x100a88bc3*/
    v51 = 3 * v55; /*0x100a88bc7*/
    *(_QWORD *)(v94 + 8 * v51 + 16) = v98; /*0x100a88bd0*/
    v52 = v96; /*0x100a88bd5*/
    *(_QWORD *)(v50 + 8 * v51 + 8) = v97; /*0x100a88bdd*/
    *(_QWORD *)(v50 + 8 * v51) = v52; /*0x100a88be2*/
    v53 = v55 + 1; /*0x100a88be6*/
    v95 = v53; /*0x100a88be9*/
    v49 += 86400; /*0x100a88bed*/
  }
  while ( v30 ); /*0x100a88bf7*/
  v96 = v94; /*0x100a88c29*/
  v97 = v94; /*0x100a88c2d*/
  v98 = v93; /*0x100a88c31*/
  v99 = (const __m128i *)(v94 + 24 * v53); /*0x100a88c35*/
  v100 = (unsigned __int64)&v77; /*0x100a88c40*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hde076e1d11b416cb( /*0x100a88c4f*/
    v73,
    &v96,
    v54);
  v4 = v90; /*0x100a88c54*/
  v56 = v76; /*0x100a88c58*/
  v57 = v91; /*0x100a88c5f*/
  v90[3] = (const __m128i *)v73[2]; /*0x100a88c69*/
  v58 = (const __m128i *)v73[0]; /*0x100a88c6d*/
  v4[2] = (const __m128i *)v73[1]; /*0x100a88c7b*/
  v4[1] = v58; /*0x100a88c7f*/
  *((double *)v4 + 4) = v89; /*0x100a88c8b*/
  *((_DWORD *)v4 + 10) = v56; /*0x100a88c90*/
  *((_DWORD *)v4 + 11) = v57; /*0x100a88c93*/
  *v4 = (const __m128i *)11; /*0x100a88c96*/
  v59 = v78; /*0x100a88c9d*/
  if ( v78 ) /*0x100a88ca7*/
  {
    v60 = v80; /*0x100a88cad*/
    if ( v80 ) /*0x100a88cb7*/
    {
      v61 = v77; /*0x100a88cbd*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v77)); /*0x100a88cce*/
      v63 = v77 + 1; /*0x100a88cd1*/
      do /*0x100a88cf0*/
      {
        if ( !(_WORD)_R13D ) /*0x100a88cf6*/
        {
          do /*0x100a88d1d*/
          {
            v64 = _mm_movemask_epi8(_mm_load_si128(v63)); /*0x100a88d06*/
            v61 -= 32; /*0x100a88d0b*/
            ++v63; /*0x100a88d12*/
          }
          while ( v64 == 0xFFFF ); /*0x100a88d1d*/
          _R13D = ~v64; /*0x100a88d1f*/
        }
        __asm { tzcnt ecx, r13d } /*0x100a88d22*/
        v66 = &v61->i8[-(32 * _ECX)]; /*0x100a88d2d*/
        v67 = *((_QWORD *)v66 - 4); /*0x100a88d30*/
        if ( v67 ) /*0x100a88d37*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v66 - 3), v67, 1); /*0x100a88d42*/
        --v60; /*0x100a88ce0*/
        _R13D &= _R13D - 1; /*0x100a88cea*/
      }
      while ( v60 ); /*0x100a88cf0*/
    }
    v68 = 32 * v59; /*0x100a88d4c*/
    v69 = 33 * v59; /*0x100a88d50*/
    v70 = v69 == -49; /*0x100a88d53*/
    v71 = v69 + 49; /*0x100a88d53*/
    v4 = v90; /*0x100a88d57*/
    if ( !v70 ) /*0x100a88d5b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v77[v68 / 0xFFFFFFFFFFFFFFF0LL - 2], v71, 16); /*0x100a88d73*/
  }
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h78df5ffcd006998d(v74); /*0x100a88d7f*/
  if ( v74[0] ) /*0x100a88d8e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, 112LL * v74[0], 8); /*0x100a88d9d*/
  return v4; /*0x100a88da5*/
}