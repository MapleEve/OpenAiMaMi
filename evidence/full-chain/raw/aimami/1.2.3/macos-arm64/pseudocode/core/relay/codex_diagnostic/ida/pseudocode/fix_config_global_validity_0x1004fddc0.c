// __ZN13codexmate_lib4core5relay16codex_diagnostic26fix_config_global_validity @ 0x1004fddc0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_config_global_validity::h86dd4bf45d205385(
        _QWORD *a1,
        _QWORD *a2)
{
  void *v3; // rax
  size_t v4; // rdx
  void *v5; // rsi
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // r15
  size_t v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // rsi
  __int64 v21; // r15
  __int64 v22; // r14
  unsigned __int64 v23; // rbx
  __m128i v24; // xmm2
  signed __int64 v27; // rax
  __int64 v28; // r9
  int v29; // eax
  bool v30; // zf
  __int128 *v31; // rdx
  __int128 *v32; // rax
  unsigned __int64 v33; // rbx
  __m128i v34; // xmm1
  __int64 v35; // rbx
  __int64 v36; // rax
  size_t v37; // r12
  char *v38; // rdi
  __int64 v39; // r9
  __int64 v40; // r14
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rbx
  int v43; // eax
  __m128i v44; // xmm2
  char *v45; // rbx
  __int64 v46; // r9
  char *v47; // r12
  char *v48; // rax
  _BYTE *v49; // rax
  size_t v50; // rdx
  const void *v51; // r15
  void *v52; // rax
  size_t v53; // rdx
  void *v54; // r15
  __m128i v55; // xmm1
  __int64 v56; // rax
  __int64 v57; // rdx
  _BYTE *v58; // rax
  size_t v59; // rdx
  unsigned __int16 *v60; // r8
  size_t v61; // r15
  unsigned __int64 v62; // rax
  __int128 *v64; // rbx
  __int64 v65; // r14
  __m128i v66; // xmm1
  __int128 *v67; // rsi
  __int128 *j; // rdi
  __int128 *v69; // rax
  __m128i v70; // xmm2
  int v71; // eax
  unsigned int v72; // eax
  __m128i v73; // xmm1
  __int64 v74; // rax
  __int64 v75; // rbx
  __int64 v76; // r14
  __int64 *v77; // r15
  char v78; // r14
  char *v79; // rbx
  __int64 v80; // r9
  char *v81; // r12
  char *v82; // rax
  char *v83; // rbx
  __int64 v84; // r9
  char *v85; // r12
  char *v86; // rax
  __int64 v87; // r12
  char *v88; // rbx
  char *v89; // rbx
  char *v90; // rbx
  __int64 v91; // r9
  char *v92; // r12
  char *v93; // rax
  void *v94; // rdi
  void *v95; // rsi
  size_t v96; // rsi
  void *v97; // rdi
  __int64 *v98; // rdx
  __int64 result; // rax
  __int64 v100; // rax
  void *v101; // rdi
  size_t v102; // rsi
  __int64 *v103; // r12
  __int64 v104; // r13
  __int64 v105; // rdx
  _QWORD *v106; // rax
  _QWORD v107[3]; // [rsp+0h] [rbp-2D0h] BYREF
  _QWORD v108[3]; // [rsp+18h] [rbp-2B8h] BYREF
  __int128 *v109; // [rsp+30h] [rbp-2A0h] BYREF
  __int128 *v110; // [rsp+38h] [rbp-298h]
  __int64 v111; // [rsp+48h] [rbp-288h]
  char v112[16]; // [rsp+50h] [rbp-280h] BYREF
  __int64 *v113; // [rsp+60h] [rbp-270h] BYREF
  __int64 v114; // [rsp+68h] [rbp-268h]
  __int64 v115; // [rsp+70h] [rbp-260h]
  size_t v116; // [rsp+78h] [rbp-258h]
  __int64 v117; // [rsp+80h] [rbp-250h]
  __int64 v118; // [rsp+88h] [rbp-248h]
  __int64 v119; // [rsp+90h] [rbp-240h]
  __int64 v120; // [rsp+98h] [rbp-238h]
  __int64 v121; // [rsp+A0h] [rbp-230h]
  __int64 v122; // [rsp+A8h] [rbp-228h]
  __int64 v123; // [rsp+B0h] [rbp-220h]
  __int64 v124; // [rsp+B8h] [rbp-218h]
  __int64 v125; // [rsp+F8h] [rbp-1D8h] BYREF
  __int64 v126; // [rsp+100h] [rbp-1D0h]
  __int64 v127; // [rsp+108h] [rbp-1C8h]
  unsigned __int64 v128; // [rsp+110h] [rbp-1C0h]
  size_t __n; // [rsp+118h] [rbp-1B8h]
  __int64 v130; // [rsp+120h] [rbp-1B0h]
  __int64 v131; // [rsp+128h] [rbp-1A8h]
  __m128i i; // [rsp+130h] [rbp-1A0h] BYREF
  __m128i v133; // [rsp+140h] [rbp-190h] BYREF
  __int128 *v134; // [rsp+158h] [rbp-178h] BYREF
  __int64 v135; // [rsp+160h] [rbp-170h]
  __int64 v136; // [rsp+170h] [rbp-160h]
  char v137[16]; // [rsp+178h] [rbp-158h] BYREF
  __int64 v138; // [rsp+188h] [rbp-148h] BYREF
  __int64 v139; // [rsp+190h] [rbp-140h]
  __int64 v140; // [rsp+198h] [rbp-138h]
  __int64 v141; // [rsp+1A0h] [rbp-130h]
  __int64 v142; // [rsp+1A8h] [rbp-128h]
  __int64 v143; // [rsp+1B0h] [rbp-120h]
  __int64 v144; // [rsp+1B8h] [rbp-118h]
  __int64 v145; // [rsp+1C0h] [rbp-110h]
  __int64 v146[9]; // [rsp+1C8h] [rbp-108h] BYREF
  __int64 v147; // [rsp+210h] [rbp-C0h] BYREF
  _QWORD *v148; // [rsp+218h] [rbp-B8h]
  __int64 v149; // [rsp+220h] [rbp-B0h]
  void *v150; // [rsp+228h] [rbp-A8h]
  size_t v151; // [rsp+230h] [rbp-A0h]
  _QWORD *v152; // [rsp+238h] [rbp-98h]
  __int128 *v153; // [rsp+240h] [rbp-90h]
  __int128 *v154; // [rsp+248h] [rbp-88h]
  __int128 *v155; // [rsp+250h] [rbp-80h]
  __int64 *v156; // [rsp+258h] [rbp-78h]
  void *__s2; // [rsp+260h] [rbp-70h]
  void *__s1; // [rsp+268h] [rbp-68h]
  void *__src; // [rsp+270h] [rbp-60h]
  int v160; // [rsp+278h] [rbp-58h]
  int v161; // [rsp+27Ch] [rbp-54h]
  size_t v162; // [rsp+280h] [rbp-50h] BYREF
  __int64 v163; // [rsp+288h] [rbp-48h]
  char *v164; // [rsp+290h] [rbp-40h]
  void *v165; // [rsp+298h] [rbp-38h]
  char *v166; // [rsp+2A0h] [rbp-30h]

  v148 = a1; /*0x1004fddd4*/
  v3 = (void *)a2[7]; /*0x1004fdde5*/
  v152 = a2; /*0x1004fdde9*/
  v4 = a2[8]; /*0x1004fddf0*/
  v150 = v3; /*0x1004fddfb*/
  v5 = v3; /*0x1004fde02*/
  v151 = v4; /*0x1004fde05*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v113, v3, v4); /*0x1004fde0c*/
  v6 = v114; /*0x1004fde18*/
  v128 = 0x8000000000000000LL; /*0x1004fde23*/
  if ( v113 == (__int64 *)0x8000000000000000LL ) /*0x1004fde2d*/
  {
    v7 = v114; /*0x1004fde33*/
    if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v114) ) /*0x1004fde36*/
    {
      v134 = (__int128 *)v6; /*0x1004fde43*/
      v146[0] = (__int64)&v134; /*0x1004fde51*/
      v146[1] = (__int64)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1004fde5f*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v108, &unk_1017BF94E, v146); /*0x1004fde7b*/
      v8 = v108[0]; /*0x1004fde80*/
      v9 = v108[1]; /*0x1004fde87*/
      _R13 = v108[2]; /*0x1004fde8e*/
      if ( ((unsigned __int8)v134 & 3) == 1 ) /*0x1004fdea4*/
      {
        v166 = (char *)v134 - 1; /*0x1004fdeaa*/
        v10 = *(_QWORD *)((char *)v134 - 1); /*0x1004fdeae*/
        v11 = *(_QWORD *)((char *)v134 + 7); /*0x1004fdeb2*/
        if ( *(_QWORD *)v11 ) /*0x1004fdeb6*/
          (*(void (__fastcall **)(__int64))v11)(v10); /*0x1004fdec1*/
        v12 = *(_QWORD *)(v11 + 8); /*0x1004fdec3*/
        if ( v12 ) /*0x1004fdeca*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v12, *(_QWORD *)(v11 + 16)); /*0x1004fded3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v166, 24, 8); /*0x1004fdee6*/
      }
      v13 = 10; /*0x1004fdeeb*/
      goto LABEL_163; /*0x1004fdef1*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v5); /*0x1004fdf5f*/
    v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1); /*0x1004fdf6e*/
    if ( !v16 ) /*0x1004fdf76*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 36); /*0x1004ff19b*/
    v17 = v16; /*0x1004fdf7c*/
    *(_QWORD *)(v16 + 24) = 0xBFE4809CE9A097E6LL; /*0x1004fdf89*/
    *(_QWORD *)(v16 + 16) = 0x8CBCEFA89CE598ADLL; /*0x1004fdf97*/
    *(_QWORD *)(v16 + 8) = 0xE58DB8E4206C6D6FLL; /*0x1004fdfa5*/
    *(_QWORD *)v16 = 0x742E6769666E6F63LL; /*0x1004fdfb3*/
    *(_DWORD *)(v16 + 32) = -1918573138; /*0x1004fdfb6*/
    if ( (v6 & 3) == 1 ) /*0x1004fdfc6*/
    {
      v166 = (char *)(v6 - 1); /*0x1004fdfcc*/
      v18 = *(_QWORD *)(v6 - 1); /*0x1004fdfd0*/
      v19 = *(_QWORD *)(v6 + 7); /*0x1004fdfd4*/
      if ( *(_QWORD *)v19 ) /*0x1004fdfd8*/
        (*(void (__fastcall **)(_QWORD))v19)(*(_QWORD *)(v6 - 1)); /*0x1004fdfe4*/
      v20 = *(_QWORD *)(v19 + 8); /*0x1004fdfe6*/
      if ( v20 ) /*0x1004fdfed*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v20, *(_QWORD *)(v19 + 16)); /*0x1004fdff6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v166, 24, 8); /*0x1004fe009*/
    }
    v21 = 36; /*0x1004fe00e*/
    v22 = 36; /*0x1004fe014*/
    goto LABEL_175; /*0x1004fe01a*/
  }
  v156 = v113; /*0x1004fdef6*/
  v14 = v115; /*0x1004fdefa*/
  __s2 = (void *)v114; /*0x1004fdf0e*/
  codexmate_lib::core::relay::codex_diagnostic::collect_defined_providers::h441d9e50c74bedaf(&v109, v114); /*0x1004fdf12*/
  codexmate_lib::core::relay::codex_diagnostic::collect_defined_profiles::h5802163c4c3b6724(&v134, v6); /*0x1004fdf24*/
  if ( v14 ) /*0x1004fdf2c*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v134, v6); /*0x1004fdf32*/
    v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v14, 1); /*0x1004fdf3f*/
    if ( !v15 ) /*0x1004fdf47*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v14); /*0x1004fdf55*/
  }
  else
  {
    v15 = 1; /*0x1004fe01f*/
  }
  v162 = v14; /*0x1004fe024*/
  v165 = (void *)v15; /*0x1004fe028*/
  v163 = v15; /*0x1004fe02c*/
  v164 = nullptr; /*0x1004fe030*/
  v147 = 0; /*0x1004fe038*/
  v146[0] = 0; /*0x1004fe043*/
  v146[1] = v14; /*0x1004fe04e*/
  v146[2] = (__int64)__s2; /*0x1004fe059*/
  v146[3] = v14; /*0x1004fe060*/
  v146[4] = 0; /*0x1004fe067*/
  __n = v14; /*0x1004fe072*/
  v146[5] = v14; /*0x1004fe079*/
  v146[6] = 0xA0000000ALL; /*0x1004fe08a*/
  LOBYTE(v146[7]) = 1; /*0x1004fe091*/
  LOWORD(v146[8]) = 0; /*0x1004fe098*/
  v130 = v152[73]; /*0x1004fe0af*/
  v131 = v152[74]; /*0x1004fe0bd*/
  v166 = nullptr; /*0x1004fe0c4*/
  v149 = 0; /*0x1004fe0cc*/
  v161 = 0; /*0x1004fe0d7*/
  v160 = 0; /*0x1004fe0de*/
  while ( 1 ) /*0x1004fe1b0*/
  {
    v35 = v146[2]; /*0x1004fe1b0*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1004fe1c5*/
      &v113,
      &v146[2]);
    if ( (_DWORD)v113 == 1 ) /*0x1004fe1d1*/
    {
      v36 = v146[0]; /*0x1004fe1da*/
      v146[0] = v115; /*0x1004fe1e1*/
      v37 = v115 - v36; /*0x1004fe1e8*/
      v38 = (char *)(v36 + v35); /*0x1004fe1ee*/
      if ( v115 != v36 ) /*0x1004fe1f4*/
        goto LABEL_36; /*0x1004fe1f4*/
      goto LABEL_42; /*0x1004fe1f4*/
    }
    if ( BYTE1(v146[8]) ) /*0x1004fe207*/
      break; /*0x1004fe207*/
    BYTE1(v146[8]) = 1; /*0x1004fe20d*/
    v37 = v146[1] - v146[0]; /*0x1004fe222*/
    if ( (LOBYTE(v146[8]) | (v146[1] != v146[0])) != 1 ) /*0x1004fe230*/
      break; /*0x1004fe230*/
    v38 = (char *)(v146[2] + v146[0]); /*0x1004fe236*/
    if ( v37 ) /*0x1004fe240*/
    {
LABEL_36:
      if ( v38[v37 - 1] == 10 ) /*0x1004fe248*/
      {
        if ( v37 == 1 ) /*0x1004fe250*/
        {
          v37 = 0; /*0x1004fe260*/
        }
        else if ( v38[v37 - 2] == 13 ) /*0x1004fe258*/
        {
          v37 -= 2LL; /*0x1004fe25a*/
        }
        else
        {
          --v37; /*0x1004fe265*/
        }
      }
    }
