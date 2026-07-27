// module: codexmate_lib/platform/process
// addr: 0x1403b6530
// name: sub_1403B6530
// win 1.2.1 | module src/platform/process.rs | attributed via panic-Location xref (win-native)
_QWORD *__fastcall sub_1403B6530(_QWORD *a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // r15
  __int64 *v4; // rsi
  int v5; // r12d
  char v6; // al
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rax
  char v15; // si
  __int64 v16; // rax
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // rcx
  __m128i si128; // xmm0
  __m128i v21; // xmm1
  __m128i v22; // xmm2
  __m128i v23; // xmm3
  __m128i v24; // xmm4
  __m128i v25; // xmm5
  __int64 v26; // rcx
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __m128i v29; // xmm2
  __m128i v30; // xmm3
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  char v33; // r9
  char v34; // dl
  char v35; // dl
  char v36; // dl
  char v37; // dl
  __int64 v38; // rsi
  char *v39; // rax
  _BYTE *v40; // rsi
  char v41; // r14
  __int64 v42; // rsi
  __m128i v43; // xmm0
  __m128i v44; // xmm1
  __m128i v45; // xmm2
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r12
  __int64 v53; // r14
  unsigned __int128 v54; // kr60_16
  __m128i v55; // xmm0
  __m128i v56; // xmm1
  __m128i v57; // xmm2
  __m128i v58; // xmm1
  __m128i v59; // xmm2
  __m128i v60; // xmm3
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // r14
  __int64 v66; // r15
  __m128i v67; // xmm0
  __m128i v68; // xmm1
  __m128i v69; // xmm2
  __int64 v70; // rsi
  __int64 v71; // rax
  __int64 v72; // rcx
  _QWORD *v73; // rcx
  __int64 v74; // rsi
  _QWORD *v75; // rdi
  __int64 v76; // rdx
  int v77; // edx
  __int64 v78; // rbx
  HANDLE v79; // r14
  HANDLE v80; // r12
  __int64 v81; // rbx
  unsigned __int64 v82; // r15
  __int64 v83; // rdx
  __m128i *v84; // rax
  __int64 v85; // rdi
  __int64 v86; // rbx
  HANDLE v87; // r13
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  int v91; // eax
  int v92; // edx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  unsigned __int64 v96; // r15
  unsigned int v97; // r12d
  const char *v98; // r14
  unsigned __int64 v99; // rax
  unsigned int v100; // edx
  __int64 v101; // rax
  __int64 v102; // rax
  unsigned int v103; // edx
  __int64 v104; // rsi
  _QWORD *v105; // rdi
  __int64 v106; // rdx
  __int64 v108; // rdx
  __int64 v109; // rbx
  __int64 v110; // rdi
  __int64 v111; // r14
  __int64 v112; // rax
  char v113; // al
  __m128i v114; // xmm1
  __m128i v115; // xmm2
  __m128i v116; // xmm3
  __int64 v117; // rsi
  __int64 v118; // rsi
  char v119; // al
  _QWORD v120[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v121[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v122; // [rsp+58h] [rbp-28h] BYREF
  int v123; // [rsp+60h] [rbp-20h]
  __m128i v124; // [rsp+68h] [rbp-18h] BYREF
  __int64 v125; // [rsp+78h] [rbp-8h]
  __m128i v126; // [rsp+80h] [rbp+0h] BYREF
  __int64 v127; // [rsp+90h] [rbp+10h]
  HANDLE v128; // [rsp+98h] [rbp+18h]
  __int64 v129; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v130; // [rsp+A8h] [rbp+28h]
  __int64 v131; // [rsp+B0h] [rbp+30h]
  char v132; // [rsp+B8h] [rbp+38h]
  __m128i v133; // [rsp+C0h] [rbp+40h] BYREF
  __m128i v134; // [rsp+D0h] [rbp+50h] BYREF
  __m128i v135; // [rsp+E0h] [rbp+60h] BYREF
  __m128i v136; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v137; // [rsp+108h] [rbp+88h]
  HANDLE v138; // [rsp+110h] [rbp+90h] BYREF
  __int64 v139; // [rsp+118h] [rbp+98h] BYREF
  __m128i v140; // [rsp+120h] [rbp+A0h]
  __m128i v141; // [rsp+130h] [rbp+B0h] BYREF
  unsigned __int128 v142; // [rsp+140h] [rbp+C0h] BYREF
  __m128i v143; // [rsp+150h] [rbp+D0h] BYREF
  __m128i v144; // [rsp+160h] [rbp+E0h] BYREF
  __m128i v145; // [rsp+170h] [rbp+F0h] BYREF
  __m128i v146[5]; // [rsp+180h] [rbp+100h] BYREF
  int v147; // [rsp+1DCh] [rbp+15Ch]
  HANDLE v148[2]; // [rsp+1F0h] [rbp+170h] BYREF
  __m128i v149; // [rsp+200h] [rbp+180h] BYREF
  __m128i v150; // [rsp+210h] [rbp+190h] BYREF
  HANDLE hObject[2]; // [rsp+220h] [rbp+1A0h] BYREF
  __m128i v152; // [rsp+230h] [rbp+1B0h]
  __m128i v153; // [rsp+240h] [rbp+1C0h]
  __m128i v154; // [rsp+258h] [rbp+1D8h] BYREF
  unsigned __int64 v155; // [rsp+268h] [rbp+1E8h]
  HANDLE v156; // [rsp+270h] [rbp+1F0h]
  _QWORD *v157; // [rsp+278h] [rbp+1F8h]
  __int64 v158; // [rsp+280h] [rbp+200h]
  __int64 v159; // [rsp+288h] [rbp+208h] BYREF
  __int64 v160; // [rsp+290h] [rbp+210h]
  __int64 v161; // [rsp+298h] [rbp+218h]
  __int64 v162; // [rsp+2A0h] [rbp+220h]
  __int64 v163; // [rsp+2A8h] [rbp+228h]
  __int64 v164; // [rsp+2B0h] [rbp+230h]
  __int64 v165; // [rsp+2B8h] [rbp+238h]

  v165 = -2;
  v157 = a1;
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8(&byte_141EC2408, 1, 0) )
    sub_1416C15B0(&byte_141EC2408);
  v4 = off_141EC90B8;
  if ( 2 * *off_141EC90B8 )
  {
    v5 = sub_1416C2250(a1, a2);
    LOBYTE(v5) = v5 ^ 1;
    if ( byte_141EC2409 )
    {
LABEL_5:
      if ( !(_BYTE)v5 && 2 * *v4 && !(unsigned __int8)sub_1416C2250(a1, a2) )
        byte_141EC2409 = 1;
      v6 = byte_141EC2408;
      byte_141EC2408 = 0;
      if ( v6 == 2 )
        WakeByAddressSingle(&byte_141EC2408);
      goto LABEL_9;
    }
  }
  else
  {
    v5 = 0;
    if ( byte_141EC2409 )
      goto LABEL_5;
  }
  if ( (_QWORD)ymmword_141EC2410 == -1 )
  {
    v108 = -1;
    if ( (_BYTE)v5 )
      goto LABEL_143;
    goto LABEL_142;
  }
  v108 = MEMORY[0x141EC2420];
  if ( (__int64)MEMORY[0x141EC2420] < 0 )
  {
    v109 = 0;
    goto LABEL_134;
  }
  if ( !(_QWORD)MEMORY[0x141EC2420] )
  {
    v3 = 1;
    v2 = BYTE8(MEMORY[0x141EC2420]);
    if ( (_BYTE)v5 )
      goto LABEL_143;
LABEL_142:
    if ( 2 * *v4 )
    {
      v118 = v108;
      v119 = sub_1416C2250(a1, v108);
      v108 = v118;
      if ( !v119 )
        byte_141EC2409 = 1;
    }
    goto LABEL_143;
  }
  v110 = *((_QWORD *)&ymmword_141EC2410 + 1);
  v111 = MEMORY[0x141EC2420];
  nullsub_1(a1);
  v109 = 1;
  v112 = sub_140001650(v111, 1);
  v108 = v111;
  if ( !v112 )
  {
LABEL_134:
    LODWORD(v164) = v5;
    sub_1416C2D4B(v109, v108);
  }
  v3 = v112;
  sub_141684120(v112, v110, v111);
  v108 = v111;
  v2 = BYTE8(MEMORY[0x141EC2420]);
  if ( !(_BYTE)v5 )
    goto LABEL_142;
LABEL_143:
  v113 = byte_141EC2408;
  byte_141EC2408 = 0;
  if ( v113 == 2 )
  {
    v117 = v108;
    WakeByAddressSingle(&byte_141EC2408);
    v108 = v117;
    if ( v117 == -1 )
      goto LABEL_9;
  }
  else if ( v108 == -1 )
  {
    goto LABEL_9;
  }
  v162 = v3;
  v164 = v108;
  sub_141486710(&v141, v3, v108);
  if ( v141.m128i_i32[0] == 2 )
  {
    v148[1] = (HANDLE)v141.m128i_i64[1];
    v148[0] = HANDLE_FLAG_PROTECT_FROM_CLOSE;
  }
  else
  {
    v114 = _mm_loadu_si128((const __m128i *)&v142);
    v115 = _mm_loadu_si128(&v143);
    v116 = _mm_loadu_si128(&v144);
    *(__m128i *)v148 = v141;
    v153.m128i_i64[0] = v146[0].m128i_i64[0];
    v152 = _mm_loadu_si128(&v145);
    *(__m128i *)hObject = v116;
    v150 = v115;
    v149 = v114;
    if ( v141.m128i_i64[0] != 2 )
    {
      v7 = v164;
      v129 = v164;
      v130 = v162;
      v131 = v164;
      v132 = v2;
      goto LABEL_10;
    }
  }
  sub_140018650(&v148[1]);
  if ( v164 )
    sub_140001660(v162, v164, 1);
LABEL_9:
  sub_1403F84D0(&v129);
  v7 = v129;
  if ( v129 == -1 )
  {
    v159 = 0;
    v160 = 8;
    v161 = 0;
    v14 = -1;
    v15 = 0;
    goto LABEL_74;
  }
LABEL_10:
  v8 = v130;
  v9 = v131;
  v164 = v7;
  v137 = v7;
  sub_14149B760(&v133, v130, v131);
  v11 = v133.m128i_i64[1];
  v12 = v134.m128i_i64[0];
  v162 = v133.m128i_i64[1];
  if ( v134.m128i_i64[0] < 0 )
  {
    v13 = 0;
    goto LABEL_12;
  }
  if ( v134.m128i_i64[0] )
  {
    nullsub_1(v10);
    v13 = 1;
    v16 = sub_140001650(v12, 1);
    if ( !v16 )
LABEL_12:
      sub_1416C2D4B(v13, v12);
    v17 = v16;
    if ( v12 < 8 || (unsigned __int64)(v16 - v11) < 0x20 )
    {
      v18 = 0;
LABEL_28:
      v31 = v18;
      v32 = v12 & 3;
      if ( (v12 & 3) != 0 )
      {
        v31 = v18;
        do
        {
          v33 = *(_BYTE *)(v11 + v31);
          if ( v33 == 92 )
            v33 = 47;
          *(_BYTE *)(v17 + v31++) = v33;
          --v32;
        }
        while ( v32 );
      }
      if ( v18 - v12 <= 0xFFFFFFFFFFFFFFFCuLL )
      {
        do
        {
          v34 = *(_BYTE *)(v11 + v31);
          if ( v34 == 92 )
            v34 = 47;
          *(_BYTE *)(v17 + v31) = v34;
          v35 = *(_BYTE *)(v11 + v31 + 1);
          if ( v35 == 92 )
            v35 = 47;
          *(_BYTE *)(v17 + v31 + 1) = v35;
          v36 = *(_BYTE *)(v11 + v31 + 2);
          if ( v36 == 92 )
            v36 = 47;
          *(_BYTE *)(v17 + v31 + 2) = v36;
          v37 = *(_BYTE *)(v11 + v31 + 3);
          if ( v37 == 92 )
            v37 = 47;
          *(_BYTE *)(v17 + v31 + 3) = v37;
          v31 += 4;
        }
        while ( v12 != v31 );
      }
      goto LABEL_43;
    }
    if ( v12 >= 0x20 )
    {
      v18 = v12 & 0x7FFFFFFFFFFFFFE0LL;
      v19 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_141748CE0);
      v21 = _mm_load_si128((const __m128i *)&xmmword_141748CF0);
      do
      {
        v22 = _mm_loadu_si128((const __m128i *)(v11 + v19));
        v23 = _mm_loadu_si128((const __m128i *)(v11 + v19 + 16));
        v24 = _mm_cmpeq_epi8(v22, si128);
        v25 = _mm_cmpeq_epi8(v23, si128);
        *(__m128i *)(v17 + v19) = _mm_or_si128(_mm_and_si128(v24, v21), _mm_andnot_si128(v24, v22));
        *(__m128i *)(v17 + v19 + 16) = _mm_or_si128(_mm_and_si128(v25, v21), _mm_andnot_si128(v25, v23));
        v19 += 32;
      }
      while ( v18 != v19 );
      if ( v12 == v18 )
        goto LABEL_43;
      if ( (v12 & 0x18) == 0 )
        goto LABEL_28;
    }
    else
    {
      v18 = 0;
    }
    v26 = v18;
    v18 = v12 & 0x7FFFFFFFFFFFFFF8LL;
    v27 = _mm_load_si128((const __m128i *)&xmmword_141748D00);
    v28 = _mm_load_si128((const __m128i *)&xmmword_141748D10);
    do
    {
      v29 = _mm_loadl_epi64((const __m128i *)(v11 + v26));
      v30 = _mm_cmpeq_epi8(v29, v27);
      *(_QWORD *)(v17 + v26) = _mm_or_si128(_mm_and_si128(v30, v28), _mm_andnot_si128(v30, v29)).m128i_u64[0];
      v26 += 8;
    }
    while ( v18 != v26 );
    if ( v12 != v18 )
      goto LABEL_28;
  }
  else
  {
    v17 = 1;
  }
LABEL_43:
  v141.m128i_i64[0] = 0;
  v141.m128i_i64[1] = v12;
  v156 = (HANDLE)v17;
  *(_QWORD *)&v142 = v17;
  *((_QWORD *)&v142 + 1) = v12;
  v143.m128i_i64[0] = 0;
  v158 = v12;
  v143.m128i_i64[1] = v12;
  v144.m128i_i64[0] = 0x2F0000002FLL;
  v144.m128i_i8[8] = 1;
  v145.m128i_i16[0] = 1;
  do
  {
    v38 = v142;
    sub_140421EE0(v148, &v142);
    if ( LODWORD(v148[0]) == 1 )
    {
      v39 = (char *)v148[1] - v141.m128i_i64[0];
      v40 = (_BYTE *)(v141.m128i_i64[0] + v38);
      v141.m128i_i64[0] = v149.m128i_i64[0];
      if ( v39 == (char *)11 )
        goto LABEL_51;
      continue;
    }
    if ( v145.m128i_i8[1] )
      break;
    v145.m128i_i8[1] = 1;
    if ( (v145.m128i_i8[0] | (v141.m128i_i64[1] != v141.m128i_i64[0])) != 1 )
      break;
    v40 = (_BYTE *)(v142 + v141.m128i_i64[0]);
    if ( v141.m128i_i64[1] - v141.m128i_i64[0] == 11 )
    {
LABEL_51:
      if ( (*v40 | (unsigned __int8)(32 * ((unsigned __int8)(*v40 - 65) < 0x1Au))) == 119
        && (v40[1] | (unsigned __int8)(32 * ((unsigned __int8)(v40[1] - 65) < 0x1Au))) == 105
        && (v40[2] | (unsigned __int8)(32 * ((unsigned __int8)(v40[2] - 65) < 0x1Au))) == 110
        && (v40[3] | (unsigned __int8)(32 * ((unsigned __int8)(v40[3] - 65) < 0x1Au))) == 100
        && (v40[4] | (unsigned __int8)(32 * ((unsigned __int8)(v40[4] - 65) < 0x1Au))) == 111
        && (v40[5] | (unsigned __int8)(32 * ((unsigned __int8)(v40[5] - 65) < 0x1Au))) == 119
        && (v40[6] | (unsigned __int8)(32 * ((unsigned __int8)(v40[6] - 65) < 0x1Au))) == 115
        && (v40[7] | (unsigned __int8)(32 * ((unsigned __int8)(v40[7] - 65) < 0x1Au))) == 97
        && (v40[8] | (unsigned __int8)(32 * ((unsigned __int8)(v40[8] - 65) < 0x1Au))) == 112
        && (v40[9] | (unsigned __int8)(32 * ((unsigned __int8)(v40[9] - 65) < 0x1Au))) == 112
        && (v40[10] | (unsigned __int8)(32 * ((unsigned __int8)(v40[10] - 65) < 0x1Au))) == 115 )
      {
        v41 = 1;
        goto LABEL_64;
      }
    }
  }
  while ( v145.m128i_i8[1] != 1 );
  v41 = 0;
LABEL_64:
  v42 = v162;
  if ( v158 )
    sub_140001660(v156, v158, 1);
  if ( v133.m128i_i64[0] > 0 )
    sub_140001660(v42, v133.m128i_i64[0], 1);
  v159 = 0;
  v160 = 8;
  v161 = 0;
  v15 = 1;
  if ( !v41 )
  {
    v163 = v164;
    sub_1403FD960(v148, v8, v9);
    if ( LODWORD(v148[0]) != -1 )
    {
      v146[0] = v153;
      v145 = v152;
      v43 = _mm_loadu_si128((const __m128i *)v148);
      v44 = _mm_loadu_si128(&v149);
      v45 = _mm_loadu_si128(&v150);
      v144 = _mm_loadu_si128((const __m128i *)hObject);
      v143 = v45;
      v142 = (unsigned __int128)v44;
      v141 = v43;
      v154.m128i_i64[0] = v8;
      v154.m128i_i64[1] = v9;
      v133.m128i_i64[0] = (__int64)&v154;
      v133.m128i_i64[1] = (__int64)sub_14148F3A0;
      v134.m128i_i64[0] = (__int64)&v141;
      v134.m128i_i64[1] = (__int64)sub_140B036A0;
      sub_14149C0F0(&v124, &unk_141751DC6, &v133);
      v46 = v161;
      if ( v161 == v159 )
        sub_141689AB0(&v159);
      v47 = v160;
      v48 = 3 * v46;
      *(_QWORD *)(v160 + 8 * v48 + 16) = v125;
      *(__m128i *)(v47 + 8 * v48) = _mm_loadu_si128(&v124);
      v161 = v46 + 1;
      v163 = v164;
      sub_14034ED40(&v141);
      v15 = 0;
      goto LABEL_73;
    }
LABEL_120:
    *v157 = -1;
    v104 = v161;
    if ( v161 )
    {
      v105 = (_QWORD *)(v160 + 8);
      do
      {
        v106 = *(v105 - 1);
        if ( v106 )
          sub_140001660(*v105, v106, 1);
        v105 += 3;
        --v104;
      }
      while ( v104 );
    }
    goto LABEL_125;
  }
LABEL_73:
  v14 = v164;
LABEL_74:
  v164 = v14;
  v163 = v14;
  sub_140401CF0(&v141);
  v53 = v141.m128i_i64[1];
  v52 = v141.m128i_i64[0];
  v54 = v142;
  if ( v141.m128i_i64[0] == -1 )
  {
    if ( v141.m128i_i64[1] == -1 )
    {
      nullsub_1(v50);
      v53 = 50;
      v84 = (__m128i *)sub_140001650(50, 1);
      if ( !v84 )
      {
        v163 = v164;
        sub_1416C2D4B(1, 50);
      }
      qmemcpy(&v84[1], " Microsoft Store app was not found", 34);
      *v84 = _mm_loadu_si128((const __m128i *)&xmmword_14174D735);
      v52 = 8;
      v54 = __PAIR128__(50, (unsigned __int64)v84);
    }
    else
    {
      v139 = v141.m128i_i64[1];
      v140 = (__m128i)v142;
      v122 = sub_141471910(v50, v49, v51);
      v123 = v77;
      v141.m128i_i64[0] = (__int64)&v139;
      v141.m128i_i64[1] = (__int64)sub_1400015F0;
      sub_14149C0F0(v120, &unk_1417527FE, &v141);
      sub_1403565C0((unsigned int)aCodexProcess, 13, (unsigned int)aLaunchRequeste, 16, (__int64)v120);
      v148[0] = &v139;
      v148[1] = sub_1400015F0;
      sub_14149C0F0(&v141, &unk_14175283A, v148);
      v162 = v141.m128i_i64[1];
      v158 = v141.m128i_i64[0];
      v78 = v142;
      sub_14147B720(&v141, aExplorerExe, 12);
      v147 = 0x8000000;
      sub_14147B600(&v141, v162, v78);
      sub_1414814B0(v148, &v141);
      v79 = v148[0];
      v80 = v148[1];
      if ( v148[0] != HANDLE_FLAG_PROTECT_FROM_CLOSE )
      {
        v128 = (HANDLE)v149.m128i_i64[1];
        v85 = v149.m128i_i64[0];
        v156 = (HANDLE)v150.m128i_i64[1];
        v86 = v150.m128i_i64[0];
        v87 = hObject[1];
        CloseHandle(hObject[0]);
        CloseHandle(v87);
        if ( v79 )
          CloseHandle(v80);
        if ( v85 )
          CloseHandle(v128);
        if ( v86 )
          CloseHandle(v156);
        sub_14034D6C0(&v141);
        v91 = sub_141471910(v89, v88, v90);
        v96 = sub_141491390(v91, v92, 10, 0, (__int64)&off_1417529A0);
        v97 = v93;
        v98 = aChatgpt;
        while ( 1 )
        {
          v99 = sub_141471910(v94, v93, v95);
          if ( v99 == v96 )
          {
            if ( v100 >= v97 )
              goto LABEL_112;
          }
          else if ( v99 >= v96 )
          {
LABEL_112:
            v148[0] = &v139;
            v148[1] = sub_1400015F0;
            sub_14149C0F0(&v141.m128i_u64[1], &unk_14174D767, v148);
            v53 = v141.m128i_i64[1];
            v54 = v142;
            v133 = v143;
            v134 = v144;
            v135 = v145;
            v136 = v146[0];
            v83 = v158;
            if ( v158 )
              goto LABEL_93;
            goto LABEL_94;
          }
          if ( (unsigned int)sub_140AECEB0(aChatgpt, 7) == 1 )
          {
            v101 = 7;
LABEL_116:
            v154.m128i_i64[0] = (__int64)v98;
            v154.m128i_i64[1] = v101;
            v102 = sub_141471AC0(&v122);
            *(_OWORD *)v148 = 0x3E8 * (unsigned __int128)(unsigned __int64)v102 + v103 / 0xF4240uLL;
            v141.m128i_i64[0] = (__int64)&v139;
            v141.m128i_i64[1] = (__int64)sub_1400015F0;
            *(_QWORD *)&v142 = &v154;
            *((_QWORD *)&v142 + 1) = sub_14041F680;
            v143.m128i_i64[0] = (__int64)v148;
            v143.m128i_i64[1] = (__int64)sub_1414A9600;
            sub_14149C0F0(&v126, &unk_14175285A, &v141);
            sub_1403565C0((unsigned int)aCodexProcess, 13, (unsigned int)aLaunchReady, 12, (__int64)&v126);
            if ( v158 )
              sub_140001660(v162, v158, 1);
            if ( v139 )
              sub_140001660(v140.m128i_i64[0], v139, 1);
            goto LABEL_120;
          }
          if ( (unsigned int)sub_140AECEB0(aCodex_0, 5) == 1 )
          {
            v101 = 5;
            v98 = aCodex_0;
            goto LABEL_116;
          }
          sub_141487490(0, 80000000);
        }
      }
      v138 = v148[1];
      v121[0] = &v138;
      v121[1] = sub_141490720;
      sub_14149C0F0(&v154, &unk_14174D7AF, v121);
      v81 = v154.m128i_i64[1];
      v53 = v154.m128i_i64[0];
      v82 = v155;
      sub_140018650(&v138);
      sub_14034D6C0(&v141);
      v83 = v158;
      v54 = __PAIR128__(v82, v81);
      if ( v158 )
LABEL_93:
        sub_140001660(v162, v83, 1);
LABEL_94:
      v52 = 10;
      if ( v139 )
        sub_140001660(v140.m128i_i64[0], v139, 1);
    }
  }
  else
  {
    v55 = _mm_loadu_si128(&v143);
    v56 = _mm_loadu_si128(&v144);
    v57 = _mm_loadu_si128(&v145);
    v136 = _mm_loadu_si128(v146);
    v135 = v57;
    v134 = v56;
    v133 = v55;
  }
  v141.m128i_i64[0] = v52;
  v141.m128i_i64[1] = v53;
  v142 = v54;
  v58 = _mm_load_si128(&v134);
  v59 = _mm_load_si128(&v135);
  v60 = _mm_load_si128(&v136);
  v143 = _mm_load_si128(&v133);
  v144 = v58;
  v145 = v59;
  v146[0] = v60;
  v148[0] = &v141;
  v148[1] = sub_140B036A0;
  sub_14149C0F0(&v126, &unk_141751DDB, v148);
  v61 = v161;
  if ( v161 == v159 )
    sub_141689AB0(&v159);
  v62 = v160;
  v63 = 3 * v61;
  *(_QWORD *)(v160 + 8 * v63 + 16) = v127;
  *(__m128i *)(v62 + 8 * v63) = _mm_loadu_si128(&v126);
  v161 = v61 + 1;
  v163 = v164;
  sub_14034ED40(&v141);
  v64 = v164;
  if ( !((v164 == -1) | (unsigned __int8)v15 ^ 1) )
  {
    v65 = v130;
    v66 = v131;
    v163 = v164;
    sub_1403FD960(v148, v130, v131);
    if ( LODWORD(v148[0]) == -1 )
      goto LABEL_120;
    v146[0] = v153;
    v145 = v152;
    v67 = _mm_loadu_si128((const __m128i *)v148);
    v68 = _mm_loadu_si128(&v149);
    v69 = _mm_loadu_si128(&v150);
    v144 = _mm_loadu_si128((const __m128i *)hObject);
    v143 = v69;
    v142 = (unsigned __int128)v68;
    v141 = v67;
    v120[0] = v65;
    v120[1] = v66;
    v133.m128i_i64[0] = (__int64)v120;
    v133.m128i_i64[1] = (__int64)sub_14148F3A0;
    v134.m128i_i64[0] = (__int64)&v141;
    v134.m128i_i64[1] = (__int64)sub_140B036A0;
    sub_14149C0F0(&v154, &unk_141751DFA, &v133);
    v70 = v161;
    if ( v161 == v159 )
      sub_141689AB0(&v159);
    v71 = v160;
    v72 = 3 * v70;
    *(_QWORD *)(v160 + 8 * v72 + 16) = v155;
    *(__m128i *)(v71 + 8 * v72) = _mm_loadu_si128(&v154);
    v161 = v70 + 1;
    v163 = v164;
    sub_14034ED40(&v141);
    v64 = v164;
  }
  v163 = v64;
  sub_140440300((unsigned int)&v141, v160, v161, (unsigned int)&aCodeSwitchRoll[35], 3);
  v149.m128i_i64[0] = v142;
  *(__m128i *)v148 = _mm_loadu_si128(&v141);
  v133.m128i_i64[0] = (__int64)v148;
  v133.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_14149C0F0(&v141, &unk_141751E15, &v133);
  if ( v148[0] )
    sub_140001660(v148[1], v148[0], 1);
  v73 = v157;
  v157[3] = v142;
  *(__m128i *)(v73 + 1) = _mm_loadu_si128(&v141);
  *v73 = 10;
  v74 = v161;
  if ( v161 )
  {
    v75 = (_QWORD *)(v160 + 8);
    do
    {
      v76 = *(v75 - 1);
      if ( v76 )
        sub_140001660(*v75, v76, 1);
      v75 += 3;
      --v74;
    }
    while ( v74 );
  }
LABEL_125:
  if ( v159 )
    sub_140001660(v160, 24 * v159, 8);
  if ( v164 > 0 )
    sub_140001660(v130, v164, 1);
  return v157;
}