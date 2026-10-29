// win 1.2.7 | module src/platform/process.rs | ea 0x140ec3fa0 | name sub_140EC3FA0
// win 1.2.7 | module src/platform/process.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140EC3FA0(__int64 a1)
{
  char v1; // bl
  __int64 v2; // r15
  __int64 v3; // r13
  __int64 *v4; // rsi
  int v5; // r12d
  char v6; // al
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rsi
  unsigned __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rax
  char v16; // si
  __int64 v17; // rax
  __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // rcx
  __m128i si128; // xmm0
  __m128i v22; // xmm1
  __m128i v23; // xmm2
  __m128i v24; // xmm3
  __m128i v25; // xmm4
  __m128i v26; // xmm5
  __int64 v27; // rcx
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  __m128i v30; // xmm2
  __m128i v31; // xmm3
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  char v34; // r9
  char v35; // dl
  char v36; // dl
  char v37; // dl
  char v38; // dl
  __int64 v39; // rsi
  char *v40; // rax
  _BYTE *v41; // rsi
  char v42; // si
  __m128i v43; // xmm0
  __m128i v44; // xmm1
  __m128i v45; // xmm2
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r12
  __int64 v54; // r14
  __int64 v55; // rbx
  __int64 v56; // r15
  __m128i v57; // xmm0
  __m128i v58; // xmm1
  __m128i v59; // xmm2
  __m128i v60; // xmm1
  __m128i v61; // xmm2
  __m128i v62; // xmm3
  __int64 v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // r14
  __int64 v68; // r15
  __m128i v69; // xmm0
  __m128i v70; // xmm1
  __m128i v71; // xmm2
  __int64 v72; // rsi
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rsi
  _QWORD *v76; // rdi
  __int64 v77; // rdx
  int v78; // edx
  __int64 v79; // rbx
  HANDLE v80; // r14
  HANDLE v81; // r12
  __int64 v82; // rdx
  __m128i *v83; // rax
  __int64 v84; // rbx
  __int64 v85; // rdi
  HANDLE v86; // r13
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  int v91; // eax
  int v92; // edx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  unsigned __int64 v97; // r14
  unsigned int v98; // r15d
  unsigned __int64 v99; // rax
  unsigned int v100; // edx
  __int64 v101; // rsi
  __int64 v102; // rax
  unsigned int v103; // edx
  _QWORD *v104; // rdi
  __int64 v105; // rdx
  __int64 v107; // rdx
  __int64 v108; // rbx
  const __m128i *v109; // rdi
  unsigned __int64 v110; // r14
  __m128i *v111; // rax
  char v112; // al
  __int64 v113; // rsi
  __int64 v114; // rsi
  char v115; // al
  _BYTE v116[24]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v117; // [rsp+40h] [rbp-40h] BYREF
  int v118; // [rsp+48h] [rbp-38h]
  __m128i v119; // [rsp+50h] [rbp-30h] BYREF
  __int64 v120; // [rsp+60h] [rbp-20h]
  __m128i v121; // [rsp+68h] [rbp-18h] BYREF
  __int64 v122; // [rsp+78h] [rbp-8h]
  __m128i v123; // [rsp+80h] [rbp+0h]
  HANDLE v124; // [rsp+90h] [rbp+10h]
  __int64 v125; // [rsp+98h] [rbp+18h] BYREF
  __int64 v126; // [rsp+A0h] [rbp+20h]
  __int64 v127; // [rsp+A8h] [rbp+28h]
  HANDLE *v128; // [rsp+B0h] [rbp+30h] BYREF
  char *v129; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v130; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v131; // [rsp+C8h] [rbp+48h]
  __int64 v132; // [rsp+D0h] [rbp+50h]
  char v133; // [rsp+D8h] [rbp+58h]
  __m128i v134; // [rsp+E0h] [rbp+60h] BYREF
  __m128i v135; // [rsp+F0h] [rbp+70h] BYREF
  __m128i v136; // [rsp+100h] [rbp+80h] BYREF
  __m128i v137; // [rsp+110h] [rbp+90h] BYREF
  HANDLE v138[2]; // [rsp+120h] [rbp+A0h] BYREF
  __m128i v139; // [rsp+130h] [rbp+B0h] BYREF
  __m128i v140; // [rsp+140h] [rbp+C0h] BYREF
  HANDLE hObject[2]; // [rsp+150h] [rbp+D0h] BYREF
  __m128i v142; // [rsp+160h] [rbp+E0h]
  __m128i v143; // [rsp+170h] [rbp+F0h]
  __m128i v144; // [rsp+180h] [rbp+100h] BYREF
  __m128i v145; // [rsp+190h] [rbp+110h] BYREF
  __m128i v146; // [rsp+1A0h] [rbp+120h] BYREF
  __m128i v147; // [rsp+1B0h] [rbp+130h] BYREF
  __m128i v148; // [rsp+1C0h] [rbp+140h] BYREF
  __m128i v149[5]; // [rsp+1D0h] [rbp+150h] BYREF
  int v150; // [rsp+22Ch] [rbp+1ACh]
  __int64 v151; // [rsp+238h] [rbp+1B8h]
  __m128i v152; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v153; // [rsp+250h] [rbp+1D0h]
  char *v154; // [rsp+258h] [rbp+1D8h] BYREF
  __int64 v155; // [rsp+260h] [rbp+1E0h] BYREF
  __m128i v156; // [rsp+268h] [rbp+1E8h]
  __m128i v157; // [rsp+278h] [rbp+1F8h]
  __int64 v158; // [rsp+288h] [rbp+208h] BYREF
  __int64 v159; // [rsp+290h] [rbp+210h]
  __int64 v160; // [rsp+298h] [rbp+218h]
  __int64 v161; // [rsp+2A0h] [rbp+220h]
  __int64 v162; // [rsp+2A8h] [rbp+228h]
  __int64 v163; // [rsp+2B0h] [rbp+230h]
  __int64 v164; // [rsp+2B8h] [rbp+238h]

  v164 = -2;
  v3 = a1;
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8(&byte_1421E0530, 1, 0) )
    sub_141937480(&byte_1421E0530);
  v4 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v5 = sub_141938160(a1);
    LOBYTE(v5) = v5 ^ 1;
    if ( byte_1421E0531 )
    {
LABEL_5:
      if ( !(_BYTE)v5 && 2 * *v4 && !(unsigned __int8)sub_141938160(a1) )
        byte_1421E0531 = 1;
      v6 = byte_1421E0530;
      byte_1421E0530 = 0;
      if ( v6 == 2 )
        WakeByAddressSingle(&byte_1421E0530);
      goto LABEL_9;
    }
  }
  else
  {
    v5 = 0;
    if ( byte_1421E0531 )
      goto LABEL_5;
  }
  if ( qword_1421E0538 == -1 )
  {
    v107 = -1;
    if ( (_BYTE)v5 )
      goto LABEL_147;
    goto LABEL_146;
  }
  v107 = qword_1421E0548;
  if ( qword_1421E0548 < 0 )
  {
    v108 = 0;
    goto LABEL_138;
  }
  if ( !qword_1421E0548 )
  {
    v2 = 1;
    v1 = qword_1421E0550;
    if ( (_BYTE)v5 )
      goto LABEL_147;
LABEL_146:
    if ( 2 * *v4 )
    {
      v114 = v107;
      v115 = sub_141938160(a1);
      v107 = v114;
      if ( !v115 )
        byte_1421E0531 = 1;
    }
    goto LABEL_147;
  }
  v109 = (const __m128i *)qword_1421E0540;
  v110 = qword_1421E0548;
  nullsub_1(a1);
  v108 = 1;
  v111 = (__m128i *)sub_140001650(v110, 1);
  v107 = v110;
  if ( !v111 )
  {
LABEL_138:
    LODWORD(v163) = v5;
    sub_141938D2B(v108, v107);
  }
  v2 = (__int64)v111;
  sub_1418F44E0(v111, v109, v110);
  v107 = v110;
  v1 = qword_1421E0550;
  if ( !(_BYTE)v5 )
    goto LABEL_146;
