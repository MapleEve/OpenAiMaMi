// 1.2.3 baseline same-set | __ZN13codexmate_lib4core17session_analytics23compute_token_analytics17hc97acedf3fad6323E @ 0x100a87560 | full-body via IDA Python(IDA decompiler.decompile direct write)
// 1.2.3 baseline same-set | codexmate_lib::core::session_analytics::compute_token_analytics | 完整基线逆(decompile+归目录)
const __m128i **__fastcall codexmate_lib::core::session_analytics::compute_token_analytics::hc97acedf3fad6323(
        const __m128i **a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r13
  const __m128i **v6; // r12
  const __m128i *v7; // rax
  __int64 v8; // rsi
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r15
  bool v14; // zf
  __int64 v15; // rax
  const __m128i *v16; // rdx
  __m128i v17; // xmm0
  double v18; // r10
  __m128i v19; // xmm1
  __int64 *v20; // rcx
  __int64 v21; // rdx
  __int64 *v22; // r11
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 *v31; // rbx
  __int64 v32; // r10
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  double v37; // xmm0_8
  unsigned __int64 v38; // rdx
  __int8 *v39; // rax
  const __m128i *v40; // rsi
  __int64 v41; // r8
  __int64 v42; // r9
  char v45; // r9
  const __m128i *v46; // r11
  unsigned __int64 v47; // rdi
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r11
  const __m128i *v54; // rcx
  unsigned __int64 v55; // rcx
  __int64 v56; // r15
  double v57; // xmm1_8
  __int64 v58; // rbx
  unsigned __int32 v59; // eax
  int v60; // eax
  int v61; // edx
  const __m128i *v62; // r14
  __int64 v63; // r15
  __int64 v64; // rax
  __int64 i64; // r14
  __int64 v66; // rax
  __int64 v67; // rcx
  unsigned __int64 v68; // rdx
  double v69; // xmm0_8
  const __m128i *v70; // r13
  const __m128i *v71; // rbx
  __int64 v72; // r14
  const __m128i *v73; // rax
  _QWORD *v74; // r15
  __int64 v75; // rsi
  unsigned __int64 v77; // r14
  const __m128i *v78; // rbx
  const __m128i *v79; // r15
  const __m128i *v81; // r12
  int v82; // r13d
  __int64 v83; // rax
  __int64 v84; // rsi
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // r14
  unsigned __int64 v87; // r14
  _QWORD v89[4]; // [rsp+8h] [rbp-1B8h] BYREF
  _QWORD v90[3]; // [rsp+28h] [rbp-198h] BYREF
  __int64 v91; // [rsp+40h] [rbp-180h]
  __int64 v92; // [rsp+48h] [rbp-178h]
  __int64 v93; // [rsp+50h] [rbp-170h]
  __int64 v94; // [rsp+58h] [rbp-168h]
  __int64 v95; // [rsp+60h] [rbp-160h]
  unsigned __int64 v96; // [rsp+68h] [rbp-158h]
  __int64 v97; // [rsp+70h] [rbp-150h]
  __int64 v98; // [rsp+78h] [rbp-148h]
  double v99; // [rsp+80h] [rbp-140h]
  __int64 v100; // [rsp+88h] [rbp-138h]
  const __m128i *v101; // [rsp+90h] [rbp-130h] BYREF
  unsigned __int64 v102; // [rsp+98h] [rbp-128h]
  const __m128i *v103; // [rsp+A0h] [rbp-120h]
  const __m128i *v104; // [rsp+A8h] [rbp-118h]
  __int64 v105; // [rsp+B0h] [rbp-110h]
  const __m128i *v106; // [rsp+B8h] [rbp-108h]
  const __m128i *v107; // [rsp+C0h] [rbp-100h]
  const __m128i *v108; // [rsp+C8h] [rbp-F8h]
  const __m128i *v109; // [rsp+D0h] [rbp-F0h]
  const __m128i *v110; // [rsp+D8h] [rbp-E8h]
  const __m128i *v111; // [rsp+E0h] [rbp-E0h]
  const __m128i *v112; // [rsp+E8h] [rbp-D8h]
  unsigned __int64 v113; // [rsp+F0h] [rbp-D0h] BYREF
  double v114; // [rsp+F8h] [rbp-C8h]
  const __m128i *v115; // [rsp+100h] [rbp-C0h]
  __int64 *v116; // [rsp+108h] [rbp-B8h]
  const __m128i **v117; // [rsp+110h] [rbp-B0h]
  __int64 v118; // [rsp+118h] [rbp-A8h]
  const __m128i *v119; // [rsp+120h] [rbp-A0h]
  const __m128i *v120; // [rsp+128h] [rbp-98h]
  const __m128i *v121; // [rsp+130h] [rbp-90h]
  unsigned __int64 v122; // [rsp+138h] [rbp-88h] BYREF
  const __m128i *v123; // [rsp+140h] [rbp-80h]
  const __m128i *v124; // [rsp+148h] [rbp-78h]
  __int64 v125; // [rsp+150h] [rbp-70h]
  unsigned __int64 v126; // [rsp+158h] [rbp-68h]
  double v127; // [rsp+160h] [rbp-60h]
  __m128i v128; // [rsp+168h] [rbp-58h] BYREF
  __int64 v129; // [rsp+178h] [rbp-48h]
  const __m128i *v130; // [rsp+180h] [rbp-40h]
  double v131; // [rsp+188h] [rbp-38h]
  double v132; // [rsp+190h] [rbp-30h]

  v5 = a3;
  v6 = a1;
  codexmate_lib::core::session_analytics::parse_all_sessions::h61d984ccd4ee9321(&v101, a2, a3, a4);
  v7 = v101;
  v122 = v102;
  v123 = v103;
  v124 = v104;
  if ( v101 != (const __m128i *)11 )
  {
    a1[11] = v112;
    a1[10] = v111;
    a1[9] = v110;
    a1[8] = v109;
    a1[7] = v108;
    a1[6] = v107;
    v54 = (const __m128i *)v105;
    a1[5] = v106;
    a1[4] = v54;
    a1[3] = v124;
    v55 = v122;
    a1[2] = v123;
    a1[1] = (const __m128i *)v55;
    *a1 = v7;
    return v6;
  }
  v113 = v122;
  v114 = *(double *)&v123;
  v115 = v124;
  v8 = a4;
  v127 = COERCE_DOUBLE(codexmate_lib::core::session_analytics::range_to_cutoff::hbe9b944a87b55264(v5, a4));
  v9 = (__int64 *)&std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384;
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
  v13 = v10;
  v14 = *(_BYTE *)(v10 + 16) == 1;
  v98 = a4;
  if ( v14 )
  {
    v15 = *(_QWORD *)v10;
    v16 = *(const __m128i **)(v13 + 8);
  }
  else
  {
    v15 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            a4,
            v11,
            v12);
    *(_QWORD *)v13 = v15;
    *(_QWORD *)(v13 + 8) = v16;
    *(_BYTE *)(v13 + 16) = 1;
  }
  *(_QWORD *)v13 = v15 + 1;
  v104 = nullptr;
  v103 = nullptr;
  v102 = 0;
  v101 = (const __m128i *)&xmmword_1015FBEC0;
  v105 = v15;
  v106 = v16;
  v117 = v6;
  v99 = v114;
  if ( v115 )
  {
    v100 = v5;
    v95 = *(_QWORD *)&v114 + 112LL * (_QWORD)v115;
    v17 = 0;
    v9 = &v128.i64[1];
    v96 = 0x8000000000000000LL;
    v119 = nullptr;
    v120 = nullptr;
    v121 = nullptr;
    v118 = 0;
    v18 = v114;
    do
    {
      v19 = v17;
      v20 = *(__int64 **)(*(_QWORD *)&v18 + 32LL);
      v21 = *(_QWORD *)(*(_QWORD *)&v18 + 40LL);
      *(_QWORD *)&v18 += 112LL;
      v22 = &v20[5 * v21];
      v131 = 0.0;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v26 = 0;
      while ( v20 != v22 )
      {
        v27 = v26;
        v28 = v25;
        v29 = v24;
        v30 = v23;
        v31 = v20 + 5;
        v8 = *v20;
        v23 = v20[1];
        v24 = v20[2];
        v25 = v20[3];
        v26 = v20[4];
        v20 += 5;
        if ( v8 >= *(__int64 *)&v127 )
        {
          v116 = v22;
          v128.i64[0] = v19.i64[0];
          v132 = v18;
          v32 = v23 - v30;
          if ( v23 - v30 <= 0 )
            v32 = 0;
          v33 = v24 - v29;
          if ( v24 - v29 <= 0 )
            v33 = 0;
          v34 = v25 - v28;
          v35 = v26 - v27;
          v91 = v32;
          if ( v33 + v32 > v26 - v27 )
            v35 = v33 + v32;
          if ( v35 <= 0 )
            v35 = 0;
          v93 = v35;
          if ( v34 <= 0 )
            v34 = 0;
          v94 = v34;
          v36 = v33 - v34;
          if ( v36 <= 0 )
            v36 = 0;
          v92 = v36;
          v37 = codexmate_lib::core::session_analytics::timestamp_to_date::he1c90a1f37b1b076(&v128.u64[1], v8);
          hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::he6f15f95f30fc90b(
            &v122,
            &v101,
            &v128.u64[1],
            v37);
          v38 = v122;
          v39 = (__int8 *)v123;
          if ( v122 != v96 )
          {
            v40 = *(const __m128i **)v125;
            v97 = v125;
            v41 = *(_QWORD *)(v125 + 8);
            v42 = v126 & v41;
            _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v40 + (v126 & v41))));
            if ( !(_DWORD)_R10 )
            {
              v52 = 16;
              do
              {
                v42 = v41 & (v52 + v42);
                _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v40 + v42)));
                v52 += 16;
              }
              while ( !(_DWORD)_R10 );
            }
            __asm { tzcnt   r10d, r10d }
            _R10 = v41 & (v42 + _R10);
            v45 = v40->i8[_R10];
            if ( v45 >= 0 )
            {
              _R9D = _mm_movemask_epi8(_mm_load_si128(v40));
              __asm { tzcnt   r10d, r9d }
              v45 = v40->i8[_R10];
            }
            v46 = v124;
            v47 = v126 >> 57;
            v40->i8[_R10] = v126 >> 57;
            v40[1].i8[v41 & (_R10 - 16)] = v47;
            v48 = -7 * _R10;
            v49 = v97;
            *(_QWORD *)(v97 + 16) -= v45 & 1;
            *(_QWORD *)((char *)&v40[-3] + v48 * 8 - 8) = v38;
            v40[-3].i64[v48] = (__int64)v39;
            v39 = &v40->i8[-56 * _R10];
            *(_QWORD *)((char *)&v40[-2] + v48 * 8 - 8) = v46;
            v40[-2].i64[v48] = 0;
            *(_QWORD *)((char *)&v40[-1] + v48 * 8 - 8) = 0;
            v40[-1].i64[v48] = 0;
            v40->i64[v48 - 1] = 0;
            ++*(_QWORD *)(v49 + 24);
          }
          v9 = &v128.i64[1];
          v18 = v132;
          v22 = v116;
          v119 = (const __m128i *)((char *)v119 + v91);
          v50 = v92;
          v120 = (const __m128i *)((char *)v120 + v92);
          v8 = v94;
          v121 = (const __m128i *)((char *)v121 + v94);
          *((_QWORD *)v39 - 4) += v91;
          v51 = v93;
          v118 += v93;
          *(_QWORD *)&v131 += v93;
          *(__m128i *)(v39 - 24) = _mm_add_epi64(
                                     _mm_unpacklo_epi64((__m128i)(unsigned __int64)v50, (__m128i)(unsigned __int64)v8),
                                     _mm_loadu_si128((const __m128i *)(v39 - 24)));
          *((_QWORD *)v39 - 1) += v51;
          v20 = v31;
          v19 = _mm_loadl_epi64(&v128);
        }
      }
      v17.i64[1] = v19.i64[1];
      *(double *)v17.i64 = *(double *)v19.i64 + 1.0;
      if ( *(__int64 *)&v131 <= 0 )
        v17 = v19;
    }
    while ( *(_QWORD *)&v18 != v95 );
    v127 = 0.0;
    v56 = v118;
    v57 = (double)(int)v118;
    v131 = 0.0;
    if ( *(double *)v17.i64 > 0.0 )
      v131 = v57 / *(double *)v17.i64;
    v5 = v100;
    if ( v118 > 0 )
    {
      v132 = (double)(int)v119 / v57 * 100.0;
      *(double *)v128.i64 = (double)(int)v120 / v57 * 100.0;
      v127 = (double)(int)v121 / v57 * 100.0;
      v58 = 7;
      if ( v98 != 5 )
        goto LABEL_48;
LABEL_41:
      if ( *(_DWORD *)v5 ^ 0x61646F74 | *(unsigned __int8 *)(v5 + 4) ^ 0x79 )
      {
        v59 = _byteswap_ulong(*(_DWORD *)v5);
        if ( v59 == 1836019316 )
          v60 = *(unsigned __int8 *)(v5 + 4) - 104;
        else
          v60 = 2 * (v59 >= 0x6D6F6E74) - 1;
        if ( !v60 )
          v58 = 30;
      }
      else
      {
        v58 = 1;
      }
      goto LABEL_48;
    }
  }
  else
  {
    v131 = 0.0;
    v119 = nullptr;
    v120 = nullptr;
    v121 = nullptr;
    v56 = 0;
    v127 = 0.0;
  }
  v128.i64[0] = 0;
  v132 = 0.0;
  v58 = 7;
  if ( v98 == 5 )
    goto LABEL_41;