LABEL_42:
    __src = v38; /*0x1004fe270*/
    v40 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v38, v37); /*0x1004fe27c*/
    v42 = v41; /*0x1004fe27f*/
    v43 = v41 - 30; /*0x1004fe282*/
    switch ( v41 ) /*0x1004fe29e*/
    {
      case 0x1EuLL: /*0x1004fe29e*/
        v44 = _mm_or_si128( /*0x1004fe2c3*/
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)((char *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98 + 14)),
                  _mm_loadu_si128((const __m128i *)(v40 + 14))),
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)v40),
                  _mm_loadu_si128((const __m128i *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98)));
        if ( !_mm_testz_si128(v44, v44) ) /*0x1004fe2cc*/
          goto LABEL_55; /*0x1004fe2cc*/
        goto LABEL_50; /*0x1004fe2cc*/
      case 0x24uLL: /*0x1004fe29e*/
        v43 = memcmp((const void *)v40, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_99, 0x24u); /*0x1004fe322*/
        if ( !v43 ) /*0x1004fe329*/
          goto LABEL_50; /*0x1004fe329*/
        goto LABEL_55; /*0x1004fe329*/
      case 0x27uLL: /*0x1004fe29e*/
        v43 = memcmp((const void *)v40, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_100, 0x27u); /*0x1004fe2e3*/
        if ( v43 ) /*0x1004fe2ea*/
          goto LABEL_55; /*0x1004fe2ea*/
