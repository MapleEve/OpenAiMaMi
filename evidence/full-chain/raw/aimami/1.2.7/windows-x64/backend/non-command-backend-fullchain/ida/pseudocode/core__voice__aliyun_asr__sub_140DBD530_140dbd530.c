// win 1.2.7 | module src/core/voice/aliyun_asr.rs | ea 0x140dbd530 | name sub_140DBD530
// win 1.2.7 | module src/core/voice/aliyun_asr.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140DBD530(__int64 a1, __int64 a2, char a3, const __m128i *a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  _WORD *v9; // rbx
  _WORD *v10; // rax
  __int128 v11; // xmm0
  _OWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  const __m128i *v15; // r12
  unsigned __int64 v16; // rbx
  __int64 v17; // r15
  void *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  void *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  _WORD *v31; // r14
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r15
  _WORD *v35; // rax
  __int128 v36; // xmm0
  _OWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rcx
  _DWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r12
  _DWORD *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  void *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  void *v57; // rax
  __int64 v58; // rcx
  void *v59; // rax
  __int64 v60; // rcx
  void *v61; // rax
  __int64 v62; // rax
  __m128i *v63; // rax
  __int64 v64; // r14
  __m128i *v65; // rax
  __int64 v66; // r15
  __int64 v67; // rcx
  _DWORD *v68; // rax
  __int64 v69; // rcx
  void *v70; // rax
  __int64 v71; // rcx
  _DWORD *v72; // rax
  __int64 v73; // rcx
  void *v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rcx
  void *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rcx
  void *v81; // rax
  __int64 v82; // rcx
  void *v83; // rax
  _DWORD *v84; // rax
  __int64 v85; // rcx
  void *v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rcx
  void *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rcx
  _DWORD *v96; // rax
  __int64 v97; // rcx
  void *v98; // rax
  __int64 v99; // rax
  __int64 v100; // rcx
  _DWORD *v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rcx
  _QWORD *v105; // rax
  void *v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  unsigned __int64 v112; // rdi
  __int64 v113; // r15
  const __m128i *v114; // r14
  __m128i *v115; // rax
  __int64 v116; // rbx
  __int64 v117; // rcx
  void *v118; // rax
  __int64 v119; // rcx
  __int64 v120; // rax
  _QWORD v122[3]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v123; // [rsp+48h] [rbp-38h] BYREF
  __int64 v124; // [rsp+58h] [rbp-28h]
  __int128 v125; // [rsp+60h] [rbp-20h] BYREF
  __int64 v126; // [rsp+70h] [rbp-10h]
  __int64 v127; // [rsp+78h] [rbp-8h] BYREF
  __int64 v128; // [rsp+80h] [rbp+0h]
  __int64 v129; // [rsp+88h] [rbp+8h]
  char v130; // [rsp+97h] [rbp+17h] BYREF
  __int128 v131; // [rsp+98h] [rbp+18h] BYREF
  __int64 v132; // [rsp+A8h] [rbp+28h]
  _BYTE v133[24]; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v134; // [rsp+C8h] [rbp+48h]
  char v135; // [rsp+D7h] [rbp+57h]
  char v136; // [rsp+D8h] [rbp+58h]
  char v137; // [rsp+D9h] [rbp+59h]
  char v138; // [rsp+DAh] [rbp+5Ah]
  char v139; // [rsp+DBh] [rbp+5Bh]
  char v140; // [rsp+DCh] [rbp+5Ch]
  char v141; // [rsp+DDh] [rbp+5Dh]
  char v142; // [rsp+DEh] [rbp+5Eh]
  char v143; // [rsp+DFh] [rbp+5Fh]
  __m256i v144; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v145; // [rsp+100h] [rbp+80h]
  __int128 v146; // [rsp+108h] [rbp+88h] BYREF
  __int64 v147; // [rsp+118h] [rbp+98h]
  char v148; // [rsp+125h] [rbp+A5h]
  char v149; // [rsp+126h] [rbp+A6h]
  char v150; // [rsp+127h] [rbp+A7h]
  __m256i v151; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v152; // [rsp+148h] [rbp+C8h]

  v152 = -2;
  if ( !a3 )
  {
    *(_QWORD *)&v146 = 0;
    v147 = 0;
    nullsub_1(a1);
    v19 = (void *)sub_140001650(11, 1);
    if ( !v19 )
      sub_141938D2B(1, 11);
    qmemcpy(v19, "sample_rate", 11);
    *(_QWORD *)v133 = 11;
    *(_QWORD *)&v133[8] = v19;
    *(_QWORD *)&v133[16] = 11;
    v20 = *(unsigned int *)(a2 + 96);
    v151.m256i_i8[0] = 2;
    v151.m256i_i64[1] = 0;
    v151.m256i_i64[2] = v20;
    sub_140E72AA0(&v144, &v146, v133, &v151);
    if ( v144.m256i_i8[0] != -1 )
      sub_140409B40(&v144);
    nullsub_1(v21);
    v22 = sub_140001650(6, 1);
    if ( !v22 )
      sub_141938D2B(1, 6);
    *(_WORD *)(v22 + 4) = 29793;
    *(_DWORD *)v22 = 1836216166;
    *(_QWORD *)v133 = 6;
    *(_QWORD *)&v133[8] = v22;
    *(_QWORD *)&v133[16] = 6;
    nullsub_1(v23);
    v24 = sub_140001650(3, 1);
    v145 = v24;
    if ( !v24 )
      sub_141938D2B(1, 3);
    *(_BYTE *)(v24 + 2) = 109;
    *(_WORD *)v24 = 25456;
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = 3;
    v151.m256i_i64[2] = v24;
    v151.m256i_i64[3] = 3;
    sub_140E72AA0(&v144, &v146, v133, &v151);
    if ( v144.m256i_i8[0] != -1 )
      sub_140409B40(&v144);
    nullsub_1(v25);
    v26 = (void *)sub_140001650(26, 1);
    if ( !v26 )
      sub_141938D2B(1, 26);
    qmemcpy(v26, "disfluency_removal_enabled", 26);
    *(_QWORD *)v133 = 26;
    *(_QWORD *)&v133[8] = v26;
    *(_QWORD *)&v133[16] = 26;
    v151.m256i_i16[0] = 257;
    sub_140E72AA0(&v144, &v146, v133, &v151);
    if ( v144.m256i_i8[0] != -1 )
      sub_140409B40(&v144);
    nullsub_1(v27);
    v28 = sub_140001650(9, 1);
    if ( !v28 )
      sub_141938D2B(1, 9);
    *(_QWORD *)v28 = 0x6165627472616568LL;
    *(_BYTE *)(v28 + 8) = 116;
    *(_QWORD *)v133 = 9;
    *(_QWORD *)&v133[8] = v28;
    *(_QWORD *)&v133[16] = 9;
    v151.m256i_i16[0] = 1;
    sub_140E72AA0(&v144, &v146, v133, &v151);
    if ( v144.m256i_i8[0] != -1 )
      sub_140409B40(&v144);
    *(_OWORD *)&v133[8] = v146;
    v134 = v147;
    v133[0] = 5;
    v29 = sub_140DC09D0(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
    if ( v29 )
    {
      v31 = (_WORD *)v29;
      nullsub_1(v30);
      v32 = sub_140001650(32, 8);
      if ( !v32 )
        sub_141938D11(8, 32);
      v34 = v32;
      nullsub_1(v33);
      v35 = (_WORD *)sub_140001650(2, 1);
      if ( !v35 )
      {
        v145 = v34;
        sub_141938D2B(1, 2);
      }
      *v35 = *v31;
      *(_BYTE *)v34 = 3;
      *(_QWORD *)(v34 + 8) = 2;
      *(_QWORD *)(v34 + 16) = v35;
      *(_QWORD *)(v34 + 24) = 2;
      v151.m256i_i64[1] = 1;
      v151.m256i_i64[2] = v34;
      v151.m256i_i64[3] = 1;
      v151.m256i_i8[0] = 4;
      v143 = 1;
      v145 = sub_141641AF0(aLanguageHints, 14, v133);
      sub_140409B40(v145);
      v36 = *(_OWORD *)v151.m256i_i8;
      v37 = (_OWORD *)v145;
      *(_OWORD *)(v145 + 16) = *(_OWORD *)&v151.m256i_u64[2];
      *v37 = v36;
    }
    *(_QWORD *)&v125 = 0;
    v126 = 0;
    nullsub_1(v30);
    v38 = sub_140001650(6, 1);
    if ( !v38 )
      sub_141938D2B(1, 6);
    *(_WORD *)(v38 + 4) = 29285;
    *(_DWORD *)v38 = 1684104552;
    v127 = 6;
    v128 = v38;
    v129 = 6;
    *(_QWORD *)&v131 = 0;
    v132 = 0;
    nullsub_1(v39);
    v40 = sub_140001650(6, 1);
    if ( !v40 )
      sub_141938D2B(1, 6);
    *(_WORD *)(v40 + 4) = 28271;
    *(_DWORD *)v40 = 1769235297;
    *(_QWORD *)&v146 = 6;
    *((_QWORD *)&v146 + 1) = v40;
    v147 = 6;
    nullsub_1(v41);
    v42 = (_QWORD *)sub_140001650(8, 1);
    v145 = (__int64)v42;
    if ( !v42 )
      sub_141938D2B(1, 8);
    *v42 = 0x6B7361742D6E7572LL;
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = 8;
    v151.m256i_i64[2] = (__int64)v42;
    v151.m256i_i64[3] = 8;
    sub_140E72AA0(&v144, &v131, &v146, &v151);
    if ( v144.m256i_i8[0] != -1 )
      sub_140409B40(&v144);
    nullsub_1(v43);
    v44 = (_DWORD *)sub_140001650(7, 1);
    if ( !v44 )
      sub_141938D2B(1, 7);
    *(_DWORD *)((char *)v44 + 3) = 1684627307;
    *v44 = 1802723700;
    *(_QWORD *)&v146 = 7;
    *((_QWORD *)&v146 + 1) = v44;
    v147 = 7;
    if ( a5 < 0 )
    {
      v46 = 0;
      goto LABEL_37;
    }
    if ( a5 )
    {
      nullsub_1(v45);
      v46 = 1;
      v65 = (__m128i *)sub_140001650(a5, 1);
      if ( !v65 )
      {
LABEL_37:
        v142 = 1;
        sub_141938D2B(v46, a5);
      }
      v66 = (__int64)v65;
      sub_1418F44E0(v65, a4, a5);
    }
    else
    {
      v66 = 1;
    }
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = a5;
    v151.m256i_i64[2] = v66;
    v151.m256i_i64[3] = a5;
    v142 = 0;
    sub_140E72AA0(&v144, &v131, &v146, &v151);
    if ( v144.m256i_i8[0] != -1 )
      sub_140409B40(&v144);
    nullsub_1(v92);
    v93 = sub_140001650(9, 1);
    if ( !v93 )
      sub_141938D2B(1, 9);
    *(_QWORD *)v93 = 0x6E696D6165727473LL;
    *(_BYTE *)(v93 + 8) = 103;
    *(_QWORD *)&v146 = 9;
    *((_QWORD *)&v146 + 1) = v93;
    v147 = 9;
    nullsub_1(0x6E696D6165727473LL);
    v94 = sub_140001650(6, 1);
    v145 = v94;
    if ( !v94 )
      sub_141938D2B(1, 6);
    *(_WORD *)(v94 + 4) = 30821;
    *(_DWORD *)v94 = 1819309412;
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = 6;
    v151.m256i_i64[2] = v94;
    v151.m256i_i64[3] = 6;
    sub_140E72AA0(&v144, &v131, &v146, &v151);
    if ( v144.m256i_i8[0] != -1 )
      sub_140409B40(&v144);
    *(_OWORD *)&v151.m256i_u64[1] = v131;
    v151.m256i_i64[3] = v132;
    v151.m256i_i8[0] = 5;
    v141 = 0;
    sub_140E72AA0(&v144, &v125, &v127, &v151);
    if ( v144.m256i_i8[0] != -1 )
      sub_140409B40(&v144);
    nullsub_1(v95);
    v96 = (_DWORD *)sub_140001650(7, 1);
    if ( !v96 )
      sub_141938D2B(1, 7);
    *(_DWORD *)((char *)v96 + 3) = 1684107116;
    *v96 = 1819894128;
    v127 = 7;
    v128 = (__int64)v96;
    v129 = 7;
    *(_QWORD *)&v131 = 0;
    v132 = 0;
    nullsub_1(v97);
    v98 = (void *)sub_140001650(10, 1);
    if ( !v98 )
      sub_141938D2B(1, 10);
    qmemcpy(v98, "task_group", 10);
    *(_QWORD *)&v146 = 10;
    *((_QWORD *)&v146 + 1) = v98;
    v147 = 10;
    nullsub_1(0x6F72675F6B736174LL);
    v99 = sub_140001650(5, 1);
    v145 = v99;
    if ( !v99 )
      sub_141938D2B(1, 5);
    *(_BYTE *)(v99 + 4) = 111;
    *(_DWORD *)v99 = 1768191329;
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = 5;
    v151.m256i_i64[2] = v99;
    v151.m256i_i64[3] = 5;
    sub_140E72AA0(&v144, &v131, &v146, &v151);
    if ( v144.m256i_i8[0] != -1 )
      sub_140409B40(&v144);
    nullsub_1(v100);
    v101 = (_DWORD *)sub_140001650(4, 1);
    if ( !v101 )
      sub_141938D2B(1, 4);
    *v101 = 1802723700;
    *(_QWORD *)&v146 = 4;
    *((_QWORD *)&v146 + 1) = v101;
    v147 = 4;
    nullsub_1(v102);
    v103 = sub_140001650(3, 1);
    v145 = v103;
    if ( !v103 )
      sub_141938D2B(1, 3);
    *(_BYTE *)(v103 + 2) = 114;
    *(_WORD *)v103 = 29537;
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = 3;
    v151.m256i_i64[2] = v103;
    v151.m256i_i64[3] = 3;
    sub_140E72AA0(&v144, &v131, &v146, &v151);
    if ( v144.m256i_i8[0] != -1 )
      sub_140409B40(&v144);
    nullsub_1(v104);
    v105 = (_QWORD *)sub_140001650(8, 1);
    if ( !v105 )
      sub_141938D2B(1, 8);
    *v105 = 0x6E6F6974636E7566LL;
    *(_QWORD *)&v146 = 8;
    *((_QWORD *)&v146 + 1) = v105;
    v147 = 8;
    nullsub_1(0x6E6F6974636E7566LL);
    v106 = (void *)sub_140001650(11, 1);
    v145 = (__int64)v106;
    if ( !v106 )
      sub_141938D2B(1, 11);
    qmemcpy(v106, "recognition", 11);
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = 11;
    v151.m256i_i64[2] = (__int64)v106;
    v151.m256i_i64[3] = 11;
    sub_140E72AA0(&v144, &v131, &v146, &v151);
    if ( v144.m256i_i8[0] != -1 )
      sub_140409B40(&v144);
    nullsub_1(v107);
    v108 = sub_140001650(5, 1);
    if ( !v108 )
      sub_141938D2B(1, 5);
    *(_BYTE *)(v108 + 4) = 108;
    *(_DWORD *)v108 = 1701080941;
    *(_QWORD *)&v146 = 5;
    *((_QWORD *)&v146 + 1) = v108;
    v147 = 5;
    v109 = sub_140E91160(*(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64));
    v112 = v110;
    if ( v110 < 0 )
    {
      v113 = 0;
      goto LABEL_129;
    }
    if ( v110 )
    {
      v114 = (const __m128i *)v109;
      nullsub_1(v111);
      v113 = 1;
      v115 = (__m128i *)sub_140001650(v112, 1);
      if ( !v115 )
      {
LABEL_129:
        v140 = 1;
        sub_141938D2B(v113, v112);
      }
      v116 = (__int64)v115;
      sub_1418F44E0(v115, v114, v112);
    }
    else
    {
      v116 = 1;
    }
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = v112;
    v151.m256i_i64[2] = v116;
    v151.m256i_i64[3] = v112;
    v140 = 0;
    sub_140E72AA0(&v144, &v131, &v146, &v151);
    if ( v144.m256i_i8[0] != -1 )
      sub_140409B40(&v144);
    nullsub_1(v117);
    v118 = (void *)sub_140001650(10, 1);
    if ( !v118 )
      sub_141938D2B(1, 10);
    qmemcpy(v118, "parameters", 10);
    *(_QWORD *)&v146 = 10;
    *((_QWORD *)&v146 + 1) = v118;
    v147 = 10;
    v150 = 1;
    sub_140412420(&v151, v133);
    if ( v151.m256i_i8[0] == -1 )
    {
      v144.m256i_i64[0] = v151.m256i_i64[1];
      sub_141939040(
        (unsigned int)aCalledResultUn_6,
        43,
        (unsigned int)&v144,
        (unsigned int)&off_141A498A8,
        (__int64)&off_141A4E2E0);
    }
    v144 = v151;
    v150 = 0;
    sub_140E72AA0(&v151, &v131, &v146, &v144);
    if ( v151.m256i_i8[0] != -1 )
      sub_140409B40(&v151);
    nullsub_1(v119);
    v120 = sub_140001650(5, 1);
    if ( !v120 )
      sub_141938D2B(1, 5);
    *(_BYTE *)(v120 + 4) = 116;
    *(_DWORD *)v120 = 1970302569;
    *(_QWORD *)&v146 = 5;
    *((_QWORD *)&v146 + 1) = v120;
    v147 = 5;
    v151.m256i_i64[1] = 0;
    v151.m256i_i64[3] = 0;
    v151.m256i_i8[0] = 5;
    sub_140E72AA0(&v144, &v131, &v146, &v151);
    if ( v144.m256i_i8[0] != -1 )
      sub_140409B40(&v144);
    *(_OWORD *)&v151.m256i_u64[1] = v131;
    v151.m256i_i64[3] = v132;
    v151.m256i_i8[0] = 5;
    v139 = 0;
    sub_140E72AA0(&v144, &v125, &v127, &v151);
    if ( v144.m256i_i8[0] != -1 )
      sub_140409B40(&v144);
    *(_OWORD *)&v151.m256i_u64[1] = v125;
    v91 = v126;
LABEL_146:
    v151.m256i_i64[3] = v91;
    v151.m256i_i8[0] = 5;
    sub_140409B40(v133);
    goto LABEL_147;
  }
  if ( a3 == 1 )
  {
    *(_QWORD *)&v133[8] = 0;
    v134 = 0;
    v133[0] = 5;
    v7 = sub_140DC09D0(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
    if ( v7 )
    {
      v9 = (_WORD *)v7;
      nullsub_1(v8);
      v10 = (_WORD *)sub_140001650(2, 1);
      if ( !v10 )
        sub_141938D2B(1, 2);
      *v10 = *v9;
      v151.m256i_i8[0] = 3;
      v151.m256i_i64[1] = 2;
      v151.m256i_i64[2] = (__int64)v10;
      v151.m256i_i64[3] = 2;
      v138 = 1;
      v145 = sub_141641AF0(aLanguage, 8, v133);
      sub_140409B40(v145);
      v11 = *(_OWORD *)v151.m256i_i8;
      v12 = (_OWORD *)v145;
      *(_OWORD *)(v145 + 16) = *(_OWORD *)&v151.m256i_u64[2];
      *v12 = v11;
    }
    *(_QWORD *)&v123 = 0;
    v124 = 0;
    nullsub_1(v8);
    v13 = (_QWORD *)sub_140001650(8, 1);
    if ( !v13 )
      sub_141938D2B(1, 8);
    *v13 = 0x64695F746E657665LL;
    *(_QWORD *)&v131 = 8;
    v145 = (__int64)v13;
    *((_QWORD *)&v131 + 1) = v13;
    v132 = 8;
    v127 = (__int64)aSession;
    v128 = 7;
    sub_140DC11A0(&v144);
    v151.m256i_i64[0] = (__int64)&v127;
    v151.m256i_i64[1] = (__int64)sub_140186EE0;
    v151.m256i_i64[2] = (__int64)&v144;
    v151.m256i_i64[3] = (__int64)sub_1400015F0;
    sub_1416ABFD0(&v146, &unk_141A4E41A, &v151);
    if ( v144.m256i_i64[0] )
      sub_140001660(v144.m256i_i64[1], v144.m256i_i64[0], 1);
    v15 = *((const __m128i **)&v146 + 1);
    v16 = v147;
    v145 = *((_QWORD *)&v146 + 1);
    if ( v147 < 0 )
    {
      v17 = 0;
      goto LABEL_11;
    }
    if ( v147 )
    {
      nullsub_1(v14);
      v17 = 1;
      v63 = (__m128i *)sub_140001650(v16, 1);
      if ( !v63 )
      {
LABEL_11:
        v137 = 1;
        sub_141938D2B(v17, v16);
      }
      v64 = (__int64)v63;
      sub_1418F44E0(v63, v15, v16);
    }
    else
    {
      v64 = 1;
    }
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = v16;
    v151.m256i_i64[2] = v64;
    v151.m256i_i64[3] = v16;
    v137 = 0;
    sub_140E72AA0(&v144, &v123, &v131, &v151);
    if ( v144.m256i_i8[0] != -1 )
      sub_140409B40(&v144);
    if ( (_QWORD)v146 )
      sub_140001660(v145, v146, 1);
    nullsub_1(v67);
    v68 = (_DWORD *)sub_140001650(4, 1);
    if ( !v68 )
      sub_141938D2B(1, 4);
    *v68 = 1701869940;
    *(_QWORD *)&v146 = 4;
    *((_QWORD *)&v146 + 1) = v68;
    v147 = 4;
    nullsub_1(v69);
    v70 = (void *)sub_140001650(14, 1);
    v145 = (__int64)v70;
    if ( !v70 )
      sub_141938D2B(1, 14);
    qmemcpy(v70, "session.update", 14);
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = 14;
    v151.m256i_i64[2] = (__int64)v70;
    v151.m256i_i64[3] = 14;
    sub_140E72AA0(&v144, &v123, &v146, &v151);
    if ( v144.m256i_i8[0] != -1 )
      sub_140409B40(&v144);
    nullsub_1(v71);
    v72 = (_DWORD *)sub_140001650(7, 1);
    if ( !v72 )
      sub_141938D2B(1, 7);
    *(_DWORD *)((char *)v72 + 3) = 1852795251;
    *v72 = 1936942451;
    v122[0] = 7;
    v122[1] = v72;
    v122[2] = 7;
    *(_QWORD *)&v125 = 0;
    v126 = 0;
    nullsub_1(v73);
    v74 = (void *)sub_140001650(18, 1);
    if ( !v74 )
      sub_141938D2B(1, 18);
    qmemcpy(v74, "input_audio_format", 18);
    *(_QWORD *)&v146 = 18;
    *((_QWORD *)&v146 + 1) = v74;
    v147 = 18;
    nullsub_1(v75);
    v76 = sub_140001650(3, 1);
    v145 = v76;
    if ( !v76 )
      sub_141938D2B(1, 3);
    *(_BYTE *)(v76 + 2) = 109;
    *(_WORD *)v76 = 25456;
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = 3;
    v151.m256i_i64[2] = v76;
    v151.m256i_i64[3] = 3;
    sub_140E72AA0(&v144, &v125, &v146, &v151);
    if ( v144.m256i_i8[0] != -1 )
      sub_140409B40(&v144);
    nullsub_1(v77);
    v78 = (void *)sub_140001650(11, 1);
    if ( !v78 )
      sub_141938D2B(1, 11);
    qmemcpy(v78, "sample_rate", 11);
    *(_QWORD *)&v146 = 11;
    *((_QWORD *)&v146 + 1) = v78;
    v147 = 11;
    v79 = *(unsigned int *)(a2 + 96);
    v151.m256i_i8[0] = 2;
    v151.m256i_i64[1] = 0;
    v151.m256i_i64[2] = v79;
    sub_140E72AA0(&v144, &v125, &v146, &v151);
    if ( v144.m256i_i8[0] != -1 )
      sub_140409B40(&v144);
    nullsub_1(v80);
    v81 = (void *)sub_140001650(25, 1);
    if ( !v81 )
      sub_141938D2B(1, 25);
    qmemcpy(v81, "input_audio_transcription", 25);
    *(_QWORD *)&v146 = 25;
    *((_QWORD *)&v146 + 1) = v81;
    v147 = 25;
    v149 = 1;
    sub_140412420(&v151, v133);
    if ( v151.m256i_i8[0] == -1 )
    {
      v144.m256i_i64[0] = v151.m256i_i64[1];
      sub_141939040(
        (unsigned int)aCalledResultUn_6,
        43,
        (unsigned int)&v144,
        (unsigned int)&off_141A498A8,
        (__int64)&off_141A4E308);
    }
    v144 = v151;
    v149 = 0;
    sub_140E72AA0(&v151, &v125, &v146, &v144);
    if ( v151.m256i_i8[0] != -1 )
      sub_140409B40(&v151);
    nullsub_1(v82);
    v83 = (void *)sub_140001650(14, 1);
    if ( !v83 )
      sub_141938D2B(1, 14);
    qmemcpy(v83, "turn_detection", 14);
    v127 = 14;
    v128 = (__int64)v83;
    v129 = 14;
    *(_QWORD *)&v131 = 0;
    v132 = 0;
    nullsub_1(0x7465645F6E727574LL);
    v84 = (_DWORD *)sub_140001650(4, 1);
    if ( !v84 )
      sub_141938D2B(1, 4);
    *v84 = 1701869940;
    *(_QWORD *)&v146 = 4;
    *((_QWORD *)&v146 + 1) = v84;
    v147 = 4;
    nullsub_1(v85);
    v86 = (void *)sub_140001650(10, 1);
    v145 = (__int64)v86;
    if ( !v86 )
      sub_141938D2B(1, 10);
    qmemcpy(v86, "server_vad", 10);
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = 10;
    v151.m256i_i64[2] = (__int64)v86;
    v151.m256i_i64[3] = 10;
    sub_140E72AA0(&v144, &v131, &v146, &v151);
    if ( v144.m256i_i8[0] != -1 )
      sub_140409B40(&v144);
    nullsub_1(v87);
    v88 = sub_140001650(9, 1);
    if ( !v88 )
      sub_141938D2B(1, 9);
    *(_QWORD *)v88 = 0x6C6F687365726874LL;
    *(_BYTE *)(v88 + 8) = 100;
    *(_QWORD *)&v146 = 9;
    *((_QWORD *)&v146 + 1) = v88;
    v147 = 9;
    v148 = 1;
    sub_141643750(&v151);
    if ( v151.m256i_i8[0] == -1 )
    {
      v144.m256i_i64[0] = v151.m256i_i64[1];
      sub_141939040(
        (unsigned int)aCalledResultUn_6,
        43,
        (unsigned int)&v144,
        (unsigned int)&off_141A498A8,
        (__int64)&off_141A4E308);
    }
    v144 = v151;
    v148 = 0;
    sub_140E72AA0(&v151, &v131, &v146, &v144);
    if ( v151.m256i_i8[0] != -1 )
      sub_140409B40(&v151);
    nullsub_1(v89);
    v90 = (void *)sub_140001650(19, 1);
    if ( !v90 )
      sub_141938D2B(1, 19);
    qmemcpy(v90, "silence_duration_ms", 19);
    *(_QWORD *)&v146 = 19;
    *((_QWORD *)&v146 + 1) = v90;
    v147 = 19;
    v151.m256i_i8[0] = 2;
    v151.m256i_i64[1] = 0;
    v151.m256i_i64[2] = 600;
    sub_140E72AA0(&v144, &v131, &v146, &v151);
    if ( v144.m256i_i8[0] != -1 )
      sub_140409B40(&v144);
    *(_OWORD *)&v151.m256i_u64[1] = v131;
    v151.m256i_i64[3] = v132;
    v151.m256i_i8[0] = 5;
    v136 = 0;
    sub_140E72AA0(&v144, &v125, &v127, &v151);
    if ( v144.m256i_i8[0] != -1 )
      sub_140409B40(&v144);
    *(_OWORD *)&v151.m256i_u64[1] = v125;
    v151.m256i_i64[3] = v126;
    v151.m256i_i8[0] = 5;
    v135 = 0;
    sub_140E72AA0(&v144, &v123, v122, &v151);
    if ( v144.m256i_i8[0] != -1 )
      sub_140409B40(&v144);
    *(_OWORD *)&v151.m256i_u64[1] = v123;
    v91 = v124;
    goto LABEL_146;
  }
  *(_QWORD *)&v146 = 0;
  v147 = 0;
  nullsub_1(a1);
  v47 = (_DWORD *)sub_140001650(4, 1);
  if ( !v47 )
    sub_141938D2B(1, 4);
  *v47 = 1701080941;
  *(_QWORD *)v133 = 4;
  *(_QWORD *)&v133[8] = v47;
  *(_QWORD *)&v133[16] = 4;
  nullsub_1(v48);
  v49 = sub_140001650(5, 1);
  v145 = v49;
  if ( !v49 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v49 + 4) = 115;
  *(_DWORD *)v49 = 1935765554;
  v151.m256i_i8[0] = 3;
  v151.m256i_i64[1] = 5;
  v151.m256i_i64[2] = v49;
  v151.m256i_i64[3] = 5;
  sub_140E72AA0(&v144, &v146, v133, &v151);
  if ( v144.m256i_i8[0] != -1 )
    sub_140409B40(&v144);
  nullsub_1(v50);
  v51 = (void *)sub_140001650(10, 1);
  if ( !v51 )
    sub_141938D2B(1, 10);
  qmemcpy(v51, "chunk_size", 10);
  *(_QWORD *)v133 = 10;
  *(_QWORD *)&v133[8] = v51;
  *(_QWORD *)&v133[16] = 10;
  nullsub_1(0x69735F6B6E756863LL);
  v52 = sub_140001650(96, 8);
  v145 = v52;
  if ( !v52 )
    sub_141938D11(8, 96);
  *(_BYTE *)(v52 + 64) = 2;
  *(_QWORD *)(v52 + 72) = 0;
  *(_QWORD *)(v52 + 80) = 5;
  *(_BYTE *)v52 = 2;
  *(_QWORD *)(v52 + 8) = 0;
  *(_QWORD *)(v52 + 16) = 5;
  *(_BYTE *)(v52 + 32) = 2;
  *(_QWORD *)(v52 + 40) = 0;
  *(_QWORD *)(v52 + 48) = 10;
  v151.m256i_i64[1] = 3;
  v151.m256i_i64[2] = v52;
  v151.m256i_i64[3] = 3;
  v151.m256i_i8[0] = 4;
  sub_140E72AA0(&v144, &v146, v133, &v151);
  if ( v144.m256i_i8[0] != -1 )
    sub_140409B40(&v144);
  nullsub_1(v53);
  v54 = (_QWORD *)sub_140001650(8, 1);
  if ( !v54 )
    sub_141938D2B(1, 8);
  *v54 = 0x656D616E5F766177LL;
  *(_QWORD *)v133 = 8;
  *(_QWORD *)&v133[8] = v54;
  *(_QWORD *)&v133[16] = 8;
  nullsub_1(0x656D616E5F766177LL);
  v55 = sub_140001650(6, 1);
  v145 = v55;
  if ( !v55 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v55 + 4) = 26989;
  *(_DWORD *)v55 = 1634560353;
  v151.m256i_i8[0] = 3;
  v151.m256i_i64[1] = 6;
  v151.m256i_i64[2] = v55;
  v151.m256i_i64[3] = 6;
  sub_140E72AA0(&v144, &v146, v133, &v151);
  if ( v144.m256i_i8[0] != -1 )
    sub_140409B40(&v144);
  nullsub_1(v56);
  v57 = (void *)sub_140001650(11, 1);
  if ( !v57 )
    sub_141938D2B(1, 11);
  qmemcpy(v57, "is_speaking", 11);
  *(_QWORD *)v133 = 11;
  *(_QWORD *)&v133[8] = v57;
  *(_QWORD *)&v133[16] = 11;
  v151.m256i_i16[0] = 257;
  sub_140E72AA0(&v144, &v146, v133, &v151);
  if ( v144.m256i_i8[0] != -1 )
    sub_140409B40(&v144);
  nullsub_1(v58);
  v59 = (void *)sub_140001650(14, 1);
  if ( !v59 )
    sub_141938D2B(1, 14);
  qmemcpy(v59, "chunk_interval", 14);
  *(_QWORD *)v133 = 14;
  *(_QWORD *)&v133[8] = v59;
  *(_QWORD *)&v133[16] = 14;
  v151.m256i_i8[0] = 2;
  v151.m256i_i64[1] = 0;
  v151.m256i_i64[2] = 10;
  sub_140E72AA0(&v144, &v146, v133, &v151);
  if ( v144.m256i_i8[0] != -1 )
    sub_140409B40(&v144);
  nullsub_1(v60);
  v61 = (void *)sub_140001650(11, 1);
  if ( !v61 )
    sub_141938D2B(1, 11);
  qmemcpy(v61, "sample_rate", 11);
  *(_QWORD *)v133 = 11;
  *(_QWORD *)&v133[8] = v61;
  *(_QWORD *)&v133[16] = 11;
  v62 = *(unsigned int *)(a2 + 96);
  v151.m256i_i8[0] = 2;
  v151.m256i_i64[1] = 0;
  v151.m256i_i64[2] = v62;
  sub_140E72AA0(&v144, &v146, v133, &v151);
  if ( v144.m256i_i8[0] != -1 )
    sub_140409B40(&v144);
  *(_OWORD *)&v151.m256i_u64[1] = v146;
  v151.m256i_i64[3] = v147;
  v151.m256i_i8[0] = 5;
LABEL_147:
  *(_QWORD *)v133 = 0;
  *(_QWORD *)&v133[8] = 1;
  *(_QWORD *)&v133[16] = 0;
  v144.m256i_i64[2] = 1610612768;
  v144.m256i_i64[0] = (__int64)v133;
  v144.m256i_i64[1] = (__int64)&off_141A4F8C0;
  if ( (unsigned __int8)sub_141642FA0(&v151, &v144) )
    sub_141939040(
      (unsigned int)aADisplayImplem_8,
      55,
      (unsigned int)&v130,
      (unsigned int)&unk_141A49B48,
      (__int64)&off_141A4F978);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)&v133[16];
  *(_OWORD *)(a1 + 8) = *(_OWORD *)v133;
  *(_QWORD *)a1 = 0;
  sub_140409B40(&v151);
  return a1;
}
