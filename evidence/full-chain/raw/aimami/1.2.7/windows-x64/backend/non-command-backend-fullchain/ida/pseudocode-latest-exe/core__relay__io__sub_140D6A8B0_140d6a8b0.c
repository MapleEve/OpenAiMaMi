// win 1.2.7 latest-exe | module src/core/relay/io.rs | ea 0x140d6a8b0 | successor of pre-update 0x141029190 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.984, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140D6A8B0(__int64 a1, int a2, _QWORD *a3, __int64 a4)
{
  unsigned __int32 v6; // r15d
  __int32 v7; // r14d
  int v8; // ebx
  unsigned __int32 v9; // eax
  __int64 v10; // r13
  __int64 v11; // r12
  _QWORD *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rcx
  __m128i v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int64 v24; // rbx
  unsigned __int64 v25; // rax
  __int64 v27; // rdi
  __int64 v28; // r8
  __m128i v29; // xmm0
  __m128i v30; // xmm7
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 i; // r9
  unsigned __int64 v34; // rax
  __m128i v35; // xmm8
  __int64 v37; // r15
  __int64 v38; // r13
  int v39; // eax
  int v40; // eax
  bool v41; // zf
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  char v46; // cl
  __int64 v47; // r15
  __int64 v48; // rcx
  __int64 v49; // rsi
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  void *v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rcx
  __m128i v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm2
  __int64 v61; // rsi
  __int64 v62; // rdi
  _QWORD *v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rcx
  void *v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rax
  __int64 v72; // rcx
  __m128i v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm2
  __int64 v76; // rdx
  __int64 v77; // rdi
  __int64 v78; // rdx
  __int64 v79; // rcx
  void *v80; // rax
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rcx
  __m128i v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm2
  __int64 v87; // rdx
  __int64 v88; // rcx
  void *v89; // rax
  __int64 v90; // rsi
  __int64 v91; // rdx
  __int64 v92; // rcx
  void *v93; // rax
  __int64 v94; // rsi
  __int64 v95; // rax
  __int64 v96; // rcx
  __m128i v97; // xmm0
  __int128 v98; // xmm1
  __int128 v99; // xmm2
  char v100; // si
  char v101; // di
  char v102; // al
  _QWORD *v103; // rdi
  __int64 v104; // rsi
  __m128i v105; // xmm0
  __m128i si128; // xmm0
  __int64 v107; // rdi
  __int64 v108; // rax
  __int64 v109; // rcx
  __m128i v110; // xmm0
  __int128 v111; // xmm1
  __int128 v112; // xmm2
  __int128 v113; // xmm3
  __int128 v114; // xmm4
  void *v115; // rdx
  __int64 v116; // rdi
  __int64 v117; // rax
  __int64 v118; // r8
  __int64 v119; // rdi
  __int64 v121; // rdi
  __int64 v122; // rsi
  __int64 v123; // rbx
  const __m128i *v124; // r14
  __m128i v126; // xmm0
  __int64 v127; // rax
  __int64 v128; // rdx
  unsigned __int64 v129; // rax
  __int64 v130; // rdi
  __int64 v132; // rcx
  _QWORD *v133; // rdx
  __int64 v134; // [rsp+38h] [rbp-48h]
  __int64 v135; // [rsp+40h] [rbp-40h]
  unsigned __int64 v137; // [rsp+50h] [rbp-30h]
  __int64 v138; // [rsp+58h] [rbp-28h]
  __m128i v139; // [rsp+60h] [rbp-20h] BYREF
  __m256i v140; // [rsp+70h] [rbp-10h] BYREF
  __m128i v141; // [rsp+90h] [rbp+10h] BYREF
  __int64 v142; // [rsp+A0h] [rbp+20h]
  _QWORD *v143; // [rsp+A8h] [rbp+28h]
  __int64 v144; // [rsp+B0h] [rbp+30h]
  __int64 v145; // [rsp+B8h] [rbp+38h]
  __m128i v146; // [rsp+C0h] [rbp+40h]
  __int64 v147; // [rsp+D0h] [rbp+50h]
  __m128i v148; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v149; // [rsp+F0h] [rbp+70h]
  __m128i v150; // [rsp+F8h] [rbp+78h] BYREF
  __int128 v151; // [rsp+108h] [rbp+88h]
  __int128 v152; // [rsp+118h] [rbp+98h]
  __int128 v153; // [rsp+128h] [rbp+A8h]
  __int128 v154; // [rsp+138h] [rbp+B8h]
  void *v155; // [rsp+148h] [rbp+C8h]
  _BYTE v156[48]; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v157; // [rsp+180h] [rbp+100h]
  __int128 v158; // [rsp+190h] [rbp+110h]
  void *v159; // [rsp+1A0h] [rbp+120h]
  __m128i v160; // [rsp+1B0h] [rbp+130h] BYREF
  __m256i v161; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v162; // [rsp+1E0h] [rbp+160h]
  __int128 v163; // [rsp+1F0h] [rbp+170h]
  void *v164; // [rsp+200h] [rbp+180h]
  __m128i *v165; // [rsp+208h] [rbp+188h]
  unsigned __int64 v166; // [rsp+210h] [rbp+190h]
  __int64 v167; // [rsp+218h] [rbp+198h]
  __int64 v168; // [rsp+220h] [rbp+1A0h]
  __m128i v169; // [rsp+228h] [rbp+1A8h]
  __int64 v170; // [rsp+238h] [rbp+1B8h]
  __m128i v171; // [rsp+240h] [rbp+1C0h]
  __int64 v172; // [rsp+250h] [rbp+1D0h]
  __int64 v173; // [rsp+258h] [rbp+1D8h]
  __int64 v174; // [rsp+270h] [rbp+1F0h]
  __int64 v175; // [rsp+278h] [rbp+1F8h]
  __int64 v176; // [rsp+280h] [rbp+200h]
  __int64 v177; // [rsp+288h] [rbp+208h]
  __int64 v178; // [rsp+290h] [rbp+210h]
  unsigned __int64 v179; // [rsp+298h] [rbp+218h]
  unsigned __int64 v180; // [rsp+2A0h] [rbp+220h]
  int v181; // [rsp+2A8h] [rbp+228h]
  char v182; // [rsp+2ACh] [rbp+22Ch]
  char v183; // [rsp+2ADh] [rbp+22Dh]
  char v184; // [rsp+2AEh] [rbp+22Eh]
  char v185; // [rsp+2AFh] [rbp+22Fh]
  unsigned __int64 v186; // [rsp+2B0h] [rbp+230h]
  __int64 v187; // [rsp+2B8h] [rbp+238h]
  __int64 v188; // [rsp+2C0h] [rbp+240h]
  __int64 v189; // [rsp+2C8h] [rbp+248h]
  __m128i v190; // [rsp+2D0h] [rbp+250h] BYREF
  __int64 v191; // [rsp+2E0h] [rbp+260h]
  unsigned __int64 v192; // [rsp+2E8h] [rbp+268h]
  __int64 v193; // [rsp+2F0h] [rbp+270h]
  __int64 v194; // [rsp+2F8h] [rbp+278h]
  __m128i v195; // [rsp+300h] [rbp+280h] BYREF
  __int64 v196; // [rsp+310h] [rbp+290h]
  unsigned __int64 v197; // [rsp+318h] [rbp+298h]
  _QWORD *v198; // [rsp+320h] [rbp+2A0h]
  __int64 v199; // [rsp+328h] [rbp+2A8h]
  __int64 v200; // [rsp+330h] [rbp+2B0h]
  __int128 v201; // [rsp+338h] [rbp+2B8h] BYREF
  __int64 v202; // [rsp+348h] [rbp+2C8h]
  __int64 v203; // [rsp+350h] [rbp+2D0h]
  __int64 v204; // [rsp+358h] [rbp+2D8h]
  char v205; // [rsp+361h] [rbp+2E1h]
  char v206; // [rsp+362h] [rbp+2E2h]
  char v207; // [rsp+363h] [rbp+2E3h] BYREF
  char v208; // [rsp+364h] [rbp+2E4h]
  char v209; // [rsp+365h] [rbp+2E5h]
  char v210; // [rsp+366h] [rbp+2E6h]
  char v211; // [rsp+367h] [rbp+2E7h]
  __int64 v212; // [rsp+368h] [rbp+2E8h]

  v212 = -2;
  v143 = a3;
  sub_1414331D0(&v160);
  v6 = v160.m128i_i32[0];
  v7 = (v160.m128i_i32[0] >> 13) - 1;
  v8 = 0;
  v135 = a1;
  if ( v160.m128i_i32[0] >> 13 <= 0 )
  {
    v9 = (1 - (v160.m128i_i32[0] >> 13)) / 0x190u + 1;
    v7 += 400 * v9;
    v8 = -146097 * v9;
  }
  v10 = v160.m128i_u32[1];
  v11 = v160.m128i_u32[2];
  v199 = v143[1];
  v12 = (_QWORD *)v143[2];
  v13 = sub_1416AE140(v199);
  if ( *(_BYTE *)(v13 + 16) == 1 )
  {
    v15 = *(_QWORD *)v13;
    v16 = *(_QWORD *)(v13 + 8);
  }
  else
  {
    v198 = (_QWORD *)v13;
    v15 = sub_1416C5230();
    v13 = (__int64)v198;
    *v198 = v15;
    *(_QWORD *)(v13 + 8) = v16;
    *(_BYTE *)(v13 + 16) = 1;
  }
  *(_QWORD *)v13 = v15 + 1;
  *(_OWORD *)v161.m256i_i8 = xmmword_141A90850;
  v160 = *(__m128i *)&off_141A90840;
  v161.m256i_i64[2] = v15;
  v161.m256i_i64[3] = v16;
  if ( v12 )
  {
    LOBYTE(v14) = 1;
    sub_141962910(&v160, v12, &v161.m256i_u64[2], v14);
    v133 = nullptr;
    do
    {
      v198 = v133;
      sub_1416DB410(&v150, v199 + ((_QWORD)v133 << 8));
      sub_140871180(&v160, &v150);
      v133 = (_QWORD *)((char *)v198 + 1);
    }
    while ( (_QWORD *)((char *)v198 + 1) != v12 );
  }
  v137 = 1000
       * (v10 + 86400LL * (int)(((v7 / 100) >> 2) + ((1461 * v7) >> 2) + v8 + ((v6 >> 4) & 0x1FF) - v7 / 100 - 719163))
       + ((unsigned __int64)(1125899907 * v11) >> 50);
  v140 = v161;
  v139 = _mm_load_si128(&v160);
  v148.m128i_i64[0] = 0;
  v148.m128i_i64[1] = 8;
  v149 = 0;
  *(_QWORD *)&v201 = 0;
  *((_QWORD *)&v201 + 1) = 8;
  v202 = 0;
  v17 = *(_QWORD *)(a4 + 32);
  v18 = v17 + 176LL * *(_QWORD *)(a4 + 40);
  v144 = 0;
LABEL_8:
  v24 = v17;
  while ( v24 != v18 )
  {
    sub_1409FA7A0(&v160, *(_QWORD *)(v24 + 8), *(_QWORD *)(v24 + 16));
    v17 = v24 + 176;
    if ( v160.m128i_i64[0] != -1 )
    {
      if ( v160.m128i_i64[0] )
        sub_140001660(v160.m128i_i64[1], v160.m128i_i64[0], 1);
LABEL_65:
      sub_1416DB410(v156, v24);
      sub_1416DB410(&v150, v24 + 24);
      nullsub_1(v88, v87);
      v89 = (void *)sub_140001650(13, 1);
      if ( !v89 )
        sub_14196B2DB(1, 13);
      qmemcpy(v89, "INVALID_FIELD", 13);
      v161.m256i_i64[0] = *(_QWORD *)&v156[16];
      v160 = *(__m128i *)v156;
      v161.m256i_i64[3] = v151;
      *(__m128i *)&v161.m256i_u64[1] = v150;
      *(_QWORD *)&v162 = 13;
      *((_QWORD *)&v162 + 1) = v89;
      *(_QWORD *)&v163 = 13;
      v90 = v202;
      if ( v202 == (_QWORD)v201 )
        sub_141939DD0(&v201);
      v19 = *((_QWORD *)&v201 + 1);
      v20 = 9 * v90;
      *(_QWORD *)(*((_QWORD *)&v201 + 1) + 8 * v20 + 64) = v163;
      v21 = _mm_load_si128(&v160);
      v22 = *(_OWORD *)v161.m256i_i8;
      v23 = *(_OWORD *)&v161.m256i_u64[2];
      *(_OWORD *)(v19 + 8 * v20 + 48) = v162;
      *(_OWORD *)(v19 + 8 * v20 + 32) = v23;
      *(_OWORD *)(v19 + 8 * v20 + 16) = v22;
      *(__m128i *)(v19 + 8 * v20) = v21;
      v202 = v90 + 1;
      goto LABEL_8;
    }
    if ( !*(_QWORD *)(v24 + 40) || !*(_QWORD *)(v24 + 88) )
      goto LABEL_65;
    sub_140992D30(v156, *(_QWORD *)(v24 + 56), *(_QWORD *)(v24 + 64));
    if ( v156[0] )
    {
      v191 = *(_QWORD *)&v156[24];
      v190 = *(__m128i *)&v156[8];
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        v150.m128i_i64[0] = v24;
        v150.m128i_i64[1] = (__int64)sub_1400015F0;
        *(_QWORD *)&v151 = &v190;
        *((_QWORD *)&v151 + 1) = sub_1400015F0;
        *(_QWORD *)&v162 = 2;
        *((_QWORD *)&v162 + 1) = aCodexmateLibCo_48;
        *(_QWORD *)&v163 = 30;
        v164 = &unk_141A98D38;
        v165 = &v150;
        v160.m128i_i64[0] = 0;
        v160.m128i_i64[1] = (__int64)aCodexmateLibCo_48;
        *(_OWORD *)v161.m256i_i8 = 0x1Eu;
        v161.m256i_i64[2] = (__int64)aSrcCoreRelayIo;
        v161.m256i_i64[3] = 20;
        *((_QWORD *)&v163 + 1) = 0x14B00000001LL;
        sub_141503E20(&v207, &v160);
      }
      sub_1416DB410(&v195, v24);
      sub_1416DB410(&v150, v24 + 24);
      nullsub_1(v92, v91);
      v93 = (void *)sub_140001650(13, 1);
      if ( !v93 )
        sub_14196B2DB(1, 13);
      qmemcpy(v93, "INVALID_FIELD", 13);
      v161.m256i_i64[0] = v196;
      v160 = v195;
      v161.m256i_i64[3] = v151;
      *(__m128i *)&v161.m256i_u64[1] = v150;
      *(_QWORD *)&v162 = 13;
      *((_QWORD *)&v162 + 1) = v93;
      *(_QWORD *)&v163 = 13;
      v94 = v202;
      if ( v202 == (_QWORD)v201 )
        sub_141939DD0(&v201);
      v95 = *((_QWORD *)&v201 + 1);
      v96 = 9 * v94;
      *(_QWORD *)(*((_QWORD *)&v201 + 1) + 8 * v96 + 64) = v163;
      v97 = _mm_load_si128(&v160);
      v98 = *(_OWORD *)v161.m256i_i8;
      v99 = *(_OWORD *)&v161.m256i_u64[2];
      *(_OWORD *)(v95 + 8 * v96 + 48) = v162;
      *(_OWORD *)(v95 + 8 * v96 + 32) = v99;
      *(_OWORD *)(v95 + 8 * v96 + 16) = v98;
      *(__m128i *)(v95 + 8 * v96) = v97;
      v202 = v94 + 1;
      if ( v190.m128i_i64[0] )
        sub_140001660(v190.m128i_i64[1], v190.m128i_i64[0], 1);
      goto LABEL_8;
    }
    v188 = v24 + 24;
    v199 = *(_QWORD *)&v156[8];
    v134 = *(_QWORD *)&v156[24];
    v198 = *(_QWORD **)&v156[16];
    if ( v140.m256i_i64[1] )
    {
      v211 = 1;
      v25 = sub_1406CECD0(&v140.m256i_u64[2], v24);
      v28 = v139.m128i_i64[1];
      v27 = v139.m128i_i64[0];
      v29 = _mm_cvtsi32_si128(v25 >> 57);
      v30 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v29, v29), 0), 68);
      v31 = *(_QWORD *)(v24 + 8);
      v32 = *(_QWORD *)(v24 + 16);
      for ( i = 0; ; i += 16 )
      {
        v34 = v28 & v25;
        v35 = _mm_loadu_si128((const __m128i *)(v27 + v34));
        _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v35, v30));
        if ( _R12D )
          break;