LABEL_50:
        if ( v37 > v162 - (unsigned __int64)v166 ) /*0x1004fe33a*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1004fece0*/
            &v162,
            v166,
            v37,
            1,
            1,
            v39);
          v165 = (void *)v163; /*0x1004fece9*/
          v166 = v164; /*0x1004fecf1*/
        }
        v45 = v166; /*0x1004fe344*/
        memcpy((char *)v165 + (_QWORD)v166, __src, v37); /*0x1004fe352*/
        v47 = &v45[v37]; /*0x1004fe357*/
        v164 = v47; /*0x1004fe35a*/
        v48 = v47; /*0x1004fe35e*/
        if ( (char *)v162 == v47 ) /*0x1004fe365*/
          goto LABEL_143; /*0x1004fe365*/
        goto LABEL_133; /*0x1004fe365*/
      case 0x37uLL: /*0x1004fe29e*/
        v43 = memcmp((const void *)v40, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_101, 0x37u); /*0x1004fe39b*/
        if ( v43 ) /*0x1004fe3a2*/
          goto LABEL_55; /*0x1004fe3a2*/
        goto LABEL_112; /*0x1004fe3a2*/
      case 0x3CuLL: /*0x1004fe29e*/
        v43 = memcmp((const void *)v40, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_102, 0x3Cu); /*0x1004fe8ee*/
        if ( !v43 ) /*0x1004fe8f5*/
          goto LABEL_112; /*0x1004fe8f5*/
        goto LABEL_55; /*0x1004fe8f5*/
      case 0x40uLL: /*0x1004fe29e*/
        v43 = memcmp((const void *)v40, "# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)", 0x40u); /*0x1004fe301*/
        if ( v43 ) /*0x1004fe308*/
          goto LABEL_55; /*0x1004fe308*/
