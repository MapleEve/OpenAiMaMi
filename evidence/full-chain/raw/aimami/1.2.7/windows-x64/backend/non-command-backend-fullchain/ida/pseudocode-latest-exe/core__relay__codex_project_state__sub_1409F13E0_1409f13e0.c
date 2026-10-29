// win 1.2.7 latest-exe | module src/core/relay/codex_project_state.rs | ea 0x1409f13e0 | successor of pre-update 0x140f65be0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
double __fastcall sub_1409F13E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __m128i si128; // xmm0
  __int64 v10; // rdx
  __int64 v11; // rsi
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // r14
  __m128i v17; // xmm6
  __int64 v18; // rax
  _OWORD *v19; // rcx
  __m128i *v20; // rax
  _OWORD *v21; // rcx
  __m128i *v22; // rax
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // r12
  __int64 v27; // r13
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r15
  __int64 v30; // r15
  int v31; // eax
  unsigned __int8 v32; // cl
  bool v33; // cf
  __int64 v34; // r14
  __int64 j; // rcx
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // r12
  __int64 v39; // r13
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // r15
  __int64 v42; // r15
  int v43; // eax
  char v44; // cl
  __int64 v45; // r15
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // r13
  __int64 v50; // rdi
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // r12
  __int64 v53; // r12
  int v54; // eax
  char v55; // cl
  __int64 v56; // rax
  void *v57; // rcx
  __int64 v58; // r14
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rsi
  __int64 v62; // r12
  __int64 v63; // r13
  unsigned __int64 v64; // r8
  unsigned __int64 v65; // r15
  __int64 v66; // r15
  int v67; // eax
  char v68; // cl
  __int64 v69; // rax
  void *v70; // rdi
  __int64 v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rcx
  int v74; // eax
  __int128 v75; // rax
  __int64 v76; // rsi
  __int64 v77; // rbx
  __int64 v78; // rsi
  __int64 v79; // r14
  __int64 v80; // r15
  int v81; // eax
  __int64 v82; // r14
  __int64 v83; // r12
  __int64 v84; // rdi
  __int64 v85; // r13
  __int64 v86; // r12
  __int64 v87; // rsi
  __int64 v88; // r12
  __int64 v89; // rsi
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rsi
  __int64 v93; // rdi
  __int64 v94; // rsi
  __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rsi
  __int64 v100; // r13
  __int64 v101; // r12
  unsigned __int64 v102; // r8
  unsigned __int64 v103; // r15
  __int64 v104; // r15
  int v105; // eax
  char v106; // cl
  __int64 v107; // rbx
  __int64 i; // rax
  __int64 v109; // rdx
  __int64 v110; // r12
  __int64 v111; // rax
  __int128 v113; // [rsp+38h] [rbp-48h] BYREF
  __int64 v114; // [rsp+48h] [rbp-38h]
  _OWORD v115[7]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v116[2]; // [rsp+C8h] [rbp+48h] BYREF
  _QWORD v117[2]; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v118; // [rsp+E8h] [rbp+68h] BYREF
  __int128 v119; // [rsp+F0h] [rbp+70h]
  __int64 v120[3]; // [rsp+100h] [rbp+80h] BYREF
  __int64 v121; // [rsp+118h] [rbp+98h]
  __int64 v122; // [rsp+120h] [rbp+A0h]
  __int64 v123; // [rsp+128h] [rbp+A8h]
  __m128i v124; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v125; // [rsp+140h] [rbp+C0h]
  __int64 v126; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v127; // [rsp+150h] [rbp+D0h]
  __int64 v128; // [rsp+158h] [rbp+D8h]
  _BYTE v129[48]; // [rsp+160h] [rbp+E0h] BYREF
  __m128i v130; // [rsp+190h] [rbp+110h]
  __int64 v131; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 v132; // [rsp+1B0h] [rbp+130h]
  __int64 v133; // [rsp+1B8h] [rbp+138h]
  _BYTE *v134; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v135; // [rsp+1C8h] [rbp+148h] BYREF
  __int64 v136; // [rsp+1D0h] [rbp+150h]
  __int64 v137; // [rsp+1D8h] [rbp+158h]
  __int64 v138; // [rsp+1E0h] [rbp+160h]
  __int64 v139; // [rsp+1E8h] [rbp+168h]
  __int64 v140; // [rsp+1F0h] [rbp+170h]
  __int64 v141; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v142; // [rsp+200h] [rbp+180h]
  __int64 v143; // [rsp+208h] [rbp+188h]
  __int64 v144; // [rsp+210h] [rbp+190h]
  __int64 v145; // [rsp+218h] [rbp+198h]
  _BYTE *v146; // [rsp+220h] [rbp+1A0h] BYREF
  _QWORD v147[2]; // [rsp+228h] [rbp+1A8h] BYREF
  _BYTE *v148; // [rsp+238h] [rbp+1B8h]
  __int128 v149; // [rsp+240h] [rbp+1C0h]
  __m256i v150; // [rsp+250h] [rbp+1D0h] BYREF
  __m128i v151; // [rsp+270h] [rbp+1F0h]
  __m128i v152; // [rsp+280h] [rbp+200h]
  _BYTE v153[80]; // [rsp+290h] [rbp+210h] BYREF
  __int128 v154; // [rsp+2E0h] [rbp+260h]
  __int128 v155; // [rsp+2F0h] [rbp+270h]
  __int64 v156; // [rsp+300h] [rbp+280h]
  char v157; // [rsp+30Fh] [rbp+28Fh]
  __int64 v158; // [rsp+310h] [rbp+290h]
  __int64 v159; // [rsp+318h] [rbp+298h]
  char v160; // [rsp+325h] [rbp+2A5h]
  char v161; // [rsp+326h] [rbp+2A6h]
  char v162; // [rsp+327h] [rbp+2A7h]
  __int64 v163; // [rsp+328h] [rbp+2A8h]

  v163 = -2;
  sub_1409EE930((__int64)v153, a2);
  if ( *(_QWORD *)v153 == -1 )
  {
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 8;
    *(_QWORD *)(a1 + 56) = 0;
    *(_OWORD *)(a1 + 16) = 0;
    *(_OWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 32) = 8;
    *(_OWORD *)(a1 + 40) = 0;
    si128.m128i_i64[0] = 0;
    return *(double *)si128.m128i_i64;
  }
  v137 = a1;
  v148 = *(_BYTE **)&v153[8];
  v136 = *(_QWORD *)v153;
  v127 = *(_QWORD *)&v153[16];
  sub_1409016A0(v153, *(_QWORD *)&v153[8], *(_QWORD *)&v153[16], 32769);
  if ( BYTE8(v155) == 0xFF )
  {
    v152 = *(__m128i *)&v153[48];
    v151 = *(__m128i *)&v153[32];
    *(_OWORD *)&v150.m256i_u64[2] = *(_OWORD *)&v153[16];
    *(__m128i *)v150.m256i_i8 = _mm_loadu_si128((const __m128i *)v153);
    nullsub_1(v8, v7);
    v159 = sub_140001650(24, 8);
    if ( !v159 )
      sub_14196B2C1(8, 24);
    v146 = v148;
    v147[0] = v127;
    *(_QWORD *)v129 = &v146;
    *(_QWORD *)&v129[8] = sub_1416CE600;
    *(_QWORD *)&v129[16] = &v150;
    *(_QWORD *)&v129[24] = sub_14142D4D0;
    sub_1416DAFA0(&v113, &unk_141A5C97C, v129);
    v21 = (_OWORD *)v159;
    *(_QWORD *)(v159 + 16) = v114;
    *v21 = v113;
    *(_OWORD *)&v129[8] = 0;
    v22 = (__m128i *)v137;
    *(_OWORD *)(v137 + 48) = 0;
    v22->m128i_i64[0] = 0;
    v22->m128i_i64[1] = 8;
    v22[1].m128i_i64[0] = 0;
    si128 = _mm_loadu_si128((const __m128i *)v129);
    v22[4] = si128;
    v22[5].m128i_i64[0] = 0;
    v22[1].m128i_i64[1] = 1;
    v22[2].m128i_i64[0] = (__int64)v21;
    v22[2].m128i_i64[1] = 1;
    sub_140904700(&v150);
    goto LABEL_164;
  }
  v115[6] = v155;
  v115[5] = v154;
  v115[4] = *(_OWORD *)&v153[64];
  si128 = _mm_loadu_si128((const __m128i *)v153);
  v115[3] = *(_OWORD *)&v153[48];
  v115[2] = *(_OWORD *)&v153[32];
  v115[1] = *(_OWORD *)&v153[16];
  v115[0] = si128;
  sub_141431450(v153, v115, 0, 500000000);
  if ( *(_QWORD *)v153 != -1 )
    sub_140904700(v153);
  sub_1409EF610((__int64)v153, (__int64)v115);
  v11 = *(_QWORD *)&v153[8];
  v12 = *(_QWORD *)v153;
  v13 = *(_QWORD *)&v153[24];
  v14 = *(_QWORD *)&v153[16];
  if ( *(_QWORD *)v153 != -1 )
  {
    v15 = *(_QWORD *)&v153[40];
    v16 = *(_QWORD *)&v153[32];
    v17 = _mm_loadu_si128((const __m128i *)&v153[48]);
    goto LABEL_7;
  }
  v118 = *(_QWORD *)&v153[8];
  v119 = *(_OWORD *)&v153[16];
  if ( !*(_QWORD *)&v153[8] )
  {
    v17 = 0;
    v12 = 8;
    v71 = 0;
    v158 = 8;
    v156 = 0;
    v16 = 0;
    v14 = 0;
    v11 = 0;
    v72 = 0;
    v73 = 0;
LABEL_157:
    *(_QWORD *)v153 = v72;
    *(_QWORD *)&v153[32] = v72;
    *(_QWORD *)&v153[64] = v73;
    sub_140A6FD50(&v150, v153);
    for ( i = v150.m256i_i64[0]; v150.m256i_i64[0]; i = v150.m256i_i64[0] )
    {
      v109 = *(_QWORD *)(i + 24 * v150.m256i_i64[2] + 8);
      if ( v109 )
        *(double *)si128.m128i_i64 = sub_140001660(*(_QWORD *)(i + 24 * v150.m256i_i64[2] + 16), v109, 1);
      sub_140A6FD50(&v150, v153);
    }
    v110 = 0;
    v107 = 0;
    if ( v71 == -1 )
      goto LABEL_173;
    goto LABEL_162;
  }
  v123 = a4;
  v122 = a3;
  v121 = *(_QWORD *)&v153[24];
  v159 = 0;
  v23 = *(_QWORD *)&v153[16];
  v149 = *(_OWORD *)&v153[8];
  while ( 1 )
  {
    v24 = v11 + 8;
    v156 = v11;
    v158 = *(unsigned __int16 *)(v11 + 274);
    v25 = 3LL * (unsigned int)(8 * v158);
    v26 = -1;
    do
    {
      if ( !v25 )
      {
        v26 = v158;
        goto LABEL_24;
      }
      v27 = v24 + 24;
      v28 = *(_QWORD *)(v24 + 16);
      v29 = v28 - 2;
      if ( v28 >= 2 )
        v28 = 2;
      v30 = -(__int64)v29;
      v31 = sub_141923B40(
              "idcwdpathnamepreviewsourceagentNicknameagentRoleprojectIdhistoryModegitInfoupdatedAtrecencyAtturns",
              *(_QWORD *)(v24 + 8),
              v28);
      if ( v31 )
        v30 = v31;
      v32 = (v30 > 0) - (v30 < 0);
      ++v26;
      v25 -= 24;
      v24 = v27;
    }
    while ( v32 == 1 );
    if ( v32 != 255 )
      break;
LABEL_24:
    v33 = v23-- == 0;
    if ( v33 )
    {
LABEL_75:
      v17 = 0;
      v158 = 8;
      v76 = 0;
      v16 = 0;
      v77 = 0;
      v12 = 8;
      v71 = 0;
      goto LABEL_156;
    }
    v11 = *(_QWORD *)(v156 + 8 * v26 + 280);
  }
  v159 = 0;
  v34 = *((_QWORD *)&v149 + 1);
  for ( j = v149; ; j = *(_QWORD *)(v156 + 8 * v38 + 280) )
  {
    v36 = j + 8;
    v156 = j;
    v158 = *(unsigned __int16 *)(j + 274);
    v37 = 3LL * (unsigned int)(8 * v158);
    v38 = -1;
    do
    {
      if ( !v37 )
      {
        v38 = v158;
        goto LABEL_37;
      }
      v39 = v36 + 24;
      v40 = *(_QWORD *)(v36 + 16);
      v41 = v40 - 3;
      if ( v40 >= 3 )
        v40 = 3;
      v42 = -(__int64)v41;
      v43 = sub_141923B40(
              "cwdpathnamepreviewsourceagentNicknameagentRoleprojectIdhistoryModegitInfoupdatedAtrecencyAtturns",
              *(_QWORD *)(v36 + 8),
              v40);
      if ( v43 )
        v42 = v43;
      v44 = (v42 > 0) - (v42 < 0);
      ++v38;
      v37 -= 24;
      v36 = v39;
    }
    while ( v44 == 1 );
    if ( !v44 )
      break;
LABEL_37:
    v33 = v34-- == 0;
    if ( v33 )
      goto LABEL_75;
  }
  v45 = *((_QWORD *)&v149 + 1);
  v46 = v149;
  while ( 2 )
  {
    v47 = v46 + 8;
    v159 = v46;
    v156 = *(unsigned __int16 *)(v46 + 274);
    v48 = 3LL * (unsigned int)(8 * v156);
    v49 = -1;
    do
    {
      if ( !v48 )
      {
        v49 = v156;
        goto LABEL_50;
      }
      v50 = v47 + 24;
      v51 = *(_QWORD *)(v47 + 16);
      v52 = v51 - 8;
      if ( v51 >= 8 )
        v51 = 8;
      v53 = -(__int64)v52;
      v54 = sub_141923B40(aArchived_0, *(_QWORD *)(v47 + 8), v51);
      if ( v54 )
        v53 = v54;
      v55 = (v53 > 0) - (v53 < 0);
      ++v49;
      v48 -= 24;
      v47 = v50;
    }
    while ( v55 == 1 );
    if ( !v55 )
    {
      v56 = 25;
      v57 = &unk_141A64C9F;
      goto LABEL_53;
    }
LABEL_50:
    v33 = v45-- == 0;
    if ( !v33 )
    {
      v46 = *(_QWORD *)(v159 + 8 * v49 + 280);
      continue;
    }
    break;
  }
  v56 = 5;
  v57 = &unk_141A64CB8;
