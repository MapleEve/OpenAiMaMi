// __ZN13codexmate_lib4core5relay15config_takeover7restore @ 0x1008fe6c0 | 基线 same-set
// [FULL IDA decompiler]

_QWORD *__fastcall codexmate_lib::core::relay::config_takeover::restore::h21110a3f65c0585f(
        _QWORD *a1,
        unsigned __int64 a2)
{
  _QWORD *v2; // rbx
  size_t v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __m128i v6; // xmm0
  __int64 v7; // rax
  __int64 v8; // rax
  void *v9; // r12
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // r8
  char v14; // bl
  char v15; // r15
  __int64 v16; // rcx
  signed __int64 v17; // rcx
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // r12
  __int64 v22; // r13
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r12
  bool v25; // al
  __m128i v26; // xmm2
  bool v27; // zf
  size_t v28; // rdx
  const void *v29; // rdi
  const void *v30; // rsi
  __int64 v31; // rbx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  signed __int64 v34; // rdx
  __int64 v36; // rcx
  signed __int64 v37; // rcx
  __int64 v38; // rcx
  char v39; // r14
  char v40; // r15
  __int64 v41; // rbx
  signed __int64 *v42; // rdi
  const char *v43; // rsi
  __int64 v44; // r9
  __int64 v45; // rax
  signed __int64 *v46; // rbx
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // r13
  bool v50; // al
  __m128i v51; // xmm2
  bool v52; // zf
  size_t v53; // rdx
  __int64 v54; // rbx
  _QWORD *v55; // rax
  __int64 v56; // rcx
  signed __int64 v57; // rdx
  __int64 v58; // rbx
  __int64 v59; // r15
  __int64 v60; // r12
  __int64 v61; // r14
  const char *v62; // r13
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rbx
  __int64 v67; // r12
  __int64 v68; // r14
  char *v69; // r15
  char v70; // al
  __int64 v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rdx
  unsigned __int64 v79; // rbx
  signed __int64 v80; // r13
  __int64 v81; // r12
  __int64 v82; // r14
  signed __int64 v83; // r15
  __int64 v84; // r15
  size_t v85; // r12
  __int64 v86; // r14
  size_t v87; // r15
  const void *v88; // rbx
  size_t v89; // r14
  __int64 v90; // rbx
  __int64 v91; // rax
  __int64 v92; // rdi
  __int64 v93; // r15
  __int64 v94; // r14
  const void *v95; // r13
  size_t v96; // r12
  __int64 v97; // r14
  __int64 v98; // rax
  const char *v99; // r14
  __int64 v100; // rcx
  __int64 v101; // r12
  __int64 v102; // rbx
  __int64 v103; // rax
  __int64 v104; // r14
  const void *v105; // rbx
  size_t v106; // r15
  __int64 v107; // r13
  __int64 v108; // rsi
  const void *v109; // rax
  void *v110; // rbx
  __int64 v111; // rax
  __int64 v112; // r9
  size_t v113; // r15
  __int64 v114; // rbx
  size_t v115; // r13
  __int64 v116; // rax
  __int64 v117; // rbx
  __int64 v118; // rdx
  __int64 v119; // rax
  __int64 v120; // r12
  size_t v121; // r13
  __int64 v122; // r9
  __int64 v123; // rbx
  __int64 v124; // r13
  __int64 v125; // rax
  __int64 v126; // rax
  char *v127; // r13
  void *v128; // rdi
  char *v129; // rsi
  char **v130; // r8
  unsigned __int64 v131; // rdx
  __int64 v132; // r12
  __int64 v133; // r9
  unsigned __int64 v134; // rbx
  unsigned __int64 v135; // rax
  void *v136; // r13
  __int64 v137; // r9
  size_t v138; // rbx
  size_t v139; // rax
  __int64 v140; // rcx
  int v141; // eax
  __int64 v142; // rax
  __int64 v143; // r12
  __int64 v144; // r13
  __int64 v145; // r15
  __int64 v146; // rsi
  _QWORD *v147; // rdx
  signed __int64 v148; // rcx
  signed __int64 v149; // r12
  _QWORD *v150; // rax
  __int64 v151; // rsi
  __int64 v152; // rsi
  _QWORD *v153; // rax
  __int64 v154; // r12
  _QWORD *v155; // r13
  __int64 v156; // rbx
  __int64 v157; // r14
  _QWORD *v158; // r15
  __int64 v159; // rsi
  __int64 v160; // rax
  __int64 v161; // rbx
  _QWORD *v162; // r14
  __int64 v163; // rsi
  char *v164; // rbx
  __int64 v165; // r14
  _QWORD *v166; // r15
  __int64 v167; // rsi
  char *v168; // rbx
  const char *v169; // r14
  _QWORD *v170; // r15
  __int64 v171; // rsi
  signed __int64 v172; // rbx
  signed __int64 v173; // r15
  _QWORD *v174; // r12
  __int64 v175; // rsi
  _QWORD v176[11]; // [rsp+8h] [rbp-2D8h] BYREF
  char *v177; // [rsp+60h] [rbp-280h]
  __int64 v178; // [rsp+68h] [rbp-278h]
  __int64 v179; // [rsp+70h] [rbp-270h]
  size_t v180; // [rsp+78h] [rbp-268h]
  void *v181; // [rsp+80h] [rbp-260h]
  _QWORD v182[12]; // [rsp+88h] [rbp-258h] BYREF
  __int64 v183; // [rsp+E8h] [rbp-1F8h] BYREF
  const void *v184; // [rsp+F0h] [rbp-1F0h]
  size_t v185; // [rsp+F8h] [rbp-1E8h]
  size_t v186; // [rsp+100h] [rbp-1E0h]
  __int64 v187; // [rsp+108h] [rbp-1D8h]
  __int64 v188; // [rsp+110h] [rbp-1D0h] BYREF
  char *v189; // [rsp+118h] [rbp-1C8h]
  __int64 v190; // [rsp+120h] [rbp-1C0h]
  signed __int64 v191; // [rsp+128h] [rbp-1B8h] BYREF
  signed __int64 v192; // [rsp+130h] [rbp-1B0h]
  signed __int64 v193; // [rsp+138h] [rbp-1A8h]
  __int64 v194; // [rsp+140h] [rbp-1A0h] BYREF
  char *v195; // [rsp+148h] [rbp-198h]
  const char *v196; // [rsp+150h] [rbp-190h]
  const char *v197; // [rsp+158h] [rbp-188h]
  __int64 v198; // [rsp+160h] [rbp-180h] BYREF
  __int64 v199; // [rsp+168h] [rbp-178h]
  __int64 v200; // [rsp+170h] [rbp-170h]
  __int64 v201; // [rsp+178h] [rbp-168h] BYREF
  __int64 v202; // [rsp+180h] [rbp-160h]
  unsigned __int64 v203; // [rsp+188h] [rbp-158h]
  signed __int64 v204[11]; // [rsp+190h] [rbp-150h] BYREF
  _QWORD *v205; // [rsp+1E8h] [rbp-F8h]
  const char *v206; // [rsp+1F0h] [rbp-F0h]
  _QWORD v207[13]; // [rsp+1F8h] [rbp-E8h] BYREF
  __int64 v208; // [rsp+260h] [rbp-80h]
  void *__src; // [rsp+268h] [rbp-78h]
  size_t __n; // [rsp+270h] [rbp-70h]
  unsigned __int64 v211; // [rsp+278h] [rbp-68h]
  __int64 v212; // [rsp+280h] [rbp-60h] BYREF
  void *v213; // [rsp+288h] [rbp-58h]
  __int64 v214; // [rsp+290h] [rbp-50h]
  size_t v215; // [rsp+298h] [rbp-48h] BYREF
  __int64 v216; // [rsp+2A0h] [rbp-40h]
  __int64 v217; // [rsp+2A8h] [rbp-38h]
  __int64 v218; // [rsp+2B0h] [rbp-30h]

  v2 = a1;
  v3 = *(_QWORD *)(a2 + 584);
  v211 = a2;
  v4 = *(_QWORD *)(a2 + 592);
  codexmate_lib::core::relay::config_takeover::quarantine_damaged_backups::he1fa00f5327fc085((__int64)v207, v3, v4);
  v5 = v207[0];
  v204[0] = v207[1];
  v204[1] = v207[2];
  v204[2] = v207[3];
  if ( v207[0] != 11 )
  {
    a1[12] = v207[11];
    a1[11] = v207[10];
    a1[10] = v207[9];
    a1[9] = v207[8];
    a1[8] = v207[7];
    a1[7] = v207[6];
    v16 = v207[4];
    a1[6] = v207[5];
    a1[5] = v16;
    a1[4] = v204[2];
    v17 = v204[0];
    a1[3] = v204[1];
    a1[2] = v17;
    a1[1] = v5;
    *a1 = 1;
    return v2;
  }
  v182[9] = v204[0];
  v182[10] = v204[1];
  v182[11] = v204[2];
  v182[0] = 0;
  v182[1] = 8;
  v182[2] = 0;
  v182[3] = 0;
  v182[4] = 8;
  v182[5] = 0;
  v182[6] = 0;
  v182[7] = 8;
  v182[8] = 0;
  *(double *)v6.i64 = codexmate_lib::core::relay::config_takeover::read_backup::hd8bcee2af149bcd9(v207, v3, v4);
  v7 = v207[0];
  qmemcpy(v204, &v207[1], sizeof(v204));
  if ( v207[0] != 11 )
  {
    qmemcpy(a1 + 2, v204, 0x58u);
    a1[1] = v7;
    *a1 = 1;
    goto LABEL_51;
  }
  qmemcpy(v176, v204, sizeof(v176));
  *(double *)v6.i64 = codexmate_lib::core::relay::config_takeover::read_legacy_backup_lines::h7a336c29ef32316f(
                        v207,
                        v3,
                        v4);
  v8 = v207[0];
  v204[0] = v207[1];
  v204[1] = v207[2];
  v204[2] = v207[3];
  if ( v207[0] != 11 )
  {
    a1[12] = v207[11];
    a1[11] = v207[10];
    a1[10] = v207[9];
    a1[9] = v207[8];
    a1[8] = v207[7];
    a1[7] = v207[6];
    v36 = v207[4];
    a1[6] = v207[5];
    a1[5] = v36;
    a1[4] = v204[2];
    v37 = v204[0];
    a1[3] = v204[1];
    a1[2] = v37;
    a1[1] = v8;
    *a1 = 1;
    if ( v176[0] != 0x8000000000000000LL )
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverBackup$GT$::hc16d7bf4b9db4817(v176);
    goto LABEL_51;
  }
  v191 = v204[0];
  v192 = v204[1];
  v193 = v204[2];
  v205 = a1;
  if ( v176[0] == 0x8000000000000000LL && !v193 )
  {
    qmemcpy(a1 + 1, v182, 0x60u);
    *a1 = 0;
    v39 = 0;
    goto LABEL_283;
  }
  v208 = v176[0];
  v9 = *(void **)(v211 + 56);
  v180 = *(_QWORD *)(v211 + 64);
  *(double *)v6.i64 = codexmate_lib::core::relay::config_takeover::read_optional_text::hb639c55c55ba33b6(
                        v207,
                        (__int64)v9,
                        v180);
  v10 = v207[0];
  v11 = v207[1];
  v12 = v207[2];
  v13 = v207[3];
  if ( v207[0] != 11 )
  {
    v2[12] = v207[11];
    v2[11] = v207[10];
    v2[10] = v207[9];
    v2[9] = v207[8];
    v2[8] = v207[7];
    v2[7] = v207[6];
    v38 = v207[4];
    v2[6] = v207[5];
    v2[5] = v38;
    v2[2] = v11;
    v2[3] = v12;
    v2[4] = v13;
    v2[1] = v10;
    *v2 = 1;
    v39 = 1;
    goto LABEL_283;
  }
  v181 = v9;
  v187 = v4;
  v186 = v3;
  v218 = v207[1];
  v212 = 0;
  v213 = (void *)8;
  v214 = 0;
  v207[0] = 0;
  v207[1] = v207[3];
  __src = (void *)v207[2];
  v207[4] = 0;
  __n = v207[3];
  v207[5] = v207[3];
  v207[6] = 0xA0000000ALL;
  LOBYTE(v207[7]) = 1;
  LOWORD(v207[8]) = 0;
  v14 = 0;
  v15 = 0;
  while ( 1 )
  {
    v18 = v207[2];
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
      v204,
      &v207[2]);
    if ( LODWORD(v204[0]) == 1 )
    {
      v19 = v207[0];
      v207[0] = v204[2];
      v20 = v204[2] - v19;
      v21 = v19 + v18;
      if ( v204[2] != v19 )
        goto LABEL_17;
      goto LABEL_23;
    }
    if ( BYTE1(v207[8]) )
      break;
    BYTE1(v207[8]) = 1;
    v20 = v207[1] - v207[0];
    if ( (LOBYTE(v207[8]) | (v207[1] != v207[0])) != 1 )
      break;
    v21 = v207[2] + v207[0];
    if ( v20 )
    {
LABEL_17:
      if ( *(_BYTE *)(v21 + v20 - 1) == 10 )
      {
        if ( v20 == 1 )
        {
          v20 = 0;
        }
        else if ( *(_BYTE *)(v21 + v20 - 2) == 13 )
        {
          v20 -= 2;
        }
        else
        {
          --v20;
        }
      }
    }
LABEL_23:
    v22 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v21, v20);
    v24 = v23;
    v25 = 0;
    switch ( v23 )
    {
      case 0x1EuLL:
        v6 = _mm_loadu_si128((const __m128i *)(v22 + 14));
        v26 = _mm_or_si128(
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)((char *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98 + 14)),
                  v6),
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)v22),
                  _mm_loadu_si128((const __m128i *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98)));
        v27 = _mm_testz_si128(v26, v26);
        goto LABEL_32;
      case 0x24uLL:
        v28 = 36;
        v29 = (const void *)v22;
        v30 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_99;
        goto LABEL_31;
      case 0x27uLL:
        v28 = 39;
        v29 = (const void *)v22;
        v30 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_100;
