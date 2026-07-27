// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
// 1.2.3 win delta | invariants_strip_invalid_router | changelog ②关闭路由修复 (win-native 锚点逆)
__int64 __fastcall sub_14047B4A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v8; // rbx
  int v9; // r15d
  int v10; // ebx
  __int64 v11; // r10
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  int v14; // r9d
  char v15; // r11
  char v16; // si
  __int64 v17; // r10
  int v18; // esi
  int v19; // r11d
  __int64 v20; // rsi
  __m128i si128; // xmm6
  unsigned __int64 v22; // rcx
  __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rsi
  int v32; // eax
  int v33; // r12d
  int v34; // ebx
  __int64 v35; // r15
  unsigned __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  __m128i *v41; // rsi
  bool v42; // zf
  __m128i v43; // rax
  unsigned __int64 v44; // r15
  __m128i v45; // xmm0
  __m128i v46; // xmm1
  __m128i v47; // xmm2
  unsigned __int8 *v48; // rbx
  __int64 v49; // r12
  void *v50; // rax
  __int64 v51; // rcx
  unsigned __int64 v52; // r12
  char *v53; // r12
  unsigned __int64 v54; // rsi
  int v55; // r14d
  int v56; // ecx
  int v57; // r8d
  int v58; // r14d
  unsigned __int8 v59; // dl
  __m128i v60; // xmm1
  __m128i v61; // xmm2
  __int64 v62; // r14
  char v63; // r15
  char v64; // r12
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rax
  unsigned __int64 v74; // rdx
  char v75; // al
  __int16 v76; // dx
  __m128i v77; // xmm1
  __m128i v78; // xmm2
  __m128i v80; // [rsp+30h] [rbp-50h] BYREF
  __m128i v81; // [rsp+40h] [rbp-40h]
  __m128i v82; // [rsp+50h] [rbp-30h]
  __int128 v83; // [rsp+60h] [rbp-20h]
  __int128 v84; // [rsp+70h] [rbp-10h]
  __int128 v85; // [rsp+80h] [rbp+0h]
  __int64 v86; // [rsp+90h] [rbp+10h]
  __int128 v87; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v88; // [rsp+B0h] [rbp+30h]
  __int128 v89; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v90; // [rsp+C8h] [rbp+48h]
  __m128i v91; // [rsp+D0h] [rbp+50h]
  __int64 v92; // [rsp+E0h] [rbp+60h]
  __int64 v93; // [rsp+F0h] [rbp+70h]
  __int64 v94; // [rsp+F8h] [rbp+78h]
  __int64 v95; // [rsp+100h] [rbp+80h]
  __int64 v96; // [rsp+108h] [rbp+88h]
  __int64 v97; // [rsp+110h] [rbp+90h]
  _QWORD v98[3]; // [rsp+118h] [rbp+98h] BYREF
  __m128i v99; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v100; // [rsp+140h] [rbp+C0h]
  __int64 v101; // [rsp+148h] [rbp+C8h]
  __int64 v102; // [rsp+150h] [rbp+D0h]
  __int64 v103; // [rsp+158h] [rbp+D8h]
  __int64 v104; // [rsp+160h] [rbp+E0h]
  __int64 v105; // [rsp+168h] [rbp+E8h]
  __int64 v106; // [rsp+170h] [rbp+F0h]
  unsigned __int64 v107; // [rsp+178h] [rbp+F8h]
  __int64 v108; // [rsp+180h] [rbp+100h]
  __int64 v109; // [rsp+188h] [rbp+108h] BYREF
  __int64 v110; // [rsp+190h] [rbp+110h]
  __int64 v111; // [rsp+198h] [rbp+118h]
  __m128i v112; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v113; // [rsp+1B0h] [rbp+130h] BYREF
  __m128i v114; // [rsp+1C0h] [rbp+140h] BYREF
  int v115; // [rsp+1D8h] [rbp+158h]
  int v116; // [rsp+1DCh] [rbp+15Ch]
  int v117; // [rsp+1E0h] [rbp+160h]
  int v118; // [rsp+1E4h] [rbp+164h]
  __m128i v119; // [rsp+1E8h] [rbp+168h] BYREF
  __int64 v120; // [rsp+1F8h] [rbp+178h]
  __m128i v121; // [rsp+200h] [rbp+180h] BYREF
  __m128i v122; // [rsp+210h] [rbp+190h] BYREF
  __m128i v123; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v124; // [rsp+230h] [rbp+1B0h]
  __int128 v125; // [rsp+240h] [rbp+1C0h]
  __int128 v126; // [rsp+250h] [rbp+1D0h]
  __int64 v127; // [rsp+260h] [rbp+1E0h]
  __int64 v128; // [rsp+270h] [rbp+1F0h]
  char v129; // [rsp+27Fh] [rbp+1FFh]
  char v130; // [rsp+280h] [rbp+200h]
  char v131; // [rsp+281h] [rbp+201h]
  char v132; // [rsp+282h] [rbp+202h]
  char v133; // [rsp+283h] [rbp+203h]
  char v134; // [rsp+284h] [rbp+204h]
  char v135; // [rsp+285h] [rbp+205h]
  char v136; // [rsp+286h] [rbp+206h]
  char v137; // [rsp+287h] [rbp+207h]
  __int64 v138; // [rsp+288h] [rbp+208h]

  v138 = -2; /*0x14047b4c3*/
  v5 = a4; /*0x14047b4ce*/
  v128 = a3; /*0x14047b4ee*/
  sub_14040E250((unsigned int)v98, a3, a4, (unsigned int)aModel_1, 5); /*0x14047b4fb*/
  if ( v98[0] == -1 || (v136 = 1, sub_14149C500(&v121, v98), v121.m128i_i64[0] == -1) ) /*0x14047b530*/
  {
    v136 = 1; /*0x14047b557*/
    sub_14040D450(&v99, v128, v5); /*0x14047b56f*/
  }
  else
  {
    v99 = v121; /*0x14047b540*/
    v100 = v122.m128i_i64[0]; /*0x14047b54e*/
  }
  v135 = 1; /*0x14047b575*/
  sub_14040E250((unsigned int)&v109, v128, v5, (unsigned int)&unk_141758B54, 18); /*0x14047b59d*/
  v101 = v109; /*0x14047b5ad*/
  if ( !a2 || v109 == -1 ) /*0x14047b5ba*/
  {
    if ( v109 == -1 ) /*0x14047b5e9*/
    {
      v9 = 0; /*0x14047b705*/
      v10 = 0; /*0x14047b708*/
      goto LABEL_11; /*0x14047b70a*/
    }
    v4 = v110; /*0x14047b5ef*/
    v8 = v111; /*0x14047b5f6*/
    v9 = 0; /*0x14047b5fd*/
  }
  else
  {
    v4 = v110; /*0x14047b5bc*/
    v8 = v111; /*0x14047b5c3*/
    v137 = 1; /*0x14047b5ca*/
    v9 = sub_140413AF0(a2, v110, v111); /*0x14047b5e0*/
  }
  v137 = 1; /*0x14047b600*/
  v10 = sub_1404E1D70(aCodexRouterCat_0, 25, v4, v8); /*0x14047b61f*/
