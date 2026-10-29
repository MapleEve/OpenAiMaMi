// win 1.2.7 | module src/core/sessions/worktree.rs | ea 0x140c8aa90 | name sub_140C8AA90
// win 1.2.7 | module src/core/sessions/worktree.rs | attributed via panic-Location xref (win-native)
__int64 *__fastcall sub_140C8AA90(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  signed __int64 v7; // rdx
  const __m128i *v8; // r13
  signed __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rcx
  char v15; // al
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r14
  _DWORD *v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbx
  char v25; // al
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rax
  _OWORD *v31; // rax
  __int64 v32; // rcx
  __int128 v33; // kr00_16
  __int64 v34; // rbx
  __m128i *v35; // rax
  __m128i *v36; // r14
  __int64 v37; // rax
  int v38; // edx
  int v39; // r8d
  const char *v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int128 v45; // xmm6
  __int64 v46; // r14
  char v47; // si
  _OWORD *v48; // rax
  const __m128i *v49; // r14
  const __m128i *v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r14
  _OWORD *v55; // rax
  __int64 v56; // rbx
  unsigned __int64 v57; // r14
  const __m128i *v58; // r15
  __int64 v59; // r12
  __int128 v60; // kr50_16
  unsigned __int64 v61; // r15
  __int64 v62; // r13
  __m128i *v63; // rbx
  __int64 v64; // rbx
  const __m128i *v65; // r15
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rdx
  char v71; // cl
  HANDLE v72; // r8
  int v73; // eax
  int v74; // edx
  unsigned __int64 v75; // rbx
  unsigned int v76; // edx
  unsigned int v77; // r15d
  unsigned __int64 v78; // rax
  unsigned int v79; // edx
  __int64 v80; // rax
  volatile signed __int64 *v81; // rsi
  volatile signed __int64 *v82; // rsi
  __m128i *v83; // r12
  __int64 v84; // rax
  volatile signed __int64 *v85; // rsi
  volatile signed __int64 *v86; // rsi
  HANDLE v87; // rbx
  __int64 v88; // rcx
  __int64 v89; // r8
  int v90; // r9d
  __int64 v91; // rdx
  __int64 v92; // r13
  const __m128i *v93; // rbx
  unsigned __int64 v94; // rdx
  __int64 v95; // rsi
  volatile signed __int64 *v96; // rsi
  __m128i *v97; // r12
  __int64 v98; // rdx
  __int64 v99; // rbx
  const __m128i *v100; // rbx
  __int64 v101; // rcx
  _OWORD *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rsi
  __m128i *v105; // rdi
  __int64 (__fastcall *v106)(); // rbx
  __int64 v107; // rbx
  __int64 v108; // r15
  __int128 v109; // [rsp+30h] [rbp-50h] BYREF
  __int64 v110; // [rsp+40h] [rbp-40h]
  _DWORD v111[4]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v112; // [rsp+58h] [rbp-28h] BYREF
  __int64 v113; // [rsp+68h] [rbp-18h]
  __int128 v114; // [rsp+70h] [rbp-10h]
  void *v115; // [rsp+80h] [rbp+0h]
  __m128i v116; // [rsp+90h] [rbp+10h] BYREF
  __int128 v117; // [rsp+A0h] [rbp+20h]
  int v118; // [rsp+13Ch] [rbp+BCh]
  _DWORD v119[2]; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v120; // [rsp+158h] [rbp+D8h]
  __int128 *v121; // [rsp+160h] [rbp+E0h] BYREF
  _QWORD v122[5]; // [rsp+168h] [rbp+E8h] BYREF
  int v123; // [rsp+190h] [rbp+110h]
  int v124; // [rsp+194h] [rbp+114h]
  __int64 v125; // [rsp+198h] [rbp+118h]
  __int128 v126; // [rsp+1A0h] [rbp+120h] BYREF
  void *v127; // [rsp+1B0h] [rbp+130h]
  const char *v128; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v129; // [rsp+1C8h] [rbp+148h]
  __int128 v130; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 *v131; // [rsp+1E0h] [rbp+160h]
  HANDLE v132; // [rsp+1E8h] [rbp+168h]
  __int64 v133; // [rsp+1F0h] [rbp+170h]
  HANDLE v134; // [rsp+1F8h] [rbp+178h]
  HANDLE v135[2]; // [rsp+200h] [rbp+180h]
  __m128i v136; // [rsp+210h] [rbp+190h] BYREF
  __int128 v137; // [rsp+220h] [rbp+1A0h] BYREF
  unsigned __int128 v138; // [rsp+230h] [rbp+1B0h]
  __int64 v139; // [rsp+240h] [rbp+1C0h]
  int v140; // [rsp+248h] [rbp+1C8h]
  int v141; // [rsp+24Ch] [rbp+1CCh]
  __int64 v142; // [rsp+250h] [rbp+1D0h]
  __int128 v143; // [rsp+258h] [rbp+1D8h]
  HANDLE v144; // [rsp+268h] [rbp+1E8h]
  int v145; // [rsp+2CCh] [rbp+24Ch]
  __int64 v146; // [rsp+2D0h] [rbp+250h] BYREF
  __m128i *v147; // [rsp+2D8h] [rbp+258h]
  __int128 v148; // [rsp+2E0h] [rbp+260h] BYREF
  HANDLE v149; // [rsp+2F0h] [rbp+270h]
  __int128 v150; // [rsp+300h] [rbp+280h] BYREF
  HANDLE hObject; // [rsp+310h] [rbp+290h]
  __int64 (__fastcall *v152)(); // [rsp+318h] [rbp+298h]
  __int64 v153; // [rsp+320h] [rbp+2A0h]
  void *v154; // [rsp+328h] [rbp+2A8h]
  __int128 v155; // [rsp+330h] [rbp+2B0h]
  __int64 v156; // [rsp+340h] [rbp+2C0h]
  __int128 v157; // [rsp+348h] [rbp+2C8h]
  void *v158; // [rsp+358h] [rbp+2D8h]
  const __m128i *v159; // [rsp+360h] [rbp+2E0h]
  __int64 *v160; // [rsp+368h] [rbp+2E8h]
  HANDLE v161; // [rsp+370h] [rbp+2F0h]
  __int64 v162; // [rsp+378h] [rbp+2F8h]
  __int128 v163; // [rsp+380h] [rbp+300h] BYREF
  HANDLE v164; // [rsp+390h] [rbp+310h]
  __int64 v165; // [rsp+3A0h] [rbp+320h]
  __int64 v166; // [rsp+3A8h] [rbp+328h]
  __m128i *v167; // [rsp+3B0h] [rbp+330h]
  __int64 v168; // [rsp+3B8h] [rbp+338h]
  __int64 v169; // [rsp+3C0h] [rbp+340h]
  char v170; // [rsp+3CFh] [rbp+34Fh]
  __int64 v171; // [rsp+3D0h] [rbp+350h]
  __int64 v172; // [rsp+3D8h] [rbp+358h]
  char v173; // [rsp+3E5h] [rbp+365h]
  char v174; // [rsp+3E6h] [rbp+366h]
  char v175; // [rsp+3E7h] [rbp+367h]
  __int64 v176; // [rsp+3E8h] [rbp+368h]
  char v177; // [rsp+3F1h] [rbp+371h]
  char v178; // [rsp+3F2h] [rbp+372h]
  char v179; // [rsp+3F3h] [rbp+373h]
  char v180; // [rsp+3F4h] [rbp+374h]
  char v181; // [rsp+3F5h] [rbp+375h]
  char v182; // [rsp+3F6h] [rbp+376h]
  char v183; // [rsp+3F7h] [rbp+377h]
  __int64 v184; // [rsp+3F8h] [rbp+378h]

  v184 = -2;
  v6 = sub_140E91160(a3, a4);
  if ( !v7 )
    goto LABEL_28;
  v8 = (const __m128i *)v6;
  v9 = v7;
  sub_1416828D0((unsigned int)&v136, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), (unsigned int)&unk_141A3F265, 9);
  v176 = v136.m128i_i64[1];
  v10 = (unsigned int)sub_141681D40(v8, v9, v136.m128i_i64[1], v137);
  if ( v136.m128i_i64[0] )
    sub_140001660(v176, v136.m128i_i64[0], 1);
  if ( !(_BYTE)v10 )
  {
LABEL_28:
    *a1 = -1;
    return a1;
  }
  sub_1416828D0((unsigned int)&v130, (_DWORD)v8, v9, (unsigned int)&unk_141A3F26E, 4);
  v11 = *((_QWORD *)&v130 + 1);
  v12 = (__int64)v131;
  if ( !(unsigned __int8)sub_141682B30(*((_QWORD *)&v130 + 1), v131) )
  {
    nullsub_1(v13);
    v27 = 33;
    v28 = sub_140001650(33, 1);
    if ( !v28 )
      sub_141938D2B(1, 33);
    v12 = v28;
    *(_OWORD *)(v28 + 16) = xmmword_141A3F282;
    *(_OWORD *)v28 = xmmword_141A3F272;
    *(_BYTE *)(v28 + 32) = -74;
    v29 = 9;
    v30 = 33;
    goto LABEL_36;
  }
  sub_14169D1D0(&v136, v11, v12);
  v14 = v136.m128i_i64[1];
  v176 = v136.m128i_i64[1];
  if ( v136.m128i_i64[0] == -1 )
  {
    v29 = 2;
    v27 = 30;
    goto LABEL_37;
  }
  v169 = v136.m128i_i64[0];
  v159 = v8;
  v172 = v9;
  v160 = a1;
  v136.m128i_i64[0] = 0;
  v136.m128i_i64[1] = v137;
  *(_QWORD *)&v137 = v14;
  *((_QWORD *)&v137 + 1) = v136.m128i_i64[1];
  v138 = __PAIR128__(v136.m128i_u64[1], 0);
  v139 = 0xA0000000ALL;
  LOBYTE(v140) = 1;
  LOWORD(v142) = 0;
  v15 = 0;
  v10 = (__int64)&v116;
  while ( 1 )
  {
    if ( (v15 & 1) != 0 )
      goto LABEL_32;
    v16 = v137;
    sub_140C9D040(&v116, &v137);
    if ( v116.m128i_i32[0] == 1 )
    {
      v17 = v136.m128i_i64[0];
      v136.m128i_i64[0] = v117;
      v18 = v117 - v17;
      v19 = v17 + v16;
      if ( (_QWORD)v117 == v17 )
        goto LABEL_22;
LABEL_16:
      if ( *(_BYTE *)(v19 + v18 - 1) == 10 )
      {
        if ( v18 == 1 )
        {
          v18 = 0;
        }
        else if ( *(_BYTE *)(v19 + v18 - 2) == 13 )
        {
          v18 -= 2;
        }
        else
        {
          --v18;
        }
      }
      goto LABEL_22;
    }
    if ( BYTE1(v142) )
      goto LABEL_32;
    BYTE1(v142) = 1;
    v18 = v136.m128i_i64[1] - v136.m128i_i64[0];
    if ( ((unsigned __int8)v142 | (v136.m128i_i64[1] != v136.m128i_i64[0])) != 1 )
      goto LABEL_32;
    v19 = v137 + v136.m128i_i64[0];
    if ( v18 )
      goto LABEL_16;
LABEL_22:
    v20 = (_DWORD *)sub_140E91160(v19, v18);
    if ( v21 >= 7 )
    {
      v14 = *v20 ^ 0x64746967u;
      if ( !((unsigned int)v14 | *(_DWORD *)((char *)v20 + 3) ^ 0x3A726964) )
        break;
    }
    v15 = BYTE1(v142);
  }
  v22 = sub_140E91160((char *)v20 + 7, v21 - 7);
  if ( !v22 || !v23 )
  {
LABEL_32:
    nullsub_1(v14);
    v27 = 30;
    v31 = (_OWORD *)sub_140001650(30, 1);
    if ( !v31 )
      sub_141938D2B(1, 30);
    v12 = (__int64)v31;
    *(_OWORD *)((char *)v31 + 14) = *(__int128 *)((char *)&xmmword_141A3B784 + 14);
    *v31 = xmmword_141A3B784;
    v29 = 9;
    a1 = v160;
    v9 = v172;
    v8 = v159;
    if ( v169 )
      sub_140001660(v176, v169, 1);
    v30 = 30;
LABEL_36:
    v176 = v30;
    goto LABEL_37;
  }
  sub_1416AB9B0(&v136, v22, v23);
  v168 = v136.m128i_i64[0];
  v24 = v137;
  v173 = 1;
  v171 = v136.m128i_i64[1];
  v25 = sub_141681BE0(v136.m128i_i64[1], v137);
  v9 = v172;
  v8 = v159;
  if ( v25 )
  {
    v136.m128i_i64[0] = v168;
    v136.m128i_i64[1] = v171;
    *(_QWORD *)&v137 = v24;
  }
  else
  {
    v173 = 1;
    v37 = sub_141682A00(v11, v12);
    v39 = v38;
    v40 = asc_141A3ABB6;
    if ( v37 )
      LODWORD(v40) = v37;
    else
      v39 = 1;
    sub_1416828D0((unsigned int)&v136, (_DWORD)v40, v39, v171, v24);
    if ( v168 )
      sub_140001660(v171, v168, 1);
  }
  v41 = v136.m128i_i64[1];
  v171 = v136.m128i_i64[0];
  v10 = v137;
  if ( v169 )
    sub_140001660(v176, v169, 1);
  v169 = v41;
  sub_1416828D0((unsigned int)&v150, v41, v10, (unsigned int)&unk_141A3F1EB, 9);
  v168 = *((_QWORD *)&v150 + 1);
  sub_14169D1D0(&v116, *((_QWORD *)&v150 + 1), hObject);
  if ( v116.m128i_i64[0] == -1 )
  {
    *(_QWORD *)&v163 = v116.m128i_i64[1];
    v121 = &v163;
    v122[0] = sub_1416BB0B0;
    sub_1416ABFD0(&v136, &unk_141A3B767, &v121);
    v12 = v136.m128i_i64[1];
    v176 = v136.m128i_i64[0];
    v27 = v137;
    if ( (unsigned int)(v163 & 3) - 2 >= 2 && (v163 & 3) != 0 )
    {
      v122[0] = v163 - 1;
      LOBYTE(v121) = 3;
      sub_1416BCB00(v122);
    }
    v29 = 10;
    v47 = 0;
  }
  else
  {
    v161 = (HANDLE)v116.m128i_i64[1];
    v166 = v116.m128i_i64[0];
    v42 = sub_140E91160(v116.m128i_i64[1], v117);
    if ( v43 )
    {
      sub_1416AB9B0(&v136, v42, v43);
      v176 = v136.m128i_i64[0];
      v45 = v137;
      v46 = v137;
      v174 = 1;
      v167 = (__m128i *)v136.m128i_i64[1];
      if ( (unsigned __int8)sub_141681BE0(v136.m128i_i64[1], v137) )
      {
        v116.m128i_i64[0] = v176;
        v116.m128i_i64[1] = (__int64)v167;
        v117 = v45;
      }
      else
      {
        sub_1416828D0((unsigned int)&v116, v169, v10, (_DWORD)v167, v46);
        if ( v176 )
          sub_140001660(v167, v176, 1);
      }
      v27 = v117;
      v170 = 1;
      v165 = v116.m128i_i64[1];
      sub_141695230(&v136, v116.m128i_i64[1], v117);
      v49 = (const __m128i *)v116.m128i_i64[0];
      v50 = (const __m128i *)v136.m128i_i64[0];
      if ( v136.m128i_i64[0] == -1 )
      {
        v10 = *((_QWORD *)&v117 + 1);
        if ( (v136.m128i_i8[8] & 3u) - 2 >= 2 && (v136.m128i_i8[8] & 3) != 0 )
        {
          v122[0] = v136.m128i_i64[1] - 1;
          LOBYTE(v121) = 3;
          v170 = 0;
          sub_1416BCB00(v122);
        }
        v176 = (__int64)v49;
        v12 = v165;
      }
      else
      {
        v10 = *((_QWORD *)&v137 + 1);
        v12 = v136.m128i_i64[1];
        v27 = v137;
        if ( v116.m128i_i64[0] )
          sub_140001660(v165, v116.m128i_i64[0], 1);
        v176 = (__int64)v50;
        v9 = v172;
      }
      v29 = -1;
      v47 = 1;
      if ( v166 )
        sub_140001660(v161, v166, 1);
    }
    else
    {
      nullsub_1(v44);
      v27 = 16;
      v48 = (_OWORD *)sub_140001650(16, 1);
      if ( !v48 )
        sub_141938D2B(1, 16);
      v12 = (__int64)v48;
      *v48 = xmmword_141A3F1F4;
      v29 = 9;
      if ( v166 )
        sub_140001660(v161, v166, 1);
      v47 = 0;
      v176 = 16;
    }
  }
  if ( (_QWORD)v150 )
    sub_140001660(v168, v150, 1);
  if ( !v47 )
  {
    a1 = v160;
LABEL_87:
    if ( v171 )
      sub_140001660(v169, v171, 1);
LABEL_37:
    if ( (_QWORD)v130 )
      sub_140001660(*((_QWORD *)&v130 + 1), v130, 1);
    v136.m128i_i64[0] = v29;
    v136.m128i_i64[1] = v176;
    *(_QWORD *)&v137 = v12;
    *((_QWORD *)&v137 + 1) = v27;
    *(_QWORD *)&v138 = v10;
    v116.m128i_i64[0] = (__int64)&v136;
    v116.m128i_i64[1] = (__int64)sub_14104A7D0;
    sub_1416ABFD0(&v112, &unk_141A3F1B4, &v116);
    v33 = v112;
    if ( v9 >= 0 )
    {
      nullsub_1(v32);
      v34 = 1;
      v35 = (__m128i *)sub_140001650(v9, 1);
      if ( v35 )
      {
        v36 = v35;
        sub_1418F44E0(v35, v8, v9);
        *((_OWORD *)a1 + 3) = v112;
        a1[8] = v113;
        *a1 = v9;
        a1[1] = (__int64)v36;
        a1[2] = v9;
        a1[3] = 0;
        a1[4] = 1;
        a1[5] = 0;
        *((_WORD *)a1 + 36) = 1;
        sub_140BAC840(&v136);
        return a1;
      }
    }
    else
    {
      v34 = 0;
    }
    v172 = *((_QWORD *)&v33 + 1);
    v176 = v33;
    sub_141938D2B(v34, v9);
  }
  v165 = v12;
  v51 = sub_141682A00(v12, v27);
  a1 = v160;
  v10 = v51;
  if ( !v51 )
  {
    nullsub_1(v53);
    v27 = 46;
    v55 = (_OWORD *)sub_140001650(46, 1);
    if ( !v55 )
      sub_141938D2B(1, 46);
    v12 = (__int64)v55;
    *(_OWORD *)((char *)v55 + 30) = *(__int128 *)((char *)&xmmword_141A3B7C8 + 14);
    v55[1] = xmmword_141A3B7C8;
    *v55 = xmmword_141A3B7B8;
    v29 = 9;
    if ( v176 )
      sub_140001660(v165, v176, 1);
    v176 = 46;
    goto LABEL_87;
  }
  v54 = v52;
  sub_141695230(&v136, v51, v52);
  if ( v136.m128i_i64[0] == -1 )
  {
    sub_140C165E0(&v116, v10, v54, v136.m128i_i64[1]);
  }
  else
  {
    v117 = v137;
    v116 = v136;
  }
  v168 = v116.m128i_i64[1];
  v166 = v116.m128i_i64[0];
  v56 = v117;
  if ( v176 )
    sub_140001660(v165, v176, 1);
  if ( v171 )
    sub_140001660(v169, v171, 1);
  if ( (_QWORD)v130 )
    sub_140001660(*((_QWORD *)&v130 + 1), v130, 1);
  sub_1416AB5A0(&v116, v168, v56);
  v176 = v116.m128i_i64[1];
  v57 = v117;
  sub_14072C410((unsigned int)&v136, v117, 0, 1, 1);
  v58 = (const __m128i *)v136.m128i_i64[1];
  if ( v136.m128i_i8[0] )
    sub_141938D2B(v136.m128i_i64[1], v137);
  v59 = v137;
  if ( v57 )
    sub_1418F44E0((__m128i *)v137, (const __m128i *)v176, v57);
  if ( v116.m128i_i64[0] > 0 )
    sub_140001660(v176, v116.m128i_i64[0], 1);
  if ( v57 == v9 && !(unsigned int)sub_1418F4B70(v59, v8) )
  {
    *a1 = -1;
    sub_140001660(v59, v58, 1);
    v70 = v166;
    if ( v166 )
      goto LABEL_217;
    return a1;
  }
  v169 = v59;
  v176 = (__int64)v58;
  v178 = 1;
  if ( !(unsigned __int8)sub_141682970(v168) )
  {
    sub_14072C410((unsigned int)&v136, v9, 0, 1, 1);
    v64 = v136.m128i_i64[1];
    if ( v136.m128i_i8[0] )
    {
      v178 = 1;
      sub_141938D2B(v136.m128i_i64[1], v137);
    }
    v65 = (const __m128i *)v137;
    sub_1418F44E0((__m128i *)v137, v8, v9);
    nullsub_1(v66);
    v67 = sub_140001650(51, 1);
    v68 = v176;
    v69 = v169;
    if ( !v67 )
    {
      v159 = v65;
      v172 = v64;
      sub_141938D2B(1, 51);
    }
    *(_OWORD *)(v67 + 32) = xmmword_141A3F127;
    *(_OWORD *)(v67 + 16) = xmmword_141A3F117;
    *(_OWORD *)v67 = xmmword_141A3F107;
    *(_DWORD *)(v67 + 47) = -1399003473;
    *a1 = v64;
    a1[1] = (__int64)v65;
    a1[2] = v9;
    a1[3] = v68;
    a1[4] = v69;
    a1[5] = v57;
    a1[6] = 51;
    a1[7] = v67;
    a1[8] = 51;
    goto LABEL_112;
  }
  v178 = 1;
  sub_14168A510(&v116, aGit, 3);
  v118 = 0x8000000;
  v181 = 1;
  sub_14168A3F0(&v116, aC_4, 2);
  v181 = 1;
  sub_14168A3F0(&v116, v159, v9);
  v181 = 1;
  sub_14168A3F0(&v116, aStatus_7, 6);
  v181 = 1;
  sub_14168A3F0(&v116, aPorcelain, 11);
  v136.m128i_i32[0] = 2;
  v181 = 1;
  sub_14168A5A0(&v116, &v136);
  v111[0] = 3;
  v181 = 1;
  sub_14168A620(&v116, v111);
  v181 = 1;
  sub_14168A5E0(&v116, v111);
  sub_1418F44E0(&v136, &v116, 0xB8u);
  v128 = aGitStatus;
  v129 = 10;
  sub_14168DB10(&v150, &v136);
  if ( (_QWORD)v150 == 2 )
  {
    *(_QWORD *)&v148 = *((_QWORD *)&v150 + 1);
    *(_QWORD *)&v130 = &v128;
    *((_QWORD *)&v130 + 1) = sub_140186EE0;
    v131 = &v148;
    v132 = sub_1416BB0B0;
    sub_1416ABFD0(&v163, &unk_141A3B7A2, &v130);
    v60 = v163;
    v61 = (unsigned __int64)v164;
    if ( (unsigned int)(v148 & 3) - 2 >= 2 && (v148 & 3) != 0 )
    {
      *((_QWORD *)&v130 + 1) = v148 - 1;
      LOBYTE(v130) = 3;
      sub_1416BCB00((char *)&v130 + 8);
    }
    v171 = v60;
    v62 = 10;
    v63 = *((__m128i **)&v60 + 1);
  }
  else
  {
    v71 = v153;
    v72 = v154;
    v130 = v150;
    v132 = v152;
    v133 = v153;
    v134 = v154;
    *(_OWORD *)v135 = v155;
    v131 = nullptr;
    if ( hObject == HANDLE_FLAG_INHERIT )
    {
      hObject = (HANDLE)-1LL;
      *(_QWORD *)&v150 = 0;
      LOBYTE(v154) = 0;
      sub_1403FDD90(&v163, &v150, v152);
      if ( !(_QWORD)v163 )
      {
        *(_QWORD *)&v150 = *((_QWORD *)&v163 + 1);
        sub_141939040(
          (unsigned int)aFailedToSpawnT_8,
          22,
          (unsigned int)&v150,
          (unsigned int)&off_141A3BAC8,
          (__int64)&off_141A3A2E0);
      }
      v127 = v164;
      v126 = v163;
      v71 = v133;
      v72 = v134;
    }
    else
    {
      *(_QWORD *)&v126 = 0;
    }
    v133 = 0;
    if ( (v71 & 1) != 0 )
    {
      hObject = (HANDLE)-1LL;
      *(_QWORD *)&v150 = 0;
      LOBYTE(v154) = 0;
      v177 = 1;
      sub_1403FDD10(&v163, &v150, v72);
      if ( !(_QWORD)v163 )
      {
        *(_QWORD *)&v150 = *((_QWORD *)&v163 + 1);
        sub_141939040(
          (unsigned int)aFailedToSpawnT_8,
          22,
          (unsigned int)&v150,
          (unsigned int)&off_141A3BAC8,
          (__int64)&off_141A3A2E0);
      }
      v149 = v164;
      v148 = v163;
    }
    else
    {
      *(_QWORD *)&v148 = 0;
    }
    v183 = 1;
    v182 = 1;
    v73 = sub_14167FC00();
    v183 = 1;
    v182 = 1;
    v75 = sub_1416A1240(v73, v74, 3, 0, (__int64)&off_141A3F208);
    v77 = v76;
    while ( 1 )
    {
      v183 = 1;
      v182 = 1;
      sub_14168B410(v119, &v130);
      if ( v119[0] == 1 )
        break;
      if ( v119[1] == 1 )
      {
        LODWORD(v167) = v120;
        v183 = 1;
        v182 = 0;
        sub_140C8A7F0((unsigned int)&v150, (unsigned int)&v126, (_DWORD)v128, v129, (__int64)&unk_141A3F23D);
        v171 = *((_QWORD *)&v150 + 1);
        v62 = v150;
        v83 = (__m128i *)hObject;
        v61 = (unsigned __int64)v152;
        if ( (_QWORD)v150 == -1 )
        {
          v147 = (__m128i *)hObject;
          v164 = v149;
          v163 = v148;
          sub_140C8A7F0((unsigned int)&v150, (unsigned int)&v163, (_DWORD)v128, v129, (__int64)&unk_141A3F243);
          v104 = *((_QWORD *)&v150 + 1);
          v62 = v150;
          v105 = (__m128i *)hObject;
          v106 = v152;
          if ( (_QWORD)v150 == -1 )
          {
            v62 = -1;
            v165 = *((_QWORD *)&v150 + 1);
            v161 = hObject;
            v162 = (__int64)v152;
            v9 = v172;
            v83 = v147;
          }
          else
          {
            v165 = v153;
            v161 = v154;
            v162 = v155;
            v145 = HIDWORD(v155);
            LODWORD(v167) = DWORD2(v155);
            v125 = v156;
            v114 = v157;
            v115 = v158;
            if ( v171 )
              sub_140001660(v147, v171, 1);
            v61 = (unsigned __int64)v106;
            v83 = v105;
            v171 = v104;
            v9 = v172;
          }
        }
        else
        {
          v161 = v154;
          v162 = v155;
          v145 = HIDWORD(v155);
          LODWORD(v167) = DWORD2(v155);
          v125 = v156;
          v114 = v157;
          v115 = v158;
          v96 = (volatile signed __int64 *)v148;
          v165 = v153;
          if ( (_QWORD)v148 )
          {
            CloseHandle(v149);
            if ( !_InterlockedDecrement64(v96) )
              sub_141691170(&v148);
            if ( !_InterlockedDecrement64(*((volatile signed __int64 **)&v148 + 1)) )
            {
              v177 = 0;
              sub_1409E3D80((char *)&v148 + 8);
            }
            v9 = v172;
          }
        }
        goto LABEL_172;
      }
      v183 = 1;
      v182 = 1;
      v78 = sub_14167FC00();
      if ( v78 == v75 )
      {
        if ( v79 >= v77 )
          goto LABEL_131;
      }
      else if ( v78 >= v75 )
      {
LABEL_131:
        v183 = 1;
        v182 = 1;
        v80 = sub_14168B300(&v130);
        if ( v80 && (unsigned int)(v80 & 3) - 2 >= 2 && (v80 & 3) != 0 )
        {
          *((_QWORD *)&v150 + 1) = v80 - 1;
          LOBYTE(v150) = 3;
          v183 = 1;
          v182 = 1;
          sub_1416BCB00((char *)&v150 + 8);
          v9 = v172;
        }
        v183 = 1;
        v182 = 1;
        sub_14168B3B0(&v163, &v130);
        if ( (_DWORD)v163 && (BYTE8(v163) & 3u) - 2 >= 2 && (BYTE8(v163) & 3) != 0 )
        {
          *((_QWORD *)&v150 + 1) = *((_QWORD *)&v163 + 1) - 1LL;
          LOBYTE(v150) = 3;
          v183 = 1;
          v182 = 1;
          sub_1416BCB00((char *)&v150 + 8);
          v9 = v172;
        }
        v150 = v126;
        hObject = v127;
        v81 = (volatile signed __int64 *)v126;
        if ( (_QWORD)v126 )
        {
          CloseHandle(hObject);
          if ( !_InterlockedDecrement64(v81) )
            sub_141691170(&v150);
          if ( !_InterlockedDecrement64(*((volatile signed __int64 **)&v150 + 1)) )
          {
            v183 = 1;
            v182 = 0;
            sub_1409E3D80((char *)&v150 + 8);
          }
        }
        v150 = v148;
        hObject = v149;
        v82 = (volatile signed __int64 *)v148;
        if ( (_QWORD)v148 )
        {
          CloseHandle(hObject);
          if ( !_InterlockedDecrement64(v82) )
            sub_141691170(&v150);
          if ( !_InterlockedDecrement64(*((volatile signed __int64 **)&v150 + 1)) )
          {
            v183 = 0;
            v182 = 0;
            sub_1409E3D80((char *)&v150 + 8);
          }
        }
        v146 = 3;
        *(_QWORD *)&v150 = &v128;
        *((_QWORD *)&v150 + 1) = sub_140186EE0;
        hObject = &v146;
        v152 = sub_1416BCB10;
        v183 = 0;
        v182 = 0;
        sub_1416ABFD0(&v163, &unk_141A3F220, &v150);
        v83 = *((__m128i **)&v163 + 1);
        v171 = v163;
        v62 = 10;
        v61 = (unsigned __int64)v164;
        goto LABEL_172;
      }
      v183 = 1;
      v182 = 1;
      sub_141696800(0, 25000000);
    }
    v146 = v120;
    v180 = 1;
    v179 = 1;
    v84 = sub_14168B300(&v130);
    if ( v84 && (unsigned int)(v84 & 3) - 2 >= 2 && (v84 & 3) != 0 )
    {
      *((_QWORD *)&v150 + 1) = v84 - 1;
      LOBYTE(v150) = 3;
      v180 = 1;
      v179 = 1;
      sub_1416BCB00((char *)&v150 + 8);
      v9 = v172;
    }
    v180 = 1;
    v179 = 1;
    sub_14168B3B0(&v163, &v130);
    if ( (_DWORD)v163 && (BYTE8(v163) & 3u) - 2 >= 2 && (BYTE8(v163) & 3) != 0 )
    {
      *((_QWORD *)&v150 + 1) = *((_QWORD *)&v163 + 1) - 1LL;
      LOBYTE(v150) = 3;
      v180 = 1;
      v179 = 1;
      sub_1416BCB00((char *)&v150 + 8);
      v9 = v172;
    }
    v150 = v126;
    hObject = v127;
    v85 = (volatile signed __int64 *)v126;
    if ( (_QWORD)v126 )
    {
      CloseHandle(hObject);
      if ( !_InterlockedDecrement64(v85) )
        sub_141691170(&v150);
      if ( !_InterlockedDecrement64(*((volatile signed __int64 **)&v150 + 1)) )
      {
        v180 = 1;
        v179 = 0;
        sub_1409E3D80((char *)&v150 + 8);
      }
    }
    v150 = v148;
    hObject = v149;
    v86 = (volatile signed __int64 *)v148;
    if ( (_QWORD)v148 )
    {
      CloseHandle(hObject);
      if ( !_InterlockedDecrement64(v86) )
        sub_141691170(&v150);
      if ( !_InterlockedDecrement64(*((volatile signed __int64 **)&v150 + 1)) )
      {
        v180 = 0;
        v179 = 0;
        sub_1409E3D80((char *)&v150 + 8);
      }
    }
    *(_QWORD *)&v150 = &v128;
    *((_QWORD *)&v150 + 1) = sub_140186EE0;
    hObject = &v146;
    v152 = (__int64 (__fastcall *)())sub_1416BB0B0;
    v180 = 0;
    v179 = 0;
    sub_1416ABFD0(&v163, &unk_141A3F249, &v150);
    v83 = *((__m128i **)&v163 + 1);
    v171 = v163;
    v61 = (unsigned __int64)v164;
    if ( (unsigned int)(v146 & 3) - 2 >= 2 && (v146 & 3) != 0 )
    {
      *((_QWORD *)&v150 + 1) = v146 - 1;
      LOBYTE(v150) = 3;
      v183 = 0;
      v182 = 0;
      sub_1416BCB00((char *)&v150 + 8);
      v9 = v172;
    }
    v62 = 10;
LABEL_172:
    v87 = v135[1];
    CloseHandle(v135[0]);
    CloseHandle(v87);
    if ( (_QWORD)v130 )
      CloseHandle(*((HANDLE *)&v130 + 1));
    a1 = v160;
    if ( v131 )
      CloseHandle(v132);
    v63 = v83;
    if ( v133 )
      CloseHandle(v134);
  }
  v181 = 0;
  sub_14029BE30(&v136);
  LODWORD(v88) = (_DWORD)v167;
  v89 = v162;
  v90 = v145;
  v91 = v125;
  if ( (_DWORD)v62 != -1 )
  {
    hObject = v115;
    v150 = v114;
    goto LABEL_215;
  }
  v92 = v171;
  v121 = (__int128 *)v171;
  v122[0] = v63;
  v122[1] = v61;
  v122[2] = v165;
  v122[3] = v161;
  v122[4] = v162;
  v123 = (int)v167;
  v124 = v145;
  if ( !(_DWORD)v167 )
  {
    v97 = v63;
    sub_1416A9D40(&v136, v63, v61);
    v172 = v136.m128i_i64[1];
    sub_140E91160(v136.m128i_i64[1], v137);
    v99 = v98;
    if ( v92 )
      sub_140001660(v97, v92, 1);
    if ( v165 )
      sub_140001660(v161, v165, 1);
    if ( v136.m128i_i64[0] != -1 && v136.m128i_i64[0] )
      sub_140001660(v136.m128i_i64[1], v136.m128i_i64[0], 1);
    if ( !v99 )
    {
      sub_14072C410((unsigned int)&v136, v9, 0, 1, 1);
      v107 = v136.m128i_i64[1];
      if ( v136.m128i_i8[0] )
      {
        v175 = 1;
        sub_141938D2B(v136.m128i_i64[1], v137);
      }
      v108 = v137;
      sub_1418F44E0((__m128i *)v137, v159, v9);
      a1[3] = v176;
      a1[4] = v169;
      a1[5] = v57;
      *a1 = v107;
      a1[1] = v108;
      a1[2] = v9;
      a1[6] = -1;
      *((_WORD *)a1 + 36) = 256;
      v70 = v166;
      if ( v166 )
        goto LABEL_217;
      return a1;
    }
    sub_14072C410((unsigned int)&v136, v9, 0, 1, 1);
    v172 = v136.m128i_i64[1];
    if ( v136.m128i_i8[0] )
    {
      v175 = 1;
      sub_141938D2B(v172, v137);
    }
    v100 = (const __m128i *)v137;
    sub_1418F44E0((__m128i *)v137, v159, v9);
    nullsub_1(v101);
    v102 = (_OWORD *)sub_140001650(76, 1);
    if ( !v102 )
    {
      v159 = v100;
      sub_141938D2B(1, 76);
    }
    *(_OWORD *)((char *)v102 + 60) = *(__int128 *)((char *)&xmmword_141A3F16A + 12);
    v102[3] = xmmword_141A3F16A;
    v102[2] = xmmword_141A3F15A;
    v102[1] = xmmword_141A3F14A;
    *v102 = xmmword_141A3F13A;
    a1 = v160;
    *v160 = v172;
    a1[1] = (__int64)v100;
    a1[2] = v9;
    a1[3] = v176;
    a1[4] = v169;
    a1[5] = v57;
    a1[6] = 76;
    a1[7] = (__int64)v102;
    a1[8] = 76;
LABEL_112:
    *((_WORD *)a1 + 36) = 1;
    v70 = v166;
    if ( v166 )
      goto LABEL_217;
    return a1;
  }
  v147 = v63;
  sub_1416A9D40(&v150, v161, v162);
  v162 = *((_QWORD *)&v150 + 1);
  v93 = (const __m128i *)sub_140E91160(*((_QWORD *)&v150 + 1), hObject);
  v61 = v94;
  sub_14072C410((unsigned int)&v136, v94, 0, 1, 1);
  v95 = v136.m128i_i64[1];
  if ( v136.m128i_i32[0] == 1 )
    sub_141938D2B(v136.m128i_i64[1], v137);
  v167 = (__m128i *)v137;
  if ( v61 )
    sub_1418F44E0(v167, v93, v61);
  if ( (__int64)v150 > 0 )
    sub_140001660(v162, v150, 1);
  if ( v61 )
  {
    v63 = v167;
  }
  else
  {
    v162 = v95;
    nullsub_1(v88);
    v95 = 23;
    v103 = sub_140001650(23, 1);
    if ( !v103 )
      sub_141938D2B(1, 23);
    v63 = (__m128i *)v103;
    *(_OWORD *)v103 = xmmword_141A3F0F0;
    *(_QWORD *)(v103 + 15) = 0xA5B4E8B1A4E59E9BuLL;
    if ( v162 )
      sub_140001660(v167, v162, 1);
    v61 = 23;
    v9 = v172;
    v92 = v171;
  }
  if ( v92 )
    sub_140001660(v147, v92, 1);
  v62 = 10;
  v91 = v165;
  if ( v165 )
    sub_140001660(v161, v165, 1);
  v171 = v95;
  a1 = v160;
