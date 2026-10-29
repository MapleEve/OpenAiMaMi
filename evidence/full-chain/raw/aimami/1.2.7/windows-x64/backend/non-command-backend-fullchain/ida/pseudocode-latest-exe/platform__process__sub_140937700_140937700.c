// win 1.2.7 latest-exe | module src/platform/process.rs | ea 0x140937700 | successor of pre-update 0x140ec3fa0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
__int64 __fastcall sub_140937700(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 *v6; // rsi
  int v7; // r15d
  char v8; // al
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  unsigned __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rax
  char v19; // si
  __int64 v20; // rax
  __int64 v21; // r10
  __int64 v22; // rax
  __int64 v23; // rcx
  __m128i si128; // xmm0
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __m128i v27; // xmm3
  __m128i v28; // xmm4
  __m128i v29; // xmm5
  __int64 v30; // rcx
  __m128i v31; // xmm0
  __m128i v32; // xmm1
  __m128i v33; // xmm2
  __m128i v34; // xmm3
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  char v37; // r9
  char v38; // dl
  char v39; // dl
  char v40; // dl
  char v41; // dl
  __int64 v42; // rsi
  char *v43; // rax
  _BYTE *v44; // rsi
  char v45; // si
  __m128i v46; // xmm0
  __m128i v47; // xmm1
  __m128i v48; // xmm2
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r12
  __int64 v55; // r14
  __int64 v56; // rbx
  __int64 v57; // r15
  __m128i v58; // xmm0
  __m128i v59; // xmm1
  __m128i v60; // xmm2
  __m128i v61; // xmm1
  __m128i v62; // xmm2
  __m128i v63; // xmm3
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // r14
  __int64 v69; // r15
  __m128i v70; // xmm0
  __m128i v71; // xmm1
  __m128i v72; // xmm2
  __int64 v73; // rsi
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rsi
  _QWORD *v77; // rdi
  __int64 v78; // rdx
  int v79; // edx
  __int64 v80; // rbx
  HANDLE v81; // r14
  HANDLE v82; // r12
  __int64 v83; // rdx
  __m128i *v84; // rax
  __int64 v85; // rbx
  __int64 v86; // rdi
  HANDLE v87; // r13
  __int64 v88; // rdx
  __int64 v89; // rcx
  int v90; // eax
  int v91; // edx
  __int64 v92; // rdx
  __int64 v93; // rcx
  unsigned __int64 v94; // r14
  unsigned int v95; // r15d
  unsigned __int64 v96; // rax
  unsigned int v97; // edx
  __int64 v98; // rsi
  __int64 v99; // rax
  unsigned int v100; // edx
  _QWORD *v101; // rdi
  __int64 v102; // rdx
  __int64 v104; // r8
  __int64 v105; // rdi
  __int64 v106; // rbx
  __int64 v107; // rax
  char v108; // al
  __int64 v109; // rsi
  __int64 v110; // rsi
  char v111; // al
  _BYTE v112[24]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v113; // [rsp+40h] [rbp-40h] BYREF
  int v114; // [rsp+48h] [rbp-38h]
  __m128i v115; // [rsp+50h] [rbp-30h] BYREF
  __int64 v116; // [rsp+60h] [rbp-20h]
  __m128i v117; // [rsp+68h] [rbp-18h] BYREF
  __int64 v118; // [rsp+78h] [rbp-8h]
  __m128i v119; // [rsp+80h] [rbp+0h]
  HANDLE v120; // [rsp+90h] [rbp+10h]
  __int64 v121; // [rsp+98h] [rbp+18h] BYREF
  __int64 v122; // [rsp+A0h] [rbp+20h]
  __int64 v123; // [rsp+A8h] [rbp+28h]
  HANDLE *v124; // [rsp+B0h] [rbp+30h] BYREF
  char *v125; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v126; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v127; // [rsp+C8h] [rbp+48h]
  __int64 v128; // [rsp+D0h] [rbp+50h]
  char v129; // [rsp+D8h] [rbp+58h]
  __m128i v130; // [rsp+E0h] [rbp+60h] BYREF
  __m128i v131; // [rsp+F0h] [rbp+70h] BYREF
  __m128i v132; // [rsp+100h] [rbp+80h] BYREF
  __m128i v133; // [rsp+110h] [rbp+90h] BYREF
  HANDLE v134[2]; // [rsp+120h] [rbp+A0h] BYREF
  __m128i v135; // [rsp+130h] [rbp+B0h] BYREF
  __m128i v136; // [rsp+140h] [rbp+C0h] BYREF
  HANDLE hObject[2]; // [rsp+150h] [rbp+D0h] BYREF
  __m128i v138; // [rsp+160h] [rbp+E0h]
  __m128i v139; // [rsp+170h] [rbp+F0h]
  __m128i v140; // [rsp+180h] [rbp+100h] BYREF
  __m128i v141; // [rsp+190h] [rbp+110h] BYREF
  __m128i v142; // [rsp+1A0h] [rbp+120h] BYREF
  __m128i v143; // [rsp+1B0h] [rbp+130h] BYREF
  __m128i v144; // [rsp+1C0h] [rbp+140h] BYREF
  __m128i v145[5]; // [rsp+1D0h] [rbp+150h] BYREF
  int v146; // [rsp+22Ch] [rbp+1ACh]
  __int64 v147; // [rsp+238h] [rbp+1B8h]
  __m128i v148; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v149; // [rsp+250h] [rbp+1D0h]
  char *v150; // [rsp+258h] [rbp+1D8h] BYREF
  __int64 v151; // [rsp+260h] [rbp+1E0h] BYREF
  __m128i v152; // [rsp+268h] [rbp+1E8h]
  __m128i v153; // [rsp+278h] [rbp+1F8h]
  __int64 v154; // [rsp+288h] [rbp+208h] BYREF
  __int64 v155; // [rsp+290h] [rbp+210h]
  __int64 v156; // [rsp+298h] [rbp+218h]
  __int64 v157; // [rsp+2A0h] [rbp+220h]
  __int64 v158; // [rsp+2A8h] [rbp+228h]
  __int64 v159; // [rsp+2B0h] [rbp+230h]
  __int64 v160; // [rsp+2B8h] [rbp+238h]

  v160 = -2;
  v5 = a1;
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8(&byte_1422392D0, 1, 0) )
    sub_141969A30(&byte_1422392D0);
  v6 = off_142240260;
  if ( 2 * *off_142240260 )
  {
    v7 = sub_14196A710(a1, a2, a3);
    LOBYTE(v7) = v7 ^ 1;
    if ( byte_1422392D1 )
    {
LABEL_5:
      if ( !(_BYTE)v7 && 2 * *v6 && !(unsigned __int8)sub_14196A710(a1, a2, a3) )
        byte_1422392D1 = 1;
      v8 = byte_1422392D0;
      byte_1422392D0 = 0;
      if ( v8 == 2 )
        WakeByAddressSingle(&byte_1422392D0);
      goto LABEL_9;
    }
  }
  else
  {
    v7 = 0;
    if ( byte_1422392D1 )
      goto LABEL_5;
  }
  if ( qword_1422392D8 == -1 )
  {
    v104 = -1;
    if ( !(_BYTE)v7 )
      goto LABEL_143;
  }
  else
  {
    v104 = qword_1422392E8;
    if ( qword_1422392E8 )
    {
      v105 = qword_1422392E0;
      v106 = qword_1422392E8;
      nullsub_1(a1, a2);
      v107 = sub_140001650(v106, 1);
      if ( !v107 )
      {
        LODWORD(v159) = v7;
        sub_14196B2DB(1, v106);
      }
      v4 = v107;
      sub_1419234B0(v107, v105, v106);
      v104 = v106;
      v3 = qword_1422392F0;
      if ( (_BYTE)v7 )
        goto LABEL_144;
      goto LABEL_143;
    }
    v4 = 1;
    v3 = qword_1422392F0;
    if ( !(_BYTE)v7 )
    {
LABEL_143:
      if ( 2 * *v6 )
      {
        v110 = v104;
        v111 = sub_14196A710(a1, a2, v104);
        v104 = v110;
        if ( !v111 )
          byte_1422392D1 = 1;
      }
    }
  }