LABEL_11:
  v137 = 1; /*0x14047b621*/
  sub_14040E250((unsigned int)&v121, v128, v5, (unsigned int)&unk_141758B7F, 15); /*0x14047b649*/
  if ( v121.m128i_i64[0] == -1 ) /*0x14047b65a*/
  {
    LODWORD(v4) = 0; /*0x14047b701*/
  }
  else
  {
    v11 = v122.m128i_i64[0]; /*0x14047b667*/
    do /*0x14047b6f0*/
    {
      while ( 1 ) /*0x14047b67d*/
      {
        if ( !v11 ) /*0x14047b680*/
          goto LABEL_24; /*0x14047b680*/
        v12 = v11; /*0x14047b682*/
        v13 = v121.m128i_i64[1] + v11; /*0x14047b685*/
        v14 = *(char *)(v121.m128i_i64[1] + v11 - 1); /*0x14047b689*/
        if ( v14 < 0 ) /*0x14047b691*/
          break; /*0x14047b691*/
        --v11; /*0x14047b674*/
        if ( v14 != 47 ) /*0x14047b67b*/
          goto LABEL_23; /*0x14047b67b*/
      }
      v15 = *(_BYTE *)(v13 - 2); /*0x14047b693*/
      if ( v15 >= -64 ) /*0x14047b69c*/
      {
        v17 = v13 - 2; /*0x14047b6bf*/
        v19 = v15 & 0x1F; /*0x14047b6c3*/
      }
      else
      {
        v16 = *(_BYTE *)(v13 - 3); /*0x14047b69e*/
        if ( v16 >= -64 ) /*0x14047b6a7*/
        {
          v17 = v13 - 3; /*0x14047b6c9*/
          v18 = v16 & 0xF; /*0x14047b6cd*/
        }
        else
        {
          v17 = v13 - 4; /*0x14047b6a9*/
          LODWORD(v4) = (*(_BYTE *)(v13 - 4) & 7) << 6; /*0x14047b6b5*/
          v18 = v4 | v16 & 0x3F; /*0x14047b6bb*/
        }
        v19 = (v18 << 6) | v15 & 0x3F; /*0x14047b6d7*/
      }
      v11 = v17 - v121.m128i_i64[1]; /*0x14047b6e9*/
    }
    while ( ((v19 << 6) | v14 & 0x3F) == 0x2F ); /*0x14047b6f0*/
LABEL_23:
    if ( v12 < 0x10 ) /*0x14047b6f6*/
    {
LABEL_24:
      LODWORD(v4) = 0; /*0x14047b6f8*/
      if ( !v121.m128i_i64[0] ) /*0x14047b6fd*/
        goto LABEL_30; /*0x14047b6fd*/
      goto LABEL_29; /*0x14047b6fd*/
    }
    LOBYTE(v4) = _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v13 - 16)), (__m128i)xmmword_141748EF0)) == 0xFFFF; /*0x14047b726*/
    if ( !v121.m128i_i64[0] ) /*0x14047b72d*/
      goto LABEL_30; /*0x14047b72d*/
