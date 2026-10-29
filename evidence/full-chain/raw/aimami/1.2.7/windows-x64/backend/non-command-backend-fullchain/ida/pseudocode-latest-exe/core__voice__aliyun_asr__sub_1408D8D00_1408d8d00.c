// win 1.2.7 latest-exe | module src/core/voice/aliyun_asr.rs | ea 0x1408d8d00 | successor of pre-update 0x140dbd530 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.963, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_1408D8D00(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  _WORD *v9; // rbx
  _WORD *v10; // rax
  __int128 v11; // xmm0
  _OWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rbx
  __int64 v18; // r15
  void *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  void *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  _WORD *v36; // r14
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r15
  _WORD *v41; // rax
  __int128 v42; // xmm0
  _OWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  _DWORD *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r12
  _DWORD *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  void *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  _QWORD *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  void *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  void *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  void *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // r14
  __int64 v83; // rax
  __int64 v84; // r15
  __int64 v85; // rcx
  __int64 v86; // rdx
  _DWORD *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  void *v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  _DWORD *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  void *v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  void *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  void *v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  void *v109; // rax
  __int64 v110; // rdx
  _DWORD *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  void *v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  void *v120; // rax
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  _DWORD *v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  void *v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rcx
  _DWORD *v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  _QWORD *v143; // rax
  __int64 v144; // rdx
  void *v145; // rax
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // rax
  __int64 v149; // rcx
  __int64 v150; // rdx
  __int64 v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // rdi
  __int64 v155; // r15
  __int64 v156; // r14
  __int64 v157; // rax
  __int64 v158; // rbx
  __int64 v159; // rdx
  __int64 v160; // rcx
  void *v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // rax
  _QWORD v166[3]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v167; // [rsp+40h] [rbp-40h] BYREF
  __int64 v168; // [rsp+50h] [rbp-30h]
  __int128 v169; // [rsp+58h] [rbp-28h] BYREF
  __int64 v170; // [rsp+68h] [rbp-18h]
  __int64 v171; // [rsp+70h] [rbp-10h] BYREF
  __int64 v172; // [rsp+78h] [rbp-8h]
  __int64 v173; // [rsp+80h] [rbp+0h]
  char v174; // [rsp+8Fh] [rbp+Fh] BYREF
  __int128 v175; // [rsp+90h] [rbp+10h] BYREF
  __int64 v176; // [rsp+A0h] [rbp+20h]
  _BYTE v177[24]; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v178; // [rsp+C0h] [rbp+40h]
  char v179; // [rsp+C8h] [rbp+48h]
  char v180; // [rsp+C9h] [rbp+49h]
  char v181; // [rsp+CAh] [rbp+4Ah]
  char v182; // [rsp+CBh] [rbp+4Bh]
  char v183; // [rsp+CCh] [rbp+4Ch]
  char v184; // [rsp+CDh] [rbp+4Dh]
  char v185; // [rsp+CEh] [rbp+4Eh]
  char v186; // [rsp+CFh] [rbp+4Fh]
  __m256i v187; // [rsp+D0h] [rbp+50h] BYREF
  char v188; // [rsp+FFh] [rbp+7Fh]
  __int64 v189; // [rsp+100h] [rbp+80h]
  __int128 v190; // [rsp+108h] [rbp+88h] BYREF
  __int64 v191; // [rsp+118h] [rbp+98h]
  char v192; // [rsp+125h] [rbp+A5h]
  char v193; // [rsp+126h] [rbp+A6h]
  char v194; // [rsp+127h] [rbp+A7h]
  __m256i v195; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v196; // [rsp+148h] [rbp+C8h]

  v196 = -2;
  if ( !a3 )
  {
    *(_QWORD *)&v190 = 0;
    v191 = 0;
    nullsub_1(a1, a2);
    v20 = (void *)sub_140001650(11, 1);
    if ( !v20 )
      sub_14196B2DB(1, 11);
    qmemcpy(v20, "sample_rate", 11);
    *(_QWORD *)v177 = 11;
    *(_QWORD *)&v177[8] = v20;
    *(_QWORD *)&v177[16] = 11;
    v21 = *(unsigned int *)(a2 + 96);
    v195.m256i_i8[0] = 2;
    v195.m256i_i64[1] = 0;
    v195.m256i_i64[2] = v21;
    sub_140A68320(&v187, &v190, v177, &v195);
    if ( v187.m256i_i8[0] != -1 )
      sub_140032FF0(&v187);
    nullsub_1(v23, v22);
    v24 = sub_140001650(6, 1);
    if ( !v24 )
      sub_14196B2DB(1, 6);
    *(_WORD *)(v24 + 4) = 29793;
    *(_DWORD *)v24 = 1836216166;
    *(_QWORD *)v177 = 6;
    *(_QWORD *)&v177[8] = v24;
    *(_QWORD *)&v177[16] = 6;
    nullsub_1(v26, v25);
    v27 = sub_140001650(3, 1);
    v189 = v27;
    if ( !v27 )
      sub_14196B2DB(1, 3);
    *(_BYTE *)(v27 + 2) = 109;
    *(_WORD *)v27 = 25456;
    v195.m256i_i8[0] = 3;
    v195.m256i_i64[1] = 3;
    v195.m256i_i64[2] = v27;
    v195.m256i_i64[3] = 3;
    sub_140A68320(&v187, &v190, v177, &v195);
    if ( v187.m256i_i8[0] != -1 )
      sub_140032FF0(&v187);
    nullsub_1(v29, v28);
    v30 = (void *)sub_140001650(26, 1);
    if ( !v30 )
      sub_14196B2DB(1, 26);
    qmemcpy(v30, "disfluency_removal_enabled", 26);
    *(_QWORD *)v177 = 26;
    *(_QWORD *)&v177[8] = v30;
    *(_QWORD *)&v177[16] = 26;
    v195.m256i_i16[0] = 257;
    sub_140A68320(&v187, &v190, v177, &v195);
    if ( v187.m256i_i8[0] != -1 )
      sub_140032FF0(&v187);
    nullsub_1(v32, v31);
    v33 = sub_140001650(9, 1);
    if ( !v33 )
      sub_14196B2DB(1, 9);
    *(_QWORD *)v33 = 0x6165627472616568LL;
    *(_BYTE *)(v33 + 8) = 116;
    *(_QWORD *)v177 = 9;
    *(_QWORD *)&v177[8] = v33;
    *(_QWORD *)&v177[16] = 9;
    v195.m256i_i16[0] = 1;
    sub_140A68320(&v187, &v190, v177, &v195);
    if ( v187.m256i_i8[0] != -1 )
      sub_140032FF0(&v187);
    *(_OWORD *)&v177[8] = v190;
    v178 = v191;
    v177[0] = 5;
    v36 = (_WORD *)sub_1408DC1B0(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
    if ( v36 )
    {
      nullsub_1(v35, v34);
      v37 = sub_140001650(32, 8);
      if ( !v37 )
        sub_14196B2C1(8, 32);
      v40 = v37;
      nullsub_1(v39, v38);
      v41 = (_WORD *)sub_140001650(2, 1);
      if ( !v41 )
      {
        v189 = v40;
        sub_14196B2DB(1, 2);
      }
      *v41 = *v36;
      *(_BYTE *)v40 = 3;
      *(_QWORD *)(v40 + 8) = 2;
      *(_QWORD *)(v40 + 16) = v41;
      *(_QWORD *)(v40 + 24) = 2;
      v195.m256i_i64[1] = 1;
      v195.m256i_i64[2] = v40;
      v195.m256i_i64[3] = 1;
      v195.m256i_i8[0] = 4;
      v186 = 1;
      v189 = sub_1416725D0("language_hints", 14, v177);
      sub_140032FF0(v189);
      v42 = *(_OWORD *)v195.m256i_i8;
      v43 = (_OWORD *)v189;
      *(_OWORD *)(v189 + 16) = *(_OWORD *)&v195.m256i_u64[2];
      *v43 = v42;
    }
    *(_QWORD *)&v169 = 0;
    v170 = 0;
    nullsub_1(v35, v34);
    v44 = sub_140001650(6, 1);
    if ( !v44 )
      sub_14196B2DB(1, 6);
    *(_WORD *)(v44 + 4) = 29285;
    *(_DWORD *)v44 = 1684104552;
    v171 = 6;
    v172 = v44;
    v173 = 6;
    *(_QWORD *)&v175 = 0;
    v176 = 0;
    nullsub_1(v46, v45);
    v47 = sub_140001650(6, 1);
    if ( !v47 )
      sub_14196B2DB(1, 6);
    *(_WORD *)(v47 + 4) = 28271;
    *(_DWORD *)v47 = 1769235297;
    *(_QWORD *)&v190 = 6;
    *((_QWORD *)&v190 + 1) = v47;
    v191 = 6;
    nullsub_1(v49, v48);
    v50 = (_QWORD *)sub_140001650(8, 1);
    v189 = (__int64)v50;
    if ( !v50 )
      sub_14196B2DB(1, 8);
    *v50 = 0x6B7361742D6E7572LL;
    v195.m256i_i8[0] = 3;
    v195.m256i_i64[1] = 8;
    v195.m256i_i64[2] = (__int64)v50;
    v195.m256i_i64[3] = 8;
    sub_140A68320(&v187, &v175, &v190, &v195);
    if ( v187.m256i_i8[0] != -1 )
      sub_140032FF0(&v187);
    nullsub_1(v52, v51);
    v53 = (_DWORD *)sub_140001650(7, 1);
    if ( !v53 )
      sub_14196B2DB(1, 7);
    *(_DWORD *)((char *)v53 + 3) = 1684627307;
    *v53 = 1802723700;
    *(_QWORD *)&v190 = 7;
    *((_QWORD *)&v190 + 1) = v53;
    v191 = 7;
    if ( a5 < 0 )
    {
      v56 = 0;
      goto LABEL_37;
    }
    if ( a5 )
    {
      nullsub_1(v55, v54);
      v56 = 1;
      v83 = sub_140001650(a5, 1);
      if ( !v83 )
      {
LABEL_37:
        v185 = 1;
        sub_14196B2DB(v56, a5);
      }
      v84 = v83;
      sub_1419234B0(v83, a4, a5);
    }
    else
    {
      v84 = 1;
    }
    v195.m256i_i8[0] = 3;
    v195.m256i_i64[1] = a5;
    v195.m256i_i64[2] = v84;
    v195.m256i_i64[3] = a5;
    v185 = 0;
    sub_140A68320(&v187, &v175, &v190, &v195);
    if ( v187.m256i_i8[0] != -1 )
      sub_140032FF0(&v187);
    nullsub_1(v123, v122);
    v124 = sub_140001650(9, 1);
    if ( !v124 )
      sub_14196B2DB(1, 9);
    *(_QWORD *)v124 = 0x6E696D6165727473LL;
    *(_BYTE *)(v124 + 8) = 103;
    *(_QWORD *)&v190 = 9;
    *((_QWORD *)&v190 + 1) = v124;
    v191 = 9;
    nullsub_1(0x6E696D6165727473LL, v125);
    v126 = sub_140001650(6, 1);
    v189 = v126;
    if ( !v126 )
      sub_14196B2DB(1, 6);
    *(_WORD *)(v126 + 4) = 30821;
    *(_DWORD *)v126 = 1819309412;
    v195.m256i_i8[0] = 3;
    v195.m256i_i64[1] = 6;
    v195.m256i_i64[2] = v126;
    v195.m256i_i64[3] = 6;
    sub_140A68320(&v187, &v175, &v190, &v195);
    if ( v187.m256i_i8[0] != -1 )
      sub_140032FF0(&v187);
    *(_OWORD *)&v195.m256i_u64[1] = v175;
    v195.m256i_i64[3] = v176;
    v195.m256i_i8[0] = 5;
    v184 = 0;
    sub_140A68320(&v187, &v169, &v171, &v195);
    if ( v187.m256i_i8[0] != -1 )
      sub_140032FF0(&v187);
    nullsub_1(v128, v127);
    v129 = (_DWORD *)sub_140001650(7, 1);
    if ( !v129 )
      sub_14196B2DB(1, 7);
    *(_DWORD *)((char *)v129 + 3) = 1684107116;
    *v129 = 1819894128;
    v171 = 7;
    v172 = (__int64)v129;
    v173 = 7;
    *(_QWORD *)&v175 = 0;
    v176 = 0;
    nullsub_1(v131, v130);
    v132 = (void *)sub_140001650(10, 1);
    if ( !v132 )
      sub_14196B2DB(1, 10);
    qmemcpy(v132, "task_group", 10);
    *(_QWORD *)&v190 = 10;
    *((_QWORD *)&v190 + 1) = v132;
    v191 = 10;
    nullsub_1(0x6F72675F6B736174LL, v133);
    v134 = sub_140001650(5, 1);
    v189 = v134;
    if ( !v134 )
      sub_14196B2DB(1, 5);
    *(_BYTE *)(v134 + 4) = 111;
    *(_DWORD *)v134 = 1768191329;
    v195.m256i_i8[0] = 3;
    v195.m256i_i64[1] = 5;
    v195.m256i_i64[2] = v134;
    v195.m256i_i64[3] = 5;
    sub_140A68320(&v187, &v175, &v190, &v195);
    if ( v187.m256i_i8[0] != -1 )
      sub_140032FF0(&v187);
    nullsub_1(v136, v135);
    v137 = (_DWORD *)sub_140001650(4, 1);
    if ( !v137 )
      sub_14196B2DB(1, 4);
    *v137 = 1802723700;
    *(_QWORD *)&v190 = 4;
    *((_QWORD *)&v190 + 1) = v137;
    v191 = 4;
    nullsub_1(v139, v138);
    v140 = sub_140001650(3, 1);
    v189 = v140;
    if ( !v140 )
      sub_14196B2DB(1, 3);
    *(_BYTE *)(v140 + 2) = 114;
    *(_WORD *)v140 = 29537;
    v195.m256i_i8[0] = 3;
    v195.m256i_i64[1] = 3;
    v195.m256i_i64[2] = v140;
    v195.m256i_i64[3] = 3;
    sub_140A68320(&v187, &v175, &v190, &v195);
    if ( v187.m256i_i8[0] != -1 )
      sub_140032FF0(&v187);
    nullsub_1(v142, v141);
    v143 = (_QWORD *)sub_140001650(8, 1);
    if ( !v143 )
      sub_14196B2DB(1, 8);
    *v143 = 0x6E6F6974636E7566LL;
    *(_QWORD *)&v190 = 8;
    *((_QWORD *)&v190 + 1) = v143;
    v191 = 8;
    nullsub_1(0x6E6F6974636E7566LL, v144);
    v145 = (void *)sub_140001650(11, 1);
    v189 = (__int64)v145;
    if ( !v145 )
      sub_14196B2DB(1, 11);
    qmemcpy(v145, "recognition", 11);
    v195.m256i_i8[0] = 3;
    v195.m256i_i64[1] = 11;
    v195.m256i_i64[2] = (__int64)v145;
    v195.m256i_i64[3] = 11;
    sub_140A68320(&v187, &v175, &v190, &v195);
    if ( v187.m256i_i8[0] != -1 )
      sub_140032FF0(&v187);
    nullsub_1(v147, v146);
    v148 = sub_140001650(5, 1);
    if ( !v148 )
      sub_14196B2DB(1, 5);
    *(_BYTE *)(v148 + 4) = 108;
    *(_DWORD *)v148 = 1701080941;
    *(_QWORD *)&v190 = 5;
    *((_QWORD *)&v190 + 1) = v148;
    v191 = 5;
    v149 = *(_QWORD *)(a2 + 56);
    v150 = *(_QWORD *)(a2 + 64);
    v188 = 1;
    v151 = sub_1408FEA60(v149, v150);
    v154 = v152;
    if ( v152 < 0 )
    {
      v155 = 0;
      goto LABEL_129;
    }
    if ( v152 )
    {
      v156 = v151;
      nullsub_1(v153, v152);
      v155 = 1;
      v157 = sub_140001650(v154, 1);
      if ( !v157 )
      {
LABEL_129:
        v188 = 1;
        sub_14196B2DB(v155, v154);
      }
      v158 = v157;
      sub_1419234B0(v157, v156, v154);
    }
    else
    {
      v158 = 1;
    }
    v195.m256i_i8[0] = 3;
    v195.m256i_i64[1] = v154;
    v195.m256i_i64[2] = v158;
    v195.m256i_i64[3] = v154;
    v188 = 0;
    sub_140A68320(&v187, &v175, &v190, &v195);
    if ( v187.m256i_i8[0] != -1 )
      sub_140032FF0(&v187);
    nullsub_1(v160, v159);
    v161 = (void *)sub_140001650(10, 1);
    if ( !v161 )
      sub_14196B2DB(1, 10);
    qmemcpy(v161, "parameters", 10);
    *(_QWORD *)&v190 = 10;
    *((_QWORD *)&v190 + 1) = v161;
    v191 = 10;
    v194 = 1;
    sub_140B73E90(&v195, v177);
    if ( v195.m256i_i8[0] == -1 )
    {
      v187.m256i_i64[0] = v195.m256i_i64[1];
      sub_14196B5F0(
        (unsigned int)aCalledResultUn_11,
        43,
        (unsigned int)&v187,
        (unsigned int)&off_141A52958,
        (__int64)&off_141A54E40);
    }
    v187 = v195;
    v194 = 0;
    sub_140A68320(&v195, &v175, &v190, &v187);
    if ( v195.m256i_i8[0] != -1 )
      sub_140032FF0(&v195);
    nullsub_1(v163, v162);
    v164 = sub_140001650(5, 1);
    if ( !v164 )
      sub_14196B2DB(1, 5);
    *(_BYTE *)(v164 + 4) = 116;
    *(_DWORD *)v164 = 1970302569;
    *(_QWORD *)&v190 = 5;
    *((_QWORD *)&v190 + 1) = v164;
    v191 = 5;
    v195.m256i_i64[1] = 0;
    v195.m256i_i64[3] = 0;
    v195.m256i_i8[0] = 5;
    sub_140A68320(&v187, &v175, &v190, &v195);
    if ( v187.m256i_i8[0] != -1 )
      sub_140032FF0(&v187);
    *(_OWORD *)&v195.m256i_u64[1] = v175;
    v195.m256i_i64[3] = v176;
    v195.m256i_i8[0] = 5;
    v183 = 0;
    sub_140A68320(&v187, &v169, &v171, &v195);
    if ( v187.m256i_i8[0] != -1 )
      sub_140032FF0(&v187);
    *(_OWORD *)&v195.m256i_u64[1] = v169;
    v121 = v170;
LABEL_146:
    v195.m256i_i64[3] = v121;
    v195.m256i_i8[0] = 5;
    sub_140032FF0(v177);
    goto LABEL_147;
  }
  if ( a3 == 1 )
  {
    *(_QWORD *)&v177[8] = 0;
    v178 = 0;
    v177[0] = 5;
    v9 = (_WORD *)sub_1408DC1B0(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
    if ( v9 )
    {
      nullsub_1(v8, v7);
      v10 = (_WORD *)sub_140001650(2, 1);
      if ( !v10 )
        sub_14196B2DB(1, 2);
      *v10 = *v9;
      v195.m256i_i8[0] = 3;
      v195.m256i_i64[1] = 2;
      v195.m256i_i64[2] = (__int64)v10;
      v195.m256i_i64[3] = 2;
      v182 = 1;
      v189 = sub_1416725D0(aLanguage, 8, v177);
      sub_140032FF0(v189);
      v11 = *(_OWORD *)v195.m256i_i8;
      v12 = (_OWORD *)v189;
      *(_OWORD *)(v189 + 16) = *(_OWORD *)&v195.m256i_u64[2];
      *v12 = v11;
    }
    *(_QWORD *)&v167 = 0;
    v168 = 0;
    nullsub_1(v8, v7);
    v13 = (_QWORD *)sub_140001650(8, 1);
    if ( !v13 )
      sub_14196B2DB(1, 8);
    *v13 = 0x64695F746E657665LL;
    *(_QWORD *)&v175 = 8;
    v189 = (__int64)v13;
    *((_QWORD *)&v175 + 1) = v13;
    v176 = 8;
    v171 = (__int64)aSession;
    v172 = 7;
    sub_1408DC980(&v187);
    v195.m256i_i64[0] = (__int64)&v171;
    v195.m256i_i64[1] = (__int64)sub_140191200;
    v195.m256i_i64[2] = (__int64)&v187;
    v195.m256i_i64[3] = (__int64)sub_1400015F0;
    sub_1416DAFA0(&v190, &unk_141A54F7A, &v195);
    v15 = v187.m256i_i64[0];
    if ( v187.m256i_i64[0] )
      sub_140001660(v187.m256i_i64[1], v187.m256i_i64[0], 1);
    v16 = *((_QWORD *)&v190 + 1);
    v17 = v191;
    v189 = *((_QWORD *)&v190 + 1);
    if ( v191 < 0 )
    {
      v18 = 0;
      goto LABEL_11;
    }
    if ( v191 )
    {
      nullsub_1(v14, v15);
      v18 = 1;
      v81 = sub_140001650(v17, 1);
      if ( !v81 )
      {
LABEL_11:
        v181 = 1;
        sub_14196B2DB(v18, v17);
      }
      v82 = v81;
      sub_1419234B0(v81, v16, v17);
    }
    else
    {
      v82 = 1;
    }
    v195.m256i_i8[0] = 3;
    v195.m256i_i64[1] = v17;
    v195.m256i_i64[2] = v82;
    v195.m256i_i64[3] = v17;
    v181 = 0;
    sub_140A68320(&v187, &v167, &v175, &v195);
    if ( v187.m256i_i8[0] != -1 )
      sub_140032FF0(&v187);
    v86 = v190;
    if ( (_QWORD)v190 )
      sub_140001660(v189, v190, 1);
    nullsub_1(v85, v86);
    v87 = (_DWORD *)sub_140001650(4, 1);
    if ( !v87 )
      sub_14196B2DB(1, 4);
    *v87 = 1701869940;
    *(_QWORD *)&v190 = 4;
    *((_QWORD *)&v190 + 1) = v87;
    v191 = 4;
    nullsub_1(v89, v88);
    v90 = (void *)sub_140001650(14, 1);
    v189 = (__int64)v90;
    if ( !v90 )
      sub_14196B2DB(1, 14);
    qmemcpy(v90, "session.update", 14);
    v195.m256i_i8[0] = 3;
    v195.m256i_i64[1] = 14;
    v195.m256i_i64[2] = (__int64)v90;
    v195.m256i_i64[3] = 14;
    sub_140A68320(&v187, &v167, &v190, &v195);
    if ( v187.m256i_i8[0] != -1 )
      sub_140032FF0(&v187);
    nullsub_1(v92, v91);
    v93 = (_DWORD *)sub_140001650(7, 1);
    if ( !v93 )
      sub_14196B2DB(1, 7);
    *(_DWORD *)((char *)v93 + 3) = 1852795251;
    *v93 = 1936942451;
    v166[0] = 7;
    v166[1] = v93;
    v166[2] = 7;
    *(_QWORD *)&v169 = 0;
    v170 = 0;
    nullsub_1(v95, v94);
    v96 = (void *)sub_140001650(18, 1);
    if ( !v96 )
      sub_14196B2DB(1, 18);
    qmemcpy(v96, "input_audio_format", 18);
    *(_QWORD *)&v190 = 18;
    *((_QWORD *)&v190 + 1) = v96;
    v191 = 18;
    nullsub_1(v98, v97);
    v99 = sub_140001650(3, 1);
    v189 = v99;
    if ( !v99 )
      sub_14196B2DB(1, 3);
    *(_BYTE *)(v99 + 2) = 109;
    *(_WORD *)v99 = 25456;
    v195.m256i_i8[0] = 3;
    v195.m256i_i64[1] = 3;
    v195.m256i_i64[2] = v99;
    v195.m256i_i64[3] = 3;
    sub_140A68320(&v187, &v169, &v190, &v195);
    if ( v187.m256i_i8[0] != -1 )
      sub_140032FF0(&v187);
    nullsub_1(v101, v100);
    v102 = (void *)sub_140001650(11, 1);
    if ( !v102 )
      sub_14196B2DB(1, 11);
    qmemcpy(v102, "sample_rate", 11);
    *(_QWORD *)&v190 = 11;
    *((_QWORD *)&v190 + 1) = v102;
    v191 = 11;
    v103 = *(unsigned int *)(a2 + 96);
    v195.m256i_i8[0] = 2;
    v195.m256i_i64[1] = 0;
    v195.m256i_i64[2] = v103;
    sub_140A68320(&v187, &v169, &v190, &v195);
    if ( v187.m256i_i8[0] != -1 )
      sub_140032FF0(&v187);
    nullsub_1(v105, v104);
    v106 = (void *)sub_140001650(25, 1);
    if ( !v106 )
      sub_14196B2DB(1, 25);
    qmemcpy(v106, "input_audio_transcription", 25);
    *(_QWORD *)&v190 = 25;
    *((_QWORD *)&v190 + 1) = v106;
    v191 = 25;
    v193 = 1;
    sub_140B73E90(&v195, v177);
    if ( v195.m256i_i8[0] == -1 )
    {
      v187.m256i_i64[0] = v195.m256i_i64[1];
      sub_14196B5F0(
        (unsigned int)aCalledResultUn_11,
        43,
        (unsigned int)&v187,
        (unsigned int)&off_141A52958,
        (__int64)&off_141A54E68);
    }
    v187 = v195;
    v193 = 0;
    sub_140A68320(&v195, &v169, &v190, &v187);
    if ( v195.m256i_i8[0] != -1 )
      sub_140032FF0(&v195);
    nullsub_1(v108, v107);
    v109 = (void *)sub_140001650(14, 1);
    if ( !v109 )
      sub_14196B2DB(1, 14);
    qmemcpy(v109, "turn_detection", 14);
    v171 = 14;
    v172 = (__int64)v109;
    v173 = 14;
    *(_QWORD *)&v175 = 0;
    v176 = 0;
    nullsub_1(0x7465645F6E727574LL, v110);
    v111 = (_DWORD *)sub_140001650(4, 1);
    if ( !v111 )
      sub_14196B2DB(1, 4);
    *v111 = 1701869940;
    *(_QWORD *)&v190 = 4;
    *((_QWORD *)&v190 + 1) = v111;
    v191 = 4;
    nullsub_1(v113, v112);
    v114 = (void *)sub_140001650(10, 1);
    v189 = (__int64)v114;
    if ( !v114 )
      sub_14196B2DB(1, 10);
    qmemcpy(v114, "server_vad", 10);
    v195.m256i_i8[0] = 3;
    v195.m256i_i64[1] = 10;
    v195.m256i_i64[2] = (__int64)v114;
    v195.m256i_i64[3] = 10;
    sub_140A68320(&v187, &v175, &v190, &v195);
    if ( v187.m256i_i8[0] != -1 )
      sub_140032FF0(&v187);
    nullsub_1(v116, v115);
    v117 = sub_140001650(9, 1);
    if ( !v117 )
      sub_14196B2DB(1, 9);
    *(_QWORD *)v117 = 0x6C6F687365726874LL;
    *(_BYTE *)(v117 + 8) = 100;
    *(_QWORD *)&v190 = 9;
    *((_QWORD *)&v190 + 1) = v117;
    v191 = 9;
    v192 = 1;
    sub_14166CB50(&v195);
    if ( v195.m256i_i8[0] == -1 )
    {
      v187.m256i_i64[0] = v195.m256i_i64[1];
      sub_14196B5F0(
        (unsigned int)aCalledResultUn_11,
        43,
        (unsigned int)&v187,
        (unsigned int)&off_141A52958,
        (__int64)&off_141A54E68);
    }
    v187 = v195;
    v192 = 0;
    sub_140A68320(&v195, &v175, &v190, &v187);
    if ( v195.m256i_i8[0] != -1 )
      sub_140032FF0(&v195);
    nullsub_1(v119, v118);
    v120 = (void *)sub_140001650(19, 1);
    if ( !v120 )
      sub_14196B2DB(1, 19);
    qmemcpy(v120, "silence_duration_ms", 19);
    *(_QWORD *)&v190 = 19;
    *((_QWORD *)&v190 + 1) = v120;
    v191 = 19;
    v195.m256i_i8[0] = 2;
    v195.m256i_i64[1] = 0;
    v195.m256i_i64[2] = 600;
    sub_140A68320(&v187, &v175, &v190, &v195);
    if ( v187.m256i_i8[0] != -1 )
      sub_140032FF0(&v187);
    *(_OWORD *)&v195.m256i_u64[1] = v175;
    v195.m256i_i64[3] = v176;
    v195.m256i_i8[0] = 5;
    v180 = 0;
    sub_140A68320(&v187, &v169, &v171, &v195);
    if ( v187.m256i_i8[0] != -1 )
      sub_140032FF0(&v187);
    *(_OWORD *)&v195.m256i_u64[1] = v169;
    v195.m256i_i64[3] = v170;
    v195.m256i_i8[0] = 5;
    v179 = 0;
    sub_140A68320(&v187, &v167, v166, &v195);
    if ( v187.m256i_i8[0] != -1 )
      sub_140032FF0(&v187);
    *(_OWORD *)&v195.m256i_u64[1] = v167;
    v121 = v168;
    goto LABEL_146;
  }
  *(_QWORD *)&v190 = 0;
  v191 = 0;
  nullsub_1(a1, a2);
  v57 = (_DWORD *)sub_140001650(4, 1);
  if ( !v57 )
    sub_14196B2DB(1, 4);
  *v57 = 1701080941;
  *(_QWORD *)v177 = 4;
  *(_QWORD *)&v177[8] = v57;
  *(_QWORD *)&v177[16] = 4;
  nullsub_1(v59, v58);
  v60 = sub_140001650(5, 1);
  v189 = v60;
  if ( !v60 )
    sub_14196B2DB(1, 5);
  *(_BYTE *)(v60 + 4) = 115;
  *(_DWORD *)v60 = 1935765554;
  v195.m256i_i8[0] = 3;
  v195.m256i_i64[1] = 5;
  v195.m256i_i64[2] = v60;
  v195.m256i_i64[3] = 5;
  sub_140A68320(&v187, &v190, v177, &v195);
  if ( v187.m256i_i8[0] != -1 )
    sub_140032FF0(&v187);
  nullsub_1(v62, v61);
  v63 = (void *)sub_140001650(10, 1);
  if ( !v63 )
    sub_14196B2DB(1, 10);
  qmemcpy(v63, "chunk_size", 10);
  *(_QWORD *)v177 = 10;
  *(_QWORD *)&v177[8] = v63;
  *(_QWORD *)&v177[16] = 10;
  nullsub_1(0x69735F6B6E756863LL, v64);
  v65 = sub_140001650(96, 8);
  v189 = v65;
  if ( !v65 )
    sub_14196B2C1(8, 96);
  *(_BYTE *)(v65 + 64) = 2;
  *(_QWORD *)(v65 + 72) = 0;
  *(_QWORD *)(v65 + 80) = 5;
  *(_BYTE *)v65 = 2;
  *(_QWORD *)(v65 + 8) = 0;
  *(_QWORD *)(v65 + 16) = 5;
  *(_BYTE *)(v65 + 32) = 2;
  *(_QWORD *)(v65 + 40) = 0;
  *(_QWORD *)(v65 + 48) = 10;
  v195.m256i_i64[1] = 3;
  v195.m256i_i64[2] = v65;
  v195.m256i_i64[3] = 3;
  v195.m256i_i8[0] = 4;
  sub_140A68320(&v187, &v190, v177, &v195);
  if ( v187.m256i_i8[0] != -1 )
    sub_140032FF0(&v187);
  nullsub_1(v67, v66);
  v68 = (_QWORD *)sub_140001650(8, 1);
  if ( !v68 )
    sub_14196B2DB(1, 8);
  *v68 = 0x656D616E5F766177LL;
  *(_QWORD *)v177 = 8;
  *(_QWORD *)&v177[8] = v68;
  *(_QWORD *)&v177[16] = 8;
  nullsub_1(0x656D616E5F766177LL, v69);
  v70 = sub_140001650(6, 1);
  v189 = v70;
  if ( !v70 )
    sub_14196B2DB(1, 6);
  *(_WORD *)(v70 + 4) = 26989;
  *(_DWORD *)v70 = 1634560353;
  v195.m256i_i8[0] = 3;
  v195.m256i_i64[1] = 6;
  v195.m256i_i64[2] = v70;
  v195.m256i_i64[3] = 6;
  sub_140A68320(&v187, &v190, v177, &v195);
  if ( v187.m256i_i8[0] != -1 )
    sub_140032FF0(&v187);
  nullsub_1(v72, v71);
  v73 = (void *)sub_140001650(11, 1);
  if ( !v73 )
    sub_14196B2DB(1, 11);
  qmemcpy(v73, "is_speaking", 11);
  *(_QWORD *)v177 = 11;
  *(_QWORD *)&v177[8] = v73;
  *(_QWORD *)&v177[16] = 11;
  v195.m256i_i16[0] = 257;
  sub_140A68320(&v187, &v190, v177, &v195);
  if ( v187.m256i_i8[0] != -1 )
    sub_140032FF0(&v187);
  nullsub_1(v75, v74);
  v76 = (void *)sub_140001650(14, 1);
  if ( !v76 )
    sub_14196B2DB(1, 14);
  qmemcpy(v76, "chunk_interval", 14);
  *(_QWORD *)v177 = 14;
  *(_QWORD *)&v177[8] = v76;
  *(_QWORD *)&v177[16] = 14;
  v195.m256i_i8[0] = 2;
  v195.m256i_i64[1] = 0;
  v195.m256i_i64[2] = 10;
  sub_140A68320(&v187, &v190, v177, &v195);
  if ( v187.m256i_i8[0] != -1 )
    sub_140032FF0(&v187);
  nullsub_1(v78, v77);
  v79 = (void *)sub_140001650(11, 1);
  if ( !v79 )
    sub_14196B2DB(1, 11);
  qmemcpy(v79, "sample_rate", 11);
  *(_QWORD *)v177 = 11;
  *(_QWORD *)&v177[8] = v79;
  *(_QWORD *)&v177[16] = 11;
  v80 = *(unsigned int *)(a2 + 96);
  v195.m256i_i8[0] = 2;
  v195.m256i_i64[1] = 0;
  v195.m256i_i64[2] = v80;
  sub_140A68320(&v187, &v190, v177, &v195);
  if ( v187.m256i_i8[0] != -1 )
    sub_140032FF0(&v187);
  *(_OWORD *)&v195.m256i_u64[1] = v190;
  v195.m256i_i64[3] = v191;
  v195.m256i_i8[0] = 5;
LABEL_147:
  *(_QWORD *)v177 = 0;
  *(_QWORD *)&v177[8] = 1;
  *(_QWORD *)&v177[16] = 0;
  v187.m256i_i64[2] = 1610612768;
  v187.m256i_i64[0] = (__int64)v177;
  v187.m256i_i64[1] = (__int64)&off_141A55F58;
  if ( (unsigned __int8)sub_14166C3A0(&v195, &v187) )
    sub_14196B5F0(
      (unsigned int)aADisplayImplem_4,
      55,
      (unsigned int)&v174,
      (unsigned int)&unk_141A52978,
      (__int64)&off_141A56010);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)&v177[16];
  *(_OWORD *)(a1 + 8) = *(_OWORD *)v177;
  *(_QWORD *)a1 = 0;
  sub_140032FF0(&v195);
  return a1;
}
