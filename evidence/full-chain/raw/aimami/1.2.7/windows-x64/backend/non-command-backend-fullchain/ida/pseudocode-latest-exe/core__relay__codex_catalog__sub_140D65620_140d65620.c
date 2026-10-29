// win 1.2.7 latest-exe | module src/core/relay/codex_catalog.rs | ea 0x140d65620 | successor of pre-update 0x14101f8a0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.968, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__m128i *__fastcall sub_140D65620(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  __m128i v13; // xmm6
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v24; // r15
  __m128i v25; // kr00_16
  unsigned __int64 v26; // rax
  _QWORD *v27; // r14
  __int64 v28; // r13
  __int64 v29; // rsi
  __int64 v30; // r12
  unsigned __int64 v31; // rdi
  __m128i v32; // xmm10
  __int64 v34; // rax
  int v35; // eax
  unsigned __int64 v36; // rdi
  __int64 v37; // rbx
  __m128i v38; // xmm0
  __m128i v39; // xmm9
  __int64 v40; // r12
  __int64 v41; // rbx
  __int64 v42; // r15
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // r13
  _QWORD *v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  _QWORD *v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rdx
  char v53; // al
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r13
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  unsigned __int64 v64; // rsi
  __int64 v65; // rax
  __m128i v66; // xmm0
  __m128i v67; // xmm1
  __m128i v68; // xmm2
  __int64 v69; // rsi
  __int64 v70; // r15
  _QWORD *v71; // r12
  __int64 v72; // r14
  __int64 v73; // rdi
  __int64 v74; // r13
  unsigned __int64 v75; // rax
  __m128i v77; // xmm0
  __m128i v78; // xmm0
  unsigned __int64 v79; // rax
  __m128i v80; // xmm1
  __int64 v82; // r8
  const char *v83; // rdi
  __int64 v84; // rax
  __int64 v85; // rbx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rbx
  unsigned __int64 v90; // rax
  __m128i v92; // xmm0
  __m128i v93; // xmm0
  unsigned __int64 v94; // rax
  __m128i v95; // xmm1
  __int64 v97; // r8
  unsigned __int64 v98; // rax
  __m128i v100; // xmm0
  __m128i v101; // xmm0
  unsigned __int64 v102; // rax
  __m128i v103; // xmm1
  __int64 v105; // r8
  unsigned __int64 v106; // rax
  __m128i v108; // xmm0
  __m128i v109; // xmm0
  unsigned __int64 v110; // rax
  __m128i v111; // xmm1
  __int64 v113; // r8
  unsigned __int64 v114; // rax
  __m128i v116; // xmm0
  __m128i v117; // xmm0
  unsigned __int64 v118; // rax
  __m128i v119; // xmm1
  __int64 v121; // r8
  __m128i *v123; // rcx
  __int64 v124; // rsi
  __int64 v125; // rdi
  const __m128i *v126; // rbx
  __m128i v128; // xmm0
  __int64 v129; // rax
  __int64 v130; // rdx
  unsigned __int64 v131; // rax
  __int64 v132; // r13
  __int64 v133; // rax
  __int64 v134; // r15
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  __int64 v141; // rcx
  __int64 v142; // rdx
  __m128i *v143; // r15
  __m128i *v144; // r14
  __int64 v145; // rsi
  __int64 v146; // rdi
  __int64 v147; // r13
  __int64 v148; // r12
  __int64 *v149; // rax
  __int64 v150; // rdi
  __int64 *v151; // rsi
  __int64 v152; // rcx
  __m128i v153; // xmm0
  __m128i v154; // xmm1
  __m128i v155; // xmm2
  __int64 v156; // rdx
  __int64 v157; // rbx
  __m128i *v158; // r13
  __m128i *v159; // r15
  char *v160; // rdi
  char *v161; // r14
  __int64 v162; // rax
  unsigned __int64 v163; // rdi
  __int64 v164; // rax
  __int64 v165; // rcx
  __m128i v166; // xmm0
  __m128i v167; // xmm1
  __m128i v168; // xmm2
  __m128i *v170; // rcx
  __m128i *v171; // rcx
  __m128i *v172; // rcx
  unsigned __int64 v173; // rsi
  _QWORD *v174; // rdi
  __int64 v175; // rdx
  __int64 v176; // rdx
  __int64 v177; // rdx
  __int64 v178; // rsi
  __int64 v179; // rdi
  __int64 v180; // rbx
  const __m128i *v181; // r14
  __m128i v183; // xmm0
  __int64 v184; // rax
  __int64 v185; // rdx
  unsigned __int64 v186; // rax
  __int64 v187; // rsi
  bool v188; // zf
  __int64 v189; // rsi
  __int64 v190; // rcx
  __int64 v191; // rdi
  __int64 i; // rbx
  __int64 v193; // rsi
  _OWORD v194[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v195; // [rsp+40h] [rbp-40h]
  __int64 v196; // [rsp+48h] [rbp-38h]
  _OWORD v197[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v198; // [rsp+70h] [rbp-10h]
  __int64 v199; // [rsp+78h] [rbp-8h]
  __m128i v200; // [rsp+80h] [rbp+0h]
  __m128i si128; // [rsp+90h] [rbp+10h]
  __int128 v202; // [rsp+A0h] [rbp+20h] BYREF
  __m128i v203; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v204; // [rsp+C0h] [rbp+40h]
  __m128i v205; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v206; // [rsp+D8h] [rbp+58h]
  __m256i v207; // [rsp+E0h] [rbp+60h] BYREF
  __m128i v208; // [rsp+100h] [rbp+80h] BYREF
  __int128 v209; // [rsp+110h] [rbp+90h]
  __int128 v210; // [rsp+120h] [rbp+A0h]
  __int64 v211; // [rsp+130h] [rbp+B0h]
  __int64 v212; // [rsp+138h] [rbp+B8h] BYREF
  __int64 *v213; // [rsp+140h] [rbp+C0h]
  __int64 v214; // [rsp+148h] [rbp+C8h]
  __int64 v215; // [rsp+150h] [rbp+D0h]
  __int64 v216; // [rsp+158h] [rbp+D8h]
  __int64 v217; // [rsp+160h] [rbp+E0h]
  __int64 v218; // [rsp+168h] [rbp+E8h]
  __m128i v219; // [rsp+170h] [rbp+F0h] BYREF
  __m128i v220; // [rsp+180h] [rbp+100h] BYREF
  __m128i v221; // [rsp+190h] [rbp+110h] BYREF
  __int128 v222; // [rsp+1A0h] [rbp+120h]
  char *v223; // [rsp+1B0h] [rbp+130h]
  __int64 v224; // [rsp+1B8h] [rbp+138h]
  __int64 v225; // [rsp+1C0h] [rbp+140h]
  __int64 v226; // [rsp+1C8h] [rbp+148h]
  __int128 v227; // [rsp+1D0h] [rbp+150h] BYREF
  __m128i v228; // [rsp+1E0h] [rbp+160h]
  _QWORD v229[2]; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v230; // [rsp+200h] [rbp+180h]
  __int64 v231; // [rsp+208h] [rbp+188h]
  __int64 v232; // [rsp+210h] [rbp+190h]
  __int64 v233; // [rsp+218h] [rbp+198h]
  __m128i v234; // [rsp+220h] [rbp+1A0h] BYREF
  unsigned __int64 v235; // [rsp+230h] [rbp+1B0h]
  __int64 v236; // [rsp+238h] [rbp+1B8h]
  _BYTE v237[72]; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v238; // [rsp+288h] [rbp+208h]
  __int64 v239; // [rsp+298h] [rbp+218h]
  __m128i *v240; // [rsp+2A0h] [rbp+220h]
  __int64 v241; // [rsp+2A8h] [rbp+228h]
  __m128i v242; // [rsp+2B0h] [rbp+230h] BYREF
  unsigned __int64 v243; // [rsp+2C0h] [rbp+240h]
  char *v244; // [rsp+2C8h] [rbp+248h]
  __int64 v245; // [rsp+2D0h] [rbp+250h]
  __int64 v246; // [rsp+2D8h] [rbp+258h]
  char v247; // [rsp+2E4h] [rbp+264h]
  char v248; // [rsp+2E5h] [rbp+265h]
  char v249; // [rsp+2E6h] [rbp+266h]
  char v250; // [rsp+2E7h] [rbp+267h]
  __int64 v251; // [rsp+2E8h] [rbp+268h]

  v251 = -2;
  v231 = a3;
  v232 = a2;
  v240 = a1;
  v9 = sub_1416AE140(a1);
  if ( *(_BYTE *)(v9 + 16) == 1 )
  {
    v11 = *(_QWORD *)v9;
    v12 = *(_QWORD *)(v9 + 8);
  }
  else
  {
    v191 = v9;
    v11 = ((__int64 (*)(void))sub_1416C5230)();
    v9 = v191;
    *(_QWORD *)v191 = v11;
    *(_QWORD *)(v191 + 8) = v12;
    *(_BYTE *)(v191 + 16) = 1;
  }
  *(_QWORD *)v9 = v11 + 1;
  v13 = _mm_loadu_si128((const __m128i *)&xmmword_141A90850);
  *(__m128i *)&v237[16] = v13;
  *(_OWORD *)v237 = *(_OWORD *)&off_141A90840;
  *(_QWORD *)&v237[32] = v11;
  *(_QWORD *)&v237[40] = v12;
  if ( a5 )
  {
    LOBYTE(v10) = 1;
    sub_141947620(v237, a5, &v237[32], v10);
    for ( i = 0; i != a5; ++i )
      sub_140872590(v237, *(_QWORD *)(a4 + 24 * i + 8), *(_QWORD *)(a4 + 24 * i + 16));
  }
  v202 = *(_OWORD *)&v237[32];
  si128 = _mm_load_si128((const __m128i *)&v237[16]);
  v200 = _mm_load_si128((const __m128i *)v237);
  v14 = sub_1416AE140(v11);
  v15 = v14;
  if ( *(_BYTE *)(v14 + 16) == 1 )
  {
    v16 = *(_QWORD *)v14;
    v17 = *(_QWORD *)(v15 + 8);
  }
  else
  {
    v16 = ((__int64 (*)(void))sub_1416C5230)();
    *(_QWORD *)v15 = v16;
    *(_QWORD *)(v15 + 8) = v17;
    *(_BYTE *)(v15 + 16) = 1;
  }
  *(_QWORD *)v15 = v16 + 1;
  v197[1] = v13;
  v197[0] = *(_OWORD *)&off_141A90840;
  v198 = v16;
  v199 = v17;
  v18 = sub_1416AE140(v16 + 1);
  v19 = v18;
  if ( *(_BYTE *)(v18 + 16) == 1 )
  {
    v20 = *(_QWORD *)v18;
    v21 = *(_QWORD *)(v19 + 8);
  }
  else
  {
    v20 = ((__int64 (*)(void))sub_1416C5230)();
    *(_QWORD *)v19 = v20;
    *(_QWORD *)(v19 + 8) = v21;
    *(_BYTE *)(v19 + 16) = 1;
  }
  v22 = a6;
  v241 = a4;
  v217 = a4 + 24 * a5;
  *(_QWORD *)v19 = v20 + 1;
  v228 = v13;
  v227 = *(_OWORD *)&off_141A90840;
  v229[0] = v20;
  v229[1] = v21;
  v242.m128i_i64[0] = 0;
  v242.m128i_i64[1] = 8;
  v243 = 0;
  v216 = a6 + 72 * a7;
  _RCX = v231 << 8;
  v218 = v231 << 8;
  v244 = (char *)((v231 << 8) + v232);
  v236 = si128.m128i_i64[1];
  v24 = v200.m128i_i64[1];
  v25 = v200;
  v246 = (unsigned __int128)v25 >> 64;
  v230 = (__int64)v25;
LABEL_10:
  while ( v22 != v216 )
  {
    v26 = v243;
    if ( v243 > 4 )
      goto LABEL_72;
    v27 = (_QWORD *)v22;
    v22 += 72;
    if ( !v231 )
      continue;
    v224 = v22;
    v28 = v27[1];
    v29 = v27[2];
    v30 = v232;
    while ( 1 )
    {
      if ( *(_QWORD *)(v30 + 16) == v29 )
      {
        v37 = *(_QWORD *)(v30 + 8);
        if ( !(unsigned int)sub_141923B40(v37, v28, v29) )
        {
          if ( v236 )
            break;
        }
      }
LABEL_25:
      v30 += 256;
      if ( (char *)v30 == v244 )
      {
        v22 = v224;
        goto LABEL_10;
      }
    }
    v36 = sub_1406D0E00(&v202, v37, v29);
    v38 = _mm_cvtsi32_si128(v36 >> 57);
    v39 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v38, v38), 0), 68);
    for ( _RCX = 0; ; _RCX += 16 )
    {
      v31 = v24 & v36;
      v32 = _mm_loadu_si128((const __m128i *)(v230 + v31));
      _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v32, v39));
      if ( _R15D )
        break;
