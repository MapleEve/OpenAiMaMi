// module: codexmate_lib/core/relay/codex_project_state
// addr: 0x14049a2f0
// name: sub_14049A2F0
// win 1.2.1 | module src/core/relay/codex_project_state.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14049A2F0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r13
  __int64 v14; // r13
  int v15; // eax
  unsigned __int8 v16; // cl
  bool v17; // cf
  __int64 v18; // r13
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdi
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r14
  __int64 v26; // r14
  int v27; // eax
  unsigned __int8 v28; // cl
  __int64 v29; // r13
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rdi
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r14
  __int64 v37; // r14
  int v38; // eax
  char v39; // cl
  __int64 v40; // r14
  unsigned __int64 i; // rcx
  unsigned __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // r12
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // rdi
  __int64 v48; // rdi
  int v49; // eax
  char v50; // cl
  __int64 v51; // rax
  void *v52; // rdx
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rbx
  __int64 v57; // rdi
  unsigned __int64 v58; // r14
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // r12
  __int64 v61; // r12
  int v62; // eax
  char v63; // cl
  __int64 v64; // rax
  void *v65; // rcx
  __m128i v66; // xmm0
  __int128 v67; // xmm1
  __int128 v68; // xmm2
  __int64 result; // rax
  int v70; // eax
  __int64 v71; // rdx
  unsigned __int64 v72; // r15
  __int64 v73; // rsi
  unsigned __int64 v74; // r14
  unsigned __int64 v75; // rsi
  __m128i v76; // xmm7
  __int64 v77; // r12
  __int64 v78; // rsi
  __int64 j; // r15
  __int64 v80; // rax
  __int64 v81; // rbx
  __int64 v82; // rdi
  __int64 v83; // r12
  unsigned __int64 v84; // r8
  __int64 v85; // r13
  int v86; // eax
  char v87; // cl
  unsigned __int64 v88; // rdx
  __int64 v89; // rsi
  unsigned __int64 v90; // rdi
  __int64 v91; // rcx
  __int64 v92; // rsi
  unsigned __int64 v93; // rdx
  __int64 v94; // r14
  __int128 v95; // kr40_16
  __m128i v96; // xmm0
  _BYTE *v97; // rax
  _BYTE *v98; // rsi
  __int64 v99; // rax
  __int64 v100; // rax
  unsigned __int64 v101; // rsi
  __int64 v102; // rsi
  __int64 v103; // rax
  __int64 v104; // rcx
  __m128i v105; // xmm0
  __int128 v106; // xmm1
  __int64 v107; // rcx
  unsigned __int64 v108; // rbx
  unsigned __int64 v109; // rdi
  __m128i v110; // xmm6
  __int64 v111; // rax
  __int64 v112; // rsi
  _QWORD *v113; // rdi
  __int64 v114; // rdx
  __int64 v115; // rdx
  _OWORD v116[4]; // [rsp+20h] [rbp-60h] BYREF
  __int8 v117; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v118[31]; // [rsp+61h] [rbp-1Fh]
  _QWORD v119[2]; // [rsp+80h] [rbp+0h] BYREF
  _QWORD v120[2]; // [rsp+90h] [rbp+10h] BYREF
  __m128i v121; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v122; // [rsp+B0h] [rbp+30h]
  __int128 v123; // [rsp+C0h] [rbp+40h]
  __int128 v124; // [rsp+D0h] [rbp+50h]
  __m128i v125; // [rsp+E0h] [rbp+60h]
  __int64 v126; // [rsp+F0h] [rbp+70h]
  __int64 v127; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v128; // [rsp+100h] [rbp+80h]
  __int64 v129; // [rsp+108h] [rbp+88h]
  __int64 v130; // [rsp+110h] [rbp+90h]
  _OWORD *v131; // [rsp+118h] [rbp+98h] BYREF
  __int64 v132; // [rsp+120h] [rbp+A0h] BYREF
  __m128i v133; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v134; // [rsp+138h] [rbp+B8h]
  __int64 v135; // [rsp+140h] [rbp+C0h]
  __int64 v136; // [rsp+148h] [rbp+C8h]
  _BYTE v137[72]; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v138; // [rsp+1A0h] [rbp+120h]
  __int64 v139; // [rsp+1B0h] [rbp+130h]
  __int64 v140; // [rsp+1B8h] [rbp+138h]
  __int64 v141; // [rsp+1C0h] [rbp+140h]
  unsigned __int64 v142; // [rsp+1C8h] [rbp+148h]
  __int64 v143; // [rsp+1D0h] [rbp+150h]
  __int64 v144; // [rsp+1D8h] [rbp+158h]
  unsigned __int64 v145; // [rsp+1E0h] [rbp+160h]
  char v146; // [rsp+1EDh] [rbp+16Dh]
  char v147; // [rsp+1EEh] [rbp+16Eh]
  char v148; // [rsp+1EFh] [rbp+16Fh]
  __int64 v149; // [rsp+1F0h] [rbp+170h]
  unsigned __int64 v150; // [rsp+1F8h] [rbp+178h]
  char v151; // [rsp+207h] [rbp+187h]
  __int64 v152; // [rsp+208h] [rbp+188h]

  v152 = -2;
  v149 = a4;
  v144 = a2;
  v139 = a1;
  v145 = a3;
  if ( !a3 )
  {
LABEL_66:
    result = v139;
    *(_QWORD *)(v139 + 8) = 0;
    *(_QWORD *)(result + 16) = 8;
    *(_QWORD *)(result + 24) = 0;
    *(_QWORD *)result = -1;
    return result;
  }
  v6 = v149;
  v7 = v145;
