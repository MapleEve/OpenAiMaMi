__int64 __fastcall sub_1405E0390(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v5; // r13
  int v6; // r14d
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r14
  __int64 v19; // r15
  _QWORD *v20; // rdi
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r14
  __int64 v28; // r15
  _QWORD *v29; // rdi
  __int64 v30; // r13
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r14
  _QWORD *v37; // rdi
  __int64 v38; // r12
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r13
  __int64 v43; // rdi
  __int64 *v44; // rax
  char v45; // r12
  __int64 v46; // rdi
  __int128 v47; // xmm1
  __int64 v48; // rax
  __int128 v49; // xmm0
  __int64 v50; // r14
  __int64 v51; // rdi
  char v52; // r12
  _QWORD *v53; // r15
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // r14
  __int64 v58; // r15
  __int64 v59; // r12
  __int64 v60; // r13
  __int64 i; // rax
  __int64 v62; // rdx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 *v68; // r12
  __int64 v69; // rbx
  __int64 v70; // r14
  __int64 v71; // rax
  bool v72; // zf
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // r8
  __int32 v81; // eax
  void *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // [rsp+20h] [rbp-60h]
  __int128 v87; // [rsp+30h] [rbp-50h] BYREF
  __int128 v88; // [rsp+40h] [rbp-40h]
  __int64 v89; // [rsp+50h] [rbp-30h]
  __int64 v90; // [rsp+58h] [rbp-28h]
  __int64 v91; // [rsp+60h] [rbp-20h]
  __int64 v92; // [rsp+68h] [rbp-18h]
  __int64 v93; // [rsp+70h] [rbp-10h]
  __int64 v94; // [rsp+78h] [rbp-8h]
  _BYTE v95[31]; // [rsp+80h] [rbp+0h]
  int v96; // [rsp+A4h] [rbp+24h]
  __int64 v97; // [rsp+A8h] [rbp+28h]
  __int64 v98; // [rsp+B0h] [rbp+30h]
  __int64 v99; // [rsp+B8h] [rbp+38h]
  _BYTE v100[48]; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v101; // [rsp+F0h] [rbp+70h]
  __int128 v102; // [rsp+100h] [rbp+80h]
  __int64 v103; // [rsp+110h] [rbp+90h]
  __int128 v104; // [rsp+120h] [rbp+A0h] BYREF
  __m256i v105; // [rsp+130h] [rbp+B0h]
  __int128 v106; // [rsp+150h] [rbp+D0h] BYREF
  _BYTE v107[24]; // [rsp+160h] [rbp+E0h]
  __int64 v108; // [rsp+178h] [rbp+F8h]
  __int64 v109; // [rsp+180h] [rbp+100h]
  __int64 v110; // [rsp+188h] [rbp+108h]
  __int64 v111; // [rsp+190h] [rbp+110h]
  __int64 v112; // [rsp+198h] [rbp+118h]
  __int64 v113; // [rsp+1A0h] [rbp+120h]
  __m256i v114; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 v115; // [rsp+1C8h] [rbp+148h]
  __int64 v116; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v117; // [rsp+1D8h] [rbp+158h]
  __int64 v118; // [rsp+1E0h] [rbp+160h]
  char v119; // [rsp+1EFh] [rbp+16Fh] BYREF
  __int64 v120; // [rsp+1F0h] [rbp+170h]
  int v121; // [rsp+1FCh] [rbp+17Ch]
  __int64 v122; // [rsp+200h] [rbp+180h]
  char v123; // [rsp+209h] [rbp+189h]
  char v124; // [rsp+20Ah] [rbp+18Ah]
  char v125; // [rsp+20Bh] [rbp+18Bh]
  char v126; // [rsp+20Ch] [rbp+18Ch]
  char v127; // [rsp+20Dh] [rbp+18Dh]
  char v128; // [rsp+20Eh] [rbp+18Eh]
  char v129; // [rsp+20Fh] [rbp+18Fh]
  __int64 v130; // [rsp+210h] [rbp+190h]

  v130 = -2;
  sub_14151B4E0((unsigned int)&v87, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), (unsigned int)&unk_1418349E3, 24);
  v5 = *((_QWORD *)&v87 + 1);
  v6 = v88;
  v129 = 1;
  sub_14152E0B0(&v104, *((_QWORD *)&v87 + 1), v88);
  if ( (_DWORD)v104 == 2 )
  {
    *(_QWORD *)&v100[8] = *((_QWORD *)&v104 + 1);
    *(_QWORD *)v100 = 2;
LABEL_4:
    v129 = 1;
    sub_1400478E0(&v100[8]);
    v122 = -1;
    v121 = 0;
LABEL_5:
    v114.m256i_i8[0] = -1;
    v7 = -1;
LABEL_6:
    LOBYTE(v2) = 1;
    LODWORD(v115) = 0;
    v6 = 0;
LABEL_7:
    v117 = v7;
    *(_QWORD *)v95 = 0;
    *(_QWORD *)&v95[16] = 0;
    v8 = 0;
    goto LABEL_8;
  }
  *(_OWORD *)v100 = v104;
  v103 = *(_QWORD *)&v107[16];
  v102 = *(_OWORD *)v107;
  v101 = v106;
  *(__m256i *)&v100[16] = v105;
  if ( (_QWORD)v104 == 2 )
    goto LABEL_4;
  v129 = 1;
  sub_141534AD0(&v114);
  if ( v114.m256i_i64[0] == -1 )
  {
    v116 = v114.m256i_i64[1];
    *(_QWORD *)v100 = 0;
    *(_OWORD *)&v100[8] = 1u;
    v105.m256i_i64[0] = 1610612768;
    *(_QWORD *)&v104 = v100;
    *((_QWORD *)&v104 + 1) = &off_141835478;
    if ( (unsigned __int8)sub_1415380C0(&v116, &v104) )
      sub_14176E860(
        (unsigned int)aADisplayImplem_4,
        55,
        (unsigned int)&v119,
        (unsigned int)&unk_141810428,
        (__int64)&off_141835530);
    v112 = *(_QWORD *)&v100[8];
    v122 = *(_QWORD *)v100;
    v91 = *(_QWORD *)&v100[16];
    v129 = 1;
    v76 = sub_1400478E0(&v116);
    LOBYTE(v76) = 1;
    v121 = v76;
    goto LABEL_5;
  }
  v120 = v114.m256i_i64[0];
  v104 = *(_OWORD *)&v114.m256i_u64[1];
  *(_OWORD *)v105.m256i_i8 = 0;
  v122 = v114.m256i_i64[1];
  *(_OWORD *)&v105.m256i_u64[2] = *(_OWORD *)&v114.m256i_u64[1];
  sub_14086BB40(v100, &v104);
  LODWORD(v2) = v100[0];
  if ( v100[0] != 5 )
  {
    if ( v100[0] == 255 )
    {
      v121 = 255;
      v68 = *(__int64 **)&v100[8];
      v116 = *(_QWORD *)&v100[8];
      v114.m256i_i64[0] = 0;
      *(_OWORD *)&v114.m256i_u64[1] = 1u;
      v105.m256i_i64[0] = 1610612768;
      *(_QWORD *)&v104 = &v114;
      *((_QWORD *)&v104 + 1) = &off_141835478;
      if ( (unsigned __int8)sub_1414D7A50(&v116, &v104) )
        sub_14176E860(
          (unsigned int)aADisplayImplem_4,
          55,
          (unsigned int)&v119,
          (unsigned int)&unk_141810428,
          (__int64)&off_141835530);
      v69 = v114.m256i_i64[1];
      v7 = v114.m256i_i64[0];
      v70 = v114.m256i_i64[2];
      v71 = *v68;
      v72 = *v68 == 1;
      v117 = (__int64)v68;
      if ( v72 )
      {
        sub_1400478E0(v68 + 1);
      }
      else if ( !v71 )
      {
        v73 = *(_QWORD *)(v117 + 16);
        if ( v73 )
          sub_140001660(*(_QWORD *)(v117 + 8), v73, 1);
      }
      v82 = (void *)sub_140001660(v117, 40, 8);
      v83 = v120;
      LODWORD(v2) = v121;
    }
    else
    {
      nullsub_1(v65, v64, v66, v67, v86);
      v70 = 34;
      v82 = (void *)sub_140001650(34, 1);
      v83 = v120;
      if ( !v82 )
      {
        v121 = v2;
        sub_14176E54B(1, 34);
      }
      v69 = (__int64)v82;
      qmemcpy(v82, "global-state root is not an object", 34);
      v7 = 34;
    }
    if ( v83 )
      v82 = (void *)sub_140001660(v122, v83, 1);
    v90 = v70;
    v111 = v69;
    if ( (_BYTE)v2 != 0xFF )
    {
      v129 = 1;
      v82 = (void *)sub_1401FF690(v100);
    }
    v114.m256i_i8[0] = -1;
    *(_OWORD *)&v114.m256i_i8[1] = *(_OWORD *)v95;
    *(_OWORD *)&v114.m256i_u64[2] = *(_OWORD *)&v95[15];
    v122 = -1;
    LOBYTE(v82) = 1;
    v121 = (int)v82;
    goto LABEL_6;
  }
  *(_OWORD *)&v95[15] = *(_OWORD *)&v100[16];
  *(_OWORD *)v95 = *(_OWORD *)&v100[1];
  if ( v120 )
    sub_140001660(v122, v120, 1);
  v114.m256i_i8[0] = 5;
  *(_OWORD *)&v114.m256i_i8[1] = *(_OWORD *)v95;
  *(_OWORD *)&v114.m256i_u64[2] = *(_OWORD *)&v95[15];
  v126 = 0;
  v110 = -1;
  v109 = -1;
  v125 = 1;
  v78 = sub_1414D4800(aProjectlessThr, 22, &v114);
  v7 = -1;
  if ( !v78 || *(_BYTE *)v78 != 4 )
  {
    LOBYTE(v78) = 1;
    LODWORD(v115) = v78;
    LODWORD(v2) = 0;
    LOBYTE(v78) = 1;
    v121 = v78;
    LOBYTE(v6) = 1;
    v122 = -1;
    goto LABEL_7;
  }
  v79 = *(_QWORD *)(v78 + 16);
  v80 = v79 + 32LL * *(_QWORD *)(v78 + 24);
  v126 = 0;
  v110 = -1;
  v109 = -1;
  v125 = 1;
  sub_140BA28E0(&v104, v79, v80);
  *(_OWORD *)v95 = v104;
  v81 = v105.m256i_i32[0];
  *(_QWORD *)&v95[16] = v105.m256i_i64[0];
  v8 = v104;
  LOBYTE(v81) = 1;
  LODWORD(v115) = v81;
  v117 = -1;
  LODWORD(v2) = 0;
  LOBYTE(v81) = 1;
  v121 = v81;
  LOBYTE(v6) = 1;
  v122 = -1;
