// win 1.2.3 delta | router_model_restore_2 @ 0x1404a9020 | changelog ③模型回退
// [FULL IDA decompiler 43999B]
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__m128i *__fastcall sub_1404A9020(__m128i *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rsi
  const __m128i *i; // rdx
  __m128i v9; // xmm0
  __int64 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  const __m128i *v14; // r14
  __int64 v15; // r15
  unsigned __int64 v16; // rax
  __m128i v17; // xmm0
  __m128i v18; // xmm7
  unsigned __int64 v19; // rax
  __m128i v20; // xmm8
  __int64 v22; // r13
  int v23; // eax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // r14
  _QWORD *v30; // r13
  __int64 *j; // rax
  __int64 v32; // rsi
  __int64 v33; // rdi
  const __m128i **v34; // r12
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __m128i v37; // xmm0
  unsigned __int64 v38; // rax
  __m128i v39; // xmm8
  __int64 v41; // rsi
  unsigned __int64 v42; // r12
  int v44; // eax
  const __m128i *v45; // r8
  int v46; // eax
  _QWORD *v47; // rdx
  unsigned __int64 v48; // rax
  __m128i v49; // kr00_16
  __m128i v50; // xmm0
  __m128i v51; // xmm7
  __int64 v52; // rsi
  __int64 v53; // rdi
  __m128i v54; // xmm0
  __int64 v55; // rsi
  __m128i v56; // xmm0
  int v57; // r12d
  int v58; // eax
  __int64 v59; // r8
  int v60; // ebx
  unsigned int v61; // eax
  _QWORD *v62; // rdx
  __int64 v63; // rax
  __int64 *v64; // rax
  __m128i v65; // xmm0
  __int64 v66; // rdi
  __int64 v67; // r12
  __m128i v68; // xmm0
  const __m128i *v69; // rdi
  __int64 v70; // rsi
  _QWORD *v71; // rdi
  __int64 v72; // rsi
  __m128i v73; // xmm0
  __int64 v74; // rdi
  __int64 v75; // rsi
  __int64 v76; // rdx
  __m128i v77; // xmm0
  __int64 v78; // rdi
  __m128i v79; // xmm0
  __m128i v80; // xmm0
  __m128i v81; // xmm0
  __int64 v82; // rsi
  __m128i v83; // xmm0
  __m128i v84; // xmm0
  char v85; // di
  bool v86; // zf
  _QWORD *v87; // rdi
  __int64 v88; // rbx
  __m128i v89; // xmm0
  __int64 v90; // rdi
  _QWORD *v91; // r12
  unsigned __int64 v92; // r14
  __int64 v93; // rdx
  __int64 v94; // r12
  __int64 v95; // r14
  unsigned __int64 v96; // r13
  __m128i v98; // kr30_16
  __m128i v99; // xmm0
  __m128i v100; // xmm7
  __int64 k; // rcx
  unsigned __int64 v102; // r13
  __m128i v103; // xmm8
  __int64 v105; // rsi
  __int64 v106; // rax
  __int64 v107; // rsi
  __int64 v108; // rax
  __int64 v109; // rcx
  __m128i si128; // xmm0
  __int128 v111; // xmm1
  __int128 v112; // xmm2
  __int64 v113; // r15
  __int64 v114; // rsi
  __int64 v115; // rsi
  __int64 v116; // rdi
  __int64 v117; // rax
  char v118; // di
  __int64 *v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rdx
  _QWORD *v122; // r14
  __int64 v123; // rdx
  __int64 v124; // rdx
  __int64 v125; // rdx
  __m128i v127; // xmm0
  const __m128i *v128; // r14
  __int64 v129; // rsi
  _QWORD *v130; // rdi
  __int64 v131; // rdx
  __int64 v132; // rdx
  __int64 v133; // rdx
  __int64 v134; // rsi
  __int64 v135; // rdi
  __int64 v136; // r14
  const __m128i *v137; // r15
  __m128i v139; // xmm0
  __int64 v140; // rax
  __int64 v141; // rdx
  unsigned __int64 v142; // rax
  unsigned __int64 v143; // rsi
  unsigned __int64 v144; // rsi
  __int64 *v145; // r14
  __int64 v146; // rdx
  __int64 v147; // rdx
  __int64 v148; // rdx
  __int64 v150; // [rsp+20h] [rbp-60h]
  __int64 v151; // [rsp+28h] [rbp-58h]
  __int64 v152; // [rsp+30h] [rbp-50h]
  _QWORD v153[3]; // [rsp+38h] [rbp-48h] BYREF
  __m128i v154; // [rsp+50h] [rbp-30h] BYREF
  __int128 v155; // [rsp+60h] [rbp-20h]
  __int128 v156; // [rsp+70h] [rbp-10h]
  __int128 v157; // [rsp+80h] [rbp+0h]
  __m128i v158; // [rsp+90h] [rbp+10h] BYREF
  __int128 v159; // [rsp+A0h] [rbp+20h]
  __int128 v160; // [rsp+B0h] [rbp+30h]
  _OWORD v161[4]; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v162; // [rsp+100h] [rbp+80h]
  _QWORD v163[5]; // [rsp+110h] [rbp+90h] BYREF
  _QWORD v164[4]; // [rsp+138h] [rbp+B8h] BYREF
  _QWORD v165[8]; // [rsp+158h] [rbp+D8h] BYREF
  const __m128i **v166; // [rsp+198h] [rbp+118h]
  __int64 v167; // [rsp+1A0h] [rbp+120h]
  __int64 v168; // [rsp+1A8h] [rbp+128h]
  __int64 v169; // [rsp+1B0h] [rbp+130h]
  __int64 v170; // [rsp+1B8h] [rbp+138h]
  __int64 v171; // [rsp+1C0h] [rbp+140h]
  __int64 v172; // [rsp+1C8h] [rbp+148h]
  __int64 v173; // [rsp+1D0h] [rbp+150h] BYREF
  const __m128i *v174; // [rsp+1D8h] [rbp+158h]
  __int64 v175; // [rsp+1E0h] [rbp+160h]
  __m128i v176; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v177; // [rsp+200h] [rbp+180h]
  __int128 v178; // [rsp+210h] [rbp+190h]
  __int128 v179; // [rsp+220h] [rbp+1A0h]
  __m128i v180; // [rsp+230h] [rbp+1B0h] BYREF
  __int128 v181; // [rsp+240h] [rbp+1C0h]
  _QWORD v182[2]; // [rsp+250h] [rbp+1D0h] BYREF
  const __m128i **v183; // [rsp+260h] [rbp+1E0h]
  __m128i *v184; // [rsp+268h] [rbp+1E8h]
  __m128i v185; // [rsp+270h] [rbp+1F0h] BYREF
  __m128i v186; // [rsp+280h] [rbp+200h] BYREF
  __int64 v187; // [rsp+290h] [rbp+210h] BYREF
  __int64 v188; // [rsp+298h] [rbp+218h]
  __int64 v189; // [rsp+2A0h] [rbp+220h]
  __int64 v190; // [rsp+2A8h] [rbp+228h]
  __m128i v191; // [rsp+2B0h] [rbp+230h] BYREF
  __int128 v192; // [rsp+2C0h] [rbp+240h]
  __int128 v193; // [rsp+2D0h] [rbp+250h]
  __int128 v194; // [rsp+2E0h] [rbp+260h]
  __int128 v195; // [rsp+2F0h] [rbp+270h]
  __int128 v196; // [rsp+300h] [rbp+280h]
  __m128i v197; // [rsp+310h] [rbp+290h] BYREF
  __m256i v198; // [rsp+320h] [rbp+2A0h]
  __m128i v199; // [rsp+340h] [rbp+2C0h]
  __m128i v200; // [rsp+350h] [rbp+2D0h]
  __int128 v201; // [rsp+360h] [rbp+2E0h]
  __int128 v202; // [rsp+370h] [rbp+2F0h]
  __m128i v203; // [rsp+380h] [rbp+300h] BYREF
  __int128 v204; // [rsp+390h] [rbp+310h]
  __int128 v205; // [rsp+3A0h] [rbp+320h]
  __int128 v206; // [rsp+3B0h] [rbp+330h]
  __int128 v207; // [rsp+3C0h] [rbp+340h]
  __int64 v208; // [rsp+3D8h] [rbp+358h]
  __int64 v209; // [rsp+3E0h] [rbp+360h]
  __int64 v210; // [rsp+3E8h] [rbp+368h] BYREF
  __m512i v211; // [rsp+3F0h] [rbp+370h] BYREF
  __m128i v212; // [rsp+430h] [rbp+3B0h] BYREF
  __int128 v213; // [rsp+440h] [rbp+3C0h]
  __int128 v214; // [rsp+450h] [rbp+3D0h]
  __int128 v215; // [rsp+460h] [rbp+3E0h]
  __int128 v216; // [rsp+470h] [rbp+3F0h]
  __int128 v217; // [rsp+480h] [rbp+400h]
  __int64 v218; // [rsp+498h] [rbp+418h]
  __int64 v219; // [rsp+4A0h] [rbp+420h]
  __int64 v220; // [rsp+4A8h] [rbp+428h]
  __int64 v221; // [rsp+4B0h] [rbp+430h]
  __int64 v222; // [rsp+4B8h] [rbp+438h]
  _BYTE v223[112]; // [rsp+4C0h] [rbp+440h] BYREF
  __int64 v224; // [rsp+530h] [rbp+4B0h]
  __int64 m128i_i64; // [rsp+540h] [rbp+4C0h]
  const __m128i *v226; // [rsp+548h] [rbp+4C8h]
  char v227; // [rsp+557h] [rbp+4D7h]
  _QWORD *v228; // [rsp+558h] [rbp+4D8h]
  char v229; // [rsp+564h] [rbp+4E4h]
  char v230; // [rsp+565h] [rbp+4E5h]
  char v231; // [rsp+566h] [rbp+4E6h]
  char v232; // [rsp+567h] [rbp+4E7h] BYREF
  __int64 v233; // [rsp+568h] [rbp+4E8h]

  v233 = -2;
  v4 = *(_QWORD *)(a2 + 776);
  v5 = *(_QWORD *)(a2 + 784);
  sub_1404A5B80((__int64)&v173, v4, v5);
  v6 = v175;
  if ( !v175 )
  {
    a1[1] = 0;
    *a1 = 0;
    goto LABEL_250;
  }
  sub_1404B8260(v223, v4, v5);
  if ( *(_QWORD *)v223 == -2 )
  {
    v217 = *(_OWORD *)&v223[88];
    v216 = *(_OWORD *)&v223[72];
    v9 = _mm_loadu_si128((const __m128i *)&v223[8]);
    v215 = *(_OWORD *)&v223[56];
    v214 = *(_OWORD *)&v223[40];
    v213 = *(_OWORD *)&v223[24];
    v212 = v9;
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v191.m128i_i64[0] = (__int64)&v212;
      v191.m128i_i64[1] = (__int64)sub_140B036A0;
      v197.m128i_i64[0] = 0;
      v197.m128i_i64[1] = (__int64)aCodexmateLibCo_0;
      *(_OWORD *)v198.m256i_i8 = 0x33u;
      v198.m256i_i64[2] = (__int64)aSrcCoreRelayCo_0;
      v198.m256i_i64[3] = 41;
      v199.m128i_i64[0] = 2;
      v199.m128i_i64[1] = (__int64)aCodexmateLibCo_0;
      v200.m128i_i64[0] = 51;
      v200.m128i_i64[1] = 0x95400000001LL;
      *(_QWORD *)&v201 = &unk_14175BA5E;
      *((_QWORD *)&v201 + 1) = &v191;
      sub_1412C36A0(&v232, &v197);
    }
    a1[1] = 0;
    *a1 = 0;
    sub_14043E650(&v212);
    v10 = &v174[3].m128i_i64[1];
    do
    {
      v11 = *(v10 - 7);
      if ( v11 )
        sub_140001660(*(v10 - 6), v11, 1);
      v12 = *(v10 - 4);
      if ( v12 )
        sub_140001660(*(v10 - 3), v12, 1);
      v13 = *(v10 - 1);
      if ( v13 )
        sub_140001660(*v10, v13, 1);
      v10 += 10;
      --v6;
    }
    while ( v6 );
    goto LABEL_250;
  }
  v190 = a2;
  v169 = v5;
  v168 = v4;
  v184 = a1;
  v162 = v224;
  v161[3] = *(_OWORD *)&v223[96];
  v161[2] = *(_OWORD *)&v223[80];
  v161[1] = *(_OWORD *)&v223[64];
  v161[0] = *(_OWORD *)&v223[48];
  v160 = *(_OWORD *)&v223[32];
  v159 = *(_OWORD *)&v223[16];
  v158 = _mm_loadu_si128((const __m128i *)v223);
  v186 = 0;
  v185 = 0;
  v187 = 0;
  v188 = 8;
  v189 = 0;
  v14 = v174;
  m128i_i64 = (__int64)v174[5 * v6].m128i_i64;
  v220 = 0;
  while ( 1 )
  {
    v15 = (__int64)v14;
    if ( v14 == (const __m128i *)m128i_i64 )
      break;
    v14 += 5;
    if ( *(_QWORD *)&v161[0] )
    {
      v16 = sub_140378810((char *)v161 + 8, v15 + 24);
      _RCX = v16 >> 57;
      v17 = _mm_cvtsi32_si128(v16 >> 57);
      v18 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v17, v17), 0), 68);
      for ( i = nullptr; ; ++i )
      {
        v19 = v160 & v16;
        v20 = _mm_loadu_si128((const __m128i *)(*((_QWORD *)&v159 + 1) + v19));
        _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v20, v18));
        if ( _EBX )
          break;