LABEL_31:
        v27 = memcmp(v29, v30, v28) == 0;
LABEL_32:
        v25 = v27;
        if ( !(v27 | v14 & 1) )
          goto LABEL_33;
        goto LABEL_9;
      case 0x37uLL:
        if ( !memcmp((const void *)v22, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_101, 0x37u) )
          goto LABEL_47;
        goto LABEL_27;
      case 0x3CuLL:
        if ( !memcmp((const void *)v22, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_102, 0x3Cu) )
          goto LABEL_47;
        goto LABEL_27;
      case 0x40uLL:
        if ( !memcmp((const void *)v22, "# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)", 0x40u) )
        {
LABEL_47:
          v14 = 1;
        }
        else
        {
LABEL_27:
          v25 = 0;
LABEL_28:
          if ( (v14 & 1) != 0 )
          {
LABEL_9:
            v14 = !v25;
            goto LABEL_10;
          }
LABEL_33:
          if ( v24 && *(_BYTE *)v22 == 91 && *(_BYTE *)(v22 + v24 - 1) == 93 )
          {
            if ( v24 == 1 || *(char *)(v22 + 1) <= -65 )
              core::str::slice_error_fail::h480e51fbd8b15eba(
                v22,
                v24,
                1,
                v24 - 1,
                &anon_4fd0d0f33f5bcd90fdaba20400e954f2_97);
LABEL_40:
            v15 = 1;
            v14 = 0;
            goto LABEL_10;
          }
          if ( (v15 & 1) != 0 )
            goto LABEL_40;
          codexmate_lib::core::relay::config_takeover::top_level_assignment_key::h031d1c7d19bea489(
            v204,
            (_BYTE *)v22,
            v24);
          if ( v204[0] != 0x8000000000000000LL )
          {
            v31 = v214;
            if ( v214 == v212 )
              *(double *)v6.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v212);
            v32 = v213;
            v33 = 3 * v31;
            *((_QWORD *)v213 + v33 + 2) = v204[2];
            v34 = v204[0];
            v32[v33 + 1] = v204[1];
            v32[v33] = v34;
            v214 = v31 + 1;
          }
          v15 = 0;
          v14 = 0;
        }
