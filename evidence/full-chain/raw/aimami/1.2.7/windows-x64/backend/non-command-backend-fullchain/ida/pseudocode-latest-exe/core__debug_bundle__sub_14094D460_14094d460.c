// win 1.2.7 latest-exe | module src/core/debug_bundle.rs | ea 0x14094d460 | successor of pre-update 0x140c24c50 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_STR_PARTIAL"}
double __fastcall sub_14094D460(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v4; // rdi
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // r14
  __int64 (__fastcall *v12)(); // rbx
  int v13; // ebx
  __int64 (__fastcall *v14)(unsigned __int64); // rax
  unsigned __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  void *v20; // rax
  __int8 v21; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  void *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  void *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r12
  void *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  void *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  void *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  _QWORD *v46; // rbx
  _QWORD *v47; // rbx
  __int64 v48; // rbx
  __int64 (__fastcall *v49)(); // r14
  __int64 v50; // r15
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rax
  __int8 v54; // al
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rbx
  __int8 v62; // r14
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  void *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r12
  __int8 v70; // r14
  __int64 v71; // r15
  __int64 v72; // rbx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rdx
  void *v76; // rax
  int v77; // edx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r12
  __int8 v81; // r14
  __int64 v82; // r15
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rdx
  void *v86; // rax
  int v87; // edx
  __int64 v88; // rcx
  __int64 v89; // rdx
  void *v90; // rax
  __int64 v91; // rdx
  void *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  void *v95; // rax
  unsigned int v96; // ecx
  __int64 v97; // rdx
  __int64 v98; // rcx
  _OWORD *v99; // rax
  unsigned int v100; // esi
  __int64 v101; // rdx
  __int64 v102; // rcx
  _QWORD *v103; // rax
  __int8 v104; // cl
  __int64 v105; // rdx
  __int64 v106; // rcx
  _QWORD *v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  _DWORD *v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int128 v113; // rdi
  __int64 v114; // r14
  __int64 v115; // rbx
  __int64 v116; // rax
  double result; // xmm0_8
  __int64 v119; // [rsp+38h] [rbp-48h]
  __int64 v120; // [rsp+40h] [rbp-40h]
  __int64 v121; // [rsp+48h] [rbp-38h]
  __int64 v122; // [rsp+50h] [rbp-30h]
  __int64 v123; // [rsp+58h] [rbp-28h]
  __m512i v124; // [rsp+60h] [rbp-20h] BYREF
  __int128 v125; // [rsp+A0h] [rbp+20h]
  __int128 v126; // [rsp+B0h] [rbp+30h]
  __int128 v127; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v128; // [rsp+D8h] [rbp+58h]
  _DWORD *v129; // [rsp+E0h] [rbp+60h]
  __int128 v130; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v131; // [rsp+F8h] [rbp+78h]
  __m256i v132; // [rsp+100h] [rbp+80h] BYREF
  __int128 v133; // [rsp+120h] [rbp+A0h]
  __int128 v134; // [rsp+130h] [rbp+B0h]
  __int128 v135; // [rsp+140h] [rbp+C0h]
  __int128 v136; // [rsp+150h] [rbp+D0h]
  __int64 v137; // [rsp+160h] [rbp+E0h]
  __int64 v138; // [rsp+168h] [rbp+E8h]
  __int64 v139; // [rsp+170h] [rbp+F0h]
  __int64 v140; // [rsp+178h] [rbp+F8h]
  __m256i v141; // [rsp+180h] [rbp+100h] BYREF
  char v142; // [rsp+1A7h] [rbp+127h] BYREF
  __int64 v143; // [rsp+1A8h] [rbp+128h]
  __int128 v144; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v145; // [rsp+1C0h] [rbp+140h]
  char v146; // [rsp+1C9h] [rbp+149h]
  char v147; // [rsp+1CAh] [rbp+14Ah]
  char v148; // [rsp+1CBh] [rbp+14Bh]
  char v149; // [rsp+1CCh] [rbp+14Ch]
  char v150; // [rsp+1CDh] [rbp+14Dh]
  char v151; // [rsp+1CEh] [rbp+14Eh]
  char v152; // [rsp+1CFh] [rbp+14Fh]
  __m256i v153; // [rsp+1D0h] [rbp+150h] BYREF
  char v154; // [rsp+1FBh] [rbp+17Bh]
  char v155; // [rsp+1FCh] [rbp+17Ch]
  char v156; // [rsp+1FDh] [rbp+17Dh]
  char v157; // [rsp+1FEh] [rbp+17Eh]
  char v158; // [rsp+1FFh] [rbp+17Fh]
  __int64 v159; // [rsp+200h] [rbp+180h]

  v159 = -2;
  v8 = *(_QWORD *)(a2 + 80);
  v138 = *(_QWORD *)(a2 + 72);
  v119 = v8;
  sub_1416CC1A0(&v141, v138, v8);
  v11 = v141.m256i_u64[1];
  if ( v141.m256i_i64[0] == -1 )
  {
    v13 = v141.m256i_i8[8] & 3;
    switch ( v141.m256i_i8[8] & 3 )
    {
      case 0:
        if ( *(_BYTE *)(v141.m256i_i64[1] + 16) )
          goto LABEL_9;
        goto LABEL_17;
      case 1:
        if ( !*(_BYTE *)(v141.m256i_i64[1] + 31) )
          goto LABEL_17;
        goto LABEL_9;
      case 2:
        v158 = 1;
        v14 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v10, v9) + 8);
        v158 = 1;
        LOBYTE(v15) = v14(HIDWORD(v11));
        goto LABEL_8;
      case 3:
        v15 = HIDWORD(v141.m256i_i64[1]);
LABEL_8:
        if ( (_BYTE)v15 )
        {
LABEL_9:
          v153.m256i_i64[0] = v11;
          v124.m512i_i64[0] = 0;
          *(_OWORD *)&v124.m512i_u64[1] = 1u;
          v132.m256i_i64[2] = 1610612768;
          v132.m256i_i64[0] = (__int64)&v124;
          v132.m256i_i64[1] = (__int64)&off_141A66E10;
          if ( (unsigned __int8)sub_1416EA080(&v153, &v132) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_5,
              55,
              (unsigned int)&v142,
              (unsigned int)&unk_141A5A890,
              (__int64)&off_141A66EC8);
          v139 = v124.m512i_i64[0];
          *((_QWORD *)&v4 + 1) = a4;
          v137 = v124.m512i_i64[1];
          v16 = a3;
          sub_14072B5B0((__int64)&v132, v124.m512i_i64[1], v124.m512i_i64[2], a3);
          v121 = v132.m256i_i64[1];
          v17 = v132.m256i_i64[0];
          v123 = v132.m256i_i64[2];
          if ( v139 )
            sub_140001660(v137, v139, 1);
          if ( (unsigned int)(v13 - 2) >= 2 && (v11 & 3) != 0 )
          {
            v132.m256i_i64[1] = v11 - 1;
            v132.m256i_i8[0] = 3;
            v158 = 0;
            sub_1416EBAD0(&v132.m256i_u64[1]);
          }
          v137 = v17;
          v11 = 1;
          v122 = 0;
          v12 = nullptr;
          a3 = v16;
          a4 = *((_QWORD *)&v4 + 1);
        }
        else
        {
LABEL_17:
          if ( (unsigned int)(v13 - 2) >= 2 && (v11 & 3) != 0 )
          {
            v132.m256i_i64[1] = v11 - 1;
            v132.m256i_i8[0] = 3;
            v158 = 0;
            sub_1416EBAD0(&v132.m256i_u64[1]);
          }
          v137 = -1;
          v11 = 1;
          v122 = 0;
          v12 = nullptr;
        }
        break;
    }
  }
  else
  {
    v122 = v141.m256i_i64[0];
    v137 = -1;
    v12 = (__int64 (__fastcall *)())v141.m256i_i64[2];
  }
  v139 = v11;
  LODWORD(v129) = sub_1408C62B0(v11, v12);
  sub_1408D52F0(&v124, a2);
  if ( v124.m512i_i32[0] == -1 )
  {
    *(_QWORD *)&v134 = v124.m512i_i64[7];
    v133 = *(_OWORD *)&v124.m512i_u64[5];
    v132 = *(__m256i *)&v124.m512i_u64[1];
    *(_QWORD *)&v127 = 0;
    v128 = 0;
    nullsub_1(v19, v18);
    v34 = (void *)sub_140001650(12, 1);
    if ( !v34 )
      sub_14196B2DB(1, 12);
    qmemcpy(v34, "backupExists", 12);
    *(_QWORD *)&v144 = 12;
    *((_QWORD *)&v144 + 1) = v34;
    v145 = 12;
    v141.m256i_i8[0] = 1;
    v141.m256i_i8[1] = v134;
    sub_140A68320(&v153, &v127, &v144, &v141);
    if ( v153.m256i_i8[0] != -1 )
      sub_140032FF0(&v153);
    nullsub_1(v36, v35);
    v37 = (void *)sub_140001650(19, 1);
    if ( !v37 )
      sub_14196B2DB(1, 19);
    qmemcpy(v37, "foreignTopLevelKeys", 19);
    *(_QWORD *)&v144 = 19;
    *((_QWORD *)&v144 + 1) = v37;
    v145 = 19;
    v157 = 1;
    sub_1407B3FB0(&v141, &v132);
    if ( v141.m256i_i8[0] == -1 )
    {
      v153.m256i_i64[0] = v141.m256i_i64[1];
      sub_14196B5F0(
        (unsigned int)aCalledResultUn_13,
        43,
        (unsigned int)&v153,
        (unsigned int)&off_141A5A840,
        (__int64)&off_141A5BD98);
    }
    v153 = v141;
    v157 = 0;
    sub_140A68320(&v141, &v127, &v144, &v153);
    if ( v141.m256i_i8[0] != -1 )
      sub_140032FF0(&v141);
    nullsub_1(v39, v38);
    v40 = (void *)sub_140001650(15, 1);
    if ( !v40 )
      sub_14196B2DB(1, 15);
    qmemcpy(v40, "foreignSections", 15);
    *(_QWORD *)&v144 = 15;
    *((_QWORD *)&v144 + 1) = v40;
    v145 = 15;
    v156 = 1;
    sub_1407B3FB0(&v141, &v132.m256i_u64[3]);
    if ( v141.m256i_i8[0] == -1 )
    {
      v153.m256i_i64[0] = v141.m256i_i64[1];
      sub_14196B5F0(
        (unsigned int)aCalledResultUn_13,
        43,
        (unsigned int)&v153,
        (unsigned int)&off_141A5A840,
        (__int64)&off_141A5BD98);
    }
    v153 = v141;
    v156 = 0;
    sub_140A68320(&v141, &v127, &v144, &v153);
    if ( v141.m256i_i8[0] != -1 )
      sub_140032FF0(&v141);
    nullsub_1(v42, v41);
    v43 = sub_140001650(9, 1);
    if ( !v43 )
      sub_14196B2DB(1, 9);
    *(_QWORD *)v43 = 0x6F72724564616572LL;
    *(_BYTE *)(v43 + 8) = 114;
    *(_QWORD *)&v144 = 9;
    *((_QWORD *)&v144 + 1) = v43;
    v145 = 9;
    v141.m256i_i8[0] = 0;
    sub_140A68320(&v153, &v127, &v144, &v141);
    if ( v153.m256i_i8[0] != -1 )
      sub_140032FF0(&v153);
    *((_QWORD *)&v4 + 1) = v12;
    *(_OWORD *)&v141.m256i_u64[1] = v127;
    v141.m256i_i64[3] = v128;
    v141.m256i_i8[0] = 5;
    *(_QWORD *)&v4 = v132.m256i_i64[2];
    if ( v132.m256i_i64[2] )
    {
      v46 = (_QWORD *)(v132.m256i_i64[1] + 8);
      do
      {
        v44 = *(v46 - 1);
        if ( v44 )
          sub_140001660(*v46, v44, 1);
        v46 += 3;
        *(_QWORD *)&v4 = v4 - 1;
      }
      while ( (_QWORD)v4 );
    }
    if ( v132.m256i_i64[0] )
      sub_140001660(v132.m256i_i64[1], 24 * v132.m256i_i64[0], 8);
    *(_QWORD *)&v4 = *((_QWORD *)&v133 + 1);
    if ( *((_QWORD *)&v133 + 1) )
    {
      v47 = (_QWORD *)(v133 + 8);
      do
      {
        v44 = *(v47 - 1);
        if ( v44 )
          sub_140001660(*v47, v44, 1);
        v47 += 3;
        *(_QWORD *)&v4 = v4 - 1;
      }
      while ( (_QWORD)v4 );
    }
    if ( v132.m256i_i64[3] )
      sub_140001660(v133, 24 * v132.m256i_i64[3], 8);
    v48 = *((_QWORD *)&v4 + 1);
  }
  else
  {
    v136 = v126;
    v135 = v125;
    v134 = *(_OWORD *)&v124.m512i_u64[6];
    v133 = *(_OWORD *)&v124.m512i_u64[4];
    v132 = *(__m256i *)v124.m512i_i8;
    *(_QWORD *)&v130 = 0;
    v131 = 0;
    nullsub_1(v19, v18);
    v20 = (void *)sub_140001650(12, 1);
    if ( !v20 )
      sub_14196B2DB(1, 12);
    qmemcpy(v20, "backupExists", 12);
    *(_QWORD *)&v144 = 12;
    *((_QWORD *)&v144 + 1) = v20;
    v145 = 12;
    v152 = 1;
    v21 = sub_1408CBCE0(a2);
    v141.m256i_i8[0] = 1;
    v141.m256i_i8[1] = v21;
    v152 = 0;
    sub_140A68320(&v153, &v130, &v144, &v141);
    if ( v153.m256i_i8[0] != -1 )
      sub_140032FF0(&v153);
    nullsub_1(v23, v22);
    v24 = (void *)sub_140001650(19, 1);
    if ( !v24 )
      sub_14196B2DB(1, 19);
    qmemcpy(v24, "foreignTopLevelKeys", 19);
    *(_QWORD *)&v144 = 19;
    *((_QWORD *)&v144 + 1) = v24;
    v145 = 19;
    v141.m256i_i64[1] = 0;
    *(_OWORD *)&v141.m256i_u64[2] = 8u;
    v141.m256i_i8[0] = 4;
    sub_140A68320(&v153, &v130, &v144, &v141);
    if ( v153.m256i_i8[0] != -1 )
      sub_140032FF0(&v153);
    nullsub_1(v26, v25);
    v27 = (void *)sub_140001650(15, 1);
    if ( !v27 )
      sub_14196B2DB(1, 15);
    qmemcpy(v27, "foreignSections", 15);
    *(_QWORD *)&v144 = 15;
    *((_QWORD *)&v144 + 1) = v27;
    v145 = 15;
    v141.m256i_i64[1] = 0;
    *(_OWORD *)&v141.m256i_u64[2] = 8u;
    v141.m256i_i8[0] = 4;
    sub_140A68320(&v153, &v130, &v144, &v141);
    if ( v153.m256i_i8[0] != -1 )
      sub_140032FF0(&v153);
    nullsub_1(v29, v28);
    v30 = sub_140001650(9, 1);
    if ( !v30 )
      sub_14196B2DB(1, 9);
    *(_QWORD *)v30 = 0x6F72724564616572LL;
    *(_BYTE *)(v30 + 8) = 114;
    *(_QWORD *)&v127 = 9;
    v140 = v30;
    *((_QWORD *)&v127 + 1) = v30;
    v128 = 9;
    v153.m256i_i64[0] = 0;
    *(_OWORD *)&v153.m256i_u64[1] = 1u;
    v141.m256i_i64[2] = 1610612768;
    v141.m256i_i64[0] = (__int64)&v153;
    v141.m256i_i64[1] = (__int64)&off_141A66E10;
    if ( (unsigned __int8)sub_140D76130(&v132, &v141) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_5,
        55,
        (unsigned int)&v142,
        (unsigned int)&unk_141A5A890,
        (__int64)&off_141A66EC8);
    v120 = v153.m256i_i64[1];
    v143 = v153.m256i_i64[0];
    sub_14072B5B0((__int64)&v144, v153.m256i_i64[1], v153.m256i_i64[2], a3);
    v140 = *((_QWORD *)&v144 + 1);
    *(_QWORD *)&v4 = v145;
    if ( v145 < 0 )
    {
      v33 = 0;
      goto LABEL_35;
    }
    v49 = v12;
    if ( v145 )
    {
      *((_QWORD *)&v4 + 1) = a4;
      v50 = a3;
      nullsub_1(v32, v31);
      v33 = 1;
      v51 = sub_140001650(v4, 1);
      if ( !v51 )
      {
LABEL_35:
        v151 = 1;
        sub_14196B2DB(v33, v4);
      }
      v52 = v51;
      sub_1419234B0(v51, v140, v4);
      a3 = v50;
    }
    else
    {
      v52 = 1;
    }
    v141.m256i_i8[0] = 3;
    v141.m256i_i64[1] = v4;
    v141.m256i_i64[2] = v52;
    v141.m256i_i64[3] = v4;
    v151 = 0;
    sub_140A68320(&v153, &v130, &v127, &v141);
    v48 = (__int64)v49;
    if ( v153.m256i_i8[0] != -1 )
      sub_140032FF0(&v153);
    if ( (_QWORD)v144 )
      sub_140001660(v140, v144, 1);
    if ( v143 )
      sub_140001660(v120, v143, 1);
    *(_OWORD *)&v141.m256i_u64[1] = v130;
    v141.m256i_i64[3] = v131;
    v141.m256i_i8[0] = 5;
    sub_140906570(&v132);
  }
  *(_QWORD *)&v130 = 0;
  v131 = 0;
  nullsub_1(v45, v44);
  v53 = sub_140001650(6, 1);
  if ( !v53 )
    sub_14196B2DB(1, 6);
  *(_WORD *)(v53 + 4) = 29556;
  *(_DWORD *)v53 = 1936291941;
  v153.m256i_i64[0] = 6;
  v153.m256i_i64[1] = v53;
  v153.m256i_i64[2] = 6;
  v154 = 1;
  sub_1416C49D0(&v132, v138, v119);
  if ( v132.m256i_i32[0] == 2 )
  {
    if ( (v132.m256i_i8[8] & 3u) - 2 >= 2 && (v132.m256i_i8[8] & 3) != 0 )
    {
      --v132.m256i_i64[1];
      v132.m256i_i8[0] = 3;
      v154 = 1;
      sub_1416EBAD0(&v132.m256i_u64[1]);
    }
    v54 = 0;
  }
  else
  {
    v54 = 1;
  }
  v132.m256i_i8[0] = 1;
  v132.m256i_i8[1] = v54;
  v154 = 0;
  sub_140A68320(&v124, &v130, &v153, &v132);
  if ( v124.m512i_i8[0] != -1 )
    sub_140032FF0(&v124);
  nullsub_1(v56, v55);
  v57 = sub_140001650(9, 1);
  if ( !v57 )
    sub_14196B2DB(1, 9);
  *(_QWORD *)v57 = 0x6F72724564616572LL;
  *(_BYTE *)(v57 + 8) = 114;
  v153.m256i_i64[0] = 9;
  v153.m256i_i64[1] = v57;
  v153.m256i_i64[2] = 9;
  if ( v137 == -1 )
  {
    v62 = 0;
  }
  else
  {
    v60 = v123;
    if ( v123 < 0 )
    {
      v61 = 0;
      goto LABEL_89;
    }
    v62 = 3;
    if ( v123 )
    {
      *((_QWORD *)&v4 + 1) = v48;
      nullsub_1(v59, v58);
      v61 = 1;
      v63 = sub_140001650(v123, 1);
      v60 = v123;
      if ( !v63 )
      {
LABEL_89:
        v150 = 1;
        sub_14196B2DB(v61, v60);
      }
      *(_QWORD *)&v4 = v63;
      sub_1419234B0(v63, v121, v123);
      v57 = v123;
      v48 = *((_QWORD *)&v4 + 1);
    }
    else
    {
      *(_QWORD *)&v4 = 1;
      v57 = 0;
    }
  }
  v132.m256i_i8[0] = v62;
  v132.m256i_i64[1] = v57;
  v132.m256i_i64[2] = v4;
  v132.m256i_i64[3] = v57;
  v150 = 0;
  sub_140A68320(&v124, &v130, &v153, &v132);
  if ( v124.m512i_i8[0] != -1 )
    sub_140032FF0(&v124);
  nullsub_1(v65, v64);
  v66 = (void *)sub_140001650(21, 1);
  if ( !v66 )
    sub_14196B2DB(1, 21);
  qmemcpy(v66, "topLevelModelProvider", 21);
  *(_QWORD *)&v144 = 21;
  v143 = (__int64)v66;
  *((_QWORD *)&v144 + 1) = v66;
  v145 = 21;
  sub_1408CA1B0((unsigned int)&v153, v139, v48, (unsigned int)aModelProvider_0, 14);
  v143 = v153.m256i_i64[0];
  if ( v153.m256i_i64[0] == -1 )
  {
    v70 = 0;
  }
  else
  {
    *((_QWORD *)&v4 + 1) = v153.m256i_i64[2];
    if ( v153.m256i_i64[2] < 0 )
    {
      v69 = 0;
      goto LABEL_101;
    }
    v70 = 3;
    if ( v153.m256i_i64[2] )
    {
      v140 = v48;
      v71 = a3;
      v72 = v153.m256i_i64[1];
      nullsub_1(v68, v67);
      v69 = 1;
      v73 = sub_140001650(*((_QWORD *)&v4 + 1), 1);
      if ( !v73 )
      {
LABEL_101:
        v149 = 1;
        sub_14196B2DB(v69, *((_QWORD *)&v4 + 1));
      }
      *(_QWORD *)&v4 = v73;
      sub_1419234B0(v73, v72, *((_QWORD *)&v4 + 1));
      a3 = v71;
      v48 = v140;
    }
    else
    {
      v4 = 1u;
    }
  }
  v132.m256i_i8[0] = v70;
  v132.m256i_i64[1] = *((_QWORD *)&v4 + 1);
  *(_OWORD *)&v132.m256i_u64[2] = v4;
  v149 = 0;
  sub_140A68320(&v124, &v130, &v144, &v132);
  if ( v124.m512i_i8[0] != -1 )
    sub_140032FF0(&v124);
  v75 = v143;
  if ( v143 != -1 && v143 )
    sub_140001660(v153.m256i_i64[1], v143, 1);
  nullsub_1(v74, v75);
  v76 = (void *)sub_140001650(13, 1);
  v77 = v139;
  if ( !v76 )
    sub_14196B2DB(1, 13);
  qmemcpy(v76, "topLevelModel", 13);
  *(_QWORD *)&v144 = 13;
  v143 = (__int64)v76;
  *((_QWORD *)&v144 + 1) = v76;
  v145 = 13;
  sub_1408CA1B0((unsigned int)&v153, v77, v48, (unsigned int)aModel_3, 5);
  v143 = v153.m256i_i64[0];
  if ( v153.m256i_i64[0] == -1 )
  {
    v81 = 0;
  }
  else
  {
    *((_QWORD *)&v4 + 1) = v153.m256i_i64[2];
    if ( v153.m256i_i64[2] < 0 )
    {
      v80 = 0;
      goto LABEL_116;
    }
    v81 = 3;
    if ( v153.m256i_i64[2] )
    {
      v140 = v48;
      v82 = a3;
      v48 = v153.m256i_i64[1];
      nullsub_1(v79, v78);
      v80 = 1;
      v83 = sub_140001650(*((_QWORD *)&v4 + 1), 1);
      if ( !v83 )
      {
LABEL_116:
        v148 = 1;
        sub_14196B2DB(v80, *((_QWORD *)&v4 + 1));
      }
      *(_QWORD *)&v4 = v83;
      sub_1419234B0(v83, v48, *((_QWORD *)&v4 + 1));
      a3 = v82;
      LODWORD(v48) = v140;
    }
    else
    {
      v4 = 1u;
    }
  }
  v132.m256i_i8[0] = v81;
  v132.m256i_i64[1] = *((_QWORD *)&v4 + 1);
  *(_OWORD *)&v132.m256i_u64[2] = v4;
  v148 = 0;
  sub_140A68320(&v124, &v130, &v144, &v132);
  if ( v124.m512i_i8[0] != -1 )
    sub_140032FF0(&v124);
  v85 = v143;
  if ( v143 != -1 && v143 )
    sub_140001660(v153.m256i_i64[1], v143, 1);
  nullsub_1(v84, v85);
  v86 = (void *)sub_140001650(19, 1);
  v87 = v139;
  if ( !v86 )
    sub_14196B2DB(1, 19);
  qmemcpy(v86, "hasModelCatalogJson", 19);
  *(_QWORD *)&v144 = 19;
  v143 = (__int64)v86;
  *((_QWORD *)&v144 + 1) = v86;
  v145 = 19;
  sub_1408CA1B0((unsigned int)&v153, v87, v48, (unsigned int)aModelCatalogJs_0, 18);
  v143 = v153.m256i_i64[0];
  v132.m256i_i8[0] = 1;
  v132.m256i_i8[1] = v153.m256i_i64[0] != -1;
  sub_140A68320(&v124, &v130, &v144, &v132);
  if ( v124.m512i_i8[0] != -1 )
    sub_140032FF0(&v124);
  v89 = v143;
  if ( v143 != -1 && v143 )
    sub_140001660(v153.m256i_i64[1], v143, 1);
  nullsub_1(v88, v89);
  v90 = (void *)sub_140001650(11, 1);
  if ( !v90 )
    sub_14196B2DB(1, 11);
  qmemcpy(v90, "routerEntry", 11);
  *(_QWORD *)&v127 = 11;
  *((_QWORD *)&v127 + 1) = v90;
  v128 = 11;
  *(_QWORD *)&v144 = 0;
  v145 = 0;
  nullsub_1(0x6E45726574756F72LL, v91);
  v92 = (void *)sub_140001650(15, 1);
  if ( !v92 )
    sub_14196B2DB(1, 15);
  qmemcpy(v92, "providerSection", 15);
  v153.m256i_i64[0] = 15;
  v153.m256i_i64[1] = (__int64)v92;
  v153.m256i_i64[2] = 15;
  v132.m256i_i8[0] = 1;
  v132.m256i_i8[1] = (char)v129;
  sub_140A68320(&v124, &v144, &v153, &v132);
  if ( v124.m512i_i8[0] != -1 )
    sub_140032FF0(&v124);
  nullsub_1(v94, v93);
  v95 = (void *)sub_140001650(14, 1);
  if ( !v95 )
    sub_14196B2DB(1, 14);
  v96 = (unsigned int)v129 >> 8;
  qmemcpy(v95, "profileSection", 14);
  v153.m256i_i64[0] = 14;
  v153.m256i_i64[1] = (__int64)v95;
  v153.m256i_i64[2] = 14;
  v132.m256i_i8[0] = 1;
  v132.m256i_i8[1] = v96;
  sub_140A68320(&v124, &v144, &v153, &v132);
  if ( v124.m512i_i8[0] != -1 )
    sub_140032FF0(&v124);
  nullsub_1(v98, v97);
  v99 = (_OWORD *)sub_140001650(16, 1);
  if ( !v99 )
    sub_14196B2DB(1, 16);
  v100 = (unsigned int)v129 >> 16;
  *v99 = xmmword_141A5BE28;
  v153.m256i_i64[0] = 16;
  v153.m256i_i64[1] = (__int64)v99;
  v153.m256i_i64[2] = 16;
  v132.m256i_i8[0] = 1;
  v132.m256i_i8[1] = v100;
  sub_140A68320(&v124, &v144, &v153, &v132);
  if ( v124.m512i_i8[0] != -1 )
    sub_140032FF0(&v124);
  nullsub_1(v102, v101);
  v103 = (_QWORD *)sub_140001650(8, 1);
  if ( !v103 )
    sub_14196B2DB(1, 8);
  *v103 = 0x6574656C706D6F63LL;
  v153.m256i_i64[0] = 8;
  v153.m256i_i64[1] = (__int64)v103;
  v153.m256i_i64[2] = 8;
  v104 = 0;
  if ( ((unsigned __int8)v129 & 1) != 0 )
    v104 = v100;
  v132.m256i_i8[0] = 1;
  v132.m256i_i8[1] = v104;
  sub_140A68320(&v124, &v144, &v153, &v132);
  if ( v124.m512i_i8[0] != -1 )
    sub_140032FF0(&v124);
  *(_OWORD *)&v132.m256i_u64[1] = v144;
  v132.m256i_i64[3] = v145;
  v132.m256i_i8[0] = 5;
  v147 = 0;
  sub_140A68320(&v124, &v130, &v127, &v132);
  if ( v124.m512i_i8[0] != -1 )
    sub_140032FF0(&v124);
  nullsub_1(v106, v105);
  v107 = (_QWORD *)sub_140001650(8, 1);
  if ( !v107 )
    sub_14196B2DB(1, 8);
  *v107 = 0x7265766F656B6174LL;
  v153.m256i_i64[0] = 8;
  v153.m256i_i64[1] = (__int64)v107;
  v153.m256i_i64[2] = 8;
  v155 = 1;
  sub_140B73E90(&v132, &v141);
  if ( v132.m256i_i8[0] == -1 )
  {
    v124.m512i_i64[0] = v132.m256i_i64[1];
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v124,
      (unsigned int)&off_141A5A840,
      (__int64)&off_141A5BDC8);
  }
  *(__m256i *)v124.m512i_i8 = v132;
  v155 = 0;
  sub_140A68320(&v132, &v130, &v153, &v124);
  if ( v132.m256i_i8[0] != -1 )
    sub_140032FF0(&v132);
  nullsub_1(v109, v108);
  v110 = (_DWORD *)sub_140001650(4, 1);
  if ( !v110 )
    sub_14196B2DB(1, 4);
  *v110 = 1752457584;
  *(_QWORD *)&v144 = 4;
  v129 = v110;
  *((_QWORD *)&v144 + 1) = v110;
  v145 = 4;
  sub_1416DA570(&v132);
  v138 = v132.m256i_i64[1];
  sub_14072B5B0((__int64)&v153, v132.m256i_i64[1], v132.m256i_i64[2], a3);
  v112 = v132.m256i_i64[0];
  if ( v132.m256i_i64[0] > 0 )
    sub_140001660(v138, v132.m256i_i64[0], 1);
  *((_QWORD *)&v113 + 1) = v153.m256i_i64[2];
  v114 = v153.m256i_i64[1];
  v138 = v153.m256i_i64[1];
  if ( v153.m256i_i64[2] < 0 )
  {
    v115 = 0;
    goto LABEL_159;
  }
  if ( v153.m256i_i64[2] )
  {
    nullsub_1(v111, v112);
    v115 = 1;
    v116 = sub_140001650(*((_QWORD *)&v113 + 1), 1);
    if ( !v116 )
    {
LABEL_159:
      v146 = 1;
      sub_14196B2DB(v115, *((_QWORD *)&v113 + 1));
    }
    *(_QWORD *)&v113 = v116;
    sub_1419234B0(v116, v114, *((_QWORD *)&v113 + 1));
  }
  else
  {
    *(_QWORD *)&v113 = 1;
  }
  v132.m256i_i8[0] = 3;
  v132.m256i_i64[1] = *((_QWORD *)&v113 + 1);
  *(_OWORD *)&v132.m256i_u64[2] = v113;
  v146 = 0;
  sub_140A68320(&v124, &v130, &v144, &v132);
  if ( v124.m512i_i8[0] != -1 )
    sub_140032FF0(&v124);
  if ( v153.m256i_i64[0] )
    sub_140001660(v138, v153.m256i_i64[0], 1);
  *(_QWORD *)(a1 + 24) = v131;
  result = *(double *)&v130;
  *(_OWORD *)(a1 + 8) = v130;
  *(_BYTE *)a1 = 5;
  sub_140032FF0(&v141);
  if ( (unsigned __int64)(v137 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    result = sub_140001660(v121, v137, 1);
  if ( v122 )
    return sub_140001660(v139, v122, 1);
  return result;
}