LABEL_48:
  v128.i64[1] = std::time::SystemTime::now::h1fe79e41f9d5677f(v9, v8);
  LODWORD(v129) = v61;
  std::time::SystemTime::duration_since::had059553cab94f96(&v122, &v128.u64[1], 0, 0);
  v118 = v56;
  if ( (_BYTE)v122 )
    v62 = nullptr;
  else
    v62 = v123;
  v63 = 3LL * (unsigned int)(8 * v58);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v122, &v128.u64[1]);
  v64 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v63, 8);
  if ( !v64 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, v63);
  v128.i64[1] = v58;
  v129 = v64;
  v130 = nullptr;
  i64 = (__int64)v62[-5400 * v58 + 5400].i64;
  do
  {
    v69 = codexmate_lib::core::session_analytics::timestamp_to_date::he1c90a1f37b1b076(&v122, i64);
    v70 = v130;
    if ( v130 == (const __m128i *)v128.i64[1] )
      v69 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v128.u64[1]);
    --v58;
    v66 = v129;
    v67 = 3LL * (_QWORD)v70;
    *(_QWORD *)(v129 + 8 * v67 + 16) = v124;
    v68 = v122;
    *(double *)(v66 + 8 * v67 + 8) = *(double *)&v123;
    *(_QWORD *)(v66 + 8 * v67) = v68;
    v130 = (const __m128i *)&v70->i8[1];
    i64 += 86400;
  }
  while ( v58 );
  v71 = v130;
  v124 = v130;
  v72 = v129;
  v123 = (const __m128i *)v129;
  v122 = v128.u64[1];
  v128.i64[1] = 0;
  v89[0] = v129;
  v89[1] = v129 + 24LL * (_QWORD)v130;
  v89[2] = &v101;
  v89[3] = &v128.i64[1];
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hc94f4fc1b25935d4(
    v90,
    v89,
    v69);
  v6 = v117;
  v117[3] = (const __m128i *)v90[2];
  v73 = (const __m128i *)v90[0];
  v6[2] = (const __m128i *)v90[1];
  v6[1] = v73;
  v6[4] = (const __m128i *)v118;
  *((double *)v6 + 5) = v131;
  *((double *)v6 + 6) = v132;
  v6[7] = (const __m128i *)v128.i64[0];
  *((double *)v6 + 8) = v127;
  v6[9] = v119;
  v6[10] = v120;
  v6[11] = v121;
  *v6 = (const __m128i *)11;
  if ( v71 )
  {
    v74 = (_QWORD *)(v72 + 8);
    do
    {
      v75 = *(v74 - 1);
      if ( v75 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v74, v75, 1);
      v74 += 3;
      v71 = (const __m128i *)((char *)v71 - 1);
    }
    while ( v71 );
  }
  HIDWORD(_RAX) = HIDWORD(v122);
  if ( v122 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, 24 * v122, 8);
  v77 = v102;
  if ( v102 )
  {
    v78 = v104;
    if ( v104 )
    {
      v79 = v101;
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v101));
      v81 = v101 + 1;
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v82 = _mm_movemask_epi8(_mm_load_si128(v81));
            v79 -= 56;
            ++v81;
          }
          while ( v82 == 0xFFFF );
          _R13D = ~v82;
        }
        __asm { tzcnt   eax, r13d }
        v83 = -7 * _RAX;
        v84 = *(_QWORD *)((char *)&v79[-3] + v83 * 8 - 8);
        if ( v84 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79[-3].i64[v83], v84, 1);
        v78 = (const __m128i *)((char *)v78 - 1);
        _RAX = _R13D & (unsigned int)(_R13D - 1);
        _R13D &= _R13D - 1;
      }
      while ( v78 );
    }
    v85 = (56 * v77 + 71) & 0xFFFFFFFFFFFFFFF0LL;
    v86 = v85 + v77;
    v14 = v86 == -17;
    v87 = v86 + 17;
    v6 = v117;
    if ( !v14 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v101 - v85, v87, 16);
  }
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h78df5ffcd006998d(&v113);
  if ( v113 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v99, 112 * v113, 8);
  return v6;
}