LABEL_10:
        if ( BYTE1(v207[8]) )
          goto LABEL_56;
        break;
      default:
        goto LABEL_28;
    }
  }
LABEL_56:
  v194 = v212;
  v195 = (char *)v213;
  v196 = (const char *)v214;
  v212 = 0;
  v213 = (void *)8;
  v214 = 0;
  v207[0] = 0;
  v207[1] = __n;
  v207[2] = __src;
  v207[3] = __n;
  v207[4] = 0;
  v207[5] = __n;
  v207[6] = 0xA0000000ALL;
  LOBYTE(v207[7]) = 1;
  LOWORD(v207[8]) = 0;
  v40 = 0;
  while ( 2 )
  {
    v41 = v207[2];
    v42 = v204;
    v43 = (const char *)&v207[2];
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
      v204,
      &v207[2]);
    if ( LODWORD(v204[0]) == 1 )
    {
      v45 = v207[0];
      v207[0] = v204[2];
      v43 = (const char *)(v204[2] - v45);
      v46 = (signed __int64 *)(v45 + v41);
      if ( v204[2] == v45 )
        goto LABEL_71;
LABEL_65:
      if ( v43[(_QWORD)v46 - 1] == 10 )
      {
        if ( v43 == (const char *)1 )
        {
          v43 = nullptr;
        }
        else if ( v43[(_QWORD)v46 - 2] == 13 )
        {
          v43 -= 2;
        }
        else
        {
          --v43;
        }
      }
LABEL_71:
      v42 = v46;
      v47 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v46, v43);
      v49 = v48;
      v50 = 0;
      switch ( v48 )
      {
        case 30LL:
          v6 = _mm_loadu_si128((const __m128i *)(v47 + 14));
          v51 = _mm_or_si128(
                  _mm_xor_si128(
                    _mm_loadu_si128((const __m128i *)((char *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98 + 14)),
                    v6),
                  _mm_xor_si128(
                    _mm_loadu_si128((const __m128i *)v47),
                    _mm_loadu_si128((const __m128i *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98)));
          v52 = _mm_testz_si128(v51, v51);
          goto LABEL_80;
        case 36LL:
          v53 = 36;
          v42 = (signed __int64 *)v47;
          v43 = (const char *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_99;
          goto LABEL_79;
        case 39LL:
          v53 = 39;
          v42 = (signed __int64 *)v47;
          v43 = (const char *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_100;
LABEL_79:
          v52 = memcmp(v42, v43, v53) == 0;
LABEL_80:
          v50 = v52;
          if ( !(v52 | v40 & 1) )
            goto LABEL_81;
          goto LABEL_57;
        case 55LL:
          v42 = (signed __int64 *)v47;
          v43 = (const char *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_101;
          if ( !memcmp((const void *)v47, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_101, 0x37u) )
            goto LABEL_91;
          goto LABEL_75;
        case 60LL:
          v42 = (signed __int64 *)v47;
          v43 = (const char *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_102;
          if ( !memcmp((const void *)v47, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_102, 0x3Cu) )
            goto LABEL_91;
          goto LABEL_75;
        case 64LL:
          v42 = (signed __int64 *)v47;
          v43 = "# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)";
          if ( !memcmp((const void *)v47, "# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)", 0x40u) )
          {
LABEL_91:
            v40 = 1;
          }
          else
          {
LABEL_75:
            v50 = 0;
LABEL_76:
            if ( (v40 & 1) != 0 )
            {
LABEL_57:
              v40 = !v50;
            }
            else
            {
LABEL_81:
              if ( v49 && *(_BYTE *)v47 == 91 && *(_BYTE *)(v47 + v49 - 1) == 93 )
              {
                if ( v49 == 1 || *(char *)(v47 + 1) <= -65 )
                  core::str::slice_error_fail::h480e51fbd8b15eba(
                    v47,
                    v49,
                    1,
                    v49 - 1,
                    &anon_4fd0d0f33f5bcd90fdaba20400e954f2_97);
                v42 = v204;
                *(double *)v6.i64 = codexmate_lib::core::relay::config_takeover::normalize_section_key::h5aa1cacb5786d356(
                                      v204,
                                      v47 + 1,
                                      v49 - 2);
                v54 = v214;
                if ( v214 == v212 )
                {
                  v42 = &v212;
                  *(double *)v6.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v212);
                }
                v55 = v213;
                v56 = 3 * v54;
                *((_QWORD *)v213 + v56 + 2) = v204[2];
                v57 = v204[0];
                v43 = (const char *)v204[1];
                v55[v56 + 1] = v204[1];
                v55[v56] = v57;
                v214 = v54 + 1;
              }
              v40 = 0;
            }
          }
          if ( !BYTE1(v207[8]) )
            continue;
          goto LABEL_94;
        default:
          goto LABEL_76;
      }
    }
    break;
  }
  if ( !BYTE1(v207[8]) )
  {
    BYTE1(v207[8]) = 1;
    v43 = (const char *)(v207[1] - v207[0]);
    if ( (LOBYTE(v207[8]) | (v207[1] != v207[0])) == 1 )
    {
      v46 = (signed __int64 *)(v207[2] + v207[0]);
      if ( v43 )
        goto LABEL_65;
      goto LABEL_71;
    }
  }
LABEL_94:
  v188 = v212;
  v189 = (char *)v213;
  v190 = v214;
  v198 = 0;
  v199 = 8;
  v200 = 0;
  v201 = 0;
  v202 = 8;
  v203 = 0;
  if ( v208 == 0x8000000000000000LL )
  {
    v208 = (__int64)v195;
    v206 = v196;
  }
  else
  {
    v58 = v176[1];
    v208 = (__int64)v195;
    v206 = v196;
    v59 = 24LL * v176[2];
    v60 = 0;
    v61 = v176[1];
    while ( v59 != v60 )
    {
      v43 = *(const char **)(v61 + 8);
      v42 = (signed __int64 *)v211;
      if ( !(unsigned __int8)codexmate_lib::core::relay::config_takeover::is_aimami_owned_top_level_line::h65b2fd252fc2ca9f(
                               v211,
                               (__int64)v43,
                               *(_QWORD *)(v61 + 16)) )
      {
        v42 = (signed __int64 *)v208;
        v43 = v206;
        codexmate_lib::core::relay::config_takeover::restore::_$u7b$$u7b$closure$u7d$$u7d$::h4dcb7008cb6c9996(
          v208,
          v206,
          *(_QWORD *)(v58 + v60 + 8),
          *(_QWORD *)(v58 + v60 + 16),
          &v198,
          v182,
          *(double *)v6.i64);
      }
      v61 += 24;
      v60 += 24;
    }
    if ( v176[5] )
    {
      v62 = (const char *)v176[4];
      v179 = v176[4] + 48LL * v176[5];
      v177 = v189;
      v178 = 24 * v190;
LABEL_104:
      while ( 2 )
      {
        v197 = v62 + 48;
        v66 = *((_QWORD *)v62 + 1);
        v67 = *((_QWORD *)v62 + 2);
        v68 = v178;
        v69 = v177;
        do
        {
          if ( !v68 )
          {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v207, v62);
            v75 = v182[5];
            if ( v182[5] == v182[3] )
              *(double *)v6.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v182[3]);
            v76 = v182[4];
            v77 = 3 * v75;
            *(_QWORD *)(v182[4] + 8 * v77 + 16) = v207[2];
            v78 = v207[0];
            *(_QWORD *)(v76 + 8 * v77 + 8) = v207[1];
            *(_QWORD *)(v76 + 8 * v77) = v78;
            v182[5] = v75 + 1;
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v212, v62);
            v42 = v204;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7fbe18e4ad208c44(
              v204,
              v62 + 24);
            v207[2] = v214;
            v207[1] = v213;
            v207[0] = v212;
            v207[5] = v204[2];
            v207[4] = v204[1];
            v207[3] = v204[0];
            v79 = v203;
            if ( v203 == v201 )
            {
              v42 = &v201;
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v201);
            }
            v63 = v202;
            v64 = 48 * v79;
            *(_QWORD *)(v202 + v64 + 40) = v207[5];
            *(_QWORD *)(v63 + v64 + 32) = v207[4];
            *(_QWORD *)(v63 + v64 + 24) = v207[3];
            *(_QWORD *)(v63 + v64 + 16) = v207[2];
            v65 = v207[0];
            v43 = (const char *)v207[1];
            *(_QWORD *)(v63 + v64 + 8) = v207[1];
            *(_QWORD *)(v63 + v64) = v65;
            v203 = v79 + 1;
            v62 = v197;
            if ( v197 == (const char *)v179 )
              goto LABEL_115;
            goto LABEL_104;
          }
          v70 = codexmate_lib::core::relay::config_takeover::section_overlaps::h06c28989e9c4d786(
                  *((_QWORD *)v69 + 1),
                  *((_QWORD *)v69 + 2),
                  v66,
                  v67);
          v69 += 24;
          v68 -= 24;
        }
        while ( !v70 );
        v42 = v207;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v207, v62);
        v71 = v182[8];
        if ( v182[8] == v182[6] )
        {
          v42 = &v182[6];
          *(double *)v6.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v182[6]);
        }
        v72 = v182[7];
        v73 = 3 * v71;
        *(_QWORD *)(v182[7] + 8 * v73 + 16) = v207[2];
        v74 = v207[0];
        v43 = (const char *)v207[1];
        *(_QWORD *)(v72 + 8 * v73 + 8) = v207[1];
        *(_QWORD *)(v72 + 8 * v73) = v74;
        v182[8] = v71 + 1;
        v62 = v197;
        if ( v197 != (const char *)v179 )
          continue;
        break;
      }
    }
  }