LABEL_24:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v20, (__m128i)-1LL));
        if ( (_DWORD)_RCX )
          goto LABEL_28;
        v16 = (unsigned __int64)i[1].m128i_u64 + v19;
      }
      v22 = *(_QWORD *)(v15 + 40);
      v221 = v19;
      v226 = i;
      while ( 1 )
      {
        __asm { tzcnt   ecx, ebx }
        _RCX = -(__int64)(v160 & (v19 + _RCX));
        if ( v22 == *(_QWORD *)(*((_QWORD *)&v159 + 1) + 24 * _RCX - 8)
          && !(unsigned int)sub_1416847B0(
                              *(_QWORD *)(v15 + 32),
                              *(_QWORD *)(*((_QWORD *)&v159 + 1) + 24 * _RCX - 16),
                              v22) )
        {
          break;
        }
        v23 = _EBX - 1;
        LOWORD(v23) = _EBX & (_EBX - 1);
        v86 = (_WORD)v23 == 0;
        _EBX = v23;
        v19 = v221;
        i = v226;
        if ( v86 )
          goto LABEL_24;
      }
      v24 = v189;
      if ( v189 == v187 )
        sub_141688EE0(&v187);
      *(_QWORD *)(v188 + 8 * v24) = v15;
      v189 = v24 + 1;
    }
    else
    {
LABEL_28:
      _RCX = v220 + 1;
      v220 = _RCX;
      v185.m128i_i64[1] = _RCX;
      if ( *(_QWORD *)off_141EC8D80 >= 3u )
      {
        v197.m128i_i64[0] = v15;
        v197.m128i_i64[1] = (__int64)sub_1400015F0;
        v198.m256i_i64[0] = v15 + 24;
        v198.m256i_i64[1] = (__int64)sub_1400015F0;
        *(_QWORD *)v223 = 0;
        *(_QWORD *)&v223[8] = aCodexmateLibCo_0;
        *(_OWORD *)&v223[16] = 0x33u;
        *(_QWORD *)&v223[32] = aSrcCoreRelayCo_0;
        *(_QWORD *)&v223[40] = 41;
        *(_QWORD *)&v223[48] = 3;
        *(_QWORD *)&v223[56] = aCodexmateLibCo_0;
        *(_QWORD *)&v223[64] = 51;
        *(_QWORD *)&v223[72] = 0x96200000001LL;
        *(_QWORD *)&v223[80] = &unk_14175B8D6;
        *(_QWORD *)&v223[88] = &v197;
        sub_1412C36A0(&v232, v223);
      }
    }
  }
  v25 = sub_141470CD0(_RCX, i);
  v26 = v25;
  if ( *(_BYTE *)(v25 + 16) == 1 )
  {
    v27 = *(_QWORD *)v25;
    v28 = *(_QWORD *)(v26 + 8);
  }
  else
  {
    v27 = sub_141486EF0();
    *(_QWORD *)v26 = v27;
    *(_QWORD *)(v26 + 8) = v28;
    *(_BYTE *)(v26 + 16) = 1;
  }
  *(_QWORD *)v26 = v27 + 1;
  v181 = xmmword_141757120;
  v180 = _mm_loadu_si128((const __m128i *)&off_141757110);
  v182[0] = v27;
  v182[1] = v28;
  sub_140712830(v223);
  v165[4] = *(_QWORD *)&v223[8];
  v167 = *(_QWORD *)v223;
  v165[6] = *(_QWORD *)v223;
  v190 = *(_QWORD *)&v223[8] + 32LL * *(_QWORD *)&v223[16];
  v165[7] = v190;
  v29 = 32LL * *(_QWORD *)&v223[16] - 32;
  v30 = (_QWORD *)(*(_QWORD *)&v223[8] + 40LL);
  v170 = *(_QWORD *)&v223[8];
  for ( j = *(__int64 **)&v223[8]; ; j = (__int64 *)m128i_i64 )
  {
    if ( j == (__int64 *)v190 )
      goto LABEL_159;
    m128i_i64 = (__int64)(j + 4);
    v165[5] = j + 4;
    if ( *j == -1 )
      break;
    v220 = *j;
    v32 = j[2];
    v221 = j[1];
    sub_141486710(v223, v221, v32);
    if ( *(_DWORD *)v223 == 2 )
    {
      v197.m128i_i64[1] = *(_QWORD *)&v223[8];
      v197.m128i_i64[0] = 2;
LABEL_39:
      sub_140018650(&v197.m128i_u64[1]);
      goto LABEL_40;
    }
    v197 = *(__m128i *)v223;
    *(_QWORD *)&v201 = *(_QWORD *)&v223[80];
    v200 = _mm_loadu_si128((const __m128i *)&v223[64]);
    v199 = *(__m128i *)&v223[48];
    v198 = *(__m256i *)&v223[16];
    if ( *(_QWORD *)v223 == 2 )
      goto LABEL_39;
    v33 = v189;
    if ( !v189 )
      goto LABEL_40;
    v34 = (const __m128i **)v188;
    sub_1404B6A90(v223, v221, v32);
    if ( v223[104] != 0xFF )
    {
      v202 = *(_OWORD *)&v223[96];
      v201 = *(_OWORD *)&v223[80];
      v200 = *(__m128i *)&v223[64];
      v35 = _mm_loadu_si128((const __m128i *)v223);
      v199 = *(__m128i *)&v223[48];
      v198 = *(__m256i *)&v223[16];
      v197 = v35;
      sub_1404A3CD0(&v191, &v197);
      if ( v191.m128i_i32[0] != -1 )
      {
        v217 = v196;
        v216 = v195;
        v36 = _mm_loadu_si128(&v191);
        v215 = v194;
        v214 = v193;
        v213 = v192;
        v212 = v36;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          sub_1404A33D0(&v210, v221, v32);
          v203.m128i_i64[0] = (__int64)&v210;
          v203.m128i_i64[1] = (__int64)sub_1400015F0;
          *(_QWORD *)&v204 = &v212;
          *((_QWORD *)&v204 + 1) = sub_140B036A0;
          *(_QWORD *)v223 = 0;
          *(_QWORD *)&v223[8] = aCodexmateLibCo_0;
          *(_OWORD *)&v223[16] = 0x33u;
          *(_QWORD *)&v223[32] = aSrcCoreRelayCo_0;
          *(_QWORD *)&v223[40] = 41;
          *(_QWORD *)&v223[48] = 2;
          *(_QWORD *)&v223[56] = aCodexmateLibCo_0;
          *(_QWORD *)&v223[64] = 51;
          *(_QWORD *)&v223[72] = 0x9C400000001LL;
          *(_QWORD *)&v223[80] = &unk_14175B420;
          *(_QWORD *)&v223[88] = &v203;
          sub_1412C36A0(&v232, v223);
          if ( v210 )
            sub_140001660(v211.m512i_i64[0], v210, 1);
        }
        ++v186.m128i_i64[1];
        sub_14043E650(&v212);
        goto LABEL_152;
      }
      if ( !v191.m128i_i8[8] )
      {
LABEL_152:
        sub_14043C900(&v197);
        goto LABEL_40;
      }
      v166 = &v34[v33];
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_63:
          if ( v34 == v166 )
          {
            sub_1404B9DC0(&v197, aModelRestore, 13);
            sub_14043C900(&v197);
            goto LABEL_40;
          }
          v45 = *v34;
          v183 = v34 + 1;
          v226 = v45;
          if ( !*((_QWORD *)&v181 + 1) )
            break;
          v48 = sub_140378810(v182, v45);
          _RCX = v48 >> 57;
          v49 = v180;
          v50 = _mm_cvtsi32_si128(v48 >> 57);
          v51 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v50, v50), 0), 68);
          v47 = nullptr;
          v45 = v226;
          while ( 1 )
          {
            v38 = v49.m128i_i64[1] & v48;
            v39 = _mm_loadu_si128((const __m128i *)(v49.m128i_i64[0] + v38));
            _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v39, v51));
            if ( _R15D )
              break;