LABEL_3:
  v8 = v7 + 8;
  v142 = v7;
  v150 = *(unsigned __int16 *)(v7 + 274);
  v9 = 3LL * (unsigned int)(8 * v150);
  v10 = -1;
  do
  {
    if ( !v9 )
    {
      v10 = v150;
LABEL_13:
      v17 = v6-- == 0;
      if ( v17 )
        goto LABEL_66;
      v7 = *(_QWORD *)(v142 + 8 * v10 + 280);
      goto LABEL_3;
    }
    v11 = v8 + 24;
    v12 = *(_QWORD *)(v8 + 16);
    v13 = v12 - 2;
    if ( v12 >= 2 )
      v12 = 2;
    v14 = -(__int64)v13;
    v15 = sub_1416847B0(aId_2, *(_QWORD *)(v8 + 8), v12);
    if ( v15 )
      v14 = v15;
    v16 = (v14 > 0) - (v14 < 0);
    ++v10;
    v9 -= 24;
    v8 = v11;
  }
  while ( v16 == 1 );
  if ( v16 == 255 )
    goto LABEL_13;
  v18 = v149;
  v19 = v145;
LABEL_15:
  v20 = v19 + 8;
  v142 = v19;
  v150 = *(unsigned __int16 *)(v19 + 274);
  v21 = 3LL * (unsigned int)(8 * v150);
  v22 = -1;
  do
  {
    if ( !v21 )
    {
      v22 = v150;
LABEL_25:
      v17 = v18-- == 0;
      if ( v17 )
        goto LABEL_66;
      v19 = *(_QWORD *)(v142 + 8 * v22 + 280);
      goto LABEL_15;
    }
    v23 = v20 + 24;
    v24 = *(_QWORD *)(v20 + 16);
    v25 = v24 - 3;
    if ( v24 >= 3 )
      v24 = 3;
    v26 = -(__int64)v25;
    v27 = sub_1416847B0(aCwd_0, *(_QWORD *)(v20 + 8), v24);
    if ( v27 )
      v26 = v27;
    v28 = (v26 > 0) - (v26 < 0);
    ++v22;
    v21 -= 24;
    v20 = v23;
  }
  while ( v28 == 1 );
  if ( v28 == 255 )
    goto LABEL_25;
  v29 = v149;
  v30 = v145;