LABEL_147:
  v112 = byte_1421E0530;
  byte_1421E0530 = 0;
  if ( v112 == 2 )
  {
    v113 = v107;
    WakeByAddressSingle(&byte_1421E0530);
    v107 = v113;
    if ( v113 == -1 )
      goto LABEL_9;
  }
  else if ( v107 == -1 )
  {
    goto LABEL_9;
  }
  v162 = v2;
  v163 = v107;
  sub_141695A00(&v144, v2, v107);
  if ( v144.m128i_i32[0] == 2 )
  {
    if ( (v144.m128i_i8[8] & 3u) - 2 >= 2 && (v144.m128i_i8[8] & 3) != 0 )
    {
      --v144.m128i_i64[1];
      v144.m128i_i8[0] = 3;
      sub_1416BCB00(&v144.m128i_u64[1]);
    }
  }
  else if ( (unsigned __int8)sub_140EF1B70(v162, v163) )
  {
    v8 = v163;
    v130 = v163;
    v131 = v162;
    v132 = v163;
    v133 = v1;
    goto LABEL_10;
  }
  if ( v163 )
    sub_140001660(v162, v163, 1);
LABEL_9:
  sub_140EE65E0(&v130);
  v8 = v130;
  if ( v130 == -1 )
  {
    v158 = 0;
    v159 = 8;
    v160 = 0;
    v15 = -1;
    LOBYTE(v7) = 1;
    LODWORD(v162) = v7;
    v16 = 0;
    goto LABEL_75;
  }