LABEL_53:
  v117[0] = v57;
  v117[1] = v56;
  v58 = *((_QWORD *)&v149 + 1);
  v59 = v149;
  while ( 2 )
  {
    v60 = v59 + 8;
    v159 = v59;
    v156 = *(unsigned __int16 *)(v59 + 274);
    v61 = 3LL * (unsigned int)(8 * v156);
    v62 = -1;
    do
    {
      if ( !v61 )
      {
        v62 = v156;
        goto LABEL_64;
      }
      v63 = v60 + 24;
      v64 = *(_QWORD *)(v60 + 16);
      v65 = v64 - 13;
      if ( v64 >= 0xD )
        v64 = 13;
      v66 = -(__int64)v65;
      v67 = sub_141923B40(&unk_141A64D30, *(_QWORD *)(v60 + 8), v64);
      if ( v67 )
        v66 = v67;
      v68 = (v66 > 0) - (v66 < 0);
      ++v62;
      v61 -= 24;
      v60 = v63;
    }
    while ( v68 == 1 );
    if ( !v68 )
    {
      v69 = 26;
      v70 = &unk_141A64D3D;
      goto LABEL_67;
    }
LABEL_64:
    v33 = v58-- == 0;
    if ( !v33 )
    {
      v59 = *(_QWORD *)(v159 + 8 * v62 + 280);
      continue;
    }
    break;
  }
  v70 = &unk_141A64D78;
  v159 = *((_QWORD *)&v149 + 1);
  v97 = v149;
  while ( 2 )
  {
    v98 = v97 + 8;
    v156 = v97;
    v158 = *(unsigned __int16 *)(v97 + 274);
    v99 = 3LL * (unsigned int)(8 * v158);
    v100 = -1;
    do
    {
      if ( !v99 )
      {
        v100 = v158;
        goto LABEL_137;
      }
      v101 = v98 + 24;
      v102 = *(_QWORD *)(v98 + 16);
      v103 = v102 - 10;
      if ( v102 >= 0xA )
        v102 = 10;
      v104 = -(__int64)v103;
      v105 = sub_141923B40(&unk_141A64D57, *(_QWORD *)(v98 + 8), v102);
      if ( v105 )
        v104 = v105;
      v106 = (v104 > 0) - (v104 < 0);
      ++v100;
      v99 -= 24;
      v98 = v101;
    }
    while ( v106 == 1 );
    if ( !v106 )
    {
      v69 = 23;
      v70 = &unk_141A64D61;
      goto LABEL_67;
    }
LABEL_137:
    if ( v159 )
    {
      --v159;
      v97 = *(_QWORD *)(v156 + 8 * v100 + 280);
      continue;
    }
    break;
  }
  v69 = 1;