LABEL_19:
      v24 = v246;
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v32, (__m128i)-1LL)) )
        goto LABEL_25;
      v36 = _RCX + v31 + 16;
    }
    v245 = _RCX;
    while ( 1 )
    {
      __asm { tzcnt   ecx, r15d }
      v34 = v230 - 16 * (v246 & (v31 + _RCX));
      if ( v29 == *(_QWORD *)(v34 - 8) && !(unsigned int)sub_141923B40(v37, *(_QWORD *)(v34 - 16), v29) )
        break;
      v35 = _R15D - 1;
      LOWORD(v35) = _R15D & (_R15D - 1);
      _R15D = v35;
      _RCX = v245;
      if ( !(_WORD)v35 )
        goto LABEL_19;
    }
    sub_140935420(v237, v30);
    v40 = *(_QWORD *)&v237[8];
    v41 = *(_QWORD *)&v237[16];
    if ( !*(_QWORD *)&v237[16] )
      goto LABEL_48;
    v42 = 96LL * *(_QWORD *)&v237[16];
    v43 = v27[4];
    v44 = v27[5];
    v45 = 0;
    do
    {
      if ( *(_QWORD *)(v40 + v45 + 32) == v44 && !(unsigned int)sub_141923B40(*(_QWORD *)(v40 + v45 + 24), v43, v44) )
      {
        v46 = (_QWORD *)(v40 + 72);
        do
        {
          v47 = *(v46 - 7);
          if ( v47 )
            sub_140001660(*(v46 - 6), v47, 1);
          v48 = *(v46 - 1);
          if ( v48 > 0 )
            sub_140001660(*v46, v48, 1);
          v49 = *(v46 - 4);
          if ( v49 )
            sub_140001660(*(v46 - 3), v49, 1);
          v46 += 12;
          --v41;
        }
        while ( v41 );
        if ( *(_QWORD *)v237 )
          sub_140001660(v40, 96LL * *(_QWORD *)v237, 8);
        sub_1416DB410(&v219, v27);
        sub_1416DB410(&v207, v27 + 3);
        *(_QWORD *)&v237[16] = v220.m128i_i64[0];
        *(__m128i *)v237 = v219;
        *(_QWORD *)&v237[40] = v207.m256i_i64[2];
        *(__m128i *)&v237[24] = _mm_loadu_si128((const __m128i *)&v207);
        v53 = sub_140872780(v197, v237);
        v24 = v246;
        v22 = (__int64)(v27 + 9);
        if ( v53 )
          goto LABEL_10;
        if ( v27[6] == -1 || (v54 = sub_140D65490(v27[7], v27[8])) == 0 )
        {
          v245 = -1;
        }
        else
        {
          v57 = v55;
          if ( v55 < 0 )
          {
            v190 = 0;
            goto LABEL_201;
          }
          v58 = v54;
          if ( v55 )
          {
            nullsub_1(v56, v55);
            v59 = sub_140001650(v57, 1);
            if ( v59 )
            {
              v60 = v59;
              sub_1419234B0(v59, v58, v57);
              goto LABEL_61;
            }
            v226 = v57;
            v190 = 1;
LABEL_201:
            sub_14196B2DB(v190, v226);
          }
          v60 = 1;
LABEL_61:
          *(_QWORD *)v237 = v57;
          v226 = v60;
          *(_QWORD *)&v237[8] = v60;
          *(_QWORD *)&v237[16] = v57;
          if ( (unsigned __int8)sub_140871180(&v227, v237) )
          {
            v245 = -1;
          }
          else if ( v57 )
          {
            nullsub_1(v62, v61);
            v63 = sub_140001650(v57, 1);
            if ( !v63 )
              sub_14196B2DB(1, v57);
            v233 = v63;
            sub_1419234B0(v63, v58, v57);
            v245 = v57;
            v225 = v57;
          }
          else
          {
            v233 = 1;
            v225 = 0;
            v245 = 0;
          }
          v24 = v246;
          v22 = (__int64)(v27 + 9);
        }
        v248 = 1;
        sub_1416DB410(&v219, v27);
        sub_1416DB410(&v207, v27 + 3);
        *(_QWORD *)&v237[48] = v245;
        *(_QWORD *)&v237[56] = v233;
        *(_QWORD *)&v237[64] = v225;
        *(__m128i *)v237 = v219;
        *(_QWORD *)&v237[16] = v220.m128i_i64[0];
        *(_QWORD *)&v237[40] = v207.m256i_i64[2];
        *(__m128i *)&v237[24] = _mm_loadu_si128((const __m128i *)&v207);
        v64 = v243;
        if ( v243 == v242.m128i_i64[0] )
          sub_141939DD0(&v242);
        v65 = v242.m128i_i64[1];
        _RCX = 9 * v64;
        v21 = *(_QWORD *)&v237[64];
        *(_QWORD *)(v242.m128i_i64[1] + 8 * _RCX + 64) = *(_QWORD *)&v237[64];
        v66 = _mm_load_si128((const __m128i *)v237);
        v67 = _mm_load_si128((const __m128i *)&v237[16]);
        v68 = _mm_load_si128((const __m128i *)&v237[32]);
        *(_OWORD *)(v65 + 8 * _RCX + 48) = *(_OWORD *)&v237[48];
        *(__m128i *)(v65 + 8 * _RCX + 32) = v68;
        *(__m128i *)(v65 + 8 * _RCX + 16) = v67;
        *(__m128i *)(v65 + 8 * _RCX) = v66;
        v243 = v64 + 1;
        goto LABEL_10;
      }
      v45 += 96;
    }
    while ( v42 != v45 );
    v50 = (_QWORD *)(v40 + 72);
    do
    {
      v51 = *(v50 - 7);
      if ( v51 )
        sub_140001660(*(v50 - 6), v51, 1);
      v52 = *(v50 - 1);
      if ( v52 > 0 )
        sub_140001660(*v50, v52, 1);
      v21 = *(v50 - 4);
      if ( v21 )
        sub_140001660(*(v50 - 3), v21, 1);
      v50 += 12;
      --v41;
    }
    while ( v41 );