LABEL_10:
  v9 = v131;
  v10 = v132;
  v163 = v8;
  v151 = v8;
  sub_1416AB5A0(&v134, v131, v132);
  v12 = v134.m128i_i64[1];
  v13 = v135.m128i_i64[0];
  v162 = v134.m128i_i64[1];
  if ( v135.m128i_i64[0] < 0 )
  {
    v14 = 0;
    goto LABEL_12;
  }
  if ( v135.m128i_i64[0] )
  {
    nullsub_1(v11);
    v14 = 1;
    v17 = sub_140001650(v13, 1);
    if ( !v17 )
LABEL_12:
      sub_141938D2B(v14, v13);
    v18 = v17;
    if ( v13 < 8 || (unsigned __int64)(v17 - v12) < 0x20 )
    {
      v19 = 0;
LABEL_28:
      v32 = v19;
      v33 = v13 & 3;
      if ( (v13 & 3) != 0 )
      {
        v32 = v19;
        do
        {
          v34 = *(_BYTE *)(v12 + v32);
          if ( v34 == 92 )
            v34 = 47;
          *(_BYTE *)(v18 + v32++) = v34;
          --v33;
        }
        while ( v33 );
      }
      if ( v19 - v13 <= 0xFFFFFFFFFFFFFFFCuLL )
      {
        do
        {
          v35 = *(_BYTE *)(v12 + v32);
          if ( v35 == 92 )
            v35 = 47;
          *(_BYTE *)(v18 + v32) = v35;
          v36 = *(_BYTE *)(v12 + v32 + 1);
          if ( v36 == 92 )
            v36 = 47;
          *(_BYTE *)(v18 + v32 + 1) = v36;
          v37 = *(_BYTE *)(v12 + v32 + 2);
          if ( v37 == 92 )
            v37 = 47;
          *(_BYTE *)(v18 + v32 + 2) = v37;
          v38 = *(_BYTE *)(v12 + v32 + 3);
          if ( v38 == 92 )
            v38 = 47;
          *(_BYTE *)(v18 + v32 + 3) = v38;
          v32 += 4;
        }
        while ( v13 != v32 );
      }
      goto LABEL_43;
    }
    if ( v13 >= 0x20 )
    {
      v19 = v13 & 0x7FFFFFFFFFFFFFE0LL;
      v20 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_1419E44F0);
      v22 = _mm_load_si128((const __m128i *)&xmmword_1419E4500);
      do
      {
        v23 = _mm_loadu_si128((const __m128i *)(v12 + v20));
        v24 = _mm_loadu_si128((const __m128i *)(v12 + v20 + 16));
        v25 = _mm_cmpeq_epi8(v23, si128);
        v26 = _mm_cmpeq_epi8(v24, si128);
        *(__m128i *)(v18 + v20) = _mm_or_si128(_mm_and_si128(v25, v22), _mm_andnot_si128(v25, v23));
        *(__m128i *)(v18 + v20 + 16) = _mm_or_si128(_mm_and_si128(v26, v22), _mm_andnot_si128(v26, v24));
        v20 += 32;
      }
      while ( v19 != v20 );
      if ( v13 == v19 )
        goto LABEL_43;
      if ( (v13 & 0x18) == 0 )
        goto LABEL_28;
    }
    else
    {
      v19 = 0;
    }
    v27 = v19;
    v19 = v13 & 0x7FFFFFFFFFFFFFF8LL;
    v28 = _mm_load_si128((const __m128i *)&xmmword_1419E4510);
    v29 = _mm_load_si128((const __m128i *)&xmmword_1419E4520);
    do
    {
      v30 = _mm_loadl_epi64((const __m128i *)(v12 + v27));
      v31 = _mm_cmpeq_epi8(v30, v28);
      *(_QWORD *)(v18 + v27) = _mm_or_si128(_mm_and_si128(v31, v29), _mm_andnot_si128(v31, v30)).m128i_u64[0];
      v27 += 8;
    }
    while ( v19 != v27 );
    if ( v13 != v19 )
      goto LABEL_28;
  }
  else
  {
    v18 = 1;
  }
