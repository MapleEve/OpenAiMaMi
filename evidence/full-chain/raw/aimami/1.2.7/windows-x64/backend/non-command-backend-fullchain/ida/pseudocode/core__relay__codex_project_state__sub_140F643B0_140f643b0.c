// win 1.2.7 | module src/core/relay/codex_project_state.rs | ea 0x140f643b0 | name sub_140F643B0
// win 1.2.7 | module src/core/relay/codex_project_state.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F643B0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // r13
  int v13; // eax
  unsigned __int8 v14; // cl
  bool v15; // cf
  __int64 v16; // r13
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdi
  unsigned __int64 v21; // rsi
  __int64 v22; // r14
  int v23; // eax
  unsigned __int8 v24; // cl
  __int64 v25; // r13
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rdi
  unsigned __int64 v30; // rsi
  __int64 v31; // r14
  int v32; // eax
  char v33; // cl
  __int64 v34; // r14
  unsigned __int64 i; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // r12
  unsigned __int64 v39; // rsi
  __int64 v40; // rdi
  int v41; // eax
  char v42; // cl
  __int64 v43; // rax
  void *v44; // rdx
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rbx
  __int64 v49; // rdi
  unsigned __int64 v50; // r14
  __int64 v51; // r12
  int v52; // eax
  char v53; // cl
  __int64 v54; // rax
  const char *v55; // rcx
  __m128i v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm2
  __int64 result; // rax
  int v60; // eax
  __int64 v61; // rdx
  unsigned __int64 v62; // r15
  __int64 v63; // rsi
  __int64 v64; // r14
  __int64 v65; // rsi
  __m128i v66; // xmm7
  __int64 v67; // rsi
  __int64 j; // r15
  __int64 v69; // rax
  __int64 v70; // r13
  __int64 v71; // rdi
  __int64 v72; // r12
  __int64 v73; // rbx
  int v74; // eax
  char v75; // cl
  unsigned __int64 v76; // rdx
  __int64 v77; // rsi
  unsigned __int64 v78; // rdi
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // rdx
  __int64 v81; // r14
  __int64 v82; // rdx
  __int64 v83; // rax
  __m128i v84; // xmm0
  _BYTE *v85; // rax
  _BYTE *v86; // rsi
  __int64 v87; // rax
  unsigned __int64 v88; // rsi
  __int64 v89; // rax
  __int64 v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rcx
  __m128i v93; // xmm0
  __int128 v94; // xmm1
  __int64 v95; // rcx
  unsigned __int64 v96; // r12
  __int64 v97; // rdi
  __m128i v98; // xmm6
  __int64 v99; // rbx
  __int64 v100; // rax
  __int64 v101; // rsi
  _QWORD *v102; // rdi
  __int64 v103; // rdx
  __int64 v104; // rdx
  _OWORD v105[4]; // [rsp+20h] [rbp-60h] BYREF
  __int8 v106; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v107[31]; // [rsp+61h] [rbp-1Fh]
  _QWORD v108[2]; // [rsp+80h] [rbp+0h] BYREF
  _QWORD v109[2]; // [rsp+90h] [rbp+10h] BYREF
  __m128i v110; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v111; // [rsp+B0h] [rbp+30h]
  __int128 v112; // [rsp+C0h] [rbp+40h]
  __int128 v113; // [rsp+D0h] [rbp+50h]
  __int64 v114; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v115; // [rsp+F0h] [rbp+70h]
  __int64 v116; // [rsp+F8h] [rbp+78h]
  __int64 v117; // [rsp+100h] [rbp+80h]
  _OWORD *v118; // [rsp+108h] [rbp+88h] BYREF
  __int64 v119; // [rsp+110h] [rbp+90h] BYREF
  __m128i v120; // [rsp+118h] [rbp+98h] BYREF
  __int64 v121; // [rsp+128h] [rbp+A8h]
  __int64 v122; // [rsp+130h] [rbp+B0h]
  _BYTE v123[56]; // [rsp+138h] [rbp+B8h] BYREF
  __int128 v124; // [rsp+170h] [rbp+F0h]
  __int64 v125; // [rsp+198h] [rbp+118h]
  __int64 v126; // [rsp+1A0h] [rbp+120h]
  __int64 v127; // [rsp+1A8h] [rbp+128h]
  __int64 v128; // [rsp+1B0h] [rbp+130h]
  __int64 v129; // [rsp+1B8h] [rbp+138h]
  unsigned __int64 v130; // [rsp+1C0h] [rbp+140h]
  unsigned __int64 v131; // [rsp+1C8h] [rbp+148h]
  unsigned __int64 v132; // [rsp+1D0h] [rbp+150h]
  char v133; // [rsp+1DDh] [rbp+15Dh]
  char v134; // [rsp+1DEh] [rbp+15Eh]
  char v135; // [rsp+1DFh] [rbp+15Fh]
  __int64 v136; // [rsp+1E0h] [rbp+160h]
  unsigned __int64 v137; // [rsp+1E8h] [rbp+168h]
  char v138; // [rsp+1F7h] [rbp+177h]
  __int64 v139; // [rsp+1F8h] [rbp+178h]

  v139 = -2;
  v136 = a4;
  v131 = a2;
  v126 = a1;
  v132 = a3;
  if ( !a3 )
  {
LABEL_56:
    result = v126;
    *(_QWORD *)(v126 + 8) = 0;
    *(_QWORD *)(result + 16) = 8;
    *(_QWORD *)(result + 24) = 0;
    *(_QWORD *)result = -1;
    return result;
  }
  v6 = v136;
  v7 = v132;
