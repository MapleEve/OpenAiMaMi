// win 1.2.7 | module src/core/relay/codex_project_state.rs | ea 0x140f65be0 | name sub_140F65BE0
// win 1.2.7 | module src/core/relay/codex_project_state.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F65BE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __m128i v9; // xmm0
  __int64 v10; // rsi
  unsigned __int64 v11; // r15
  unsigned __int128 v12; // kr20_16
  unsigned __int64 v13; // rdx
  __int64 v14; // r14
  __m128i v15; // xmm6
  __int64 v16; // rax
  _OWORD *v17; // rcx
  __m128i *v18; // rax
  _OWORD *v19; // rcx
  __m128i *v20; // rax
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // r12
  __int64 v25; // r13
  __int64 v26; // r15
  int v27; // eax
  unsigned __int8 v28; // cl
  bool v29; // cf
  __int64 v30; // r14
  unsigned __int64 j; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // r12
  unsigned __int64 v35; // r13
  __int64 v36; // r15
  int v37; // eax
  char v38; // cl
  __int64 v39; // r15
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // r13
  unsigned __int64 v44; // rdi
  __int64 v45; // r12
  int v46; // eax
  char v47; // cl
  __int64 v48; // rax
  void *v49; // rcx
  __int64 v50; // r14
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // r12
  unsigned __int64 v55; // r13
  __int64 v56; // r15
  int v57; // eax
  char v58; // cl
  __int64 v59; // rax
  void *v60; // rdi
  __m128i v61; // xmm0
  __int64 v62; // r13
  unsigned __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rcx
  __m128i si128; // xmm0
  int v67; // eax
  __int128 v68; // rax
  unsigned __int64 v69; // rsi
  unsigned __int64 v70; // rbx
  __int64 v71; // r12
  __int64 v72; // rsi
  __int64 v73; // r14
  __int64 v74; // r13
  int v75; // eax
  __int64 v76; // rbx
  const __m128i *v77; // r12
  unsigned __int64 v78; // rbx
  __int64 v79; // rsi
  __int64 v80; // rsi
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // r8
  __int128 v84; // krB0_16
  __int64 v85; // rsi
  __int64 v86; // rbx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rsi
  __int64 v90; // rax
  __int64 v91; // rcx
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // rax
  __int64 v94; // rsi
  __int64 v95; // r13
  unsigned __int64 v96; // r12
  __int64 v97; // r15
  int v98; // eax
  char v99; // cl
  __int64 v100; // r9
  __int64 v101; // rsi
  __int64 v102; // rbx
  __int64 i; // rax
  __int64 v104; // rdx
  __int64 v105; // r12
  __int64 v106; // rax
  __int64 v107; // [rsp+20h] [rbp-60h]
  __int64 v108; // [rsp+28h] [rbp-58h]
  __int128 v109; // [rsp+38h] [rbp-48h] BYREF
  __int64 v110; // [rsp+48h] [rbp-38h]
  __m128i v111; // [rsp+50h] [rbp-30h] BYREF
  __int64 v112; // [rsp+60h] [rbp-20h]
  _OWORD v113[7]; // [rsp+70h] [rbp-10h] BYREF
  _QWORD v114[2]; // [rsp+E8h] [rbp+68h] BYREF
  _QWORD v115[2]; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v116; // [rsp+108h] [rbp+88h] BYREF
  __int128 v117; // [rsp+110h] [rbp+90h]
  _QWORD v118[3]; // [rsp+120h] [rbp+A0h] BYREF
  _QWORD v119[3]; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v120; // [rsp+150h] [rbp+D0h]
  __int64 v121; // [rsp+158h] [rbp+D8h]
  __int64 v122; // [rsp+160h] [rbp+E0h]
  __m128i v123; // [rsp+168h] [rbp+E8h] BYREF
  __int64 v124; // [rsp+178h] [rbp+F8h]
  __m128i v125; // [rsp+180h] [rbp+100h] BYREF
  __int64 v126; // [rsp+190h] [rbp+110h]
  __int64 v127; // [rsp+198h] [rbp+118h] BYREF
  __int64 v128; // [rsp+1A0h] [rbp+120h]
  __int64 v129; // [rsp+1A8h] [rbp+128h]
  _BYTE *v130; // [rsp+1B0h] [rbp+130h] BYREF
  _QWORD v131[3]; // [rsp+1B8h] [rbp+138h] BYREF
  _BYTE v132[48]; // [rsp+1D0h] [rbp+150h] BYREF
  __m128i v133; // [rsp+200h] [rbp+180h]
  unsigned __int64 v134; // [rsp+210h] [rbp+190h] BYREF
  __int64 v135; // [rsp+218h] [rbp+198h]
  __int64 v136; // [rsp+220h] [rbp+1A0h]
  _BYTE *v137; // [rsp+228h] [rbp+1A8h] BYREF
  __int64 v138; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v139; // [rsp+238h] [rbp+1B8h]
  __int64 v140; // [rsp+240h] [rbp+1C0h]
  __int64 v141; // [rsp+248h] [rbp+1C8h]
  __int64 v142; // [rsp+250h] [rbp+1D0h]
  __int64 v143; // [rsp+258h] [rbp+1D8h]
  unsigned __int64 v144; // [rsp+260h] [rbp+1E0h]
  __int64 v145; // [rsp+268h] [rbp+1E8h] BYREF
  __int64 v146; // [rsp+270h] [rbp+1F0h]
  __int64 v147; // [rsp+278h] [rbp+1F8h]
  __int64 v148; // [rsp+280h] [rbp+200h]
  __int64 v149; // [rsp+288h] [rbp+208h]
  _BYTE *v150; // [rsp+290h] [rbp+210h]
  unsigned __int64 v151; // [rsp+298h] [rbp+218h]
  __m256i v152; // [rsp+2A0h] [rbp+220h] BYREF
  __m128i v153; // [rsp+2C0h] [rbp+240h]
  __m128i v154; // [rsp+2D0h] [rbp+250h]
  _BYTE v155[80]; // [rsp+2E0h] [rbp+260h] BYREF
  __int128 v156; // [rsp+330h] [rbp+2B0h]
  __int128 v157; // [rsp+340h] [rbp+2C0h]
  __int64 v158; // [rsp+358h] [rbp+2D8h]
  __int64 v159; // [rsp+360h] [rbp+2E0h]
  unsigned __int64 v160; // [rsp+368h] [rbp+2E8h]
  char v161; // [rsp+376h] [rbp+2F6h]
  char v162; // [rsp+377h] [rbp+2F7h]
  __int64 v163; // [rsp+378h] [rbp+2F8h]
  char v164; // [rsp+385h] [rbp+305h]
  char v165; // [rsp+386h] [rbp+306h]
  char v166; // [rsp+387h] [rbp+307h]
  __int64 v167; // [rsp+388h] [rbp+308h]

  v167 = -2;
  sub_140F63010((__int64)v155, a2);
  result = *(_QWORD *)v155;
  if ( *(_QWORD *)v155 == -1 )
  {
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 8;
    *(_QWORD *)(a1 + 56) = 0;
    *(_OWORD *)(a1 + 16) = 0;
    *(_OWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 32) = 8;
    *(_OWORD *)(a1 + 40) = 0;
    return result;
  }
  v140 = a1;
  v150 = *(_BYTE **)&v155[8];
  v139 = *(_QWORD *)v155;
  v128 = *(_QWORD *)&v155[16];
  sub_140E940E0(v155, *(_QWORD *)&v155[8], *(_QWORD *)&v155[16], 32769);
  if ( BYTE8(v157) == 0xFF )
  {
    v154 = *(__m128i *)&v155[48];
    v153 = *(__m128i *)&v155[32];
    *(_OWORD *)&v152.m256i_u64[2] = *(_OWORD *)&v155[16];
    *(__m128i *)v152.m256i_i8 = _mm_loadu_si128((const __m128i *)v155);
    nullsub_1(v8);
    v159 = sub_140001650(24, 8);
    if ( !v159 )
      sub_141938D11(8, 24);
    v130 = v150;
    v131[0] = v128;
    *(_QWORD *)v132 = &v130;
    *(_QWORD *)&v132[8] = sub_14169F630;
    *(_QWORD *)&v132[16] = &v152;
    *(_QWORD *)&v132[24] = sub_141404740;
    sub_1416ABFD0(&v109, &unk_141A630DC, v132);
    v19 = (_OWORD *)v159;
    *(_QWORD *)(v159 + 16) = v110;
    *v19 = v109;
    *(_OWORD *)&v132[8] = 0;
    v20 = (__m128i *)v140;
    *(_OWORD *)(v140 + 48) = 0;
    v20->m128i_i64[0] = 0;
    v20->m128i_i64[1] = 8;
    v20[1].m128i_i64[0] = 0;
    v20[4] = _mm_loadu_si128((const __m128i *)v132);
    v20[5].m128i_i64[0] = 0;
    v20[1].m128i_i64[1] = 1;
    v20[2].m128i_i64[0] = (__int64)v19;
    v20[2].m128i_i64[1] = 1;
    result = sub_140E96F40(&v152);
    goto LABEL_154;
  }
  v113[6] = v157;
  v113[5] = v156;
  v113[4] = *(_OWORD *)&v155[64];
  v9 = _mm_loadu_si128((const __m128i *)v155);
  v113[3] = *(_OWORD *)&v155[48];
  v113[2] = *(_OWORD *)&v155[32];
  v113[1] = *(_OWORD *)&v155[16];
  v113[0] = v9;
  sub_141403910(v155, v113, 0, 500000000);
  if ( *(_QWORD *)v155 != -1 )
    sub_140E96F40(v155);
  sub_140F63D10((__int64)v155, (__int64)v113);
  v10 = *(_QWORD *)&v155[8];
  v11 = *(_QWORD *)v155;
  v12 = *(_OWORD *)&v155[16];
  if ( *(_QWORD *)v155 != -1 )
  {
    v13 = *(_QWORD *)&v155[40];
    v14 = *(_QWORD *)&v155[32];
    v15 = _mm_loadu_si128((const __m128i *)&v155[48]);
    goto LABEL_7;
  }
  v116 = *(_QWORD *)&v155[8];
  v117 = *(_OWORD *)&v155[16];
  if ( !*(_QWORD *)&v155[8] )
  {
    v15 = 0;
    v11 = 8;
    v62 = 0;
    v163 = 8;
    v160 = 0;
    v14 = 0;
    v63 = 0;
    v10 = 0;
    v64 = 0;
    v65 = 0;
LABEL_147:
    *(_QWORD *)v155 = v64;
    *(_QWORD *)&v155[32] = v64;
    *(_QWORD *)&v155[64] = v65;
    sub_140E828B0(&v152, v155);
    for ( i = v152.m256i_i64[0]; v152.m256i_i64[0]; i = v152.m256i_i64[0] )
    {
      v104 = *(_QWORD *)(i + 24 * v152.m256i_i64[2] + 8);
      if ( v104 )
        sub_140001660(*(_QWORD *)(i + 24 * v152.m256i_i64[2] + 16), v104, 1);
      sub_140E828B0(&v152, v155);
    }
    v105 = 0;
    v102 = 0;
    if ( v62 == -1 )
      goto LABEL_163;
    goto LABEL_152;
  }
  v122 = a4;
  v121 = a3;
  v120 = *(_QWORD *)&v155[24];
  v159 = *(_QWORD *)&v155[16];
  v21 = *(_QWORD *)&v155[16];
  v151 = *(_QWORD *)&v155[8];
  while ( 1 )
  {
    v22 = v10 + 8;
    v160 = v10;
    v163 = *(unsigned __int16 *)(v10 + 274);
    v23 = 3LL * (unsigned int)(8 * v163);
    v24 = -1;
    do
    {
      if ( !v23 )
      {
        v24 = v163;
        goto LABEL_22;
      }
      v25 = v22 + 24;
      v26 = 2LL - *(_QWORD *)(v22 + 16);
      v27 = sub_1418F4B70(aId_9, *(_QWORD *)(v22 + 8));
      if ( v27 )
        v26 = v27;
      v28 = (v26 > 0) - (v26 < 0);
      ++v24;
      v23 -= 24;
      v22 = v25;
    }
    while ( v28 == 1 );
    if ( v28 != 255 )
      break;
LABEL_22:
    v29 = v21-- == 0;
    if ( v29 )
    {
LABEL_67:
      v15 = 0;
      v163 = 8;
      v69 = 0;
      v14 = 0;
      v70 = 0;
      v11 = 8;
      v62 = 0;
      v71 = 0;
      goto LABEL_146;
    }
    v10 = *(_QWORD *)(v160 + 8 * v24 + 280);
  }
  v30 = v159;
  for ( j = v151; ; j = *(_QWORD *)(v160 + 8 * v34 + 280) )
  {
    v32 = j + 8;
    v160 = j;
    v163 = *(unsigned __int16 *)(j + 274);
    v33 = 3LL * (unsigned int)(8 * v163);
    v34 = -1;
    do
    {
      if ( !v33 )
      {
        v34 = v163;
        goto LABEL_33;
      }
      v35 = v32 + 24;
      v36 = 3LL - *(_QWORD *)(v32 + 16);
      v37 = sub_1418F4B70(aCwd_3, *(_QWORD *)(v32 + 8));
      if ( v37 )
        v36 = v37;
      v38 = (v36 > 0) - (v36 < 0);
      ++v34;
      v33 -= 24;
      v32 = v35;
    }
    while ( v38 == 1 );
    if ( !v38 )
      break;
LABEL_33:
    v29 = v30-- == 0;
    if ( v29 )
      goto LABEL_67;
  }
  v39 = v159;
  v40 = v151;
  while ( 2 )
  {
    v41 = v40 + 8;
    v160 = v40;
    v163 = *(unsigned __int16 *)(v40 + 274);
    v42 = 3LL * (unsigned int)(8 * v163);
    v43 = -1;
    do
    {
      if ( !v42 )
      {
        v43 = v163;
        goto LABEL_44;
      }
      v44 = v41 + 24;
      v45 = 8LL - *(_QWORD *)(v41 + 16);
      v46 = sub_1418F4B70(&unk_141A62D7A, *(_QWORD *)(v41 + 8));
      if ( v46 )
        v45 = v46;
      v47 = (v45 > 0) - (v45 < 0);
      ++v43;
      v42 -= 24;
      v41 = v44;
    }
    while ( v47 == 1 );
    if ( !v47 )
    {
      v48 = 25;
      v49 = &unk_141A62D82;
      goto LABEL_47;
    }
LABEL_44:
    v29 = v39-- == 0;
    if ( !v29 )
    {
      v40 = *(_QWORD *)(v160 + 8 * v43 + 280);
      continue;
    }
    break;
  }
  v48 = 5;
  v49 = &unk_141A62D9B;
