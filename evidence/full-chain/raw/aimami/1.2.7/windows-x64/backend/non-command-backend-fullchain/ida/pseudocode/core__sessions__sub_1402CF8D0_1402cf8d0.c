// win 1.2.7 | module src/core/sessions.rs | ea 0x1402cf8d0 | name sub_1402CF8D0
// win 1.2.7 | module src/core/sessions.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402CF8D0(
        __int64 a1,
        const __m128i *a2,
        signed __int64 a3,
        const __m128i *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 *a9,
        __int64 *a10)
{
  __int64 v10; // r13
  const __m128i *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // r12
  bool v15; // sf
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // r15
  _OWORD *v21; // rax
  __m128i *v22; // rax
  __int64 v23; // r15
  double v24; // xmm6_8
  _BOOL8 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r12
  unsigned __int64 v28; // rax
  __int64 v30; // rbx
  __int64 v31; // rdx
  __m128i v32; // xmm0
  __m128i v33; // xmm7
  __int64 i; // r8
  unsigned __int64 v35; // rax
  __m128i v36; // xmm9
  int v38; // eax
  bool v39; // zf
  signed __int64 v40; // r15
  signed __int64 v41; // rbx
  __int64 v42; // r15
  __int64 v43; // rbx
  __int64 v44; // r15
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // r12d
  int v48; // r12d
  __int64 v49; // rax
  const __m128i *v50; // rdx
  unsigned __int64 v51; // r12
  __int64 v53; // rcx
  __m128i v54; // xmm0
  __m128i v55; // xmm7
  __int64 j; // rdx
  unsigned __int64 v57; // r12
  __m128i v58; // xmm9
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rcx
  const __m128i *v63; // r12
  __m128i *v64; // rax
  char v65; // al
  __int64 v66; // rbx
  __m128i *v67; // rax
  __m128i v68; // xmm7
  __int64 v69; // rbx
  const __m128i *v70; // r15
  __int64 v71; // rax
  const __m128i *v72; // rdx
  __int64 v73; // rcx
  const __m128i *v74; // rbx
  __int64 v75; // r12
  const __m128i *v76; // r15
  __m128i *v77; // rax
  __int8 v78; // bl
  char v79; // r14
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // rcx
  unsigned __int64 v83; // r12
  const __m128i *v84; // rdx
  __int64 v85; // r15
  __m128i v86; // xmm8
  unsigned __int64 v87; // rax
  __int64 (__fastcall *v88)(unsigned __int64); // rax
  signed __int64 v89; // rax
  __int64 v90; // rax
  __int64 result; // rax
  _BYTE v92[48]; // [rsp+20h] [rbp-60h]
  __int64 v94; // [rsp+70h] [rbp-10h]
  __int64 v95; // [rsp+78h] [rbp-8h]
  __int64 v96; // [rsp+80h] [rbp+0h]
  __int64 v97; // [rsp+88h] [rbp+8h]
  __int64 v98; // [rsp+90h] [rbp+10h]
  __int64 v99; // [rsp+98h] [rbp+18h]
  __int128 v100; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v101; // [rsp+B8h] [rbp+38h]
  __int128 v102; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v103; // [rsp+D0h] [rbp+50h]
  __int128 v104; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v105; // [rsp+E8h] [rbp+68h]
  __m128i v106; // [rsp+F0h] [rbp+70h] BYREF
  __m128i v107; // [rsp+100h] [rbp+80h]
  __int128 v108; // [rsp+110h] [rbp+90h]
  __int128 v109; // [rsp+120h] [rbp+A0h]
  __m128i v110; // [rsp+130h] [rbp+B0h]
  __int64 v111; // [rsp+140h] [rbp+C0h]
  __int64 v112; // [rsp+148h] [rbp+C8h]
  __int64 v113; // [rsp+150h] [rbp+D0h]
  __int64 v114; // [rsp+158h] [rbp+D8h]
  __int64 v115; // [rsp+160h] [rbp+E0h]
  __int64 v116; // [rsp+168h] [rbp+E8h]
  __m128i v117; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v118; // [rsp+180h] [rbp+100h]
  __m128i v119; // [rsp+190h] [rbp+110h] BYREF
  __int64 v120; // [rsp+1A0h] [rbp+120h]
  __int64 v121; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 v122; // [rsp+1B0h] [rbp+130h]
  signed __int64 v123; // [rsp+1B8h] [rbp+138h]
  __m128i v124; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v125; // [rsp+1D0h] [rbp+150h]
  __m128i v126; // [rsp+1D8h] [rbp+158h] BYREF
  __int64 v127; // [rsp+1E8h] [rbp+168h]
  _BYTE v128[24]; // [rsp+1F0h] [rbp+170h] BYREF
  __m128i v129; // [rsp+208h] [rbp+188h] BYREF
  __int64 v130; // [rsp+218h] [rbp+198h]
  _OWORD *v131; // [rsp+220h] [rbp+1A0h]
  __int64 v132; // [rsp+228h] [rbp+1A8h]
  __int64 v133; // [rsp+230h] [rbp+1B0h]
  __int64 v134; // [rsp+238h] [rbp+1B8h]
  __m128i v135; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v136; // [rsp+250h] [rbp+1D0h]
  __int64 v137; // [rsp+258h] [rbp+1D8h]
  __m128i v138; // [rsp+260h] [rbp+1E0h] BYREF
  __m128i v139; // [rsp+270h] [rbp+1F0h]
  __int128 v140; // [rsp+280h] [rbp+200h]
  __int128 v141; // [rsp+290h] [rbp+210h]
  __m128i v142; // [rsp+2A0h] [rbp+220h] BYREF
  __int64 v143; // [rsp+2B0h] [rbp+230h]
  __int64 v144; // [rsp+2C0h] [rbp+240h]
  const __m128i *v145; // [rsp+2C8h] [rbp+248h]
  signed __int64 v146; // [rsp+2D0h] [rbp+250h]
  __int64 v147; // [rsp+2D8h] [rbp+258h]
  __int64 v148; // [rsp+2E0h] [rbp+260h]
  const __m128i *v149; // [rsp+2E8h] [rbp+268h]
  const __m128i *v150; // [rsp+2F0h] [rbp+270h]
  const __m128i *v151; // [rsp+2F8h] [rbp+278h]
  __int64 v152; // [rsp+300h] [rbp+280h]
  __int64 v153; // [rsp+308h] [rbp+288h]
  char v154; // [rsp+312h] [rbp+292h]
  char v155; // [rsp+313h] [rbp+293h]
  char v156; // [rsp+314h] [rbp+294h]
  char v157; // [rsp+315h] [rbp+295h]
  char v158; // [rsp+316h] [rbp+296h]
  char v159; // [rsp+317h] [rbp+297h]
  char v160; // [rsp+318h] [rbp+298h]
  char v161; // [rsp+319h] [rbp+299h]
  char v162; // [rsp+31Ah] [rbp+29Ah]
  char v163; // [rsp+31Bh] [rbp+29Bh]
  char v164; // [rsp+31Ch] [rbp+29Ch]
  char v165; // [rsp+31Dh] [rbp+29Dh]
  char v166; // [rsp+31Eh] [rbp+29Eh]
  char v167; // [rsp+31Fh] [rbp+29Fh]
  char v168; // [rsp+320h] [rbp+2A0h]
  char v169; // [rsp+321h] [rbp+2A1h]
  char v170; // [rsp+322h] [rbp+2A2h]
  char v171; // [rsp+323h] [rbp+2A3h]
  char v172; // [rsp+324h] [rbp+2A4h]
  char v173; // [rsp+325h] [rbp+2A5h]
  char v174; // [rsp+326h] [rbp+2A6h]
  char v175; // [rsp+327h] [rbp+2A7h]
  __int64 v176; // [rsp+328h] [rbp+2A8h]
  __m256i v177; // 0:^50.32

  v176 = -2;
  v10 = (__int64)a4;
  v146 = a3;
  v152 = (__int64)a2;
  v150 = a4;
  if ( a5 )
  {
    if ( *(_QWORD *)(a5 + 184) != -1 )
    {
      v12 = (const __m128i *)sub_140E91160(*(_QWORD *)(a5 + 192), *(_QWORD *)(a5 + 200));
      if ( v12 )
      {
        v14 = v13;
        v15 = v13 < 0;
        if ( v13 )
          goto LABEL_11;
      }
    }
  }
  if ( a6
    && (v12 = (const __m128i *)sub_140E91160(*(_QWORD *)(a6 + 8), *(_QWORD *)(a6 + 16))) != nullptr
    && (v14 = v16, v15 = v16 < 0, v16)
    || a5
    && (v12 = (const __m128i *)sub_140E91160(*(_QWORD *)(a5 + 24), *(_QWORD *)(a5 + 32))) != nullptr
    && (v14 = v17, v15 = v17 < 0, v17) )
  {
LABEL_11:
    if ( v15 )
    {
      v18 = 0;
      goto LABEL_13;
    }
    v151 = v12;
    nullsub_1(a1);
    v18 = 1;
    v22 = (__m128i *)sub_140001650(v14, 1);
    if ( !v22 )
LABEL_13:
      sub_141938D2B(v18, v14);
    v23 = (__int64)v22;
    sub_1418F44E0(v22, v151, v14);
    v10 = (__int64)v150;
    v138.m128i_i64[0] = v14;
    v138.m128i_i64[1] = v23;
    v139.m128i_i64[0] = v14;
LABEL_23:
    v107.m128i_i64[0] = v139.m128i_i64[0];
    v106 = v138;
    v19 = v138.m128i_i64[0];
    if ( v138.m128i_i64[0] != -1 )
      goto LABEL_24;
LABEL_18:
    nullsub_1(a1);
    v20 = 16;
    v21 = (_OWORD *)sub_140001650(16, 1);
    if ( !v21 )
      sub_141938D2B(1, 16);
    *v21 = xmmword_1419E5FF4;
    v19 = 16;
    if ( !a5 )
      goto LABEL_27;
    goto LABEL_25;
  }
  if ( *(_QWORD *)(a7 + 16) != -1 )
  {
    sub_1416AC440(&v138, a7 + 16);
    if ( v138.m128i_i64[0] != -1 )
      goto LABEL_23;
  }
  if ( *(_QWORD *)(a7 + 40) == -1 )
    goto LABEL_18;
  sub_1416AC440(&v106, a7 + 40);
  v19 = v106.m128i_i64[0];
  if ( v106.m128i_i64[0] == -1 )
    goto LABEL_18;
LABEL_24:
  v21 = (_OWORD *)v106.m128i_i64[1];
  v20 = v107.m128i_i64[0];
  if ( !a5 )
    goto LABEL_27;
LABEL_25:
  v24 = *(double *)(a5 + 376);
  if ( v24 > 0.0 )
  {
    v25 = 1;
    goto LABEL_30;
  }
LABEL_27:
  if ( a6 )
  {
    v24 = *(double *)(a6 + 24);
    v25 = v24 > 0.0;
    if ( v24 > 0.0 )
      goto LABEL_30;
  }
  else
  {
    v25 = 0;
  }
  v24 = *(double *)(a7 + 8);
LABEL_30:
  v26 = *(_QWORD *)a7 | v25;
  v151 = (const __m128i *)v19;
  v131 = v21;
  if ( v26 )
  {
    if ( *(_QWORD *)(a7 + 112) == -1 )
      goto LABEL_37;
  }
  else
  {
    v24 = *(double *)(v10 + 40);
    if ( *(_QWORD *)(a7 + 112) == -1 )
      goto LABEL_37;
  }
  v172 = 1;
  sub_1416AC440(&v138, a7 + 112);
  if ( v138.m128i_i64[0] != -1 )
  {
    v124 = v138;
    v125 = v139.m128i_i64[0];
    if ( *(_QWORD *)(a7 + 136) == -1 )
      goto LABEL_45;
    goto LABEL_42;
  }
LABEL_37:
  if ( !a5 || *(_QWORD *)(a5 + 112) == -1 )
  {
    v124.m128i_i64[0] = -1;
    if ( *(_QWORD *)(a7 + 136) == -1 )
      goto LABEL_45;
  }
  else
  {
    v172 = 1;
    sub_1416AC440(&v124, a5 + 112);
    if ( *(_QWORD *)(a7 + 136) == -1 )
      goto LABEL_45;
  }
LABEL_42:
  v171 = 1;
  v170 = 1;
  sub_1416AC440(&v138, a7 + 136);
  if ( v138.m128i_i64[0] != -1 )
  {
    v129 = v138;
    v130 = v139.m128i_i64[0];
    v94 = v20;
    if ( *(_QWORD *)(a7 + 64) == -1 )
      goto LABEL_53;
    goto LABEL_50;
  }
LABEL_45:
  if ( !a5 || *(_QWORD *)(a5 + 136) == -1 )
  {
    v129.m128i_i64[0] = -1;
    v94 = v20;
    if ( *(_QWORD *)(a7 + 64) == -1 )
      goto LABEL_53;
  }
  else
  {
    v171 = 1;
    v170 = 1;
    sub_1416AC440(&v129, a5 + 136);
    v94 = v20;
    if ( *(_QWORD *)(a7 + 64) == -1 )
      goto LABEL_53;
  }
LABEL_50:
  v162 = 1;
  v161 = 1;
  sub_1416AC440(&v138, a7 + 64);
  if ( v138.m128i_i64[0] != -1 )
  {
    v135 = v138;
    v136 = v139.m128i_i64[0];
    if ( !a5 )
      goto LABEL_73;
    goto LABEL_56;
  }
LABEL_53:
  if ( !a5 )
  {
    v135.m128i_i64[0] = -1;
    v40 = v146;
    goto LABEL_77;
  }
  if ( *(_QWORD *)(a5 + 64) != -1 )
  {
    v162 = 1;
    v161 = 1;
    sub_1416AC440(&v135, a5 + 64);
LABEL_56:
    if ( *(_QWORD *)(a5 + 328) == -1 )
      goto LABEL_73;
    goto LABEL_57;
  }
  v135.m128i_i64[0] = -1;
  if ( *(_QWORD *)(a5 + 328) == -1 )
    goto LABEL_73;
LABEL_57:
  if ( !a9[3] )
    goto LABEL_73;
  v27 = *(_QWORD *)(a5 + 344);
  v153 = *(_QWORD *)(a5 + 336);
  v28 = sub_140D2CC10(a9 + 4, v153, v27);
  _RCX = v28 >> 57;
  v30 = *a9;
  v31 = a9[1];
  v32 = _mm_cvtsi32_si128(v28 >> 57);
  v33 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v32, v32), 0), 68);
  for ( i = 0; ; i += 16 )
  {
    v35 = v31 & v28;
    v36 = _mm_loadu_si128((const __m128i *)(v30 + v35));
    _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v36, v33));
    if ( _R15D )
      break;
