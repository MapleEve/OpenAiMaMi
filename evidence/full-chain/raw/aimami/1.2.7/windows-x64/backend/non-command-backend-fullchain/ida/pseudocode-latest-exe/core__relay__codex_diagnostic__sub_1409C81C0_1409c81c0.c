// win 1.2.7 latest-exe | module src/core/relay/codex_diagnostic.rs | ea 0x1409c81c0 | successor of pre-update 0x140f33330 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
void __fastcall sub_1409C81C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  _QWORD *v5; // rbx
  __m128i si128; // xmm7
  __int64 *v7; // rax
  __int64 *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // r14
  int v11; // eax
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  __m128i v17; // kr00_16
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __int64 i; // rcx
  unsigned __int64 v21; // rax
  __m128i v22; // xmm1
  __int64 v24; // r8
  __int64 v25; // r8
  int v26; // r9d
  __int64 v27; // rax
  const char *v28; // r8
  const char *v29; // rcx
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  __int64 j; // rcx
  unsigned __int64 v36; // rax
  __m128i v37; // xmm1
  __int64 v39; // r8
  int v40; // r8d
  __m128i v41; // xmm1
  __m128i v42; // xmm2
  int v43; // eax
  unsigned __int64 v44; // r13
  __int64 v45; // rsi
  unsigned __int64 v46; // r12
  __int64 v47; // r14
  unsigned __int64 v48; // rsi
  __int64 v49; // r13
  char v50; // al
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r14
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // r9
  unsigned __int64 v59; // r14
  __int64 v60; // rdx
  unsigned __int64 v61; // r8
  __int64 v62; // rcx
  __int64 v63; // rsi
  __int64 v65; // rsi
  __int64 v66; // r14
  const __m128i *v67; // r12
  __m128i v69; // xmm0
  __int64 v70; // rax
  __int64 v71; // rdx
  unsigned __int64 v72; // rax
  __int64 v73; // rsi
  __int64 *v74; // r14
  __int64 v75; // rax
  unsigned __int128 v76; // krD0_16
  __m128i v77; // xmm6
  unsigned __int64 v78; // r14
  unsigned __int64 v79; // rsi
  unsigned __int64 v80; // rdx
  unsigned __int64 v81; // rsi
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rsi
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rsi
  __int64 v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rsi
  __m128i v92; // xmm0
  __m128i v93; // xmm1
  __m128i *v94; // rax
  __int64 v96; // rsi
  __int64 v97; // r14
  const __m128i *v98; // r12
  __m128i v100; // xmm0
  __int64 v101; // rax
  __int64 v102; // rdx
  unsigned __int64 v103; // rax
  __int64 v104; // rsi
  __int64 v105; // rdx
  unsigned __int64 v106; // rdi
  __int64 v107; // rdx
  __int64 v108; // rdi
  _QWORD *v109; // rsi
  unsigned __int64 v110; // rdi
  __int64 v111; // rdx
  __m128i v112; // xmm0
  __m128i v113; // xmm1
  __m128i v114; // xmm2
  __m128i v115; // xmm0
  __m128i v116; // xmm0
  __m128i v117; // xmm1
  __m128i v118; // xmm2
  __m128i v119; // xmm0
  __m128i v120; // xmm1
  __m128i v121; // xmm2
  __m128i v122; // xmm6
  __int64 v123; // rsi
  __m128i v124; // xmm0
  __m128i v125; // xmm1
  __m128i v126; // xmm0
  __m128i v127; // xmm1
  __m128i v128; // xmm2
  __m128i v129; // xmm0
  __m128i v130; // xmm1
  __m128i v131; // xmm2
  __m128i v132; // xmm6
  __int64 v133; // rsi
  __int64 v134; // rax
  __int64 v135; // [rsp+20h] [rbp-60h] BYREF
  __int128 v136; // [rsp+28h] [rbp-58h]
  __int64 v137; // [rsp+38h] [rbp-48h]
  __int128 v138; // [rsp+40h] [rbp-40h]
  __int128 v139; // [rsp+50h] [rbp-30h]
  __int128 v140; // [rsp+60h] [rbp-20h]
  __int128 v141; // [rsp+70h] [rbp-10h]
  unsigned __int64 v142; // [rsp+80h] [rbp+0h]
  char v143; // [rsp+88h] [rbp+8h]
  _BYTE v144[7]; // [rsp+89h] [rbp+9h]
  __int64 v145; // [rsp+90h] [rbp+10h]
  __int64 *v146; // [rsp+98h] [rbp+18h]
  __int64 v147; // [rsp+A0h] [rbp+20h]
  __int64 v148; // [rsp+A8h] [rbp+28h]
  _QWORD v149[2]; // [rsp+B0h] [rbp+30h] BYREF
  _QWORD v150[2]; // [rsp+C0h] [rbp+40h] BYREF
  __m128i v151; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v152; // [rsp+E0h] [rbp+60h]
  __m128i v153; // [rsp+F0h] [rbp+70h]
  __m128i v154; // [rsp+110h] [rbp+90h] BYREF
  __int64 v155; // [rsp+120h] [rbp+A0h]
  __int64 v156; // [rsp+128h] [rbp+A8h]
  __int64 *v157; // [rsp+130h] [rbp+B0h]
  __int64 v158; // [rsp+138h] [rbp+B8h]
  __int128 v159; // [rsp+140h] [rbp+C0h]
  __m128i v160; // [rsp+150h] [rbp+D0h] BYREF
  __m128i v161; // [rsp+160h] [rbp+E0h]
  __m128i v162; // [rsp+170h] [rbp+F0h] BYREF
  __m128i v163; // [rsp+180h] [rbp+100h] BYREF
  __m128i v164; // [rsp+190h] [rbp+110h]
  __m128i v165; // [rsp+1A0h] [rbp+120h]
  __int128 v166; // [rsp+1B0h] [rbp+130h]
  __int64 v167; // [rsp+1C8h] [rbp+148h]
  unsigned __int64 v168; // [rsp+1D0h] [rbp+150h]
  unsigned __int64 v169; // [rsp+1D8h] [rbp+158h]
  __int64 v170; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v171; // [rsp+1E8h] [rbp+168h]
  __m128i v172; // [rsp+1F0h] [rbp+170h] BYREF
  __m128i v173; // [rsp+200h] [rbp+180h]
  __m128i v174; // [rsp+210h] [rbp+190h]
  __int128 v175; // [rsp+220h] [rbp+1A0h]
  __m128i v176; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v177; // [rsp+248h] [rbp+1C8h]
  __int64 v178; // [rsp+250h] [rbp+1D0h]
  __int64 v179; // [rsp+258h] [rbp+1D8h]
  _BYTE v180[80]; // [rsp+260h] [rbp+1E0h] BYREF
  __int128 v181; // [rsp+2B0h] [rbp+230h]
  unsigned __int64 v182; // [rsp+2C0h] [rbp+240h]
  char v183; // [rsp+2C8h] [rbp+248h]
  _BYTE v184[7]; // [rsp+2C9h] [rbp+249h]
  __m128i v185; // [rsp+2D0h] [rbp+250h]
  __int64 v186; // [rsp+2E0h] [rbp+260h]
  __int64 v187; // [rsp+2E8h] [rbp+268h]
  unsigned __int64 v188; // [rsp+2F0h] [rbp+270h]
  unsigned __int64 v189; // [rsp+2F8h] [rbp+278h]
  unsigned __int64 v190; // [rsp+300h] [rbp+280h]
  unsigned __int64 v191; // [rsp+308h] [rbp+288h]
  __int64 v192; // [rsp+310h] [rbp+290h]
  char v193; // [rsp+318h] [rbp+298h]
  char v194; // [rsp+319h] [rbp+299h]
  unsigned __int64 v195; // [rsp+320h] [rbp+2A0h]
  __int64 v196; // [rsp+328h] [rbp+2A8h]
  __m128i v197; // [rsp+330h] [rbp+2B0h] BYREF
  __m128i v198; // [rsp+340h] [rbp+2C0h] BYREF
  __m128i v199; // [rsp+350h] [rbp+2D0h] BYREF
  __int128 v200; // [rsp+360h] [rbp+2E0h]
  unsigned __int64 v201; // [rsp+378h] [rbp+2F8h]
  __m128i v202; // [rsp+380h] [rbp+300h] BYREF
  __m128i v203; // [rsp+390h] [rbp+310h] BYREF
  __m128i v204; // [rsp+3A0h] [rbp+320h] BYREF
  __int128 v205; // [rsp+3B0h] [rbp+330h]
  int v206; // [rsp+3C4h] [rbp+344h]
  unsigned __int64 v207; // [rsp+3C8h] [rbp+348h]
  unsigned __int64 v208; // [rsp+3D0h] [rbp+350h]
  __int64 v209; // [rsp+3D8h] [rbp+358h]
  int v210; // [rsp+3E4h] [rbp+364h]
  __int64 v211; // [rsp+3E8h] [rbp+368h]
  __int64 v212; // [rsp+3F0h] [rbp+370h]
  __int64 v213; // [rsp+3F8h] [rbp+378h]
  char v214; // [rsp+407h] [rbp+387h]
  __int64 v215; // [rsp+408h] [rbp+388h]
  unsigned __int64 v216; // [rsp+410h] [rbp+390h]
  unsigned __int64 v217; // [rsp+418h] [rbp+398h]
  __m128i v218; // [rsp+420h] [rbp+3A0h] BYREF
  __int64 v219; // [rsp+430h] [rbp+3B0h]
  __int64 v220; // [rsp+438h] [rbp+3B8h]
  char v221; // [rsp+447h] [rbp+3C7h]
  __int64 v222; // [rsp+448h] [rbp+3C8h]

  v222 = -2;
  v176.m128i_i64[0] = 0;
  v176.m128i_i64[1] = 8;
  v177 = 0;
  sub_140A2C460(v180, a2);
  v3 = *(_QWORD *)&v180[8] + 32LL * *(_QWORD *)&v180[16];
  v145 = *(_QWORD *)&v180[8];
  v159 = *(_OWORD *)v180;
  v147 = *(_QWORD *)v180;
  v148 = v3;
  v4 = 32LL * *(_QWORD *)&v180[16] - 32;
  v5 = (_QWORD *)(*(_QWORD *)&v180[8] + 40LL);
  si128 = _mm_load_si128((const __m128i *)&xmmword_141A50650);
  v7 = *(__int64 **)&v180[8];
  v158 = v3;
  if ( *(_QWORD *)&v180[8] == v3 )
    goto LABEL_167;
  while ( 1 )
  {
    v8 = v7 + 4;
    v146 = v7 + 4;
    if ( *v7 == -1 )
    {
      if ( (__int64 *)v3 != v8 )
      {
        v110 = v4 >> 5;
        do
        {
          v111 = *(v5 - 1);
          if ( v111 )
            sub_140001660(*v5, v111, 1);
          v5 += 4;
          --v110;
        }
        while ( v110 );
      }
LABEL_167:
      if ( (_QWORD)v159 )
        sub_140001660(*((_QWORD *)&v159 + 1), 32 * v159, 8);
      *(_QWORD *)(a1 + 24) = v177;
      *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v176);
      *(_QWORD *)a1 = -1;
      return;
    }
    v178 = *v7;
    v9 = v7[1];
    v10 = v7[2];
    v214 = *((_BYTE *)v7 + 24);
    v211 = v9;
    sub_1409016A0(v180, v9, v10, 32769);
    if ( v183 == -1 )
    {
      v112 = _mm_loadu_si128((const __m128i *)v180);
      v113 = _mm_loadu_si128((const __m128i *)&v180[16]);
      v114 = _mm_loadu_si128((const __m128i *)&v180[32]);
      v205 = *(_OWORD *)&v180[48];
      v204 = v114;
      v203 = v113;
      v202 = v112;
      v160.m128i_i64[0] = v211;
      v160.m128i_i64[1] = v10;
      v197.m128i_i64[0] = (__int64)&v160;
      v197.m128i_i64[1] = (__int64)sub_1416CE600;
      v198.m128i_i64[0] = (__int64)&v202;
      v198.m128i_i64[1] = (__int64)sub_14142D4D0;
      sub_1416DAFA0(&v151, &unk_141A59F8D, &v197);
      v197 = _mm_loadu_si128(&v151);
      v198.m128i_i64[0] = v152;
      sub_140904700(&v202);
      v115 = _mm_load_si128(&v197);
      v163 = v115;
      v164.m128i_i64[0] = v198.m128i_i64[0];
      *(_QWORD *)(a1 + 24) = v198.m128i_i64[0];
      *(__m128i *)(a1 + 8) = v115;
      *(_QWORD *)a1 = 10;
      v105 = v178;
      if ( v178 )
        goto LABEL_139;
      goto LABEL_140;
    }
    v173.m128i_i64[0] = *(_QWORD *)&v180[24];
    v172 = *(__m128i *)&v180[8];
    v138 = *(_OWORD *)&v180[32];
    v139 = *(_OWORD *)&v180[48];
    v140 = *(_OWORD *)&v180[64];
    v141 = v181;
    *(_DWORD *)&v144[3] = *(_DWORD *)&v184[3];
    *(_DWORD *)v144 = *(_DWORD *)v184;
    v164.m128i_i64[0] = *(_QWORD *)&v180[24];
    v163 = *(__m128i *)&v180[8];
    v137 = *(_QWORD *)&v180[24];
    v136 = *(_OWORD *)&v180[8];
    v135 = *(_QWORD *)v180;
    v142 = v182;
    v143 = v183;
    sub_141431450(v180, &v135, 3, 0);
    if ( *(_QWORD *)v180 != -1 )
      sub_140904700(v180);
    sub_140930990(v180, &v135, aPragmaTableInf_0, 26);
    v157 = v8;
    if ( *(_DWORD *)v180 == 1 )
    {
      v116 = _mm_loadu_si128((const __m128i *)&v180[8]);
      v117 = _mm_loadu_si128((const __m128i *)&v180[24]);
      v118 = _mm_loadu_si128((const __m128i *)&v180[40]);
      v205 = *(_OWORD *)&v180[56];
      v204 = v118;
      v203 = v117;
      v202 = v116;
      v170 = v211;
      v171 = v10;
      v197.m128i_i64[0] = (__int64)&v170;
      v197.m128i_i64[1] = (__int64)sub_1416CE600;
      v198.m128i_i64[0] = (__int64)&v202;
      v198.m128i_i64[1] = (__int64)sub_14142D4D0;
      sub_1416DAFA0(&v154, &unk_141A5A10A, &v197);
      v197 = _mm_loadu_si128(&v154);
      v198.m128i_i64[0] = v155;
      sub_140904700(&v202);
      v119 = _mm_load_si128(&v197);
      v120 = _mm_load_si128(&v198);
      v121 = _mm_load_si128(&v199);
      v153 = v121;
      v172 = v119;
      v173 = v120;
      v174 = v121;
      v175 = v200;
      *(_OWORD *)(a1 + 56) = v200;
      *(__m128i *)(a1 + 40) = v121;
      *(__m128i *)(a1 + 24) = v120;
      *(__m128i *)(a1 + 8) = v119;
      *(_QWORD *)a1 = 10;
      goto LABEL_138;
    }
    v172 = *(__m128i *)&v180[8];
    v163 = *(__m128i *)&v180[8];
    v164 = *(__m128i *)&v180[24];
    v165 = *(__m128i *)&v180[40];
    v166 = *(_OWORD *)&v180[56];
    v11 = sub_1417D8600(*(_QWORD *)&v180[64]);
    if ( v11 )
    {
      *(_OWORD *)v180 = 0x8000000000000013uLL;
      *(_QWORD *)&v180[16] = v11;
      v151.m128i_i64[0] = v211;
      v151.m128i_i64[1] = v10;
      v202.m128i_i64[0] = (__int64)&v151;
      v202.m128i_i64[1] = (__int64)sub_1416CE600;
      v203.m128i_i64[0] = (__int64)v180;
      v203.m128i_i64[1] = (__int64)sub_14142D4D0;
      sub_1416DAFA0(&v197, &unk_141A59FB9, &v202);
      v122 = _mm_load_si128(&v197);
      v123 = v198.m128i_i64[0];
      sub_140904700(v180);
      *(_QWORD *)a1 = 10;
      *(__m128i *)(a1 + 8) = v122;
      *(_QWORD *)(a1 + 24) = v123;
      sub_140904890(&v163);
      goto LABEL_138;
    }
    sub_14077CBA0(&v202, &v163, 0);
    if ( v202.m128i_i64[0] != -1 )
    {
      *(_OWORD *)&v180[48] = v205;
      *(__m128i *)&v180[32] = v204;
      *(__m128i *)&v180[16] = v203;
      *(__m128i *)v180 = v202;
      v170 = v211;
      v171 = v10;
      v197.m128i_i64[0] = (__int64)&v170;
      v197.m128i_i64[1] = (__int64)sub_1416CE600;
      v198.m128i_i64[0] = (__int64)v180;
      v198.m128i_i64[1] = (__int64)sub_14142D4D0;
      sub_1416DAFA0(&v154, &unk_141A59FDA, &v197);
      v197 = v154;
      v198.m128i_i64[0] = v155;
      sub_140904700(v180);
      v124 = v197;
      v125 = v198;
      v172 = v197;
      v173 = v198;
      v174 = v199;
      *(__m128i *)(a1 + 40) = v199;
      *(__m128i *)(a1 + 24) = v125;
      *(__m128i *)(a1 + 8) = v124;
      *(_QWORD *)a1 = 10;
      sub_140904890(&v163);
      goto LABEL_138;
    }
    v12 = _mm_loadu_si128((const __m128i *)&v203.m128i_u64[1]);
    v13 = _mm_loadu_si128((const __m128i *)&v204.m128i_u64[1]);
    v172 = _mm_loadu_si128((const __m128i *)&v202.m128i_u64[1]);
    v173 = v12;
    v174 = v13;
    v160 = v172;
    v161 = v12;
    v162 = v13;
    sub_140904890(&v163);
    v179 = a1;
    v14 = v161.m128i_i64[1];
    if ( v161.m128i_i64[1] )
    {
      v15 = sub_1406D0E00(&v162, aModel_3, 5);
      v17 = v160;
      v18 = _mm_cvtsi32_si128(v15 >> 57);
      v19 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v18, v18), 0), 68);
      for ( i = 0; ; i += 16 )
      {
        v21 = v160.m128i_i64[1] & v15;
        v22 = _mm_loadu_si128((const __m128i *)(v160.m128i_i64[0] + v21));
        _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v22, v19));
        if ( _EDX )
          break;