LABEL_29:
    sub_140001660(v121.m128i_i64[1], v121.m128i_i64[0], 1); /*0x14047b72f*/
  }
LABEL_30:
  v137 = 1; /*0x14047b73a*/
  sub_14040E250((unsigned int)&v89, v128, v5, (unsigned int)&unk_141758B9E, 14); /*0x14047b75f*/
  v133 = 1; /*0x14047b765*/
  v20 = v128; /*0x14047b780*/
  sub_14040E250((unsigned int)&v87, v128, v5, (unsigned int)&unk_141758BAC, 7); /*0x14047b78d*/
  v115 = v4; /*0x14047b793*/
  v102 = v98[0]; /*0x14047b7a0*/
  v104 = v98[1]; /*0x14047b7ae*/
  v94 = v98[2]; /*0x14047b7bc*/
  v105 = v99.m128i_i64[1]; /*0x14047b7d5*/
  v103 = v99.m128i_i64[0]; /*0x14047b7d5*/
  v95 = v100; /*0x14047b7e3*/
  v106 = v110; /*0x14047b7f1*/
  v93 = v111; /*0x14047b7ff*/
  v129 = sub_1404E1D70(aAimamiCodexRou, 19, v20, v5); /*0x14047b81a*/
  v130 = sub_1404E1D70(aAimamiRelayCod, 29, v20, v5); /*0x14047b837*/
  v131 = sub_1404E1D70(aCodexRouterCat_0, 25, v20, v5); /*0x14047b854*/
  v132 = sub_1404E1D70(aCodexRouterV1_0, 16, v20, v5); /*0x14047b871*/
  v116 = sub_14040A3A0(v20, v5) & 0xFFFFFF; /*0x14047b888*/
  v112.m128i_i64[0] = 0; /*0x14047b88e*/
  v112.m128i_i64[1] = 8; /*0x14047b899*/
  *(_QWORD *)&v113 = 0; /*0x14047b8a4*/
  v121.m128i_i64[0] = 0; /*0x14047b8af*/
  v121.m128i_i64[1] = v5; /*0x14047b8ba*/
  v122.m128i_i64[0] = v20; /*0x14047b8c8*/
  v122.m128i_i64[1] = v5; /*0x14047b8cf*/
  v123.m128i_i64[0] = 0; /*0x14047b8d6*/
  v123.m128i_i64[1] = v5; /*0x14047b8e1*/
  *(_QWORD *)&v124 = 0xA0000000ALL; /*0x14047b8f2*/
  BYTE8(v124) = 1; /*0x14047b8f9*/
  LOWORD(v125) = 0; /*0x14047b900*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_141748EC0); /*0x14047b90f*/
  do /*0x14047bbff*/
  {
    while ( 1 ) /*0x14047b94f*/
    {
      v23 = v122.m128i_i64[0]; /*0x14047b94f*/
      sub_1404E06C0(&v80, &v122); /*0x14047b95c*/
      if ( v80.m128i_i32[0] == 1 ) /*0x14047b966*/
      {
        v25 = v121.m128i_i64[0]; /*0x14047b96c*/
        v121.m128i_i64[0] = v81.m128i_i64[0]; /*0x14047b973*/
        v24 = v81.m128i_i64[0] - v25; /*0x14047b97a*/
        v26 = v25 + v23; /*0x14047b97d*/
        if ( v81.m128i_i64[0] == v25 ) /*0x14047b983*/
          goto LABEL_45; /*0x14047b983*/
      }
      else
      {
        if ( BYTE1(v125) ) /*0x14047b997*/
          goto LABEL_71; /*0x14047b997*/
        BYTE1(v125) = 1; /*0x14047b99d*/
        v24 = v121.m128i_i64[1] - v121.m128i_i64[0]; /*0x14047b9b2*/
        if ( ((unsigned __int8)v125 | (v121.m128i_i64[1] != v121.m128i_i64[0])) != 1 ) /*0x14047b9c0*/
          goto LABEL_71; /*0x14047b9c0*/
        v26 = v122.m128i_i64[0] + v121.m128i_i64[0]; /*0x14047b9c6*/
        if ( !v24 ) /*0x14047b9d0*/
          goto LABEL_45; /*0x14047b9d0*/
      }
      if ( *(_BYTE *)(v26 + v24 - 1) == 10 ) /*0x14047b9d7*/
      {
        if ( v24 != 1 ) /*0x14047b9df*/
        {
          if ( *(_BYTE *)(v26 + v24 - 2) == 13 ) /*0x14047b9e6*/
          {
            v27 = sub_14033BC10(v26, v24 - 2); /*0x14047b9ef*/
            if ( !v24 ) /*0x14047b9f7*/
              goto LABEL_32; /*0x14047b9f7*/
          }
          else
          {
            v27 = sub_14033BC10(v26, v24 - 1); /*0x14047ba55*/
            if ( !v24 ) /*0x14047ba5d*/
              goto LABEL_32; /*0x14047ba5d*/
          }
          goto LABEL_46; /*0x14047b9f7*/
        }
        v24 = 0; /*0x14047b9fe*/
      }
LABEL_45:
      v27 = sub_14033BC10(v26, v24); /*0x14047ba00*/
      if ( !v24 ) /*0x14047ba0b*/
        goto LABEL_32; /*0x14047ba0b*/
LABEL_46:
      if ( *(_BYTE *)v27 != 91 || *(_BYTE *)(v27 + v24 - 1) != 93 ) /*0x14047ba1f*/
        goto LABEL_32; /*0x14047ba1f*/
      if ( v24 == 1 || *(char *)(v27 + 1) <= -65 ) /*0x14047ba33*/
        sub_1416C2F60(v27, v24, 1, v24 - 1, (__int64)&off_141782B88); /*0x14047c3ba*/
      v22 = v24 - 2; /*0x14047ba39*/
      if ( v24 - 2 >= 0x10 ) /*0x14047ba41*/
      {
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v27 + 1)), si128)) == 0xFFFF ) /*0x14047ba77*/
        {
          v28 = v24 - 18; /*0x14047baa6*/
          v29 = v27 + 17; /*0x14047baaa*/
          goto LABEL_59; /*0x14047baaa*/
        }
      }
      else if ( v22 < 9 ) /*0x14047ba47*/
      {
        goto LABEL_32; /*0x14047ba47*/
      }
      v22 = *(_QWORD *)(v27 + 1) ^ 0x73656C69666F7270LL; /*0x14047ba87*/
      if ( v22 | *(unsigned __int8 *)(v27 + 9) ^ 0x2ELL ) /*0x14047ba93*/
        goto LABEL_32; /*0x14047ba96*/
      v28 = v24 - 11; /*0x14047ba9c*/
      v29 = v27 + 10; /*0x14047baa0*/