LABEL_64:
    _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v36, (__m128i)-1LL));
    if ( (_DWORD)_RCX )
      goto LABEL_73;
    v28 = i + v35 + 16;
  }
  v149 = (const __m128i *)v35;
  v147 = v31;
  v148 = i;
  while ( 1 )
  {
    __asm { tzcnt   ecx, r15d }
    _RCX = -(__int64)(v31 & (v35 + _RCX));
    v10 = 48 * _RCX;
    if ( v27 == *(_QWORD *)(v30 + 48 * _RCX - 32) )
    {
      v10 += v30;
      if ( !(unsigned int)sub_1418F4B70(v153, *(_QWORD *)(v10 - 40)) )
        break;
    }
    v38 = _R15D - 1;
    LOWORD(v38) = _R15D & (_R15D - 1);
    v39 = (_WORD)v38 == 0;
    _R15D = v38;
    v35 = (unsigned __int64)v149;
    v31 = v147;
    i = v148;
    if ( v39 )
      goto LABEL_64;
  }
  if ( *(_QWORD *)(v10 - 24) == -1 )
  {
LABEL_73:
    v40 = v146;
    if ( v135.m128i_i64[0] != -1 )
    {
      v169 = 1;
      v168 = 1;
      sub_1416AC440(&v121, &v135);
      goto LABEL_75;
    }
LABEL_77:
    v121 = -1;
    goto LABEL_78;
  }
  v41 = *(_QWORD *)(v10 - 8);
  if ( v41 < 0 )
  {
    v42 = 0;
    goto LABEL_71;
  }
  if ( v41 )
  {
    v63 = *(const __m128i **)(v10 - 16);
    nullsub_1(_RCX);
    v42 = 1;
    v64 = (__m128i *)sub_140001650(v41, 1);
    if ( !v64 )
    {
LABEL_71:
      v169 = 1;
      v168 = 1;
      sub_141938D2B(v42, v41);
    }
    v10 = (__int64)v64;
    sub_1418F44E0(v64, v63, v41);
  }
  else
  {
    v10 = 1;
  }
  v121 = v41;
  v122 = v10;
  v123 = v41;
  v40 = v146;
  if ( v135.m128i_i64[0] == -1 )
  {
LABEL_78:
    *(_QWORD *)v92 = -1;
    v48 = 0;
    if ( !a5 )
      goto LABEL_105;
    goto LABEL_102;
  }