LABEL_47:
  v115[0] = v49;
  v115[1] = v48;
  v50 = v159;
  v51 = v151;
  while ( 2 )
  {
    v52 = v51 + 8;
    v160 = v51;
    v163 = *(unsigned __int16 *)(v51 + 274);
    v53 = 3LL * (unsigned int)(8 * v163);
    v54 = -1;
    do
    {
      if ( !v53 )
      {
        v54 = v163;
        goto LABEL_56;
      }
      v55 = v52 + 24;
      v56 = 13LL - *(_QWORD *)(v52 + 16);
      v57 = sub_1418F4B70(&unk_141A62E37, *(_QWORD *)(v52 + 8));
      if ( v57 )
        v56 = v57;
      v58 = (v56 > 0) - (v56 < 0);
      ++v54;
      v53 -= 24;
      v52 = v55;
    }
    while ( v58 == 1 );
    if ( !v58 )
    {
      v59 = 26;
      v60 = &unk_141A62E44;
      goto LABEL_59;
    }
LABEL_56:
    v29 = v50-- == 0;
    if ( !v29 )
    {
      v51 = *(_QWORD *)(v160 + 8 * v54 + 280);
      continue;
    }
    break;
  }
  v60 = &unk_141A62E7F;
  v160 = v159;
  v92 = v151;
  while ( 2 )
  {
    v93 = v92 + 8;
    v163 = v92;
    v158 = *(unsigned __int16 *)(v92 + 274);
    v94 = 3LL * (unsigned int)(8 * v158);
    v95 = -1;
    do
    {
      if ( !v94 )
      {
        v95 = v158;
        goto LABEL_127;
      }
      v96 = v93 + 24;
      v97 = 10LL - *(_QWORD *)(v93 + 16);
      v98 = sub_1418F4B70(&unk_141A62E5E, *(_QWORD *)(v93 + 8));
      if ( v98 )
        v97 = v98;
      v99 = (v97 > 0) - (v97 < 0);
      ++v95;
      v94 -= 24;
      v93 = v96;
    }
    while ( v99 == 1 );
    if ( !v99 )
    {
      v59 = 23;
      v60 = &unk_141A62E68;
      goto LABEL_59;
    }
LABEL_127:
    if ( v160 )
    {
      --v160;
      v92 = *(_QWORD *)(v163 + 8 * v95 + 280);
      continue;
    }
    break;
  }
  v59 = 1;