LABEL_43:
  v144.m128i_i64[0] = 0;
  v144.m128i_i64[1] = v13;
  v157.m128i_i64[0] = v18;
  v145.m128i_i64[0] = v18;
  v145.m128i_i64[1] = v13;
  v146.m128i_i64[0] = 0;
  v157.m128i_i64[1] = v13;
  v146.m128i_i64[1] = v13;
  v147.m128i_i64[0] = 0x2F0000002FLL;
  v147.m128i_i8[8] = 1;
  v148.m128i_i16[0] = 1;
  do
  {
    v39 = v145.m128i_i64[0];
    sub_140F9C6A0(v138, &v145);
    if ( LODWORD(v138[0]) == 1 )
    {
      v40 = (char *)v138[1] - v144.m128i_i64[0];
      v41 = (_BYTE *)(v144.m128i_i64[0] + v39);
      v144.m128i_i64[0] = v139.m128i_i64[0];
      if ( v40 == (char *)11 )
        goto LABEL_51;
      continue;
    }
    if ( v148.m128i_i8[1] )
      break;
    v148.m128i_i8[1] = 1;
    if ( (v148.m128i_i8[0] | (v144.m128i_i64[1] != v144.m128i_i64[0])) != 1 )
      break;
    v41 = (_BYTE *)(v145.m128i_i64[0] + v144.m128i_i64[0]);
    if ( v144.m128i_i64[1] - v144.m128i_i64[0] == 11 )
    {
LABEL_51:
      if ( (*v41 | (unsigned __int8)(32 * ((unsigned __int8)(*v41 - 65) < 0x1Au))) == 119
        && (v41[1] | (unsigned __int8)(32 * ((unsigned __int8)(v41[1] - 65) < 0x1Au))) == 105
        && (v41[2] | (unsigned __int8)(32 * ((unsigned __int8)(v41[2] - 65) < 0x1Au))) == 110
        && (v41[3] | (unsigned __int8)(32 * ((unsigned __int8)(v41[3] - 65) < 0x1Au))) == 100
        && (v41[4] | (unsigned __int8)(32 * ((unsigned __int8)(v41[4] - 65) < 0x1Au))) == 111
        && (v41[5] | (unsigned __int8)(32 * ((unsigned __int8)(v41[5] - 65) < 0x1Au))) == 119
        && (v41[6] | (unsigned __int8)(32 * ((unsigned __int8)(v41[6] - 65) < 0x1Au))) == 115
        && (v41[7] | (unsigned __int8)(32 * ((unsigned __int8)(v41[7] - 65) < 0x1Au))) == 97
        && (v41[8] | (unsigned __int8)(32 * ((unsigned __int8)(v41[8] - 65) < 0x1Au))) == 112
        && (v41[9] | (unsigned __int8)(32 * ((unsigned __int8)(v41[9] - 65) < 0x1Au))) == 112
        && (v41[10] | (unsigned __int8)(32 * ((unsigned __int8)(v41[10] - 65) < 0x1Au))) == 115 )
      {
        v42 = 1;
        goto LABEL_64;
      }
    }
  }
  while ( v148.m128i_i8[1] != 1 );
  v42 = 0;
