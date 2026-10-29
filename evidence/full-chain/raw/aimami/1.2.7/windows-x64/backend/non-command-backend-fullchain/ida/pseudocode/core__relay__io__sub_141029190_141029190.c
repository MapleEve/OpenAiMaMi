// win 1.2.7 | module src/core/relay/io.rs | ea 0x141029190 | name sub_141029190
// win 1.2.7 | module src/core/relay/io.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_141029190(__int64 a1, int a2, _QWORD *a3, __int64 a4)
{
  unsigned __int32 v6; // r15d
  __int32 v7; // r14d
  int v8; // ebx
  unsigned __int32 v9; // eax
  __int64 v10; // r13
  __int64 v11; // r12
  _QWORD *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rcx
  __m128i v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int64 v27; // rbx
  unsigned __int64 v28; // rax
  __int64 v30; // rdi
  __int64 v31; // r8
  __m128i v32; // xmm0
  __m128i v33; // xmm7
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 i; // r9
  unsigned __int64 v37; // rax
  __m128i v38; // xmm8
  __int64 v40; // r15
  __int64 v41; // r13
  int v42; // eax
  int v43; // eax
  bool v44; // zf
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  char v49; // cl
  __int64 v50; // r15
  __int64 v51; // rcx
  const __m128i *v52; // rsi
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  void *v56; // rax
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rcx
  __m128i v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm2
  __int64 v63; // rsi
  __int64 v64; // rdi
  _QWORD *v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rcx
  void *v70; // rax
  __int64 v71; // rsi
  __int64 v72; // rax
  __int64 v73; // rcx
  __m128i v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm2
  __int64 v77; // rdx
  __int64 v78; // rdi
  __int64 v79; // rcx
  void *v80; // rax
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rcx
  __m128i v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm2
  __int64 v87; // rcx
  void *v88; // rax
  __int64 v89; // rsi
  __int64 v90; // rcx
  void *v91; // rax
  __int64 v92; // rsi
  __int64 v93; // rax
  __int64 v94; // rcx
  __m128i v95; // xmm0
  __int128 v96; // xmm1
  __int128 v97; // xmm2
  char v98; // si
  char v99; // di
  char v100; // al
  _QWORD *v101; // rdi
  __int64 v102; // rsi
  __m128i v103; // xmm0
  __m128i si128; // xmm0
  __int64 v105; // rdi
  __int64 v106; // rax
  __int64 v107; // rcx
  __m128i v108; // xmm0
  __int128 v109; // xmm1
  __int128 v110; // xmm2
  __int128 v111; // xmm3
  __int128 v112; // xmm4
  unsigned __int64 v113; // rdi
  __m128i *v114; // rax
  unsigned __int64 v115; // r8
  __m128i *v116; // rdi
  __int64 v118; // rdi
  __int64 v119; // rsi
  __int64 v120; // rbx
  const __m128i *v121; // r14
  __m128i v123; // xmm0
  __int64 v124; // rax
  __int64 v125; // rdx
  unsigned __int64 v126; // rax
  __int64 v127; // rdi
  __int64 v129; // rcx
  _QWORD *v130; // rdx
  __int64 v131; // [rsp+38h] [rbp-48h]
  __int64 v132; // [rsp+40h] [rbp-40h]
  unsigned __int64 v134; // [rsp+50h] [rbp-30h]
  __int64 v135; // [rsp+58h] [rbp-28h]
  __m128i v136; // [rsp+60h] [rbp-20h] BYREF
  __m256i v137; // [rsp+70h] [rbp-10h] BYREF
  __m128i v138; // [rsp+90h] [rbp+10h] BYREF
  __int64 v139; // [rsp+A0h] [rbp+20h]
  _QWORD *v140; // [rsp+A8h] [rbp+28h]
  __int64 v141; // [rsp+B0h] [rbp+30h]
  unsigned __int64 v142; // [rsp+B8h] [rbp+38h]
  __m128i v143; // [rsp+C0h] [rbp+40h]
  __int64 v144; // [rsp+D0h] [rbp+50h]
  __m128i v145; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v146; // [rsp+F0h] [rbp+70h]
  __m128i v147; // [rsp+F8h] [rbp+78h] BYREF
  __int128 v148; // [rsp+108h] [rbp+88h]
  __int128 v149; // [rsp+118h] [rbp+98h]
  __int128 v150; // [rsp+128h] [rbp+A8h]
  __int128 v151; // [rsp+138h] [rbp+B8h]
  void *v152; // [rsp+148h] [rbp+C8h]
  _BYTE v153[48]; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v154; // [rsp+180h] [rbp+100h]
  __int128 v155; // [rsp+190h] [rbp+110h]
  void *v156; // [rsp+1A0h] [rbp+120h]
  __m128i v157; // [rsp+1B0h] [rbp+130h] BYREF
  __m256i v158; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v159; // [rsp+1E0h] [rbp+160h]
  __int128 v160; // [rsp+1F0h] [rbp+170h]
  void *v161; // [rsp+200h] [rbp+180h]
  __m128i *v162; // [rsp+208h] [rbp+188h]
  unsigned __int64 v163; // [rsp+210h] [rbp+190h]
  __int64 v164; // [rsp+218h] [rbp+198h]
  __int64 v165; // [rsp+220h] [rbp+1A0h]
  __m128i v166; // [rsp+228h] [rbp+1A8h]
  __int64 v167; // [rsp+238h] [rbp+1B8h]
  __m128i v168; // [rsp+240h] [rbp+1C0h]
  __int64 v169; // [rsp+250h] [rbp+1D0h]
  __int64 v170; // [rsp+258h] [rbp+1D8h]
  __int64 v171; // [rsp+270h] [rbp+1F0h]
  __int64 v172; // [rsp+278h] [rbp+1F8h]
  __int64 v173; // [rsp+280h] [rbp+200h]
  __int64 v174; // [rsp+288h] [rbp+208h]
  __int64 v175; // [rsp+290h] [rbp+210h]
  unsigned __int64 v176; // [rsp+298h] [rbp+218h]
  unsigned __int64 v177; // [rsp+2A0h] [rbp+220h]
  int v178; // [rsp+2A8h] [rbp+228h]
  char v179; // [rsp+2ACh] [rbp+22Ch]
  char v180; // [rsp+2ADh] [rbp+22Dh]
  char v181; // [rsp+2AEh] [rbp+22Eh]
  char v182; // [rsp+2AFh] [rbp+22Fh]
  unsigned __int64 v183; // [rsp+2B0h] [rbp+230h]
  __int64 v184; // [rsp+2B8h] [rbp+238h]
  __int64 v185; // [rsp+2C0h] [rbp+240h]
  __int64 v186; // [rsp+2C8h] [rbp+248h]
  __m128i v187; // [rsp+2D0h] [rbp+250h] BYREF
  __int64 v188; // [rsp+2E0h] [rbp+260h]
  unsigned __int64 v189; // [rsp+2E8h] [rbp+268h]
  __int64 v190; // [rsp+2F0h] [rbp+270h]
  __int64 v191; // [rsp+2F8h] [rbp+278h]
  __m128i v192; // [rsp+300h] [rbp+280h] BYREF
  __int64 v193; // [rsp+310h] [rbp+290h]
  unsigned __int64 v194; // [rsp+318h] [rbp+298h]
  _QWORD *v195; // [rsp+320h] [rbp+2A0h]
  __int64 v196; // [rsp+328h] [rbp+2A8h]
  __int64 v197; // [rsp+330h] [rbp+2B0h]
  __int128 v198; // [rsp+338h] [rbp+2B8h] BYREF
  __int64 v199; // [rsp+348h] [rbp+2C8h]
  __int64 v200; // [rsp+350h] [rbp+2D0h]
  __int64 v201; // [rsp+358h] [rbp+2D8h]
  char v202; // [rsp+361h] [rbp+2E1h]
  char v203; // [rsp+362h] [rbp+2E2h]
  char v204; // [rsp+363h] [rbp+2E3h] BYREF
  char v205; // [rsp+364h] [rbp+2E4h]
  char v206; // [rsp+365h] [rbp+2E5h]
  char v207; // [rsp+366h] [rbp+2E6h]
  char v208; // [rsp+367h] [rbp+2E7h]
  __int64 v209; // [rsp+368h] [rbp+2E8h]

  v209 = -2;
  v140 = a3;
  sub_141406CE0(&v157);
  v6 = v157.m128i_i32[0];
  v7 = (v157.m128i_i32[0] >> 13) - 1;
  v8 = 0;
  v132 = a1;
  if ( v157.m128i_i32[0] >> 13 <= 0 )
  {
    v9 = (1 - (v157.m128i_i32[0] >> 13)) / 0x190u + 1;
    v7 += 400 * v9;
    v8 = -146097 * v9;
  }
  v10 = v157.m128i_u32[1];
  v11 = v157.m128i_u32[2];
  v196 = v140[1];
  v12 = (_QWORD *)v140[2];
  v13 = sub_14167F170(v196);
  if ( *(_BYTE *)(v13 + 16) == 1 )
  {
    v18 = *(_QWORD *)v13;
    v19 = *(_QWORD *)(v13 + 8);
  }
  else
  {
    v195 = (_QWORD *)v13;
    v18 = sub_141696260(v15, v14, v16, v17);
    v13 = (__int64)v195;
    *v195 = v18;
    *(_QWORD *)(v13 + 8) = v19;
    *(_BYTE *)(v13 + 16) = 1;
  }
  *(_QWORD *)v13 = v18 + 1;
  *(_OWORD *)v158.m256i_i8 = *(&off_141A68A70 + 1);
  v157 = (__m128i)off_141A68A70;
  v158.m256i_i64[2] = v18;
  v158.m256i_i64[3] = v19;
  if ( v12 )
  {
    LOBYTE(v17) = 1;
    sub_141930360(&v157, v12, &v158.m256i_u64[2], v17);
    v130 = nullptr;
    do
    {
      v195 = v130;
      sub_1416AC440(&v147, v196 + ((_QWORD)v130 << 8));
      sub_1403AAB80(&v157, &v147);
      v130 = (_QWORD *)((char *)v195 + 1);
    }
    while ( (_QWORD *)((char *)v195 + 1) != v12 );
  }
  v134 = 1000
       * (v10 + 86400LL * (int)(((v7 / 100) >> 2) + ((1461 * v7) >> 2) + v8 + ((v6 >> 4) & 0x1FF) - v7 / 100 - 719163))
       + ((unsigned __int64)(1125899907 * v11) >> 50);
  v137 = v158;
  v136 = _mm_load_si128(&v157);
  v145.m128i_i64[0] = 0;
  v145.m128i_i64[1] = 8;
  v146 = 0;
  *(_QWORD *)&v198 = 0;
  *((_QWORD *)&v198 + 1) = 8;
  v199 = 0;
  v20 = *(_QWORD *)(a4 + 32);
  v21 = v20 + 176LL * *(_QWORD *)(a4 + 40);
  v141 = 0;
LABEL_8:
  v27 = v20;
  while ( v27 != v21 )
  {
    sub_14102D940(&v157, *(_QWORD *)(v27 + 8), *(_QWORD *)(v27 + 16));
    v20 = v27 + 176;
    if ( v157.m128i_i64[0] != -1 )
    {
      if ( v157.m128i_i64[0] )
        sub_140001660(v157.m128i_i64[1], v157.m128i_i64[0], 1);
LABEL_66:
      sub_1416AC440(v153, v27);
      sub_1416AC440(&v147, v27 + 24);
      nullsub_1(v87);
      v88 = (void *)sub_140001650(13, 1);
      if ( !v88 )
        sub_141938D2B(1, 13);
      qmemcpy(v88, "INVALID_FIELD", 13);
      v158.m256i_i64[0] = *(_QWORD *)&v153[16];
      v157 = *(__m128i *)v153;
      v158.m256i_i64[3] = v148;
      *(__m128i *)&v158.m256i_u64[1] = v147;
      *(_QWORD *)&v159 = 13;
      *((_QWORD *)&v159 + 1) = v88;
      *(_QWORD *)&v160 = 13;
      v89 = v199;
      if ( v199 == (_QWORD)v198 )
        sub_14190FB90(&v198);
      v22 = *((_QWORD *)&v198 + 1);
      v23 = 9 * v89;
      *(_QWORD *)(*((_QWORD *)&v198 + 1) + 8 * v23 + 64) = v160;
      v24 = _mm_load_si128(&v157);
      v25 = *(_OWORD *)v158.m256i_i8;
      v26 = *(_OWORD *)&v158.m256i_u64[2];
      *(_OWORD *)(v22 + 8 * v23 + 48) = v159;
      *(_OWORD *)(v22 + 8 * v23 + 32) = v26;
      *(_OWORD *)(v22 + 8 * v23 + 16) = v25;
      *(__m128i *)(v22 + 8 * v23) = v24;
      v199 = v89 + 1;
      goto LABEL_8;
    }
    if ( !*(_QWORD *)(v27 + 40) || !*(_QWORD *)(v27 + 88) )
      goto LABEL_66;
    sub_140EF67C0(v153, *(_QWORD *)(v27 + 56), *(_QWORD *)(v27 + 64));
    if ( v153[0] )
    {
      v188 = *(_QWORD *)&v153[24];
      v187 = *(__m128i *)&v153[8];
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v147.m128i_i64[0] = v27;
        v147.m128i_i64[1] = (__int64)sub_1400015F0;
        *(_QWORD *)&v148 = &v187;
        *((_QWORD *)&v148 + 1) = sub_1400015F0;
        *(_QWORD *)&v159 = 2;
        *((_QWORD *)&v159 + 1) = aCodexmateLibCo_52;
        *(_QWORD *)&v160 = 30;
        v161 = &unk_141A704E0;
        v162 = &v147;
        v157.m128i_i64[0] = 0;
        v157.m128i_i64[1] = (__int64)aCodexmateLibCo_52;
        *(_OWORD *)v158.m256i_i8 = 0x1Eu;
        v158.m256i_i64[2] = (__int64)aSrcCoreRelayIo;
        v158.m256i_i64[3] = 20;
        *((_QWORD *)&v160 + 1) = 0x14B00000001LL;
        sub_1414D53A0(&v204, &v157);
      }
      sub_1416AC440(&v192, v27);
      sub_1416AC440(&v147, v27 + 24);
      nullsub_1(v90);
      v91 = (void *)sub_140001650(13, 1);
      if ( !v91 )
        sub_141938D2B(1, 13);
      qmemcpy(v91, "INVALID_FIELD", 13);
      v158.m256i_i64[0] = v193;
      v157 = v192;
      v158.m256i_i64[3] = v148;
      *(__m128i *)&v158.m256i_u64[1] = v147;
      *(_QWORD *)&v159 = 13;
      *((_QWORD *)&v159 + 1) = v91;
      *(_QWORD *)&v160 = 13;
      v92 = v199;
      if ( v199 == (_QWORD)v198 )
        sub_14190FB90(&v198);
      v93 = *((_QWORD *)&v198 + 1);
      v94 = 9 * v92;
      *(_QWORD *)(*((_QWORD *)&v198 + 1) + 8 * v94 + 64) = v160;
      v95 = _mm_load_si128(&v157);
      v96 = *(_OWORD *)v158.m256i_i8;
      v97 = *(_OWORD *)&v158.m256i_u64[2];
      *(_OWORD *)(v93 + 8 * v94 + 48) = v159;
      *(_OWORD *)(v93 + 8 * v94 + 32) = v97;
      *(_OWORD *)(v93 + 8 * v94 + 16) = v96;
      *(__m128i *)(v93 + 8 * v94) = v95;
      v199 = v92 + 1;
      if ( v187.m128i_i64[0] )
        sub_140001660(v187.m128i_i64[1], v187.m128i_i64[0], 1);
      goto LABEL_8;
    }
    v185 = v27 + 24;
    v196 = *(_QWORD *)&v153[8];
    v131 = *(_QWORD *)&v153[24];
    v195 = *(_QWORD **)&v153[16];
    if ( v137.m256i_i64[1] )
    {
      v208 = 1;
      v28 = sub_140D2AC70(&v137.m256i_u64[2], v27);
      v31 = v136.m128i_i64[1];
      v30 = v136.m128i_i64[0];
      v32 = _mm_cvtsi32_si128(v28 >> 57);
      v33 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v32, v32), 0), 68);
      v34 = *(_QWORD *)(v27 + 8);
      v35 = *(_QWORD *)(v27 + 16);
      for ( i = 0; ; i += 16 )
      {
        v37 = v31 & v28;
        v38 = _mm_loadu_si128((const __m128i *)(v30 + v37));
        _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v38, v33));
        if ( _R12D )
          break;