LABEL_112:
        if ( v37 > v162 - (unsigned __int64)v166 ) /*0x1004fe906*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1004fecb0*/
            &v162,
            v166,
            v37,
            1,
            1,
            v39);
          v165 = (void *)v163; /*0x1004fecb9*/
          v166 = v164; /*0x1004fecc1*/
        }
        v79 = v166; /*0x1004fe910*/
        memcpy((char *)v165 + (_QWORD)v166, __src, v37); /*0x1004fe91e*/
        v81 = &v79[v37]; /*0x1004fe923*/
        v164 = v81; /*0x1004fe926*/
        v82 = v81; /*0x1004fe92a*/
        if ( (char *)v162 == v81 ) /*0x1004fe931*/
          goto LABEL_142; /*0x1004fe931*/
        goto LABEL_129; /*0x1004fe931*/
      default:
LABEL_55:
        if ( (v161 & 1) != 0 ) /*0x1004fe3b4*/
        {
          if ( v37 > v162 - (unsigned __int64)v166 ) /*0x1004fea1c*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1004febb1*/
              &v162,
              v166,
              v37,
              1,
              1,
              v39);
            v165 = (void *)v163; /*0x1004febba*/
            v166 = v164; /*0x1004febc2*/
          }
          v88 = v166; /*0x1004fea26*/
          memcpy((char *)v165 + (_QWORD)v166, __src, v37); /*0x1004fea34*/
          v81 = &v88[v37]; /*0x1004fea39*/
          v164 = v81; /*0x1004fea3c*/
          v82 = v81; /*0x1004fea40*/
          if ( (char *)v162 == v81 ) /*0x1004fea47*/
          {
LABEL_142:
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1004febcb*/
              &v162,
              v81,
              1,
              1,
              1,
              v80);
            v82 = v164; /*0x1004febe7*/
          }
LABEL_129:
          v165 = (void *)v163; /*0x1004fea4d*/
          v82[v163] = 10; /*0x1004fea55*/
          v87 = (__int64)(v81 + 1); /*0x1004fea59*/
          v164 = (char *)v87; /*0x1004fea5c*/
          LOBYTE(v82) = 1; /*0x1004fea60*/
          v161 = (int)v82; /*0x1004fea62*/
          goto LABEL_123; /*0x1004fea65*/
        }
        if ( v42 && *(_BYTE *)v40 == 91 ) /*0x1004fe3c3*/
        {
          if ( v37 > v162 - (unsigned __int64)v166 ) /*0x1004feacf*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1004fec5b*/
              &v162,
              v166,
              v37,
              1,
              1,
              v39);
            v165 = (void *)v163; /*0x1004fec64*/
            v166 = v164; /*0x1004fec6c*/
          }
          v90 = v166; /*0x1004fead9*/
          memcpy((char *)v165 + (_QWORD)v166, __src, v37); /*0x1004feae7*/
          v92 = &v90[v37]; /*0x1004feaec*/
          v164 = v92; /*0x1004feaef*/
          v93 = v92; /*0x1004feaf3*/
          if ( (char *)v162 == v92 ) /*0x1004feafa*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1004fec8c*/
              &v162,
              v92,
              1,
              1,
              1,
              v91);
            v93 = v164; /*0x1004fec91*/
          }
          v165 = (void *)v163; /*0x1004feb04*/
          v93[v163] = 10; /*0x1004feb08*/
          v87 = (__int64)(v92 + 1); /*0x1004feb0c*/
          v164 = (char *)v87; /*0x1004feb0f*/
          LOBYTE(v93) = 1; /*0x1004feb13*/
          v160 = (int)v93; /*0x1004feb15*/
LABEL_139:
          v161 = 0; /*0x1004feb18*/
          goto LABEL_123; /*0x1004feb1f*/
        }
        if ( (v160 & 1) != 0 ) /*0x1004fe3cd*/
        {
          LOBYTE(v43) = v42 != 0; /*0x1004fea6d*/
          v160 = v43; /*0x1004fea70*/
          if ( v37 > v162 - (unsigned __int64)v166 ) /*0x1004fea7e*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1004fec06*/
              &v162,
              v166,
              v37,
              1,
              1,
              v39);
            v165 = (void *)v163; /*0x1004fec0f*/
            v166 = v164; /*0x1004fec17*/
          }
          v89 = v166; /*0x1004fea88*/
          memcpy((char *)v165 + (_QWORD)v166, __src, v37); /*0x1004fea96*/
          v47 = &v89[v37]; /*0x1004fea9b*/
          v164 = v47; /*0x1004fea9e*/
          v48 = v47; /*0x1004feaa2*/
          if ( (char *)v162 == v47 ) /*0x1004feaa9*/
          {
LABEL_143:
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1004fec20*/
              &v162,
              v47,
              1,
              1,
              1,
              v46);
            v48 = v164; /*0x1004fec3c*/
          }