LABEL_59:
      v30 = sub_14033BE90(v29, v28, 34); /*0x14047baae*/
      v31 = v30; /*0x14047babd*/
      if ( v24 == 12 ) /*0x14047bac4*/
      {
        v22 = *(_QWORD *)v30 ^ 0x725F696D616D6961LL | *(_DWORD *)(v30 + 8) ^ 0x79616C65u; /*0x14047b933*/
        if ( !v22 ) /*0x14047b936*/
          break; /*0x14047b936*/
        goto LABEL_32; /*0x14047b936*/
      }
      if ( v24 >= 0xD ) /*0x14047bace*/
      {
        v22 = *(_QWORD *)v30 ^ 0x725F696D616D6961LL | *(_QWORD *)(v30 + 5) ^ 0x5F79616C65725F69LL; /*0x14047bae5*/
        if ( !v22 ) /*0x14047bae8*/
          break; /*0x14047bae8*/
      }
      if ( v24 == 6 ) /*0x14047baee*/
      {
        v32 = *(_DWORD *)"aimai1" ^ *(_DWORD *)v30; /*0x14047bb32*/
        v22 = v32 | (unsigned int)(unsigned __int16)(*(_WORD *)"i1" ^ *(_WORD *)(v31 + 4)); /*0x14047bb46*/
        if ( !(v32 | (unsigned __int16)(*(_WORD *)"i1" ^ *(_WORD *)(v31 + 4))) ) /*0x14047bb46*/
          break; /*0x14047bb48*/
      }
      else if ( v24 == 19 /*0x14047bb28*/
             && _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(
                      _mm_loadu_si128((const __m128i *)((char *)&xmmword_141753525 + 3)),
                      _mm_loadu_si128((const __m128i *)(v30 + 3))),
                    _mm_cmpeq_epi8(
                      _mm_loadu_si128((const __m128i *)v30),
                      _mm_loadu_si128((const __m128i *)&xmmword_141753525)))) == 0xFFFF )
      {
        break; /*0x14047bb28*/
      }