LABEL_75:
  v43 = v135.m128i_i64[1];
  v44 = v136;
  v175 = 1;
  v174 = 1;
  v45 = sub_140E91160(v135.m128i_i64[1], v136);
  if ( v46 )
  {
    v175 = 1;
    v174 = 1;
    v47 = sub_141682970(v45);
    LOBYTE(v47) = v47 ^ 1;
  }
  else
  {
    v47 = 0;
  }
  v175 = 1;
  v174 = 1;
  v49 = sub_140E91160(v43, v44);
  LODWORD(v153) = v47;
  if ( a10[3] )
  {
    v147 = v49;
    v149 = v50;
    v51 = sub_140D2CC10(a10 + 4, v49, v50);
    _RAX = v51 >> 57;
    v10 = *a10;
    v53 = a10[1];
    v54 = _mm_cvtsi32_si128(v51 >> 57);
    v55 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v54, v54), 0), 68);
    for ( j = 0; ; j += 16 )
    {
      v57 = v53 & v51;
      v58 = _mm_loadu_si128((const __m128i *)(v10 + v57));
      _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v58, v55));
      if ( _R15D )
        break;
LABEL_88:
      _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v58, (__m128i)-1LL));
      if ( (_DWORD)_RAX )
        goto LABEL_90;
      v51 = j + v57 + 16;
    }
    v148 = v53;
    v144 = j;
    while ( 1 )
    {
      __asm { tzcnt   eax, r15d }
      if ( v149 == *(const __m128i **)(v10 - 104 * (v53 & (v57 + _RAX)) - 88) )
      {
        v60 = v10 - 104 * (v53 & (v57 + _RAX));
        v61 = sub_1418F4B70(v147, *(_QWORD *)(v60 - 96));
        if ( !(_DWORD)v61 )
          break;
      }
      _RAX = (unsigned int)(_R15D - 1);
      LOWORD(_RAX) = _R15D & (_R15D - 1);
      _R15D = _RAX;
      v53 = v148;
      j = v144;
      if ( !(_WORD)_RAX )
        goto LABEL_88;
    }
    if ( *(_QWORD *)(v60 - 80) == -1 )
    {
      v62 = -1;
    }
    else
    {
      v175 = 1;
      v174 = 1;
      sub_1416AC440(v128, v60 - 80);
      sub_1416AC440(&v126, v60 - 56);
      LOBYTE(_R15D) = *(_BYTE *)(v60 - 8);
      LOBYTE(v57) = *(_BYTE *)(v60 - 7);
      if ( *(_QWORD *)(v60 - 32) == -1 )
      {
        v61 = -1;
      }
      else
      {
        sub_1416AC440(&v106, v60 - 32);
        v61 = v106.m128i_i64[0];
        v117 = _mm_loadu_si128((const __m128i *)&v106.m128i_u64[1]);
      }
      v62 = *(_QWORD *)v128;
      v138 = *(__m128i *)&v128[8];
      v139 = _mm_loadu_si128(&v126);
      *(_QWORD *)&v140 = v127;
    }
    *(_QWORD *)v92 = v62;
    *(__m128i *)&v92[8] = v138;
    *(__m128i *)&v92[24] = v139;
    *(_QWORD *)&v92[40] = v140;
    v177.m256i_i64[0] = v61;
    *(__m128i *)&v177.m256i_u64[1] = v117;
    v177.m256i_i8[24] = _R15D;
    v177.m256i_i8[25] = v57;
    v40 = v146;
    v48 = v153;
    if ( !a5 )
      goto LABEL_105;
  }
  else
  {
LABEL_90:
    *(_QWORD *)v92 = -1;
    v40 = v146;
    v48 = v153;
    if ( !a5 )
      goto LABEL_105;
  }