LABEL_8:
  v124 = v2;
  v97 = v122;
  v123 = 1;
  sub_1405DA620(&v104, a2, v8);
  v96 = v6;
  v89 = a2;
  LODWORD(v120) = v2;
  v92 = v5;
  if ( (_BYTE)v2 )
  {
    v13 = 0;
    v94 = 0;
    v108 = 0;
    v14 = 0;
    goto LABEL_47;
  }
  v128 = 0;
  v118 = v122;
  v127 = 1;
  v15 = sub_1414D4800(&xmmword_141834EC0, 30, &v114);
  if ( v15 && *(_BYTE *)v15 == 4 )
  {
    v16 = *(_QWORD *)(v15 + 16);
    v17 = v16 + 32LL * *(_QWORD *)(v15 + 24);
    v128 = 0;
    v118 = v122;
    v127 = 1;
    sub_14044D5A0(v100, v16, v17);
    v2 = v8;
    v19 = *(_QWORD *)&v100[16];
    v18 = *(_QWORD *)&v100[8];
    if ( !*(_QWORD *)&v100[16] )
    {
      v108 = 0;
      v23 = *(_QWORD *)v100;
      if ( !*(_QWORD *)v100 )
        goto LABEL_20;
      goto LABEL_19;
    }
    v20 = (_QWORD *)(*(_QWORD *)&v100[8] + 8LL);
    v21 = *(_QWORD *)&v100[16];
    do
    {
      v22 = *(v20 - 1);
      if ( v22 )
        sub_140001660(*v20, v22, 1);
      v20 += 3;
      --v19;
    }
    while ( v19 );
  }
  else
  {
    v2 = v8;
    *(_QWORD *)v100 = 0;
    v18 = 8;
    v21 = 0;
  }
  v108 = v21;
  v23 = *(_QWORD *)v100;
  if ( *(_QWORD *)v100 )
