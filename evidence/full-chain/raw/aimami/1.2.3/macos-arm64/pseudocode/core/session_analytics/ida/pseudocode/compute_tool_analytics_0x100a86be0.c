// __ZN13codexmate_lib4core17session_analytics22compute_tool_analytics @ 0x100a86be0 | 基线 same-set
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

  v6 = a1; /*0x100a86bfa*/
  codexmate_lib::core::session_analytics::parse_all_sessions::h61d984ccd4ee9321(&v93, a2, a3, a4); /*0x100a86c04*/
  v7 = v93; /*0x100a86c09*/
  v115 = v94; /*0x100a86c17*/
  v116 = v95; /*0x100a86c22*/
  v117 = v96; /*0x100a86c2d*/
  if ( v93 != (__int128 *)11 ) /*0x100a86c35*/
  {
    a1[11] = v104; /*0x100a871a4*/
    a1[10] = v103; /*0x100a871b0*/
    a1[9] = v102; /*0x100a871bc*/
    a1[8] = v101; /*0x100a871c8*/
    a1[7] = v100; /*0x100a871d4*/
    a1[6] = v99; /*0x100a871e0*/
    v63 = v97; /*0x100a871e5*/
    a1[5] = v98; /*0x100a871f3*/
    a1[4] = (__int128 *)v63; /*0x100a871f8*/
    a1[3] = (__int128 *)v117; /*0x100a87201*/
    v64 = v115; /*0x100a87206*/
    a1[2] = (__int128 *)v116; /*0x100a8720e*/
    a1[1] = (__int128 *)v64; /*0x100a87213*/
    *a1 = v7; /*0x100a87218*/
    return v6; /*0x100a8721c*/
  }
  v110 = v115; /*0x100a86c43*/
  v111 = v116; /*0x100a86c4a*/
  v112 = v117; /*0x100a86c55*/
  v8 = a4; /*0x100a86c5c*/
  v9 = codexmate_lib::core::session_analytics::range_to_cutoff::hbe9b944a87b55264(a3, a4); /*0x100a86c64*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100a86c6e*/
  v13 = v10; /*0x100a86c70*/
  if ( *(_BYTE *)(v10 + 16) == 1 ) /*0x100a86c77*/
  {
    v14 = *(_QWORD *)v10; /*0x100a86c7d*/
    v15 = *(__int128 **)(v13 + 8); /*0x100a86c80*/
  }
  else
  {
    v14 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x100a8744b*/
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            v8,
            v11,
            v12);
    *(_QWORD *)v13 = v14; /*0x100a87450*/
    *(_QWORD *)(v13 + 8) = v15; /*0x100a87453*/
    *(_BYTE *)(v13 + 16) = 1; /*0x100a87457*/
  }
  *(_QWORD *)v13 = v14 + 1; /*0x100a86c88*/
  v96 = 0; /*0x100a86c92*/
  v95 = 0; /*0x100a86ca0*/
  v94 = 0; /*0x100a86cae*/
  v93 = &xmmword_1015FBEC0; /*0x100a86cbc*/
  v97 = v14; /*0x100a86cc3*/
  v98 = v15; /*0x100a86cca*/
  v16 = v111; /*0x100a86cd1*/
  v17 = 0; /*0x100a86cdc*/
  v106 = a1; /*0x100a86ce2*/
  v107 = v111; /*0x100a86ce9*/
  if ( v112 ) /*0x100a86cf0*/
  {
    v18 = v111 + 112 * v112; /*0x100a86cfa*/
    v109 = 0; /*0x100a86d01*/
    v105 = 0x8000000000000000LL; /*0x100a86d17*/
    v19 = v111; /*0x100a86d1e*/
    v108 = v18; /*0x100a86d21*/
    v113 = v9; /*0x100a86d28*/
    do /*0x100a86d37*/
    {
      v20 = *(_QWORD *)(v19 + 56); /*0x100a86d3d*/
      v21 = *(_QWORD *)(v19 + 64); /*0x100a86d41*/
      v114 = v19 + 112; /*0x100a86d49*/
      v22 = v20 + 32 * v21; /*0x100a86d51*/
LABEL_8:
      v23 = v20; /*0x100a86d54*/
      while ( v23 != v22 ) /*0x100a86d63*/
      {
        v20 = v23 + 32; /*0x100a86d65*/
        v24 = *(_QWORD *)(v23 + 24) < v9; /*0x100a86d69*/
        v23 += 32; /*0x100a86d6d*/
        if ( !v24 ) /*0x100a86d70*/
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v92, v20 - 32); /*0x100a86d80*/
          v25 = (signed __int64)&v115; /*0x100a86d85*/
          hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::h01c540736c64bb01( /*0x100a86d93*/
            &v115,
            &v93,
            v92);
          v26 = v115; /*0x100a86d98*/
          v27 = v116; /*0x100a86d9c*/
          if ( v115 == v105 ) /*0x100a86da7*/
          {
            v9 = v113; /*0x100a86da9*/
            ++*(_DWORD *)(v116 - 8); /*0x100a86dad*/
            v28 = *(_QWORD *)(v20 - 16); /*0x100a86db0*/
            v29 = v28 == 0; /*0x100a86db4*/
            if ( v28 >= 0 ) /*0x100a86db7*/
              goto LABEL_18; /*0x100a86db7*/
LABEL_49:
            v65 = 0; /*0x100a87221*/
LABEL_50:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v65, v16); /*0x100a87223*/
          }
          v30 = *v118; /*0x100a86dd8*/
          __n = (size_t)v118; /*0x100a86ddb*/
          v31 = v118[1]; /*0x100a86ddf*/
          v32 = v119 & (unsigned __int64)v31; /*0x100a86de6*/
          _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v30 /*0x100a86def*/
                                                                                 + (v119 & (unsigned __int64)v31))));
          v9 = v113; /*0x100a86df7*/
          if ( !(_DWORD)_R10 ) /*0x100a86dfb*/
          {
            v58 = 16; /*0x100a87005*/
            do /*0x100a87023*/
            {
              v32 = (unsigned __int64)v31 & (v58 + v32); /*0x100a8700e*/
              _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v30 + v32))); /*0x100a87017*/
              v58 += 16; /*0x100a8701c*/
            }
            while ( !(_DWORD)_R10 ); /*0x100a87023*/
          }
          __asm { tzcnt r10d, r10d } /*0x100a86e01*/
          _R10 = (unsigned __int64)v31 & (v32 + _R10); /*0x100a86e09*/
          v35 = v30->i8[_R10]; /*0x100a86e0c*/
          if ( v35 >= 0 ) /*0x100a86e14*/
          {
            _R9D = _mm_movemask_epi8(_mm_load_si128(v30)); /*0x100a8702f*/
            __asm { tzcnt r10d, r9d } /*0x100a87034*/
            v35 = v30->i8[_R10]; /*0x100a87039*/
          }
          v36 = v117; /*0x100a86e1a*/
          v37 = v119 >> 57; /*0x100a86e1e*/
          v30->i8[_R10] = v119 >> 57; /*0x100a86e29*/
          v30[1].i8[(unsigned __int64)v31 & (_R10 - 16)] = v37; /*0x100a86e2d*/
          v38 = &v30[-2 * _R10]; /*0x100a86e39*/
          v25 = v35 & 1; /*0x100a86e40*/
          v38[-2].i64[0] = v26; /*0x100a86e47*/
          v38[-2].i64[1] = v27; /*0x100a86e4c*/
          v38[-1].i64[0] = v36; /*0x100a86e50*/
          v38[-1].i32[2] = 0; /*0x100a86e54*/
          *(__m128i *)(__n + 16) = _mm_sub_epi64( /*0x100a86e77*/
                                     _mm_loadu_si128((const __m128i *)(__n + 16)),
                                     _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015FB9F0), v25, 0));
          ++v38[-1].i32[2]; /*0x100a86e7f*/
          v28 = *(_QWORD *)(v20 - 16); /*0x100a86e82*/
          v29 = v28 == 0; /*0x100a86e86*/
          if ( v28 < 0 ) /*0x100a86e89*/
            goto LABEL_49; /*0x100a86e89*/