LABEL_21:
        _RDX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v38, (__m128i)-1LL));
        if ( (_DWORD)_RDX )
          goto LABEL_23;
        v28 = i + v37 + 16;
      }
      v194 = v37;
      v191 = v31;
      v200 = i;
      while ( 1 )
      {
        __asm { tzcnt   edx, r12d }
        _RDX = -(__int64)(v31 & (v37 + _RDX));
        if ( v35 == *(_QWORD *)(v30 + 24 * _RDX - 8) )
        {
          v40 = v21;
          v41 = v34;
          v42 = sub_1418F4B70(v34, *(_QWORD *)(v30 + 24 * _RDX - 16));
          v34 = v41;
          v21 = v40;
          if ( !v42 )
            break;
        }
        v43 = _R12D - 1;
        LOWORD(v43) = _R12D & (_R12D - 1);
        v44 = (_WORD)v43 == 0;
        _R12D = v43;
        v37 = v194;
        v31 = v191;
        i = v200;
        if ( v44 )
          goto LABEL_21;
      }
      v208 = 1;
      sub_1416AC440(v153, v27);
      sub_1416AC440(&v147, v185);
      nullsub_1(v69);
      v70 = (void *)sub_140001650(12, 1);
      if ( !v70 )
        sub_141938D2B(1, 12);
      qmemcpy(v70, "DUPLICATE_ID", 12);
      v158.m256i_i64[0] = *(_QWORD *)&v153[16];
      v157 = *(__m128i *)v153;
      v158.m256i_i64[3] = v148;
      *(__m128i *)&v158.m256i_u64[1] = _mm_loadu_si128(&v147);
      *(_QWORD *)&v159 = 12;
      *((_QWORD *)&v159 + 1) = v70;
      *(_QWORD *)&v160 = 12;
      v71 = v199;
      if ( v199 == (_QWORD)v198 )
        sub_14190FB90(&v198);
      v72 = *((_QWORD *)&v198 + 1);
      v73 = 9 * v71;
      *(_QWORD *)(*((_QWORD *)&v198 + 1) + 8 * v73 + 64) = v160;
      v74 = _mm_load_si128(&v157);
      v75 = *(_OWORD *)v158.m256i_i8;
      v76 = *(_OWORD *)&v158.m256i_u64[2];
      *(_OWORD *)(v72 + 8 * v73 + 48) = v159;
      *(_OWORD *)(v72 + 8 * v73 + 32) = v76;
      *(_OWORD *)(v72 + 8 * v73 + 16) = v75;
      *(__m128i *)(v72 + 8 * v73) = v74;
      v199 = v71 + 1;
      v77 = v196;
      v27 += 176;
      if ( v196 )
      {
LABEL_63:
        sub_140001660(v195, v77, 1);
        goto LABEL_8;
      }
    }
    else
    {
LABEL_23:
      v45 = *(_QWORD *)(v27 + 104);
      v46 = *(_QWORD *)(v27 + 112);
      v47 = *(_QWORD *)(v27 + 80);
      v48 = *(_QWORD *)(v27 + 88);
      v49 = *(_BYTE *)(v27 + 169);
      v208 = 1;
      sub_14102C620((__int64)&v147, v45, v46, v47, v48, v49);
      if ( v147.m128i_i64[0] == -1 )
      {
        v188 = *((_QWORD *)&v148 + 1);
        v187 = _mm_loadu_si128((const __m128i *)&v147.m128i_u64[1]);
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          *(_QWORD *)v153 = v27;
          *(_QWORD *)&v153[8] = sub_1400015F0;
          *(_QWORD *)&v153[16] = &v187;
          *(_QWORD *)&v153[24] = sub_1400015F0;
          *(_QWORD *)&v159 = 2;
          *((_QWORD *)&v159 + 1) = aCodexmateLibCo_52;
          *(_QWORD *)&v160 = 30;
          v161 = &unk_141A704A8;
          v162 = (__m128i *)v153;
          v157.m128i_i64[0] = 0;
          v157.m128i_i64[1] = (__int64)aCodexmateLibCo_52;
          *(_OWORD *)v158.m256i_i8 = 0x1Eu;
          v158.m256i_i64[2] = (__int64)aSrcCoreRelayIo;
          v158.m256i_i64[3] = 20;
          *((_QWORD *)&v160 + 1) = 0x16400000001LL;
          sub_1414D53A0(&v204, &v157);
        }
        sub_1416AC440(&v192, v27);
        sub_1416AC440(v153, v27 + 24);
        nullsub_1(v79);
        v80 = (void *)sub_140001650(13, 1);
        if ( !v80 )
          sub_141938D2B(1, 13);
        qmemcpy(v80, "INVALID_FIELD", 13);
        v158.m256i_i64[0] = v193;
        v157 = v192;
        v158.m256i_i64[3] = *(_QWORD *)&v153[16];
        *(__m128i *)&v158.m256i_u64[1] = _mm_loadu_si128((const __m128i *)v153);
        *(_QWORD *)&v159 = 13;
        *((_QWORD *)&v159 + 1) = v80;
        *(_QWORD *)&v160 = 13;
        v81 = v199;
        if ( v199 == (_QWORD)v198 )
          sub_14190FB90(&v198);
        v82 = *((_QWORD *)&v198 + 1);
        v83 = 9 * v81;
        *(_QWORD *)(*((_QWORD *)&v198 + 1) + 8 * v83 + 64) = v160;
        v84 = _mm_load_si128(&v157);
        v85 = *(_OWORD *)v158.m256i_i8;
        v86 = *(_OWORD *)&v158.m256i_u64[2];
        *(_OWORD *)(v82 + 8 * v83 + 48) = v159;
        *(_OWORD *)(v82 + 8 * v83 + 32) = v86;
        *(_OWORD *)(v82 + 8 * v83 + 16) = v85;
        *(__m128i *)(v82 + 8 * v83) = v84;
        v199 = v81 + 1;
        if ( v187.m128i_i64[0] )
          sub_140001660(v187.m128i_i64[1], v187.m128i_i64[0], 1);
        v77 = v196;
        v27 += 176;
        if ( v196 )
          goto LABEL_63;
      }
      else
      {
        v144 = v148;
        v143 = _mm_loadu_si128(&v147);
        v194 = *((_QWORD *)&v148 + 1);
        v50 = *((_QWORD *)&v149 + 1);
        v191 = v149;
        v202 = v150;
        if ( *(_QWORD *)(v27 + 144) == -1 || (v51 = *(_QWORD *)(v27 + 160)) == 0 )
        {
          v186 = 1;
          v200 = 0;
          v201 = 0x8000000000000001uLL;
          v98 = 0;
LABEL_77:
          v206 = 1;
          sub_1416AC440(&v192, v27);
          v203 = 1;
          sub_1416AC440(v153, v27 + 24);
          v99 = *(_BYTE *)(v27 + 170);
          sub_1416AC440(&v147, v27 + 120);
          v100 = *(_BYTE *)(v27 + 168);
          v158.m256i_i64[0] = v193;
          v157 = v192;
          v158.m256i_i64[3] = *(_QWORD *)&v153[16];
          *(_OWORD *)&v158.m256i_u64[1] = *(_OWORD *)v153;
          *(_QWORD *)&v159 = v196;
          *((_QWORD *)&v159 + 1) = v195;
          *(_QWORD *)&v160 = v131;
          *((_QWORD *)&v160 + 1) = v200;
          v161 = (void *)v186;
          v162 = (__m128i *)v200;
          v179 = v98;
          v171 = v201;
          v172 = v197;
          v173 = v135;
          v163 = v194;
          v164 = v191;
          v165 = v50;
          v181 = v202;
          v182 = v99;
          v167 = v144;
          v166 = v143;
          v169 = v148;
          v168 = _mm_loadu_si128(&v147);
          v178 = 0;
          v174 = -1;
          v175 = 0;
          v176 = v134;
          v177 = v134;
          v170 = -1;
          v180 = v100;
          v101 = v140;
          v102 = v140[2];
          if ( v102 == *v140 )
            sub_1419100D0(v140);
          sub_1418F44E0((__m128i *)(v101[1] + (v102 << 8)), &v157, 0x100u);
          v101[2] = v102 + 1;
          v206 = 0;
          sub_1416AC440(&v157, v27);
          v206 = 0;
          sub_1403AAB80(&v136, &v157);
          ++v141;
          goto LABEL_8;
        }
        v52 = *(const __m128i **)(v27 + 152);
        v53 = *(_QWORD *)(v27 + 8);
        v54 = *(_QWORD *)(v27 + 16);
        v190 = v197;
        v189 = 0x8000000000000001uLL;
        v207 = 1;
        v200 = v51;
        sub_141044C70((unsigned int)&v147, a2, v53, v54, (__int64)v52, v51);
        if ( v147.m128i_i64[0] != -1 )
        {
          v156 = v152;
          v155 = v151;
          v103 = _mm_loadu_si128(&v147);
          v154 = v150;
          *(_OWORD *)&v153[32] = v149;
          *(_OWORD *)&v153[16] = v148;
          *(__m128i *)v153 = v103;
          v184 = v197;
          v183 = 0x8000000000000001uLL;
          v205 = 1;
          sub_1416AC440(&v157, &v153[32]);
          v197 = v157.m128i_i64[1];
          v201 = v157.m128i_i64[0];
          v135 = v158.m256i_i64[0];
          v161 = v156;
          v160 = v155;
          si128 = _mm_load_si128((const __m128i *)v153);
          v159 = v154;
          v158 = *(__m256i *)&v153[16];
          v157 = si128;
          v105 = v146;
          if ( v146 == v145.m128i_i64[0] )
            sub_14190FF10(&v145);
          v106 = v145.m128i_i64[1];
          v107 = 88 * v105;
          v108 = _mm_load_si128((const __m128i *)v153);
          v109 = *(_OWORD *)&v153[16];
          v110 = *(_OWORD *)&v153[32];
          v111 = v154;
          v112 = v155;
          *(_QWORD *)(v145.m128i_i64[1] + v107 + 80) = v156;
          *(_OWORD *)(v106 + v107 + 64) = v112;
          *(_OWORD *)(v106 + v107 + 48) = v111;
          *(_OWORD *)(v106 + v107 + 32) = v110;
          *(_OWORD *)(v106 + v107 + 16) = v109;
          *(__m128i *)(v106 + v107) = v108;
          v146 = v105 + 1;
          v113 = v200;
          if ( v200 < 0 )
          {
            v129 = 0;
          }
          else
          {
            nullsub_1(v107);
            v114 = (__m128i *)sub_140001650(v113, 1);
            if ( v114 )
            {
              v115 = v113;
              v116 = v114;
              sub_1418F44E0(v114, v52, v115);
              v98 = 1;
              v186 = (__int64)v116;
              v142 = (unsigned __int64)v116;
              goto LABEL_77;
            }
            v142 = v113;
            v129 = 1;
          }
          v184 = v197;
          v183 = v201;
          v205 = 0;
          sub_141938D2B(v129, v142);
        }
        v139 = *((_QWORD *)&v148 + 1);
        v138 = _mm_loadu_si128((const __m128i *)&v147.m128i_u64[1]);
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v192.m128i_i64[0] = (__int64)&v138;
          v192.m128i_i64[1] = (__int64)sub_1400015F0;
          *(_QWORD *)&v159 = 2;
          *((_QWORD *)&v159 + 1) = aCodexmateLibCo_52;
          *(_QWORD *)&v160 = 30;
          v161 = &unk_141A70443;
          v162 = &v192;
          v157.m128i_i64[0] = 0;
          v157.m128i_i64[1] = (__int64)aCodexmateLibCo_52;
          *(_OWORD *)v158.m256i_i8 = 0x1Eu;
          v158.m256i_i64[2] = (__int64)aSrcCoreRelayIo;
          v158.m256i_i64[3] = 20;
          *((_QWORD *)&v160 + 1) = 0x17800000001LL;
          sub_1414D53A0(&v204, &v157);
        }
        sub_1416AC440(&v187, v27);
        sub_1416AC440(&v192, v27 + 24);
        nullsub_1(v55);
        v56 = (void *)sub_140001650(14, 1);
        if ( !v56 )
          sub_141938D2B(1, 14);
        qmemcpy(v56, "KEYCHAIN_WRITE", 14);
        v158.m256i_i64[0] = v188;
        v157 = v187;
        v158.m256i_i64[3] = v193;
        *(__m128i *)&v158.m256i_u64[1] = _mm_loadu_si128(&v192);
        *(_QWORD *)&v159 = 14;
        *((_QWORD *)&v159 + 1) = v56;
        *(_QWORD *)&v160 = 14;
        v57 = v199;
        if ( v199 == (_QWORD)v198 )
          sub_14190FB90(&v198);
        v58 = *((_QWORD *)&v198 + 1);
        v59 = 9 * v57;
        *(_QWORD *)(*((_QWORD *)&v198 + 1) + 8 * v59 + 64) = v160;
        v60 = _mm_load_si128(&v157);
        v61 = *(_OWORD *)v158.m256i_i8;
        v62 = *(_OWORD *)&v158.m256i_u64[2];
        *(_OWORD *)(v58 + 8 * v59 + 48) = v159;
        *(_OWORD *)(v58 + 8 * v59 + 32) = v62;
        *(_OWORD *)(v58 + 8 * v59 + 16) = v61;
        *(__m128i *)(v58 + 8 * v59) = v60;
        v199 = v57 + 1;
        if ( v138.m128i_i64[0] )
          sub_140001660(v138.m128i_i64[1], v138.m128i_i64[0], 1);
        if ( v194 )
          sub_140001660(v191, v194, 1);
        v63 = v143.m128i_i64[1];
        v64 = v144;
        if ( v144 )
        {
          v65 = (_QWORD *)(v143.m128i_i64[1] + 72);
          do
          {
            v66 = *(v65 - 7);
            if ( v66 )
              sub_140001660(*(v65 - 6), v66, 1);
            v67 = *(v65 - 1);
            if ( v67 != -1 && v67 )
              sub_140001660(*v65, v67, 1);
            v68 = *(v65 - 4);
            if ( v68 )
              sub_140001660(*(v65 - 3), v68, 1);
            v65 += 12;
            --v64;
          }
          while ( v64 );
        }
        v77 = v196;
        if ( v143.m128i_i64[0] )
        {
          v78 = v196;
          sub_140001660(v63, 96 * v143.m128i_i64[0], 8);
          v77 = v78;
        }
        v27 = v20;
        if ( v77 )
          goto LABEL_63;
      }
    }
  }
  *(_QWORD *)(v132 + 16) = v199;
  *(_OWORD *)v132 = v198;
  *(__m128i *)(v132 + 32) = _mm_loadu_si128(&v145);
  *(_QWORD *)(v132 + 48) = v146;
  HIDWORD(_RAX) = HIDWORD(v141);
  *(_QWORD *)(v132 + 24) = v141;
  v118 = v136.m128i_i64[1];
  if ( v136.m128i_i64[1] )
  {
    v119 = v137.m256i_i64[1];
    if ( v137.m256i_i64[1] )
    {
      v120 = v136.m128i_i64[0];
      v121 = (const __m128i *)(v136.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v136.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v123 = _mm_load_si128(v121);
            v120 -= 384;
            ++v121;
            _R15D = _mm_movemask_epi8(v123) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v124 = -3 * _RAX;
        v125 = *(_QWORD *)(v120 + 8 * v124 - 24);
        if ( v125 )
          sub_140001660(*(_QWORD *)(v120 + 8 * v124 - 16), v125, 1);
        --v119;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v119 );
    }
    v126 = (24 * v118 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v127 = v126 + v118 + 17;
    if ( v127 )
      sub_140001660(v136.m128i_i64[0] - v126, v127, 16);
  }
  return v132;
}