LABEL_115:
  v80 = v192;
  v81 = 24 * v193;
  v82 = 0;
  v83 = v192;
  while ( v81 != v82 )
  {
    v43 = *(const char **)(v83 + 8);
    v42 = (signed __int64 *)v211;
    if ( !(unsigned __int8)codexmate_lib::core::relay::config_takeover::is_aimami_owned_top_level_line::h65b2fd252fc2ca9f(
                             v211,
                             (__int64)v43,
                             *(_QWORD *)(v83 + 16)) )
    {
      v42 = (signed __int64 *)v208;
      v43 = v206;
      codexmate_lib::core::relay::config_takeover::restore::_$u7b$$u7b$closure$u7d$$u7d$::h4dcb7008cb6c9996(
        v208,
        v206,
        *(_QWORD *)(v80 + v82 + 8),
        *(_QWORD *)(v80 + v82 + 16),
        &v198,
        v182,
        *(double *)v6.i64);
    }
    v83 += 24LL;
    v82 += 24;
  }
  v84 = v200;
  if ( !(v200 | v203) )
  {
    v87 = __n;
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v207, __n, 0, 1, 1);
    v86 = v207[1];
    if ( LODWORD(v207[0]) == 1 )
    {
      v85 = v207[2];
      goto LABEL_123;
    }
    v88 = (const void *)v207[2];
    memcpy((void *)v207[2], __src, v87);
    v183 = v86;
    v184 = v88;
    v185 = v87;
    v89 = v186;
