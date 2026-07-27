// __ZN13codexmate_lib8platform7process28is_protected_process_command @ 0x100364f90 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::process::is_protected_process_command::h47b2ccc8c4a05c1c(
        _BYTE *a1,
        size_t a2)
{
  __int64 v3; // r15
  __int64 v4; // rax
  _BYTE *v5; // r12
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rdx
  __m128i v9; // xmm2
  __m128i v10; // xmm3
  __m128i v11; // xmm4
  __m128i v12; // xmm5
  __int64 v13; // rdx
  __m128i si128; // xmm1
  __m128i v15; // xmm2
  __m128i v16; // xmm3
  char v17; // dl
  void *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __m128i v23; // xmm2
  __m128i v24; // xmm3
  __m128i v25; // xmm4
  __m128i v26; // xmm5
  __m128i v27; // xmm6
  __int64 v28; // rdx
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  __m128i v31; // xmm2
  __m128i v32; // xmm3
  __m128i v33; // xmm4
  __int64 v34; // rax
  signed __int64 v35; // rdx
  size_t v36; // r14
  __int64 v37; // r13
  size_t v38; // rdi
  __int64 v39; // rax
  const void *v40; // r12
  __int64 v41; // rcx
  __int64 v42; // r14
  size_t v43; // r13
  __int64 v44; // rsi
  __m128i v45; // xmm2
  __m128i v46; // xmm3
  __m128i v47; // xmm4
  __m128i v48; // xmm5
  __m128i v49; // xmm1
  __m128i v50; // xmm2
  __m128i v51; // xmm3
  __int64 v52; // rdx
  char v53; // r8
  char v54; // si
  char v55; // si
  char v56; // si
  void *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  __m128i v60; // xmm0
  __m128i v61; // xmm1
  __m128i v62; // xmm2
  __m128i v63; // xmm3
  __m128i v64; // xmm4
  __m128i v65; // xmm5
  __m128i v66; // xmm6
  __int64 v67; // rdx
  __m128i v68; // xmm0
  __m128i v69; // xmm1
  __m128i v70; // xmm2
  __m128i v71; // xmm3
  __m128i v72; // xmm4
  __int64 v73; // r13
  size_t v74; // rdx
  size_t v75; // r12
  __int64 v77; // [rsp+8h] [rbp-88h]
  __int64 v78; // [rsp+10h] [rbp-80h] BYREF
  size_t v79; // [rsp+18h] [rbp-78h]
  _BYTE *v80; // [rsp+20h] [rbp-70h]
  size_t v81; // [rsp+28h] [rbp-68h]
  _BYTE *v82; // [rsp+30h] [rbp-60h]
  char *v83; // [rsp+38h] [rbp-58h]
  __int64 v84; // [rsp+40h] [rbp-50h]
  __int16 v85; // [rsp+48h] [rbp-48h]
  __int16 v86; // [rsp+50h] [rbp-40h]
  void *__s1; // [rsp+58h] [rbp-38h]
  size_t __n; // [rsp+60h] [rbp-30h]

  if ( (a2 & 0x8000000000000000LL) != 0LL ) /*0x100364fab*/
  {
    v3 = 0; /*0x100364fad*/
    goto LABEL_3; /*0x100364fad*/
  }
  if ( !a2 ) /*0x100364fbe*/
  {
    v7 = 1; /*0x100364fed*/
    goto LABEL_37; /*0x100364ff3*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100364fc0*/
  v3 = 1; /*0x100364fc5*/
  v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a2, 1); /*0x100364fd3*/
  if ( !v4 ) /*0x100364fdb*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v3, a2); /*0x100364fb0*/
  v5 = (_BYTE *)v4; /*0x100364fdd*/
  if ( a2 <= 7 ) /*0x100364fe4*/
  {
    v6 = 0; /*0x100364fe6*/
    goto LABEL_18; /*0x100364fe8*/
  }
  if ( a2 < 0x20 ) /*0x100365006*/
  {
    v6 = 0; /*0x100365008*/
LABEL_15:
    v13 = v6; /*0x10036507b*/
    v6 = a2 & 0x7FFFFFFFFFFFFFF8LL; /*0x100365085*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_1015E36D0); /*0x100365088*/
    v15 = _mm_load_si128((const __m128i *)&xmmword_1015E36E0); /*0x100365090*/
    do /*0x1003650c0*/
    {
      v16 = _mm_loadl_epi64((const __m128i *)&a1[v13]); /*0x1003650a0*/
      *(_QWORD *)&v5[v13] = _mm_blendv_epi8(v16, v15, _mm_cmpeq_epi8(v16, si128)).u64[0]; /*0x1003650b3*/
      v13 += 8; /*0x1003650b9*/
    }
    while ( v6 != v13 ); /*0x1003650c0*/
    if ( a2 == v6 ) /*0x1003650c5*/
      goto LABEL_21; /*0x1003650c5*/
    goto LABEL_18; /*0x1003650c5*/
  }
  v6 = a2 & 0x7FFFFFFFFFFFFFE0LL; /*0x10036500f*/
  v8 = 0; /*0x100365012*/
  v9 = _mm_load_si128((const __m128i *)&xmmword_1015E36B0); /*0x100365014*/
  v10 = _mm_load_si128((const __m128i *)&xmmword_1015E36C0); /*0x10036501c*/
  do /*0x10036506f*/
  {
    v11 = _mm_loadu_si128((const __m128i *)&a1[v8]); /*0x100365030*/
    v12 = _mm_loadu_si128((const __m128i *)&a1[v8 + 16]); /*0x100365036*/
    *(__m128i *)&v5[v8] = _mm_blendv_epi8(v11, v10, _mm_cmpeq_epi8(v11, v9)); /*0x10036505b*/
    *(__m128i *)&v5[v8 + 16] = _mm_blendv_epi8(v12, v10, _mm_cmpeq_epi8(v12, v9)); /*0x100365061*/
    v8 += 32; /*0x100365068*/
  }
  while ( v6 != v8 ); /*0x10036506f*/
  if ( a2 == v6 ) /*0x100365074*/
    goto LABEL_21; /*0x100365074*/
  if ( (a2 & 0x18) != 0 ) /*0x100365079*/
    goto LABEL_15; /*0x100365079*/
  do /*0x1003650e5*/
  {
LABEL_18:
    v17 = a1[v6]; /*0x1003650d0*/
    if ( v17 == 92 ) /*0x1003650d8*/
      v17 = 47; /*0x1003650d8*/
    v5[v6++] = v17; /*0x1003650db*/
  }
  while ( a2 != v6 ); /*0x1003650e5*/
LABEL_21:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, 1); /*0x1003650e7*/
  v18 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a2, 1); /*0x1003650f4*/
  if ( !v18 ) /*0x1003650fc*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a2); /*0x10036522b*/
  v7 = (__int64)v18; /*0x100365102*/
  memcpy(v18, v5, a2); /*0x10036510e*/
  if ( a2 < 8 ) /*0x100365117*/
  {
    v19 = 0; /*0x100365119*/
    do /*0x10036525c*/
    {
LABEL_34:
      *(_BYTE *)(v7 + v19) |= 32 * ((unsigned __int8)(*(_BYTE *)(v7 + v19) - 65) < 0x1Au); /*0x10036523f*/
      ++v19; /*0x100365256*/
LABEL_35:
      ; /*0x100365259*/
    }
    while ( a2 != v19 ); /*0x10036525c*/
    goto LABEL_36; /*0x10036525c*/
  }
  if ( a2 < 0x20 ) /*0x10036512e*/
  {
    v19 = 0; /*0x100365130*/
    goto LABEL_30; /*0x100365132*/
  }
  v19 = a2 & 0x7FFFFFFFFFFFFFE0LL; /*0x10036513a*/
  v20 = 0; /*0x10036513d*/
  v21 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x10036513f*/
  v22 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x100365147*/
  v23 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x10036514f*/
  do /*0x1003651b9*/
  {
    v24 = _mm_loadu_si128((const __m128i *)(v7 + v20)); /*0x100365160*/
    v25 = _mm_loadu_si128((const __m128i *)(v7 + v20 + 16)); /*0x100365166*/
    v26 = _mm_add_epi8(v24, v21); /*0x100365171*/
    v27 = _mm_add_epi8(v25, v21); /*0x100365179*/
    *(__m128i *)(v7 + v20) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v26, v22), v26), v23), v24); /*0x1003651a5*/
    *(__m128i *)(v7 + v20 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v27, v22), v27), v23), v25); /*0x1003651ab*/
    v20 += 32; /*0x1003651b2*/
  }
  while ( v19 != v20 ); /*0x1003651b9*/
  if ( a2 != v19 ) /*0x1003651be*/
  {
    if ( (a2 & 0x18) == 0 ) /*0x1003651c7*/
      goto LABEL_34; /*0x1003651c7*/
LABEL_30:
    v28 = v19; /*0x1003651c9*/
    v19 = a2 & 0x7FFFFFFFFFFFFFF8LL; /*0x1003651d3*/
    v29 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x1003651d6*/
    v30 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x1003651de*/
    v31 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x1003651e6*/
    do /*0x10036521f*/
    {
      v32 = _mm_loadl_epi64((const __m128i *)(v7 + v28)); /*0x1003651f0*/
      v33 = _mm_add_epi8(v32, v29); /*0x1003651fa*/
      *(_QWORD *)(v7 + v28) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v33, v30), v33), v31), v32).u64[0]; /*0x100365212*/
      v28 += 8; /*0x100365218*/
    }
    while ( v19 != v28 ); /*0x10036521f*/
    goto LABEL_35; /*0x10036521f*/
  }