LABEL_60:
            _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v39, (__m128i)-1LL));
            if ( (_DWORD)_RCX )
              goto LABEL_66;
            v48 = (unsigned __int64)v47 + v38 + 16;
            v47 += 2;
          }
          v41 = v45[1].m128i_i64[0];
          v228 = v47;
          while ( 1 )
          {
            __asm { tzcnt   ecx, r15d }
            v42 = v38;
            _RCX = -(__int64)(v49.m128i_i64[1] & (v38 + _RCX));
            if ( v41 == *(_QWORD *)(v49.m128i_i64[0] + 24 * _RCX - 8) )
            {
              v44 = sub_1416847B0(v45->m128i_i64[1], *(_QWORD *)(v49.m128i_i64[0] + 24 * _RCX - 16), v41);
              v45 = v226;
              if ( !v44 )
                break;
            }
            v46 = _R15D - 1;
            LOWORD(v46) = _R15D & (_R15D - 1);
            v86 = (_WORD)v46 == 0;
            _R15D = v46;
            v38 = v42;
            v47 = v228;
            if ( v86 )
              goto LABEL_60;
          }
          v34 = v183;
        }
LABEL_66:
        v52 = v45->m128i_i64[1];
        v53 = v45[1].m128i_i64[0];
        sub_14046F850(
          v223,
          &v197,
          aSelectCoalesce_0,
          127,
          v150,
          v151,
          v152,
          v153[0],
          v153[1],
          v153[2],
          v154.m128i_i64[0],
          v154.m128i_i64[1],
          v155,
          *((_QWORD *)&v155 + 1),
          v156,
          *((_QWORD *)&v156 + 1),
          v157,
          *((_QWORD *)&v157 + 1),
          v158.m128i_i64[0],
          v158.m128i_i64[1],
          v159,
          *((_QWORD *)&v159 + 1));
        v212 = *(__m128i *)&v223[8];
        v213 = *(_OWORD *)&v223[24];
        v214 = *(_OWORD *)&v223[40];
        v215 = *(_OWORD *)&v223[56];
        if ( *(_DWORD *)v223 == 1 )
        {
          v54 = _mm_load_si128(&v212);
          *(_OWORD *)&v211.m512i_u64[6] = v215;
          *(_OWORD *)&v211.m512i_u64[4] = v214;
          *(_OWORD *)&v211.m512i_u64[2] = v213;
          *(__m128i *)v211.m512i_i8 = v54;
          v210 = -1;
          v55 = v54.m128i_i64[0];
LABEL_94:
          if ( v55 == 0x8000000000000009uLL )
          {
            sub_14043D020(&v211);
          }
          else
          {
            v73 = _mm_loadu_si128((const __m128i *)&v211);
            v215 = *(_OWORD *)&v211.m512i_u64[6];
            v214 = *(_OWORD *)&v211.m512i_u64[4];
            v213 = *(_OWORD *)&v211.m512i_u64[2];
            v212 = v73;
            if ( *(_QWORD *)off_141EC8D80 >= 2u )
            {
              v191.m128i_i64[0] = (__int64)v226;
              v191.m128i_i64[1] = (__int64)sub_1400015F0;
              *(_QWORD *)&v192 = &v212;
              *((_QWORD *)&v192 + 1) = sub_140FB8910;
              *(_QWORD *)v223 = 0;
              *(_QWORD *)&v223[8] = aCodexmateLibCo_0;
              *(_OWORD *)&v223[16] = 0x33u;
              *(_QWORD *)&v223[32] = aSrcCoreRelayCo_0;
              *(_QWORD *)&v223[40] = 41;
              *(_QWORD *)&v223[48] = 2;
              *(_QWORD *)&v223[56] = aCodexmateLibCo_0;
              *(_QWORD *)&v223[64] = 51;
              *(_QWORD *)&v223[72] = 0x9E600000001LL;
              *(_QWORD *)&v223[80] = &unk_14175B3E1;
              *(_QWORD *)&v223[88] = &v191;
              sub_1412C36A0(&v232, v223);
            }
            ++v186.m128i_i64[1];
            sub_14043D020(&v212);
          }
          goto LABEL_99;
        }
        v56 = _mm_load_si128(&v212);
        v194 = v215;
        v193 = v214;
        v192 = v213;
        v191 = v56;
        v228 = (_QWORD *)v56.m128i_i64[0];
        v57 = DWORD2(v215);
        v58 = sub_1414B6B70(*((_QWORD *)&v215 + 1));
        v59 = 1;
        if ( v58 )
        {
          v60 = v58;
          if ( !v53 )
            LODWORD(v52) = 1;
          v61 = sub_1414B6740(v57, 1, v52, v53, -(v53 != 0), 1);
          if ( *v228 >= 0x7FFFFFFFFFFFFFFFuLL )
            sub_1416C2FC0(&off_1417588A8);
          v62 = v228;
          ++*v228;
          sub_140FB88E0(v223, v62[2], v61);
          --*v228;
          v55 = *(_QWORD *)v223;
          v59 = 1;
          if ( *(_QWORD *)v223 == -1 )
          {
            if ( v60 == 1 )
            {
              v203 = (__m128i)(unsigned __int64)&v191;
              sub_1404DE8F0(v223, &v203);
              v55 = *(_QWORD *)v223;
              if ( *(_QWORD *)v223 != -1 )
              {
                v64 = *(__int64 **)&v223[8];
                v212 = _mm_loadu_si128((const __m128i *)&v223[16]);
                v213 = *(_OWORD *)&v223[32];
                v214 = *(_OWORD *)&v223[48];
                goto LABEL_78;
              }
              v64 = &v203.m128i_i64[1];
              v55 = 0x8000000000000009uLL;
              if ( !v203.m128i_i64[1] )
              {
LABEL_78:
                v211.m512i_i64[0] = v55;
                v211.m512i_i64[1] = (__int64)v64;
                v65 = _mm_load_si128(&v212);
                *(_OWORD *)&v211.m512i_u64[6] = v214;
                *(_OWORD *)&v211.m512i_u64[4] = v213;
                *(__m128i *)&v211.m512i_u64[2] = v65;
                goto LABEL_79;
              }
              sub_14042B0E0(v223, &v203.m128i_u64[1], 0);
              v55 = *(_QWORD *)v223;
              v78 = *(_QWORD *)&v223[24];
              if ( *(_QWORD *)v223 == -1 )
              {
                v228 = *(_QWORD **)&v223[8];
                v219 = *(_QWORD *)&v223[16];
                sub_14042B0E0(v223, &v203.m128i_u64[1], 1);
                v55 = *(_QWORD *)v223;
                v88 = *(_QWORD *)&v223[24];
                if ( *(_QWORD *)v223 == -1 )
                {
                  v218 = *(_QWORD *)&v223[16];
                  v222 = *(_QWORD *)&v223[8];
                  sub_14042B0E0(v223, &v203.m128i_u64[1], 2);
                  v55 = *(_QWORD *)v223;
                  v212 = *(__m128i *)&v223[8];
                  *(_QWORD *)&v213 = *(_QWORD *)&v223[24];
                  if ( *(_QWORD *)v223 != -1 )
                  {
                    *(_OWORD *)&v211.m512i_u64[6] = *(_OWORD *)&v223[48];
                    *(_OWORD *)&v211.m512i_u64[4] = *(_OWORD *)&v223[32];
                    v211.m512i_i64[3] = v213;
                    *(__m128i *)&v211.m512i_u64[1] = _mm_load_si128(&v212);
                    v211.m512i_i64[0] = *(_QWORD *)v223;
                    v210 = -1;
                    v90 = v219;
                    v91 = v228;
                    if ( v222 )
                      sub_140001660(v218, v222, 1);
                    if ( v91 )
                      sub_140001660(v90, v91, 1);
                    goto LABEL_80;
                  }
                  v211.m512i_i64[7] = v213;
                  *(__m128i *)&v211.m512i_u64[5] = _mm_load_si128(&v212);
                  v210 = (__int64)v228;
                  v67 = v219;
                  v211.m512i_i64[0] = v219;
                  v211.m512i_i64[1] = v78;
                  v211.m512i_i64[2] = v222;
                  v211.m512i_i64[3] = v218;
                  v211.m512i_i64[4] = v88;
                  v55 = v219;
                  v66 = (__int64)v228;
                }
                else
                {
                  v89 = _mm_loadu_si128((const __m128i *)&v223[32]);
                  *(_OWORD *)&v211.m512i_u64[6] = *(_OWORD *)&v223[48];
                  *(__m128i *)&v211.m512i_u64[4] = v89;
                  *(_OWORD *)&v211.m512i_u64[2] = *(_OWORD *)&v223[16];
                  *(_OWORD *)v211.m512i_i8 = *(_OWORD *)v223;
                  v210 = -1;
                  v66 = -1;
                  if ( v228 )
                  {
                    sub_140001660(v219, v228, 1);
                    v67 = v55;
                  }
                  else
                  {
                    v67 = *(_QWORD *)v223;
                  }
                }
              }
              else
              {
                v79 = _mm_loadu_si128((const __m128i *)&v223[32]);
                *(_OWORD *)&v211.m512i_u64[6] = *(_OWORD *)&v223[48];
                *(__m128i *)&v211.m512i_u64[4] = v79;
                *(_OWORD *)&v211.m512i_u64[2] = *(_OWORD *)&v223[16];
                *(_OWORD *)v211.m512i_i8 = *(_OWORD *)v223;
LABEL_79:
                v210 = -1;
LABEL_80:
                v66 = -1;
                v67 = v55;
              }
              sub_14043CE10(&v203);
              goto LABEL_84;
            }
            v63 = v60;
            v55 = 0x8000000000000013uLL;
          }
          else
          {
            v59 = *(_QWORD *)&v223[8];
            v63 = *(_QWORD *)&v223[16];
            v212 = _mm_loadu_si128((const __m128i *)&v223[24]);
            v213 = *(_OWORD *)&v223[40];
            *(_QWORD *)&v214 = *(_QWORD *)&v223[56];
          }
        }
        else
        {
          v55 = 0x8000000000000013uLL;
          v63 = 0;
        }
        v211.m512i_i64[7] = v214;
        v68 = _mm_load_si128(&v212);
        *(_OWORD *)&v211.m512i_u64[5] = v213;
        *(__m128i *)&v211.m512i_u64[3] = v68;
        v211.m512i_i64[0] = v55;
        v211.m512i_i64[1] = v59;
        v211.m512i_i64[2] = v63;
        v210 = -1;
        v66 = -1;
        v67 = v55;