LABEL_102:
  if ( *(_QWORD *)(a5 + 160) != -1 )
  {
    v167 = 1;
    v166 = 1;
    v165 = 1;
    sub_1416AC440(&v138, a5 + 160);
    if ( v138.m128i_i64[0] != -1 )
    {
      v120 = v139.m128i_i64[0];
      v119 = _mm_loadu_si128(&v138);
LABEL_107:
      LODWORD(v10) = *(_DWORD *)(a5 + 384);
      v65 = 1;
      goto LABEL_110;
    }
  }
LABEL_105:
  if ( *(_QWORD *)(a7 + 88) == -1 )
  {
    v119.m128i_i64[0] = -1;
    if ( a5 )
      goto LABEL_107;
  }
  else
  {
    v167 = 1;
    v166 = 1;
    v165 = 1;
    sub_1416AC440(&v119, a7 + 88);
    if ( a5 )
      goto LABEL_107;
  }
  v65 = 0;
LABEL_110:
  if ( (int)v10 <= 0 )
    LODWORD(v10) = *(_DWORD *)(a7 + 160);
  if ( !v65 )
    LODWORD(v10) = *(_DWORD *)(a7 + 160);
  if ( v40 < 0 )
  {
    v66 = 0;
    goto LABEL_116;
  }
  if ( v40 )
  {
    nullsub_1(*(unsigned int *)(a7 + 160));
    v66 = 1;
    v67 = (__m128i *)sub_140001650(v40, 1);
    if ( !v67 )
    {
LABEL_116:
      v159 = 1;
      v158 = 1;
      v157 = 1;
      sub_141938D2B(v66, v40);
    }
    v148 = (__int64)v67;
    sub_1418F44E0(v67, (const __m128i *)v152, v40);
  }
  else
  {
    v148 = 1;
  }
  v68 = _mm_loadu_si128(v150);
  v69 = v150[1].m128i_i64[0];
  if ( v69 == -1 )
  {
    v147 = -1;
  }
  else
  {
    v156 = 1;
    v155 = 1;
    sub_1416AC440(&v138, &v150[1]);
    v112 = v138.m128i_i64[1];
    v147 = v138.m128i_i64[0];
    v98 = v139.m128i_i64[0];
  }
  v70 = (const __m128i *)v123;
  v144 = v121;
  v149 = (const __m128i *)v122;
  v95 = v69;
  if ( v121 == -1 )
  {
    v152 = -1;
  }
  else
  {
    v164 = 1;
    v163 = 1;
    v71 = sub_141682C30(v122, v123);
    if ( v71 )
    {
      v164 = 1;
      v163 = 1;
      sub_1416B3AE0(&v138, v71, v72);
      if ( v138.m128i_i8[0] )
        v74 = nullptr;
      else
        v74 = (const __m128i *)v138.m128i_i64[1];
      v72 = (const __m128i *)v139.m128i_i64[0];
    }
    else
    {
      v74 = nullptr;
    }
    LOBYTE(v73) = v74 == nullptr || v72 == nullptr;
    if ( (_BYTE)v73 )
    {
      v72 = v70;
      v74 = v149;
    }
    v152 = (__int64)v72;
    if ( (__int64)v72 < 0 )
    {
      v75 = 0;
      v76 = (const __m128i *)v152;
      goto LABEL_136;
    }
    if ( v72 )
    {
      v145 = v70;
      LODWORD(v153) = v48;
      nullsub_1(v73);
      v75 = 1;
      v76 = (const __m128i *)v152;
      v77 = (__m128i *)sub_140001650(v152, 1);
      if ( !v77 )
      {
LABEL_136:
        v164 = 1;
        v163 = 1;
        sub_141938D2B(v75, v76);
      }
      v134 = (__int64)v77;
      sub_1418F44E0(v77, v74, (unsigned __int64)v76);
      v48 = v153;
      v70 = v145;
    }
    else
    {
      v134 = 1;
      v152 = 0;
    }
  }
  v78 = v150[3].m128i_i8[0];
  if ( !((unsigned __int8)v78 | (a5 == 0)) )
    v78 = *(_BYTE *)(a5 + 388);
  v113 = v119.m128i_i64[1];
  v132 = v119.m128i_i64[0];
  v97 = v120;
  v114 = v124.m128i_i64[1];
  v133 = v124.m128i_i64[0];
  v96 = v125;
  v116 = v129.m128i_i64[0];
  if ( *(_QWORD *)(a7 + 40) == -1 )
  {
    v137 = -1;
    v79 = 1;
    if ( v95 != -1 )
    {
LABEL_145:
      v145 = v70;
      LODWORD(v153) = v48;
      v80 = v150[1].m128i_i64[1];
      v81 = v150[2].m128i_i64[0];
      v173 = 1;
      sub_141695A00(&v138, v80, v81);
      if ( v138.m128i_i32[0] == 2 )
      {
        v83 = v138.m128i_u64[1];
        v106.m128i_i64[1] = v138.m128i_i64[1];
        v106.m128i_i64[0] = 2;
        v84 = (const __m128i *)&v106.m128i_u64[1];
        v85 = v138.m128i_i8[8] & 3;
        switch ( v138.m128i_i8[8] & 3 )
        {
          case 0:
            goto LABEL_160;
          case 1:
            goto LABEL_172;
          case 2:
            goto LABEL_170;
          case 3:
            goto LABEL_171;
        }
      }
      v106 = v138;
      v111 = v143;
      v110 = _mm_loadu_si128(&v142);
      v109 = v141;
      v108 = v140;
      v107 = v139;
      if ( v138.m128i_i64[0] == 2 )
      {
        v83 = v106.m128i_u64[1];
        v84 = (const __m128i *)&v106.m128i_u64[1];
        v85 = v106.m128i_i8[8] & 3;
        switch ( v106.m128i_i8[8] & 3 )
        {
          case 0:
LABEL_160:
            LOBYTE(v87) = *(_BYTE *)(v83 + 16);
            break;
          case 1:
LABEL_172:
            LOBYTE(v87) = *(_BYTE *)(v83 + 31);
            break;
          case 2:
LABEL_170:
            v150 = (const __m128i *)&v106.m128i_u64[1];
            v160 = 1;
            v88 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v82, &v106.m128i_u64[1]) + 8);
            v160 = 1;
            LOBYTE(v87) = v88(HIDWORD(v83));
            v84 = v150;
            break;
          case 3:
LABEL_171:
            v87 = HIDWORD(v83);
            break;
        }
        if ( (_BYTE)v87 )
        {
          if ( (unsigned int)(v85 - 2) >= 2 && v85 )
          {
            v138.m128i_i64[1] = v83 - 1;
            v138.m128i_i8[0] = 3;
            v173 = 1;
            sub_1416BCB00(&v138.m128i_u64[1]);
          }
          v79 = 0;
        }
        else
        {
          v150 = v84;
          if ( (unsigned int)(v85 - 2) >= 2 && v85 )
          {
            v138.m128i_i64[1] = v83 - 1;
            v138.m128i_i8[0] = 3;
            v160 = 0;
            sub_1416BCB00(&v138.m128i_u64[1]);
          }
        }
      }
      else
      {
        v79 = ((unsigned __int8)(BYTE3(v111) & 0x20) >> 5) & ((unsigned __int32)v110.m128i_i32[3] >> 10)
            | ((unsigned __int8)(v110.m128i_i8[12] & 0x10) >> 4);
      }
      LOBYTE(v48) = v153;
      v70 = v145;
      if ( !a5 )
        goto LABEL_182;
      goto LABEL_149;
    }
  }
  else
  {
    v154 = 1;
    sub_1416AC440(&v138, a7 + 40);
    v115 = v138.m128i_i64[1];
    v137 = v138.m128i_i64[0];
    v99 = v139.m128i_i64[0];
    v79 = 1;
    if ( v95 != -1 )
      goto LABEL_145;
  }
  if ( !a5 )
  {
LABEL_182:
    *(_QWORD *)&v104 = -1;
    *(_QWORD *)&v102 = -1;
    *(_QWORD *)&v100 = -1;
    v117.m128i_i64[0] = -1;
    *(_QWORD *)v128 = -1;
    v126.m128i_i64[0] = -1;
    v106.m128i_i64[0] = -1;
    v86 = 0;
    goto LABEL_183;
  }