LABEL_67:
  v116[0] = v70;
  v116[1] = v69;
  v150.m256i_i64[0] = (__int64)v117;
  v150.m256i_i64[1] = (__int64)sub_140191200;
  sub_1416DAFA0(v153, &unk_141A64D79, &v150);
  v158 = *(_QWORD *)&v153[8];
  v159 = *(_QWORD *)v153;
  sub_140930990(v153, v115, *(_QWORD *)&v153[8], *(_QWORD *)&v153[16]);
  v150 = *(__m256i *)&v153[8];
  v151 = *(__m128i *)&v153[40];
  v152 = *(__m128i *)&v153[56];
  if ( *(_DWORD *)v153 != 1 )
  {
    si128 = _mm_load_si128((const __m128i *)&v150);
    v130 = v152;
    *(__m128i *)&v129[32] = v151;
    *(_OWORD *)&v129[16] = *(_OWORD *)&v150.m256i_u64[2];
    *(__m128i *)v129 = si128;
    v74 = sub_1417D8600(v152.m128i_i64[1]);
    if ( v74 )
    {
      *(_OWORD *)v153 = 0x8000000000000013uLL;
      *(_QWORD *)&v153[16] = v74;
LABEL_79:
      sub_140904890(v129);
      goto LABEL_80;
    }
    v146 = v129;
    v147[0] = 0;
    sub_140A07DF0(v153, &v146);
    *(_QWORD *)&v75 = *(_QWORD *)v153;
    if ( *(_QWORD *)v153 == -1 )
    {
      *((_QWORD *)&v75 + 1) = v147;
      if ( v147[0] )
      {
        sub_140658A10(v153, v147, 0, &off_141A5A350);
        goto LABEL_78;
      }
      *(_QWORD *)&v75 = 0x8000000000000009uLL;
    }
    else
    {
      *((_QWORD *)&v75 + 1) = *(_QWORD *)&v153[8];
      v150 = *(__m256i *)&v153[16];
      v151 = _mm_loadu_si128((const __m128i *)&v153[48]);
    }
    *(_OWORD *)v153 = v75;
    si128 = _mm_load_si128((const __m128i *)&v150);
    *(__m128i *)&v153[16] = si128;
    *(_OWORD *)&v153[32] = *(_OWORD *)&v150.m256i_u64[2];
    *(__m128i *)&v153[48] = v151;
LABEL_78:
    sub_1409044F0(&v146);
    goto LABEL_79;
  }
  si128 = _mm_load_si128((const __m128i *)&v150);
  *(__m128i *)&v153[48] = v152;
  *(__m128i *)&v153[32] = v151;
  *(_OWORD *)&v153[16] = *(_OWORD *)&v150.m256i_u64[2];
  *(__m128i *)v153 = si128;
