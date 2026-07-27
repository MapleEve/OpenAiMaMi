// __ZN13codexmate_lib8platform7process27classify_macos_codex_writer @ 0x100363660
__int64 __fastcall codexmate_lib::platform::process::classify_macos_codex_writer::habcd71bb0eaebdb4(
        _BYTE *a1,
        size_t a2)
{
  __int64 *v2; // rbx
  unsigned int v3; // r13d
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rdx
  __m128i v10; // xmm2
  __m128i v11; // xmm3
  __m128i v12; // xmm4
  __m128i v13; // xmm5
  __int64 v14; // rdx
  __m128i si128; // xmm1
  __m128i v16; // xmm2
  __m128i v17; // xmm3
  char v18; // dl
  void *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __m128i v24; // xmm2
  __m128i v25; // xmm3
  __m128i v26; // xmm4
  __m128i v27; // xmm5
  __m128i v28; // xmm6
  __int64 v29; // rdx
  __m128i v30; // xmm0
  __m128i v31; // xmm1
  __m128i v32; // xmm2
  __m128i v33; // xmm3
  __m128i v34; // xmm4
  __int64 v35; // rax
  _BYTE *v36; // r12
  __int64 v37; // rax
  __int64 v38; // r15
  __int64 v39; // rdx
  __m128i v40; // xmm2
  __m128i v41; // xmm3
  __m128i v42; // xmm4
  __m128i v43; // xmm5
  __int64 v44; // rdx
  __m128i v45; // xmm1
  __m128i v46; // xmm2
  __m128i v47; // xmm3
  char v48; // dl
  void *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __m128i v52; // xmm0
  __m128i v53; // xmm1
  __m128i v54; // xmm2
  __m128i v55; // xmm3
  __m128i v56; // xmm4
  __m128i v57; // xmm5
  __m128i v58; // xmm6
  __int64 v59; // rdx
  __m128i v60; // xmm0
  __m128i v61; // xmm1
  __m128i v62; // xmm2
  __m128i v63; // xmm3
  __m128i v64; // xmm4
  __int64 v66; // rdi
  char v67; // r12
  void *v68; // r12
  size_t v69; // r15
  const void *v70; // rsi
  _BYTE *v71; // r12
  unsigned __int64 v72; // rax
  __int64 v73; // rcx
  __m128i v74; // xmm0
  __m128i v75; // xmm1
  __m128i v76; // xmm2
  __m128i v77; // xmm3
  __m128i v78; // xmm4
  __m128i v79; // xmm5
  __m128i v80; // xmm6
  unsigned __int64 v81; // rcx
  __m128i v82; // xmm0
  __m128i v83; // xmm1
  __m128i v84; // xmm2
  __m128i v85; // xmm3
  __m128i v86; // xmm4
  __int64 v87; // rax
  __int64 *v88; // rdx
  void *v89; // r12
  size_t v90; // r15
  unsigned __int64 v91; // rax
  _BYTE *v92; // rsi
  __int64 v93; // rcx
  __m128i v94; // xmm0
  __m128i v95; // xmm1
  __m128i v96; // xmm2
  __m128i v97; // xmm3
  __m128i v98; // xmm4
  __m128i v99; // xmm5
  __m128i v100; // xmm6
  unsigned __int64 v101; // rcx
  __m128i v102; // xmm0
  __m128i v103; // xmm1
  __m128i v104; // xmm2
  __m128i v105; // xmm3
  __m128i v106; // xmm4
  void *v107; // r15
  __int64 v108; // rax
  unsigned __int64 v109; // rdx
  unsigned __int8 *v110; // r12
  bool v111; // zf
  unsigned __int64 v112; // rax
  char v113; // al
  char v114; // r15
  _QWORD *v115; // rdx
  bool v116; // al
  __int64 v117; // rax
  __int64 v118; // rdx
  unsigned __int64 v119; // rbx
  unsigned __int64 v120; // r14
  unsigned __int8 *v121; // r15
  unsigned __int64 v122; // rdx
  unsigned __int64 v123; // rbx
  char v124; // r12
  bool v125; // al
  __int64 v126; // [rsp+8h] [rbp-108h] BYREF
  void *__src; // [rsp+10h] [rbp-100h]
  size_t __n; // [rsp+18h] [rbp-F8h]
  __int64 *v129; // [rsp+20h] [rbp-F0h]
  _BYTE *v130; // [rsp+28h] [rbp-E8h]
  void *v131; // [rsp+30h] [rbp-E0h]
  __int64 v132; // [rsp+38h] [rbp-D8h]
  __int16 v133; // [rsp+40h] [rbp-D0h]
  __int64 v134; // [rsp+48h] [rbp-C8h] BYREF
  void *v135; // [rsp+50h] [rbp-C0h]
  __int64 *v136; // [rsp+58h] [rbp-B8h]
  unsigned __int64 v137; // [rsp+60h] [rbp-B0h]
  void *__s1; // [rsp+68h] [rbp-A8h]
  _BYTE *v139; // [rsp+70h] [rbp-A0h] BYREF
  unsigned __int64 v140; // [rsp+78h] [rbp-98h]
  void *__dst; // [rsp+80h] [rbp-90h]
  __int64 *v142; // [rsp+88h] [rbp-88h]
  _BYTE *v143; // [rsp+90h] [rbp-80h]
  unsigned __int64 v144; // [rsp+98h] [rbp-78h]
  __int64 v145; // [rsp+A0h] [rbp-70h]
  __int16 v146; // [rsp+A8h] [rbp-68h]
  __int16 v147; // [rsp+B0h] [rbp-60h]
  size_t v148; // [rsp+B8h] [rbp-58h]
  unsigned __int64 v149; // [rsp+C0h] [rbp-50h]
  void *v150; // [rsp+C8h] [rbp-48h]
  void *v151; // [rsp+D0h] [rbp-40h]
  unsigned __int64 v152; // [rsp+D8h] [rbp-38h]
  _BYTE v153[41]; // [rsp+E7h] [rbp-29h] BYREF

  v2 = (__int64 *)a2; /*0x100363674*/
  v3 = (_DWORD)a1 + a2; /*0x100363677*/
  if ( (a2 & 0x8000000000000000LL) != 0LL ) /*0x10036367e*/
  {
    v4 = 0; /*0x100363680*/
    goto LABEL_3; /*0x100363680*/
  }
  if ( !a2 ) /*0x100363691*/
  {
    v8 = 1; /*0x1003636c0*/
    v6 = 1; /*0x1003636c6*/
    goto LABEL_36; /*0x1003636cc*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100363693*/
  v4 = 1; /*0x100363698*/
  v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a2, 1); /*0x1003636a6*/
  if ( !v5 ) /*0x1003636ae*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, a2); /*0x100363683*/
  v6 = v5; /*0x1003636b0*/
  if ( a2 <= 7 ) /*0x1003636b7*/
  {
    v7 = 0; /*0x1003636b9*/
    goto LABEL_18; /*0x1003636bb*/
  }
  if ( a2 < 0x20 ) /*0x1003636df*/
  {
    v7 = 0; /*0x1003636e1*/
LABEL_15:
    v14 = v7; /*0x10036374b*/
    v7 = a2 & 0x7FFFFFFFFFFFFFF8LL; /*0x100363755*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_1015E36D0); /*0x100363758*/
    v16 = _mm_load_si128((const __m128i *)&xmmword_1015E36E0); /*0x100363760*/
    do /*0x100363790*/
    {
      v17 = _mm_loadl_epi64((const __m128i *)&a1[v14]); /*0x100363770*/
      *(_QWORD *)(v6 + v14) = _mm_blendv_epi8(v17, v16, _mm_cmpeq_epi8(v17, si128)).u64[0]; /*0x100363783*/
      v14 += 8; /*0x100363789*/
    }
    while ( v7 != v14 ); /*0x100363790*/
    if ( a2 == v7 ) /*0x100363795*/
      goto LABEL_21; /*0x100363795*/
    goto LABEL_18; /*0x100363795*/
  }
  v7 = a2 & 0x7FFFFFFFFFFFFFE0LL; /*0x1003636e8*/
  v9 = 0; /*0x1003636eb*/
  v10 = _mm_load_si128((const __m128i *)&xmmword_1015E36B0); /*0x1003636ed*/
  v11 = _mm_load_si128((const __m128i *)&xmmword_1015E36C0); /*0x1003636f5*/
  do /*0x10036373f*/
  {
    v12 = _mm_loadu_si128((const __m128i *)&a1[v9]); /*0x100363700*/
    v13 = _mm_loadu_si128((const __m128i *)&a1[v9 + 16]); /*0x100363706*/
    *(__m128i *)(v6 + v9) = _mm_blendv_epi8(v12, v11, _mm_cmpeq_epi8(v12, v10)); /*0x10036372b*/
    *(__m128i *)(v6 + v9 + 16) = _mm_blendv_epi8(v13, v11, _mm_cmpeq_epi8(v13, v10)); /*0x100363731*/
    v9 += 32; /*0x100363738*/
  }
  while ( v7 != v9 ); /*0x10036373f*/
  if ( a2 == v7 ) /*0x100363744*/
    goto LABEL_21; /*0x100363744*/
  if ( (a2 & 0x18) != 0 ) /*0x100363749*/
    goto LABEL_15; /*0x100363749*/
  do /*0x1003637b5*/
  {
LABEL_18:
    v18 = a1[v7]; /*0x1003637a0*/
    if ( v18 == 92 ) /*0x1003637a8*/
      v18 = 47; /*0x1003637a8*/
    *(_BYTE *)(v6 + v7++) = v18; /*0x1003637ab*/
  }
  while ( a2 != v7 ); /*0x1003637b5*/
LABEL_21:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, 1); /*0x1003637b7*/
  v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a2, 1); /*0x1003637c4*/
  if ( !v19 ) /*0x1003637cc*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a2); /*0x1003638fb*/
  v8 = (__int64)v19; /*0x1003637d2*/
  memcpy(v19, (const void *)v6, a2); /*0x1003637de*/
  if ( a2 < 8 ) /*0x1003637e7*/
  {
    v20 = 0; /*0x1003637e9*/
    goto LABEL_34; /*0x1003637eb*/
  }
  if ( a2 < 0x20 ) /*0x1003637fe*/
  {
    v20 = 0; /*0x100363800*/
    goto LABEL_30; /*0x100363802*/
  }
  v20 = a2 & 0x7FFFFFFFFFFFFFE0LL; /*0x10036380a*/
  v21 = 0; /*0x10036380d*/
  v22 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x10036380f*/
  v23 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x100363817*/
  v24 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x10036381f*/
  do /*0x100363889*/
  {
    v25 = _mm_loadu_si128((const __m128i *)(v8 + v21)); /*0x100363830*/
    v26 = _mm_loadu_si128((const __m128i *)(v8 + v21 + 16)); /*0x100363836*/
    v27 = _mm_add_epi8(v25, v22); /*0x100363841*/
    v28 = _mm_add_epi8(v26, v22); /*0x100363849*/
    *(__m128i *)(v8 + v21) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v27, v23), v27), v24), v25); /*0x100363875*/
    *(__m128i *)(v8 + v21 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v28, v23), v28), v24), v26); /*0x10036387b*/
    v21 += 32; /*0x100363882*/
  }
  while ( v20 != v21 ); /*0x100363889*/
  if ( a2 == v20 ) /*0x10036388e*/
    goto LABEL_36; /*0x10036388e*/
  if ( (a2 & 0x18) != 0 ) /*0x100363897*/
  {
LABEL_30:
    v29 = v20; /*0x100363899*/
    v20 = a2 & 0x7FFFFFFFFFFFFFF8LL; /*0x1003638a3*/
    v30 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x1003638a6*/
    v31 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x1003638ae*/
    v32 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x1003638b6*/
    do /*0x1003638ef*/
    {
      v33 = _mm_loadl_epi64((const __m128i *)(v8 + v29)); /*0x1003638c0*/
      v34 = _mm_add_epi8(v33, v30); /*0x1003638ca*/
      *(_QWORD *)(v8 + v29) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v34, v31), v34), v32), v33).u64[0]; /*0x1003638e2*/
      v29 += 8; /*0x1003638e8*/
    }
    while ( v20 != v29 ); /*0x1003638ef*/
    goto LABEL_35; /*0x1003638ef*/
  }
  do /*0x10036392a*/
  {
LABEL_34:
    *(_BYTE *)(v8 + v20) |= 32 * ((unsigned __int8)(*(_BYTE *)(v8 + v20) - 65) < 0x1Au); /*0x10036390d*/
    ++v20; /*0x100363924*/
LABEL_35:
    ; /*0x100363927*/
  }
  while ( a2 != v20 ); /*0x10036392a*/