LABEL_3:
  v8 = v7 + 8;
  v130 = v7;
  v137 = *(unsigned __int16 *)(v7 + 274);
  v9 = 3LL * (unsigned int)(8 * v137);
  v10 = -1;
  do
  {
    if ( !v9 )
    {
      v10 = v137;
LABEL_11:
      v15 = v6-- == 0;
      if ( v15 )
        goto LABEL_56;
      v7 = *(_QWORD *)(v130 + 8 * v10 + 280);
      goto LABEL_3;
    }
    v11 = v8 + 24;
    v12 = 2LL - *(_QWORD *)(v8 + 16);
    v13 = sub_1418F4B70(aId_9, *(_QWORD *)(v8 + 8));
    if ( v13 )
      v12 = v13;
    v14 = (v12 > 0) - (v12 < 0);
    ++v10;
    v9 -= 24;
    v8 = v11;
  }
  while ( v14 == 1 );
  if ( v14 == 255 )
    goto LABEL_11;
  v16 = v136;
  v17 = v132;
LABEL_13:
  v18 = v17 + 8;
  v130 = v17;
  v137 = *(unsigned __int16 *)(v17 + 274);
  v19 = 3LL * (unsigned int)(8 * v137);
  v20 = -1;
  do
  {
    if ( !v19 )
    {
      v20 = v137;
LABEL_21:
      v15 = v16-- == 0;
      if ( v15 )
        goto LABEL_56;
      v17 = *(_QWORD *)(v130 + 8 * v20 + 280);
      goto LABEL_13;
    }
    v21 = v18 + 24;
    v22 = 3LL - *(_QWORD *)(v18 + 16);
    v23 = sub_1418F4B70(aCwd_3, *(_QWORD *)(v18 + 8));
    if ( v23 )
      v22 = v23;
    v24 = (v22 > 0) - (v22 < 0);
    ++v20;
    v19 -= 24;
    v18 = v21;
  }
  while ( v24 == 1 );
  if ( v24 == 255 )
    goto LABEL_21;
  v25 = v136;
  v26 = v132;