LABEL_80:
  v79 = *(_QWORD *)&v153[8];
  v78 = *(_QWORD *)v153;
  if ( *(_QWORD *)v153 != -1 )
    sub_140904700(v153);
  if ( v79 <= 0 )
    v79 = 0;
  if ( v78 != -1 )
    v79 = 0;
  v156 = v79;
  if ( v159 )
    *(double *)si128.m128i_i64 = sub_140001660(v158, v159, 1);
  *(_QWORD *)v153 = v117;
  *(_QWORD *)&v153[8] = sub_140191200;
  *(_QWORD *)&v153[16] = v116;
  *(_QWORD *)&v153[24] = sub_140191200;
  sub_1416DAFA0(&v150, &unk_141A64D9F, v153);
  v139 = v150.m256i_i64[1];
  v145 = v150.m256i_i64[0];
  sub_140930990(v153, v115, v150.m256i_i64[1], v150.m256i_i64[2]);
  v12 = *(_QWORD *)&v153[8];
  v76 = *(_QWORD *)&v153[24];
  v80 = *(_QWORD *)&v153[16];
  v16 = *(_QWORD *)&v153[40];
  v77 = *(_QWORD *)&v153[48];
  v17 = _mm_loadu_si128((const __m128i *)&v153[56]);
  if ( v153[0] )
  {
    v158 = *(_QWORD *)&v153[32];
    goto LABEL_153;
  }
  *(_QWORD *)v129 = *(_QWORD *)&v153[8];
  *(_OWORD *)&v129[8] = *(_OWORD *)&v153[16];
  *(_OWORD *)&v129[24] = *(_OWORD *)&v153[32];
  *(_QWORD *)&v129[40] = *(_QWORD *)&v153[48];
  si128.m128i_i64[0] = _mm_shuffle_epi32(v17, 238).m128i_u64[0];
  v130 = v17;
  v81 = sub_1417D8600(si128.m128i_i64[0]);
  v76 = v81;
  if ( v81 )
  {
    v80 = 0;
    v12 = 0x8000000000000013uLL;
LABEL_152:
    sub_140904890(v129);
LABEL_153:
    v159 = v80;
    if ( v145 )
      *(double *)si128.m128i_i64 = sub_140001660(v139, v145, 1);
    v71 = -1;
LABEL_156:
    *(_QWORD *)&v153[8] = 0;
    *(_OWORD *)&v153[16] = v149;
    *(_QWORD *)&v153[40] = 0;
    *(_OWORD *)&v153[48] = v149;
    v72 = 1;
    v156 = v77;
    v14 = v76;
    v11 = v159;
    v73 = v121;
    goto LABEL_157;
  }
  v141 = 0;
  v142 = 8;
  v143 = 0;
  v120[0] = 0;
  v120[2] = 0;
  v124.m128i_i64[0] = 0;
  v125 = 0;
  v126 = 0;
  v134 = v129;
  v135 = 0;
  v82 = 0;
  while ( 1 )
  {
    sub_140A07DF0(v153, &v134);
    v12 = *(_QWORD *)v153;
    if ( *(_QWORD *)v153 != -1 )
    {
      v80 = *(_QWORD *)&v153[8];
      v84 = *(_QWORD *)&v153[24];
      v76 = *(_QWORD *)&v153[16];
LABEL_141:
      v77 = *(_QWORD *)&v153[40];
      v16 = *(_QWORD *)&v153[32];
      v17 = _mm_loadu_si128((const __m128i *)&v153[48]);
LABEL_151:
      sub_1409044F0(&v134);
      sub_140A94590(&v124);
      v158 = v84;
      v161 = 1;
      sub_140A94B00(v120);
      sub_1400290B0(&v141);
      goto LABEL_152;
    }
    v83 = v135;
    if ( !v135 )
      break;
    sub_140658620(v153, &v135, 0, &off_141A5A368);
    v80 = *(_QWORD *)&v153[8];
    v12 = *(_QWORD *)v153;
    v84 = *(_QWORD *)&v153[24];
    v76 = *(_QWORD *)&v153[16];
    if ( *(_QWORD *)v153 != -1 )
      goto LABEL_141;
    v158 = *(_QWORD *)&v153[16];
    if ( (unsigned int)sub_1417D8BB0(*(_QWORD *)(v83 + 56)) < 2 )
    {
      v84 = *(_QWORD *)&v153[24];
      v76 = *(_QWORD *)&v153[16];
      v77 = *(_QWORD *)&v153[40];
      v16 = *(_QWORD *)&v153[32];
      v17 = _mm_loadu_si128((const __m128i *)&v153[48]);
      v12 = 0x800000000000000BuLL;
      if ( v80 )
        *(double *)si128.m128i_i64 = sub_140001660(v158, v80, 1);
      v80 = 1;
      goto LABEL_151;
    }
    v159 = v80;
    sub_14142DA40(&v153[8], v83, 1);
    if ( *(_QWORD *)&v153[8] < 3u
      || (sub_1416E2AB0(v153, *(_QWORD *)&v153[16], *(_QWORD *)&v153[24]), *(_DWORD *)v153 == 1) )
    {
      if ( v159 )
        *(double *)si128.m128i_i64 = sub_140001660(v158, v159, 1);
      v126 = ++v82;
    }
    else
    {
      v85 = *(_QWORD *)&v153[8];
      v86 = *(_QWORD *)&v153[16];
      sub_1401E7560((unsigned int)v153, *(_DWORD *)&v153[16], 0, 1, 1);
      if ( *(_DWORD *)v153 == 1 )
        sub_14196B2DB(*(_QWORD *)&v153[8], *(_QWORD *)&v153[16]);
      v144 = *(_QWORD *)&v153[8];
      v87 = *(_QWORD *)&v153[16];
      if ( v86 )
        *(double *)si128.m128i_i64 = sub_1419234B0(*(_QWORD *)&v153[16], v85, v86);
      v160 = 1;
      v138 = v87;
      sub_1409EF4B0(&v131, v87, v86);
      v88 = v133;
      if ( v133 )
      {
        v150.m256i_i64[0] = v159;
        v150.m256i_i64[1] = v158;
        v150.m256i_i64[2] = v84;
        v157 = 1;
        sub_1416DB410(v153, &v131);
        v157 = 0;
        sub_140A64A80(&v146, &v124, &v150, v153);
        if ( v146 != (_BYTE *)-1LL && v146 )
        {
          *(double *)si128.m128i_i64 = sub_140001660(v147[0], v146, 1);
          v88 = v133;
        }
        v89 = v132;
        v162 = 1;
        if ( (unsigned __int8)sub_1409F1080(v132, v88)
          || (v162 = 1, sub_1416DB410(v153, &v131), v162 = 1, (unsigned __int8)sub_140A67680(v120, v153)) )
        {
          if ( v131 )
            *(double *)si128.m128i_i64 = sub_140001660(v89, v131, 1);
          v90 = v144;
          v91 = v138;
          if ( v144 )
            goto LABEL_111;
        }
        else
        {
          v128 = v89;
          v140 = v131;
          v94 = v143;
          if ( v143 == v141 )
            sub_141939F90(&v141);
          v95 = v142;
          v96 = 3 * v94;
          *(_QWORD *)(v142 + 8 * v96) = v140;
          *(_QWORD *)(v95 + 8 * v96 + 8) = v128;
          *(_QWORD *)(v95 + 8 * v96 + 16) = v88;
          v143 = v94 + 1;
          v90 = v144;
          v91 = v138;
          if ( v144 )
LABEL_111:
            *(double *)si128.m128i_i64 = sub_140001660(v91, v90, 1);
        }
      }
      else
      {
        v92 = v159;
        v93 = v144;
        if ( v131 )
          *(double *)si128.m128i_i64 = sub_140001660(v132, v131, 1);
        if ( v93 )
          *(double *)si128.m128i_i64 = sub_140001660(v138, v93, 1);
        if ( v92 )
          *(double *)si128.m128i_i64 = sub_140001660(v158, v92, 1);
      }
    }
  }
  sub_1409044F0(&v134);
  if ( v82 && *(_QWORD *)off_14223FF10 >= 2u )
  {
    v150.m256i_i64[0] = (__int64)&v126;
    v150.m256i_i64[1] = (__int64)sub_1416EBAE0;
    *(_QWORD *)v153 = aCodexmateLibCo_38;
    *(_QWORD *)&v153[8] = 47;
    *(_QWORD *)&v153[16] = aCodexmateLibCo_38;
    *(_QWORD *)&v153[24] = 47;
    *(_QWORD *)&v153[32] = &off_141A64E50;
    sub_140AF72B0(&unk_141A64DF2, &v150, 2, v153);
  }
  sub_1409EFBB0((unsigned int)v153, (unsigned int)v115, v149, DWORD2(v149), v122, v123);
  if ( *(_QWORD *)v153 == -1 )
  {
    v107 = *(_QWORD *)&v153[24];
    sub_140029260(&v153[8]);
  }
  else
  {
    si128 = _mm_loadu_si128((const __m128i *)v153);
    *(__m128i *)v150.m256i_i8 = si128;
    v152 = *(__m128i *)&v153[48];
    v151 = *(__m128i *)&v153[32];
    *(_OWORD *)&v150.m256i_u64[2] = *(_OWORD *)&v153[16];
    if ( si128.m128i_i64[0] == -1 )
    {
      v107 = v150.m256i_i64[1];
    }
    else
    {
      sub_140904700(&v150);
      v107 = 0;
    }
  }
  v71 = v141;
  v12 = v142;
  v11 = v143;
  v17 = _mm_load_si128(&v124);
  v110 = v125;
  v161 = 0;
  sub_140A94B00(v120);
  sub_140904890(v129);
  if ( v145 )
    *(double *)si128.m128i_i64 = sub_140001660(v139, v145, 1);
  sub_140A94B00(&v118);
  v158 = 8;
  v14 = 0;
  v16 = 0;
  if ( v71 != -1 )
  {
LABEL_162:
    v111 = v137;
    *(_QWORD *)v137 = v71;
    *(_QWORD *)(v111 + 8) = v12;
    *(_QWORD *)(v111 + 16) = v11;
    *(_QWORD *)(v111 + 24) = v14;
    *(_QWORD *)(v111 + 32) = v158;
    *(_QWORD *)(v111 + 40) = v16;
    *(_QWORD *)(v111 + 48) = v156;
    *(__m128i *)(v111 + 56) = v17;
    *(_QWORD *)(v111 + 72) = v110;
    *(_QWORD *)(v111 + 80) = v107;
    goto LABEL_163;
  }