LABEL_59:
  v114[0] = v60;
  v114[1] = v59;
  v152.m256i_i64[0] = (__int64)v115;
  v152.m256i_i64[1] = (__int64)sub_140186EE0;
  sub_1416ABFD0(v155, &unk_141A62E80, &v152);
  v158 = *(_QWORD *)&v155[8];
  v163 = *(_QWORD *)v155;
  sub_140EC0780(v155, v113, *(_QWORD *)&v155[8], *(_QWORD *)&v155[16]);
  v152 = *(__m256i *)&v155[8];
  v153 = *(__m128i *)&v155[40];
  v154 = *(__m128i *)&v155[56];
  if ( *(_DWORD *)v155 != 1 )
  {
    si128 = _mm_load_si128((const __m128i *)&v152);
    v133 = v154;
    *(__m128i *)&v132[32] = v153;
    *(_OWORD *)&v132[16] = *(_OWORD *)&v152.m256i_u64[2];
    *(__m128i *)v132 = si128;
    v67 = sub_1417A9630(v154.m128i_i64[1]);
    if ( v67 )
    {
      *(_OWORD *)v155 = 0x8000000000000013uLL;
      *(_QWORD *)&v155[16] = v67;
LABEL_71:
      sub_140E970D0(v132);
      goto LABEL_72;
    }
    v130 = v132;
    v131[0] = 0;
    sub_140F9AB20(v155, &v130);
    *(_QWORD *)&v68 = *(_QWORD *)v155;
    if ( *(_QWORD *)v155 == -1 )
    {
      *((_QWORD *)&v68 + 1) = v131;
      if ( v131[0] )
      {
        sub_14018EA70(v155, v131, 0, &off_141A58240);
        goto LABEL_70;
      }
      *(_QWORD *)&v68 = 0x8000000000000009uLL;
    }
    else
    {
      *((_QWORD *)&v68 + 1) = *(_QWORD *)&v155[8];
      v152 = *(__m256i *)&v155[16];
      v153 = _mm_loadu_si128((const __m128i *)&v155[48]);
    }
    *(_OWORD *)v155 = v68;
    *(__m128i *)&v155[16] = _mm_load_si128((const __m128i *)&v152);
    *(_OWORD *)&v155[32] = *(_OWORD *)&v152.m256i_u64[2];
    *(__m128i *)&v155[48] = v153;
LABEL_70:
    sub_140E96D30(&v130);
    goto LABEL_71;
  }
  v61 = _mm_load_si128((const __m128i *)&v152);
  *(__m128i *)&v155[48] = v154;
  *(__m128i *)&v155[32] = v153;
  *(_OWORD *)&v155[16] = *(_OWORD *)&v152.m256i_u64[2];
  *(__m128i *)v155 = v61;