LABEL_221:
    v141 = memcmp(v88, __src, v87);
    v140 = v87;
    if ( !v141 )
      goto LABEL_230;
    goto LABEL_222;
  }
  v85 = __n + 256;
  if ( (__int64)(__n + 256) < 0 )
  {
    v86 = 0;
    goto LABEL_123;
  }
  v208 = v203;
  v90 = v199;
  v206 = (const char *)v202;
  if ( __n != -256 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v42, v43);
    v86 = 1;
    v91 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v85, 1);
    if ( v91 )
    {
      v92 = v91;
      goto LABEL_131;
    }
LABEL_123:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v86, v85);
  }
  v92 = 1;
LABEL_131:
  v215 = v85;
  v216 = v92;
  v217 = 0;
  if ( v84 )
  {
    v211 = 24 * v84;
    v93 = 0;
    v94 = 0;
    do
    {
      v95 = *(const void **)(v90 + v93 + 8);
      v96 = *(_QWORD *)(v90 + v93 + 16);
      if ( v96 > v215 - v94 )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          &v215,
          v94,
          *(_QWORD *)(v90 + v93 + 16),
          1,
          1,
          v44);
        v92 = v216;
        v94 = v217;
      }
      memcpy((void *)(v94 + v92), v95, v96);
      v97 = v96 + v94;
      v217 = v97;
      v98 = v97;
      if ( v215 == v97 )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          &v215,
          v97,
          1,
          1,
          1,
          v44);
        v98 = v217;
      }
      v92 = v216;
      *(_BYTE *)(v216 + v98) = 10;
      v94 = v97 + 1;
      v217 = v94;
      v93 += 24;
    }
    while ( v211 != v93 );
  }
  v212 = 0;
  v213 = (void *)1;
  v214 = 0;
  if ( v208 )
  {
    v99 = v206;
    v197 = &v206[48 * v208];
    v100 = 1;
    v101 = 0;
    v102 = 0;
    while ( !v102 )
    {
      v102 = 0;
      v103 = *((_QWORD *)v99 + 5);
      v206 = v99;
      if ( v103 )
        goto LABEL_147;
LABEL_140:
      v99 = v206 + 48;
      if ( v206 + 48 == v197 )
        goto LABEL_156;
    }
    if ( v212 == v101 )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v212, v101, 1, 1, 1, v44);
      v100 = (__int64)v213;
      v101 = v214;
    }
    *(_BYTE *)(v100 + v101) = 10;
    v214 = ++v102;
    v101 = v102;
    v103 = *((_QWORD *)v99 + 5);
    v206 = v99;
    if ( !v103 )
      goto LABEL_140;