LABEL_144:
  v108 = byte_1422392D0;
  byte_1422392D0 = 0;
  if ( v108 == 2 )
  {
    v109 = v104;
    WakeByAddressSingle(&byte_1422392D0);
    v104 = v109;
    if ( v109 == -1 )
      goto LABEL_9;
  }
  else if ( v104 == -1 )
  {
    goto LABEL_9;
  }
  v158 = v4;
  v159 = v104;
  sub_1416C49D0(&v140, v4, v104);
  if ( v140.m128i_i32[0] == 2 )
  {
    if ( (v140.m128i_i8[8] & 3u) - 2 >= 2 && (v140.m128i_i8[8] & 3) != 0 )
    {
      --v140.m128i_i64[1];
      v140.m128i_i8[0] = 3;
      sub_1416EBAD0(&v140.m128i_u64[1]);
    }
  }
  else if ( (unsigned __int8)sub_140991C90(v158, v159) )
  {
    v10 = v159;
    v126 = v159;
    v127 = v158;
    v128 = v159;
    v129 = v3;
    goto LABEL_10;
  }
  if ( v159 )
    sub_140001660(v158, v159, 1);
LABEL_9:
  sub_140986D90(&v126);
  v10 = v126;
  if ( v126 == -1 )
  {
    v154 = 0;
    v155 = 8;
    v156 = 0;
    v18 = -1;
    LOBYTE(v9) = 1;
    LODWORD(v158) = v9;
    v19 = 0;
    goto LABEL_75;
  }