LABEL_133:
          v165 = (void *)v163; /*0x1004feaaf*/
          v48[v163] = 10; /*0x1004feab7*/
          v87 = (__int64)(v47 + 1); /*0x1004feabb*/
          v164 = (char *)v87; /*0x1004feabe*/
          goto LABEL_139; /*0x1004feac2*/
        }
        if ( (unsigned __int8)codexmate_lib::core::relay::codex_diagnostic::is_model_provider_assignment::h8e88b4f08f7d63e2( /*0x1004fe3f7*/
                                v40,
                                v42)
          && (v49 = (_BYTE *)codexmate_lib::core::relay::codex_diagnostic::extract_toml_value::hd17329acc7a6a57b(
                               v40,
                               v42),
              (v51 = v49) != nullptr) )
        {
          _R13 = v50; /*0x1004fe3fd*/
          if ( v50 /*0x1004fe4a0*/
            && (v50 != 6
             || (*v49 | (unsigned __int8)(32 * ((unsigned __int8)(*v49 - 65) < 0x1Au))) != 111
             || (v49[1] | (unsigned __int8)(32 * ((unsigned __int8)(v49[1] - 65) < 0x1Au))) != 112
             || (v49[2] | (unsigned __int8)(32 * ((unsigned __int8)(v49[2] - 65) < 0x1Au))) != 101
             || (v49[3] | (unsigned __int8)(32 * ((unsigned __int8)(v49[3] - 65) < 0x1Au))) != 110
             || (v49[4] | (unsigned __int8)(32 * ((unsigned __int8)(v49[4] - 65) < 0x1Au))) != 97
             || (v49[5] | (unsigned __int8)(32 * ((unsigned __int8)(v49[5] - 65) < 0x1Au))) != 105) )
          {
            if ( !v111 ) /*0x1004fe4ae*/
              goto LABEL_125; /*0x1004fe4ae*/
            v33 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v112, v49, v50); /*0x1004fe4c6*/
            _RCX = v109; /*0x1004fe4cd*/
            v31 = v110; /*0x1004fe4d4*/
            v34 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v33 >> 57), (__m128i)0LL); /*0x1004fe4e3*/
            v32 = v109 - 1; /*0x1004fe4e8*/
            __s1 = nullptr; /*0x1004fe4ec*/
            v153 = v109; /*0x1004fe4f4*/
            for ( i = v34; ; v34 = _mm_load_si128(&i) ) /*0x1004fe4fb*/
            {
              v23 = (unsigned __int64)v31 & v33; /*0x1004fe0f0*/
              v24 = _mm_loadu_si128((const __m128i *)((char *)_RCX + v23)); /*0x1004fe0f3*/
              _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v24, v34)); /*0x1004fe100*/
              if ( _R14D ) /*0x1004fe108*/
                break; /*0x1004fe108*/