LABEL_149:
  if ( *(_QWORD *)(a5 + 184) == -1 )
  {
    *(_QWORD *)&v104 = -1;
    if ( *(_QWORD *)(a5 + 208) != -1 )
    {
LABEL_151:
      sub_1416AC440(&v102, a5 + 208);
      v86 = _mm_loadu_si128((const __m128i *)a5);
      if ( *(_QWORD *)(a5 + 232) != -1 )
        goto LABEL_152;
      goto LABEL_163;
    }
  }
  else
  {
    sub_1416AC440(&v104, a5 + 184);
    if ( *(_QWORD *)(a5 + 208) != -1 )
      goto LABEL_151;
  }
  *(_QWORD *)&v102 = -1;
  v86 = _mm_loadu_si128((const __m128i *)a5);
  if ( *(_QWORD *)(a5 + 232) != -1 )
  {
LABEL_152:
    sub_1416AC440(&v100, a5 + 232);
    if ( *(_QWORD *)(a5 + 256) != -1 )
      goto LABEL_153;
    goto LABEL_164;
  }
LABEL_163:
  *(_QWORD *)&v100 = -1;
  if ( *(_QWORD *)(a5 + 256) != -1 )
  {
LABEL_153:
    sub_1416AC440(&v117, a5 + 256);
    if ( *(_QWORD *)(a5 + 280) != -1 )
      goto LABEL_154;
    goto LABEL_165;
  }
