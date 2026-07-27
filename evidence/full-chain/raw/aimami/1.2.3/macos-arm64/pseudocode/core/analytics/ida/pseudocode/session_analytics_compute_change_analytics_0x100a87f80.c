// 1.2.3 baseline same-set | __ZN13codexmate_lib4core17session_analytics24compute_change_analytics17hb043741ba7c9bfd5E @ 0x100a87f80 | full-body via IDA decompiler
// 1.2.3 baseline same-set | codexmate_lib::core::session_analytics::compute_change_analytics | 完整基线逆(decompile+归目录)
const __m128i **__fastcall codexmate_lib::core::session_analytics::compute_change_analytics::hb043741ba7c9bfd5(
        const __m128i **a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  const __m128i **v6; // rbx
  const __m128i *v7; // rax
  const __m128i *v8; // rsi
  __int64 v9; // r14
  unsigned __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rax
  const __m128i *v16; // rdx
  const __m128i *v17; // rcx
  const __m128i **v18; // r15
  __int64 v19; // rbx
  const __m128i **v20; // rbx
  int v21; // r13d
  double v22; // xmm0_8
  unsigned __int64 v23; // rdx
  __int8 *v24; // rax
  const __m128i *v25; // r12
  __int64 v26; // r8
  __int64 v27; // r9
  char v30; // r9
  const __m128i *v31; // r11
  __int64 v32; // r10
  __int64 v33; // rcx
  __int64 v34; // r11
  const __m128i *v36; // rcx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rbx
  unsigned __int32 v39; // eax
  int v40; // eax
  int v41; // edx
  const __m128i *v42; // r14
  __int64 v43; // r15
  __int64 v44; // rax
  __int64 i64; // r14
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  double v49; // xmm0_8
  const __m128i *v50; // r13
  const __m128i *v51; // rbx
  __int64 v52; // r14
  __m128i *v53; // rdx
  __int64 v54; // rax
  _QWORD *v55; // r15
  __int64 v56; // rsi
  unsigned __int64 v58; // r14
  const __m128i *v59; // rbx
  const __m128i *v60; // r15
  const __m128i *v62; // r12
  int v63; // r13d
  __int64 v64; // rax
  __int64 v65; // rsi
  unsigned __int64 v66; // rax
  __int64 v67; // r14
  __m128i v69; // [rsp+0h] [rbp-170h]
  _QWORD v70[3]; // [rsp+10h] [rbp-160h] BYREF
  _QWORD v71[3]; // [rsp+28h] [rbp-148h] BYREF
  const __m128i *v72; // [rsp+40h] [rbp-130h]
  const __m128i *v73; // [rsp+48h] [rbp-128h]
  unsigned __int64 v74; // [rsp+50h] [rbp-120h]
  __int64 v75; // [rsp+58h] [rbp-118h]
  const __m128i *v76; // [rsp+60h] [rbp-110h]
  __int64 v77; // [rsp+68h] [rbp-108h]
  const __m128i *v78; // [rsp+70h] [rbp-100h] BYREF
  unsigned __int64 v79; // [rsp+78h] [rbp-F8h]
  const __m128i *v80; // [rsp+80h] [rbp-F0h]
  const __m128i *v81; // [rsp+88h] [rbp-E8h]
  __int64 v82; // [rsp+90h] [rbp-E0h]
  const __m128i *v83; // [rsp+98h] [rbp-D8h]
  const __m128i *v84; // [rsp+A0h] [rbp-D0h]
  const __m128i *v85; // [rsp+A8h] [rbp-C8h]
  const __m128i *v86; // [rsp+B0h] [rbp-C0h]
  const __m128i *v87; // [rsp+B8h] [rbp-B8h]
  const __m128i *v88; // [rsp+C0h] [rbp-B0h]
  const __m128i *v89; // [rsp+C8h] [rbp-A8h]
  __m128i v90; // [rsp+D0h] [rbp-A0h] BYREF
  unsigned __int64 v91; // [rsp+E8h] [rbp-88h] BYREF
  const __m128i *v92; // [rsp+F0h] [rbp-80h]
  const __m128i *v93; // [rsp+F8h] [rbp-78h]
  __m128i *v94; // [rsp+100h] [rbp-70h]
  __int64 v95; // [rsp+108h] [rbp-68h] BYREF
  __int64 v96; // [rsp+110h] [rbp-60h]
  const __m128i *v97; // [rsp+118h] [rbp-58h]
  unsigned __int64 v98; // [rsp+120h] [rbp-50h] BYREF
  const __m128i *v99; // [rsp+128h] [rbp-48h]
  const __m128i *v100; // [rsp+130h] [rbp-40h]
  const __m128i *v101; // [rsp+138h] [rbp-38h]
  unsigned __int64 v102; // [rsp+140h] [rbp-30h]

  v6 = a1;
  codexmate_lib::core::session_analytics::parse_all_sessions::h61d984ccd4ee9321(&v78, a2, a3, a4);
  v7 = v78;
  v98 = v79;
  v99 = v80;
  v100 = v81;
  if ( v78 == (const __m128i *)11 )
  {
    v91 = v98;
    v92 = v99;
    v93 = v100;
    v75 = a4;
    v8 = (const __m128i *)a4;
    v9 = codexmate_lib::core::session_analytics::range_to_cutoff::hbe9b944a87b55264(a3, a4);
    v10 = (unsigned __int64 *)&std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384;
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
    v14 = v11;
    if ( *(_BYTE *)(v11 + 16) == 1 )
    {
      v15 = *(_QWORD *)v11;
      v16 = *(const __m128i **)(v14 + 8);
    }
    else
    {
      v15 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
              &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
              v8,
              v12,
              v13);
      *(_QWORD *)v14 = v15;
      *(_QWORD *)(v14 + 8) = v16;
      *(_BYTE *)(v14 + 16) = 1;
    }
    v77 = a3;
    *(_QWORD *)v14 = v15 + 1;
    v81 = nullptr;
    v80 = nullptr;
    v79 = 0;
    v78 = (const __m128i *)&xmmword_1015FBEC0;
    v82 = v15;
    v83 = v16;
    v17 = v92;
    v76 = v92;
    v94 = (__m128i *)v6;
    if ( v93 )
    {
      v73 = &v92[7 * (_QWORD)v93];
      v90 = 0;
      v74 = 0x8000000000000000LL;
      do
      {
        v18 = (const __m128i **)v17[5].i64[0];
        v19 = v17[5].i64[1];
        v17 += 7;
        v20 = &v18[2 * v19];
        while ( v18 != v20 )
        {
          v8 = *v18;
          v18 += 2;
          if ( (__int64)v8 >= v9 )
          {
            v72 = v17;
            v69 = _mm_loadl_epi64((const __m128i *)(v18 - 1));
            v21 = *((_DWORD *)v18 - 2) + *((_DWORD *)v18 - 1);
            v22 = codexmate_lib::core::session_analytics::timestamp_to_date::he1c90a1f37b1b076(
                    (unsigned __int64 *)&v95,
                    (__int64)v8);
            v10 = &v98;
            v8 = (const __m128i *)&v78;
            hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::h40383baac158ee74(
              &v98,
              &v78,
              &v95,
              v22);
            v23 = v98;
            v24 = (__int8 *)v99;
            if ( v98 != v74 )
            {
              v25 = v101;
              v8 = (const __m128i *)v101->i64[0];
              v26 = v101->i64[1];
              v27 = v102 & v26;
              _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(v101->i64[0] + (v102 & v26))));
              if ( !(_DWORD)_R10 )
              {
                v34 = 16;
                do
                {
                  v27 = v26 & (v34 + v27);
                  _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v8 + v27)));
                  v34 += 16;
                }
                while ( !(_DWORD)_R10 );
              }
              __asm { tzcnt   r10d, r10d }
              _R10 = v26 & (v27 + _R10);
              v30 = v8->i8[_R10];
              if ( v30 >= 0 )
              {
                _R9D = _mm_movemask_epi8(_mm_load_si128(v8));
                __asm { tzcnt   r10d, r9d }
                v30 = v8->i8[_R10];
              }
              v31 = v100;
              v10 = (unsigned __int64 *)(v102 >> 57);
              v8->i8[_R10] = v102 >> 57;
              v8[1].i8[v26 & (_R10 - 16)] = (char)v10;
              v32 = -_R10;
              v33 = 5 * v32;
              *((_QWORD *)&v8[-2] + v33 - 1) = v23;
              v8[-2].i64[v33] = (__int64)v24;
              v24 = &v8->i8[40 * v32];
              *((_QWORD *)&v8[-1] + v33 - 1) = v31;
              v8[-1].i64[v33] = 0;
              v8->i32[2 * v33 - 2] = 0;
              v25[1] = _mm_sub_epi64(
                         _mm_loadu_si128(v25 + 1),
                         _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015FB9F0), v30 & 1, 0));
            }
            v90 = _mm_add_epi32(
                    _mm_load_si128(&v90),
                    _mm_insert_epi32(_mm_insert_epi32(_mm_shuffle_epi32(v69, 80), v21, 0), 1, 3));
            *((_DWORD *)v24 - 4) += v21;
            *((_DWORD *)v24 - 3) += *((_DWORD *)v18 - 2);
            *((_DWORD *)v24 - 2) += *((_DWORD *)v18 - 1);
            v17 = v72;
          }
        }
      }
      while ( v17 != v73 );
    }
    else
    {
      v90 = 0;
    }
    v38 = 7;
    if ( v75 == 5 )
    {
      if ( *(_DWORD *)v77 ^ 0x61646F74 | *(unsigned __int8 *)(v77 + 4) ^ 0x79 )
      {
        v39 = _byteswap_ulong(*(_DWORD *)v77);
        if ( v39 == 1836019316 )
          v40 = *(unsigned __int8 *)(v77 + 4) - 104;
        else
          v40 = 2 * (v39 >= 0x6D6F6E74) - 1;
        if ( !v40 )
          v38 = 30;
      }
      else
      {
        v38 = 1;
      }
    }
    v95 = std::time::SystemTime::now::h1fe79e41f9d5677f(v10, v8);
    LODWORD(v96) = v41;
    std::time::SystemTime::duration_since::had059553cab94f96(&v98, &v95, 0, 0);
    if ( (_BYTE)v98 )
      v42 = nullptr;
    else
      v42 = v99;
    v43 = 3LL * (unsigned int)(8 * v38);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v98, &v95);
    v44 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v43, 8);
    if ( !v44 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, v43);
    v95 = v38;
    v96 = v44;
    v97 = nullptr;
    i64 = (__int64)v42[-5400 * v38 + 5400].i64;
    do
    {
      v49 = codexmate_lib::core::session_analytics::timestamp_to_date::he1c90a1f37b1b076(&v98, i64);
      v50 = v97;
      if ( v97 == (const __m128i *)v95 )
        v49 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v95);
      --v38;
      v46 = v96;
      v47 = 3LL * (_QWORD)v50;
      *(_QWORD *)(v96 + 8 * v47 + 16) = v100;
      v48 = v98;
      *(_QWORD *)(v46 + 8 * v47 + 8) = v99;
      *(_QWORD *)(v46 + 8 * v47) = v48;
      v97 = (const __m128i *)&v50->i8[1];
      i64 += 86400;
    }
    while ( v38 );
    v51 = v97;
    v100 = v97;
    v52 = v96;
    v99 = (const __m128i *)v96;
    v98 = v95;
    v70[0] = v96;
    v70[1] = v96 + 24LL * (_QWORD)v97;
    v70[2] = &v78;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h4e0b7216b20d9445(
      v71,
      v70,
      v49);
    v53 = v94;
    v94[1].i64[1] = v71[2];
    v54 = v71[0];
    v53[1].i64[0] = v71[1];
    v53->i64[1] = v54;
    v53[2] = _mm_load_si128(&v90);
    v53->i64[0] = 11;
    if ( v51 )
    {
      v55 = (_QWORD *)(v52 + 8);
      do
      {
        v56 = *(v55 - 1);
        if ( v56 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v55, v56, 1);
        v55 += 3;
        v51 = (const __m128i *)((char *)v51 - 1);
      }
      while ( v51 );
    }
    HIDWORD(_RAX) = HIDWORD(v98);
    if ( v98 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, 24 * v98, 8);
    v58 = v79;
    if ( v79 )
    {
      v59 = v81;
      if ( v81 )
      {
        v60 = v78;
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(v78));
        v62 = v78 + 1;
        do
        {
          if ( !(_WORD)_R13D )
          {
            do
            {
              v63 = _mm_movemask_epi8(_mm_load_si128(v62));
              v60 -= 40;
              ++v62;
            }
            while ( v63 == 0xFFFF );
            _R13D = ~v63;
          }
          __asm { tzcnt   eax, r13d }
          v64 = -5 * _RAX;
          v65 = *((_QWORD *)&v60[-2] + v64 - 1);
          if ( v65 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60[-2].i64[v64], v65, 1);
          v59 = (const __m128i *)((char *)v59 - 1);
          _RAX = _R13D & (unsigned int)(_R13D - 1);
          _R13D &= _R13D - 1;
        }
        while ( v59 );
      }
      v66 = (40 * v58 + 55) & 0xFFFFFFFFFFFFFFF0LL;
      v67 = v66 + v58 + 17;
      if ( v67 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v78 - v66, v67, 16);
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h78df5ffcd006998d(&v91);
    v6 = (const __m128i **)v94;
    if ( v91 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, 112 * v91, 8);
  }
  else
  {
    a1[11] = v89;
    a1[10] = v88;
    a1[9] = v87;
    a1[8] = v86;
    a1[7] = v85;
    a1[6] = v84;
    v36 = (const __m128i *)v82;
    a1[5] = v83;
    a1[4] = v36;
    a1[3] = v100;
    v37 = v98;
    a1[2] = v99;
    a1[1] = (const __m128i *)v37;
    *a1 = v7;
  }
  return v6;
}