LABEL_19:
    sub_140001660(v18, 24 * v23, 8);
LABEL_20:
  v128 = 0;
  v118 = v122;
  v127 = 1;
  v24 = sub_1414D4800(aProjectOrder, 13, &v114);
  v8 = v2;
  LOBYTE(v2) = v120;
  if ( v24 && *(_BYTE *)v24 == 4 )
  {
    v25 = *(_QWORD *)(v24 + 16);
    v26 = v25 + 32LL * *(_QWORD *)(v24 + 24);
    v128 = 0;
    v118 = v122;
    v127 = 1;
    sub_14044D5A0(v100, v25, v26);
    v28 = *(_QWORD *)&v100[16];
    v27 = *(_QWORD *)&v100[8];
    if ( !*(_QWORD *)&v100[16] )
    {
      v94 = 0;
      v32 = *(_QWORD *)v100;
      if ( !*(_QWORD *)v100 )
        goto LABEL_30;
      goto LABEL_29;
    }
    v29 = (_QWORD *)(*(_QWORD *)&v100[8] + 8LL);
    v30 = *(_QWORD *)&v100[16];
    do
    {
      v31 = *(v29 - 1);
      if ( v31 )
        sub_140001660(*v29, v31, 1);
      v29 += 3;
      --v28;
    }
    while ( v28 );
  }
  else
  {
    *(_QWORD *)v100 = 0;
    v27 = 8;
    v30 = 0;
  }
  v94 = v30;
  v32 = *(_QWORD *)v100;
  if ( *(_QWORD *)v100 )