LABEL_173:
  v13 = v158;
  v15 = v156;
LABEL_7:
  *(_QWORD *)v153 = v12;
  *(_QWORD *)&v153[8] = v11;
  *(_QWORD *)&v153[16] = v14;
  *(_QWORD *)&v153[24] = v13;
  *(_QWORD *)&v153[32] = v16;
  *(_QWORD *)&v153[40] = v15;
  *(__m128i *)&v153[48] = v17;
  nullsub_1(v15, v10);
  v18 = sub_140001650(24, 8);
  if ( !v18 )
    sub_14196B2C1(8, 24);
  v159 = v18;
  v146 = v148;
  v147[0] = v127;
  v150.m256i_i64[0] = (__int64)&v146;
  v150.m256i_i64[1] = (__int64)sub_1416CE600;
  v150.m256i_i64[2] = (__int64)v153;
  v150.m256i_i64[3] = (__int64)sub_14142D4D0;
  sub_1416DAFA0(v129, &unk_141A58FE9, &v150);
  v19 = (_OWORD *)v159;
  *(_QWORD *)(v159 + 16) = *(_QWORD *)&v129[16];
  *v19 = *(_OWORD *)v129;
  *(_OWORD *)&v150.m256i_u64[1] = 0;
  v20 = (__m128i *)v137;
  *(_OWORD *)(v137 + 48) = 0;
  v20->m128i_i64[0] = 0;
  v20->m128i_i64[1] = 8;
  v20[1].m128i_i64[0] = 0;
  si128 = _mm_loadu_si128((const __m128i *)&v150);
  v20[4] = si128;
  v20[5].m128i_i64[0] = 0;
  v20[1].m128i_i64[1] = 1;
  v20[2].m128i_i64[0] = (__int64)v19;
  v20[2].m128i_i64[1] = 1;
  sub_140904700(v153);
LABEL_163:
  sub_140903740(v115);
LABEL_164:
  if ( v136 )
    *(double *)si128.m128i_i64 = sub_140001660(v148, v136, 1);
  return *(double *)si128.m128i_i64;
}