LABEL_84:
        sub_14043D1B0(&v191);
        if ( v66 == -1 )
          goto LABEL_94;
        v228 = (_QWORD *)v66;
        v209 = v211.m512i_i64[3];
        v222 = v211.m512i_i64[2];
        v208 = v211.m512i_i64[6];
        v218 = v211.m512i_i64[5];
        v69 = v226;
        v86 = v211.m512i_i64[1] == v226[4].m128i_i64[0];
        v219 = v67;
        if ( !v86
          || (v70 = v211.m512i_i64[4],
              v171 = v211.m512i_i64[7],
              (unsigned int)sub_1416847B0(v67, v226[3].m128i_i64[1], v211.m512i_i64[1])) )
        {
          ++v186.m128i_i64[0];
          sub_14149C500(v223, v69);
          sub_140474440(&v180, v223);
          goto LABEL_88;
        }
        v172 = v70;
        v74 = v208;
        v75 = v171;
        sub_14033BC10(v208, v171);
        if ( v76 )
        {
          v77 = _mm_loadu_si128(v226 + 2);
          sub_1404B5A10((__int64)&v212, v74, v75, v209, v172, v77.m128i_i64[0], v77.m128i_i64[1]);
          if ( v212.m128i_i64[0] == -2 )
          {
            *(_QWORD *)&v177 = *((_QWORD *)&v213 + 1);
            v176 = _mm_loadu_si128((const __m128i *)&v212.m128i_u64[1]);
            if ( *(_QWORD *)off_141EC8D80 >= 2u )
            {
              v191.m128i_i64[0] = (__int64)v226;
              v191.m128i_i64[1] = (__int64)sub_1400015F0;
              *(_QWORD *)&v192 = &v176;
              *((_QWORD *)&v192 + 1) = sub_1400015F0;
              *(_QWORD *)v223 = 0;
              *(_QWORD *)&v223[8] = aCodexmateLibCo_0;
              *(_OWORD *)&v223[16] = 0x33u;
              *(_QWORD *)&v223[32] = aSrcCoreRelayCo_0;
              *(_QWORD *)&v223[40] = 41;
              *(_QWORD *)&v223[48] = 2;
              *(_QWORD *)&v223[56] = aCodexmateLibCo_0;
              *(_QWORD *)&v223[64] = 51;
              *(_QWORD *)&v223[72] = 0x9FF00000001LL;
              *(_QWORD *)&v223[80] = &unk_14175B398;
              *(_QWORD *)&v223[88] = &v191;
              sub_1412C36A0(&v232, v223);
            }
            ++v186.m128i_i64[1];
            if ( v176.m128i_i64[0] )
              sub_140001660(v176.m128i_i64[1], v176.m128i_i64[0], 1);
LABEL_88:
            v71 = v228;
            if ( v218 )
              sub_140001660(v208, v218, 1);
            v72 = v219;
            if ( v222 )
              sub_140001660(v209, v222, 1);
            if ( v71 )
              sub_140001660(v72, v71, 1);
LABEL_99:
            v34 = v183;
            goto LABEL_63;
          }
          v207 = v216;
          v80 = _mm_loadu_si128(&v212);
          v206 = v215;
          v205 = v214;
          v204 = v213;
          v203 = v80;
        }
        else
        {
          v203.m128i_i64[0] = -1;
        }
        v165[0] = v226;
        v165[1] = &off_14175AD88;
        v165[2] = (char *)v226 + 24;
        v165[3] = &off_14175AD88;
        sub_140429E20((unsigned int)&v154, (unsigned int)&v197, (unsigned int)aUpdateThreadsS_2, 43, (__int64)v165, 2);
        if ( v154.m128i_i64[0] == -1 )
        {
          ++v185.m128i_i64[0];
          v229 = 1;
          sub_14149C500(v223, v226);
          v229 = 1;
          sub_140474440(&v180, v223);
          v82 = v203.m128i_i64[0];
          v86 = v203.m128i_i64[0] == -1;
        }
        else
        {
          v81 = _mm_loadu_si128(&v154);
          v179 = v157;
          v178 = v156;
          v177 = v155;
          v176 = v81;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            v212.m128i_i64[0] = (__int64)v226;
            v212.m128i_i64[1] = (__int64)sub_1400015F0;
            *(_QWORD *)&v213 = &v176;
            *((_QWORD *)&v213 + 1) = sub_140FB8910;
            *(_QWORD *)v223 = 0;
            *(_QWORD *)&v223[8] = aCodexmateLibCo_0;
            *(_OWORD *)&v223[16] = 0x33u;
            *(_QWORD *)&v223[32] = aSrcCoreRelayCo_0;
            *(_QWORD *)&v223[40] = 41;
            *(_QWORD *)&v223[48] = 2;
            *(_QWORD *)&v223[56] = aCodexmateLibCo_0;
            *(_QWORD *)&v223[64] = 51;
            *(_QWORD *)&v223[72] = 0xA1100000001LL;
            *(_QWORD *)&v223[80] = &unk_14175B301;
            *(_QWORD *)&v223[88] = &v212;
            v227 = 1;
            sub_1412C36A0(&v232, v223);
          }
          ++v186.m128i_i64[1];
          v82 = v203.m128i_i64[0];
          if ( v203.m128i_i64[0] == -1 )
          {
            v85 = 1;
          }
          else
          {
            v195 = v207;
            v83 = _mm_load_si128(&v203);
            v194 = v206;
            v193 = v205;
            v192 = v204;
            v191 = v83;
            sub_1404C7150(&v212, &v191, 1);
            if ( v212.m128i_i32[0] != -1 )
            {
              *(_OWORD *)&v223[80] = v217;
              *(_OWORD *)&v223[64] = v216;
              v84 = _mm_loadu_si128(&v212);
              *(_OWORD *)&v223[48] = v215;
              *(_OWORD *)&v223[32] = v214;
              *(_OWORD *)&v223[16] = v213;
              *(__m128i *)v223 = v84;
              if ( *(_QWORD *)off_141EC8D80 >= 2u )
              {
                v164[0] = v226;
                v164[1] = sub_1400015F0;
                v164[2] = v223;
                v164[3] = sub_140B036A0;
                v163[0] = aCodexmateLibCo_0;
                v163[1] = 51;
                v163[2] = aCodexmateLibCo_0;
                v163[3] = 51;
                v163[4] = &off_14175B380;
                sub_140985BA0(&unk_14175B336, v164, 2, v163);
              }
              sub_14043E650(v223);
            }
            if ( v191.m128i_i64[0] )
              sub_140001660(v191.m128i_i64[1], v191.m128i_i64[0], 1);
            if ( (_QWORD)v193 )
              sub_140001660(*((_QWORD *)&v193 + 1), v193, 1);
            if ( *((_QWORD *)&v194 + 1) )
              sub_140001660(v195, *((_QWORD *)&v194 + 1), 1);
            v85 = 0;
          }
          v229 = v85;
          sub_14043D020(&v176);
          v86 = ((unsigned __int8)v85 & (v82 != -1)) == 0;
        }
        v87 = v228;
        if ( !v86 )
        {
          if ( v82 )
            sub_140001660(v203.m128i_i64[1], v82, 1);
          if ( (_QWORD)v205 )
            sub_140001660(*((_QWORD *)&v205 + 1), v205, 1);
          if ( *((_QWORD *)&v206 + 1) )
            sub_140001660(v207, *((_QWORD *)&v206 + 1), 1);
        }
        if ( v218 )
          sub_140001660(v208, v218, 1);
        v34 = v183;
        if ( v222 )
          sub_140001660(v209, v222, 1);
        if ( v87 )
          sub_140001660(v219, v87, 1);
      }
    }
    v217 = *(_OWORD *)&v223[80];
    v216 = *(_OWORD *)&v223[64];
    v37 = _mm_loadu_si128((const __m128i *)v223);
    v215 = *(_OWORD *)&v223[48];
    v214 = *(_OWORD *)&v223[32];
    v213 = *(_OWORD *)&v223[16];
    v212 = v37;
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      sub_1404A33D0(&v203, v221, v32);
      v191.m128i_i64[0] = (__int64)&v203;
      v191.m128i_i64[1] = (__int64)sub_1400015F0;
      *(_QWORD *)&v192 = &v212;
      *((_QWORD *)&v192 + 1) = sub_140B036A0;
      v197.m128i_i64[0] = 0;
      v197.m128i_i64[1] = (__int64)aCodexmateLibCo_0;
      *(_OWORD *)v198.m256i_i8 = 0x33u;
      v198.m256i_i64[2] = (__int64)aSrcCoreRelayCo_0;
      v198.m256i_i64[3] = 41;
      v199.m128i_i64[0] = 2;
      v199.m128i_i64[1] = (__int64)aCodexmateLibCo_0;
      v200.m128i_i64[0] = 51;
      v200.m128i_i64[1] = 0x9B900000001LL;
      *(_QWORD *)&v201 = &unk_14175B457;
      *((_QWORD *)&v201 + 1) = &v191;
      sub_1412C36A0(&v232, &v197);
      if ( v203.m128i_i64[0] )
        sub_140001660(v203.m128i_i64[1], v203.m128i_i64[0], 1);
    }
    ++v186.m128i_i64[1];
    sub_14043E650(&v212);