LABEL_18:
          v39 = *(void **)(v20 - 24); /*0x100a86e8f*/
          __n = v28; /*0x100a86e93*/
          if ( v29 ) /*0x100a86e97*/
          {
            v16 = 1; /*0x100a86edf*/
            memcpy((void *)1, v39, v28); /*0x100a86eea*/
          }
          else
          {
            __src = v39; /*0x100a86e99*/
            v40 = v28; /*0x100a86e9d*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25, v39); /*0x100a86ea0*/
            v41 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v40, 1); /*0x100a86ead*/
            if ( !v41 ) /*0x100a86eb5*/
            {
              v16 = __n; /*0x100a874a6*/
              v65 = 1; /*0x100a874aa*/
              goto LABEL_50; /*0x100a874af*/
            }
            v16 = (size_t)v41; /*0x100a86ebb*/
            memcpy(v41, __src, __n); /*0x100a86ec9*/
            v42 = __n; /*0x100a86ece*/
            if ( __n < 8 ) /*0x100a86ed6*/
            {
              v43 = 0; /*0x100a86ed8*/
              goto LABEL_35; /*0x100a86eda*/
            }
            if ( __n < 0x20 ) /*0x100a86efc*/
            {
              v43 = 0; /*0x100a86efe*/
              goto LABEL_29; /*0x100a86f00*/
            }
            v43 = __n & 0x7FFFFFFFFFFFFFE0LL; /*0x100a86f12*/
            v44 = 0; /*0x100a86f15*/
            si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x100a86f17*/
            v46 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x100a86f1f*/
            v47 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x100a86f27*/
            do /*0x100a86f8b*/
            {
              v48 = _mm_loadu_si128((const __m128i *)(v16 + v44)); /*0x100a86f30*/
              v49 = _mm_loadu_si128((const __m128i *)(v16 + v44 + 16)); /*0x100a86f37*/
              v50 = _mm_add_epi8(v48, si128); /*0x100a86f42*/
              v51 = _mm_add_epi8(v49, si128); /*0x100a86f4a*/
              *(__m128i *)(v16 + v44) = _mm_or_si128( /*0x100a86f76*/
                                          _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v50, v46), v50), v47),
                                          v48);
              *(__m128i *)(v16 + v44 + 16) = _mm_or_si128( /*0x100a86f7d*/
                                               _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v51, v46), v51), v47),
                                               v49);
              v44 += 32; /*0x100a86f84*/
            }
            while ( v43 != v44 ); /*0x100a86f8b*/
            if ( v42 != v43 ) /*0x100a86f90*/
            {
              if ( (v42 & 0x18) != 0 ) /*0x100a86f9a*/
              {
LABEL_29:
                v52 = v43; /*0x100a86fa0*/
                v43 = v42 & 0x7FFFFFFFFFFFFFF8LL; /*0x100a86fb1*/
                v53 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x100a86fb4*/
                v54 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x100a86fbc*/
                v55 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x100a86fc4*/
                do /*0x100a87001*/
                {
                  v56 = _mm_loadl_epi64((const __m128i *)(v16 + v52)); /*0x100a86fd0*/
                  v57 = _mm_add_epi8(v56, v53); /*0x100a86fdb*/
                  *(_QWORD *)(v16 + v52) = _mm_or_si128( /*0x100a86ff3*/
                                             _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v57, v54), v57), v55),
                                             v56).u64[0];
                  v52 += 8LL; /*0x100a86ffa*/
                }
                while ( v43 != v52 ); /*0x100a87001*/
                goto LABEL_36; /*0x100a87001*/
              }
              do /*0x100a8706f*/
              {
LABEL_35:
                *(_BYTE *)(v16 + v43) |= 32 * ((unsigned __int8)(*(_BYTE *)(v16 + v43) - 65) < 0x1Au); /*0x100a87050*/
                ++v43; /*0x100a87069*/
LABEL_36:
                ; /*0x100a8706c*/
              }
              while ( v42 != v43 ); /*0x100a8706f*/
            }
          }
          v60 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100a87083*/
                  "searchqueryresolvefetchtimestamp/payload/timestamp",
                  6u,
                  (void *)v16);
          LOBYTE(__src) = 1; /*0x100a87088*/
          if ( v60 /*0x100a870ff*/
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
            v62 = __n; /*0x100a87140*/
          }
          else
          {
            v61 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100a8711b*/
                    &unk_10167BC34,
                    4u,
                    (void *)v16);
            v62 = __n; /*0x100a87122*/
            if ( !v61 ) /*0x100a87126*/
            {
              LOBYTE(__src) = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100a8713c*/
                                "fetchtimestamp/payload/timestamp",
                                5u,
                                (void *)v16);
              goto LABEL_44; /*0x100a8713c*/
            }
          }
          if ( v62 ) /*0x100a87147*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v62, 1); /*0x100a87154*/
          v109 = (__m128)_mm_add_epi32( /*0x100a87189*/
                           _mm_load_si128((const __m128i *)&v109),
                           _mm_and_si128(
                             _mm_shuffle_epi32(
                               _mm_insert_epi8(
                                 _mm_cvtsi32_si128((unsigned __int8)__src),
                                 (unsigned __int8)__src ^ 1u,
                                 8),
                               232),
                             (__m128i)xmmword_10167B940));
          v18 = v108; /*0x100a87191*/
          goto LABEL_8; /*0x100a87198*/
        }
      }
      v19 = v114; /*0x100a86d30*/
    }
    while ( v114 != v18 ); /*0x100a86d37*/
    v66 = (const __m128i *)v93; /*0x100a87431*/
    v68 = v94; /*0x100a87438*/
    v67 = v96; /*0x100a8743f*/
  }
  else
  {
    v109 = 0; /*0x100a87231*/
    v66 = (const __m128i *)&xmmword_1015FBEC0; /*0x100a87239*/
    v67 = 0; /*0x100a87240*/
    v68 = 0; /*0x100a87243*/
  }
  v69 = ~_mm_movemask_epi8(_mm_load_si128(v66)); /*0x100a8724d*/
  v70 = v66 + 1; /*0x100a87253*/
  i64 = (__int64)v66; /*0x100a87256*/
  _R10D = v69; /*0x100a87259*/
  for ( i = v67; ; --i ) /*0x100a8725c*/
  {
    if ( (_WORD)_R10D ) /*0x100a87293*/
      goto LABEL_53; /*0x100a87293*/
    if ( !i ) /*0x100a87298*/
      break; /*0x100a87298*/
    do /*0x100a872bb*/
    {
      v75 = _mm_movemask_epi8(_mm_load_si128(v70)); /*0x100a872a4*/
      i64 -= 512; /*0x100a872a9*/
      ++v70; /*0x100a872b0*/
    }
    while ( v75 == 0xFFFF ); /*0x100a872bb*/
    _R10D = ~v75; /*0x100a872bd*/
LABEL_53:
    __asm { tzcnt ebx, r10d } /*0x100a87270*/
    v17 += *(_DWORD *)(i64 - (unsigned int)(32 * _EBX) - 8); /*0x100a87285*/
    _R10D &= _R10D - 1; /*0x100a8728c*/
  }
  v76 = (__int64)v66->i64 + v68 + 1; /*0x100a872c2*/
  if ( v68 ) /*0x100a872ca*/
  {
    v77 = 32 * v68; /*0x100a872cf*/
    v68 = 33 * v68 + 49; /*0x100a872d3*/
    i64 = (__int64)v66[v77 / 0xFFFFFFFFFFFFFFF0LL - 2].i64; /*0x100a872de*/
    v78 = 16; /*0x100a872e2*/
  }
  else
  {
    v78 = 0; /*0x100a872ea*/
  }
  v89[0] = v78; /*0x100a872ed*/
  v89[1] = v68; /*0x100a872f4*/
  v89[2] = i64; /*0x100a872fb*/
  v89[3] = v66; /*0x100a87302*/
  v89[4] = v66 + 1; /*0x100a87309*/
  v89[5] = v76; /*0x100a87310*/
  v90 = v69; /*0x100a87317*/
  v114 = v67; /*0x100a8731e*/
  v91 = v67; /*0x100a87322*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h17633dffdb3500c3( /*0x100a87334*/
    &v115,
    v89);
  v79 = v116; /*0x100a87339*/
  v80 = v117; /*0x100a8733d*/
  v92[0] = &v121; /*0x100a87345*/
  if ( v117 >= 2 ) /*0x100a87350*/
  {
    if ( v117 >= 0x15 ) /*0x100a87465*/
    {
      core::slice::sort::stable::driftsort_main::hfabb5e6fc6b1b626(v116, v117, v92); /*0x100a874c1*/
      v81 = v115; /*0x100a874c6*/
      v82 = v79 + 32 * v80; /*0x100a874d1*/
      v83 = v79 + 320; /*0x100a874d4*/
      goto LABEL_63; /*0x100a874db*/
    }
    core::slice::sort::shared::smallsort::insertion_sort_shift_left::h94e084150153dd7b(v116, v117, 1, v92); /*0x100a87479*/
    v81 = v115; /*0x100a8747e*/
    v82 = v79 + 32 * v80; /*0x100a87489*/
    if ( v80 - 2 >= 8 ) /*0x100a87494*/
    {
      v83 = v79 + 320; /*0x100a8749a*/
      goto LABEL_63; /*0x100a874a1*/
    }
  }
  else
  {
    v81 = v115; /*0x100a87356*/
    v82 = v116 + 32 * v117; /*0x100a87361*/
    v83 = v116; /*0x100a87364*/
    if ( !v117 ) /*0x100a8736a*/
    {
LABEL_63:
      v84 = v82 - v83; /*0x100a8736c*/
      if ( v84 ) /*0x100a8736f*/
      {
        __n = v81; /*0x100a87371*/
        v85 = v84 >> 5; /*0x100a87375*/
        v86 = (_QWORD *)(v83 + 8); /*0x100a87379*/
        do /*0x100a87387*/
        {
          v87 = *(v86 - 1); /*0x100a87389*/
          if ( v87 ) /*0x100a87391*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v86, v87, 1); /*0x100a8739c*/
          v86 += 4; /*0x100a87380*/
          --v85; /*0x100a87384*/
        }
        while ( v85 ); /*0x100a87387*/
        v82 = v83; /*0x100a873a3*/
        v81 = __n; /*0x100a873a6*/
      }
      else
      {
        v82 = v83; /*0x100a873ac*/
      }
    }
  }
  v6 = v106; /*0x100a873b6*/
  v106[1] = (__int128 *)v81; /*0x100a873bd*/
  v6[2] = (__int128 *)v79; /*0x100a873c2*/
  v6[3] = (__int128 *)((v82 - v79) >> 5); /*0x100a873c7*/
  *((_DWORD *)v6 + 8) = v17; /*0x100a873cc*/
  *((_DWORD *)v6 + 9) = v114; /*0x100a873d5*/
  _mm_storel_ps((double *)v6 + 5, v109); /*0x100a873e1*/
  *v6 = (__int128 *)11; /*0x100a873e7*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h78df5ffcd006998d(&v110); /*0x100a873f6*/
  if ( v110 ) /*0x100a8740c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, 112 * v110, 8); /*0x100a87417*/
  return v6; /*0x100a8741f*/
}