LABEL_29:
    sub_140001660(v27, 24 * v32, 8);
LABEL_30:
  v128 = 0;
  v118 = v122;
  v127 = 1;
  v33 = sub_1414D4800(aActiveWorkspac, 22, &v114);
  if ( !v33 || *(_BYTE *)v33 != 4 )
  {
    *(_QWORD *)v100 = 0;
    v14 = 0;
    goto LABEL_39;
  }
  v34 = *(_QWORD *)(v33 + 16);
  v35 = v34 + 32LL * *(_QWORD *)(v33 + 24);
  v128 = 0;
  v118 = v122;
  v127 = 1;
  sub_14044D5A0(v100, v34, v35);
  v14 = *(_QWORD *)&v100[16];
  v36 = *(_QWORD *)&v100[8];
  if ( !*(_QWORD *)&v100[16] )
  {
    v14 = 0;
    v75 = *(_QWORD *)v100;
    if ( !*(_QWORD *)v100 )
      goto LABEL_39;
    goto LABEL_38;
  }
  v37 = (_QWORD *)(*(_QWORD *)&v100[8] + 8LL);
  v38 = *(_QWORD *)&v100[16];
  do
  {
    v39 = *(v37 - 1);
    if ( v39 )
      sub_140001660(*v37, v39, 1);
    v37 += 3;
    --v38;
  }
  while ( v38 );
  LOBYTE(v2) = v120;
  v75 = *(_QWORD *)v100;
  if ( *(_QWORD *)v100 )
LABEL_38:
    sub_140001660(v36, 24 * v75, 8);