LABEL_64:
  if ( v157.m128i_i64[1] )
    sub_140001660(v157.m128i_i64[0], v157.m128i_i64[1], 1);
  if ( v134.m128i_i64[0] > 0 )
    sub_140001660(v162, v134.m128i_i64[0], 1);
  v158 = 0;
  v159 = 8;
  v160 = 0;
  if ( v42 )
  {
    v16 = 1;
    LODWORD(v162) = 0;
    goto LABEL_74;
  }
  v161 = v163;
  sub_140EED2B0(v138, v9, v10);
  if ( LODWORD(v138[0]) == -1 )
  {
    *(_QWORD *)v3 = -1;
    LODWORD(v162) = 0;
    v101 = v160;
    if ( v160 )
      goto LABEL_124;
  }
  else
  {
    v149[0] = v143;
    v148 = v142;
    v43 = _mm_loadu_si128((const __m128i *)v138);
    v44 = _mm_loadu_si128(&v139);
    v45 = _mm_loadu_si128(&v140);
    v147 = _mm_loadu_si128((const __m128i *)hObject);
    v146 = v45;
    v145 = v44;
    v144 = v43;
    v152.m128i_i64[0] = v9;
    v152.m128i_i64[1] = v10;
    v134.m128i_i64[0] = (__int64)&v152;
    v134.m128i_i64[1] = (__int64)sub_14169F630;
    v135.m128i_i64[0] = (__int64)&v144;
    v135.m128i_i64[1] = (__int64)sub_14104A7D0;
    sub_1416ABFD0(&v119, &unk_141A5A6F5, &v134);
    v46 = v160;
    if ( v160 == v158 )
      sub_14190FDC0(&v158);
    v47 = v159;
    v48 = 3 * v46;
    *(_QWORD *)(v159 + 8 * v48 + 16) = v120;
    *(__m128i *)(v47 + 8 * v48) = _mm_loadu_si128(&v119);
    v160 = v46 + 1;
    v161 = v163;
    sub_140E97700(&v144);
    LODWORD(v162) = 0;
    v16 = 0;
LABEL_74:
    v15 = v163;
LABEL_75:
    v163 = v15;
    v161 = v15;
    sub_140EF04C0(&v144);
    v54 = v144.m128i_i64[1];
    v53 = v144.m128i_i64[0];
    v56 = v145.m128i_i64[1];
    v55 = v145.m128i_i64[0];
    if ( v144.m128i_i64[0] == -1 )
    {
      if ( v144.m128i_i64[1] == -1 )
      {
        nullsub_1(v50);
        v54 = 50;
        v83 = (__m128i *)sub_140001650(50, 1);
        if ( !v83 )
        {
          v161 = v163;
          sub_141938D2B(1, 50);
        }
        v55 = (__int64)v83;
        qmemcpy(&v83[1], " Microsoft Store app was not found", 34);
        *v83 = _mm_loadu_si128((const __m128i *)&xmmword_141A576AC);
        v53 = 8;
        v56 = 50;
      }
      else
      {
        v155 = v144.m128i_i64[1];
        v156 = v145;
        v117 = sub_14167FC00(v50, v49, v51, v52);
        v118 = v78;
        v144.m128i_i64[0] = (__int64)&v155;
        v144.m128i_i64[1] = (__int64)sub_1400015F0;
        sub_1416ABFD0(v116, &unk_141A5B0AE, &v144);
        sub_14019B500((unsigned int)aCodexProcess, 13, (unsigned int)aLaunchRequeste, 16, (__int64)v116);
        v138[0] = &v155;
        v138[1] = sub_1400015F0;
        sub_1416ABFD0(&v144, &unk_141A5B0EA, v138);
        v157 = v144;
        v79 = v145.m128i_i64[0];
        sub_14168A510(&v144, aExplorerExe, 12);
        v150 = 0x8000000;
        sub_14168A3F0(&v144, v157.m128i_i64[1], v79);
        sub_14168DB10(v138, &v144);
        v80 = v138[0];
        v81 = v138[1];
        if ( v138[0] != HANDLE_FLAG_PROTECT_FROM_CLOSE )
        {
          v84 = v3;
          v124 = (HANDLE)v139.m128i_i64[1];
          v85 = v139.m128i_i64[0];
          v123 = v140;
          v86 = hObject[1];
          CloseHandle(hObject[0]);
          CloseHandle(v86);
          if ( v80 )
            CloseHandle(v81);
          v3 = v84;
          if ( v85 )
            CloseHandle(v124);
          if ( v123.m128i_i64[0] )
            CloseHandle((HANDLE)v123.m128i_i64[1]);
          sub_14029BE30(&v144);
          v91 = sub_14167FC00(v88, v87, v89, v90);
          v97 = sub_1416A1240(v91, v92, 10, 0, (__int64)&off_141A5A680);
          v98 = v93;
          while ( 1 )
          {
            v99 = sub_14167FC00(v94, v93, v95, v96);
            if ( v99 == v97 )
            {
              if ( v100 >= v98 )
                goto LABEL_117;
            }
            else if ( v99 >= v97 )
            {
LABEL_117:
              v144.m128i_i64[0] = (__int64)&v155;
              v144.m128i_i64[1] = (__int64)sub_1400015F0;
              sub_1416ABFD0(&v125, &unk_141A5B10A, &v144);
              v54 = v125;
              v55 = v126;
              v56 = v127;
              v82 = v157.m128i_i64[0];
              if ( v157.m128i_i64[0] )
                goto LABEL_97;
              goto LABEL_98;
            }
            if ( (unsigned int)sub_141040BC0((__int64)aChatgpt, 7) == 1 )
            {
              v102 = sub_14167FD50(&v117);
              *(_OWORD *)v138 = 0x3E8 * (unsigned __int128)(unsigned __int64)v102 + v103 / 0xF4240uLL;
              v144.m128i_i64[0] = (__int64)&v155;
              v144.m128i_i64[1] = (__int64)sub_1400015F0;
              v145.m128i_i64[0] = (__int64)v138;
              v145.m128i_i64[1] = (__int64)sub_1416B95D0;
              sub_1416ABFD0(&v121, &unk_141A5B152, &v144);
              sub_14019B500((unsigned int)aCodexProcess, 13, (unsigned int)aLaunchReady, 12, (__int64)&v121);
              if ( v157.m128i_i64[0] )
                sub_140001660(v157.m128i_i64[1], v157.m128i_i64[0], 1);
              if ( v155 )
                sub_140001660(v156.m128i_i64[0], v155, 1);
              goto LABEL_123;
            }
            sub_141696800(0, 80000000);
          }
        }
        v154 = (char *)v138[1];
        v128 = (HANDLE *)&v154;
        v129 = (char *)sub_1416BB0B0;
        sub_1416ABFD0(&v152, &unk_141A576DE, &v128);
        v55 = v152.m128i_i64[1];
        v54 = v152.m128i_i64[0];
        v56 = v153;
        if ( ((unsigned __int8)v154 & 3u) - 2 >= 2 && ((unsigned __int8)v154 & 3) != 0 )
        {
          v129 = v154 - 1;
          LOBYTE(v128) = 3;
          sub_1416BCB00(&v129);
        }
        sub_14029BE30(&v144);
        v82 = v157.m128i_i64[0];
        if ( v157.m128i_i64[0] )
LABEL_97:
          sub_140001660(v157.m128i_i64[1], v82, 1);
LABEL_98:
        v53 = 10;
        if ( v155 )
          sub_140001660(v156.m128i_i64[0], v155, 1);
      }
    }
    else
    {
      v57 = _mm_loadu_si128(&v146);
      v58 = _mm_loadu_si128(&v147);
      v59 = _mm_loadu_si128(&v148);
      v137 = _mm_loadu_si128(v149);
      v136 = v59;
      v135 = v58;
      v134 = v57;
    }
    v144.m128i_i64[0] = v53;
    v144.m128i_i64[1] = v54;
    v145.m128i_i64[0] = v55;
    v145.m128i_i64[1] = v56;
    v60 = _mm_load_si128(&v135);
    v61 = _mm_load_si128(&v136);
    v62 = _mm_load_si128(&v137);
    v146 = _mm_load_si128(&v134);
    v147 = v60;
    v148 = v61;
    v149[0] = v62;
    v138[0] = &v144;
    v138[1] = sub_14104A7D0;
    sub_1416ABFD0(&v121, &unk_141A5A70A, v138);
    v63 = v160;
    if ( v160 == v158 )
      sub_14190FDC0(&v158);
    v64 = v159;
    v65 = 3 * v63;
    *(_QWORD *)(v159 + 8 * v65 + 16) = v122;
    *(__m128i *)(v64 + 8 * v65) = _mm_loadu_si128(&v121);
    v160 = v63 + 1;
    v161 = v163;
    sub_140E97700(&v144);
    v66 = v163;
    if ( (v163 == -1) | (unsigned __int8)v16 ^ 1 )
    {
LABEL_84:
      v161 = v66;
      sub_140D1EE10((unsigned int)&v144, v159, v160, (unsigned int)&unk_141A55FEA, 3);
      v139.m128i_i64[0] = v145.m128i_i64[0];
      *(__m128i *)v138 = _mm_loadu_si128(&v144);
      v134.m128i_i64[0] = (__int64)v138;
      v134.m128i_i64[1] = (__int64)sub_1400015F0;
      sub_1416ABFD0(&v144, &unk_141A5A744, &v134);
      if ( v138[0] )
        sub_140001660(v138[1], v138[0], 1);
      *(_QWORD *)(v3 + 24) = v145.m128i_i64[0];
      *(__m128i *)(v3 + 8) = _mm_loadu_si128(&v144);
      *(_QWORD *)v3 = 10;
      v75 = v160;
      if ( v160 )
      {
        v76 = (_QWORD *)(v159 + 8);
        do
        {
          v77 = *(v76 - 1);
          if ( v77 )
            sub_140001660(*v76, v77, 1);
          v76 += 3;
          --v75;
        }
        while ( v75 );
      }
    }
    else
    {
      v67 = v131;
      v68 = v132;
      v161 = v163;
      sub_140EED2B0(v138, v131, v132);
      if ( LODWORD(v138[0]) != -1 )
      {
        v149[0] = v143;
        v148 = v142;
        v69 = _mm_loadu_si128((const __m128i *)v138);
        v70 = _mm_loadu_si128(&v139);
        v71 = _mm_loadu_si128(&v140);
        v147 = _mm_loadu_si128((const __m128i *)hObject);
        v146 = v71;
        v145 = v70;
        v144 = v69;
        v125 = v67;
        v126 = v68;
        v134.m128i_i64[0] = (__int64)&v125;
        v134.m128i_i64[1] = (__int64)sub_14169F630;
        v135.m128i_i64[0] = (__int64)&v144;
        v135.m128i_i64[1] = (__int64)sub_14104A7D0;
        sub_1416ABFD0(&v152, &unk_141A5A729, &v134);
        v72 = v160;
        if ( v160 == v158 )
          sub_14190FDC0(&v158);
        v73 = v159;
        v74 = 3 * v72;
        *(_QWORD *)(v159 + 8 * v74 + 16) = v153;
        *(__m128i *)(v73 + 8 * v74) = _mm_loadu_si128(&v152);
        v160 = v72 + 1;
        v161 = v163;
        sub_140E97700(&v144);
        v66 = v163;
        goto LABEL_84;
      }
LABEL_123:
      *(_QWORD *)v3 = -1;
      v101 = v160;
      if ( v160 )
      {
LABEL_124:
        v104 = (_QWORD *)(v159 + 8);
        do
        {
          v105 = *(v104 - 1);
          if ( v105 )
            sub_140001660(*v104, v105, 1);
          v104 += 3;
          --v101;
        }
        while ( v101 );
      }
    }
  }
  if ( v158 )
    sub_140001660(v159, 24 * v158, 8);
  if ( !(_BYTE)v162 && v163 )
    sub_140001660(v131, v163, 1);
  return v3;
}