LABEL_32:
      if ( (BYTE1(v125) & 1) != 0 ) /*0x14047b949*/
        goto LABEL_71; /*0x14047b949*/
    }
    v97 = v5; /*0x14047bb4e*/
    v33 = v10; /*0x14047bb55*/
    v34 = v9; /*0x14047bb58*/
    v35 = a1; /*0x14047bb5b*/
    v36 = v24; /*0x14047bb5e*/
    nullsub_1(); /*0x14047bb61*/
    v37 = sub_140001650(v36, 1); /*0x14047bb6e*/
    if ( !v37 ) /*0x14047bb76*/
      sub_1416C2D4B(1, v36); /*0x14047c3ca*/
    v108 = v37; /*0x14047bb7c*/
    v107 = v36; /*0x14047bb89*/
    sub_141684120(v37, v31, v36); /*0x14047bb93*/
    v38 = v113; /*0x14047bb98*/
    if ( (_QWORD)v113 == v112.m128i_i64[0] ) /*0x14047bba6*/
      sub_141689AB0(&v112); /*0x14047bbaf*/
    v39 = v112.m128i_i64[1]; /*0x14047bbb5*/
    v22 = 3 * v38; /*0x14047bbbc*/
    v24 = v107; /*0x14047bbc0*/
    *(_QWORD *)(v112.m128i_i64[1] + 8 * v22) = v107; /*0x14047bbc7*/
    *(_QWORD *)(v39 + 8 * v22 + 8) = v108; /*0x14047bbd2*/
    *(_QWORD *)(v39 + 8 * v22 + 16) = v24; /*0x14047bbd7*/
    *(_QWORD *)&v113 = v38 + 1; /*0x14047bbdf*/
    a1 = v35; /*0x14047bbe6*/
    v9 = v34; /*0x14047bbe9*/
    v10 = v33; /*0x14047bbec*/
    v5 = v97; /*0x14047bbef*/
  }
  while ( (BYTE1(v125) & 1) == 0 ); /*0x14047bbff*/