LABEL_147:
    v211 = *((_QWORD *)v99 + 4);
    v208 = 24 * v103;
    v104 = 0;
    do
    {
      v105 = *(const void **)(v211 + v104 + 8);
      v106 = *(_QWORD *)(v211 + v104 + 16);
      v107 = v212;
      v108 = v101;
      if ( v106 > v212 - v101 )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          &v212,
          v101,
          *(_QWORD *)(v211 + v104 + 16),
          1,
          1,
          v44);
        v109 = v105;
        v107 = v212;
        v108 = v214;
      }
      else
      {
        v109 = *(const void **)(v211 + v104 + 8);
      }
      v110 = v213;
      memcpy((char *)v213 + v108, v109, v106);
      v100 = (__int64)v110;
      v214 = v106 + v108;
      v111 = v106 + v108;
      if ( v107 == v106 + v108 )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          &v212,
          v107,
          1,
          1,
          1,
          v44);
        v100 = (__int64)v213;
        v111 = v214;
      }
      *(_BYTE *)(v100 + v111) = 10;
      v101 = v106 + v108 + 1;
      v214 = v101;
      v104 += 24;
      v102 = v101;
    }
    while ( v208 != v104 );
    goto LABEL_140;
  }
  v101 = 0;
LABEL_156:
  core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2(
    v207,
    __src,
    __n,
    "# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)",
    55);
  v89 = v186;
  _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5(
    v204,
    v207);
  v113 = v101;
  if ( LOBYTE(v204[0]) )
  {
    v114 = v217;
    if ( v101 )
    {
      v115 = v204[1];
      v211 = v204[1];
      if ( v217 )
      {
        v116 = v217;
        if ( v215 == v217 )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v215,
            v217,
            1,
            1,
            1,
            v112);
          v116 = v217;
          v115 = v211;
        }
        *(_BYTE *)(v216 + v116) = 10;
        v117 = v114 + 1;
        v217 = v117;
      }
      else
      {
        v117 = 0;
      }
      if ( v115 )
      {
        v130 = &off_10196DB30;
        if ( __n <= v115 )
        {
          if ( __n != v115 )
            goto LABEL_191;
        }
        else if ( *((char *)__src + v115) < -64 )
        {
LABEL_191:
          v131 = 0;
          goto LABEL_210;
        }
      }
      if ( v115 > v215 - v117 )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          &v215,
          v117,
          v115,
          1,
          1,
          v112);
        v117 = v217;
        v115 = v211;
      }
      v132 = v216;
      memcpy((void *)(v216 + v117), __src, v115);
      v134 = v115 + v117;
      v217 = v134;
      if ( v134 >= 2 )
      {
        if ( *(_WORD *)(v132 + v134 - 2) == 2570 )
          goto LABEL_202;
      }
      else if ( !v134 )
      {
        v134 = 0;
LABEL_202:
        v136 = v213;
        if ( v113 > v215 - v134 )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v215,
            v134,
            v113,
            1,
            1,
            v133);
          v132 = v216;
          v134 = v217;
        }
        memcpy((void *)(v134 + v132), v136, v113);
        v138 = v113 + v134;
        v217 = v138;
        v139 = v138;
        if ( v215 == v138 )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v215,
            v138,
            1,
            1,
            1,
            v137);
          v139 = v217;
        }
        v123 = v138 + 1;
        v120 = v216;
        *(_BYTE *)(v216 + v139) = 10;
        v217 = v123;
        v131 = v211;
        if ( v211 )
        {
          if ( __n <= v211 )
          {
            if ( __n != v211 )
              goto LABEL_209;
          }
          else if ( *((char *)__src + v211) < -64 )
          {
LABEL_209:
            v130 = &off_10196DB48;
            v211 = __n;
LABEL_210:
            core::str::slice_error_fail::h480e51fbd8b15eba(__src, __n, v131, v211, v130);
          }
        }
        v113 = __n - v211;
        if ( __n - v211 > v215 - v123 )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v215,
            v123,
            __n - v211,
            1,
            1,
            v137);
          v120 = v216;
          v123 = v217;
        }
        v129 = (char *)__src + v211;
        v128 = (void *)(v120 + v123);
        goto LABEL_215;
      }
      v135 = v134;
      if ( v215 == v134 )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          &v215,
          v134,
          1,
          1,
          1,
          v133);
        v132 = v216;
        v135 = v217;
      }
      *(_BYTE *)(v132 + v135) = 10;
      v217 = ++v134;
      goto LABEL_202;
    }
  }
  else
  {
    v114 = v217;
  }
  if ( v114 )
  {
    core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(__src, __n);
    if ( v118 )
    {
      v119 = v114;
      if ( v215 == v114 )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          &v215,
          v114,
          1,
          1,
          1,
          v112);
        v119 = v217;
      }
      *(_BYTE *)(v216 + v119) = 10;
      v217 = ++v114;
    }
  }
  else
  {
    v114 = 0;
  }
  if ( __n > v215 - v114 )
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
      &v215,
      v114,
      __n,
      1,
      1,
      v112);
    v114 = v217;
  }
  v120 = v216;
  v121 = __n;
  memcpy((void *)(v216 + v114), __src, __n);
  v123 = v121 + v114;
  v217 = v123;
  if ( v113 )
  {
    if ( v123 )
    {
      if ( *(_BYTE *)(v120 + v123 - 1) == 10 )
      {
        v124 = 1;
        if ( v123 == 1 )
          goto LABEL_181;
      }
      else
      {
        v125 = v123;
        if ( v215 == v123 )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v215,
            v123,
            1,
            1,
            1,
            v122);
          v120 = v216;
          v125 = v217;
        }
        *(_BYTE *)(v120 + v125) = 10;
        v217 = ++v123;
      }
      v124 = v123;
      if ( *(_WORD *)(v120 + v123 - 2) != 2570 )
      {
LABEL_181:
        v126 = v124;
        if ( v215 == v124 )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v215,
            v124,
            1,
            1,
            1,
            v122);
          v120 = v216;
          v126 = v217;
        }
        *(_BYTE *)(v120 + v126) = 10;
        v217 = v124 + 1;
        v123 = v124 + 1;
      }
    }
    else
    {
      v123 = 0;
    }
    v127 = (char *)v213;
    if ( v113 > v215 - v123 )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        &v215,
        v123,
        v113,
        1,
        1,
        v122);
      v123 = v217;
    }
    v120 = v216;
    v128 = (void *)(v216 + v123);
    v129 = v127;