LABEL_28:
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v24, (__m128i)-1LL)) ) /*0x1004fe17b*/
                goto LABEL_125; /*0x1004fe181*/
              v33 = (unsigned __int64)__s1 + v23 + 16; /*0x1004fe18b*/
              __s1 = (char *)__s1 + 16; /*0x1004fe194*/
              _RCX = v153; /*0x1004fe198*/
            }
            v154 = v31; /*0x1004fe10a*/
            v155 = v32; /*0x1004fe111*/
            v133 = v24; /*0x1004fe115*/
            while ( 1 ) /*0x1004fe11d*/
            {
              __asm { tzcnt ecx, r14d } /*0x1004fe11d*/
              _RCX = (__int128 *)(16 * ((unsigned __int64)v31 & ((unsigned __int64)_RCX + v23))); /*0x1004fe128*/
              v27 = (char *)v32 - (char *)_RCX; /*0x1004fe12c*/
              if ( _R13 == *(_QWORD *)(v27 + 8) && !memcmp(v51, *(const void **)v27, _R13) ) /*0x1004fe13e*/
                break; /*0x1004fe13e*/
              v29 = _R14D - 1; /*0x1004fe14b*/
              LOWORD(v29) = _R14D & (_R14D - 1); /*0x1004fe14f*/
              v30 = (_WORD)v29 == 0; /*0x1004fe14f*/
              _R14D = v29; /*0x1004fe153*/
              v31 = v154; /*0x1004fe156*/
              v32 = v155; /*0x1004fe15d*/
              v24 = _mm_load_si128(&v133); /*0x1004fe161*/
              if ( v30 ) /*0x1004fe169*/
                goto LABEL_28; /*0x1004fe169*/
            }
          }
        }
        else if ( codexmate_lib::core::relay::codex_diagnostic::is_top_level_model_key::h36abcbf43fb4c921(v40, v42) /*0x1004fe530*/
               && (v52 = (void *)codexmate_lib::core::relay::codex_diagnostic::extract_toml_value::hd17329acc7a6a57b(
                                   v40,
                                   v42),
                   (v54 = v52) != nullptr) )
        {
          _R13 = v53; /*0x1004fe532*/
          if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1004fe566*/
                                  "cc-switchcc_switchcodex-switch[model_providers.cccircuit_breakerprovider_router",
                                  9u,
                                  v52)
            || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                  "cc_switchcodex-switch[model_providers.cccircuit_breakerprovider_router",
                                  9u,
                                  v54) )
          {
            goto LABEL_125; /*0x1004fe56d*/
          }
        }
        else if ( v42 >= 0x16 /*0x1004fe5d0*/
               && (v55 = _mm_or_si128(
                           _mm_xor_si128(
                             _mm_loadu_si128((const __m128i *)(v40 + 6)),
                             *(__m128i *)"reasoning_effortprocessingModeIdperModeShortcutslastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id"),
                           _mm_xor_si128(_mm_loadu_si128((const __m128i *)v40), (__m128i)xmmword_1015FBD50)),
                   _mm_testz_si128(v55, v55))
               && core::slice::memchr::memchr_aligned::hda948616f04379f9(61, v40, v42) == 1
               && (v56 = codexmate_lib::core::relay::codex_diagnostic::extract_toml_value::hd17329acc7a6a57b(v40, v42)) != 0 )
        {
          if ( !(unsigned __int8)codexmate_lib::core::relay::codex_diagnostic::is_valid_codex_reasoning_effort::ha785e284deba20f7( /*0x1004fe5d8*/
                                   v56,
                                   v57) )
            goto LABEL_125; /*0x1004fe5df*/
        }
        else if ( codexmate_lib::core::relay::codex_diagnostic::is_profile_assignment::hb6d548fc73d167bb(v40, v42) /*0x1004fe614*/
               && (v58 = (_BYTE *)codexmate_lib::core::relay::codex_diagnostic::extract_toml_value::hd17329acc7a6a57b(
                                    v40,
                                    v42),
                   (v60 = (unsigned __int16 *)v58) != nullptr) )
        {
          if ( v59 /*0x1004fe6ba*/
            && (v59 != 6
             || (*v58 | (unsigned __int8)(32 * ((unsigned __int8)(*v58 - 65) < 0x1Au))) != 111
             || (v58[1] | (unsigned __int8)(32 * ((unsigned __int8)(v58[1] - 65) < 0x1Au))) != 112
             || (v58[2] | (unsigned __int8)(32 * ((unsigned __int8)(v58[2] - 65) < 0x1Au))) != 101
             || (v58[3] | (unsigned __int8)(32 * ((unsigned __int8)(v58[3] - 65) < 0x1Au))) != 110
             || (v58[4] | (unsigned __int8)(32 * ((unsigned __int8)(v58[4] - 65) < 0x1Au))) != 97
             || (v58[5] | (unsigned __int8)(32 * ((unsigned __int8)(v58[5] - 65) < 0x1Au))) != 105) )
          {
            if ( v136 ) /*0x1004fe6c8*/
            {
              v61 = v59; /*0x1004fe6d8*/
              __s1 = v58; /*0x1004fe6db*/
              v62 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v137, v58, v59); /*0x1004fe6df*/
              v59 = v61; /*0x1004fe6e4*/
              v60 = (unsigned __int16 *)__s1; /*0x1004fe6e7*/
              _RCX = v62 >> 57; /*0x1004fe6ee*/
              v64 = v134; /*0x1004fe6f2*/
              v65 = v135; /*0x1004fe6f9*/
              v66 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v62 >> 57), (__m128i)0LL); /*0x1004fe708*/
              v67 = v134 - 1; /*0x1004fe70d*/
              for ( j = nullptr; ; ++j ) /*0x1004fe711*/
              {
                v69 = (__int128 *)(v65 & v62); /*0x1004fe713*/
                v70 = _mm_loadu_si128((const __m128i *)((char *)v69 + (_QWORD)v64)); /*0x1004fe716*/
                _R13 = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v70, v66)); /*0x1004fe723*/
                if ( (_DWORD)_R13 ) /*0x1004fe72b*/
                  break; /*0x1004fe72b*/