LABEL_40:
    if ( v220 )
      sub_140001660(v221, v220, 1);
    v29 -= 32LL;
    v30 += 4;
  }
  if ( v190 != m128i_i64 )
  {
    v92 = v29 >> 5;
    do
    {
      v93 = *(v30 - 1);
      if ( v93 )
        sub_140001660(*v30, v93, 1);
      v30 += 4;
      --v92;
    }
    while ( v92 );
  }
LABEL_159:
  if ( v167 )
    sub_140001660(v170, 32 * v167, 8);
  v210 = 0;
  *(_OWORD *)v211.m512i_i8 = 8u;
  v94 = (__int64)v174;
  v221 = v175;
  m128i_i64 = (__int64)v174[5 * v175].m128i_i64;
  v226 = v174;
  if ( v174 != (const __m128i *)m128i_i64 )
  {
    do
    {
      while ( 1 )
      {
        v95 = v94 + 80;
        if ( *((_QWORD *)&v181 + 1) )
          break;
LABEL_173:
        v176.m128i_i32[0] = *(_DWORD *)(v94 + 72) + 1;
        if ( v176.m128i_i32[0] <= 9u )
        {
          v231 = 1;
          sub_14149C500(&v203, v94);
          sub_14149C500(&v191, v94 + 24);
          sub_14149C500(&v212, v94 + 48);
          v198.m256i_i64[0] = v204;
          v197 = v203;
          v198.m256i_i64[3] = v192;
          *(__m128i *)&v198.m256i_u64[1] = v191;
          v200.m128i_i64[0] = v213;
          v199 = v212;
          *(_QWORD *)&v223[16] = v204;
          *(__m128i *)v223 = v203;
          *(_QWORD *)&v223[40] = v192;
          *(__m128i *)&v223[24] = v191;
          *(_QWORD *)&v223[64] = v213;
          *(__m128i *)&v223[48] = v212;
          *(_DWORD *)&v223[72] = v176.m128i_i32[0];
          v107 = v211.m512i_i64[1];
          if ( v211.m512i_i64[1] == v210 )
            sub_141689180(&v210);
          v108 = v211.m512i_i64[0];
          v109 = 80 * v107;
          *(_OWORD *)(v211.m512i_i64[0] + v109 + 64) = *(_OWORD *)&v223[64];
          si128 = _mm_load_si128((const __m128i *)v223);
          v111 = *(_OWORD *)&v223[16];
          v112 = *(_OWORD *)&v223[32];
          *(_OWORD *)(v108 + v109 + 48) = *(_OWORD *)&v223[48];
          *(_OWORD *)(v108 + v109 + 32) = v112;
          *(_OWORD *)(v108 + v109 + 16) = v111;
          *(__m128i *)(v108 + v109) = si128;
          v211.m512i_i64[1] = v107 + 1;
          v94 += 80;
          if ( v95 == m128i_i64 )
            goto LABEL_181;
        }
        else
        {
          if ( *(_QWORD *)off_141EC8D80 >= 3u )
          {
            v197.m128i_i64[0] = v94;
            v197.m128i_i64[1] = (__int64)sub_1400015F0;
            v198.m256i_i64[0] = (__int64)&v176;
            v198.m256i_i64[1] = (__int64)sub_1414AB780;
            *(_QWORD *)v223 = 0;
            *(_QWORD *)&v223[8] = aCodexmateLibCo_0;
            *(_OWORD *)&v223[16] = 0x33u;
            *(_QWORD *)&v223[32] = aSrcCoreRelayCo_0;
            *(_QWORD *)&v223[40] = 41;
            *(_QWORD *)&v223[48] = 3;
            *(_QWORD *)&v223[56] = aCodexmateLibCo_0;
            *(_QWORD *)&v223[64] = 51;
            *(_QWORD *)&v223[72] = 0x97C00000001LL;
            *(_QWORD *)&v223[80] = &unk_14175B926;
            *(_QWORD *)&v223[88] = &v197;
            v231 = 1;
            sub_1412C36A0(&v232, v223);
          }
          v94 += 80;
          if ( v95 == m128i_i64 )
            goto LABEL_181;
        }
      }
      v231 = 1;
      v96 = sub_140378810(v182, v94);
      _RAX = v96 >> 57;
      v98 = v180;
      v99 = _mm_cvtsi32_si128(v96 >> 57);
      v100 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v99, v99), 0), 68);
      for ( k = 0; ; k += 16 )
      {
        v102 = v98.m128i_i64[1] & v96;
        v103 = _mm_loadu_si128((const __m128i *)(v98.m128i_i64[0] + v102));
        _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v103, v100));
        if ( _EBX )
          break;