LABEL_36:
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, a2, 1); /*0x10036525e*/
LABEL_37:
  v78 = 0; /*0x10036526e*/
  v79 = a2; /*0x100365276*/
  v80 = a1; /*0x10036527a*/
  v81 = a2; /*0x10036527e*/
  v82 = a1; /*0x100365282*/
  v83 = &a1[a2]; /*0x100365286*/
  v84 = 0; /*0x10036528a*/
  v85 = 1; /*0x100365292*/
  v34 = core::iter::traits::iterator::Iterator::try_fold::h476eff2b16756c7b(&v78); /*0x10036529c*/
  if ( !v34 ) /*0x1003652a4*/
  {
    v35 = a2; /*0x1003652a4*/
    v34 = (__int64)a1; /*0x1003652a8*/
  }
  if ( v35 < 0 ) /*0x1003652af*/
  {
    v36 = v35; /*0x1003652b1*/
    v37 = 0; /*0x1003652b4*/
    goto LABEL_41; /*0x1003652b4*/
  }
  __s1 = a1; /*0x1003652c7*/
  __n = v35; /*0x1003652cb*/
  if ( !v35 ) /*0x1003652cf*/
  {
    v42 = 1; /*0x100365322*/
    v43 = 0; /*0x100365328*/
    goto LABEL_87; /*0x10036532c*/
  }
  v77 = v34; /*0x1003652d1*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v78, a2); /*0x1003652d8*/
  v37 = 1; /*0x1003652dd*/
  v36 = __n; /*0x1003652e8*/
  v38 = __n; /*0x1003652ec*/
  v39 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x1003652ef*/
  if ( !v39 ) /*0x1003652f7*/
