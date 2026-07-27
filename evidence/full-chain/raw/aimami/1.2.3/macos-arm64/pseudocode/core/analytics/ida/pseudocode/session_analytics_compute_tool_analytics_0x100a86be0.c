// 1.2.3 baseline same-set | __ZN13codexmate_lib4core17session_analytics22compute_tool_analytics17h8a0f4fb3a1a28b54E @ 0x100a86be0 | full-body via IDA decompiler
// 1.2.3 baseline same-set | codexmate_lib::core::session_analytics::compute_tool_analytics | 完整基线逆(decompile+归目录)
__int128 **__fastcall codexmate_lib::core::session_analytics::compute_tool_analytics::h8a0f4fb3a1a28b54(
        __int128 **a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int128 **v6; // r12
  __int128 *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  __int128 *v15; // rdx
  size_t v16; // r13
  int v17; // r14d
  size_t v18; // rcx
  size_t v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r12
  __int64 v22; // r12
  __int64 v23; // rax
  bool v24; // cc
  signed __int64 v25; // rdi
  size_t v26; // rdx
  __int64 v27; // rax
  signed __int64 v28; // rdx
  bool v29; // zf
  const __m128i *v30; // rsi
  const __m128i *v31; // r8
  __int64 v32; // r9
  char v35; // r9
  unsigned __int64 v36; // r11
  unsigned __int64 v37; // rdi
  const __m128i *v38; // rcx
  void *v39; // rsi
  signed __int64 v40; // r13
  void *v41; // rax
  size_t v42; // r8
  size_t v43; // rax
  __int64 v44; // rcx
  __m128i si128; // xmm5
  __m128i v46; // xmm6
  __m128i v47; // xmm7
  __m128i v48; // xmm0
  __m128i v49; // xmm1
  __m128i v50; // xmm2
  __m128i v51; // xmm3
  size_t v52; // rcx
  __m128i v53; // xmm3
  __m128i v54; // xmm4
  __m128i v55; // xmm5
  __m128i v56; // xmm0
  __m128i v57; // xmm1
  __int64 v58; // r11
  char v60; // al
  char v61; // al
  size_t v62; // rcx
  __int64 v63; // rcx
  size_t v64; // rcx
  __int64 v65; // rdi
  const __m128i *v66; // rax
  unsigned __int64 v67; // r15
  __int64 v68; // rsi
  int v69; // ecx
  const __m128i *v70; // rdi
  __int64 i64; // r8
  unsigned __int64 i; // r9
  int v75; // r10d
  __int64 v76; // rdi
  __int64 v77; // r9
  __int64 v78; // r9
  size_t v79; // r15
  unsigned __int64 v80; // r12
  size_t v81; // rax
  size_t v82; // rbx
  size_t v83; // r13
  unsigned __int64 v84; // rbx
  unsigned __int64 v85; // rbx
  _QWORD *v86; // r12
  __int64 v87; // rsi
  _QWORD v89[6]; // [rsp+8h] [rbp-178h] BYREF
  __int16 v90; // [rsp+38h] [rbp-148h]
  unsigned __int64 v91; // [rsp+40h] [rbp-140h]
  _QWORD v92[3]; // [rsp+48h] [rbp-138h] BYREF
  __int128 *v93; // [rsp+60h] [rbp-120h] BYREF
  __int64 v94; // [rsp+68h] [rbp-118h]
  size_t v95; // [rsp+70h] [rbp-110h]
  unsigned __int64 v96; // [rsp+78h] [rbp-108h]
  __int64 v97; // [rsp+80h] [rbp-100h]
  __int128 *v98; // [rsp+88h] [rbp-F8h]
  __int128 *v99; // [rsp+90h] [rbp-F0h]
  __int128 *v100; // [rsp+98h] [rbp-E8h]
  __int128 *v101; // [rsp+A0h] [rbp-E0h]
  __int128 *v102; // [rsp+A8h] [rbp-D8h]
  __int128 *v103; // [rsp+B0h] [rbp-D0h]
  __int128 *v104; // [rsp+B8h] [rbp-C8h]
  unsigned __int64 v105; // [rsp+C0h] [rbp-C0h]
  __int128 **v106; // [rsp+C8h] [rbp-B8h]
  size_t v107; // [rsp+D0h] [rbp-B0h]
  size_t v108; // [rsp+D8h] [rbp-A8h]
  __m128 v109; // [rsp+E0h] [rbp-A0h] BYREF
  size_t v110; // [rsp+F0h] [rbp-90h] BYREF
  size_t v111; // [rsp+F8h] [rbp-88h]
  unsigned __int64 v112; // [rsp+100h] [rbp-80h]
  __int64 v113; // [rsp+108h] [rbp-78h]
  size_t v114; // [rsp+110h] [rbp-70h]
  size_t v115; // [rsp+118h] [rbp-68h] BYREF
  size_t v116; // [rsp+120h] [rbp-60h]
  unsigned __int64 v117; // [rsp+128h] [rbp-58h]
  const __m128i **v118; // [rsp+130h] [rbp-50h]
  unsigned __int64 v119; // [rsp+138h] [rbp-48h]
  void *__src; // [rsp+140h] [rbp-40h]
  char v121; // [rsp+14Fh] [rbp-31h] BYREF
  size_t __n; // [rsp+150h] [rbp-30h]

  v6 = a1;
  codexmate_lib::core::session_analytics::parse_all_sessions::h61d984ccd4ee9321(&v93, a2, a3, a4);
  v7 = v93;
  v115 = v94;
  v116 = v95;
  v117 = v96;
  if ( v93 != (__int128 *)11 )
  {
    a1[11] = v104;
    a1[10] = v103;
    a1[9] = v102;
    a1[8] = v101;
    a1[7] = v100;
    a1[6] = v99;
    v63 = v97;
    a1[5] = v98;
    a1[4] = (__int128 *)v63;
    a1[3] = (__int128 *)v117;
    v64 = v115;
    a1[2] = (__int128 *)v116;
    a1[1] = (__int128 *)v64;
    *a1 = v7;
    return v6;
  }
  v110 = v115;
  v111 = v116;
  v112 = v117;
  v8 = a4;
  v9 = codexmate_lib::core::session_analytics::range_to_cutoff::hbe9b944a87b55264(a3, a4);
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
  v13 = v10;
  if ( *(_BYTE *)(v10 + 16) == 1 )
  {
    v14 = *(_QWORD *)v10;
    v15 = *(__int128 **)(v13 + 8);
  }
  else
  {
    v14 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            v8,
            v11,
            v12);
    *(_QWORD *)v13 = v14;
    *(_QWORD *)(v13 + 8) = v15;
    *(_BYTE *)(v13 + 16) = 1;
  }
  *(_QWORD *)v13 = v14 + 1;
  v96 = 0;
  v95 = 0;
  v94 = 0;
  v93 = &xmmword_1015FBEC0;
  v97 = v14;
  v98 = v15;
  v16 = v111;
  v17 = 0;
  v106 = a1;
  v107 = v111;
  if ( v112 )
  {
    v18 = v111 + 112 * v112;
    v109 = 0;
    v105 = 0x8000000000000000LL;
    v19 = v111;
    v108 = v18;
    v113 = v9;
    do
    {
      v20 = *(_QWORD *)(v19 + 56);
      v21 = *(_QWORD *)(v19 + 64);
      v114 = v19 + 112;
      v22 = v20 + 32 * v21;
LABEL_8:
      v23 = v20;
      while ( v23 != v22 )
      {
        v20 = v23 + 32;
        v24 = *(_QWORD *)(v23 + 24) < v9;
        v23 += 32;
        if ( !v24 )
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v92, v20 - 32);
          v25 = (signed __int64)&v115;
          hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::h01c540736c64bb01(
            &v115,
            &v93,
            v92);
          v26 = v115;
          v27 = v116;
          if ( v115 == v105 )
          {
            v9 = v113;
            ++*(_DWORD *)(v116 - 8);
            v28 = *(_QWORD *)(v20 - 16);
            v29 = v28 == 0;
            if ( v28 >= 0 )
              goto LABEL_18;
LABEL_49:
            v65 = 0;
LABEL_50:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v65, v16);
          }
          v30 = *v118;
          __n = (size_t)v118;
          v31 = v118[1];
          v32 = v119 & (unsigned __int64)v31;
          _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v30
                                                                                 + (v119 & (unsigned __int64)v31))));
          v9 = v113;
          if ( !(_DWORD)_R10 )
          {
            v58 = 16;
            do
            {
              v32 = (unsigned __int64)v31 & (v58 + v32);
              _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v30 + v32)));
              v58 += 16;
            }
            while ( !(_DWORD)_R10 );
          }
          __asm { tzcnt   r10d, r10d }
          _R10 = (unsigned __int64)v31 & (v32 + _R10);
          v35 = v30->i8[_R10];
          if ( v35 >= 0 )
          {
            _R9D = _mm_movemask_epi8(_mm_load_si128(v30));
            __asm { tzcnt   r10d, r9d }
            v35 = v30->i8[_R10];
          }
          v36 = v117;
          v37 = v119 >> 57;
          v30->i8[_R10] = v119 >> 57;
          v30[1].i8[(unsigned __int64)v31 & (_R10 - 16)] = v37;
          v38 = &v30[-2 * _R10];
          v25 = v35 & 1;
          v38[-2].i64[0] = v26;
          v38[-2].i64[1] = v27;
          v38[-1].i64[0] = v36;
          v38[-1].i32[2] = 0;
          *(__m128i *)(__n + 16) = _mm_sub_epi64(
                                     _mm_loadu_si128((const __m128i *)(__n + 16)),
                                     _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015FB9F0), v25, 0));
          ++v38[-1].i32[2];
          v28 = *(_QWORD *)(v20 - 16);
          v29 = v28 == 0;
          if ( v28 < 0 )
            goto LABEL_49;