LABEL_23:
  v27 = v26 + 8;
  v130 = v26;
  v137 = *(unsigned __int16 *)(v26 + 274);
  v28 = 3LL * (unsigned int)(8 * v137);
  v29 = -1;
  do
  {
    if ( !v28 )
    {
      v29 = v137;
LABEL_31:
      v15 = v25-- == 0;
      if ( v15 )
        goto LABEL_56;
      v26 = *(_QWORD *)(v130 + 8 * v29 + 280);
      goto LABEL_23;
    }
    v30 = v27 + 24;
    v31 = 12LL - *(_QWORD *)(v27 + 16);
    v32 = sub_1418F4B70(&unk_141A62D6E, *(_QWORD *)(v27 + 8));
    if ( v32 )
      v31 = v32;
    v33 = (v31 > 0) - (v31 < 0);
    ++v29;
    v28 -= 24;
    v27 = v30;
  }
  while ( v33 == 1 );
  if ( v33 )
    goto LABEL_31;
  v34 = v136;
  for ( i = v132; ; i = *(_QWORD *)(v130 + 8 * v38 + 280) )
  {
    v36 = i + 8;
    v130 = i;
    v137 = *(unsigned __int16 *)(i + 274);
    v37 = 3LL * (unsigned int)(8 * v137);
    v38 = -1;
    do
    {
      if ( !v37 )
      {
        v38 = v137;
        goto LABEL_41;
      }
      v39 = v36 + 24;
      v40 = 8LL - *(_QWORD *)(v36 + 16);
      v41 = sub_1418F4B70(&unk_141A62D7A, *(_QWORD *)(v36 + 8));
      if ( v41 )
        v40 = v41;
      v42 = (v40 > 0) - (v40 < 0);
      ++v38;
      v37 -= 24;
      v36 = v39;
    }
    while ( v42 == 1 );
    if ( !v42 )
    {
      v43 = 25;
      v44 = &unk_141A62D82;
      v45 = v132;
      goto LABEL_43;
    }
LABEL_41:
    v15 = v34-- == 0;
    v45 = v132;
    if ( v15 )
      break;
  }
  v43 = 5;
  v44 = &unk_141A62D9B;
LABEL_43:
  v109[0] = v44;
  v109[1] = v43;
  while ( 1 )
  {
    v46 = v45 + 8;
    v132 = v45;
    v47 = *(unsigned __int16 *)(v45 + 274);
    v48 = 3LL * (unsigned int)(8 * v47);
    v49 = -1;
    do
    {
      if ( !v48 )
      {
        v49 = v47;
        goto LABEL_52;
      }
      v50 = v46 + 24;
      v51 = 6LL - *(_QWORD *)(v46 + 16);
      v52 = sub_1418F4B70(aSource_6, *(_QWORD *)(v46 + 8));
      if ( v52 )
        v51 = v52;
      v53 = (v51 > 0) - (v51 < 0);
      ++v49;
      v48 -= 24;
      v46 = v50;
    }
    while ( v53 == 1 );
    if ( !v53 )
    {
      v54 = 20;
      v55 = (const char *)&unk_141A62DA6;
      goto LABEL_54;
    }
LABEL_52:
    v15 = v136-- == 0;
    if ( v15 )
      break;
    v45 = *(_QWORD *)(v132 + 8 * v49 + 280);
  }
  v54 = 2;
  v55 = asc_141A5AA88;