LABEL_41:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v37, v36); /*0x1003652b7*/
  v40 = (const void *)v39; /*0x1003652f9*/
  if ( (unsigned __int64)(v39 - v77) < 0x20 || v36 < 8 ) /*0x100365300*/
  {
    v41 = 0; /*0x10036531b*/
    goto LABEL_56; /*0x10036531d*/
  }
  if ( v36 < 0x20 ) /*0x10036533f*/
  {
    v41 = 0; /*0x100365341*/
LABEL_53:
    v44 = v41; /*0x1003653ae*/
    v41 = v36 & 0x7FFFFFFFFFFFFFF8LL; /*0x1003653b8*/
    v49 = _mm_load_si128((const __m128i *)&xmmword_1015E36D0); /*0x1003653bb*/
    v50 = _mm_load_si128((const __m128i *)&xmmword_1015E36E0); /*0x1003653c3*/
    do /*0x1003653ef*/
    {
      v51 = _mm_loadl_epi64((const __m128i *)(v77 + v44)); /*0x1003653d0*/
      *(_QWORD *)(v39 + v44) = _mm_blendv_epi8(v51, v50, _mm_cmpeq_epi8(v51, v49)).u64[0]; /*0x1003653e2*/
      v44 += 8; /*0x1003653e8*/
    }
    while ( v41 != v44 ); /*0x1003653ef*/
    if ( v36 == v41 ) /*0x1003653f4*/
      goto LABEL_71; /*0x1003653f4*/
    goto LABEL_56; /*0x1003653f4*/
  }
  v41 = v36 & 0x7FFFFFFFFFFFFFE0LL; /*0x100365348*/
  v44 = 0; /*0x10036534b*/
  v45 = _mm_load_si128((const __m128i *)&xmmword_1015E36B0); /*0x10036534d*/
  v46 = _mm_load_si128((const __m128i *)&xmmword_1015E36C0); /*0x100365355*/
  do /*0x10036539d*/
  {
    v47 = _mm_loadu_si128((const __m128i *)(v77 + v44)); /*0x100365360*/
    v48 = _mm_loadu_si128((const __m128i *)(v77 + v44 + 16)); /*0x100365365*/
    *(__m128i *)(v39 + v44) = _mm_blendv_epi8(v47, v46, _mm_cmpeq_epi8(v47, v45)); /*0x100365389*/
    *(__m128i *)(v39 + v44 + 16) = _mm_blendv_epi8(v48, v46, _mm_cmpeq_epi8(v48, v45)); /*0x10036538f*/
    v44 += 32; /*0x100365396*/
  }
  while ( v41 != v44 ); /*0x10036539d*/
  if ( v36 == v41 ) /*0x1003653a2*/
    goto LABEL_71; /*0x1003653a2*/
  if ( (v36 & 0x18) != 0 ) /*0x1003653ac*/
    goto LABEL_53; /*0x1003653ac*/