LABEL_71:
  v91 = _mm_loadu_si128(&v112); /*0x14047bc05*/
  v92 = v113; /*0x14047bc19*/
  v40 = sub_141470CD0(v22, v24); /*0x14047bc1d*/
  v41 = (__m128i *)v40; /*0x14047bc23*/
  v42 = *(_BYTE *)(v40 + 16) == 1; /*0x14047bc26*/
  v96 = a1; /*0x14047bc2a*/
  v117 = v9; /*0x14047bc31*/
  v118 = v10; /*0x14047bc38*/
  if ( v42 ) /*0x14047bc3e*/
  {
    v43 = *(__m128i *)v40; /*0x14047bc44*/
  }
  else
  {
    v43.m128i_i64[0] = sub_141486EF0(); /*0x14047c330*/
    *v41 = v43; /*0x14047c336*/
    v41[1].m128i_i8[0] = 1; /*0x14047c33d*/
  }
  v41->m128i_i64[0] = v43.m128i_i64[0] + 1; /*0x14047bc4f*/
  v113 = xmmword_141757120; /*0x14047bc59*/
  v112 = _mm_loadu_si128((const __m128i *)&off_141757110); /*0x14047bc68*/
  v114 = v43; /*0x14047bc70*/
  v44 = v5; /*0x14047bc9c*/
  sub_1414A2990((unsigned int)&v121, v128, v5, (unsigned int)"aimami_relay_", 13); /*0x14047bca2*/
  v86 = v127; /*0x14047bcaf*/
  v85 = v126; /*0x14047bcba*/
  v84 = v125; /*0x14047bcc5*/
  v45 = _mm_loadu_si128(&v121); /*0x14047bcc9*/
  v46 = _mm_loadu_si128(&v122); /*0x14047bcd1*/
  v47 = _mm_loadu_si128(&v123); /*0x14047bcd9*/
  v83 = v124; /*0x14047bce8*/
  v82 = v47; /*0x14047bcec*/
  v81 = v46; /*0x14047bcf1*/
  v80 = v45; /*0x14047bcf6*/
  v48 = (unsigned __int8 *)(v128 + v5); /*0x14047bd02*/
  while ( 2 ) /*0x14047bd55*/
  {
    sub_1404E2200(&v121, &v80); /*0x14047bd55*/
    if ( v121.m128i_i32[0] == 1 ) /*0x14047bd68*/
    {
      v49 = v121.m128i_i64[1]; /*0x14047bd6e*/
      nullsub_1(); /*0x14047bd75*/
      v50 = (void *)sub_140001650(13, 1); /*0x14047bd84*/
      v51 = v128; /*0x14047bd8c*/
      if ( !v50 ) /*0x14047bd93*/
        sub_1416C2D4B(1, 13); /*0x14047c350*/
      qmemcpy(v50, "aimami_relay_", 13); /*0x14047bdb1*/
      v119.m128i_i64[0] = 13; /*0x14047bdb4*/
      v119.m128i_i64[1] = (__int64)v50; /*0x14047bdbf*/
      v120 = 13; /*0x14047bdc6*/
      v52 = v49 + 13; /*0x14047bdd1*/
      if ( v52 ) /*0x14047bdd5*/
      {
        if ( v52 >= v44 ) /*0x14047bdda*/
        {
          if ( v52 != v44 ) /*0x14047bdf0*/
          {
LABEL_139:
            v134 = 1; /*0x14047c358*/
            sub_1416C2F60(v51, v44, v52, v44, (__int64)&off_141759690); /*0x14047c374*/
          }
        }
        else if ( *(char *)(v51 + v52) <= -65 ) /*0x14047bde1*/
        {
          goto LABEL_139; /*0x14047bde1*/
        }
      }
      v53 = (char *)(v51 + v52); /*0x14047bdf6*/
      v54 = 13; /*0x14047bdf9*/
      if ( v53 == (char *)v48 ) /*0x14047be01*/
      {
LABEL_99:
        if ( v54 > 0xD ) /*0x14047bf34*/
        {
          v122.m128i_i64[0] = v120; /*0x14047bd27*/
          v121 = _mm_loadu_si128(&v119); /*0x14047bd36*/
          v134 = 0; /*0x14047bd3e*/
          sub_140474440(&v112, &v121); /*0x14047bd4f*/
        }
        else if ( v119.m128i_i64[0] ) /*0x14047bf44*/
        {
          sub_140001660(v119.m128i_i64[1], v119.m128i_i64[0], 1); /*0x14047bf57*/
        }
        continue; /*0x14047bf5c*/
      }
      while ( 2 ) /*0x14047be10*/
      {
        v55 = (unsigned __int8)*v53; /*0x14047be10*/
        if ( *v53 < 0 ) /*0x14047be1c*/
        {
          v56 = v55 & 0x1F; /*0x14047be33*/
          v57 = v53[1] & 0x3F; /*0x14047be3c*/
          if ( (unsigned __int8)v55 <= 0xDFu ) /*0x14047be44*/
          {
            v53 += 2; /*0x14047be83*/
            v55 = v57 | (v56 << 6); /*0x14047be8d*/
            if ( v55 != 45 ) /*0x14047be94*/
              goto LABEL_93; /*0x14047be94*/
          }
          else
          {
            v58 = (v57 << 6) | v53[2] & 0x3F; /*0x14047be54*/
            if ( (unsigned __int8)*v53 < 0xF0u ) /*0x14047be5a*/
            {
              v53 += 3; /*0x14047be98*/
              v55 = (v56 << 12) | v58; /*0x14047be9f*/
              if ( v55 == 45 ) /*0x14047bea6*/
                goto LABEL_96; /*0x14047bea6*/
              goto LABEL_93; /*0x14047bea6*/
            }
            v59 = v53[3]; /*0x14047be5c*/
            v53 += 4; /*0x14047be62*/
            v55 = ((v56 & 7) << 18) | (v58 << 6) | v59 & 0x3F; /*0x14047be78*/
            if ( v55 != 45 ) /*0x14047be7f*/
              goto LABEL_93; /*0x14047be7f*/
          }
        }
        else
        {
          ++v53; /*0x14047be1e*/
          if ( v55 == 45 ) /*0x14047be25*/
            goto LABEL_96; /*0x14047be25*/
LABEL_93:
          if ( v55 != 95 && (unsigned int)(v55 - 48) >= 0xA && (v55 & 0xFFFFFFDF) - 65 >= 0x1A ) /*0x14047becb*/
            goto LABEL_99; /*0x14047becb*/
        }
LABEL_96:
        if ( v119.m128i_i64[0] == v54 ) /*0x14047bed7*/
        {
          v134 = 1; /*0x14047bef2*/
          sub_141688D30((unsigned int)&v119, v54, 1, 1, 1); /*0x14047bf18*/
          v50 = (void *)v119.m128i_i64[1]; /*0x14047bf1e*/
        }
        *((_BYTE *)v50 + v54++) = v55; /*0x14047bed9*/
        v120 = v54; /*0x14047bee0*/
        if ( v53 == (char *)v48 ) /*0x14047beea*/
          goto LABEL_99; /*0x14047beea*/
        continue; /*0x14047beea*/
      }
    }
    break;
  }
  v60 = _mm_load_si128((const __m128i *)&v113); /*0x14047bf69*/
  v61 = _mm_load_si128(&v114); /*0x14047bf71*/
  v80 = _mm_load_si128(&v112); /*0x14047bf79*/
  v81 = v60; /*0x14047bf7e*/
  v82 = v61; /*0x14047bf83*/
  v121.m128i_i64[0] = 0; /*0x14047bf88*/
  v121.m128i_i64[1] = v44; /*0x14047bf93*/
  v122.m128i_i64[0] = v128; /*0x14047bfa8*/
  v122.m128i_i64[1] = v44; /*0x14047bfaf*/
  v123.m128i_i64[0] = 0; /*0x14047bfb6*/
  v123.m128i_i64[1] = v44; /*0x14047bfc1*/
  *(_QWORD *)&v124 = 0xA0000000ALL; /*0x14047bfd2*/
  BYTE8(v124) = 1; /*0x14047bfd9*/
  LOWORD(v125) = 0; /*0x14047bfe0*/
  v62 = v96; /*0x14047bff0*/
  v63 = v117; /*0x14047bff7*/
  v64 = v118; /*0x14047bffe*/
  while ( 2 ) /*0x14047c03d*/
  {
    v65 = v122.m128i_i64[0]; /*0x14047c03d*/
    sub_1404E06C0(&v112, &v122); /*0x14047c04a*/
    if ( v112.m128i_i32[0] == 1 ) /*0x14047c057*/
    {
      v66 = v121.m128i_i64[0]; /*0x14047c060*/
      v121.m128i_i64[0] = v113; /*0x14047c067*/
      v67 = v113 - v66; /*0x14047c06e*/
      v68 = v66 + v65; /*0x14047c071*/
      if ( (_QWORD)v113 == v66 ) /*0x14047c077*/
      {
LABEL_117:
        v69 = sub_14033BC10(v68, v67); /*0x14047c0f0*/
        if ( v70 ) /*0x14047c0fb*/
          goto LABEL_118; /*0x14047c0fb*/
        goto LABEL_104; /*0x14047c0fb*/
      }
LABEL_111:
      if ( *(_BYTE *)(v68 + v67 - 1) != 10 ) /*0x14047c0c7*/
        goto LABEL_117; /*0x14047c0c7*/
      if ( v67 == 1 ) /*0x14047c0cf*/
      {
        v67 = 0; /*0x14047c0ee*/
        goto LABEL_117; /*0x14047c0ee*/
      }
      if ( *(_BYTE *)(v68 + v67 - 2) != 13 ) /*0x14047c0d6*/
      {
        v69 = sub_14033BC10(v68, v67 - 1); /*0x14047c145*/
        if ( v70 ) /*0x14047c14d*/
          goto LABEL_118; /*0x14047c14d*/
        goto LABEL_104; /*0x14047c14d*/
      }
      v69 = sub_14033BC10(v68, v67 - 2); /*0x14047c0df*/
      if ( !v70 ) /*0x14047c0e7*/
        goto LABEL_104; /*0x14047c0e7*/
LABEL_118:
      if ( *(_BYTE *)v69 != 91 || *(_BYTE *)(v69 + v70 - 1) != 93 ) /*0x14047c10f*/
      {
LABEL_104:
        if ( BYTE1(v125) ) /*0x14047c037*/
          goto LABEL_135; /*0x14047c037*/
        continue; /*0x14047c037*/
      }
      if ( v70 == 1 || *(char *)(v69 + 1) <= -65 ) /*0x14047c123*/
        sub_1416C2F60(v69, v70, 1, v70 - 1, (__int64)&off_141782B88); /*0x14047c397*/
      if ( (unsigned __int64)(v70 - 2) >= 0x10 ) /*0x14047c131*/
      {
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v69 + 1)), si128)) != 0xFFFF ) /*0x14047c167*/
          goto LABEL_128; /*0x14047c167*/
        v71 = v70 - 18; /*0x14047c196*/
        v72 = v69 + 17; /*0x14047c19a*/
      }
      else
      {
        if ( (unsigned __int64)(v70 - 2) < 9 ) /*0x14047c137*/
          goto LABEL_104; /*0x14047c137*/
LABEL_128:
        if ( *(_QWORD *)(v69 + 1) ^ 0x73656C69666F7270LL | *(unsigned __int8 *)(v69 + 9) ^ 0x2ELL ) /*0x14047c183*/
          goto LABEL_104; /*0x14047c186*/
        v71 = v70 - 11; /*0x14047c18c*/
        v72 = v69 + 10; /*0x14047c190*/
      }
      v73 = sub_14033BE90(v72, v71, 34); /*0x14047c1a7*/
      if ( v74 == 12 ) /*0x14047c1b1*/
      {
        if ( !(*(_QWORD *)v73 ^ 0x725F696D616D6961LL | *(_DWORD *)(v73 + 8) ^ 0x79616C65u) ) /*0x14047c01d*/
          goto LABEL_134; /*0x14047c01d*/
      }
      else if ( v74 >= 0xD && !(*(_QWORD *)v73 ^ 0x725F696D616D6961LL | *(_QWORD *)(v73 + 5) ^ 0x5F79616C65725F69LL) ) /*0x14047c1d6*/
      {
LABEL_134:
        v75 = 1; /*0x14047c1df*/
        goto LABEL_136; /*0x14047c1e1*/
      }
      goto LABEL_104; /*0x14047c1d9*/
    }
    break;
  }
  if ( !BYTE1(v125) ) /*0x14047c087*/
  {
    BYTE1(v125) = 1; /*0x14047c08d*/
    v67 = v121.m128i_i64[1] - v121.m128i_i64[0]; /*0x14047c0a2*/
    if ( ((unsigned __int8)v125 | (v121.m128i_i64[1] != v121.m128i_i64[0])) == 1 ) /*0x14047c0b0*/
    {
      v68 = v122.m128i_i64[0] + v121.m128i_i64[0]; /*0x14047c0b6*/
      if ( !v67 ) /*0x14047c0c0*/
        goto LABEL_117; /*0x14047c0c0*/
      goto LABEL_111; /*0x14047c0c0*/
    }
  }