LABEL_21:
        _RDX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v35, (__m128i)-1LL));
        if ( (_DWORD)_RDX )
          goto LABEL_23;
        v25 = i + v34 + 16;
      }
      v197 = v34;
      v194 = v28;
      v203 = i;
      while ( 1 )
      {
        __asm { tzcnt   edx, r12d }
        _RDX = -(__int64)(v28 & (v34 + _RDX));
        if ( v32 == *(_QWORD *)(v27 + 24 * _RDX - 8) )
        {
          v37 = v18;
          v38 = v31;
          v39 = sub_141923B40(v31, *(_QWORD *)(v27 + 24 * _RDX - 16), v32);
          v31 = v38;
          v18 = v37;
          if ( !v39 )
            break;
        }
        v40 = _R12D - 1;
        LOWORD(v40) = _R12D & (_R12D - 1);
        v41 = (_WORD)v40 == 0;
        _R12D = v40;
        v34 = v197;
        v28 = v194;
        i = v203;
        if ( v41 )
          goto LABEL_21;
      }
      v211 = 1;
      sub_1416DB410(v156, v24);
      sub_1416DB410(&v150, v188);
      nullsub_1(v68, v67);
      v69 = (void *)sub_140001650(12, 1);
      if ( !v69 )
        sub_14196B2DB(1, 12);
      qmemcpy(v69, "DUPLICATE_ID", 12);
      v161.m256i_i64[0] = *(_QWORD *)&v156[16];
      v160 = *(__m128i *)v156;
      v161.m256i_i64[3] = v151;
      *(__m128i *)&v161.m256i_u64[1] = _mm_loadu_si128(&v150);
      *(_QWORD *)&v162 = 12;
      *((_QWORD *)&v162 + 1) = v69;
      *(_QWORD *)&v163 = 12;
      v70 = v202;
      if ( v202 == (_QWORD)v201 )
        sub_141939DD0(&v201);
      v71 = *((_QWORD *)&v201 + 1);
      v72 = 9 * v70;
      *(_QWORD *)(*((_QWORD *)&v201 + 1) + 8 * v72 + 64) = v163;
      v73 = _mm_load_si128(&v160);
      v74 = *(_OWORD *)v161.m256i_i8;
      v75 = *(_OWORD *)&v161.m256i_u64[2];
      *(_OWORD *)(v71 + 8 * v72 + 48) = v162;
      *(_OWORD *)(v71 + 8 * v72 + 32) = v75;
      *(_OWORD *)(v71 + 8 * v72 + 16) = v74;
      *(__m128i *)(v71 + 8 * v72) = v73;
      v202 = v70 + 1;
      v76 = v199;
      v24 += 176;
      if ( v199 )
      {
LABEL_62:
        sub_140001660(v198, v76, 1);
        goto LABEL_8;
      }
    }
    else
    {
LABEL_23:
      v42 = *(_QWORD *)(v24 + 104);
      v43 = *(_QWORD *)(v24 + 112);
      v44 = *(_QWORD *)(v24 + 80);
      v45 = *(_QWORD *)(v24 + 88);
      v46 = *(_BYTE *)(v24 + 169);
      v211 = 1;
      sub_1409F94C0((unsigned int)&v150, v42, v43, v44, v45, v46);
      if ( v150.m128i_i64[0] == -1 )
      {
        v191 = *((_QWORD *)&v151 + 1);
        v190 = _mm_loadu_si128((const __m128i *)&v150.m128i_u64[1]);
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)v156 = v24;
          *(_QWORD *)&v156[8] = sub_1400015F0;
          *(_QWORD *)&v156[16] = &v190;
          *(_QWORD *)&v156[24] = sub_1400015F0;
          *(_QWORD *)&v162 = 2;
          *((_QWORD *)&v162 + 1) = aCodexmateLibCo_48;
          *(_QWORD *)&v163 = 30;
          v164 = &unk_141A98D00;
          v165 = (__m128i *)v156;
          v160.m128i_i64[0] = 0;
          v160.m128i_i64[1] = (__int64)aCodexmateLibCo_48;
          *(_OWORD *)v161.m256i_i8 = 0x1Eu;
          v161.m256i_i64[2] = (__int64)aSrcCoreRelayIo;
          v161.m256i_i64[3] = 20;
          *((_QWORD *)&v163 + 1) = 0x16400000001LL;
          sub_141503E20(&v207, &v160);
        }
        sub_1416DB410(&v195, v24);
        sub_1416DB410(v156, v24 + 24);
        nullsub_1(v79, v78);
        v80 = (void *)sub_140001650(13, 1);
        if ( !v80 )
          sub_14196B2DB(1, 13);
        qmemcpy(v80, "INVALID_FIELD", 13);
        v161.m256i_i64[0] = v196;
        v160 = v195;
        v161.m256i_i64[3] = *(_QWORD *)&v156[16];
        *(__m128i *)&v161.m256i_u64[1] = _mm_loadu_si128((const __m128i *)v156);
        *(_QWORD *)&v162 = 13;
        *((_QWORD *)&v162 + 1) = v80;
        *(_QWORD *)&v163 = 13;
        v81 = v202;
        if ( v202 == (_QWORD)v201 )
          sub_141939DD0(&v201);
        v82 = *((_QWORD *)&v201 + 1);
        v83 = 9 * v81;
        *(_QWORD *)(*((_QWORD *)&v201 + 1) + 8 * v83 + 64) = v163;
        v84 = _mm_load_si128(&v160);
        v85 = *(_OWORD *)v161.m256i_i8;
        v86 = *(_OWORD *)&v161.m256i_u64[2];
        *(_OWORD *)(v82 + 8 * v83 + 48) = v162;
        *(_OWORD *)(v82 + 8 * v83 + 32) = v86;
        *(_OWORD *)(v82 + 8 * v83 + 16) = v85;
        *(__m128i *)(v82 + 8 * v83) = v84;
        v202 = v81 + 1;
        if ( v190.m128i_i64[0] )
          sub_140001660(v190.m128i_i64[1], v190.m128i_i64[0], 1);
        v76 = v199;
        v24 += 176;
        if ( v199 )
          goto LABEL_62;
      }
      else
      {
        v147 = v151;
        v146 = _mm_loadu_si128(&v150);
        v197 = *((_QWORD *)&v151 + 1);
        v47 = *((_QWORD *)&v152 + 1);
        v194 = v152;
        v205 = v153;
        if ( *(_QWORD *)(v24 + 144) == -1 || (v48 = *(_QWORD *)(v24 + 160)) == 0 )
        {
          v189 = 1;
          v203 = 0;
          v204 = 0x8000000000000001uLL;
          v100 = 0;
LABEL_76:
          v209 = 1;
          sub_1416DB410(&v195, v24);
          v206 = 1;
          sub_1416DB410(v156, v24 + 24);
          v101 = *(_BYTE *)(v24 + 170);
          sub_1416DB410(&v150, v24 + 120);
          v102 = *(_BYTE *)(v24 + 168);
          v161.m256i_i64[0] = v196;
          v160 = v195;
          v161.m256i_i64[3] = *(_QWORD *)&v156[16];
          *(_OWORD *)&v161.m256i_u64[1] = *(_OWORD *)v156;
          *(_QWORD *)&v162 = v199;
          *((_QWORD *)&v162 + 1) = v198;
          *(_QWORD *)&v163 = v134;
          *((_QWORD *)&v163 + 1) = v203;
          v164 = (void *)v189;
          v165 = (__m128i *)v203;
          v182 = v100;
          v174 = v204;
          v175 = v200;
          v176 = v138;
          v166 = v197;
          v167 = v194;
          v168 = v47;
          v184 = v205;
          v185 = v101;
          v170 = v147;
          v169 = v146;
          v172 = v151;
          v171 = _mm_loadu_si128(&v150);
          v181 = 0;
          v177 = -1;
          v178 = 0;
          v179 = v137;
          v180 = v137;
          v173 = -1;
          v183 = v102;
          v103 = v143;
          v104 = v143[2];
          if ( v104 == *v143 )
            sub_14193A310(v143);
          sub_1419234B0(v103[1] + (v104 << 8), &v160, 256);
          v103[2] = v104 + 1;
          v209 = 0;
          sub_1416DB410(&v160, v24);
          v209 = 0;
          sub_140871180(&v139, &v160);
          ++v144;
          goto LABEL_8;
        }
        v49 = *(_QWORD *)(v24 + 152);
        v50 = *(_QWORD *)(v24 + 8);
        v51 = *(_QWORD *)(v24 + 16);
        v193 = v200;
        v192 = 0x8000000000000001uLL;
        v210 = 1;
        v203 = v48;
        sub_140D713E0((unsigned int)&v150, a2, v50, v51, v49, v48);
        if ( v150.m128i_i64[0] != -1 )
        {
          v159 = v155;
          v158 = v154;
          v105 = _mm_loadu_si128(&v150);
          v157 = v153;
          *(_OWORD *)&v156[32] = v152;
          *(_OWORD *)&v156[16] = v151;
          *(__m128i *)v156 = v105;
          v187 = v200;
          v186 = 0x8000000000000001uLL;
          v208 = 1;
          sub_1416DB410(&v160, &v156[32]);
          v200 = v160.m128i_i64[1];
          v204 = v160.m128i_i64[0];
          v138 = v161.m256i_i64[0];
          v164 = v159;
          v163 = v158;
          si128 = _mm_load_si128((const __m128i *)v156);
          v162 = v157;
          v161 = *(__m256i *)&v156[16];
          v160 = si128;
          v107 = v149;
          if ( v149 == v148.m128i_i64[0] )
            sub_14193A150(&v148);
          v108 = v148.m128i_i64[1];
          v109 = 88 * v107;
          v110 = _mm_load_si128((const __m128i *)v156);
          v111 = *(_OWORD *)&v156[16];
          v112 = *(_OWORD *)&v156[32];
          v113 = v157;
          v114 = v158;
          v115 = v159;
          *(_QWORD *)(v148.m128i_i64[1] + v109 + 80) = v159;
          *(_OWORD *)(v108 + v109 + 64) = v114;
          *(_OWORD *)(v108 + v109 + 48) = v113;
          *(_OWORD *)(v108 + v109 + 32) = v112;
          *(_OWORD *)(v108 + v109 + 16) = v111;
          *(__m128i *)(v108 + v109) = v110;
          v149 = v107 + 1;
          v116 = v203;
          if ( v203 < 0 )
          {
            v132 = 0;
          }
          else
          {
            nullsub_1(v109, v115);
            v117 = sub_140001650(v116, 1);
            if ( v117 )
            {
              v118 = v116;
              v119 = v117;
              sub_1419234B0(v117, v49, v118);
              v100 = 1;
              v189 = v119;
              v145 = v119;
              goto LABEL_76;
            }
            v145 = v116;
            v132 = 1;
          }
          v187 = v200;
          v186 = v204;
          v208 = 0;
          sub_14196B2DB(v132, v145);
        }
        v142 = *((_QWORD *)&v151 + 1);
        v141 = _mm_loadu_si128((const __m128i *)&v150.m128i_u64[1]);
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          v195.m128i_i64[0] = (__int64)&v141;
          v195.m128i_i64[1] = (__int64)sub_1400015F0;
          *(_QWORD *)&v162 = 2;
          *((_QWORD *)&v162 + 1) = aCodexmateLibCo_48;
          *(_QWORD *)&v163 = 30;
          v164 = &unk_141A98C9B;
          v165 = &v195;
          v160.m128i_i64[0] = 0;
          v160.m128i_i64[1] = (__int64)aCodexmateLibCo_48;
          *(_OWORD *)v161.m256i_i8 = 0x1Eu;
          v161.m256i_i64[2] = (__int64)aSrcCoreRelayIo;
          v161.m256i_i64[3] = 20;
          *((_QWORD *)&v163 + 1) = 0x17800000001LL;
          sub_141503E20(&v207, &v160);
        }
        sub_1416DB410(&v190, v24);
        sub_1416DB410(&v195, v24 + 24);
        nullsub_1(v53, v52);
        v54 = (void *)sub_140001650(14, 1);
        if ( !v54 )
          sub_14196B2DB(1, 14);
        qmemcpy(v54, "KEYCHAIN_WRITE", 14);
        v161.m256i_i64[0] = v191;
        v160 = v190;
        v161.m256i_i64[3] = v196;
        *(__m128i *)&v161.m256i_u64[1] = _mm_loadu_si128(&v195);
        *(_QWORD *)&v162 = 14;
        *((_QWORD *)&v162 + 1) = v54;
        *(_QWORD *)&v163 = 14;
        v55 = v202;
        if ( v202 == (_QWORD)v201 )
          sub_141939DD0(&v201);
        v56 = *((_QWORD *)&v201 + 1);
        v57 = 9 * v55;
        *(_QWORD *)(*((_QWORD *)&v201 + 1) + 8 * v57 + 64) = v163;
        v58 = _mm_load_si128(&v160);
        v59 = *(_OWORD *)v161.m256i_i8;
        v60 = *(_OWORD *)&v161.m256i_u64[2];
        *(_OWORD *)(v56 + 8 * v57 + 48) = v162;
        *(_OWORD *)(v56 + 8 * v57 + 32) = v60;
        *(_OWORD *)(v56 + 8 * v57 + 16) = v59;
        *(__m128i *)(v56 + 8 * v57) = v58;
        v202 = v55 + 1;
        if ( v141.m128i_i64[0] )
          sub_140001660(v141.m128i_i64[1], v141.m128i_i64[0], 1);
        if ( v197 )
          sub_140001660(v194, v197, 1);
        v61 = v146.m128i_i64[1];
        v62 = v147;
        if ( v147 )
        {
          v63 = (_QWORD *)(v146.m128i_i64[1] + 72);
          do
          {
            v64 = *(v63 - 7);
            if ( v64 )
              sub_140001660(*(v63 - 6), v64, 1);
            v65 = *(v63 - 1);
            if ( v65 > 0 )
              sub_140001660(*v63, v65, 1);
            v66 = *(v63 - 4);
            if ( v66 )
              sub_140001660(*(v63 - 3), v66, 1);
            v63 += 12;
            --v62;
          }
          while ( v62 );
        }
        v76 = v199;
        if ( v146.m128i_i64[0] )
        {
          v77 = v199;
          sub_140001660(v61, 96 * v146.m128i_i64[0], 8);
          v76 = v77;
        }
        v24 = v17;
        if ( v76 )
          goto LABEL_62;
      }
    }
  }
  *(_QWORD *)(v135 + 16) = v202;
  *(_OWORD *)v135 = v201;
  *(__m128i *)(v135 + 32) = _mm_loadu_si128(&v148);
  *(_QWORD *)(v135 + 48) = v149;
  HIDWORD(_RAX) = HIDWORD(v144);
  *(_QWORD *)(v135 + 24) = v144;
  v121 = v139.m128i_i64[1];
  if ( v139.m128i_i64[1] )
  {
    v122 = v140.m256i_i64[1];
    if ( v140.m256i_i64[1] )
    {
      v123 = v139.m128i_i64[0];
      v124 = (const __m128i *)(v139.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v139.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v126 = _mm_load_si128(v124);
            v123 -= 384;
            ++v124;
            _R15D = _mm_movemask_epi8(v126) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v127 = -3 * _RAX;
        v128 = *(_QWORD *)(v123 + 8 * v127 - 24);
        if ( v128 )
          sub_140001660(*(_QWORD *)(v123 + 8 * v127 - 16), v128, 1);
        --v122;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v122 );
    }
    v129 = (24 * v121 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v130 = v129 + v121 + 17;
    if ( v130 )
      sub_140001660(v139.m128i_i64[0] - v129, v130, 16);
  }
  return v135;
}