LABEL_27:
  v31 = v30 + 8;
  v142 = v30;
  v150 = *(unsigned __int16 *)(v30 + 274);
  v32 = 3LL * (unsigned int)(8 * v150);
  v33 = -1;
  do
  {
    if ( !v32 )
    {
      v33 = v150;
LABEL_37:
      v17 = v29-- == 0;
      if ( v17 )
        goto LABEL_66;
      v30 = *(_QWORD *)(v142 + 8 * v33 + 280);
      goto LABEL_27;
    }
    v34 = v31 + 24;
    v35 = *(_QWORD *)(v31 + 16);
    v36 = v35 - 12;
    if ( v35 >= 0xC )
      v35 = 12;
    v37 = -(__int64)v36;
    v38 = sub_1416847B0(&unk_14175AA2E, *(_QWORD *)(v31 + 8), v35);
    if ( v38 )
      v37 = v38;
    v39 = (v37 > 0) - (v37 < 0);
    ++v33;
    v32 -= 24;
    v31 = v34;
  }
  while ( v39 == 1 );
  if ( v39 )
    goto LABEL_37;
  v40 = v149;
  for ( i = v145; ; i = *(_QWORD *)(v142 + 8 * v44 + 280) )
  {
    v42 = i + 8;
    v142 = i;
    v150 = *(unsigned __int16 *)(i + 274);
    v43 = 3LL * (unsigned int)(8 * v150);
    v44 = -1;
    do
    {
      if ( !v43 )
      {
        v44 = v150;
        goto LABEL_49;
      }
      v45 = v42 + 24;
      v46 = *(_QWORD *)(v42 + 16);
      v47 = v46 - 8;
      if ( v46 >= 8 )
        v46 = 8;
      v48 = -(__int64)v47;
      v49 = sub_1416847B0(&unk_14175AA3A, *(_QWORD *)(v42 + 8), v46);
      if ( v49 )
        v48 = v49;
      v50 = (v48 > 0) - (v48 < 0);
      ++v44;
      v43 -= 24;
      v42 = v45;
    }
    while ( v50 == 1 );
    if ( !v50 )
    {
      v51 = 25;
      v52 = &unk_14175AA42;
      v53 = v145;
      goto LABEL_51;
    }
LABEL_49:
    v17 = v40-- == 0;
    v53 = v145;
    if ( v17 )
      break;
  }
  v51 = 5;
  v52 = &unk_14175AA5B;
LABEL_51:
  v120[0] = v52;
  v120[1] = v51;
  while ( 1 )
  {
    v54 = v53 + 8;
    v145 = v53;
    v55 = *(unsigned __int16 *)(v53 + 274);
    v56 = 3LL * (unsigned int)(8 * v55);
    v57 = -1;
    do
    {
      if ( !v56 )
      {
        v57 = v55;
        goto LABEL_62;
      }
      v58 = v54 + 24;
      v59 = *(_QWORD *)(v54 + 16);
      v60 = v59 - 6;
      if ( v59 >= 6 )
        v59 = 6;
      v61 = -(__int64)v60;
      v62 = sub_1416847B0(&unk_14175AA60, *(_QWORD *)(v54 + 8), v59);
      if ( v62 )
        v61 = v62;
      v63 = (v61 > 0) - (v61 < 0);
      ++v57;
      v56 -= 24;
      v54 = v58;
    }
    while ( v63 == 1 );
    if ( !v63 )
    {
      v64 = 20;
      v65 = &unk_14175AA66;
      goto LABEL_64;
    }
LABEL_62:
    v17 = v149-- == 0;
    if ( v17 )
      break;
    v53 = *(_QWORD *)(v145 + 8 * v57 + 280);
  }
  v64 = 2;
  v65 = &unk_14175AA7A;