LABEL_15:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v22, (__m128i)-1LL)) )
        {
          v210 = 0;
          goto LABEL_19;
        }
        v15 = i + v21 + 16;
      }
      while ( 1 )
      {
        __asm { tzcnt   r8d, edx }
        v24 = -3LL * (v160.m128i_i64[1] & (v21 + _R8));
        if ( *(_QWORD *)(v160.m128i_i64[0] + 8 * v24 - 8) == 5 )
        {
          v25 = *(_QWORD *)(v160.m128i_i64[0] + 8 * v24 - 16);
          v26 = *(_DWORD *)v25 ^ 0x65646F6D;
          LODWORD(v25) = *(unsigned __int8 *)(v25 + 4) ^ 0x6C;
          v210 = 1701080833;
          if ( !(v26 | (unsigned int)v25) )
            break;
        }
        _R8 = (unsigned int)(_EDX - 1);
        LOWORD(_R8) = _EDX & (_EDX - 1);
        _EDX = _R8;
        if ( !(_WORD)_R8 )
          goto LABEL_15;
      }
LABEL_19:
      v31 = sub_1406D0E00(&v162, aReasoningEffor_2, 16);
      v33 = _mm_cvtsi32_si128(v31 >> 57);
      v34 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v33, v33), 0), 68);
      for ( j = 0; ; j += 16 )
      {
        v36 = v17.m128i_i64[1] & v31;
        v37 = _mm_loadu_si128((const __m128i *)(v17.m128i_i64[0] + v36));
        _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v37, v34));
        if ( _EDX )
          break;