LABEL_56:
  v52 = v41; /*0x1003653fa*/
  v44 = v36 & 3; /*0x100365400*/
  if ( (v36 & 3) != 0 ) /*0x100365404*/
  {
    v38 = 47; /*0x100365406*/
    v52 = v41; /*0x10036540b*/
    do /*0x100365427*/
    {
      v53 = *(_BYTE *)(v77 + v52); /*0x100365410*/
      if ( v53 == 92 ) /*0x100365419*/
        v53 = 47; /*0x100365419*/
      *(_BYTE *)(v39 + v52++) = v53; /*0x10036541d*/
      --v44; /*0x100365424*/
    }
    while ( v44 ); /*0x100365427*/
  }
  if ( v41 - v36 <= 0xFFFFFFFFFFFFFFFCLL ) /*0x100365430*/
  {
    do /*0x100365489*/
    {
      v54 = *(_BYTE *)(v77 + v52); /*0x100365440*/
      if ( v54 == 92 ) /*0x100365448*/
        v54 = 47; /*0x100365448*/
      *(_BYTE *)(v39 + v52) = v54; /*0x10036544b*/
      v55 = *(_BYTE *)(v77 + v52 + 1); /*0x10036544f*/
      if ( v55 == 92 ) /*0x100365458*/
        v55 = 47; /*0x100365458*/
      *(_BYTE *)(v39 + v52 + 1) = v55; /*0x10036545b*/
      v56 = *(_BYTE *)(v77 + v52 + 2); /*0x100365460*/
      if ( v56 == 92 ) /*0x100365469*/
        v56 = 47; /*0x100365469*/
      *(_BYTE *)(v39 + v52 + 2) = v56; /*0x10036546c*/
      v44 = *(unsigned __int8 *)(v77 + v52 + 3); /*0x100365471*/
      if ( (_BYTE)v44 == 92 ) /*0x10036547a*/
        v44 = 47; /*0x10036547a*/
      *(_BYTE *)(v39 + v52 + 3) = v44; /*0x10036547d*/
      v52 += 4; /*0x100365482*/
    }
    while ( v36 != v52 ); /*0x100365489*/
  }