LABEL_48:
    v22 = v224;
    if ( *(_QWORD *)v237 )
      sub_140001660(v40, 96LL * *(_QWORD *)v237, 8);
    v24 = v246;
  }
  v26 = v243;
  if ( v243 )
  {
LABEL_72:
    v69 = v242.m128i_i64[1];
    v70 = v242.m128i_i64[1] + 72 * v26;
    while ( 1 )
    {
      do
      {
        if ( v69 == v70 )
        {
          v74 = *((_QWORD *)&v227 + 1);
          goto LABEL_123;
        }
        v71 = (_QWORD *)v69;
        v69 += 72;
      }
      while ( v71[6] != -1 );
      v72 = 11;
      if ( v228.m128i_i64[1] )
        break;
LABEL_84:
      v83 = aGpt56Sol;
LABEL_85:
      nullsub_1(_RCX, v21);
      v84 = sub_140001650(v72, 1);
      if ( !v84 )
        sub_14196B2DB(1, v72);
      v85 = v84;
      sub_1419234B0(v84, v83, v72);
      *(_QWORD *)v237 = v72;
      *(_QWORD *)&v237[8] = v85;
      *(_QWORD *)&v237[16] = v72;
      sub_140871180(&v227, v237);
      nullsub_1(v87, v86);
      v88 = sub_140001650(v72, 1);
      if ( !v88 )
        sub_14196B2DB(1, v72);
      v89 = v88;
      sub_1419234B0(v88, v83, v72);
      v21 = v71[6];
      if ( v21 != -1 && v21 )
        sub_140001660(v71[7], v21, 1);
      v71[6] = v72;
      v71[7] = v89;
      v71[8] = v72;
    }
    v74 = *((_QWORD *)&v227 + 1);
    v73 = v227;
    v75 = sub_1406D0E00(v229, aGpt56Sol, 11);
    v77 = _mm_cvtsi32_si128(v75 >> 57);
    v78 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v77, v77), 0), 68);
    for ( _RCX = 0; ; _RCX += 16 )
    {
      v79 = v74 & v75;
      v80 = _mm_loadu_si128((const __m128i *)(v73 + v79));
      _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v80, v78));
      if ( _EDX )
        break;