LABEL_215:
    memcpy(v128, v129, v113);
    v123 += v113;
    v217 = v123;
  }
  codexmate_lib::core::relay::config_takeover::tidy_blank_lines::ha2f63e114ed499f6(&v183, v120, v123);
  if ( v212 )
    *(double *)v6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v213, v212, 1);
  if ( v215 )
    *(double *)v6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v120, v215, 1);
  v88 = v184;
  v140 = v185;
  v87 = __n;
  if ( v185 == __n )
    goto LABEL_221;
LABEL_222:
  v142 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(
           v181,
           v180,
           (__int64)v88,
           v140,
           1);
  if ( v142 )
  {
    v212 = v142;
    v204[0] = (signed __int64)&v212;
    v204[1] = (signed __int64)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v207, &unk_1017C75B4, v204);
    v204[0] = v207[0];
    v204[1] = v207[1];
    v204[2] = v207[2];
    if ( (v212 & 3) == 1 )
    {
      v143 = v212 - 1;
      v144 = *(_QWORD *)(v212 - 1);
      v145 = *(_QWORD *)(v212 + 7);
      if ( *(_QWORD *)v145 )
        (*(void (__fastcall **)(__int64, double))v145)(v144, *(double *)v6.i64);
      v146 = *(_QWORD *)(v145 + 8);
      if ( v146 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v144, v146, *(_QWORD *)(v145 + 16));
      *(double *)v6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v143, 24, 8);
    }
    v147 = v205;
    v205[1] = 10;
    v148 = v204[1];
    v147[2] = v204[0];
    v147[3] = v148;
    v147[4] = v204[2];
    *v147 = 1;