LABEL_18:
          v39 = *(void **)(v20 - 24);
          __n = v28;
          if ( v29 )
          {
            v16 = 1;
            memcpy((void *)1, v39, v28);
          }
          else
          {
            __src = v39;
            v40 = v28;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25, v39);
            v41 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v40, 1);
            if ( !v41 )
            {
              v16 = __n;
              v65 = 1;
              goto LABEL_50;
            }
            v16 = (size_t)v41;
            memcpy(v41, __src, __n);
            v42 = __n;
            if ( __n < 8 )
            {
              v43 = 0;
              goto LABEL_35;
            }
            if ( __n < 0x20 )
            {
              v43 = 0;
              goto LABEL_29;
            }
            v43 = __n & 0x7FFFFFFFFFFFFFE0LL;
            v44 = 0;
            si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980);
            v46 = _mm_load_si128((const __m128i *)&xmmword_1015DC990);
            v47 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0);
            do
            {
              v48 = _mm_loadu_si128((const __m128i *)(v16 + v44));
              v49 = _mm_loadu_si128((const __m128i *)(v16 + v44 + 16));
              v50 = _mm_add_epi8(v48, si128);
              v51 = _mm_add_epi8(v49, si128);
              *(__m128i *)(v16 + v44) = _mm_or_si128(
                                          _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v50, v46), v50), v47),
                                          v48);
              *(__m128i *)(v16 + v44 + 16) = _mm_or_si128(
                                               _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v51, v46), v51), v47),
                                               v49);
              v44 += 32;
            }
            while ( v43 != v44 );
            if ( v42 != v43 )
            {
              if ( (v42 & 0x18) != 0 )
              {
LABEL_29:
                v52 = v43;
                v43 = v42 & 0x7FFFFFFFFFFFFFF8LL;
                v53 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0);
                v54 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0);
                v55 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0);
                do
                {
                  v56 = _mm_loadl_epi64((const __m128i *)(v16 + v52));
                  v57 = _mm_add_epi8(v56, v53);
                  *(_QWORD *)(v16 + v52) = _mm_or_si128(
                                             _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v57, v54), v57), v55),
                                             v56).u64[0];
                  v52 += 8LL;
                }
                while ( v43 != v52 );
                goto LABEL_36;
              }
              do
              {
LABEL_35:
                *(_BYTE *)(v16 + v43) |= 32 * ((unsigned __int8)(*(_BYTE *)(v16 + v43) - 65) < 0x1Au);
                ++v43;
LABEL_36:
                ;
              }
              while ( v42 != v43 );
            }
          }
          v60 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                  "searchqueryresolvefetchtimestamp/payload/timestamp",
                  6u,
                  (void *)v16);
          LOBYTE(__src) = 1;
          if ( v60
            || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                  "queryresolvefetchtimestamp/payload/timestamp",
                                  5u,
                                  (void *)v16)
            || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                  "resolvefetchtimestamp/payload/timestamp",
                                  7u,
                                  (void *)v16)
            || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                  &unk_1015E3B5C,
                                  4u,
                                  (void *)v16)
            || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                  &unk_10167BC30,
                                  4u,
                                  (void *)v16) )
          {
LABEL_44:
            v62 = __n;
          }
          else
          {
            v61 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                    &unk_10167BC34,
                    4u,
                    (void *)v16);
            v62 = __n;
            if ( !v61 )
            {
              LOBYTE(__src) = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                "fetchtimestamp/payload/timestamp",
                                5u,
                                (void *)v16);
              goto LABEL_44;
            }
          }
          if ( v62 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v62, 1);
          v109 = (__m128)_mm_add_epi32(
                           _mm_load_si128((const __m128i *)&v109),
                           _mm_and_si128(
                             _mm_shuffle_epi32(
                               _mm_insert_epi8(
                                 _mm_cvtsi32_si128((unsigned __int8)__src),
                                 (unsigned __int8)__src ^ 1u,
                                 8),
                               232),
                             (__m128i)xmmword_10167B940));
          v18 = v108;
          goto LABEL_8;
        }
      }
      v19 = v114;
    }
    while ( v114 != v18 );
    v66 = (const __m128i *)v93;
    v68 = v94;
    v67 = v96;
  }
  else
  {
    v109 = 0;
    v66 = (const __m128i *)&xmmword_1015FBEC0;
    v67 = 0;
    v68 = 0;
  }
  v69 = ~_mm_movemask_epi8(_mm_load_si128(v66));
  v70 = v66 + 1;
  i64 = (__int64)v66;
  _R10D = v69;
  for ( i = v67; ; --i )
  {
    if ( (_WORD)_R10D )
      goto LABEL_53;
    if ( !i )
      break;
    do
    {
      v75 = _mm_movemask_epi8(_mm_load_si128(v70));
      i64 -= 512;
      ++v70;
    }
    while ( v75 == 0xFFFF );
    _R10D = ~v75;
LABEL_53:
    __asm { tzcnt   ebx, r10d }
    v17 += *(_DWORD *)(i64 - (unsigned int)(32 * _EBX) - 8);
    _R10D &= _R10D - 1;
  }
  v76 = (__int64)v66->i64 + v68 + 1;
  if ( v68 )
  {
    v77 = 32 * v68;
    v68 = 33 * v68 + 49;
    i64 = (__int64)v66[v77 / 0xFFFFFFFFFFFFFFF0LL - 2].i64;
    v78 = 16;
  }
  else
  {
    v78 = 0;
  }
  v89[0] = v78;
  v89[1] = v68;
  v89[2] = i64;
  v89[3] = v66;
  v89[4] = v66 + 1;
  v89[5] = v76;
  v90 = v69;
  v114 = v67;
  v91 = v67;
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h17633dffdb3500c3(
    &v115,
    v89);
  v79 = v116;
  v80 = v117;
  v92[0] = &v121;
  if ( v117 >= 2 )
  {
    if ( v117 >= 0x15 )
    {
      core::slice::sort::stable::driftsort_main::hfabb5e6fc6b1b626(v116, v117, v92);
      v81 = v115;
      v82 = v79 + 32 * v80;
      v83 = v79 + 320;
      goto LABEL_63;
    }
    core::slice::sort::shared::smallsort::insertion_sort_shift_left::h94e084150153dd7b(v116, v117, 1, v92);
    v81 = v115;
    v82 = v79 + 32 * v80;
    if ( v80 - 2 >= 8 )
    {
      v83 = v79 + 320;
      goto LABEL_63;
    }
  }
  else
  {
    v81 = v115;
    v82 = v116 + 32 * v117;
    v83 = v116;
    if ( !v117 )
    {
LABEL_63:
      v84 = v82 - v83;
      if ( v84 )
      {
        __n = v81;
        v85 = v84 >> 5;
        v86 = (_QWORD *)(v83 + 8);
        do
        {
          v87 = *(v86 - 1);
          if ( v87 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v86, v87, 1);
          v86 += 4;
          --v85;
        }
        while ( v85 );
        v82 = v83;
        v81 = __n;
      }
      else
      {
        v82 = v83;
      }
    }
  }
  v6 = v106;
  v106[1] = (__int128 *)v81;
  v6[2] = (__int128 *)v79;
  v6[3] = (__int128 *)((v82 - v79) >> 5);
  *((_DWORD *)v6 + 8) = v17;
  *((_DWORD *)v6 + 9) = v114;
  _mm_storel_ps((double *)v6 + 5, v109);
  *v6 = (__int128 *)11;
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h78df5ffcd006998d(&v110);
  if ( v110 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, 112 * v110, 8);
  return v6;
}