LABEL_82:
      v21 = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v80, (__m128i)-1LL));
      if ( (_DWORD)v21 )
        goto LABEL_84;
      v75 = _RCX + v79 + 16;
    }
    while ( 1 )
    {
      __asm { tzcnt   r8d, edx }
      v82 = -3LL * (v74 & (v79 + _R8));
      if ( *(_QWORD *)(v73 + 8 * v82 - 8) == 11
        && !(**(_QWORD **)(v73 + 8 * v82 - 16) ^ 0x2D362E352D747067LL
           | *(_QWORD *)(*(_QWORD *)(v73 + 8 * v82 - 16) + 3LL) ^ 0x6C6F732D362E352DLL) )
      {
        break;
      }
      _R8 = (unsigned int)(_EDX - 1);
      LOWORD(_R8) = _EDX & (_EDX - 1);
      _EDX = _R8;
      if ( !(_WORD)_R8 )
        goto LABEL_82;
    }
    v90 = sub_1406D0E00(v229, aGpt56Terra, 13);
    v92 = _mm_cvtsi32_si128(v90 >> 57);
    v93 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v92, v92), 0), 68);
    for ( _RCX = 0; ; _RCX += 16 )
    {
      v94 = v74 & v90;
      v95 = _mm_loadu_si128((const __m128i *)(v73 + v94));
      _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v95, v93));
      if ( _EDX )
        break;