LABEL_215:
  v136.m128i_i64[0] = v62;
  v136.m128i_i64[1] = v171;
  *(_QWORD *)&v137 = v63;
  *((_QWORD *)&v137 + 1) = v61;
  *(_QWORD *)&v138 = v165;
  *((_QWORD *)&v138 + 1) = v161;
  v139 = v89;
  v140 = v88;
  v141 = v90;
  v142 = v91;
  v143 = v150;
  v144 = hObject;
  sub_14072C410((unsigned int)&v116, v9, 0, 1, 1);
  v172 = v116.m128i_i64[1];
  LOBYTE(v171) = v116.m128i_i8[0];
  if ( v116.m128i_i8[0] )
    sub_141938D2B(v172, v117);
  v160 = (__int64 *)v117;
  sub_1418F44E0((__m128i *)v117, v159, v9);
  v116.m128i_i64[0] = (__int64)&v136;
  v116.m128i_i64[1] = (__int64)sub_14104A7D0;
  sub_1416ABFD0(&v109, &unk_141A3F186, &v116);
  a1[8] = v110;
  *((_OWORD *)a1 + 3) = v109;
  *a1 = v172;
  a1[1] = (__int64)v160;
  a1[2] = v9;
  a1[3] = v176;
  a1[4] = v169;
  a1[5] = v57;
  *((_WORD *)a1 + 36) = 1;
  v175 = 0;
  sub_140BAC840(&v136);
  v70 = v166;
  if ( v166 )
LABEL_217:
    sub_140001660(v168, v70, 1);
  return a1;
}
