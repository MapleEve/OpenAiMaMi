// 1.2.3 baseline same-set | __ZN13codexmate_lib4core17session_analytics25compute_session_analytics17h01ab3df6f12cb50eE @ 0x100a886f0 | full-body via IDA Python(IDA decompiler.decompile direct write)
// 1.2.3 baseline same-set | codexmate_lib::core::session_analytics::compute_session_analytics | 完整基线逆(decompile+归目录)
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

  v4 = a1;
  v75 = a3;
  v91 = a4;
  codexmate_lib::core::session_analytics::parse_all_sessions::h61d984ccd4ee9321(&v77, a2, a3, a4);
  v5 = v77;
  v96 = v78;
  v97 = v79;
  v98 = v80;
  if ( v77 != (const __m128i *)11 )
  {
    a1[11] = v88;
    a1[10] = v87;
    a1[9] = v86;
    a1[8] = v85;
    a1[7] = v84;
    a1[6] = v83;
    v10 = (const __m128i *)v81;
    a1[5] = v82;
    a1[4] = v10;
    a1[3] = (const __m128i *)v98;
    v11 = v96;
    a1[2] = (const __m128i *)v97;
    a1[1] = (const __m128i *)v11;
    *a1 = v5;
    return v4;
  }
  v74[0] = v96;
  v92 = (__m128i *)v97;
  v74[1] = v97;
  v6 = v98;
  v74[2] = v98;
  v7 = 0.0;
  v89 = 0.0;
  if ( v98 )
  {
    if ( v98 >= 8 )
    {
      v8 = v98 & 0x1FFFFFFFFFFFFF8LL;
      v12 = &v92[55].i32[2];
      v13 = 0;
      v14 = v98 & 0x1FFFFFFFFFFFFF8LL;
      v15 = 0;
      do
      {
        v13 = _mm_add_epi32(
                v13,
                _mm_insert_epi32(
                  _mm_insert_epi32(_mm_insert_epi32(_mm_cvtsi32_si128(*(v12 - 196)), *(v12 - 168), 1), *(v12 - 140), 2),
                  *(v12 - 112),
                  3));
        v15 = _mm_add_epi32(
                v15,
                _mm_insert_epi32(
                  _mm_insert_epi32(_mm_insert_epi32(_mm_cvtsi32_si128(*(v12 - 84)), *(v12 - 56), 1), *(v12 - 28), 2),
                  *v12,
                  3));
        v12 += 224;
        v14 -= 8;
      }
      while ( v14 );
      v16 = _mm_add_epi32(v15, v13);
      v17 = _mm_add_epi32(_mm_shuffle_epi32(v16, 238), v16);
      v9 = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v17, 85), v17));
      if ( v98 == v8 )
        goto LABEL_11;
    }
    else
    {
      v8 = 0;
      v9 = 0;
    }
    v18 = v98 - v8;
    a2 = v92;
    v19 = &v92[7 * v8 + 6].i32[2];
    do
    {
      v9 += *v19;
      v19 += 28;
      --v18;
    }
    while ( v18 );
LABEL_11:
    v7 = (double)v9;
  }
  if ( (int)v98 > 0 )
    v89 = v7 / (double)(int)v98;
  v20 = (unsigned __int64 *)&std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384;
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
  v24 = v21;
  if ( *(_BYTE *)(v21 + 16) == 1 )
  {
    v25 = *(_QWORD *)v21;
    v26 = *(const __m128i **)(v24 + 8);
  }
  else
  {
    v25 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            a2,
            v22,
            v23);
    *(_QWORD *)v24 = v25;
    *(_QWORD *)(v24 + 8) = v26;
    *(_BYTE *)(v24 + 16) = 1;
  }
  *(_QWORD *)v24 = v25 + 1;
  v80 = 0;
  v79 = 0;
  v78 = 0;
  v77 = (const __m128i *)&xmmword_1015FBEC0;
  v81 = v25;
  v82 = v26;
  v90 = v4;
  v76 = v6;
  if ( v6 )
  {
    v27 = v92;
    v28 = &v92[7 * v6];
    do
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v93, v27);
      v20 = &v96;
      a2 = (__m128i *)&v77;
      hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::h01c540736c64bb01(
        &v96,
        &v77,
        &v93);
      v39 = v96;
      v38 = (unsigned __int64 *)v97;
      if ( v96 != 0x8000000000000000LL )
      {
        v40 = v99;
        a2 = (__m128i *)v99->i64[0];
        v41 = v99->i64[1];
        v31 = v100 & v41;
        _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(v99->i64[0] + (v100 & v41))));
        if ( !(_DWORD)_R10 )
        {
          v33 = 16;
          do
          {
            v31 = v41 & (v33 + v31);
            _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((__m128i *)((char *)a2 + v31)));
            v33 += 16;
          }
          while ( !(_DWORD)_R10 );
        }
        __asm { tzcnt   r10d, r10d }
        _R10 = v41 & (v31 + _R10);
        v35 = a2->i8[_R10];
        if ( v35 >= 0 )
        {
          _R9D = _mm_movemask_epi8(_mm_load_si128(a2));
          __asm { tzcnt   r10d, r9d }
          v35 = a2->i8[_R10];
        }
        v36 = v98;
        v37 = v100 >> 57;
        a2->i8[_R10] = v100 >> 57;
        a2[1].i8[v41 & (_R10 - 16)] = v37;
        v20 = (unsigned __int64 *)&a2[-2 * _R10];
        *(v20 - 4) = v39;
        *(v20 - 3) = (unsigned __int64)v38;
        *(v20 - 2) = v36;
        *((_DWORD *)v20 - 2) = 0;
        v40[1] = _mm_sub_epi64(
                   _mm_loadu_si128(v40 + 1),
                   _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015FB9F0), v35 & 1, 0));
        v38 = v20;
      }
      v27 += 7;
      ++*((_DWORD *)v38 - 2);
    }
    while ( v27 != v28 );
    v29 = v80;
    v30 = 7;
    if ( v91 != 5 )
      goto LABEL_36;
    goto LABEL_29;
  }
  v29 = 0;
  v30 = 7;
  if ( v91 == 5 )
  {
LABEL_29:
    if ( *(_DWORD *)v75 ^ 0x61646F74 | *(unsigned __int8 *)(v75 + 4) ^ 0x79 )
    {
      v43 = _byteswap_ulong(*(_DWORD *)v75);
      if ( v43 == 1836019316 )
        v44 = *(unsigned __int8 *)(v75 + 4) - 104;
      else
        v44 = 2 * (v43 >= 0x6D6F6E74) - 1;
      if ( !v44 )
        v30 = 30;
    }
    else
    {
      v30 = 1;
    }
  }