LABEL_95:
      v21 = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v95, (__m128i)-1LL));
      v72 = 13;
      if ( (_DWORD)v21 )
      {
        v83 = aGpt56Terra;
        goto LABEL_85;
      }
      v90 = _RCX + v94 + 16;
    }
    while ( 1 )
    {
      __asm { tzcnt   r8d, edx }
      v97 = -3LL * (v74 & (v94 + _R8));
      if ( *(_QWORD *)(v73 + 8 * v97 - 8) == 13
        && !(**(_QWORD **)(v73 + 8 * v97 - 16) ^ 0x2D362E352D747067LL
           | *(_QWORD *)(*(_QWORD *)(v73 + 8 * v97 - 16) + 5LL) ^ 0x61727265742D362ELL) )
      {
        break;
      }
      _R8 = (unsigned int)(_EDX - 1);
      LOWORD(_R8) = _EDX & (_EDX - 1);
      _EDX = _R8;
      if ( !(_WORD)_R8 )
        goto LABEL_95;
    }
    v98 = sub_1406D0E00(v229, aGpt56Luna, 12);
    v100 = _mm_cvtsi32_si128(v98 >> 57);
    v101 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v100, v100), 0), 68);
    for ( _RCX = 0; ; _RCX += 16 )
    {
      v102 = v74 & v98;
      v103 = _mm_loadu_si128((const __m128i *)(v73 + v102));
      _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v103, v101));
      if ( _EDX )
        break;