LABEL_164:
  v117.m128i_i64[0] = -1;
  if ( *(_QWORD *)(a5 + 280) != -1 )
  {
LABEL_154:
    sub_1416AC440(v128, a5 + 280);
    if ( *(_QWORD *)(a5 + 304) != -1 )
      goto LABEL_155;
    goto LABEL_166;
  }
LABEL_165:
  *(_QWORD *)v128 = -1;
  if ( *(_QWORD *)(a5 + 304) != -1 )
  {
LABEL_155:
    sub_1416AC440(&v126, a5 + 304);
    if ( *(_QWORD *)(a5 + 328) != -1 )
      goto LABEL_156;
    goto LABEL_167;
  }
LABEL_166:
  v126.m128i_i64[0] = -1;
  if ( *(_QWORD *)(a5 + 328) != -1 )
  {
LABEL_156:
    sub_1416AC440(&v106, a5 + 328);
    if ( *(_QWORD *)(a5 + 352) == -1 )
      goto LABEL_183;
LABEL_168:
    sub_1416AC440(&v138, a5 + 352);
    goto LABEL_184;
  }
LABEL_167:
  v106.m128i_i64[0] = -1;
  if ( *(_QWORD *)(a5 + 352) != -1 )
    goto LABEL_168;
LABEL_183:
  v138.m128i_i64[0] = -1;