LABEL_99:
                _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v70, (__m128i)-1LL)); /*0x1004fe7ba*/
                if ( (_DWORD)_RCX ) /*0x1004fe7c8*/
                  goto LABEL_116; /*0x1004fe7c8*/
                v62 = (unsigned __int64)j + (_QWORD)v69 + 16; /*0x1004fe7ce*/
              }
              v153 = v69; /*0x1004fe731*/
              i = v66; /*0x1004fe738*/
              v154 = v67; /*0x1004fe740*/
              v155 = j; /*0x1004fe747*/
              v133 = v70; /*0x1004fe74b*/
              while ( 1 ) /*0x1004fe753*/
              {
                __asm { tzcnt ecx, r13d } /*0x1004fe753*/
                _RCX = 16 * (v65 & ((unsigned __int64)v69 + _RCX)); /*0x1004fe75e*/
                if ( v59 == *(_QWORD *)((char *)v67 - _RCX + 8) ) /*0x1004fe76c*/
                {
                  v71 = memcmp(v60, *(const void **)((char *)v67 - _RCX), v61); /*0x1004fe777*/
                  v59 = v61; /*0x1004fe77c*/
                  v60 = (unsigned __int16 *)__s1; /*0x1004fe77f*/
                  if ( !v71 ) /*0x1004fe785*/
                    break; /*0x1004fe785*/
                }
                v72 = _R13 - 1; /*0x1004fe78b*/
                LOWORD(v72) = _R13 & (_R13 - 1); /*0x1004fe78f*/
                v30 = (_WORD)v72 == 0; /*0x1004fe78f*/
                _R13 = v72; /*0x1004fe793*/
                v69 = v153; /*0x1004fe796*/
                v66 = _mm_load_si128(&i); /*0x1004fe79d*/
                v67 = v154; /*0x1004fe7a5*/
                j = v155; /*0x1004fe7ac*/
                v70 = _mm_load_si128(&v133); /*0x1004fe7b0*/
                if ( v30 ) /*0x1004fe7b8*/
                  goto LABEL_99; /*0x1004fe7b8*/
              }
            }
            else
            {
LABEL_116:
              if ( v59 != 6 || *(_DWORD *)v60 ^ 0x616D6961 | v60[2] ^ 0x3169 ) /*0x1004fe977*/
                goto LABEL_125; /*0x1004fe979*/
            }
          }
        }
        else if ( v42 >= 0x12 ) /*0x1004fe7e4*/
        {
          v73 = _mm_or_si128( /*0x1004fe808*/
                  _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v40 + 16)), (__m128i)xmmword_1015FBD70),
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)v40), (__m128i)xmmword_1015FBD60));
          if ( _mm_testz_si128(v73, v73) ) /*0x1004fe80c*/
          {
            if ( core::slice::memchr::memchr_aligned::hda948616f04379f9(61, v40, v42) == 1 ) /*0x1004fe82b*/
            {
              v74 = codexmate_lib::core::relay::codex_diagnostic::extract_toml_value::hd17329acc7a6a57b(v40, v42); /*0x1004fe837*/
              if ( v74 ) /*0x1004fe83f*/
              {
                codexmate_lib::core::relay::codex_diagnostic::unescape_toml_basic_string::h71fa7a97db3de3a3(&v125, v74); /*0x1004fe84f*/
                v75 = v126; /*0x1004fe854*/
                v76 = v127; /*0x1004fe85b*/
                if ( v127 /*0x1004fe896*/
                  && (std::sys::fs::metadata::h32fa16d3052ea535(&v113, v126, v127),
                      v77 = v113,
                      core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
                        v113,
                        v114),
                      v77) )
                {
                  v78 = codexmate_lib::core::relay::codex_diagnostic::path_is_under_dir::hbebf74f73253219f( /*0x1004fe8b5*/
                          v75,
                          v76,
                          v130,
                          v131);
                  if ( v125 ) /*0x1004fe8c2*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, v125, 1); /*0x1004fe8cc*/
                  if ( !v78 ) /*0x1004fe8d4*/
                  {
LABEL_125:
                    v147 = ++v149; /*0x1004fe9f6*/
                    v160 = 0; /*0x1004fe9fd*/
                    v161 = 0; /*0x1004fea04*/
                    v87 = (__int64)v166; /*0x1004fea0b*/
                    goto LABEL_123; /*0x1004fea0f*/
                  }
                }
                else if ( v125 ) /*0x1004feb2e*/
                {
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, v125, 1); /*0x1004feb3c*/
                }
              }
            }
          }
        }
        if ( v37 > v162 - (unsigned __int64)v166 ) /*0x1004fe98b*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1004feb5c*/
            &v162,
            v166,
            v37,
            1,
            1,
            v28);
          v165 = (void *)v163; /*0x1004feb65*/
          v166 = v164; /*0x1004feb6d*/
        }
        v83 = v166; /*0x1004fe995*/
        memcpy((char *)v165 + (_QWORD)v166, __src, v37); /*0x1004fe9a3*/
        v85 = &v83[v37]; /*0x1004fe9a8*/
        v164 = v85; /*0x1004fe9ab*/
        v86 = v85; /*0x1004fe9af*/
        if ( (char *)v162 == v85 ) /*0x1004fe9b6*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1004feb8d*/
            &v162,
            v85,
            1,
            1,
            1,
            v84);
          v86 = v164; /*0x1004feb92*/
        }
        v165 = (void *)v163; /*0x1004fe9c0*/
        v86[v163] = 10; /*0x1004fe9c4*/
        v87 = (__int64)(v85 + 1); /*0x1004fe9c8*/
        v164 = (char *)v87; /*0x1004fe9cb*/
LABEL_123:
        v166 = (char *)v87; /*0x1004fe9cf*/
        if ( BYTE1(v146[8]) ) /*0x1004fe9da*/
          goto LABEL_145; /*0x1004fe9da*/
        break; /*0x1004fe9da*/
    }
  }
  v87 = (__int64)v166; /*0x1004fecfa*/