LABEL_36:
  if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10036393e*/
                          "/chatgpt.app/contents//node_modules/@openai/codex/",
                          0x16u,
                          (void *)v8) )
  {
    if ( a2 ) /*0x10036394a*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, a2, 1); /*0x100363957*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, a2, 1); /*0x100363970*/
    }
    return 0; /*0x100363978*/
  }
  if ( a2 ) /*0x100363980*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, a2, 1); /*0x10036398d*/
  v151 = &a1[a2]; /*0x100363992*/
  if ( a2 ) /*0x100363999*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, a2, 1); /*0x1003639a6*/
    LOBYTE(v3) = 1; /*0x1003639b6*/
    if ( (unsigned __int8)codexmate_lib::platform::process::is_openai_ide_extension_writer_path::h13d20a8a985da07b( /*0x1003639b1*/
                            a1,
                            a2) )
      return v3; /*0x1003639bb*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1003639c1*/
    v35 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a2, 1); /*0x1003639ce*/
    if ( !v35 ) /*0x1003639d6*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a2); /*0x100363c5b*/
    v36 = (_BYTE *)v35; /*0x1003639dc*/
    if ( a2 <= 7 ) /*0x1003639e3*/
    {
      v37 = 0; /*0x1003639e5*/
      goto LABEL_59; /*0x1003639e7*/
    }
    if ( a2 >= 0x20 ) /*0x100363a23*/
    {
      v37 = a2 & 0x7FFFFFFFFFFFFFE0LL; /*0x100363a2c*/
      v39 = 0; /*0x100363a2f*/
      v40 = _mm_load_si128((const __m128i *)&xmmword_1015E36B0); /*0x100363a31*/
      v41 = _mm_load_si128((const __m128i *)&xmmword_1015E36C0); /*0x100363a39*/
      do /*0x100363a8f*/
      {
        v42 = _mm_loadu_si128((const __m128i *)&a1[v39]); /*0x100363a50*/
        v43 = _mm_loadu_si128((const __m128i *)&a1[v39 + 16]); /*0x100363a56*/
        *(__m128i *)&v36[v39] = _mm_blendv_epi8(v42, v41, _mm_cmpeq_epi8(v42, v40)); /*0x100363a7b*/
        *(__m128i *)&v36[v39 + 16] = _mm_blendv_epi8(v43, v41, _mm_cmpeq_epi8(v43, v40)); /*0x100363a81*/
        v39 += 32; /*0x100363a88*/
      }
      while ( v37 != v39 ); /*0x100363a8f*/
      if ( a2 == v37 ) /*0x100363a94*/
        goto LABEL_62; /*0x100363a94*/
      if ( (a2 & 0x18) == 0 ) /*0x100363a99*/
      {
        do /*0x100363b05*/
        {
LABEL_59:
          v48 = a1[v37]; /*0x100363af0*/
          if ( v48 == 92 ) /*0x100363af8*/
            v48 = 47; /*0x100363af8*/
          v36[v37++] = v48; /*0x100363afb*/
        }
        while ( a2 != v37 ); /*0x100363b05*/
LABEL_62:
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, 1); /*0x100363b07*/
        v49 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a2, 1); /*0x100363b14*/
        if ( !v49 ) /*0x100363b1c*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a2); /*0x100363c68*/
        v38 = (__int64)v49; /*0x100363b22*/
        memcpy(v49, v36, a2); /*0x100363b2e*/
        if ( a2 < 8 ) /*0x100363b37*/
        {
          v50 = 0; /*0x100363b39*/
          goto LABEL_77; /*0x100363b3b*/
        }
        if ( a2 >= 0x20 ) /*0x100363b4e*/
        {
          v50 = a2 & 0x7FFFFFFFFFFFFFE0LL; /*0x100363b5a*/
          v51 = 0; /*0x100363b5d*/
          v52 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x100363b5f*/
          v53 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x100363b67*/
          v54 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x100363b6f*/
          do /*0x100363bd9*/
          {
            v55 = _mm_loadu_si128((const __m128i *)(v38 + v51)); /*0x100363b80*/
            v56 = _mm_loadu_si128((const __m128i *)(v38 + v51 + 16)); /*0x100363b86*/
            v57 = _mm_add_epi8(v55, v52); /*0x100363b91*/
            v58 = _mm_add_epi8(v56, v52); /*0x100363b99*/
            *(__m128i *)(v38 + v51) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v57, v53), v57), v54), v55); /*0x100363bc5*/
            *(__m128i *)(v38 + v51 + 16) = _mm_or_si128( /*0x100363bcb*/
                                             _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v58, v53), v58), v54),
                                             v56);
            v51 += 32; /*0x100363bd2*/
          }
          while ( v50 != v51 ); /*0x100363bd9*/
          if ( a2 == v50 ) /*0x100363bde*/
          {
LABEL_79:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, a2, 1); /*0x100363cd7*/
            goto LABEL_80; /*0x100363ce2*/
          }
          if ( (a2 & 0x18) == 0 ) /*0x100363be7*/
          {
            do /*0x100363cd5*/
            {
LABEL_77:
              *(_BYTE *)(v38 + v50) |= 32 * ((unsigned __int8)(*(_BYTE *)(v38 + v50) - 65) < 0x1Au); /*0x100363cb8*/
              ++v50; /*0x100363ccf*/
LABEL_78:
              ; /*0x100363cd2*/
            }
            while ( a2 != v50 ); /*0x100363cd5*/
            goto LABEL_79; /*0x100363cd5*/
          }
        }
        else
        {
          v50 = 0; /*0x100363b50*/
        }
        v59 = v50; /*0x100363bed*/
        v50 = a2 & 0x7FFFFFFFFFFFFFF8LL; /*0x100363bf7*/
        v60 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x100363bfa*/
        v61 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x100363c02*/
        v62 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x100363c0a*/
        do /*0x100363c4f*/
        {
          v63 = _mm_loadl_epi64((const __m128i *)(v38 + v59)); /*0x100363c20*/
          v64 = _mm_add_epi8(v63, v60); /*0x100363c2a*/
          *(_QWORD *)(v38 + v59) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v64, v61), v64), v62), v63).u64[0]; /*0x100363c42*/
          v59 += 8; /*0x100363c48*/
        }
        while ( v50 != v59 ); /*0x100363c4f*/
        goto LABEL_78; /*0x100363c4f*/
      }
    }
    else
    {
      v37 = 0; /*0x100363a25*/
    }
    v44 = v37; /*0x100363a9b*/
    v37 = a2 & 0x7FFFFFFFFFFFFFF8LL; /*0x100363aa5*/
    v45 = _mm_load_si128((const __m128i *)&xmmword_1015E36D0); /*0x100363aa8*/
    v46 = _mm_load_si128((const __m128i *)&xmmword_1015E36E0); /*0x100363ab0*/
    do /*0x100363ae0*/
    {
      v47 = _mm_loadl_epi64((const __m128i *)&a1[v44]); /*0x100363ac0*/
      *(_QWORD *)&v36[v44] = _mm_blendv_epi8(v47, v46, _mm_cmpeq_epi8(v47, v45)).u64[0]; /*0x100363ad3*/
      v44 += 8; /*0x100363ad9*/
    }
    while ( v37 != v44 ); /*0x100363ae0*/
    if ( a2 == v37 ) /*0x100363ae5*/
      goto LABEL_62; /*0x100363ae5*/
    goto LABEL_59; /*0x100363ae5*/
  }
  v38 = 1; /*0x1003639ff*/
  LOBYTE(v3) = 1; /*0x100363a05*/
  if ( (unsigned __int8)codexmate_lib::platform::process::is_openai_ide_extension_writer_path::h13d20a8a985da07b(a1, 0) ) /*0x1003639fa*/
    return v3; /*0x100363a0a*/