LABEL_24:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v37, (__m128i)-1LL)) )
        {
          v28 = (const char *)&unk_141A61FAE;
          v29 = (const char *)&unk_141A61FAE;
          if ( (_BYTE)v210 )
            v29 = aModel_3;
          v27 = (unsigned __int8)v210 | 4LL;
          v30 = 4;
          v206 = 0;
          goto LABEL_32;
        }
        v31 = j + v36 + 16;
      }
      while ( 1 )
      {
        __asm { tzcnt   r8d, edx }
        v39 = -3LL * (v17.m128i_i64[1] & (v36 + _R8));
        if ( *(_QWORD *)(v17.m128i_i64[0] + 8 * v39 - 8) == 16 )
        {
          v40 = _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v17.m128i_i64[0]
                                                                                            + 8 * v39
                                                                                            - 16)), si128));
          if ( v40 == 0xFFFF )
            break;
        }
        _R8 = (unsigned int)(_EDX - 1);
        LOWORD(_R8) = _EDX & (_EDX - 1);
        _EDX = _R8;
        if ( !(_WORD)_R8 )
          goto LABEL_24;
      }
      v29 = (const char *)&unk_141A61FAE;
      if ( (_BYTE)v210 )
        v29 = aModel_3;
      v27 = (unsigned __int8)v210 | 4LL;
      v30 = 16;
      LOBYTE(v40) = 1;
      v206 = v40;
      v28 = aReasoningEffor_2;
    }
    else
    {
      v27 = 4;
      v210 = 0;
      v28 = (const char *)&unk_141A61FAE;
      v29 = (const char *)&unk_141A61FAE;
      v206 = 0;
      v30 = 4;
    }