LABEL_171:
        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v103, (__m128i)-1LL));
        if ( (_DWORD)_RAX )
          goto LABEL_173;
        v96 = k + v102 + 16;
      }
      v105 = *(_QWORD *)(v94 + 16);
      v220 = k;
      while ( 1 )
      {
        __asm { tzcnt   eax, ebx }
        v106 = -3LL * (v98.m128i_i64[1] & (v102 + _RAX));
        if ( v105 == *(_QWORD *)(v98.m128i_i64[0] + 8 * v106 - 8)
          && !(unsigned int)sub_1416847B0(*(_QWORD *)(v94 + 8), *(_QWORD *)(v98.m128i_i64[0] + 8 * v106 - 16), v105) )
        {
          break;
        }
        _RAX = (unsigned int)(_EBX - 1);
        LOWORD(_RAX) = _EBX & (_EBX - 1);
        _EBX = _RAX;
        k = v220;
        if ( !(_WORD)_RAX )
          goto LABEL_171;
      }
      v94 += 80;
    }
    while ( v95 != m128i_i64 );
  }
LABEL_181:
  v231 = 1;
  sub_141473FA0((unsigned int)&v212, v168, v169, (unsigned int)&unk_14175B73B, 25);
  if ( !v211.m512i_i64[1] )
  {
    v230 = 1;
    v117 = sub_141485EF0(v212.m128i_i64[1], v213);
    a1 = v184;
    v113 = v221;
    v118 = 1;
    if ( v117 )
    {
      v191.m128i_i64[0] = v117;
      if ( (unsigned __int8)sub_140476D40(v117) && *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v197.m128i_i64[0] = (__int64)&v191;
        v197.m128i_i64[1] = (__int64)sub_141490720;
        *(_QWORD *)v223 = 0;
        *(_QWORD *)&v223[8] = aCodexmateLibCo_0;
        *(_OWORD *)&v223[16] = 0x33u;
        *(_QWORD *)&v223[32] = aSrcCoreRelayCo_0;
        *(_QWORD *)&v223[40] = 41;
        *(_QWORD *)&v223[48] = 2;
        *(_QWORD *)&v223[56] = aCodexmateLibCo_0;
        *(_QWORD *)&v223[64] = 51;
        *(_QWORD *)&v223[72] = 0x98C00000001LL;
        *(_QWORD *)&v223[80] = &unk_14175B96A;
        *(_QWORD *)&v223[88] = &v197;
        sub_1412C36A0(&v232, v223);
      }
      v230 = 1;
      sub_140018650(&v191);
    }
    goto LABEL_215;
  }
  v198.m256i_i64[0] = v211.m512i_i64[1];
  v197 = _mm_loadu_si128((const __m128i *)&v210);
  v198.m256i_i32[2] = 1;
  sub_140440F40(&v191, &v197);
  a1 = v184;
  v113 = v221;
  if ( v191.m128i_i64[0] == -1 )
  {
    v119 = (__int64 *)v191.m128i_i64[1];
    v176.m128i_i64[0] = v191.m128i_i64[1];
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v203.m128i_i64[0] = (__int64)&v176;
      v203.m128i_i64[1] = (__int64)sub_14142D3F0;
      *(_QWORD *)v223 = 0;
      *(_QWORD *)&v223[8] = aCodexmateLibCo_0;
      *(_OWORD *)&v223[16] = 0x33u;
      *(_QWORD *)&v223[32] = aSrcCoreRelayCo_0;
      *(_QWORD *)&v223[40] = 41;
      *(_QWORD *)&v223[48] = 2;
      *(_QWORD *)&v223[56] = aCodexmateLibCo_0;
      *(_QWORD *)&v223[64] = 51;
      *(_QWORD *)&v223[72] = 0x99B00000001LL;
      *(_QWORD *)&v223[80] = &unk_14175B9D0;
      *(_QWORD *)&v223[88] = &v203;
      sub_1412C36A0(&v232, v223);
      v119 = (__int64 *)v176.m128i_i64[0];
    }
    v120 = *v119;
    v86 = *v119 == 1;
    m128i_i64 = (__int64)v119;
    if ( v86 )
    {
      sub_140018650(v119 + 1);
    }
    else if ( !v120 )
    {
      v121 = *(_QWORD *)(m128i_i64 + 16);
      if ( v121 )
        sub_140001660(*(_QWORD *)(m128i_i64 + 8), v121, 1);
    }
    sub_140001660(m128i_i64, 40, 8);
    v115 = v197.m128i_i64[1];
    v116 = v198.m256i_i64[0];
    if ( !v198.m256i_i64[0] )
      goto LABEL_212;
  }
  else
  {
    v220 = v191.m128i_i64[1];
    m128i_i64 = v191.m128i_i64[0];
    v114 = sub_14148D5C0(v212.m128i_i64[1], v213, v191.m128i_i64[1], v192);
    if ( m128i_i64 )
      sub_140001660(v220, m128i_i64, 1);
    if ( v114 )
    {
      v176.m128i_i64[0] = v114;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v203.m128i_i64[0] = (__int64)&v176;
        v203.m128i_i64[1] = (__int64)sub_141490720;
        *(_QWORD *)v223 = 0;
        *(_QWORD *)&v223[8] = aCodexmateLibCo_0;
        *(_OWORD *)&v223[16] = 0x33u;
        *(_QWORD *)&v223[32] = aSrcCoreRelayCo_0;
        *(_QWORD *)&v223[40] = 41;
        *(_QWORD *)&v223[48] = 2;
        *(_QWORD *)&v223[56] = aCodexmateLibCo_0;
        *(_QWORD *)&v223[64] = 51;
        *(_QWORD *)&v223[72] = 0x99700000001LL;
        *(_QWORD *)&v223[80] = &unk_14175B99D;
        *(_QWORD *)&v223[88] = &v203;
        sub_1412C36A0(&v232, v223);
      }
      sub_140018650(&v176);
    }
    v115 = v197.m128i_i64[1];
    v116 = v198.m256i_i64[0];
    if ( !v198.m256i_i64[0] )
      goto LABEL_212;
  }
  v122 = (_QWORD *)(v115 + 56);
  do
  {
    v123 = *(v122 - 7);
    if ( v123 )
      sub_140001660(*(v122 - 6), v123, 1);
    v124 = *(v122 - 4);
    if ( v124 )
      sub_140001660(*(v122 - 3), v124, 1);
    v125 = *(v122 - 1);
    if ( v125 )
      sub_140001660(*v122, v125, 1);
    v122 += 10;
    --v116;
  }
  while ( v116 );