LABEL_80:
  if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100363dc2*/
                          "/.vscode/extensions//.vscode-insiders/extensions//.vscode-oss/extensions//.cursor/extensions//.windsurf/extensions//extensions/openai.chatgpt",
                          0x14u,
                          (void *)v38)
    || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                          "/.vscode-insiders/extensions//.vscode-oss/extensions//.cursor/extensions//.windsurf/extensions//extensions/openai.chatgpt",
                          0x1Du,
                          (void *)v38)
    || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                          "/.vscode-oss/extensions//.cursor/extensions//.windsurf/extensions//extensions/openai.chatgpt",
                          0x18u,
                          (void *)v38)
    || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                          "/.cursor/extensions//.windsurf/extensions//extensions/openai.chatgpt",
                          0x14u,
                          (void *)v38)
    || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                          "/.windsurf/extensions//extensions/openai.chatgpt",
                          0x16u,
                          (void *)v38)
    || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                          "/extensions/openai.chatgpt",
                          0x1Au,
                          (void *)v38)
    || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                          &unk_1015F7F2C,
                          0x18u,
                          (void *)v38)
    || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                          &unk_1015F7F44,
                          0xCu,
                          (void *)v38) )
  {
    LOBYTE(v3) = 2; /*0x100363dcb*/
    if ( !a2 ) /*0x100363dd1*/
      return v3; /*0x100363dd1*/
    v66 = v38; /*0x100363ddc*/
LABEL_90:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v66, a2, 1); /*0x100363de2*/
    return v3; /*0x100363de7*/
  }
  v67 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100363e03*/
          &unk_1015F7F50,
          0xEu,
          (void *)v38);
  if ( a2 ) /*0x100363e09*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, a2, 1); /*0x100363e16*/
  LOBYTE(v3) = 2; /*0x100363e1b*/
  if ( !v67 ) /*0x100363e21*/
  {
    v153[0] = 92; /*0x100363e27*/
    LOBYTE(v134) = 47; /*0x100363e2b*/
    v139 = a1; /*0x100363e32*/
    v140 = (unsigned __int64)v151; /*0x100363e3d*/
    __dst = v153; /*0x100363e48*/
    v142 = &v134; /*0x100363e56*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hee7ab80f55dd7f09( /*0x100363e6b*/
      &v126,
      &v139);
    v68 = __src; /*0x100363e70*/
    v69 = __n; /*0x100363e77*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v139, __n, 0, 1, 1); /*0x100363e95*/
    v148 = v140; /*0x100363ea1*/
    if ( (_DWORD)v139 == 1 ) /*0x100363eac*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v148, __dst); /*0x100364279*/
    v152 = (unsigned __int64)v68; /*0x100363eb9*/
    v70 = v68; /*0x100363ebd*/
    v71 = __dst; /*0x100363ec0*/
    memcpy(__dst, v70, v69); /*0x100363ec6*/
    if ( v69 ) /*0x100363ece*/
    {
      if ( v69 < 8 ) /*0x100363ed8*/
      {
        v72 = 0; /*0x100363eda*/
        goto LABEL_107; /*0x100363edc*/
      }
      if ( v69 >= 0x20 ) /*0x100363ee5*/
      {
        v72 = v69 & 0xFFFFFFFFFFFFFFE0LL; /*0x100363ef4*/
        v73 = 0; /*0x100363ef8*/
        v74 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x100363efa*/
        v75 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x100363f02*/
        v76 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x100363f0a*/
        do /*0x100363f6b*/
        {
          v77 = _mm_loadu_si128((const __m128i *)&v71[v73]); /*0x100363f12*/
          v78 = _mm_loadu_si128((const __m128i *)&v71[v73 + 16]); /*0x100363f18*/
          v79 = _mm_add_epi8(v77, v74); /*0x100363f23*/
          v80 = _mm_add_epi8(v78, v74); /*0x100363f2b*/
          *(__m128i *)&v71[v73] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v79, v75), v79), v76), v77); /*0x100363f57*/
          *(__m128i *)&v71[v73 + 16] = _mm_or_si128( /*0x100363f5d*/
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v80, v75), v80), v76),
                                         v78);
          v73 += 32; /*0x100363f64*/
        }
        while ( v72 != v73 ); /*0x100363f6b*/
        if ( v69 == v72 ) /*0x100363f73*/
          goto LABEL_108; /*0x100363f73*/
        if ( (v69 & 0x18) == 0 ) /*0x100363f7d*/
        {
          do /*0x100363ffa*/
          {
LABEL_107:
            v71[v72] |= 32 * ((unsigned __int8)(v71[v72] - 65) < 0x1Au); /*0x100363fdd*/
            ++v72; /*0x100363ff4*/
          }
          while ( v69 != v72 ); /*0x100363ffa*/
          goto LABEL_108; /*0x100363ffa*/
        }
      }
      else
      {
        v72 = 0; /*0x100363ee7*/
      }
      v81 = v72; /*0x100363f7f*/
      v72 = v69 & 0xFFFFFFFFFFFFFFF8LL; /*0x100363f88*/
      v82 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x100363f8c*/
      v83 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x100363f94*/
      v84 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x100363f9c*/
      do /*0x100363fd3*/
      {
        v85 = _mm_loadl_epi64((const __m128i *)&v71[v81]); /*0x100363fa4*/
        v86 = _mm_add_epi8(v85, v82); /*0x100363fae*/
        *(_QWORD *)&v71[v81] = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v86, v83), v86), v84), v85).u64[0]; /*0x100363fc6*/
        v81 += 8LL; /*0x100363fcc*/
      }
      while ( v72 != v81 ); /*0x100363fd3*/
      if ( v69 != v72 ) /*0x100363fdb*/
        goto LABEL_107; /*0x100363fdb*/
    }