LABEL_71:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v38, v44); /*0x10036548b*/
  v57 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v36, 1); /*0x100365498*/
  v43 = v36; /*0x10036549d*/
  if ( !v57 ) /*0x1003654a3*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v36); /*0x1003655df*/
  v42 = (__int64)v57; /*0x1003654a9*/
  memcpy(v57, v40, v43); /*0x1003654b5*/
  if ( v43 < 8 ) /*0x1003654be*/
  {
    v58 = 0; /*0x1003654c0*/
    do /*0x100365636*/
    {
LABEL_84:
      *(_BYTE *)(v42 + v58) |= 32 * ((unsigned __int8)(*(_BYTE *)(v42 + v58) - 65) < 0x1Au); /*0x100365619*/
      ++v58; /*0x100365630*/
LABEL_85:
      ; /*0x100365633*/
    }
    while ( v43 != v58 ); /*0x100365636*/
    goto LABEL_86; /*0x100365636*/
  }
  if ( v43 < 0x20 ) /*0x1003654d5*/
  {
    v58 = 0; /*0x1003654d7*/
    goto LABEL_80; /*0x1003654d9*/
  }
  v58 = v43 & 0x7FFFFFFFFFFFFFE0LL; /*0x1003654e1*/
  v59 = 0; /*0x1003654e4*/
  v60 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x1003654e6*/
  v61 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x1003654ee*/
  v62 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x1003654f6*/
  do /*0x100365559*/
  {
    v63 = _mm_loadu_si128((const __m128i *)(v42 + v59)); /*0x100365500*/
    v64 = _mm_loadu_si128((const __m128i *)(v42 + v59 + 16)); /*0x100365506*/
    v65 = _mm_add_epi8(v63, v60); /*0x100365511*/
    v66 = _mm_add_epi8(v64, v60); /*0x100365519*/
    *(__m128i *)(v42 + v59) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v65, v61), v65), v62), v63); /*0x100365545*/
    *(__m128i *)(v42 + v59 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v66, v61), v66), v62), v64); /*0x10036554b*/
    v59 += 32; /*0x100365552*/
  }
  while ( v58 != v59 ); /*0x100365559*/
  v43 = __n; /*0x10036555b*/
  if ( __n != v58 ) /*0x100365562*/
  {
    if ( (__n & 0x18) == 0 ) /*0x10036556c*/
      goto LABEL_84; /*0x10036556c*/
LABEL_80:
    v67 = v58; /*0x100365572*/
    v58 = v43 & 0x7FFFFFFFFFFFFFF8LL; /*0x10036557c*/
    v68 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x10036557f*/
    v69 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x100365587*/
    v70 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x10036558f*/
    do /*0x1003655cf*/
    {
      v71 = _mm_loadl_epi64((const __m128i *)(v42 + v67)); /*0x1003655a0*/
      v72 = _mm_add_epi8(v71, v68); /*0x1003655aa*/
      *(_QWORD *)(v42 + v67) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v72, v69), v72), v70), v71).u64[0]; /*0x1003655c2*/
      v67 += 8; /*0x1003655c8*/
    }
    while ( v58 != v67 ); /*0x1003655cf*/
    v43 = __n; /*0x1003655d1*/
    goto LABEL_85; /*0x1003655d5*/
  }