LABEL_36:
  v93 = std::time::SystemTime::now::h1fe79e41f9d5677f(v20, a2);
  LODWORD(v94) = v45;
  std::time::SystemTime::duration_since::had059553cab94f96(&v96, &v93, 0, 0);
  if ( (_BYTE)v96 )
    v46 = 0;
  else
    v46 = v97;
  LODWORD(v91) = v29;
  v47 = 3LL * (unsigned int)(8 * v30);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v96, &v93);
  v48 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v47, 8);
  if ( !v48 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, v47);
  v93 = v30;
  v94 = v48;
  v95 = 0;
  v49 = v46 - 86400 * v30 + 86400;
  do
  {
    v54 = codexmate_lib::core::session_analytics::timestamp_to_date::he1c90a1f37b1b076(&v96, v49);
    v55 = v95;
    if ( v95 == v93 )
      v54 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v93);
    --v30;
    v50 = v94;
    v51 = 3 * v55;
    *(_QWORD *)(v94 + 8 * v51 + 16) = v98;
    v52 = v96;
    *(_QWORD *)(v50 + 8 * v51 + 8) = v97;
    *(_QWORD *)(v50 + 8 * v51) = v52;
    v53 = v55 + 1;
    v95 = v53;
    v49 += 86400;
  }
  while ( v30 );
  v96 = v94;
  v97 = v94;
  v98 = v93;
  v99 = (const __m128i *)(v94 + 24 * v53);
  v100 = (unsigned __int64)&v77;
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hde076e1d11b416cb(
    v73,
    &v96,
    v54);
  v4 = v90;
  v56 = v76;
  v57 = v91;
  v90[3] = (const __m128i *)v73[2];
  v58 = (const __m128i *)v73[0];
  v4[2] = (const __m128i *)v73[1];
  v4[1] = v58;
  *((double *)v4 + 4) = v89;
  *((_DWORD *)v4 + 10) = v56;
  *((_DWORD *)v4 + 11) = v57;
  *v4 = (const __m128i *)11;
  v59 = v78;
  if ( v78 )
  {
    v60 = v80;
    if ( v80 )
    {
      v61 = v77;
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v77));
      v63 = v77 + 1;
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v64 = _mm_movemask_epi8(_mm_load_si128(v63));
            v61 -= 32;
            ++v63;
          }
          while ( v64 == 0xFFFF );
          _R13D = ~v64;
        }
        __asm { tzcnt   ecx, r13d }
        v66 = &v61->i8[-(32 * _ECX)];
        v67 = *((_QWORD *)v66 - 4);
        if ( v67 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v66 - 3), v67, 1);
        --v60;
        _R13D &= _R13D - 1;
      }
      while ( v60 );
    }
    v68 = 32 * v59;
    v69 = 33 * v59;
    v70 = v69 == -49;
    v71 = v69 + 49;
    v4 = v90;
    if ( !v70 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v77[v68 / 0xFFFFFFFFFFFFFFF0LL - 2], v71, 16);
  }
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h78df5ffcd006998d(v74);
  if ( v74[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, 112LL * v74[0], 8);
  return v4;
}