LABEL_32:
    v150[0] = v29;
    v150[1] = v27;
    v149[0] = v28;
    v149[1] = v30;
    v202.m128i_i64[0] = (__int64)v150;
    v202.m128i_i64[1] = (__int64)sub_140191200;
    v203.m128i_i64[0] = (__int64)v149;
    v203.m128i_i64[1] = (__int64)sub_140191200;
    sub_1416DAFA0(&v197, &unk_141A62AF1, &v202);
    v215 = v197.m128i_i64[1];
    v220 = v197.m128i_i64[0];
    sub_140930990(v180, &v135, v197.m128i_i64[1], v198.m128i_i64[0]);
    if ( *(_DWORD *)v180 == 1 )
    {
      v126 = _mm_loadu_si128((const __m128i *)&v180[8]);
      v127 = _mm_loadu_si128((const __m128i *)&v180[24]);
      v128 = _mm_loadu_si128((const __m128i *)&v180[40]);
      v205 = *(_OWORD *)&v180[56];
      v204 = v128;
      v203 = v127;
      v202 = v126;
      v170 = v211;
      v171 = v10;
      v197.m128i_i64[0] = (__int64)&v170;
      v197.m128i_i64[1] = (__int64)sub_1416CE600;
      v198.m128i_i64[0] = (__int64)&v202;
      v198.m128i_i64[1] = (__int64)sub_14142D4D0;
      sub_1416DAFA0(&v154, &unk_141A59FFA, &v197);
      v197 = _mm_loadu_si128(&v154);
      v198.m128i_i64[0] = v155;
      sub_140904700(&v202);
      v129 = _mm_load_si128(&v197);
      v130 = _mm_load_si128(&v198);
      v131 = _mm_load_si128(&v199);
      v172 = v129;
      v173 = v130;
      v174 = v131;
      v175 = v200;
      _RAX = v179;
      *(_OWORD *)(v179 + 56) = v200;
      *(__m128i *)(_RAX + 40) = v131;
      *(__m128i *)(_RAX + 24) = v130;
      *(__m128i *)(_RAX + 8) = v129;
      *(_QWORD *)_RAX = 10;
      if ( v220 )
        sub_140001660(v215, v220, 1);
      goto LABEL_128;
    }
    v41 = _mm_loadu_si128((const __m128i *)&v180[24]);
    v42 = _mm_loadu_si128((const __m128i *)&v180[40]);
    v172 = _mm_loadu_si128((const __m128i *)&v180[8]);
    v173 = v41;
    v174 = v42;
    v175 = *(_OWORD *)&v180[56];
    v163 = v172;
    v164 = v41;
    v165 = v42;
    v166 = *(_OWORD *)&v180[56];
    if ( v220 )
      sub_140001660(v215, v220, 1);
    v43 = sub_1417D8600(*((_QWORD *)&v166 + 1));
    if ( v43 )
      break;
    v172.m128i_i64[0] = (__int64)&v163;
    v172.m128i_i64[1] = v43;
    v167 = v10;
    while ( 1 )
    {
      sub_140A07DF0(v180, &v172);
      v44 = *(_QWORD *)v180;
      if ( *(_QWORD *)v180 != -1 )
      {
        v75 = *(_QWORD *)&v180[8];
        v76 = *(_OWORD *)&v180[16];
        v77 = _mm_loadu_si128((const __m128i *)&v180[32]);
        v46 = *(_QWORD *)&v180[56];
        v78 = *(_QWORD *)&v180[48];
        goto LABEL_126;
      }
      if ( !v172.m128i_i64[1] )
        break;
      sub_140658620(v180, &v172.m128i_u64[1], 0, &off_141A5A028);
      v220 = *(_QWORD *)&v180[8];
      v44 = *(_QWORD *)v180;
      v45 = *(_QWORD *)&v180[24];
      v216 = *(_QWORD *)&v180[16];
      if ( *(_QWORD *)v180 != -1 )
      {
        v77 = _mm_loadu_si128((const __m128i *)&v180[32]);
        v46 = *(_QWORD *)&v180[56];
        v78 = *(_QWORD *)&v180[48];
        v75 = v220;
        v76 = __PAIR128__(*(unsigned __int64 *)&v180[24], v216);
        goto LABEL_126;
      }
      sub_1406583D0(v180, &v172.m128i_u64[1], 1, &off_141A5A040);
      v218.m128i_i64[0] = *(_QWORD *)&v180[8];
      v44 = *(_QWORD *)v180;
      v46 = *(_QWORD *)&v180[24];
      v217 = *(_QWORD *)&v180[16];
      if ( *(_QWORD *)v180 != -1 )
      {
        v77 = _mm_loadu_si128((const __m128i *)&v180[32]);
        v79 = *(_QWORD *)&v180[56];
        v78 = *(_QWORD *)&v180[48];
        if ( v220 )
          sub_140001660(v216, v220, 1);
        v80 = v46;
        v75 = v218.m128i_i64[0];
        v46 = v79;
        v76 = __PAIR128__(v80, v217);
        goto LABEL_126;
      }
      sub_1406583D0(v180, &v172.m128i_u64[1], 2, &off_141A5A058);
      v219 = *(_QWORD *)&v180[8];
      v44 = *(_QWORD *)v180;
      v47 = *(_QWORD *)&v180[24];
      v213 = *(_QWORD *)&v180[16];
      if ( *(_QWORD *)v180 != -1 )
      {
        v77 = _mm_loadu_si128((const __m128i *)&v180[32]);
        v46 = *(_QWORD *)&v180[56];
        v81 = *(_QWORD *)&v180[48];
        if ( (unsigned __int64)(v218.m128i_i64[0] - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          sub_140001660(v217, v218.m128i_i64[0], 1);
        if ( v220 )
          sub_140001660(v216, v220, 1);
        v82 = v47;
        v75 = v219;
        v78 = v81;
        v76 = __PAIR128__(v82, v213);
        goto LABEL_126;
      }
      v156 = v45;
      sub_140658620(v180, &v172.m128i_u64[1], 3, &off_141A5A070);
      v212 = *(_QWORD *)&v180[8];
      v44 = *(_QWORD *)v180;
      v48 = *(_QWORD *)&v180[24];
      v215 = *(_QWORD *)&v180[16];
      if ( *(_QWORD *)v180 != -1 )
      {
        v77 = _mm_loadu_si128((const __m128i *)&v180[32]);
        v46 = *(_QWORD *)&v180[56];
        v78 = *(_QWORD *)&v180[48];
        if ( (unsigned __int64)(v219 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          v83 = v218.m128i_i64[0];
          if ( (unsigned __int64)(v218.m128i_i64[0] - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_106;
LABEL_154:
          sub_140001660(v217, v83, 1);
          v84 = v220;
          if ( !v220 )
            goto LABEL_108;
LABEL_107:
          sub_140001660(v216, v84, 1);
          goto LABEL_108;
        }
        sub_140001660(v213, v219, 1);
        v83 = v218.m128i_i64[0];
        if ( (unsigned __int64)(v218.m128i_i64[0] - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_154;
LABEL_106:
        v84 = v220;
        if ( v220 )
          goto LABEL_107;
LABEL_108:
        v75 = v212;
        v76 = __PAIR128__(v48, v215);
LABEL_126:
        *(_OWORD *)&v180[16] = v76;
        *(__m128i *)&v180[32] = v77;
        *(_QWORD *)&v180[48] = v78;
        *(_QWORD *)&v180[56] = v46;
        *(_QWORD *)v180 = v44;
        *(_QWORD *)&v180[8] = v75;
        v151.m128i_i64[0] = v211;
        v151.m128i_i64[1] = v167;
        v202.m128i_i64[0] = (__int64)&v151;
        v202.m128i_i64[1] = (__int64)sub_1416CE600;
        v203.m128i_i64[0] = (__int64)v180;
        v203.m128i_i64[1] = (__int64)sub_14142D4D0;
        sub_1416DAFA0(&v197, &unk_141A5A0E2, &v202);
        v91 = v197.m128i_i64[0];
        v202 = _mm_loadu_si128((const __m128i *)&v197.m128i_u64[1]);
        sub_140904700(v180);
        v92 = _mm_load_si128(&v202);
        v93 = _mm_load_si128(&v203);
        v94 = (__m128i *)v179;
        *(__m128i *)(v179 + 48) = _mm_load_si128(&v204);
        v94[2] = v93;
        v94[1] = v92;
        v94->m128i_i64[0] = 10;
        v94->m128i_i64[1] = v91;
        sub_1409044F0(&v172);
        goto LABEL_127;
      }
      sub_1406583D0(v180, &v172.m128i_u64[1], 4, &off_141A5A088);
      v209 = *(_QWORD *)&v180[8];
      v44 = *(_QWORD *)v180;
      v201 = *(_QWORD *)&v180[24];
      v208 = *(_QWORD *)&v180[16];
      if ( *(_QWORD *)v180 != -1 )
      {
        v77 = _mm_loadu_si128((const __m128i *)&v180[32]);
        v46 = *(_QWORD *)&v180[56];
        v78 = *(_QWORD *)&v180[48];
        if ( v212 )
          sub_140001660(v215, v212, 1);
        v85 = v209;
        if ( (unsigned __int64)(v219 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
        {
          sub_140001660(v213, v219, 1);
          v86 = v218.m128i_i64[0];
          if ( (unsigned __int64)(v218.m128i_i64[0] - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_157;
LABEL_113:
          v87 = v220;
          if ( !v220 )
          {
LABEL_115:
            v75 = v85;
            v76 = __PAIR128__(v201, v208);
            goto LABEL_126;
          }
        }
        else
        {
          v86 = v218.m128i_i64[0];
          if ( (unsigned __int64)(v218.m128i_i64[0] - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_113;
LABEL_157:
          sub_140001660(v217, v86, 1);
          v87 = v220;
          if ( !v220 )
            goto LABEL_115;
        }
        sub_140001660(v216, v87, 1);
        goto LABEL_115;
      }
      sub_1406583D0(v180, &v172.m128i_u64[1], 5, &off_141A5A0A0);
      v44 = *(_QWORD *)v180;
      v195 = *(_QWORD *)&v180[16];
      if ( *(_QWORD *)v180 != -1 )
      {
        v207 = *(_QWORD *)&v180[24];
        v88 = *(_QWORD *)&v180[8];
        v77 = _mm_loadu_si128((const __m128i *)&v180[32]);
        v46 = *(_QWORD *)&v180[56];
        v78 = *(_QWORD *)&v180[48];
        if ( (unsigned __int64)(v209 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          sub_140001660(v208, v209, 1);
        if ( v212 )
          sub_140001660(v215, v212, 1);
        if ( (unsigned __int64)(v219 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          sub_140001660(v213, v219, 1);
          v89 = v218.m128i_i64[0];
          if ( (unsigned __int64)(v218.m128i_i64[0] - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_160;
LABEL_122:
          v90 = v220;
          if ( !v220 )
          {
LABEL_124:
            v75 = v88;
            v76 = __PAIR128__(v207, v195);
            goto LABEL_126;
          }
        }
        else
        {
          v89 = v218.m128i_i64[0];
          if ( (unsigned __int64)(v218.m128i_i64[0] - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_122;
LABEL_160:
          sub_140001660(v217, v89, 1);
          v90 = v220;
          if ( !v220 )
            goto LABEL_124;
        }
        sub_140001660(v216, v90, 1);
        goto LABEL_124;
      }
      if ( v220 == -1 )
      {
        v78 = v217;
        v77 = _mm_unpacklo_epi64((__m128i)v48, _mm_loadl_epi64(&v218));
        v75 = v156;
        v44 = v216;
        v76 = __PAIR128__(v215, v212);
        goto LABEL_126;
      }
      if ( v220 == -2 )
        break;
      v49 = *(_QWORD *)&v180[24];
      v207 = *(_QWORD *)&v180[8];
      v202.m128i_i64[0] = v219;
      v202.m128i_i64[1] = v213;
      v203.m128i_i64[0] = v47;
      v221 = 1;
      v50 = sub_140842DD0(aSubagent, 10, v215, v48);
      v53 = v167;
      if ( v50 )
      {
        if ( v207 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          sub_140001660(v195, v207, 1);
          v54 = v209;
          if ( (unsigned __int64)(v209 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_60:
            sub_140001660(v208, v54, 1);
            v55 = v212;
            if ( !v212 )
              goto LABEL_52;
LABEL_51:
            sub_140001660(v215, v55, 1);
            goto LABEL_52;
          }
        }
        else
        {
          v54 = v209;
          if ( (unsigned __int64)(v209 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_60;
        }
        v55 = v212;
        if ( v212 )
          goto LABEL_51;
LABEL_52:
        if ( v202.m128i_i64[0] != -1 && v202.m128i_i64[0] )
          sub_140001660(v202.m128i_i64[1], v202.m128i_i64[0], 1);
        if ( (unsigned __int64)(v218.m128i_i64[0] - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          sub_140001660(v217, v218.m128i_i64[0], 1);
        if ( v220 )
          sub_140001660(v216, v220, 1);
      }
      else
      {
        v56 = 1;
        if ( v219 == -1 )
        {
          v219 = 0;
          v213 = 1;
          v196 = 0;
          if ( !v167 )
            goto LABEL_68;
        }
        else
        {
          v221 = 1;
          sub_1416DB410(v180, &v202);
          v213 = *(_QWORD *)&v180[8];
          v219 = *(_QWORD *)v180;
          v196 = *(_QWORD *)&v180[16];
          if ( !v53 )
            goto LABEL_68;
        }
        nullsub_1(v52, v51);
        v57 = sub_140001650(v53, 1);
        if ( !v57 )
        {
          v218.m128i_i8[15] = 1;
          sub_14196B2DB(1, v53);
        }
        v56 = v57;
        sub_1419234B0(v57, v211, v53);
LABEL_68:
        v58 = -1;
        if ( v218.m128i_i64[0] == -1 )
        {
          v59 = v168;
          v46 = v169;
          goto LABEL_72;
        }
        v59 = v217;
        sub_1408FEA60(v217, v46);
        if ( v60 )
        {
          v58 = v218.m128i_i64[0];
LABEL_72:
          v61 = v201;
          v62 = v196;
          goto LABEL_76;
        }
        if ( v218.m128i_i64[0] )
          sub_140001660(v217, v218.m128i_i64[0], 1);
        v59 = v168;
        v46 = v169;
        v61 = v201;
        v62 = v196;
        v58 = -1;
LABEL_76:
        *(_QWORD *)&v180[56] = v219;
        *(_QWORD *)&v180[64] = v213;
        *(_QWORD *)&v180[72] = v62;
        v186 = v203.m128i_i64[0];
        v185 = _mm_loadu_si128(&v202);
        v187 = v209;
        v188 = v208;
        v189 = v61;
        v190 = v207;
        v191 = v195;
        v192 = v49;
        *(_QWORD *)v180 = v167;
        *(_QWORD *)&v180[8] = v56;
        *(_QWORD *)&v180[16] = v167;
        v180[24] = v214;
        *(_QWORD *)&v180[32] = v220;
        *(_QWORD *)&v180[40] = v216;
        *(_QWORD *)&v180[48] = v156;
        *(_QWORD *)&v181 = v58;
        *((_QWORD *)&v181 + 1) = v59;
        v182 = v46;
        v183 = 1;
        v193 = v210;
        v194 = v206;
        v63 = v177;
        if ( v177 == v176.m128i_i64[0] )
          sub_141939BA0(&v176);
        v169 = v46;
        v168 = v59;
        sub_1419234B0(v176.m128i_i64[1] + 192 * v63, v180, 192);
        v177 = v63 + 1;
        if ( v212 )
          sub_140001660(v215, v212, 1);
      }
    }
    sub_1409044F0(&v172);
    HIDWORD(_RAX) = (unsigned __int64)sub_140904890(&v163) >> 32;
    v65 = v160.m128i_i64[1];
    if ( v160.m128i_i64[1] )
    {
      if ( v14 )
      {
        v66 = v160.m128i_i64[0];
        v67 = (const __m128i *)(v160.m128i_i64[0] + 16);
        _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v160.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R13D )
          {
            do
            {
              v69 = _mm_load_si128(v67);
              v66 -= 384;
              ++v67;
              _R13D = _mm_movemask_epi8(v69) ^ 0xFFFF;
            }
            while ( !_R13D );
          }
          __asm { tzcnt   eax, r13d }
          v70 = -3 * _RAX;
          v71 = *(_QWORD *)(v66 + 8 * v70 - 24);
          if ( v71 )
            sub_140001660(*(_QWORD *)(v66 + 8 * v70 - 16), v71, 1);
          --v14;
          _RAX = _R13D & (unsigned int)(_R13D - 1);
          _R13D &= _R13D - 1;
        }
        while ( v14 );
      }
      v72 = (24 * v65 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v73 = v72 + v65 + 17;
      if ( v73 )
        sub_140001660(v160.m128i_i64[0] - v72, v73, 16);
    }
    sub_140903740(&v135);
    v3 = v158;
    v74 = v157;
    a1 = v179;
    if ( v178 )
      sub_140001660(v211, v178, 1);
    v4 -= 32LL;
    v5 += 4;
    v7 = v74;
    if ( v74 == (__int64 *)v3 )
      goto LABEL_167;
  }
  *(_OWORD *)v180 = 0x8000000000000013uLL;
  *(_QWORD *)&v180[16] = v43;
  v151.m128i_i64[0] = v211;
  v151.m128i_i64[1] = v10;
  v202.m128i_i64[0] = (__int64)&v151;
  v202.m128i_i64[1] = (__int64)sub_1416CE600;
  v203.m128i_i64[0] = (__int64)v180;
  v203.m128i_i64[1] = (__int64)sub_14142D4D0;
  sub_1416DAFA0(&v197, &unk_141A5A0B8, &v202);
  v132 = _mm_load_si128(&v197);
  v133 = v198.m128i_i64[0];
  sub_140904700(v180);
  v134 = v179;
  *(_QWORD *)v179 = 10;
  *(__m128i *)(v134 + 8) = v132;
  *(_QWORD *)(v134 + 24) = v133;
LABEL_127:
  HIDWORD(_RAX) = (unsigned __int64)sub_140904890(&v163) >> 32;
LABEL_128:
  v96 = v160.m128i_i64[1];
  if ( v160.m128i_i64[1] )
  {
    if ( v14 )
    {
      v97 = v160.m128i_i64[0];
      v98 = (const __m128i *)(v160.m128i_i64[0] + 16);
      _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v160.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v100 = _mm_load_si128(v98);
            v97 -= 384;
            ++v98;
            _R13D = _mm_movemask_epi8(v100) ^ 0xFFFF;
          }
          while ( !_R13D );
        }
        __asm { tzcnt   eax, r13d }
        v101 = -3 * _RAX;
        v102 = *(_QWORD *)(v97 + 8 * v101 - 24);
        if ( v102 )
          sub_140001660(*(_QWORD *)(v97 + 8 * v101 - 16), v102, 1);
        --v14;
        _RAX = _R13D & (unsigned int)(_R13D - 1);
        _R13D &= _R13D - 1;
      }
      while ( v14 );
    }
    v103 = (24 * v96 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v104 = v103 + v96 + 17;
    if ( v104 )
      sub_140001660(v160.m128i_i64[0] - v103, v104, 16);
  }
LABEL_138:
  sub_140903740(&v135);
  v3 = v158;
  v8 = v157;
  v105 = v178;
  if ( v178 )
LABEL_139:
    sub_140001660(v211, v105, 1);
LABEL_140:
  if ( (__int64 *)v3 != v8 )
  {
    v106 = v4 >> 5;
    do
    {
      v107 = *(v5 - 1);
      if ( v107 )
        sub_140001660(*v5, v107, 1);
      v5 += 4;
      --v106;
    }
    while ( v106 );
  }
  if ( (_QWORD)v159 )
    sub_140001660(*((_QWORD *)&v159 + 1), 32 * v159, 8);
  v108 = v177;
  if ( v177 )
  {
    v109 = (_QWORD *)v176.m128i_i64[1];
    do
    {
      sub_1401B0EA0(v109);
      v109 += 24;
      --v108;
    }
    while ( v108 );
  }
  if ( v176.m128i_i64[0] )
    sub_140001660(v176.m128i_i64[1], 192 * v176.m128i_i64[0], 8);
}