LABEL_10:
  v11 = v127;
  v12 = v128;
  v159 = v10;
  v147 = v10;
  sub_1416DA570(&v130);
  v15 = v130.m128i_i64[1];
  v16 = v131.m128i_i64[0];
  v158 = v130.m128i_i64[1];
  if ( v131.m128i_i64[0] < 0 )
  {
    v17 = 0;
    goto LABEL_12;
  }
  if ( v131.m128i_i64[0] )
  {
    nullsub_1(v14, v13);
    v17 = 1;
    v20 = sub_140001650(v16, 1);
    if ( !v20 )
LABEL_12:
      sub_14196B2DB(v17, v16);
    v21 = v20;
    if ( v16 < 8 || (unsigned __int64)(v20 - v15) < 0x20 )
    {
      v22 = 0;
LABEL_28:
      v35 = v22;
      v36 = v16 & 3;
      if ( (v16 & 3) != 0 )
      {
        v35 = v22;
        do
        {
          v37 = *(_BYTE *)(v15 + v35);
          if ( v37 == 92 )
            v37 = 47;
          *(_BYTE *)(v21 + v35++) = v37;
          --v36;
        }
        while ( v36 );
      }
      if ( v22 - v16 <= 0xFFFFFFFFFFFFFFFCuLL )
      {
        do
        {
          v38 = *(_BYTE *)(v15 + v35);
          if ( v38 == 92 )
            v38 = 47;
          *(_BYTE *)(v21 + v35) = v38;
          v39 = *(_BYTE *)(v15 + v35 + 1);
          if ( v39 == 92 )
            v39 = 47;
          *(_BYTE *)(v21 + v35 + 1) = v39;
          v40 = *(_BYTE *)(v15 + v35 + 2);
          if ( v40 == 92 )
            v40 = 47;
          *(_BYTE *)(v21 + v35 + 2) = v40;
          v41 = *(_BYTE *)(v15 + v35 + 3);
          if ( v41 == 92 )
            v41 = 47;
          *(_BYTE *)(v21 + v35 + 3) = v41;
          v35 += 4;
        }
        while ( v16 != v35 );
      }
      goto LABEL_43;
    }
    if ( v16 >= 0x20 )
    {
      v22 = v16 & 0x7FFFFFFFFFFFFFE0LL;
      v23 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_141A504B0);
      v25 = _mm_load_si128((const __m128i *)&xmmword_141A34F10);
      do
      {
        v26 = _mm_loadu_si128((const __m128i *)(v15 + v23));
        v27 = _mm_loadu_si128((const __m128i *)(v15 + v23 + 16));
        v28 = _mm_cmpeq_epi8(v26, si128);
        v29 = _mm_cmpeq_epi8(v27, si128);
        *(__m128i *)(v21 + v23) = _mm_or_si128(_mm_and_si128(v28, v25), _mm_andnot_si128(v28, v26));
        *(__m128i *)(v21 + v23 + 16) = _mm_or_si128(_mm_and_si128(v29, v25), _mm_andnot_si128(v29, v27));
        v23 += 32;
      }
      while ( v22 != v23 );
      if ( v16 == v22 )
        goto LABEL_43;
      if ( (v16 & 0x18) == 0 )
        goto LABEL_28;
    }
    else
    {
      v22 = 0;
    }
    v30 = v22;
    v22 = v16 & 0x7FFFFFFFFFFFFFF8LL;
    v31 = _mm_load_si128((const __m128i *)&xmmword_141A504C0);
    v32 = _mm_load_si128((const __m128i *)&xmmword_141A34F30);
    do
    {
      v33 = _mm_loadl_epi64((const __m128i *)(v15 + v30));
      v34 = _mm_cmpeq_epi8(v33, v31);
      *(_QWORD *)(v21 + v30) = _mm_or_si128(_mm_and_si128(v34, v32), _mm_andnot_si128(v34, v33)).m128i_u64[0];
      v30 += 8;
    }
    while ( v22 != v30 );
    if ( v16 != v22 )
      goto LABEL_28;
  }
  else
  {
    v21 = 1;
  }