LABEL_244:
    if ( v183 )
      *(double *)v6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v183, 1);
    v211 = v203;
    if ( v203 )
    {
      v208 = v202;
      v154 = 0;
      do
      {
        v155 = (_QWORD *)(v208 + 48 * v154);
        if ( *v155 )
          *(double *)v6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v155[1], *v155, 1);
        v156 = v155[4];
        v157 = v155[5];
        if ( v157 )
        {
          v158 = (_QWORD *)(v156 + 8);
          do
          {
            v159 = *(v158 - 1);
            if ( v159 )
              *(double *)v6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v158, v159, 1);
            v158 += 3;
            --v157;
          }
          while ( v157 );
        }
        v160 = v155[3];
        if ( v160 )
          *(double *)v6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v156, 24 * v160, 8);
        ++v154;
      }
      while ( v154 != v211 );
    }
    if ( v201 )
      *(double *)v6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v202, 48 * v201, 8);
    v161 = v200;
    if ( v200 )
    {
      v162 = (_QWORD *)(v199 + 8);
      do
      {
        v163 = *(v162 - 1);
        if ( v163 )
          *(double *)v6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v162, v163, 1);
        v162 += 3;
        --v161;
      }
      while ( v161 );
    }
    if ( v198 )
      *(double *)v6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v199, 24 * v198, 8);
    v164 = v189;
    v165 = v190;
    if ( v190 )
    {
      v166 = v189 + 8;
      do
      {
        v167 = *(v166 - 1);
        if ( v167 )
          *(double *)v6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v166, v167, 1);
        v166 += 3;
        --v165;
      }
      while ( v165 );
    }
    if ( v188 )
      *(double *)v6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v164, 24 * v188, 8);
    v168 = v195;
    v169 = v196;
    if ( v196 )
    {
      v170 = v195 + 8;
      do
      {
        v171 = *(v170 - 1);
        if ( v171 )
          *(double *)v6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v170, v171, 1);
        v170 += 3;
        --v169;
      }
      while ( v169 );
    }
    if ( v194 )
      *(double *)v6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v168, 24 * v194, 8);
    v39 = 1;
    if ( v218 )
      *(double *)v6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v218, 1);
LABEL_283:
    v172 = v192;
    v173 = v193;
    if ( v193 )
    {
      v174 = (_QWORD *)(v192 + 8);
      do
      {
        v175 = *(v174 - 1);
        if ( v175 )
          *(double *)v6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v174, v175, 1);
        v174 += 3;
        --v173;
      }
      while ( v173 );
    }
    if ( v191 )
      *(double *)v6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v172, 24 * v191, 8);
    if ( v176[0] != 0x8000000000000000LL )
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverBackup$GT$::hc16d7bf4b9db4817(v176);
    v2 = v205;
    if ( !v39 )
      return v2;
LABEL_51:
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..RestoreSummary$GT$::h602bb0437fd5edef(
      v182,
      *(double *)v6.i64);
    return v2;
  }
LABEL_230:
  std::path::Path::_join::hb1a495d4f06b13b8(
    v204,
    v89,
    v187,
    "router-takeover-backup.json# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)",
    27);
  v149 = v204[1];
  *(double *)v6.i64 = codexmate_lib::core::relay::config_takeover::remove_backup_file::h49b2e159fcfe07d9(
                        v207,
                        (void *)v204[1],
                        v204[2],
                        (__int64)"router-takeover-backup.json# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)",
                        27);
  if ( LODWORD(v207[0]) != 11 )
    goto LABEL_242;
  if ( v204[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v149, v204[0], 1);
  std::path::Path::_join::hb1a495d4f06b13b8(v204, v89, v187, &anon_155c4da9b5393270cfa7378e2b52c417_290, 34);
  v149 = v204[1];
  *(double *)v6.i64 = codexmate_lib::core::relay::config_takeover::remove_backup_file::h49b2e159fcfe07d9(
                        v207,
                        (void *)v204[1],
                        v204[2],
                        (__int64)&anon_155c4da9b5393270cfa7378e2b52c417_290,
                        34);
  if ( LODWORD(v207[0]) != 11 )
  {
LABEL_242:
    v153 = v205;
    qmemcpy(v205 + 1, v207, 0x60u);
    *v153 = 1;
    if ( v204[0] )
      *(double *)v6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v149, v204[0], 1);
    goto LABEL_244;
  }
  if ( v204[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v149, v204[0], 1);
  v150 = v205;
  qmemcpy(v205 + 1, v182, 0x60u);
  *v150 = 0;
  v151 = v183;
  if ( v183 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v183, 1);
  core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..config_takeover..TakeoverSection$GT$$GT$::h05debf5d1a9563be(
    &v201,
    v151);
  core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h4f9ccf4de3b51eef(&v198, v151);
  core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h4f9ccf4de3b51eef(&v188, v151);
  core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h4f9ccf4de3b51eef(&v194, v151);
  v152 = v218;
  if ( v218 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v218, 1);
  core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h4f9ccf4de3b51eef(&v191, v152);
  v2 = v205;
  if ( v176[0] != 0x8000000000000000LL )
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverBackup$GT$::hc16d7bf4b9db4817(v176);
  return v2;
}