LABEL_145:
  if ( v87 == __n ) /*0x1004fed08*/
  {
    v94 = v165; /*0x1004fed0a*/
    v95 = __s2; /*0x1004fed0e*/
    if ( !memcmp(v165, __s2, __n) ) /*0x1004fed19*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v94, v95); /*0x1004fef32*/
      v22 = 36; /*0x1004fef37*/
      v100 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1); /*0x1004fef47*/
      if ( !v100 ) /*0x1004fef4f*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 36); /*0x1004ff1ac*/
      v17 = v100; /*0x1004fef55*/
      *(_QWORD *)(v100 + 24) = 0xB8E681A6E8809CE9LL; /*0x1004fef62*/
      *(_QWORD *)(v100 + 16) = 0xAE94E9AEBDE78D85LL; /*0x1004fef70*/
      *(_QWORD *)(v100 + 8) = 0xE980B1E5A885E588LL; /*0x1004fef7e*/
      *(_QWORD *)v100 = 0x95E6A097E6A097E6LL; /*0x1004fef8c*/
      *(_DWORD *)(v100 + 32) = -2037323899; /*0x1004fef8f*/
      v21 = 36; /*0x1004fef96*/
      v101 = v165; /*0x1004fef9c*/
      v102 = v162; /*0x1004fefa0*/
      if ( !v162 ) /*0x1004fefa7*/
        goto LABEL_167; /*0x1004fefa7*/
      goto LABEL_166; /*0x1004fefa7*/
    }
  }
  codexmate_lib::core::relay::codex_diagnostic::backup_config_before_fix::hbfd176d416815de7(&v113, v152); /*0x1004fed2d*/
  v13 = (__int64)v113; /*0x1004fed32*/
  v8 = v114; /*0x1004fed39*/
  v9 = v115; /*0x1004fed40*/
  if ( v113 != (__int64 *)11 ) /*0x1004fed4b*/
  {
    _R13 = v116; /*0x1004fedb2*/
    v138 = v117; /*0x1004fedc0*/
    v139 = v118; /*0x1004fedce*/
    v140 = v119; /*0x1004feddc*/
    v141 = v120; /*0x1004fedea*/
    v142 = v121; /*0x1004fedf8*/
    v143 = v122; /*0x1004fee06*/
    v144 = v123; /*0x1004fee14*/
    v145 = v124; /*0x1004fee22*/
    v96 = v162; /*0x1004fee29*/
    v97 = v165; /*0x1004fee30*/
    if ( v162 ) /*0x1004fee34*/
      goto LABEL_154; /*0x1004fee34*/
    goto LABEL_155; /*0x1004fee34*/
  }
  if ( 2 * v114 ) /*0x1004fed4d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v115, v114, 1); /*0x1004fed65*/
  v8 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x1004fed8a*/
         v150,
         v151,
         (__int64)v165,
         v87,
         1);
  if ( !v8 ) /*0x1004fed90*/
  {
    v113 = &v147; /*0x1004ff137*/
    v114 = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1004ff145*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v107, &unk_1017C0901, &v113); /*0x1004ff161*/
    v21 = v107[0]; /*0x1004ff166*/
    v17 = v107[1]; /*0x1004ff16d*/
    v22 = v107[2]; /*0x1004ff174*/
    v101 = v165; /*0x1004ff17b*/
    v102 = v162; /*0x1004ff17f*/
    if ( !v162 ) /*0x1004ff186*/
    {
LABEL_167:
      if ( v135 && 17 * v135 != -33 ) /*0x1004fefcd*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v134[-v135 - 1], 17 * v135 + 33, 16); /*0x1004fefe2*/
      if ( v110 && 17LL * (_QWORD)v110 != -33 ) /*0x1004ff001*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v109[-(_QWORD)v110 - 1], 17LL * (_QWORD)v110 + 33, 16); /*0x1004ff016*/
      if ( v156 ) /*0x1004ff022*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v156, 1); /*0x1004ff02d*/
LABEL_175:
      std::fs::read_to_string::inner::hcce2334f4117b5b3(&v113, v150, v151); /*0x1004ff032*/
      v103 = v113; /*0x1004ff04c*/
      v104 = v114; /*0x1004ff053*/
      if ( v113 == (__int64 *)v128 ) /*0x1004ff061*/
      {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h306501beb209f7a4( /*0x1004ff070*/
          0x8000000000000000LL,
          v114);
        v104 = 0; /*0x1004ff075*/
      }
      else
      {
        v105 = v115; /*0x1004ff07a*/
      }
      codexmate_lib::core::relay::codex_diagnostic::check_config_global_validity::h5949efa6748ca09c( /*0x1004ff0a0*/
        &v113,
        v104,
        v105,
        v152[73],
        v152[74]);
      v138 = v21; /*0x1004ff0a5*/
      v139 = v17; /*0x1004ff0ac*/
      v140 = v22; /*0x1004ff0b3*/
      codexmate_lib::core::relay::codex_diagnostic::checked_fix_result::hcecd381739201c5f( /*0x1004ff0db*/
        v146,
        &anon_92869709a5e99ce1936aa4e326b6c562_616,
        0x16u,
        &v113,
        &v138);
      v106 = v148; /*0x1004ff0e0*/
      qmemcpy(v148 + 1, v146, 0x48u); /*0x1004ff0f7*/
      *v106 = 11; /*0x1004ff0fa*/
      result = 2LL * (_QWORD)v103; /*0x1004ff101*/
      if ( 2LL * (_QWORD)v103 ) /*0x1004ff101*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v104, v103, 1); /*0x1004ff119*/
      return result; /*0x1004ff119*/
    }
LABEL_166:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v101, v102, 1); /*0x1004fefa9*/
    goto LABEL_167; /*0x1004fefae*/
  }
  v13 = 2; /*0x1004fed96*/
  v96 = v162; /*0x1004fed9c*/
  v97 = v165; /*0x1004feda3*/
  if ( !v162 ) /*0x1004feda7*/
    goto LABEL_155; /*0x1004feda7*/
LABEL_154:
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97, v96, 1); /*0x1004fee36*/
LABEL_155:
  if ( v135 && 17 * v135 != -33 ) /*0x1004fee5a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v134[-v135 - 1], 17 * v135 + 33, 16); /*0x1004fee6f*/
  if ( v110 && 17LL * (_QWORD)v110 != -33 ) /*0x1004fee8e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v109[-(_QWORD)v110 - 1], 17LL * (_QWORD)v110 + 33, 16); /*0x1004feea3*/
  if ( v156 ) /*0x1004feeaf*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v156, 1); /*0x1004feeba*/
LABEL_163:
  v98 = v148; /*0x1004feebf*/
  v148[11] = v145; /*0x1004feecd*/
  v98[10] = v144; /*0x1004feed8*/
  v98[9] = v143; /*0x1004feee3*/
  v98[8] = v142; /*0x1004feeee*/
  v98[7] = v141; /*0x1004feef9*/
  v98[6] = v140; /*0x1004fef04*/
  result = v138; /*0x1004fef08*/
  v98[5] = v139; /*0x1004fef16*/
  v98[4] = result; /*0x1004fef1a*/
  *v98 = v13; /*0x1004fef1e*/
  v98[1] = v8; /*0x1004fef21*/
  v98[2] = v9; /*0x1004fef25*/
  v98[3] = _R13; /*0x1004fef29*/
  return result; /*0x1004ff11e*/
}