LABEL_108:
    if ( v126 ) /*0x100364006*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v152, v126, 1); /*0x100364011*/
    __s1 = v71; /*0x100364028*/
    if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10036402f*/
                            "/node_modules/@openai/codex/",
                            0x1Cu,
                            v71) )
      goto LABEL_111; /*0x100364036*/
    v139 = nullptr; /*0x100364055*/
    v140 = (unsigned __int64)v2; /*0x100364060*/
    __dst = a1; /*0x100364067*/
    v142 = v2; /*0x10036406e*/
    v143 = a1; /*0x100364075*/
    v144 = (unsigned __int64)v151; /*0x10036407d*/
    v145 = 0; /*0x100364081*/
    v146 = 1; /*0x100364089*/
    v87 = core::iter::traits::iterator::Iterator::try_fold::h476eff2b16756c7b(&v139); /*0x100364096*/
    if ( !v87 ) /*0x10036409e*/
    {
      v88 = v2; /*0x10036409e*/
      v87 = (__int64)a1; /*0x1003640a2*/
    }
    v153[0] = 92; /*0x1003640a6*/
    LOBYTE(v134) = 47; /*0x1003640aa*/
    v139 = (_BYTE *)v87; /*0x1003640b4*/
    v140 = (unsigned __int64)v88 + v87; /*0x1003640bb*/
    __dst = v153; /*0x1003640c6*/
    v142 = &v134; /*0x1003640d4*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hee7ab80f55dd7f09( /*0x1003640e9*/
      &v126,
      &v139);
    v89 = __src; /*0x1003640f5*/
    v90 = __n; /*0x1003640fc*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v139, __n, 0, 1, 1); /*0x10036411a*/
    v149 = v140; /*0x100364126*/
    if ( (_DWORD)v139 == 1 ) /*0x100364131*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v149, __dst); /*0x10036428b*/
    v150 = __dst; /*0x10036413e*/
    memcpy(__dst, v89, v90); /*0x100364148*/
    v152 = v90; /*0x100364150*/
    if ( !v90 ) /*0x100364154*/
    {
LABEL_132:
      if ( v126 ) /*0x10036432c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v89, v126, 1); /*0x100364336*/
      v139 = nullptr; /*0x10036433b*/
      v140 = v152; /*0x10036434a*/
      __dst = v150; /*0x100364355*/
      v142 = (__int64 *)v152; /*0x10036435c*/
      v143 = nullptr; /*0x100364363*/
      v144 = v152; /*0x10036436b*/
      v145 = 0x2F0000002FLL; /*0x100364379*/
      LOBYTE(v146) = 1; /*0x10036437d*/
      v147 = 1; /*0x100364381*/
      v107 = __s1; /*0x10036438e*/
      v108 = core::str::iter::SplitInternal$LT$P$GT$::next_back::h3733e925f64ab029(&v139); /*0x100364395*/
      v137 = v109; /*0x10036439a*/
      v110 = (unsigned __int8 *)v108; /*0x1003643a1*/
      v111 = v108 == 0; /*0x1003643a4*/
      v112 = v109; /*0x1003643a7*/
      if ( v111 ) /*0x1003643ae*/
        v112 = v152; /*0x1003643ae*/
      v137 = v112; /*0x1003643b3*/
      if ( v111 ) /*0x1003643ba*/
        v110 = (unsigned __int8 *)v150; /*0x1003643ba*/
      v113 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1003643d5*/
               "/node_modules/@openai/codex/",
               0x1Cu,
               v107);
      v114 = 1; /*0x1003643da*/
      if ( v113 ) /*0x1003643df*/
      {
LABEL_148:
        if ( v137 == 4 ) /*0x1003644bb*/
        {
          if ( *(_DWORD *)v110 != 1701080942 ) /*0x10036452c*/
            goto LABEL_190; /*0x10036452c*/
        }
        else
        {
          if ( v137 != 8 ) /*0x1003644c1*/
          {
            if ( v137 == 5 && !(*(_DWORD *)v110 ^ 0x65646F63 | v110[4] ^ 0x78) ) /*0x1003644df*/
            {
              v116 = v152 == 5 && (*(_DWORD *)v150 ^ 0x65646F63 | *((unsigned __int8 *)v150 + 4) ^ 0x78) == 0; /*0x1003644ec*/
              if ( v116 | (unsigned __int8)v114 ) /*0x1003646a2*/
              {
LABEL_169:
                v71 = __s1; /*0x1003646ab*/
                if ( v149 ) /*0x1003646b7*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v150, v149, 1); /*0x1003646ca*/
LABEL_111:
                LOBYTE(v3) = 1; /*0x100364038*/
                a2 = v148; /*0x10036403b*/
                if ( !v148 ) /*0x100364042*/
                  return v3; /*0x100364042*/
                v66 = (__int64)v71; /*0x10036404d*/
                goto LABEL_90; /*0x100364050*/
              }
            }
            goto LABEL_190; /*0x1003646a5*/
          }
          if ( *(_QWORD *)v110 != 0x6578652E65646F6ELL ) /*0x10036451c*/
          {
LABEL_190:
            if ( v149 ) /*0x10036482e*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v150, v149, 1); /*0x100364839*/
            a2 = v148; /*0x10036483e*/
            if ( v148 ) /*0x100364845*/
            {
              v66 = (__int64)__s1; /*0x100364850*/
              goto LABEL_90; /*0x100364857*/
            }
            return v3; /*0x100364845*/
          }
        }
        v126 = 0; /*0x100364532*/
        __src = v2; /*0x10036453d*/
        __n = (size_t)a1; /*0x100364544*/
        v129 = v2; /*0x10036454b*/
        v130 = a1; /*0x100364552*/
        v131 = v151; /*0x10036455d*/
        v132 = 0; /*0x100364564*/
        v133 = 1; /*0x10036456f*/
        if ( !core::iter::traits::iterator::Iterator::try_fold::h476eff2b16756c7b(&v126) ) /*0x10036457f*/
          goto LABEL_190; /*0x10036457f*/
        v117 = core::iter::traits::iterator::Iterator::try_fold::h476eff2b16756c7b(&v126); /*0x100364594*/
        if ( !v117 ) /*0x10036459c*/
          goto LABEL_190; /*0x10036459c*/
        alloc::str::_$LT$impl$u20$str$GT$::replace::hd6a1094b8ae40c7f(&v139, v117, v118, 92, &unk_1015F7EBB, 1); /*0x1003645be*/
        v119 = v140; /*0x1003645c3*/
        alloc::str::_$LT$impl$u20$str$GT$::to_ascii_lowercase::h0a527fd5b7c7287b(&v134, v140, __dst); /*0x1003645db*/
        if ( v139 ) /*0x1003645ea*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v119, v139, 1); /*0x1003645f4*/
        v120 = (unsigned __int64)v136; /*0x100364600*/
        v139 = nullptr; /*0x100364607*/
        v140 = (unsigned __int64)v136; /*0x100364612*/
        v151 = v135; /*0x100364619*/
        __dst = v135; /*0x10036461d*/
        v142 = v136; /*0x100364624*/
        v143 = nullptr; /*0x10036462b*/
        v144 = (unsigned __int64)v136; /*0x100364633*/
        v145 = 0x2F0000002FLL; /*0x100364641*/
        LOBYTE(v146) = 1; /*0x100364645*/
        v147 = 1; /*0x100364649*/
        v121 = (unsigned __int8 *)core::str::iter::SplitInternal$LT$P$GT$::next_back::h3733e925f64ab029(&v139); /*0x10036465b*/
        v123 = v122; /*0x10036465e*/
        if ( !v121 ) /*0x100364668*/
        {
          v121 = (unsigned __int8 *)v151; /*0x100364668*/
          v123 = v120; /*0x10036466c*/
        }
        v124 = 1; /*0x100364684*/
        if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10036467f*/
                                "/node_modules/@openai/codex/",
                                0x1Cu,
                                v151) )
        {
LABEL_177:
          if ( v123 == 8 ) /*0x100364793*/
          {
            if ( *(_QWORD *)v121 == 0x736A2E7865646F63LL ) /*0x1003647be*/
            {
LABEL_182:
              v125 = v120 == 5 && (*(_DWORD *)v151 ^ 0x65646F63 | *((unsigned __int8 *)v151 + 4) ^ 0x78) == 0; /*0x1003647da*/
              if ( (v125 | (unsigned __int8)v124) == 1 ) /*0x1003647e8*/
              {
                if ( v134 ) /*0x1003647f4*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v151, v134, 1); /*0x100364803*/
                goto LABEL_169; /*0x100364808*/
              }
            }
          }
          else if ( v123 == 5 && !(*(_DWORD *)v121 ^ 0x65646F63 | v121[4] ^ 0x78) ) /*0x1003647ab*/
          {
            goto LABEL_182; /*0x1003647ad*/
          }
          if ( v134 ) /*0x100364817*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v151, v134, 1); /*0x100364822*/
          goto LABEL_190; /*0x100364822*/
        }
        if ( v120 >= 0xE ) /*0x100364693*/
        {
          if ( !(*(_QWORD *)v151 ^ 0x6D6F682F74706F2FLL | *(_QWORD *)((char *)v151 + 6) ^ 0x2F77657262656D6FLL) ) /*0x1003646f6*/
            goto LABEL_177; /*0x1003646f6*/
        }
        else if ( v120 < 0xB ) /*0x100364699*/
        {
LABEL_173:
          if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10036476b*/
                                   &unk_1015F7EF7,
                                   0xCu,
                                   v151)
            && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                   &unk_1015E3AF8,
                                   8u,
                                   v151)
            && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                   &unk_1015F7F03,
                                   6u,
                                   v151) )
          {
            v124 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10036478c*/
                     &unk_1015F7F09,
                     0x13u,
                     v151);
          }
          goto LABEL_177; /*0x10036478c*/
        }
        if ( !(*(_QWORD *)v151 ^ 0x636F6C2F7273752FLL | *(_QWORD *)((char *)v151 + 3) ^ 0x2F6C61636F6C2F72LL) ) /*0x10036471e*/
          goto LABEL_177; /*0x10036471e*/
        goto LABEL_173; /*0x10036471e*/
      }
      if ( v152 >= 0xE ) /*0x1003643ea*/
      {
        v115 = v150; /*0x100364403*/
        if ( !(*(_QWORD *)v150 ^ 0x6D6F682F74706F2FLL | *(_QWORD *)((char *)v150 + 6) ^ 0x2F77657262656D6FLL) ) /*0x10036441b*/
          goto LABEL_148; /*0x10036441b*/
      }
      else
      {
        v115 = v150; /*0x1003643f1*/
        if ( v152 < 0xB ) /*0x1003643f5*/
        {
LABEL_144:
          if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10036448b*/
                                   &unk_1015F7EF7,
                                   0xCu,
                                   v115)
            && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                   &unk_1015E3AF8,
                                   8u,
                                   v150)
            && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                   &unk_1015F7F03,
                                   6u,
                                   v150) )
          {
            v114 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1003644ad*/
                     &unk_1015F7F09,
                     0x13u,
                     v150);
          }
          goto LABEL_148; /*0x1003644ad*/
        }
      }
      if ( !(*v115 ^ 0x636F6C2F7273752FLL | *(_QWORD *)((char *)v115 + 3) ^ 0x2F6C61636F6C2F72LL) ) /*0x10036443f*/
        goto LABEL_148; /*0x10036443f*/
      goto LABEL_144; /*0x10036443f*/
    }
    if ( v90 < 8 ) /*0x10036415e*/
    {
      v91 = 0; /*0x100364160*/
      v92 = v150; /*0x100364162*/
      do /*0x100364320*/
      {
LABEL_130:
        v92[v91] |= 32 * ((unsigned __int8)(v92[v91] - 65) < 0x1Au); /*0x100364305*/
        ++v91; /*0x10036431a*/
LABEL_131:
        ; /*0x10036431d*/
      }
      while ( v90 != v91 ); /*0x100364320*/
      goto LABEL_132; /*0x100364320*/
    }
    if ( v90 >= 0x20 ) /*0x10036416f*/
    {
      v91 = v152 & 0xFFFFFFFFFFFFFFE0LL; /*0x100364184*/
      v93 = 0; /*0x100364188*/
      v94 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x10036418a*/
      v95 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x100364192*/
      v96 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x10036419a*/
      v92 = v150; /*0x1003641a2*/
      do /*0x1003641fb*/
      {
        v97 = _mm_loadu_si128((const __m128i *)&v92[v93]); /*0x1003641a6*/
        v98 = _mm_loadu_si128((const __m128i *)&v92[v93 + 16]); /*0x1003641ab*/
        v99 = _mm_add_epi8(v97, v94); /*0x1003641b5*/
        v100 = _mm_add_epi8(v98, v94); /*0x1003641bd*/
        *(__m128i *)&v92[v93] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v99, v95), v99), v96), v97); /*0x1003641e9*/
        *(__m128i *)&v92[v93 + 16] = _mm_or_si128( /*0x1003641ee*/
                                       _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v100, v95), v100), v96),
                                       v98);
        v93 += 32; /*0x1003641f4*/
      }
      while ( v91 != v93 ); /*0x1003641fb*/
      v90 = v152; /*0x1003641fd*/
      if ( v152 == v91 ) /*0x100364204*/
        goto LABEL_132; /*0x100364204*/
      if ( (v152 & 0x18) == 0 ) /*0x10036420e*/
        goto LABEL_130; /*0x10036420e*/
    }
    else
    {
      v91 = 0; /*0x100364171*/
      v92 = v150; /*0x100364173*/
      v90 = v152; /*0x100364177*/
    }
    v101 = v91; /*0x100364214*/
    v91 = v90 & 0xFFFFFFFFFFFFFFF8LL; /*0x10036421a*/
    v102 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x10036421e*/
    v103 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x100364226*/
    v104 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x10036422e*/
    do /*0x100364263*/
    {
      v105 = _mm_loadl_epi64((const __m128i *)&v92[v101]); /*0x100364236*/
      v106 = _mm_add_epi8(v105, v102); /*0x10036423f*/
      *(_QWORD *)&v92[v101] = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v106, v103), v106), v104), v105).u64[0]; /*0x100364257*/
      v101 += 8LL; /*0x10036425c*/
    }
    while ( v91 != v101 ); /*0x100364263*/
    v90 = v152; /*0x100364265*/
    goto LABEL_131; /*0x100364269*/
  }
  return v3; /*0x100363ca6*/
}