LABEL_43:
  v140.m128i_i64[0] = 0;
  v140.m128i_i64[1] = v16;
  v153.m128i_i64[0] = v21;
  v141.m128i_i64[0] = v21;
  v141.m128i_i64[1] = v16;
  v142.m128i_i64[0] = 0;
  v153.m128i_i64[1] = v16;
  v142.m128i_i64[1] = v16;
  v143.m128i_i64[0] = 0x2F0000002FLL;
  v143.m128i_i8[8] = 1;
  v144.m128i_i16[0] = 1;
  do
  {
    v42 = v141.m128i_i64[0];
    sub_140A09020(v134, &v141);
    if ( LODWORD(v134[0]) == 1 )
    {
      v43 = (char *)v134[1] - v140.m128i_i64[0];
      v44 = (_BYTE *)(v140.m128i_i64[0] + v42);
      v140.m128i_i64[0] = v135.m128i_i64[0];
      if ( v43 == (char *)11 )
        goto LABEL_51;
      continue;
    }
    if ( v144.m128i_i8[1] )
      break;
    v144.m128i_i8[1] = 1;
    if ( (v144.m128i_i8[0] | (v140.m128i_i64[1] != v140.m128i_i64[0])) != 1 )
      break;
    v44 = (_BYTE *)(v141.m128i_i64[0] + v140.m128i_i64[0]);
    if ( v140.m128i_i64[1] - v140.m128i_i64[0] == 11 )
    {
LABEL_51:
      if ( (*v44 | (unsigned __int8)(32 * ((unsigned __int8)(*v44 - 65) < 0x1Au))) == 119
        && (v44[1] | (unsigned __int8)(32 * ((unsigned __int8)(v44[1] - 65) < 0x1Au))) == 105
        && (v44[2] | (unsigned __int8)(32 * ((unsigned __int8)(v44[2] - 65) < 0x1Au))) == 110
        && (v44[3] | (unsigned __int8)(32 * ((unsigned __int8)(v44[3] - 65) < 0x1Au))) == 100
        && (v44[4] | (unsigned __int8)(32 * ((unsigned __int8)(v44[4] - 65) < 0x1Au))) == 111
        && (v44[5] | (unsigned __int8)(32 * ((unsigned __int8)(v44[5] - 65) < 0x1Au))) == 119
        && (v44[6] | (unsigned __int8)(32 * ((unsigned __int8)(v44[6] - 65) < 0x1Au))) == 115
        && (v44[7] | (unsigned __int8)(32 * ((unsigned __int8)(v44[7] - 65) < 0x1Au))) == 97
        && (v44[8] | (unsigned __int8)(32 * ((unsigned __int8)(v44[8] - 65) < 0x1Au))) == 112
        && (v44[9] | (unsigned __int8)(32 * ((unsigned __int8)(v44[9] - 65) < 0x1Au))) == 112
        && (v44[10] | (unsigned __int8)(32 * ((unsigned __int8)(v44[10] - 65) < 0x1Au))) == 115 )
      {
        v45 = 1;
        goto LABEL_64;
      }
    }
  }
  while ( v144.m128i_i8[1] != 1 );
  v45 = 0;