LABEL_72:
  v73 = *(_QWORD *)&v155[8];
  v72 = *(_QWORD *)v155;
  if ( *(_QWORD *)v155 != -1 )
    sub_140E96F40(v155);
  if ( v73 <= 0 )
    v73 = 0;
  if ( v72 != -1 )
    v73 = 0;
  v160 = v73;
  if ( v163 )
    sub_140001660(v158, v163, 1);
  *(_QWORD *)v155 = v115;
  *(_QWORD *)&v155[8] = sub_140186EE0;
  *(_QWORD *)&v155[16] = v114;
  *(_QWORD *)&v155[24] = sub_140186EE0;
  sub_1416ABFD0(&v152, &unk_141A62EA6, v155);
  v142 = v152.m256i_i64[1];
  v149 = v152.m256i_i64[0];
  sub_140EC0780(v155, v113, v152.m256i_i64[1], v152.m256i_i64[2]);
  v11 = *(_QWORD *)&v155[8];
  v69 = *(_QWORD *)&v155[24];
  v71 = *(_QWORD *)&v155[16];
  v14 = *(_QWORD *)&v155[40];
  v74 = *(_QWORD *)&v155[32];
  v70 = *(_QWORD *)&v155[48];
  v15 = _mm_loadu_si128((const __m128i *)&v155[56]);
  if ( v155[0] )
    goto LABEL_143;
  *(_QWORD *)v132 = *(_QWORD *)&v155[8];
  *(_OWORD *)&v132[8] = *(_OWORD *)&v155[16];
  *(_OWORD *)&v132[24] = *(_OWORD *)&v155[32];
  *(_QWORD *)&v132[40] = *(_QWORD *)&v155[48];
  v133 = v15;
  v75 = sub_1417A9630(_mm_shuffle_epi32(v15, 238).m128i_u64[0]);
  v69 = v75;
  if ( v75 )
  {
    v71 = 0;
    v11 = 0x8000000000000013uLL;
LABEL_142:
    sub_140E970D0(v132);
LABEL_143:
    if ( v149 )
      sub_140001660(v142, v149, 1);
    v163 = v74;
    v62 = -1;
LABEL_146:
    *(_QWORD *)&v155[8] = 0;
    *(_QWORD *)&v155[16] = v151;
    *(_QWORD *)&v155[24] = v159;
    *(_QWORD *)&v155[40] = 0;
    *(_QWORD *)&v155[48] = v151;
    *(_QWORD *)&v155[56] = v159;
    v64 = 1;
    v160 = v70;
    v63 = v69;
    v10 = v71;
    v65 = v120;
    goto LABEL_147;
  }
  v145 = 0;
  v146 = 8;
  v147 = 0;
  v119[0] = 0;
  v119[2] = 0;
  v125.m128i_i64[0] = 0;
  v126 = 0;
  v127 = 0;
  v137 = v132;
  v138 = 0;
  v143 = 0;
  while ( 1 )
  {
    sub_140F9AB20(v155, &v137);
    v11 = *(_QWORD *)v155;
    if ( *(_QWORD *)v155 != -1 )
    {
      v71 = *(_QWORD *)&v155[8];
      v74 = *(_QWORD *)&v155[24];
      v69 = *(_QWORD *)&v155[16];
LABEL_131:
      v70 = *(_QWORD *)&v155[40];
      v14 = *(_QWORD *)&v155[32];
      v15 = _mm_loadu_si128((const __m128i *)&v155[48]);
LABEL_141:
      sub_140E96D30(&v137);
      sub_140DF2C10(v125.m128i_i64);
      v165 = 1;
      sub_140E8AC80(v119);
      sub_140025530(&v145);
      goto LABEL_142;
    }
    v76 = v138;
    if ( !v138 )
      break;
    sub_14018E680(v155, &v138, 0, &off_141A58258, v107, v108);
    v71 = *(_QWORD *)&v155[8];
    v11 = *(_QWORD *)v155;
    v74 = *(_QWORD *)&v155[24];
    v69 = *(_QWORD *)&v155[16];
    if ( *(_QWORD *)v155 != -1 )
      goto LABEL_131;
    v158 = *(_QWORD *)&v155[16];
    if ( (unsigned int)sub_1417A9BE0(*(_QWORD *)(v76 + 56)) < 2 )
    {
      v74 = *(_QWORD *)&v155[24];
      v69 = *(_QWORD *)&v155[16];
      v70 = *(_QWORD *)&v155[40];
      v14 = *(_QWORD *)&v155[32];
      v15 = _mm_loadu_si128((const __m128i *)&v155[48]);
      v11 = 0x800000000000000BuLL;
      if ( v71 )
        sub_140001660(v158, v71, 1);
      v71 = 1;
      goto LABEL_141;
    }
    v163 = v71;
    sub_141404CB0(&v155[8], v76, 1);
    if ( *(_QWORD *)&v155[8] < 3u
      || (sub_1416B3AE0(v155, *(_QWORD *)&v155[16], *(_QWORD *)&v155[24]), *(_DWORD *)v155 == 1) )
    {
      if ( v163 )
        sub_140001660(v158, v163, 1);
      v127 = ++v143;
    }
    else
    {
      v77 = *(const __m128i **)&v155[8];
      v78 = *(_QWORD *)&v155[16];
      sub_14072C410((unsigned int)v155, *(_DWORD *)&v155[16], 0, 1, 1);
      if ( *(_DWORD *)v155 == 1 )
        sub_141938D2B(*(_QWORD *)&v155[8], *(_QWORD *)&v155[16]);
      v148 = *(_QWORD *)&v155[8];
      v79 = *(_QWORD *)&v155[16];
      if ( v78 )
        sub_1418F44E0(*(__m128i **)&v155[16], v77, v78);
      v164 = 1;
      v141 = v79;
      sub_140F63BB0(&v134, v79, v78);
      if ( v136 )
      {
        v118[0] = v163;
        v118[1] = v158;
        v118[2] = v74;
        v162 = 1;
        sub_1416AC440(&v123, &v134);
        v161 = 1;
        sub_140E6EF30(&v152, v125.m128i_i64, v118);
        if ( v152.m256i_i64[0] == -1 )
        {
          v82 = v152.m256i_i64[1];
          v83 = 3 * v152.m256i_i64[3];
          v84 = *(_OWORD *)(v152.m256i_i64[1] + 24 * v152.m256i_i64[3] + 272);
          *(_QWORD *)(v152.m256i_i64[1] + 8 * v83 + 288) = v124;
          *(__m128i *)(v82 + 8 * v83 + 272) = _mm_loadu_si128(&v123);
          if ( (unsigned __int64)(v84 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            sub_140001660(*((_QWORD *)&v84 + 1), v84, 1);
        }
        else
        {
          *(_QWORD *)&v155[48] = v154.m128i_i64[0];
          *(__m128i *)&v155[32] = v153;
          *(__m256i *)v155 = v152;
          v112 = v124;
          v111 = _mm_loadu_si128(&v123);
          v161 = 0;
          sub_140E62D00(&v130, v155, &v111);
        }
        v85 = v135;
        v86 = v136;
        v166 = 1;
        if ( (unsigned __int8)sub_140F65880(v135, v136)
          || (v166 = 1, sub_1416AC440(v155, &v134), v166 = 1, (unsigned __int8)sub_140E71C90(v119, v155)) )
        {
          if ( v134 )
            sub_140001660(v85, v134, 1);
          v87 = v148;
          v88 = v141;
          if ( v148 )
            goto LABEL_109;
        }
        else
        {
          v129 = v85;
          v144 = v134;
          v89 = v147;
          if ( v147 == v145 )
            sub_14190FDC0(&v145);
          v90 = v146;
          v91 = 3 * v89;
          *(_QWORD *)(v146 + 8 * v91) = v144;
          *(_QWORD *)(v90 + 8 * v91 + 8) = v129;
          *(_QWORD *)(v90 + 8 * v91 + 16) = v86;
          v147 = v89 + 1;
          v87 = v148;
          v88 = v141;
          if ( v148 )
LABEL_109:
            sub_140001660(v88, v87, 1);
        }
      }
      else
      {
        v80 = v163;
        v81 = v148;
        if ( v134 )
          sub_140001660(v135, v134, 1);
        if ( v81 )
          sub_140001660(v141, v81, 1);
        if ( v80 )
          sub_140001660(v158, v80, 1);
      }
    }
  }
  sub_140E96D30(&v137);
  v100 = v159;
  if ( v143 && *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    v152.m256i_i64[0] = (__int64)&v127;
    v152.m256i_i64[1] = (__int64)sub_1416BCB10;
    *(_QWORD *)v155 = aCodexmateLibCo_45;
    *(_QWORD *)&v155[8] = 47;
    *(_QWORD *)&v155[16] = aCodexmateLibCo_45;
    *(_QWORD *)&v155[24] = 47;
    *(_QWORD *)&v155[32] = &off_141A62F58;
    v101 = v159;
    sub_140BAD520(&unk_141A62EF9, &v152, 2, v155);
    v100 = v101;
  }
  sub_140F643B0((__int64)v155, (unsigned __int64)v113, v151, v100, v121, v122);
  if ( *(_QWORD *)v155 == -1 )
  {
    v102 = *(_QWORD *)&v155[24];
    sub_140025A00(&v155[8]);
  }
  else
  {
    *(__m128i *)v152.m256i_i8 = _mm_loadu_si128((const __m128i *)v155);
    v154 = *(__m128i *)&v155[48];
    v153 = *(__m128i *)&v155[32];
    *(_OWORD *)&v152.m256i_u64[2] = *(_OWORD *)&v155[16];
    if ( v152.m256i_i64[0] == -1 )
    {
      v102 = v152.m256i_i64[1];
    }
    else
    {
      sub_140E96F40(&v152);
      v102 = 0;
    }
  }
  v62 = v145;
  v11 = v146;
  v10 = v147;
  v15 = _mm_load_si128(&v125);
  v105 = v126;
  v165 = 0;
  sub_140E8AC80(v119);
  sub_140E970D0(v132);
  if ( v149 )
    sub_140001660(v142, v149, 1);
  sub_140E8AC80(&v116);
  v163 = 8;
  v63 = 0;
  v14 = 0;
  if ( v62 != -1 )
  {
LABEL_152:
    v106 = v140;
    *(_QWORD *)v140 = v62;
    *(_QWORD *)(v106 + 8) = v11;
    *(_QWORD *)(v106 + 16) = v10;
    *(_QWORD *)(v106 + 24) = v63;
    *(_QWORD *)(v106 + 32) = v163;
    *(_QWORD *)(v106 + 40) = v14;
    *(_QWORD *)(v106 + 48) = v160;
    *(__m128i *)(v106 + 56) = v15;
    *(_QWORD *)(v106 + 72) = v105;
    *(_QWORD *)(v106 + 80) = v102;
    goto LABEL_153;
  }
LABEL_163:
  v13 = v160;
  v12 = __PAIR128__(v163, v63);
LABEL_7:
  *(_QWORD *)v155 = v11;
  *(_QWORD *)&v155[8] = v10;
  *(_OWORD *)&v155[16] = v12;
  *(_QWORD *)&v155[32] = v14;
  *(_QWORD *)&v155[40] = v13;
  *(__m128i *)&v155[48] = v15;
  nullsub_1(*((_QWORD *)&v12 + 1));
  v16 = sub_140001650(24, 8);
  if ( !v16 )
    sub_141938D11(8, 24);
  v159 = v16;
  v130 = v150;
  v131[0] = v128;
  v152.m256i_i64[0] = (__int64)&v130;
  v152.m256i_i64[1] = (__int64)sub_14169F630;
  v152.m256i_i64[2] = (__int64)v155;
  v152.m256i_i64[3] = (__int64)sub_141404740;
  sub_1416ABFD0(v132, &unk_141A5707C, &v152);
  v17 = (_OWORD *)v159;
  *(_QWORD *)(v159 + 16) = *(_QWORD *)&v132[16];
  *v17 = *(_OWORD *)v132;
  *(_OWORD *)&v152.m256i_u64[1] = 0;
  v18 = (__m128i *)v140;
  *(_OWORD *)(v140 + 48) = 0;
  v18->m128i_i64[0] = 0;
  v18->m128i_i64[1] = 8;
  v18[1].m128i_i64[0] = 0;
  v18[4] = _mm_loadu_si128((const __m128i *)&v152);
  v18[5].m128i_i64[0] = 0;
  v18[1].m128i_i64[1] = 1;
  v18[2].m128i_i64[0] = (__int64)v17;
  v18[2].m128i_i64[1] = 1;
  sub_140E96F40(v155);
LABEL_153:
  result = sub_140E963A0(v113);
LABEL_154:
  if ( v139 )
    return sub_140001660(v150, v139, 1);
  return result;
}