LABEL_102:
      v21 = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v103, (__m128i)-1LL));
      v72 = 12;
      if ( (_DWORD)v21 )
      {
        v83 = aGpt56Luna;
        goto LABEL_85;
      }
      v98 = _RCX + v102 + 16;
    }
    while ( 1 )
    {
      __asm { tzcnt   r8d, edx }
      v105 = -3LL * (v74 & (v102 + _R8));
      if ( *(_QWORD *)(v73 + 8 * v105 - 8) == 12
        && !(**(_QWORD **)(v73 + 8 * v105 - 16) ^ 0x2D362E352D747067LL
           | *(unsigned int *)(*(_QWORD *)(v73 + 8 * v105 - 16) + 8LL) ^ 0x616E756CLL) )
      {
        break;
      }
      _R8 = (unsigned int)(_EDX - 1);
      LOWORD(_R8) = _EDX & (_EDX - 1);
      _EDX = _R8;
      if ( !(_WORD)_R8 )
        goto LABEL_102;
    }
    v106 = sub_1406D0E00(v229, aGpt55, 7);
    v108 = _mm_cvtsi32_si128(v106 >> 57);
    v109 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v108, v108), 0), 68);
    for ( _RCX = 0; ; _RCX += 16 )
    {
      v110 = v74 & v106;
      v111 = _mm_loadu_si128((const __m128i *)(v73 + v110));
      _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v111, v109));
      if ( _EDX )
        break;
LABEL_109:
      v21 = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v111, (__m128i)-1LL));
      v72 = 7;
      if ( (_DWORD)v21 )
      {
        v83 = aGpt55;
        goto LABEL_85;
      }
      v106 = _RCX + v110 + 16;
    }
    while ( 1 )
    {
      __asm { tzcnt   r8d, edx }
      v113 = -3LL * (v74 & (v110 + _R8));
      if ( *(_QWORD *)(v73 + 8 * v113 - 8) == 7
        && !(**(_DWORD **)(v73 + 8 * v113 - 16) ^ 0x2D747067
           | *(_DWORD *)(*(_QWORD *)(v73 + 8 * v113 - 16) + 3LL) ^ 0x352E352D) )
      {
        break;
      }
      _R8 = (unsigned int)(_EDX - 1);
      LOWORD(_R8) = _EDX & (_EDX - 1);
      _EDX = _R8;
      if ( !(_WORD)_R8 )
        goto LABEL_109;
    }
    v114 = sub_1406D0E00(v229, aGpt54, 7);
    v116 = _mm_cvtsi32_si128(v114 >> 57);
    v117 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v116, v116), 0), 68);
    for ( _RCX = 0; ; _RCX += 16 )
    {
      v118 = v74 & v114;
      v119 = _mm_loadu_si128((const __m128i *)(v73 + v118));
      _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v119, v117));
      if ( _EDX )
        break;
LABEL_117:
      v21 = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v119, (__m128i)-1LL));
      v72 = 7;
      if ( (_DWORD)v21 )
      {
        v83 = aGpt54;
        goto LABEL_85;
      }
      v114 = _RCX + v118 + 16;
    }
    while ( 1 )
    {
      __asm { tzcnt   r8d, edx }
      v121 = -3LL * (v74 & (v118 + _R8));
      if ( *(_QWORD *)(v73 + 8 * v121 - 8) == 7
        && !(**(_DWORD **)(v73 + 8 * v121 - 16) ^ 0x2D747067
           | *(_DWORD *)(*(_QWORD *)(v73 + 8 * v121 - 16) + 3LL) ^ 0x342E352D) )
      {
        break;
      }
      _R8 = (unsigned int)(_EDX - 1);
      LOWORD(_R8) = _EDX & (_EDX - 1);
      _EDX = _R8;
      if ( !(_WORD)_R8 )
        goto LABEL_117;
    }