LABEL_64:
  if ( v153.m128i_i64[1] )
    sub_140001660(v153.m128i_i64[0], v153.m128i_i64[1], 1);
  if ( v130.m128i_i64[0] > 0 )
    sub_140001660(v158, v130.m128i_i64[0], 1);
  v154 = 0;
  v155 = 8;
  v156 = 0;
  if ( v45 )
  {
    v19 = 1;
    LODWORD(v158) = 0;
    goto LABEL_74;
  }
  v157 = v159;
  sub_14098CF60(v134, v11, v12);
  if ( LODWORD(v134[0]) == -1 )
  {
    *(_QWORD *)v5 = -1;
    LODWORD(v158) = 0;
    v98 = v156;
    if ( v156 )
      goto LABEL_124;
  }
  else
  {
    v145[0] = v139;
    v144 = v138;
    v46 = _mm_loadu_si128((const __m128i *)v134);
    v47 = _mm_loadu_si128(&v135);
    v48 = _mm_loadu_si128(&v136);
    v143 = _mm_loadu_si128((const __m128i *)hObject);
    v142 = v48;
    v141 = v47;
    v140 = v46;
    v148.m128i_i64[0] = v11;
    v148.m128i_i64[1] = v12;
    v130.m128i_i64[0] = (__int64)&v148;
    v130.m128i_i64[1] = (__int64)sub_1416CE600;
    v131.m128i_i64[0] = (__int64)&v140;
    v131.m128i_i64[1] = (__int64)sub_140D76130;
    sub_1416DAFA0(&v115, &unk_141A5D3B5, &v130);
    v49 = v156;
    if ( v156 == v154 )
      sub_141939F90(&v154);
    v50 = v155;
    v51 = 3 * v49;
    *(_QWORD *)(v155 + 8 * v51 + 16) = v116;
    *(__m128i *)(v50 + 8 * v51) = _mm_loadu_si128(&v115);
    v156 = v49 + 1;
    v157 = v159;
    sub_140906570(&v140);
    LODWORD(v158) = 0;
    v19 = 0;
LABEL_74:
    v18 = v159;
LABEL_75:
    v159 = v18;
    v157 = v18;
    sub_140990190(&v140);
    v55 = v140.m128i_i64[1];
    v54 = v140.m128i_i64[0];
    v57 = v141.m128i_i64[1];
    v56 = v141.m128i_i64[0];
    if ( v140.m128i_i64[0] == -1 )
    {
      if ( v140.m128i_i64[1] == -1 )
      {
        nullsub_1(v53, v52);
        v55 = 50;
        v84 = (__m128i *)sub_140001650(50, 1);
        if ( !v84 )
        {
          v157 = v159;
          sub_14196B2DB(1, 50);
        }
        v56 = (__int64)v84;
        qmemcpy(&v84[1], " Microsoft Store app was not found", 34);
        *v84 = _mm_loadu_si128((const __m128i *)&xmmword_141A59AD4);
        v54 = 8;
        v57 = 50;
      }
      else
      {
        v151 = v140.m128i_i64[1];
        v152 = v141;
        v113 = sub_1416AEBD0(v53, v52);
        v114 = v79;
        v140.m128i_i64[0] = (__int64)&v151;
        v140.m128i_i64[1] = (__int64)sub_1400015F0;
        sub_1416DAFA0(v112, &unk_141A5DDF6, &v140);
        sub_1406C9730((unsigned int)aCodexProcess, 13, (unsigned int)aLaunchRequeste, 16, (__int64)v112);
        v134[0] = &v151;
        v134[1] = sub_1400015F0;
        sub_1416DAFA0(&v140, &unk_141A5DE32, v134);
        v153 = v140;
        v80 = v141.m128i_i64[0];
        sub_1416B94E0(&v140, aExplorerExe, 12);
        v146 = 0x8000000;
        sub_1416B93C0(&v140, v153.m128i_i64[1], v80);
        sub_1416BCAE0(v134, &v140);
        v81 = v134[0];
        v82 = v134[1];
        if ( v134[0] != HANDLE_FLAG_PROTECT_FROM_CLOSE )
        {
          v85 = v5;
          v120 = (HANDLE)v135.m128i_i64[1];
          v86 = v135.m128i_i64[0];
          v119 = v136;
          v87 = hObject[1];
          CloseHandle(hObject[0]);
          CloseHandle(v87);
          if ( v81 )
            CloseHandle(v82);
          v5 = v85;
          if ( v86 )
            CloseHandle(v120);
          if ( v119.m128i_i64[0] )
            CloseHandle((HANDLE)v119.m128i_i64[1]);
          sub_1400358E0(&v140);
          v90 = sub_1416AEBD0(v89, v88);
          v94 = sub_1416D0210(v90, v91, 10, 0, (__int64)&off_141A5D340);
          v95 = v92;
          while ( 1 )
          {
            v96 = sub_1416AEBD0(v93, v92);
            if ( v96 == v94 )
            {
              if ( v97 >= v95 )
                goto LABEL_117;
            }
            else if ( v96 >= v94 )
            {
LABEL_117:
              v140.m128i_i64[0] = (__int64)&v151;
              v140.m128i_i64[1] = (__int64)sub_1400015F0;
              sub_1416DAFA0(&v121, &unk_141A5DE52, &v140);
              v55 = v121;
              v56 = v122;
              v57 = v123;
              v83 = v153.m128i_i64[0];
              if ( v153.m128i_i64[0] )
                goto LABEL_97;
              goto LABEL_98;
            }
            if ( (unsigned int)sub_140D6E640(aChatgpt, 7) == 1 )
            {
              v99 = sub_1416AED20(&v113);
              *(_OWORD *)v134 = 0x3E8 * (unsigned __int128)(unsigned __int64)v99 + v100 / 0xF4240uLL;
              v140.m128i_i64[0] = (__int64)&v151;
              v140.m128i_i64[1] = (__int64)sub_1400015F0;
              v141.m128i_i64[0] = (__int64)v134;
              v141.m128i_i64[1] = (__int64)sub_1416E85A0;
              sub_1416DAFA0(&v117, &unk_141A5DE9A, &v140);
              sub_1406C9730((unsigned int)aCodexProcess, 13, (unsigned int)aLaunchReady_0, 12, (__int64)&v117);
              if ( v153.m128i_i64[0] )
                sub_140001660(v153.m128i_i64[1], v153.m128i_i64[0], 1);
              if ( v151 )
                sub_140001660(v152.m128i_i64[0], v151, 1);
              goto LABEL_123;
            }
            sub_1416C57D0(0, 80000000);
          }
        }
        v150 = (char *)v134[1];
        v124 = (HANDLE *)&v150;
        v125 = (char *)sub_1416EA080;
        sub_1416DAFA0(&v148, &unk_141A59B06, &v124);
        v56 = v148.m128i_i64[1];
        v55 = v148.m128i_i64[0];
        v57 = v149;
        if ( ((unsigned __int8)v150 & 3u) - 2 >= 2 && ((unsigned __int8)v150 & 3) != 0 )
        {
          v125 = v150 - 1;
          LOBYTE(v124) = 3;
          sub_1416EBAD0(&v125);
        }
        sub_1400358E0(&v140);
        v83 = v153.m128i_i64[0];
        if ( v153.m128i_i64[0] )
LABEL_97:
          sub_140001660(v153.m128i_i64[1], v83, 1);
LABEL_98:
        v54 = 10;
        if ( v151 )
          sub_140001660(v152.m128i_i64[0], v151, 1);
      }
    }
    else
    {
      v58 = _mm_loadu_si128(&v142);
      v59 = _mm_loadu_si128(&v143);
      v60 = _mm_loadu_si128(&v144);
      v133 = _mm_loadu_si128(v145);
      v132 = v60;
      v131 = v59;
      v130 = v58;
    }
    v140.m128i_i64[0] = v54;
    v140.m128i_i64[1] = v55;
    v141.m128i_i64[0] = v56;
    v141.m128i_i64[1] = v57;
    v61 = _mm_load_si128(&v131);
    v62 = _mm_load_si128(&v132);
    v63 = _mm_load_si128(&v133);
    v142 = _mm_load_si128(&v130);
    v143 = v61;
    v144 = v62;
    v145[0] = v63;
    v134[0] = &v140;
    v134[1] = sub_140D76130;
    sub_1416DAFA0(&v117, &unk_141A5D3CA, v134);
    v64 = v156;
    if ( v156 == v154 )
      sub_141939F90(&v154);
    v65 = v155;
    v66 = 3 * v64;
    *(_QWORD *)(v155 + 8 * v66 + 16) = v118;
    *(__m128i *)(v65 + 8 * v66) = _mm_loadu_si128(&v117);
    v156 = v64 + 1;
    v157 = v159;
    sub_140906570(&v140);
    v67 = v159;
    if ( (v159 == -1) | (unsigned __int8)v19 ^ 1 )
    {
LABEL_84:
      v157 = v67;
      sub_1406C5480((unsigned int)&v140, v155, v156, (unsigned int)&unk_141A57CB2, 3);
      v135.m128i_i64[0] = v141.m128i_i64[0];
      *(__m128i *)v134 = _mm_loadu_si128(&v140);
      v130.m128i_i64[0] = (__int64)v134;
      v130.m128i_i64[1] = (__int64)sub_1400015F0;
      sub_1416DAFA0(&v140, &unk_141A5D404, &v130);
      if ( v134[0] )
        sub_140001660(v134[1], v134[0], 1);
      *(_QWORD *)(v5 + 24) = v141.m128i_i64[0];
      *(__m128i *)(v5 + 8) = _mm_loadu_si128(&v140);
      *(_QWORD *)v5 = 10;
      v76 = v156;
      if ( v156 )
      {
        v77 = (_QWORD *)(v155 + 8);
        do
        {
          v78 = *(v77 - 1);
          if ( v78 )
            sub_140001660(*v77, v78, 1);
          v77 += 3;
          --v76;
        }
        while ( v76 );
      }
    }
    else
    {
      v68 = v127;
      v69 = v128;
      v157 = v159;
      sub_14098CF60(v134, v127, v128);
      if ( LODWORD(v134[0]) != -1 )
      {
        v145[0] = v139;
        v144 = v138;
        v70 = _mm_loadu_si128((const __m128i *)v134);
        v71 = _mm_loadu_si128(&v135);
        v72 = _mm_loadu_si128(&v136);
        v143 = _mm_loadu_si128((const __m128i *)hObject);
        v142 = v72;
        v141 = v71;
        v140 = v70;
        v121 = v68;
        v122 = v69;
        v130.m128i_i64[0] = (__int64)&v121;
        v130.m128i_i64[1] = (__int64)sub_1416CE600;
        v131.m128i_i64[0] = (__int64)&v140;
        v131.m128i_i64[1] = (__int64)sub_140D76130;
        sub_1416DAFA0(&v148, &unk_141A5D3E9, &v130);
        v73 = v156;
        if ( v156 == v154 )
          sub_141939F90(&v154);
        v74 = v155;
        v75 = 3 * v73;
        *(_QWORD *)(v155 + 8 * v75 + 16) = v149;
        *(__m128i *)(v74 + 8 * v75) = _mm_loadu_si128(&v148);
        v156 = v73 + 1;
        v157 = v159;
        sub_140906570(&v140);
        v67 = v159;
        goto LABEL_84;
      }
LABEL_123:
      *(_QWORD *)v5 = -1;
      v98 = v156;
      if ( v156 )
      {
LABEL_124:
        v101 = (_QWORD *)(v155 + 8);
        do
        {
          v102 = *(v101 - 1);
          if ( v102 )
            sub_140001660(*v101, v102, 1);
          v101 += 3;
          --v98;
        }
        while ( v98 );
      }
    }
  }
  if ( v154 )
    sub_140001660(v155, 24 * v154, 8);
  if ( !(_BYTE)v158 && v159 )
    sub_140001660(v127, v159, 1);
  return v5;
}