LABEL_39:
  v128 = 0;
  v118 = v122;
  v127 = 1;
  v40 = sub_1414D4800(aProjectlessThr, 22, &v114);
  if ( v40 && *(_BYTE *)v40 == 4 )
    v13 = *(_QWORD *)(v40 + 24);
  else
    v13 = 0;
  v128 = 0;
  v118 = v122;
  v127 = 1;
  v41 = sub_1414D4800(&xmmword_141834FE4, 27, &v114);
  if ( !v41 || *(_BYTE *)v41 != 5 )
  {
LABEL_47:
    v42 = 0;
    v43 = -1;
    v44 = (__int64 *)v100;
    if ( v122 == -1 )
      goto LABEL_48;
LABEL_49:
    v45 = 0;
    goto LABEL_50;
  }
  v42 = *(_QWORD *)(v41 + 24);
  v43 = -1;
  v44 = (__int64 *)v100;
  if ( v122 != -1 )
    goto LABEL_49;
LABEL_48:
  if ( v105.m256i_i64[3] )
    goto LABEL_49;
  if ( (_BYTE)v121 )
  {
    if ( !(_BYTE)v115 )
    {
      nullsub_1(v10, v9, v11, v12, v86);
      v43 = 37;
      v74 = sub_140001650(37, 1);
      if ( !v74 )
      {
        v128 = v2;
        v118 = -1;
        v127 = 1;
        sub_14176E54B(1, 37);
      }
      *(_OWORD *)(v74 + 16) = xmmword_141834A8C;
      *(_OWORD *)v74 = xmmword_141834A7C;
      v113 = v74;
      *(_QWORD *)(v74 + 29) = 0x909EE6A3A7E895B3uLL;
LABEL_112:
      *(_QWORD *)v100 = v43;
      v44 = &v116;
      v45 = 1;
      goto LABEL_50;
    }
  }
  else if ( !v105.m256i_i64[0] && *(_OWORD *)&v107[8] == 0 )
  {
    goto LABEL_49;
  }
  if ( !v108 && v105.m256i_i64[0] )
  {
    nullsub_1(v10, v9, v11, v12, v86);
    v43 = 55;
    v84 = sub_140001650(55, 1);
    if ( !v84 )
    {
      v128 = v2;
      v118 = -1;
      v127 = 1;
      sub_14176E54B(1, 55);
    }
    *(_OWORD *)(v84 + 32) = xmmword_141834AC1;
    *(_OWORD *)(v84 + 16) = xmmword_141834AB1;
    *(_OWORD *)v84 = xmmword_141834AA1;
    v113 = v84;
    *(_QWORD *)(v84 + 47) = 0x64776320AE9BE7B9LL;
    goto LABEL_112;
  }
  if ( *(_QWORD *)&v107[16] )
  {
    nullsub_1(v10, v9, v11, v12, v86);
    v43 = 67;
    v77 = sub_140001650(67, 1);
    if ( !v77 )
    {
      v128 = v2;
      v118 = -1;
      v127 = 1;
      sub_14176E54B(1, 67);
    }
    *(_OWORD *)(v77 + 48) = xmmword_141834B2C;
    *(_OWORD *)(v77 + 32) = xmmword_141834B1C;
    *(_OWORD *)(v77 + 16) = xmmword_141834B0C;
    *(_OWORD *)v77 = xmmword_141834AFC;
    v113 = v77;
    *(_DWORD *)(v77 + 63) = -2067864145;
    goto LABEL_112;
  }
  v45 = 0;
  if ( !v42 && *(_QWORD *)&v107[8] )
  {
    if ( !v108 && !v105.m256i_i64[0] )
      goto LABEL_49;
    nullsub_1(v10, v9, v11, v12, v86);
    v43 = 36;
    v85 = sub_140001650(36, 1);
    if ( !v85 )
    {
      v128 = v120;
      v118 = -1;
      v127 = 1;
      sub_14176E54B(1, 36);
    }
    *(_OWORD *)(v85 + 16) = xmmword_141834AE8;
    *(_OWORD *)v85 = xmmword_141834AD8;
    v113 = v85;
    *(_DWORD *)(v85 + 32) = -1163270214;
    goto LABEL_112;
  }