LABEL_123:
    HIDWORD(_RAX) = HIDWORD(v243);
    v123 = v240;
    v240[1].m128i_i64[0] = v243;
    *v123 = _mm_loadu_si128(&v242);
    v24 = v246;
    if ( v74 )
    {
      v124 = v228.m128i_i64[1];
      if ( v228.m128i_i64[1] )
      {
        v125 = v227;
        v126 = (const __m128i *)(v227 + 16);
        _R14D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v227));
        do
        {
          if ( !(_WORD)_R14D )
          {
            do
            {
              v128 = _mm_load_si128(v126);
              v125 -= 384;
              ++v126;
              _R14D = _mm_movemask_epi8(v128) ^ 0xFFFF;
            }
            while ( !_R14D );
          }
          __asm { tzcnt   eax, r14d }
          v129 = -3 * _RAX;
          v130 = *(_QWORD *)(v125 + 8 * v129 - 24);
          if ( v130 )
            sub_140001660(*(_QWORD *)(v125 + 8 * v129 - 16), v130, 1);
          --v124;
          _RAX = _R14D & (unsigned int)(_R14D - 1);
          _R14D &= _R14D - 1;
        }
        while ( v124 );
      }
      v131 = (24 * v74 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v132 = v131 + v74 + 17;
      if ( v132 )
        sub_140001660(v227 - v131, v132, 16);
    }
    sub_14018EA10(v197);
  }
  else
  {
    if ( a8 )
    {
      v234.m128i_i64[0] = 0;
      v234.m128i_i64[1] = 8;
      v235 = 0;
      v249 = 1;
      v136 = sub_1416AE140(_RCX);
      v140 = v241;
      if ( *(_BYTE *)(v136 + 16) == 1 )
      {
        v141 = *(_QWORD *)v136;
        v142 = *(_QWORD *)(v136 + 8);
      }
      else
      {
        v249 = 1;
        v193 = v136;
        v141 = sub_1416C5230(v138, v137, v139, v241);
        v136 = v193;
        *(_QWORD *)v193 = v141;
        *(_QWORD *)(v193 + 8) = v142;
        *(_BYTE *)(v193 + 16) = 1;
        v140 = v241;
      }
      *(_QWORD *)v136 = v141 + 1;
      v194[1] = v13;
      v194[0] = *(_OWORD *)&off_141A90840;
      v195 = v141;
      v196 = v142;
      v143 = (__m128i *)&v220.m128i_u64[1];
      v144 = &v203;
      do
      {
LABEL_143:
        if ( v140 == v217 )
        {
          v172 = v240;
          v240[1].m128i_i64[0] = v235;
          *v172 = _mm_loadu_si128(&v234);
          v249 = 0;
          sub_14018EA10(v194);
          v24 = v246;
          goto LABEL_178;
        }
        v145 = v140;
        v140 += 24;
      }
      while ( !v231 );
      v241 = v140;
      v146 = *(_QWORD *)(v145 + 16);
      v147 = v218;
      v148 = v232;
      while ( *(_QWORD *)(v148 + 16) != v146
           || (unsigned int)sub_141923B40(*(_QWORD *)(v148 + 8), *(_QWORD *)(v145 + 8), v146) )
      {
        v148 += 256;
        v147 -= 256;
        if ( !v147 )
        {
          v140 = v241;
          goto LABEL_143;
        }
      }
      sub_140935420(v237, v148);
      v149 = *(__int64 **)&v237[8];
      v150 = *(_QWORD *)&v237[8] + 96LL * *(_QWORD *)&v237[16];
      v212 = *(_QWORD *)&v237[8];
      v213 = *(__int64 **)&v237[8];
      v214 = *(_QWORD *)v237;
      v215 = v150;
      while ( 1 )
      {
        if ( v149 == (__int64 *)v150 )
          goto LABEL_167;
        v151 = v149 + 12;
        v213 = v149 + 12;
        v152 = *v149;
        v211 = v149[11];
        v210 = *(_OWORD *)(v149 + 9);
        v209 = *(_OWORD *)(v149 + 7);
        v208 = *(__m128i *)(v149 + 5);
        *(_OWORD *)&v207.m256i_u64[2] = *(_OWORD *)(v149 + 3);
        *(__m128i *)v207.m256i_i8 = _mm_loadu_si128((const __m128i *)(v149 + 1));
        if ( v152 == 2 )
        {
LABEL_167:
          sub_140233510(&v212);
          v140 = v241;
          goto LABEL_143;
        }
        *(_QWORD *)v237 = v152;
        v239 = v211;
        v238 = v210;
        v153 = _mm_load_si128((const __m128i *)&v207);
        v154 = _mm_load_si128((const __m128i *)&v207.m256i_u64[2]);
        v155 = _mm_load_si128(&v208);
        *(_OWORD *)&v237[56] = v209;
        *(__m128i *)&v237[40] = v155;
        *(__m128i *)&v237[24] = v154;
        *(__m128i *)&v237[8] = v153;
        if ( v235 >= 5 )
          break;
        v250 = 1;
        sub_1416DB410(&v205, v148);
        sub_1416DB410(v144, &v237[16]);
        v220.m128i_i64[0] = v206;
        v219 = v205;
        v143[1].m128i_i64[0] = v204;
        *v143 = _mm_loadu_si128(&v203);
        v250 = 1;
        if ( (unsigned __int8)sub_140872780(v194, &v219) )
        {
          if ( *(_QWORD *)&v237[16] )
            sub_140001660(*(_QWORD *)&v237[24], *(_QWORD *)&v237[16], 1);
        }
        else
        {
          if ( v235 >= 5 )
          {
            v250 = 1;
            sub_14196B673(v235, 5, &off_141A988B0);
          }
          v157 = v150;
          v158 = v143;
          v159 = v144;
          v160 = (&off_141A98658)[2 * v235];
          v161 = (&off_141A98658)[2 * v235 + 1];
          nullsub_1(16 * v235, v156);
          v244 = v161;
          v162 = sub_140001650(v161, 1);
          if ( !v162 )
          {
            v250 = 1;
            sub_14196B2DB(1, v244);
          }
          v236 = v162;
          sub_1419234B0(v162, v160, v244);
          v247 = 1;
          v144 = v159;
          sub_1416DB410(v159, v148);
          v143 = v158;
          v158[1].m128i_i64[0] = v207.m256i_i64[3];
          *v158 = *(__m128i *)&v207.m256i_u64[1];
          *(_QWORD *)&v222 = v244;
          *((_QWORD *)&v222 + 1) = v236;
          v223 = v244;
          v219 = _mm_loadu_si128(&v203);
          v220.m128i_i64[0] = v204;
          v163 = v235;
          if ( v235 == v234.m128i_i64[0] )
            sub_141939DD0(&v234);
          v164 = v234.m128i_i64[1];
          v165 = 9 * v163;
          *(_QWORD *)(v234.m128i_i64[1] + 8 * v165 + 64) = v223;
          v166 = _mm_load_si128(&v219);
          v167 = _mm_load_si128(&v220);
          v168 = _mm_load_si128(&v221);
          *(_OWORD *)(v164 + 8 * v165 + 48) = v222;
          *(__m128i *)(v164 + 8 * v165 + 32) = v168;
          *(__m128i *)(v164 + 8 * v165 + 16) = v167;
          *(__m128i *)(v164 + 8 * v165) = v166;
          v235 = v163 + 1;
          v150 = v157;
        }
        if ( *(_QWORD *)&v237[64] != -1 && *(_QWORD *)&v237[64] )
          sub_140001660(v238, *(_QWORD *)&v237[64], 1);
        if ( *(_QWORD *)&v237[40] )
          sub_140001660(*(_QWORD *)&v237[48], *(_QWORD *)&v237[40], 1);
        v149 = v151;
      }
      v171 = v240;
      v240[1].m128i_i64[0] = v235;
      *v171 = v234;
      if ( *(_QWORD *)&v237[16] )
        sub_140001660(*(_QWORD *)&v237[24], *(_QWORD *)&v237[16], 1);
      v24 = v246;
      if ( *(_QWORD *)&v237[64] != -1 && *(_QWORD *)&v237[64] )
        sub_140001660(v238, *(_QWORD *)&v237[64], 1);
      if ( *(_QWORD *)&v237[40] )
        sub_140001660(*(_QWORD *)&v237[48], *(_QWORD *)&v237[40], 1);
      sub_140233510(&v212);
      v249 = 0;
      sub_14018EA10(v194);
LABEL_178:
      v173 = v243;
      if ( v243 )
      {
        v174 = (_QWORD *)(v242.m128i_i64[1] + 56);
        do
        {
          v175 = *(v174 - 7);
          if ( v175 )
            sub_140001660(*(v174 - 6), v175, 1);
          v176 = *(v174 - 4);
          if ( v176 )
            sub_140001660(*(v174 - 3), v176, 1);
          v177 = *(v174 - 1);
          if ( v177 > 0 )
            sub_140001660(*v174, v177, 1);
          v174 += 9;
          --v173;
        }
        while ( v173 );
      }
      HIDWORD(_RAX) = v242.m128i_i32[1];
      if ( v242.m128i_i64[0] )
        sub_140001660(v242.m128i_i64[1], 72 * v242.m128i_i64[0], 8);
    }
    else
    {
      HIDWORD(_RAX) = HIDWORD(v243);
      v170 = v240;
      v240[1].m128i_i64[0] = v243;
      *v170 = _mm_loadu_si128(&v242);
    }
    v178 = *((_QWORD *)&v227 + 1);
    if ( *((_QWORD *)&v227 + 1) )
    {
      v179 = v228.m128i_i64[1];
      if ( v228.m128i_i64[1] )
      {
        v180 = v227;
        v181 = (const __m128i *)(v227 + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v227));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v183 = _mm_load_si128(v181);
              v180 -= 384;
              ++v181;
              _R15D = _mm_movemask_epi8(v183) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v184 = -3 * _RAX;
          v185 = *(_QWORD *)(v180 + 8 * v184 - 24);
          if ( v185 )
            sub_140001660(*(_QWORD *)(v180 + 8 * v184 - 16), v185, 1);
          --v179;
          _RAX = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v179 );
      }
      v186 = (24 * v178 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v187 = v186 + v178;
      v188 = v187 == -17;
      v189 = v187 + 17;
      v24 = v246;
      if ( !v188 )
        sub_140001660(v227 - v186, v189, 16);
    }
    sub_14018EA10(v197);
  }
  if ( v24 )
  {
    v133 = 16 * v24;
    v134 = 17 * v24 + 33;
    if ( v134 )
      sub_140001660(v230 - v133 - 16, v134, 16);
  }
  return v240;
}
