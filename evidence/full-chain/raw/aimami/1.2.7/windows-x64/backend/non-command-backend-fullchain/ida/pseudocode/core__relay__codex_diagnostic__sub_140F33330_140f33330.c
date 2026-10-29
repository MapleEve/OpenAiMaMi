// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x140f33330 | name sub_140F33330
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F33330(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  _QWORD *v5; // rbx
  __m128i si128; // xmm7
  __int64 *v7; // rax
  __int64 *v8; // r13
  const __m128i *v9; // rdx
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
  signed __int64 v51; // r14
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  bool v55; // zf
  __int64 v56; // rsi
  __m128i *v57; // rax
  __int64 v58; // r8
  unsigned __int64 v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rsi
  __int64 v63; // rsi
  __int64 v64; // r14
  const __m128i *v65; // r12
  __m128i v67; // xmm0
  __int64 v68; // rax
  __int64 v69; // rdx
  unsigned __int64 v70; // rax
  __int64 v71; // rsi
  __int64 *v72; // r14
  __int64 v73; // rax
  unsigned __int128 v74; // krC0_16
  __m128i v75; // xmm6
  unsigned __int64 v76; // r14
  unsigned __int64 v77; // rsi
  unsigned __int64 v78; // rdx
  unsigned __int64 v79; // rsi
  __int64 v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rsi
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rsi
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rsi
  __m128i v90; // xmm0
  __m128i v91; // xmm1
  __m128i *v92; // rax
  __int64 v94; // rsi
  __int64 v95; // r14
  const __m128i *v96; // r12
  __m128i v98; // xmm0
  __int64 v99; // rax
  __int64 v100; // rdx
  unsigned __int64 v101; // rax
  __int64 v102; // rsi
  __int64 v103; // rdx
  unsigned __int64 v104; // rdi
  __int64 v105; // rdx
  _QWORD *v106; // rcx
  _QWORD *v107; // rsi
  __int64 result; // rax
  unsigned __int64 v109; // rdi
  __int64 v110; // rdx
  __m128i v111; // xmm0
  __m128i v112; // xmm1
  __m128i v113; // xmm2
  __m128i v114; // xmm0
  __m128i v115; // xmm0
  __m128i v116; // xmm1
  __m128i v117; // xmm2
  __m128i v118; // xmm0
  __m128i v119; // xmm1
  __m128i v120; // xmm2
  __m128i v121; // xmm6
  __int64 v122; // rsi
  __m128i v123; // xmm0
  __m128i v124; // xmm1
  __m128i v125; // xmm0
  __m128i v126; // xmm1
  __m128i v127; // xmm2
  __m128i v128; // xmm0
  __m128i v129; // xmm1
  __m128i v130; // xmm2
  __m128i v131; // xmm6
  __int64 v132; // rsi
  __int64 v133; // rax
  __int64 v134; // [rsp+20h] [rbp-60h] BYREF
  __int128 v135; // [rsp+28h] [rbp-58h]
  __int64 v136; // [rsp+38h] [rbp-48h]
  __int128 v137; // [rsp+40h] [rbp-40h]
  __int128 v138; // [rsp+50h] [rbp-30h]
  __int128 v139; // [rsp+60h] [rbp-20h]
  __int128 v140; // [rsp+70h] [rbp-10h]
  unsigned __int64 v141; // [rsp+80h] [rbp+0h]
  char v142; // [rsp+88h] [rbp+8h]
  _BYTE v143[7]; // [rsp+89h] [rbp+9h]
  __int64 v144; // [rsp+90h] [rbp+10h]
  __int64 *v145; // [rsp+98h] [rbp+18h]
  __int64 v146; // [rsp+A0h] [rbp+20h]
  __int64 v147; // [rsp+A8h] [rbp+28h]
  _QWORD v148[2]; // [rsp+B0h] [rbp+30h] BYREF
  _QWORD v149[2]; // [rsp+C0h] [rbp+40h] BYREF
  __m128i v150; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v151; // [rsp+E0h] [rbp+60h]
  __m128i v152; // [rsp+F0h] [rbp+70h]
  __int64 v153; // [rsp+118h] [rbp+98h]
  __m128i v154; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v155; // [rsp+130h] [rbp+B0h]
  __int64 v156; // [rsp+138h] [rbp+B8h]
  __int64 v157; // [rsp+140h] [rbp+C0h]
  __int64 *v158; // [rsp+148h] [rbp+C8h]
  __int64 v159; // [rsp+150h] [rbp+D0h]
  __int128 v160; // [rsp+158h] [rbp+D8h]
  __int64 v161; // [rsp+168h] [rbp+E8h]
  __m128i v162; // [rsp+170h] [rbp+F0h] BYREF
  __m128i v163; // [rsp+180h] [rbp+100h]
  __m128i v164; // [rsp+190h] [rbp+110h] BYREF
  __m128i v165; // [rsp+1A0h] [rbp+120h] BYREF
  __m128i v166; // [rsp+1B0h] [rbp+130h]
  __m128i v167; // [rsp+1C0h] [rbp+140h]
  __int128 v168; // [rsp+1D0h] [rbp+150h]
  unsigned __int64 v169; // [rsp+1E0h] [rbp+160h]
  __int64 v170; // [rsp+1E8h] [rbp+168h]
  unsigned __int64 v171; // [rsp+1F0h] [rbp+170h]
  unsigned __int64 v172; // [rsp+1F8h] [rbp+178h]
  const __m128i *v173; // [rsp+200h] [rbp+180h] BYREF
  __int64 v174; // [rsp+208h] [rbp+188h]
  __m128i v175; // [rsp+210h] [rbp+190h] BYREF
  __m128i v176; // [rsp+220h] [rbp+1A0h]
  __m128i v177; // [rsp+230h] [rbp+1B0h]
  __int128 v178; // [rsp+240h] [rbp+1C0h]
  __int64 v179; // [rsp+250h] [rbp+1D0h]
  __m128i v180; // [rsp+258h] [rbp+1D8h] BYREF
  __int64 v181; // [rsp+268h] [rbp+1E8h]
  _BYTE v182[80]; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v183; // [rsp+2C0h] [rbp+240h]
  unsigned __int64 v184; // [rsp+2D0h] [rbp+250h]
  char v185; // [rsp+2D8h] [rbp+258h]
  _BYTE v186[7]; // [rsp+2D9h] [rbp+259h]
  __m128i v187; // [rsp+2E0h] [rbp+260h]
  __int64 v188; // [rsp+2F0h] [rbp+270h]
  __int64 v189; // [rsp+2F8h] [rbp+278h]
  unsigned __int64 v190; // [rsp+300h] [rbp+280h]
  unsigned __int64 v191; // [rsp+308h] [rbp+288h]
  unsigned __int64 v192; // [rsp+310h] [rbp+290h]
  unsigned __int64 v193; // [rsp+318h] [rbp+298h]
  __int64 v194; // [rsp+320h] [rbp+2A0h]
  char v195; // [rsp+328h] [rbp+2A8h]
  char v196; // [rsp+329h] [rbp+2A9h]
  unsigned __int64 v197; // [rsp+338h] [rbp+2B8h]
  __m128i v198; // [rsp+340h] [rbp+2C0h] BYREF
  __m128i v199; // [rsp+350h] [rbp+2D0h] BYREF
  __m128i v200; // [rsp+360h] [rbp+2E0h] BYREF
  __int128 v201; // [rsp+370h] [rbp+2F0h]
  unsigned __int64 v202; // [rsp+388h] [rbp+308h]
  __m128i v203; // [rsp+390h] [rbp+310h] BYREF
  __m128i v204; // [rsp+3A0h] [rbp+320h] BYREF
  __m128i v205; // [rsp+3B0h] [rbp+330h] BYREF
  __int128 v206; // [rsp+3C0h] [rbp+340h]
  int v207; // [rsp+3DCh] [rbp+35Ch]
  __int64 v208; // [rsp+3E0h] [rbp+360h]
  unsigned __int64 v209; // [rsp+3E8h] [rbp+368h]
  int v210; // [rsp+3F4h] [rbp+374h]
  const __m128i *v211; // [rsp+3F8h] [rbp+378h]
  __int64 v212; // [rsp+400h] [rbp+380h]
  __int64 v213; // [rsp+408h] [rbp+388h]
  char v214; // [rsp+417h] [rbp+397h]
  unsigned __int64 v215; // [rsp+418h] [rbp+398h]
  unsigned __int64 v216; // [rsp+420h] [rbp+3A0h]
  __int64 v217; // [rsp+428h] [rbp+3A8h]
  __int64 v218; // [rsp+430h] [rbp+3B0h]
  __m128i v219; // [rsp+438h] [rbp+3B8h] BYREF
  __int64 v220; // [rsp+448h] [rbp+3C8h]
  char v221; // [rsp+457h] [rbp+3D7h]
  __int64 v222; // [rsp+458h] [rbp+3D8h]

  v222 = -2;
  v180.m128i_i64[0] = 0;
  v180.m128i_i64[1] = 8;
  v181 = 0;
  sub_1401B7010(v182, a2);
  v3 = *(_QWORD *)&v182[8] + 32LL * *(_QWORD *)&v182[16];
  v144 = *(_QWORD *)&v182[8];
  v160 = *(_OWORD *)v182;
  v146 = *(_QWORD *)v182;
  v147 = v3;
  v4 = 32LL * *(_QWORD *)&v182[16] - 32;
  v5 = (_QWORD *)(*(_QWORD *)&v182[8] + 40LL);
  si128 = _mm_load_si128((const __m128i *)&xmmword_141A386D0);
  v7 = *(__int64 **)&v182[8];
  v159 = v3;
  if ( *(_QWORD *)&v182[8] == v3 )
    goto LABEL_170;
  while ( 1 )
  {
    v8 = v7 + 4;
    v145 = v7 + 4;
    if ( *v7 == -1 )
    {
      if ( (__int64 *)v3 != v8 )
      {
        v109 = v4 >> 5;
        do
        {
          v110 = *(v5 - 1);
          if ( v110 )
            sub_140001660(*v5, v110, 1);
          v5 += 4;
          --v109;
        }
        while ( v109 );
      }
LABEL_170:
      if ( (_QWORD)v160 )
        sub_140001660(*((_QWORD *)&v160 + 1), 32 * v160, 8);
      result = v181;
      *(_QWORD *)(a1 + 24) = v181;
      *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v180);
      *(_QWORD *)a1 = -1;
      return result;
    }
    v170 = *v7;
    v9 = (const __m128i *)v7[1];
    v10 = v7[2];
    v214 = *((_BYTE *)v7 + 24);
    v211 = v9;
    sub_140E940E0(v182, v9, v10, 32769);
    if ( v185 == -1 )
    {
      v111 = _mm_loadu_si128((const __m128i *)v182);
      v112 = _mm_loadu_si128((const __m128i *)&v182[16]);
      v113 = _mm_loadu_si128((const __m128i *)&v182[32]);
      v206 = *(_OWORD *)&v182[48];
      v205 = v113;
      v204 = v112;
      v203 = v111;
      v162.m128i_i64[0] = (__int64)v211;
      v162.m128i_i64[1] = v10;
      v198.m128i_i64[0] = (__int64)&v162;
      v198.m128i_i64[1] = (__int64)sub_14169F630;
      v199.m128i_i64[0] = (__int64)&v203;
      v199.m128i_i64[1] = (__int64)sub_141404740;
      sub_1416ABFD0(&v150, &unk_141A57CD5, &v198);
      v198 = _mm_loadu_si128(&v150);
      v199.m128i_i64[0] = v151;
      sub_140E96F40(&v203);
      v114 = _mm_load_si128(&v198);
      v165 = v114;
      v166.m128i_i64[0] = v199.m128i_i64[0];
      *(_QWORD *)(a1 + 24) = v199.m128i_i64[0];
      *(__m128i *)(a1 + 8) = v114;
      *(_QWORD *)a1 = 10;
      v103 = v170;
      if ( v170 )
        goto LABEL_140;
      goto LABEL_141;
    }
    v176.m128i_i64[0] = *(_QWORD *)&v182[24];
    v175 = *(__m128i *)&v182[8];
    v137 = *(_OWORD *)&v182[32];
    v138 = *(_OWORD *)&v182[48];
    v139 = *(_OWORD *)&v182[64];
    v140 = v183;
    *(_DWORD *)&v143[3] = *(_DWORD *)&v186[3];
    *(_DWORD *)v143 = *(_DWORD *)v186;
    v166.m128i_i64[0] = *(_QWORD *)&v182[24];
    v165 = *(__m128i *)&v182[8];
    v136 = *(_QWORD *)&v182[24];
    v135 = *(_OWORD *)&v182[8];
    v134 = *(_QWORD *)v182;
    v141 = v184;
    v142 = v185;
    sub_141403910(v182, &v134, 3, 0);
    if ( *(_QWORD *)v182 != -1 )
      sub_140E96F40(v182);
    sub_140EC0780(v182, &v134, aPragmaTableInf_1, 26);
    v158 = v8;
    if ( *(_DWORD *)v182 == 1 )
    {
      v115 = _mm_loadu_si128((const __m128i *)&v182[8]);
      v116 = _mm_loadu_si128((const __m128i *)&v182[24]);
      v117 = _mm_loadu_si128((const __m128i *)&v182[40]);
      v206 = *(_OWORD *)&v182[56];
      v205 = v117;
      v204 = v116;
      v203 = v115;
      v173 = v211;
      v174 = v10;
      v198.m128i_i64[0] = (__int64)&v173;
      v198.m128i_i64[1] = (__int64)sub_14169F630;
      v199.m128i_i64[0] = (__int64)&v203;
      v199.m128i_i64[1] = (__int64)sub_141404740;
      sub_1416ABFD0(&v154, &unk_141A57E52, &v198);
      v198 = _mm_loadu_si128(&v154);
      v199.m128i_i64[0] = v155;
      sub_140E96F40(&v203);
      v118 = _mm_load_si128(&v198);
      v119 = _mm_load_si128(&v199);
      v120 = _mm_load_si128(&v200);
      v152 = v120;
      v175 = v118;
      v176 = v119;
      v177 = v120;
      v178 = v201;
      *(_OWORD *)(a1 + 56) = v201;
      *(__m128i *)(a1 + 40) = v120;
      *(__m128i *)(a1 + 24) = v119;
      *(__m128i *)(a1 + 8) = v118;
      *(_QWORD *)a1 = 10;
      goto LABEL_139;
    }
    v175 = *(__m128i *)&v182[8];
    v165 = *(__m128i *)&v182[8];
    v166 = *(__m128i *)&v182[24];
    v167 = *(__m128i *)&v182[40];
    v168 = *(_OWORD *)&v182[56];
    v11 = sub_1417A9630(*(_QWORD *)&v182[64]);
    if ( v11 )
    {
      *(_OWORD *)v182 = 0x8000000000000013uLL;
      *(_QWORD *)&v182[16] = v11;
      v150.m128i_i64[0] = (__int64)v211;
      v150.m128i_i64[1] = v10;
      v203.m128i_i64[0] = (__int64)&v150;
      v203.m128i_i64[1] = (__int64)sub_14169F630;
      v204.m128i_i64[0] = (__int64)v182;
      v204.m128i_i64[1] = (__int64)sub_141404740;
      sub_1416ABFD0(&v198, &unk_141A57D01, &v203);
      v121 = _mm_load_si128(&v198);
      v122 = v199.m128i_i64[0];
      sub_140E96F40(v182);
      *(_QWORD *)a1 = 10;
      *(__m128i *)(a1 + 8) = v121;
      *(_QWORD *)(a1 + 24) = v122;
      sub_140E970D0(&v165);
      goto LABEL_139;
    }
    sub_14019A7A0(&v203, &v165, 0);
    if ( v203.m128i_i64[0] != -1 )
    {
      *(_OWORD *)&v182[48] = v206;
      *(__m128i *)&v182[32] = v205;
      *(__m128i *)&v182[16] = v204;
      *(__m128i *)v182 = v203;
      v173 = v211;
      v174 = v10;
      v198.m128i_i64[0] = (__int64)&v173;
      v198.m128i_i64[1] = (__int64)sub_14169F630;
      v199.m128i_i64[0] = (__int64)v182;
      v199.m128i_i64[1] = (__int64)sub_141404740;
      sub_1416ABFD0(&v154, &unk_141A57D22, &v198);
      v198 = v154;
      v199.m128i_i64[0] = v155;
      sub_140E96F40(v182);
      v123 = v198;
      v124 = v199;
      v175 = v198;
      v176 = v199;
      v177 = v200;
      *(__m128i *)(a1 + 40) = v200;
      *(__m128i *)(a1 + 24) = v124;
      *(__m128i *)(a1 + 8) = v123;
      *(_QWORD *)a1 = 10;
      sub_140E970D0(&v165);
      goto LABEL_139;
    }
    v12 = _mm_loadu_si128((const __m128i *)&v204.m128i_u64[1]);
    v13 = _mm_loadu_si128((const __m128i *)&v205.m128i_u64[1]);
    v175 = _mm_loadu_si128((const __m128i *)&v203.m128i_u64[1]);
    v176 = v12;
    v177 = v13;
    v162 = v175;
    v163 = v12;
    v164 = v13;
    sub_140E970D0(&v165);
    v179 = a1;
    v14 = v163.m128i_i64[1];
    if ( v163.m128i_i64[1] )
    {
      v15 = sub_140D2CC10(&v164, aModel_8, 5);
      v17 = v162;
      v18 = _mm_cvtsi32_si128(v15 >> 57);
      v19 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v18, v18), 0), 68);
      for ( i = 0; ; i += 16 )
      {
        v21 = v162.m128i_i64[1] & v15;
        v22 = _mm_loadu_si128((const __m128i *)(v162.m128i_i64[0] + v21));
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
        v24 = -3LL * (v162.m128i_i64[1] & (v21 + _R8));
        if ( *(_QWORD *)(v162.m128i_i64[0] + 8 * v24 - 8) == 5 )
        {
          v25 = *(_QWORD *)(v162.m128i_i64[0] + 8 * v24 - 16);
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
      v31 = sub_140D2CC10(&v164, aReasoningEffor_4, 16);
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
          v28 = (const char *)&unk_141A5FB4D;
          v29 = (const char *)&unk_141A5FB4D;
          if ( (_BYTE)v210 )
            v29 = aModel_8;
          v27 = (unsigned __int8)v210 | 4LL;
          v30 = 4;
          v207 = 0;
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
      v29 = (const char *)&unk_141A5FB4D;
      if ( (_BYTE)v210 )
        v29 = aModel_8;
      v27 = (unsigned __int8)v210 | 4LL;
      v30 = 16;
      LOBYTE(v40) = 1;
      v207 = v40;
      v28 = aReasoningEffor_4;
    }
    else
    {
      v27 = 4;
      v210 = 0;
      v28 = (const char *)&unk_141A5FB4D;
      v29 = (const char *)&unk_141A5FB4D;
      v207 = 0;
      v30 = 4;
    }
LABEL_32:
    v149[0] = v29;
    v149[1] = v27;
    v148[0] = v28;
    v148[1] = v30;
    v203.m128i_i64[0] = (__int64)v149;
    v203.m128i_i64[1] = (__int64)sub_140186EE0;
    v204.m128i_i64[0] = (__int64)v148;
    v204.m128i_i64[1] = (__int64)sub_140186EE0;
    sub_1416ABFD0(&v198, &unk_141A606AB, &v203);
    v217 = v198.m128i_i64[1];
    v220 = v198.m128i_i64[0];
    sub_140EC0780(v182, &v134, v198.m128i_i64[1], v199.m128i_i64[0]);
    if ( *(_DWORD *)v182 == 1 )
    {
      v125 = _mm_loadu_si128((const __m128i *)&v182[8]);
      v126 = _mm_loadu_si128((const __m128i *)&v182[24]);
      v127 = _mm_loadu_si128((const __m128i *)&v182[40]);
      v206 = *(_OWORD *)&v182[56];
      v205 = v127;
      v204 = v126;
      v203 = v125;
      v173 = v211;
      v174 = v10;
      v198.m128i_i64[0] = (__int64)&v173;
      v198.m128i_i64[1] = (__int64)sub_14169F630;
      v199.m128i_i64[0] = (__int64)&v203;
      v199.m128i_i64[1] = (__int64)sub_141404740;
      sub_1416ABFD0(&v154, &unk_141A57D42, &v198);
      v198 = _mm_loadu_si128(&v154);
      v199.m128i_i64[0] = v155;
      sub_140E96F40(&v203);
      v128 = _mm_load_si128(&v198);
      v129 = _mm_load_si128(&v199);
      v130 = _mm_load_si128(&v200);
      v175 = v128;
      v176 = v129;
      v177 = v130;
      v178 = v201;
      _RAX = v179;
      *(_OWORD *)(v179 + 56) = v201;
      *(__m128i *)(_RAX + 40) = v130;
      *(__m128i *)(_RAX + 24) = v129;
      *(__m128i *)(_RAX + 8) = v128;
      *(_QWORD *)_RAX = 10;
      if ( v220 )
        HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v217, v220, 1) >> 32;
      goto LABEL_129;
    }
    v41 = _mm_loadu_si128((const __m128i *)&v182[24]);
    v42 = _mm_loadu_si128((const __m128i *)&v182[40]);
    v175 = _mm_loadu_si128((const __m128i *)&v182[8]);
    v176 = v41;
    v177 = v42;
    v178 = *(_OWORD *)&v182[56];
    v165 = v175;
    v166 = v41;
    v167 = v42;
    v168 = *(_OWORD *)&v182[56];
    if ( v220 )
      sub_140001660(v217, v220, 1);
    v43 = sub_1417A9630(*((_QWORD *)&v168 + 1));
    if ( v43 )
      break;
    v175.m128i_i64[0] = (__int64)&v165;
    v175.m128i_i64[1] = v43;
    v156 = v10;
    while ( 1 )
    {
      sub_140F9AB20(v182, &v175);
      v44 = *(_QWORD *)v182;
      if ( *(_QWORD *)v182 != -1 )
      {
        v73 = *(_QWORD *)&v182[8];
        v74 = *(_OWORD *)&v182[16];
        v75 = _mm_loadu_si128((const __m128i *)&v182[32]);
        v46 = *(_QWORD *)&v182[56];
        v76 = *(_QWORD *)&v182[48];
        goto LABEL_127;
      }
      if ( !v175.m128i_i64[1] )
        break;
      sub_14018E680(v182, &v175.m128i_u64[1], 0, &off_141A57D70, v134, v135);
      v220 = *(_QWORD *)&v182[8];
      v44 = *(_QWORD *)v182;
      v45 = *(_QWORD *)&v182[24];
      v215 = *(_QWORD *)&v182[16];
      if ( *(_QWORD *)v182 != -1 )
      {
        v75 = _mm_loadu_si128((const __m128i *)&v182[32]);
        v46 = *(_QWORD *)&v182[56];
        v76 = *(_QWORD *)&v182[48];
        v73 = v220;
        v74 = __PAIR128__(*(unsigned __int64 *)&v182[24], v215);
        goto LABEL_127;
      }
      sub_14018E430(v182, &v175.m128i_u64[1], 1, &off_141A57D88);
      v219.m128i_i64[0] = *(_QWORD *)&v182[8];
      v44 = *(_QWORD *)v182;
      v46 = *(_QWORD *)&v182[24];
      v216 = *(_QWORD *)&v182[16];
      if ( *(_QWORD *)v182 != -1 )
      {
        v75 = _mm_loadu_si128((const __m128i *)&v182[32]);
        v77 = *(_QWORD *)&v182[56];
        v76 = *(_QWORD *)&v182[48];
        if ( v220 )
          sub_140001660(v215, v220, 1);
        v78 = v46;
        v73 = v219.m128i_i64[0];
        v46 = v77;
        v74 = __PAIR128__(v78, v216);
        goto LABEL_127;
      }
      v157 = v45;
      sub_14018E430(v182, &v175.m128i_u64[1], 2, &off_141A57DA0);
      v218 = *(_QWORD *)&v182[8];
      v44 = *(_QWORD *)v182;
      v47 = *(_QWORD *)&v182[24];
      v213 = *(_QWORD *)&v182[16];
      if ( *(_QWORD *)v182 != -1 )
      {
        v75 = _mm_loadu_si128((const __m128i *)&v182[32]);
        v46 = *(_QWORD *)&v182[56];
        v79 = *(_QWORD *)&v182[48];
        if ( (unsigned __int64)(v219.m128i_i64[0] - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          sub_140001660(v216, v219.m128i_i64[0], 1);
        if ( v220 )
          sub_140001660(v215, v220, 1);
        v80 = v47;
        v73 = v218;
        v76 = v79;
        v74 = __PAIR128__(v80, v213);
        goto LABEL_127;
      }
      sub_14018E680(v182, &v175.m128i_u64[1], 3, &off_141A57DB8, v134, v135);
      v212 = *(_QWORD *)&v182[8];
      v44 = *(_QWORD *)v182;
      v48 = *(_QWORD *)&v182[24];
      v217 = *(_QWORD *)&v182[16];
      if ( *(_QWORD *)v182 != -1 )
      {
        v75 = _mm_loadu_si128((const __m128i *)&v182[32]);
        v46 = *(_QWORD *)&v182[56];
        v76 = *(_QWORD *)&v182[48];
        if ( (unsigned __int64)(v218 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          v81 = v219.m128i_i64[0];
          if ( (unsigned __int64)(v219.m128i_i64[0] - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_107;
LABEL_155:
          sub_140001660(v216, v81, 1);
          v82 = v220;
          if ( !v220 )
            goto LABEL_109;
LABEL_108:
          sub_140001660(v215, v82, 1);
          goto LABEL_109;
        }
        sub_140001660(v213, v218, 1);
        v81 = v219.m128i_i64[0];
        if ( (unsigned __int64)(v219.m128i_i64[0] - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_155;
LABEL_107:
        v82 = v220;
        if ( v220 )
          goto LABEL_108;
LABEL_109:
        v73 = v212;
        v74 = __PAIR128__(v48, v217);
LABEL_127:
        *(_OWORD *)&v182[16] = v74;
        *(__m128i *)&v182[32] = v75;
        *(_QWORD *)&v182[48] = v76;
        *(_QWORD *)&v182[56] = v46;
        *(_QWORD *)v182 = v44;
        *(_QWORD *)&v182[8] = v73;
        v150.m128i_i64[0] = (__int64)v211;
        v150.m128i_i64[1] = v156;
        v203.m128i_i64[0] = (__int64)&v150;
        v203.m128i_i64[1] = (__int64)sub_14169F630;
        v204.m128i_i64[0] = (__int64)v182;
        v204.m128i_i64[1] = (__int64)sub_141404740;
        sub_1416ABFD0(&v198, &unk_141A57E2A, &v203);
        v89 = v198.m128i_i64[0];
        v203 = _mm_loadu_si128((const __m128i *)&v198.m128i_u64[1]);
        sub_140E96F40(v182);
        v90 = _mm_load_si128(&v203);
        v91 = _mm_load_si128(&v204);
        v92 = (__m128i *)v179;
        *(__m128i *)(v179 + 48) = _mm_load_si128(&v205);
        v92[2] = v91;
        v92[1] = v90;
        v92->m128i_i64[0] = 10;
        v92->m128i_i64[1] = v89;
        sub_140E96D30(&v175);
        goto LABEL_128;
      }
      sub_14018E430(v182, &v175.m128i_u64[1], 4, &off_141A57DD0);
      v208 = *(_QWORD *)&v182[8];
      v44 = *(_QWORD *)v182;
      v169 = *(_QWORD *)&v182[24];
      v209 = *(_QWORD *)&v182[16];
      if ( *(_QWORD *)v182 != -1 )
      {
        v75 = _mm_loadu_si128((const __m128i *)&v182[32]);
        v46 = *(_QWORD *)&v182[56];
        v76 = *(_QWORD *)&v182[48];
        if ( v212 )
          sub_140001660(v217, v212, 1);
        v83 = v208;
        if ( (unsigned __int64)(v218 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
        {
          sub_140001660(v213, v218, 1);
          v84 = v219.m128i_i64[0];
          if ( (unsigned __int64)(v219.m128i_i64[0] - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_158;
LABEL_114:
          v85 = v220;
          if ( !v220 )
          {
LABEL_116:
            v73 = v83;
            v74 = __PAIR128__(v169, v209);
            goto LABEL_127;
          }
        }
        else
        {
          v84 = v219.m128i_i64[0];
          if ( (unsigned __int64)(v219.m128i_i64[0] - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_114;
LABEL_158:
          sub_140001660(v216, v84, 1);
          v85 = v220;
          if ( !v220 )
            goto LABEL_116;
        }
        sub_140001660(v215, v85, 1);
        goto LABEL_116;
      }
      sub_14018E430(v182, &v175.m128i_u64[1], 5, &off_141A57DE8);
      v44 = *(_QWORD *)v182;
      v197 = *(_QWORD *)&v182[16];
      if ( *(_QWORD *)v182 != -1 )
      {
        v202 = *(_QWORD *)&v182[24];
        v86 = *(_QWORD *)&v182[8];
        v75 = _mm_loadu_si128((const __m128i *)&v182[32]);
        v46 = *(_QWORD *)&v182[56];
        v76 = *(_QWORD *)&v182[48];
        if ( (unsigned __int64)(v208 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          sub_140001660(v209, v208, 1);
        if ( v212 )
          sub_140001660(v217, v212, 1);
        if ( (unsigned __int64)(v218 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          sub_140001660(v213, v218, 1);
          v87 = v219.m128i_i64[0];
          if ( (unsigned __int64)(v219.m128i_i64[0] - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_161;
LABEL_123:
          v88 = v220;
          if ( !v220 )
          {
LABEL_125:
            v73 = v86;
            v74 = __PAIR128__(v202, v197);
            goto LABEL_127;
          }
        }
        else
        {
          v87 = v219.m128i_i64[0];
          if ( (unsigned __int64)(v219.m128i_i64[0] - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_123;
LABEL_161:
          sub_140001660(v216, v87, 1);
          v88 = v220;
          if ( !v220 )
            goto LABEL_125;
        }
        sub_140001660(v215, v88, 1);
        goto LABEL_125;
      }
      if ( v220 == -1 )
      {
        v76 = v216;
        v75 = _mm_unpacklo_epi64((__m128i)v48, _mm_loadl_epi64(&v219));
        v73 = v157;
        v44 = v215;
        v74 = __PAIR128__(v217, v212);
        goto LABEL_127;
      }
      if ( v220 == -2 )
        break;
      v49 = *(_QWORD *)&v182[24];
      v202 = *(_QWORD *)&v182[8];
      v203.m128i_i64[0] = v218;
      v203.m128i_i64[1] = v213;
      v204.m128i_i64[0] = v47;
      v221 = 1;
      v50 = sub_140291D70(aSubagent_0, 10, v217, v48);
      v51 = v156;
      if ( v50 )
      {
        if ( v202 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          sub_140001660(v197, v202, 1);
          v52 = v208;
          if ( (unsigned __int64)(v208 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_60:
            sub_140001660(v209, v52, 1);
            v53 = v212;
            if ( !v212 )
              goto LABEL_52;
LABEL_51:
            sub_140001660(v217, v53, 1);
            goto LABEL_52;
          }
        }
        else
        {
          v52 = v208;
          if ( (unsigned __int64)(v208 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_60;
        }
        v53 = v212;
        if ( v212 )
          goto LABEL_51;
LABEL_52:
        if ( v203.m128i_i64[0] != -1 && v203.m128i_i64[0] )
          sub_140001660(v203.m128i_i64[1], v203.m128i_i64[0], 1);
        if ( (unsigned __int64)(v219.m128i_i64[0] - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          sub_140001660(v216, v219.m128i_i64[0], 1);
        if ( v220 )
          sub_140001660(v215, v220, 1);
      }
      else
      {
        if ( v218 == -1 )
        {
          v213 = 1;
          v54 = 0;
          v55 = v156 == 0;
          v218 = 0;
          if ( v156 < 0 )
          {
LABEL_163:
            v56 = 0;
LABEL_164:
            v219.m128i_i8[15] = 1;
            sub_141938D2B(v56, v51);
          }
        }
        else
        {
          v221 = 1;
          sub_1416AC440(v182, &v203);
          v213 = *(_QWORD *)&v182[8];
          v54 = *(_QWORD *)&v182[16];
          v55 = v51 == 0;
          v218 = *(_QWORD *)v182;
          if ( v51 < 0 )
            goto LABEL_163;
        }
        v153 = v54;
        if ( v55 )
        {
          v161 = 1;
        }
        else
        {
          nullsub_1(v54);
          v56 = 1;
          v57 = (__m128i *)sub_140001650(v51, 1);
          if ( !v57 )
            goto LABEL_164;
          v161 = (__int64)v57;
          sub_1418F44E0(v57, v211, v51);
        }
        v58 = -1;
        if ( v219.m128i_i64[0] == -1 )
        {
          v59 = v171;
          v46 = v172;
        }
        else
        {
          v59 = v216;
          sub_140E91160(v216, v46);
          if ( v60 )
          {
            v58 = v219.m128i_i64[0];
          }
          else
          {
            if ( v219.m128i_i64[0] )
              sub_140001660(v216, v219.m128i_i64[0], 1);
            v59 = v171;
            v46 = v172;
            v58 = -1;
          }
        }
        *(_QWORD *)&v182[56] = v218;
        *(_QWORD *)&v182[64] = v213;
        *(_QWORD *)&v182[72] = v153;
        v188 = v204.m128i_i64[0];
        v187 = _mm_loadu_si128(&v203);
        v189 = v208;
        v190 = v209;
        v191 = v169;
        v192 = v202;
        v193 = v197;
        v194 = v49;
        *(_QWORD *)v182 = v51;
        *(_QWORD *)&v182[8] = v161;
        *(_QWORD *)&v182[16] = v51;
        v182[24] = v214;
        *(_QWORD *)&v182[32] = v220;
        *(_QWORD *)&v182[40] = v215;
        *(_QWORD *)&v182[48] = v157;
        *(_QWORD *)&v183 = v58;
        v171 = v59;
        *((_QWORD *)&v183 + 1) = v59;
        v172 = v46;
        v184 = v46;
        v185 = 1;
        v195 = v210;
        v196 = v207;
        v61 = v181;
        if ( v181 == v180.m128i_i64[0] )
          sub_14190F960(&v180);
        sub_1418F44E0((__m128i *)(v180.m128i_i64[1] + 192 * v61), (const __m128i *)v182, 0xC0u);
        v181 = v61 + 1;
        if ( v212 )
          sub_140001660(v217, v212, 1);
      }
    }
    sub_140E96D30(&v175);
    HIDWORD(_RAX) = (unsigned __int64)sub_140E970D0(&v165) >> 32;
    v63 = v162.m128i_i64[1];
    if ( v162.m128i_i64[1] )
    {
      if ( v14 )
      {
        v64 = v162.m128i_i64[0];
        v65 = (const __m128i *)(v162.m128i_i64[0] + 16);
        _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v162.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R13D )
          {
            do
            {
              v67 = _mm_load_si128(v65);
              v64 -= 384;
              ++v65;
              _R13D = _mm_movemask_epi8(v67) ^ 0xFFFF;
            }
            while ( !_R13D );
          }
          __asm { tzcnt   eax, r13d }
          v68 = -3 * _RAX;
          v69 = *(_QWORD *)(v64 + 8 * v68 - 24);
          if ( v69 )
            sub_140001660(*(_QWORD *)(v64 + 8 * v68 - 16), v69, 1);
          --v14;
          _RAX = _R13D & (unsigned int)(_R13D - 1);
          _R13D &= _R13D - 1;
        }
        while ( v14 );
      }
      v70 = (24 * v63 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v71 = v70 + v63 + 17;
      if ( v71 )
        sub_140001660(v162.m128i_i64[0] - v70, v71, 16);
    }
    sub_140E963A0(&v134);
    v3 = v159;
    v72 = v158;
    a1 = v179;
    if ( v170 )
      sub_140001660(v211, v170, 1);
    v4 -= 32LL;
    v5 += 4;
    v7 = v72;
    if ( v72 == (__int64 *)v3 )
      goto LABEL_170;
  }
  *(_OWORD *)v182 = 0x8000000000000013uLL;
  *(_QWORD *)&v182[16] = v43;
  v150.m128i_i64[0] = (__int64)v211;
  v150.m128i_i64[1] = v10;
  v203.m128i_i64[0] = (__int64)&v150;
  v203.m128i_i64[1] = (__int64)sub_14169F630;
  v204.m128i_i64[0] = (__int64)v182;
  v204.m128i_i64[1] = (__int64)sub_141404740;
  sub_1416ABFD0(&v198, &unk_141A57E00, &v203);
  v131 = _mm_load_si128(&v198);
  v132 = v199.m128i_i64[0];
  sub_140E96F40(v182);
  v133 = v179;
  *(_QWORD *)v179 = 10;
  *(__m128i *)(v133 + 8) = v131;
  *(_QWORD *)(v133 + 24) = v132;
LABEL_128:
  HIDWORD(_RAX) = (unsigned __int64)sub_140E970D0(&v165) >> 32;
LABEL_129:
  v94 = v162.m128i_i64[1];
  if ( v162.m128i_i64[1] )
  {
    if ( v14 )
    {
      v95 = v162.m128i_i64[0];
      v96 = (const __m128i *)(v162.m128i_i64[0] + 16);
      _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v162.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v98 = _mm_load_si128(v96);
            v95 -= 384;
            ++v96;
            _R13D = _mm_movemask_epi8(v98) ^ 0xFFFF;
          }
          while ( !_R13D );
        }
        __asm { tzcnt   eax, r13d }
        v99 = -3 * _RAX;
        v100 = *(_QWORD *)(v95 + 8 * v99 - 24);
        if ( v100 )
          sub_140001660(*(_QWORD *)(v95 + 8 * v99 - 16), v100, 1);
        --v14;
        _RAX = _R13D & (unsigned int)(_R13D - 1);
        _R13D &= _R13D - 1;
      }
      while ( v14 );
    }
    v101 = (24 * v94 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v102 = v101 + v94 + 17;
    if ( v102 )
      sub_140001660(v162.m128i_i64[0] - v101, v102, 16);
  }
LABEL_139:
  sub_140E963A0(&v134);
  v3 = v159;
  v8 = v158;
  v103 = v170;
  if ( v170 )
LABEL_140:
    sub_140001660(v211, v103, 1);
LABEL_141:
  if ( (__int64 *)v3 != v8 )
  {
    v104 = v4 >> 5;
    do
    {
      v105 = *(v5 - 1);
      if ( v105 )
        sub_140001660(*v5, v105, 1);
      v5 += 4;
      --v104;
    }
    while ( v104 );
  }
  if ( (_QWORD)v160 )
    sub_140001660(*((_QWORD *)&v160 + 1), 32 * v160, 8);
  v106 = (_QWORD *)v180.m128i_i64[1];
  v217 = v181;
  v220 = 0;
  v219.m128i_i64[0] = v180.m128i_i64[1];
  while ( v217 != v220 )
  {
    ++v220;
    v107 = v106 + 24;
    sub_14038C9C0(v106);
    v106 = v107;
  }
  result = v180.m128i_i64[0];
  if ( v180.m128i_i64[0] )
    return sub_140001660(v180.m128i_i64[1], 192 * v180.m128i_i64[0], 8);
  return result;
}