LABEL_86:
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, v43, 1); /*0x100365638*/
LABEL_87:
  v78 = 0; /*0x100365648*/
  v79 = v43; /*0x100365650*/
  v80 = (_BYTE *)v42; /*0x100365654*/
  v81 = v43; /*0x100365658*/
  v82 = nullptr; /*0x10036565c*/
  v83 = (char *)v43; /*0x100365664*/
  v84 = 0x2F0000002FLL; /*0x100365672*/
  LOBYTE(v85) = 1; /*0x100365676*/
  v86 = 1; /*0x10036567a*/
  v73 = core::str::iter::SplitInternal$LT$P$GT$::next_back::h3733e925f64ab029(&v78); /*0x100365689*/
  v75 = v74; /*0x10036568c*/
  if ( !v73 ) /*0x100365692*/
  {
    v73 = v42; /*0x100365692*/
    v75 = __n; /*0x100365696*/
  }
  if ( !(unsigned __int8)codexmate_lib::platform::process::is_openai_ide_extension_writer_path::h13d20a8a985da07b( /*0x1003656a8*/
                           v7,
                           a2) )
    goto LABEL_96; /*0x1003656a8*/
  if ( v75 == 5 ) /*0x1003656ae*/
  {
    if ( !(*(_DWORD *)v73 ^ 0x65646F63 | *(unsigned __int8 *)(v73 + 4) ^ 0x78) ) /*0x1003656c1*/
      goto LABEL_101; /*0x1003656c3*/
LABEL_96:
    LOBYTE(v75) = 1; /*0x100365701*/
    if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100365792*/
                            "/.vscode/extensions//.vscode-insiders/extensions//.vscode-oss/extensions//.cursor/extensions//.windsurf/extensions//extensions/openai.chatgpt",
                            0x14u,
                            (void *)v7)
      || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                            "/.vscode-insiders/extensions//.vscode-oss/extensions//.cursor/extensions//.windsurf/extensions//extensions/openai.chatgpt",
                            0x1Du,
                            (void *)v7)
      || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                            "/.vscode-oss/extensions//.cursor/extensions//.windsurf/extensions//extensions/openai.chatgpt",
                            0x18u,
                            (void *)v7)
      || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                            "/.cursor/extensions//.windsurf/extensions//extensions/openai.chatgpt",
                            0x14u,
                            (void *)v7)
      || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                            "/.windsurf/extensions//extensions/openai.chatgpt",
                            0x16u,
                            (void *)v7) )
    {
      goto LABEL_107; /*0x100365799*/
    }
    goto LABEL_101; /*0x100365799*/
  }
  if ( v75 <= 5 /*0x1003656f9*/
    || *(_DWORD *)v73 ^ 0x65646F63 | *(unsigned __int16 *)(v73 + 4) ^ 0x2D78
    && *(_DWORD *)v73 ^ 0x65646F63 | *(unsigned __int16 *)(v73 + 4) ^ 0x5F78 )
  {
    goto LABEL_96; /*0x1003656fb*/
  }
LABEL_101:
  LOBYTE(v75) = 1; /*0x10036579f*/
  if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100365829*/
                           &unk_1015F7F5E,
                           0xCu,
                           __s1)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           &unk_1015F7F6A,
                           0x15u,
                           __s1)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           &unk_1015F7F7F,
                           0x18u,
                           __s1)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           &unk_1015F7F97,
                           0xCu,
                           __s1)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           &unk_1015E3B00,
                           8u,
                           __s1) )
  {
    LODWORD(v75) = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10036584a*/
                     "crashpad_handlerfield identifierTauri-Channel-Id",
                     0x10u,
                     __s1);
  }
LABEL_107:
  if ( __n ) /*0x100365854*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, __n, 1); /*0x10036585e*/
  if ( a2 ) /*0x100365866*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, a2, 1); /*0x100365873*/
  return (unsigned int)v75; /*0x10036587b*/
}