LABEL_50:
  *v44 = v43;
  v115 = *(_QWORD *)v100;
  v46 = v116;
  v93 = v87;
  sub_1405D7A40(v100, v89);
  *(_QWORD *)(a1 + 48) = v105.m256i_i64[3];
  *(_OWORD *)(a1 + 32) = *(_OWORD *)&v105.m256i_u64[1];
  *(_QWORD *)(a1 + 136) = v115;
  *(_QWORD *)(a1 + 144) = v113;
  *(_QWORD *)(a1 + 152) = v46;
  v47 = v88;
  *(_OWORD *)a1 = v87;
  *(_OWORD *)(a1 + 16) = v47;
  *(_BYTE *)(a1 + 232) = v121;
  *(_BYTE *)(a1 + 233) = v96;
  *(_QWORD *)(a1 + 56) = v117;
  *(_QWORD *)(a1 + 64) = v111;
  *(_QWORD *)(a1 + 72) = v90;
  *(_QWORD *)(a1 + 80) = v122;
  *(_QWORD *)(a1 + 88) = v112;
  *(_QWORD *)(a1 + 96) = v91;
  *(_QWORD *)(a1 + 160) = v108;
  *(_QWORD *)(a1 + 168) = v94;
  *(_QWORD *)(a1 + 176) = v14;
  *(_QWORD *)(a1 + 184) = v13;
  *(_QWORD *)(a1 + 192) = v42;
  v48 = v106;
  v49 = *(_OWORD *)v100;
  *(_OWORD *)(a1 + 120) = *(_OWORD *)&v100[16];
  *(_OWORD *)(a1 + 104) = v49;
  *(_QWORD *)(a1 + 200) = v48;
  v50 = v105.m256i_i64[0];
  *(_QWORD *)(a1 + 208) = v105.m256i_i64[0];
  *(_OWORD *)(a1 + 216) = *(_OWORD *)&v107[8];
  *(_BYTE *)(a1 + 234) = v45;
  v51 = *((_QWORD *)&v104 + 1);
  v52 = v120;
  if ( v50 )
  {
    v53 = (_QWORD *)(*((_QWORD *)&v104 + 1) + 8LL);
    do
    {
      v54 = *(v53 - 1);
      if ( v54 )
        sub_140001660(*v53, v54, 1);
      v53 += 3;
      --v50;
    }
    while ( v50 );
  }
  if ( (_QWORD)v104 )
    sub_140001660(v51, 24 * v104, 8);
  v124 = v52;
  v97 = v122;
  v123 = 0;
  sub_1401A6CA0((char *)&v106 + 8);
  if ( v8 )
  {
    v55 = *(_QWORD *)&v95[16];
    *((_QWORD *)&v104 + 1) = 0;
    v105.m256i_i64[0] = v8;
    v105.m256i_i64[1] = *(_QWORD *)&v95[8];
    v105.m256i_i64[3] = 0;
    *(_QWORD *)&v106 = v8;
    *((_QWORD *)&v106 + 1) = *(_QWORD *)&v95[8];
    v56 = 1;
  }
  else
  {
    v56 = 0;
    v55 = 0;
  }
  v57 = v117;
  v58 = v111;
  v59 = v112;
  v60 = v122;
  *(_QWORD *)&v104 = v56;
  v105.m256i_i64[2] = v56;
  *(_QWORD *)v107 = v55;
  v126 = v120;
  v110 = v117;
  v99 = v111;
  v109 = v122;
  v98 = v112;
  v125 = 0;
  sub_1401A3E60(v100, &v104);
  for ( i = *(_QWORD *)v100; *(_QWORD *)v100; i = *(_QWORD *)v100 )
  {
    v62 = *(_QWORD *)(i + 24LL * *(_QWORD *)&v100[16] + 8);
    if ( v62 )
      sub_140001660(*(_QWORD *)(i + 24LL * *(_QWORD *)&v100[16] + 16), v62, 1);
    v126 = v120;
    v110 = v57;
    v99 = v58;
    v109 = v60;
    v98 = v59;
    v125 = 0;
    sub_1401A3E60(v100, &v104);
  }
  if ( !(_BYTE)v120 )
  {
    v129 = 0;
    sub_1401FF690(&v114);
  }
  return a1;
}