LABEL_184:
  v89 = v146;
  *(_QWORD *)(a1 + 32) = v146;
  *(_QWORD *)(a1 + 40) = v148;
  *(_QWORD *)(a1 + 48) = v89;
  *(_QWORD *)(a1 + 56) = v151;
  *(_QWORD *)(a1 + 64) = v131;
  *(_QWORD *)(a1 + 72) = v94;
  *(double *)(a1 + 520) = v24;
  *(__m128i *)a1 = v68;
  *(_QWORD *)(a1 + 80) = v147;
  *(_QWORD *)(a1 + 88) = v112;
  *(_QWORD *)(a1 + 96) = v98;
  v90 = v152;
  *(_QWORD *)(a1 + 104) = v152;
  *(_QWORD *)(a1 + 112) = v134;
  *(_QWORD *)(a1 + 120) = v90;
  *(_QWORD *)(a1 + 128) = v144;
  *(_QWORD *)(a1 + 136) = v149;
  *(_QWORD *)(a1 + 144) = v70;
  *(_QWORD *)(a1 + 152) = v132;
  *(_QWORD *)(a1 + 160) = v113;
  *(_QWORD *)(a1 + 168) = v97;
  *(_DWORD *)(a1 + 528) = v10;
  *(_QWORD *)(a1 + 176) = v133;
  *(_QWORD *)(a1 + 184) = v114;
  *(_QWORD *)(a1 + 192) = v96;
  *(_QWORD *)(a1 + 216) = v130;
  *(__m128i *)(a1 + 200) = v129;
  *(_BYTE *)(a1 + 532) = v78;
  *(_QWORD *)(a1 + 224) = v137;
  *(_QWORD *)(a1 + 232) = v115;
  *(_QWORD *)(a1 + 240) = v99;
  *(_BYTE *)(a1 + 533) = v48;
  *(_BYTE *)(a1 + 534) = a8;
  *(_BYTE *)(a1 + 535) = v79;
  *(__m256i *)(a1 + 296) = v177;
  *(_OWORD *)(a1 + 280) = *(_OWORD *)&v92[32];
  *(_OWORD *)(a1 + 264) = *(_OWORD *)&v92[16];
  *(_OWORD *)(a1 + 248) = *(_OWORD *)v92;
  *(_QWORD *)(a1 + 344) = v105;
  *(_OWORD *)(a1 + 328) = v104;
  *(_QWORD *)(a1 + 368) = v103;
  *(_OWORD *)(a1 + 352) = v102;
  *(__m128i *)(a1 + 16) = v86;
  *(_QWORD *)(a1 + 392) = v101;
  *(_OWORD *)(a1 + 376) = v100;
  *(_QWORD *)(a1 + 416) = v118;
  *(__m128i *)(a1 + 400) = v117;
  *(_QWORD *)(a1 + 440) = *(_QWORD *)&v128[16];
  *(_OWORD *)(a1 + 424) = *(_OWORD *)v128;
  *(_QWORD *)(a1 + 464) = v127;
  *(__m128i *)(a1 + 448) = v126;
  *(_QWORD *)(a1 + 488) = v107.m128i_i64[0];
  *(__m128i *)(a1 + 472) = v106;
  result = v139.m128i_i64[0];
  *(_QWORD *)(a1 + 512) = v139.m128i_i64[0];
  *(__m128i *)(a1 + 496) = v138;
  if ( v135.m128i_i64[0] != -1 )
  {
    if ( v135.m128i_i64[0] )
      return sub_140001660(v135.m128i_i64[1], v135.m128i_i64[0], 1);
  }
  return result;
}