LABEL_135:
  v75 = 0; /*0x14047c1e3*/
LABEL_136:
  *(_QWORD *)(v62 + 40) = v90; /*0x14047c1e5*/
  *(_OWORD *)(v62 + 24) = v89; /*0x14047c1f1*/
  *(_QWORD *)(v62 + 64) = v88; /*0x14047c1fa*/
  *(_OWORD *)(v62 + 48) = v87; /*0x14047c202*/
  *(_QWORD *)(v62 + 72) = v102; /*0x14047c20e*/
  *(_QWORD *)(v62 + 80) = v104; /*0x14047c219*/
  *(_QWORD *)(v62 + 88) = v94; /*0x14047c221*/
  *(_QWORD *)(v62 + 96) = v103; /*0x14047c22c*/
  *(_QWORD *)(v62 + 104) = v105; /*0x14047c237*/
  *(_QWORD *)(v62 + 112) = v95; /*0x14047c242*/
  *(_QWORD *)(v62 + 120) = v101; /*0x14047c24d*/
  *(_QWORD *)(v62 + 128) = v106; /*0x14047c258*/
  *(_QWORD *)(v62 + 136) = v93; /*0x14047c263*/
  *(_BYTE *)(v62 + 192) = v63; /*0x14047c26a*/
  *(_BYTE *)(v62 + 193) = v64; /*0x14047c271*/
  *(_BYTE *)(v62 + 194) = v129; /*0x14047c27f*/
  *(_BYTE *)(v62 + 195) = v115; /*0x14047c28c*/
  *(_BYTE *)(v62 + 196) = v130; /*0x14047c29a*/
  *(_BYTE *)(v62 + 197) = v131; /*0x14047c2a8*/
  *(_BYTE *)(v62 + 198) = v132; /*0x14047c2b6*/
  v76 = v116; /*0x14047c2bd*/
  *(_BYTE *)(v62 + 201) = BYTE2(v116); /*0x14047c2c8*/
  *(_WORD *)(v62 + 199) = v76; /*0x14047c2cf*/
  *(_QWORD *)(v62 + 16) = v92; /*0x14047c2db*/
  *(__m128i *)v62 = v91; /*0x14047c2e3*/
  v77 = v81; /*0x14047c2eb*/
  v78 = v82; /*0x14047c2ef*/
  *(__m128i *)(v62 + 144) = v80; /*0x14047c2f3*/
  *(__m128i *)(v62 + 160) = v77; /*0x14047c2fb*/
  *(__m128i *)(v62 + 176) = v78; /*0x14047c303*/
  *(_BYTE *)(v62 + 202) = v75; /*0x14047c30b*/
  return v62; /*0x14047c315*/
}