LABEL_212:
  if ( v197.m128i_i64[0] )
    sub_140001660(v115, 80 * v197.m128i_i64[0], 8);
  v118 = 0;
LABEL_215:
  *(_QWORD *)v223 = &v185;
  *(_QWORD *)&v223[8] = sub_1414AC520;
  *(_QWORD *)&v223[16] = &v185.m128i_i64[1];
  *(_QWORD *)&v223[24] = sub_1414AC520;
  *(_QWORD *)&v223[32] = &v186;
  *(_QWORD *)&v223[40] = sub_1414AC520;
  *(_QWORD *)&v223[48] = &v186.m128i_i64[1];
  *(_QWORD *)&v223[56] = sub_1414AC520;
  v230 = v118;
  sub_14149C0F0(v153, &unk_14175BA0B, v223);
  v230 = v118;
  HIDWORD(_RAX) = (unsigned __int64)sub_1403565C0(
                                      (unsigned int)aRelayModelRest,
                                      19,
                                      (unsigned int)aDone_2,
                                      4,
                                      (__int64)v153) >> 32;
  v127 = _mm_load_si128(&v185);
  a1[1] = v186;
  *a1 = v127;
  if ( v212.m128i_i64[0] )
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v212.m128i_i64[1], v212.m128i_i64[0], 1) >> 32;
  v128 = v226;
  if ( v118 )
  {
    v129 = v211.m512i_i64[1];
    if ( v211.m512i_i64[1] )
    {
      v130 = (_QWORD *)(v211.m512i_i64[0] + 56);
      do
      {
        v131 = *(v130 - 7);
        if ( v131 )
          sub_140001660(*(v130 - 6), v131, 1);
        v132 = *(v130 - 4);
        if ( v132 )
          sub_140001660(*(v130 - 3), v132, 1);
        v133 = *(v130 - 1);
        if ( v133 )
          sub_140001660(*v130, v133, 1);
        v130 += 10;
        --v129;
      }
      while ( v129 );
    }
    HIDWORD(_RAX) = HIDWORD(v210);
    if ( v210 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v211.m512i_i64[0], 80 * v210, 8) >> 32;
  }
  v134 = v180.m128i_i64[1];
  if ( v180.m128i_i64[1] )
  {
    v135 = *((_QWORD *)&v181 + 1);
    if ( *((_QWORD *)&v181 + 1) )
    {
      v136 = v180.m128i_i64[0];
      v137 = (const __m128i *)(v180.m128i_i64[0] + 16);
      _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v180.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R12D )
        {
          do
          {
            v139 = _mm_load_si128(v137);
            v136 -= 384;
            ++v137;
            _R12D = _mm_movemask_epi8(v139) ^ 0xFFFF;
          }
          while ( !_R12D );
        }
        __asm { tzcnt   eax, r12d }
        v140 = -3 * _RAX;
        v141 = *(_QWORD *)(v136 + 8 * v140 - 24);
        if ( v141 )
          sub_140001660(*(_QWORD *)(v136 + 8 * v140 - 16), v141, 1);
        --v135;
        _RAX = _R12D & (unsigned int)(_R12D - 1);
        _R12D &= _R12D - 1;
      }
      while ( v135 );
    }
    v142 = (24 * v134 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v143 = v142 + v134;
    v86 = v143 == -17;
    v144 = v143 + 17;
    a1 = v184;
    v128 = v226;
    v113 = v221;
    if ( !v86 )
      sub_140001660(v180.m128i_i64[0] - v142, v144, 16);
  }
  if ( v187 )
    sub_140001660(v188, 8 * v187, 8);
  sub_14043F2A0(&v158);
  if ( v113 )
  {
    v145 = &v128[3].m128i_i64[1];
    do
    {
      v146 = *(v145 - 7);
      if ( v146 )
        sub_140001660(*(v145 - 6), v146, 1);
      v147 = *(v145 - 4);
      if ( v147 )
        sub_140001660(*(v145 - 3), v147, 1);
      v148 = *(v145 - 1);
      if ( v148 )
        sub_140001660(*v145, v148, 1);
      v145 += 10;
      --v113;
    }
    while ( v113 );
  }
LABEL_250:
  if ( v173 )
    sub_140001660(v174, 80 * v173, 8);
  return a1;
}