LABEL_54:
  v108[0] = v55;
  v108[1] = v54;
  *(_QWORD *)v123 = v108;
  *(_QWORD *)&v123[8] = sub_140186EE0;
  *(_QWORD *)&v123[16] = v109;
  *(_QWORD *)&v123[24] = sub_140186EE0;
  sub_1416ABFD0(&v114, &unk_141A62DBA, v123);
  sub_140EC0780(v123, v131, v115, v116);
  v110 = *(__m128i *)&v123[8];
  v111 = *(_OWORD *)&v123[24];
  v112 = *(_OWORD *)&v123[40];
  v113 = v124;
  if ( *(_DWORD *)v123 == 1 )
  {
    v56 = _mm_load_si128(&v110);
    v57 = v111;
    v58 = v112;
    result = v126;
    *(_OWORD *)(v126 + 48) = v113;
    *(_OWORD *)(result + 32) = v58;
    *(_OWORD *)(result + 16) = v57;
    *(__m128i *)result = v56;
    goto LABEL_149;
  }
  v105[3] = v113;
  v105[2] = v112;
  v105[1] = v111;
  v105[0] = _mm_load_si128(&v110);
  v60 = sub_1417A9630(*((_QWORD *)&v113 + 1));
  if ( v60 )
  {
    v61 = v126;
    *(_QWORD *)v126 = 0x8000000000000013uLL;
    *(_QWORD *)(v61 + 8) = 0;
    *(_QWORD *)(v61 + 16) = v60;
    goto LABEL_148;
  }
  v120.m128i_i64[0] = 0;
  v120.m128i_i64[1] = 8;
  v121 = 0;
  v118 = v105;
  v119 = 0;
  while ( 1 )
  {
    sub_140F9AB20(v123, &v118);
    v62 = *(_QWORD *)v123;
    if ( *(_QWORD *)v123 != -1 )
    {
      v63 = *(_QWORD *)&v123[8];
      v96 = *(_QWORD *)&v123[16];
      v97 = *(_QWORD *)&v123[32];
      v64 = *(_QWORD *)&v123[24];
      v98 = _mm_loadu_si128((const __m128i *)&v123[40]);
      v99 = v124;
      goto LABEL_139;
    }
    if ( !v119 )
      goto LABEL_128;
    sub_14018E680(v123, &v119, 0, &off_141A581F8, *(_QWORD *)&v105[0], *((_QWORD *)&v105[0] + 1));
    v63 = *(_QWORD *)&v123[8];
    v62 = *(_QWORD *)v123;
    v132 = *(_QWORD *)&v123[16];
    v64 = *(_QWORD *)&v123[24];
    if ( *(_QWORD *)v123 != -1 )
    {
      v97 = *(_QWORD *)&v123[32];
      v98 = _mm_loadu_si128((const __m128i *)&v123[40]);
      v99 = v124;
      v96 = v132;
      goto LABEL_139;
    }
    v136 = *(_QWORD *)&v123[8];
    sub_14018E680(v123, &v119, 1, &off_141A58210, *(_QWORD *)&v105[0], *((_QWORD *)&v105[0] + 1));
    v137 = *(_QWORD *)&v123[8];
    v62 = *(_QWORD *)v123;
    v131 = *(_QWORD *)&v123[16];
    v65 = *(_QWORD *)&v123[24];
    if ( *(_QWORD *)v123 != -1 )
      break;
    sub_14018E680(v123, &v119, 2, &off_141A58228, *(_QWORD *)&v105[0], *((_QWORD *)&v105[0] + 1));
    v62 = *(_QWORD *)v123;
    v66 = _mm_loadu_si128((const __m128i *)&v123[8]);
    if ( *(_QWORD *)v123 != -1 )
    {
      v97 = *(_QWORD *)&v123[32];
      v64 = *(_QWORD *)&v123[24];
      v98 = _mm_loadu_si128((const __m128i *)&v123[40]);
      v99 = v124;
      if ( v137 )
        sub_140001660(v131, v137, 1);
      v63 = v66.m128i_i64[0];
      v96 = _mm_shuffle_epi32(v66, 238).m128i_u64[0];
      if ( v136 )
        sub_140001660(v132, v136, 1);
      goto LABEL_139;
    }
    if ( v136 == -1 )
    {
      v62 = v132;
      v99 = *(_QWORD *)&v123[24];
      v97 = v65;
      v63 = v64;
      v64 = v131;
      v96 = v137;
      v98 = v66;
      goto LABEL_139;
    }
    if ( v136 == -2 )
    {
LABEL_128:
      sub_140E96D30(&v118);
      v95 = v126;
      *(_QWORD *)(v126 + 24) = v121;
      *(__m128i *)(v95 + 8) = _mm_loadu_si128(&v120);
      *(_QWORD *)v95 = -1;
      result = sub_140E970D0(v105);
      goto LABEL_149;
    }
    v127 = *(_QWORD *)&v123[24];
    v125 = v65;
    v129 = v66.m128i_i64[0];
    if ( a5 )
    {
      v67 = a6;
      for ( j = a5; ; j = *(_QWORD *)(j + 8 * v71 + 280) )
      {
        v69 = j + 8;
        v130 = *(unsigned __int16 *)(j + 274);
        v70 = 3LL * (unsigned int)(8 * v130);
        v71 = -1;
        do
        {
          if ( !v70 )
          {
            v71 = v130;
            goto LABEL_77;
          }
          v72 = v69 + 24;
          v73 = v64 - *(_QWORD *)(v69 + 16);
          v74 = sub_1418F4B70(v132, *(_QWORD *)(v69 + 8));
          if ( v74 )
            v73 = v74;
          v75 = (v73 > 0) - (v73 < 0);
          ++v71;
          v70 -= 24;
          v69 = v72;
        }
        while ( v75 == 1 );
        if ( !v75 )
          goto LABEL_80;
LABEL_77:
        v15 = v67-- == 0;
        if ( v15 )
          break;
      }
    }
    v135 = 1;
    v134 = 1;
    v130 = _mm_shuffle_epi32(v66, 238).m128i_u64[0];
    if ( (unsigned __int8)sub_140F9CFB0(aSubagent_3, 10, v130, v127) )
    {
LABEL_80:
      if ( v129 )
        sub_140001660(_mm_shuffle_epi32(v66, 238).m128i_u64[0], v129, 1);
      v76 = v137;
      v77 = v136;
      v78 = v132;
      if ( v137 )
      {
        v79 = v131;
        goto LABEL_92;
      }
      goto LABEL_93;
    }
    v138 = 1;
    sub_140237500(v123, v131, v125);
    if ( *(_DWORD *)v123 != -1 )
    {
      v138 = 1;
      sub_140E97700(v123);
LABEL_87:
      v77 = v136;
      v80 = v137;
      goto LABEL_88;
    }
    if ( *(_QWORD *)&v123[8] > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_87;
    v127 = *(_QWORD *)&v123[8];
    v82 = *(_QWORD *)&v123[16];
    v83 = *(_QWORD *)&v123[24];
    *(_OWORD *)v123 = *(_OWORD *)&v123[16];
    *(_OWORD *)&v123[16] = 0;
    v125 = v82;
    *(_QWORD *)&v123[32] = v82;
    *(_QWORD *)&v123[40] = v83;
    sub_14062D280(&v110, v123);
    if ( v110.m128i_i8[0] == -1 )
    {
      sub_14002F910(&v110.m128i_u64[1]);
      goto LABEL_104;
    }
    v84 = _mm_loadu_si128((const __m128i *)&v110.m128i_i8[1]);
    *(_OWORD *)&v107[15] = v111;
    *(__m128i *)v107 = v84;
    v106 = v110.m128i_i8[0];
    v85 = (_BYTE *)sub_1416419F0(aPayload_4, 7, &v106);
    if ( !v85
      || *v85 != 5
      || (v86 = v85 + 8, (v87 = sub_140DEB9A0(v85 + 8, aId_9, 2)) == 0)
      || *(_BYTE *)v87 != 3
      || *(_QWORD *)(v87 + 24) != v64
      || (unsigned int)sub_1418F4B70(*(_QWORD *)(v87 + 16), v132)
      || (v89 = sub_140DEB9A0(v86, aCwd_3, 3)) == 0
      || *(_BYTE *)v89 != 3 )
    {
      sub_14002F9D0(&v106);
LABEL_104:
      v80 = v137;
      if ( v127 )
      {
        v88 = v137;
        sub_140001660(v125, v127, 1);
        v80 = v88;
      }
      v77 = v136;
      goto LABEL_88;
    }
    sub_140F63BB0((unsigned __int64 *)v123, *(_QWORD *)(v89 + 16), *(_QWORD *)(v89 + 24));
    if ( *(_QWORD *)&v123[16] )
    {
      v122 = *(_QWORD *)&v123[8];
      v117 = *(_QWORD *)&v123[16];
      v128 = *(_QWORD *)v123;
    }
    else
    {
      v128 = -1;
      if ( *(_QWORD *)v123 )
        sub_140001660(*(_QWORD *)&v123[8], *(_QWORD *)v123, 1);
    }
    sub_14002F9D0(&v106);
    if ( v127 )
      sub_140001660(v125, v127, 1);
    if ( v128 == -1 )
      goto LABEL_119;
    v133 = 1;
    if ( (unsigned __int8)sub_140F65880(v122, v117) )
    {
      if ( v128 )
        sub_140001660(v122, v128, 1);
LABEL_119:
      v77 = v136;
      v80 = v137;
LABEL_88:
      v81 = v129;
      if ( v80 )
        sub_140001660(v131, v80, 1);
      v78 = v132;
      if ( v81 )
      {
        v79 = v130;
        v76 = v81;
LABEL_92:
        sub_140001660(v79, v76, 1);
      }
LABEL_93:
      if ( v77 )
        sub_140001660(v78, v77, 1);
      continue;
    }
    *(_QWORD *)v123 = v136;
    *(_QWORD *)&v123[8] = v132;
    *(_QWORD *)&v123[16] = v64;
    *(_QWORD *)&v123[24] = v128;
    *(_QWORD *)&v123[32] = v122;
    *(_QWORD *)&v123[40] = v117;
    v90 = v121;
    if ( v121 == v120.m128i_i64[0] )
      sub_14190F490(&v120);
    v91 = v120.m128i_i64[1];
    v92 = 48 * v90;
    v93 = _mm_loadu_si128((const __m128i *)v123);
    v94 = *(_OWORD *)&v123[16];
    *(_OWORD *)(v120.m128i_i64[1] + v92 + 32) = *(_OWORD *)&v123[32];
    *(_OWORD *)(v91 + v92 + 16) = v94;
    *(__m128i *)(v91 + v92) = v93;
    v121 = v90 + 1;
    if ( v137 )
      sub_140001660(v131, v137, 1);
    if ( v129 )
      sub_140001660(v130, v129, 1);
  }
  v97 = *(_QWORD *)&v123[32];
  v98 = _mm_loadu_si128((const __m128i *)&v123[40]);
  v99 = v124;
  if ( v136 )
    sub_140001660(v132, v136, 1);
  v64 = v65;
  v96 = v131;
  v63 = v137;
LABEL_139:
  v100 = v126;
  *(_QWORD *)v126 = v62;
  *(_QWORD *)(v100 + 8) = v63;
  *(_QWORD *)(v100 + 16) = v96;
  *(_QWORD *)(v100 + 24) = v64;
  *(_QWORD *)(v100 + 32) = v97;
  *(__m128i *)(v100 + 40) = v98;
  *(_QWORD *)(v100 + 56) = v99;
  sub_140E96D30(&v118);
  v101 = v121;
  if ( v121 )
  {
    v102 = (_QWORD *)(v120.m128i_i64[1] + 32);
    do
    {
      v103 = *(v102 - 4);
      if ( v103 )
        sub_140001660(*(v102 - 3), v103, 1);
      v104 = *(v102 - 1);
      if ( v104 )
        sub_140001660(*v102, v104, 1);
      v102 += 6;
      --v101;
    }
    while ( v101 );
  }
  if ( v120.m128i_i64[0] )
    sub_140001660(v120.m128i_i64[1], 48 * v120.m128i_i64[0], 8);
LABEL_148:
  result = sub_140E970D0(v105);
LABEL_149:
  if ( v114 )
    return sub_140001660(v115, v114, 1);
  return result;
}