LABEL_64:
  v119[0] = v65;
  v119[1] = v64;
  *(_QWORD *)v137 = v119;
  *(_QWORD *)&v137[8] = sub_14041F680;
  *(_QWORD *)&v137[16] = v120;
  *(_QWORD *)&v137[24] = sub_14041F680;
  sub_14149C0F0(&v127, &unk_14175AA7C, v137);
  sub_14046F850(v137, v144, v128, v129);
  v121 = *(__m128i *)&v137[8];
  v122 = *(_OWORD *)&v137[24];
  v123 = *(_OWORD *)&v137[40];
  v124 = *(_OWORD *)&v137[56];
  if ( *(_DWORD *)v137 == 1 )
  {
    v66 = _mm_load_si128(&v121);
    v67 = v122;
    v68 = v123;
    result = v139;
    *(_OWORD *)(v139 + 48) = v124;
    *(_OWORD *)(result + 32) = v68;
    *(_OWORD *)(result + 16) = v67;
    *(__m128i *)result = v66;
    goto LABEL_165;
  }
  v116[3] = v124;
  v116[2] = v123;
  v116[1] = v122;
  v116[0] = _mm_load_si128(&v121);
  v70 = sub_1414B6B70(*((_QWORD *)&v124 + 1));
  if ( v70 )
  {
    v71 = v139;
    *(_QWORD *)v139 = 0x8000000000000013uLL;
    *(_QWORD *)(v71 + 8) = 0;
    *(_QWORD *)(v71 + 16) = v70;
    goto LABEL_164;
  }
  v133.m128i_i64[0] = 0;
  v133.m128i_i64[1] = 8;
  v134 = 0;
  v131 = v116;
  v132 = v70;
  while ( 1 )
  {
    sub_1404DE8F0(v137, &v131);
    v72 = *(_QWORD *)v137;
    if ( *(_QWORD *)v137 != -1 )
    {
      v73 = *(_QWORD *)&v137[8];
      v74 = *(_QWORD *)&v137[24];
      v108 = *(_QWORD *)&v137[16];
      v109 = *(_QWORD *)&v137[32];
      v110 = _mm_loadu_si128((const __m128i *)&v137[40]);
      v77 = *(_QWORD *)&v137[56];
      goto LABEL_155;
    }
    if ( !v132 )
      goto LABEL_144;
    sub_14042B0E0(v137, &v132, 0);
    v73 = *(_QWORD *)&v137[8];
    v72 = *(_QWORD *)v137;
    v74 = *(_QWORD *)&v137[24];
    v145 = *(_QWORD *)&v137[16];
    if ( *(_QWORD *)v137 != -1 )
    {
      v109 = *(_QWORD *)&v137[32];
      v110 = _mm_loadu_si128((const __m128i *)&v137[40]);
      v77 = *(_QWORD *)&v137[56];
      v108 = v145;
      goto LABEL_155;
    }
    v149 = *(_QWORD *)&v137[8];
    sub_14042B0E0(v137, &v132, 1);
    v150 = *(_QWORD *)&v137[8];
    v72 = *(_QWORD *)v137;
    v75 = *(_QWORD *)&v137[24];
    v144 = *(_QWORD *)&v137[16];
    if ( *(_QWORD *)v137 != -1 )
      break;
    sub_14042B0E0(v137, &v132, 2);
    v72 = *(_QWORD *)v137;
    v76 = _mm_loadu_si128((const __m128i *)&v137[8]);
    v77 = *(_QWORD *)&v137[24];
    if ( *(_QWORD *)v137 != -1 )
    {
      v74 = *(_QWORD *)&v137[24];
      v109 = *(_QWORD *)&v137[32];
      v110 = _mm_loadu_si128((const __m128i *)&v137[40]);
      v77 = *(_QWORD *)&v137[56];
      if ( v150 )
        sub_140001660(v144, v150, 1);
      v73 = v76.m128i_i64[0];
      v108 = _mm_shuffle_epi32(v76, 238).m128i_u64[0];
      if ( v149 )
        sub_140001660(v145, v149, 1);
      goto LABEL_155;
    }
    if ( v149 == -1 )
    {
      v72 = v145;
      v109 = v75;
      v73 = v74;
      v74 = v144;
      v108 = v150;
      v110 = v76;
      goto LABEL_155;
    }
    if ( v149 == -2 )
    {
LABEL_144:
      sub_14043CE10(&v131);
      v107 = v139;
      *(_QWORD *)(v139 + 24) = v134;
      *(__m128i *)(v107 + 8) = _mm_loadu_si128(&v133);
      *(_QWORD *)v107 = -1;
      result = sub_14043D1B0(v116);
      goto LABEL_165;
    }
    v140 = *(_QWORD *)&v137[24];
    v136 = v75;
    v143 = v76.m128i_i64[0];
    if ( a5 )
    {
      v78 = a6;
      for ( j = a5; ; j = *(_QWORD *)(j + 8 * v82 + 280) )
      {
        v80 = j + 8;
        v142 = *(unsigned __int16 *)(j + 274);
        v81 = 3LL * (unsigned int)(8 * v142);
        v82 = -1;
        do
        {
          if ( !v81 )
          {
            v82 = v142;
            goto LABEL_89;
          }
          v83 = v80 + 24;
          v84 = *(_QWORD *)(v80 + 16);
          v85 = v74 - v84;
          if ( v74 < v84 )
            v84 = v74;
          v86 = sub_1416847B0(v145, *(_QWORD *)(v80 + 8), v84);
          if ( v86 )
            v85 = v86;
          v87 = (v85 > 0) - (v85 < 0);
          ++v82;
          v81 -= 24;
          v80 = v83;
        }
        while ( v87 == 1 );
        if ( !v87 )
          goto LABEL_92;
LABEL_89:
        v17 = v78-- == 0;
        if ( v17 )
          break;
      }
    }
    v148 = 1;
    v147 = 1;
    v142 = _mm_shuffle_epi32(v76, 238).m128i_u64[0];
    if ( (unsigned __int8)sub_1404E1D70(aSubagent, 10, v142, v140) )
    {
LABEL_92:
      if ( v143 )
        sub_140001660(_mm_shuffle_epi32(v76, 238).m128i_u64[0], v143, 1);
      v88 = v150;
      v89 = v149;
      v90 = v145;
      if ( v150 )
      {
        v91 = v144;
        goto LABEL_105;
      }
      goto LABEL_106;
    }
    v151 = 1;
    v92 = v136;
    sub_141486710(v137, v144, v136);
    if ( *(_DWORD *)v137 == 2 )
    {
      v121.m128i_i64[1] = *(_QWORD *)&v137[8];
      v121.m128i_i64[0] = 2;
LABEL_99:
      v151 = 1;
      sub_140018650(&v121.m128i_u64[1]);
      goto LABEL_100;
    }
    v121 = *(__m128i *)v137;
    v126 = v138;
    v125 = _mm_loadu_si128((const __m128i *)&v137[64]);
    v124 = *(_OWORD *)&v137[48];
    v123 = *(_OWORD *)&v137[32];
    v122 = *(_OWORD *)&v137[16];
    if ( *(_QWORD *)v137 == 2 )
      goto LABEL_99;
    v151 = 1;
    find_first_session_meta_line(v137, v144, v92);
    if ( *(_DWORD *)v137 != -1 )
    {
      v151 = 1;
      sub_14043E650(v137);
LABEL_100:
      v89 = v149;
      v93 = v150;
      goto LABEL_101;
    }
    if ( *(_QWORD *)&v137[8] > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_100;
    v140 = *(_QWORD *)&v137[8];
    v95 = *(_OWORD *)&v137[16];
    *(_OWORD *)v137 = *(_OWORD *)&v137[16];
    *(_OWORD *)&v137[16] = 0;
    v136 = v95;
    *(_OWORD *)&v137[32] = v95;
    sub_1408A6200(&v121, v137);
    if ( v121.m128i_i8[0] == -1 )
    {
      sub_140348CF0(&v121);
LABEL_124:
      v93 = v150;
      if ( v140 )
      {
        v101 = v150;
        sub_140001660(v136, v140, 1);
        v93 = v101;
      }
      v89 = v149;
      goto LABEL_101;
    }
    v96 = _mm_loadu_si128((const __m128i *)&v121.m128i_i8[1]);
    *(_OWORD *)&v118[15] = v122;
    *(__m128i *)v118 = v96;
    v117 = v121.m128i_i8[0];
    v97 = (_BYTE *)sub_141433D50(aPayload, 7, &v117);
    if ( !v97
      || *v97 != 5
      || (v98 = v97 + 8, (v99 = sub_1402B3A40(v97 + 8, aId_2, 2)) == 0)
      || *(_BYTE *)v99 != 3
      || *(_QWORD *)(v99 + 24) != v74
      || (unsigned int)sub_1416847B0(*(_QWORD *)(v99 + 16), v145, v74)
      || (v100 = sub_1402B3A40(v98, aCwd_0, 3)) == 0
      || *(_BYTE *)v100 != 3 )
    {
      sub_1400104F0(&v117);
      goto LABEL_124;
    }
    sub_140499BF0((__int64 *)v137, *(_QWORD *)(v100 + 16), *(_QWORD *)(v100 + 24));
    if ( *(_QWORD *)&v137[16] )
    {
      v135 = *(_QWORD *)&v137[8];
      v130 = *(_QWORD *)&v137[16];
      v141 = *(_QWORD *)v137;
    }
    else
    {
      v141 = -1;
      if ( *(_QWORD *)v137 )
        sub_140001660(*(_QWORD *)&v137[8], *(_QWORD *)v137, 1);
    }
    sub_1400104F0(&v117);
    if ( v140 )
      sub_140001660(v136, v140, 1);
    if ( v141 == -1 )
      goto LABEL_135;
    v146 = 1;
    if ( (unsigned __int8)sub_14049B870(v135, v130) )
    {
      if ( v141 )
        sub_140001660(v135, v141, 1);
LABEL_135:
      v89 = v149;
      v93 = v150;
LABEL_101:
      v94 = v143;
      if ( v93 )
        sub_140001660(v144, v93, 1);
      v90 = v145;
      if ( v94 )
      {
        v91 = v142;
        v88 = v94;
LABEL_105:
        sub_140001660(v91, v88, 1);
      }
LABEL_106:
      if ( v89 )
        sub_140001660(v90, v89, 1);
      continue;
    }
    *(_QWORD *)v137 = v149;
    *(_QWORD *)&v137[8] = v145;
    *(_QWORD *)&v137[16] = v74;
    *(_QWORD *)&v137[24] = v141;
    *(_QWORD *)&v137[32] = v135;
    *(_QWORD *)&v137[40] = v130;
    v102 = v134;
    if ( v134 == v133.m128i_i64[0] )
      sub_141688FC0(&v133);
    v103 = v133.m128i_i64[1];
    v104 = 48 * v102;
    v105 = _mm_loadu_si128((const __m128i *)v137);
    v106 = *(_OWORD *)&v137[16];
    *(_OWORD *)(v133.m128i_i64[1] + v104 + 32) = *(_OWORD *)&v137[32];
    *(_OWORD *)(v103 + v104 + 16) = v106;
    *(__m128i *)(v103 + v104) = v105;
    v134 = v102 + 1;
    if ( v150 )
      sub_140001660(v144, v150, 1);
    if ( v143 )
      sub_140001660(v142, v143, 1);
  }
  v109 = *(_QWORD *)&v137[32];
  v110 = _mm_loadu_si128((const __m128i *)&v137[40]);
  v77 = *(_QWORD *)&v137[56];
  if ( v149 )
    sub_140001660(v145, v149, 1);
  v74 = v75;
  v108 = v144;
  v73 = v150;
LABEL_155:
  v111 = v139;
  *(_QWORD *)v139 = v72;
  *(_QWORD *)(v111 + 8) = v73;
  *(_QWORD *)(v111 + 16) = v108;
  *(_QWORD *)(v111 + 24) = v74;
  *(_QWORD *)(v111 + 32) = v109;
  *(__m128i *)(v111 + 40) = v110;
  *(_QWORD *)(v111 + 56) = v77;
  sub_14043CE10(&v131);
  v112 = v134;
  if ( v134 )
  {
    v113 = (_QWORD *)(v133.m128i_i64[1] + 32);
    do
    {
      v114 = *(v113 - 4);
      if ( v114 )
        sub_140001660(*(v113 - 3), v114, 1);
      v115 = *(v113 - 1);
      if ( v115 )
        sub_140001660(*v113, v115, 1);
      v113 += 6;
      --v112;
    }
    while ( v112 );
  }
  if ( v133.m128i_i64[0] )
    sub_140001660(v133.m128i_i64[1], 48 * v133.m128i_i64[0], 8);
LABEL_164:
  result = sub_14043D1B0(v116);
LABEL_165:
  if ( v127 )
    return sub_140001660(v128, v127, 1);
  return result;
}