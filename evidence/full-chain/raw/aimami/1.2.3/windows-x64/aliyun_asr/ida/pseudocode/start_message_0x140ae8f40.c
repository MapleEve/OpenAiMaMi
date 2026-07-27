// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x140ae8f40
// name: start_message
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::voice::aliyun_asr::start_message | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall start_message(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rcx
  _WORD *v8; // rbx
  _WORD *v9; // rax
  __int128 v10; // xmm0
  _OWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r12
  __int64 v15; // rbx
  __int64 v16; // r15
  void *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  void *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  _WORD *v29; // r14
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r15
  _WORD *v33; // rax
  __int128 v34; // xmm0
  _OWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rcx
  _DWORD *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r12
  _DWORD *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  void *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  void *v55; // rax
  __int64 v56; // rcx
  void *v57; // rax
  __int64 v58; // rcx
  void *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // r14
  __int64 v63; // rax
  __int64 v64; // r15
  __int64 v65; // rcx
  _DWORD *v66; // rax
  __int64 v67; // rcx
  void *v68; // rax
  __int64 v69; // rcx
  _DWORD *v70; // rax
  __int64 v71; // rcx
  void *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rcx
  void *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rcx
  void *v79; // rax
  __int64 v80; // rcx
  void *v81; // rax
  _DWORD *v82; // rax
  __int64 v83; // rcx
  void *v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rcx
  void *v88; // rax
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rcx
  _DWORD *v94; // rax
  __int64 v95; // rcx
  void *v96; // rax
  __int64 v97; // rax
  __int64 v98; // rcx
  _DWORD *v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rcx
  _QWORD *v103; // rax
  void *v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rdi
  __int64 v113; // r15
  __int64 v114; // r14
  __int64 v115; // rax
  __int64 v116; // rbx
  __int64 v117; // rcx
  void *v118; // rax
  __int64 v119; // rcx
  __int64 v120; // rax
  _QWORD v122[3]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v123; // [rsp+40h] [rbp-40h] BYREF
  __int64 v124; // [rsp+50h] [rbp-30h]
  __int128 v125; // [rsp+58h] [rbp-28h] BYREF
  __int64 v126; // [rsp+68h] [rbp-18h]
  __int64 v127; // [rsp+70h] [rbp-10h] BYREF
  __int64 v128; // [rsp+78h] [rbp-8h]
  __int64 v129; // [rsp+80h] [rbp+0h]
  char v130; // [rsp+8Fh] [rbp+Fh] BYREF
  __int128 v131; // [rsp+90h] [rbp+10h] BYREF
  __int64 v132; // [rsp+A0h] [rbp+20h]
  _BYTE v133[24]; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v134; // [rsp+C0h] [rbp+40h]
  char v135; // [rsp+C8h] [rbp+48h]
  char v136; // [rsp+C9h] [rbp+49h]
  char v137; // [rsp+CAh] [rbp+4Ah]
  char v138; // [rsp+CBh] [rbp+4Bh]
  char v139; // [rsp+CCh] [rbp+4Ch]
  char v140; // [rsp+CDh] [rbp+4Dh]
  char v141; // [rsp+CEh] [rbp+4Eh]
  char v142; // [rsp+CFh] [rbp+4Fh]
  __m256i v143; // [rsp+D0h] [rbp+50h] BYREF
  char v144; // [rsp+FFh] [rbp+7Fh]
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
    v18 = (void *)sub_140001650(11, 1);
    if ( !v18 )
      sub_1416C2D4B(1, 11);
    qmemcpy(v18, "sample_rate", 11);
    *(_QWORD *)v133 = 11;
    *(_QWORD *)&v133[8] = v18;
    *(_QWORD *)&v133[16] = 11;
    v19 = *(unsigned int *)(a2 + 96);
    v151.m256i_i8[0] = 2;
    v151.m256i_i64[1] = 0;
    v151.m256i_i64[2] = v19;
    sub_140307860(&v143, &v146, v133, &v151);
    if ( v143.m256i_i8[0] != -1 )
      sub_1400104F0(&v143);
    nullsub_1(v20);
    v21 = sub_140001650(6, 1);
    if ( !v21 )
      sub_1416C2D4B(1, 6);
    *(_WORD *)(v21 + 4) = 29793;
    *(_DWORD *)v21 = 1836216166;
    *(_QWORD *)v133 = 6;
    *(_QWORD *)&v133[8] = v21;
    *(_QWORD *)&v133[16] = 6;
    nullsub_1(v22);
    v23 = sub_140001650(3, 1);
    v145 = v23;
    if ( !v23 )
      sub_1416C2D4B(1, 3);
    *(_BYTE *)(v23 + 2) = 109;
    *(_WORD *)v23 = 25456;
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = 3;
    v151.m256i_i64[2] = v23;
    v151.m256i_i64[3] = 3;
    sub_140307860(&v143, &v146, v133, &v151);
    if ( v143.m256i_i8[0] != -1 )
      sub_1400104F0(&v143);
    nullsub_1(v24);
    v25 = (void *)sub_140001650(26, 1);
    if ( !v25 )
      sub_1416C2D4B(1, 26);
    qmemcpy(v25, "disfluency_removal_enabled", 26);
    *(_QWORD *)v133 = 26;
    *(_QWORD *)&v133[8] = v25;
    *(_QWORD *)&v133[16] = 26;
    v151.m256i_i16[0] = 257;
    sub_140307860(&v143, &v146, v133, &v151);
    if ( v143.m256i_i8[0] != -1 )
      sub_1400104F0(&v143);
    nullsub_1(v26);
    v27 = sub_140001650(9, 1);
    if ( !v27 )
      sub_1416C2D4B(1, 9);
    *(_QWORD *)v27 = 0x6165627472616568LL;
    *(_BYTE *)(v27 + 8) = 116;
    *(_QWORD *)v133 = 9;
    *(_QWORD *)&v133[8] = v27;
    *(_QWORD *)&v133[16] = 9;
    v151.m256i_i16[0] = 1;
    sub_140307860(&v143, &v146, v133, &v151);
    if ( v143.m256i_i8[0] != -1 )
      sub_1400104F0(&v143);
    *(_OWORD *)&v133[8] = v146;
    v134 = v147;
    v133[0] = 5;
    v29 = (_WORD *)sub_140AEC3F0(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
    if ( v29 )
    {
      nullsub_1(v28);
      v30 = sub_140001650(32, 8);
      if ( !v30 )
        sub_1416C2D31(8, 32);
      v32 = v30;
      nullsub_1(v31);
      v33 = (_WORD *)sub_140001650(2, 1);
      if ( !v33 )
      {
        v145 = v32;
        sub_1416C2D4B(1, 2);
      }
      *v33 = *v29;
      *(_BYTE *)v32 = 3;
      *(_QWORD *)(v32 + 8) = 2;
      *(_QWORD *)(v32 + 16) = v33;
      *(_QWORD *)(v32 + 24) = 2;
      v151.m256i_i64[1] = 1;
      v151.m256i_i64[2] = v32;
      v151.m256i_i64[3] = 1;
      v151.m256i_i8[0] = 4;
      v142 = 1;
      v145 = sub_141433E50(aLanguageHints, 14, v133);
      sub_1400104F0(v145);
      v34 = *(_OWORD *)v151.m256i_i8;
      v35 = (_OWORD *)v145;
      *(_OWORD *)(v145 + 16) = *(_OWORD *)&v151.m256i_u64[2];
      *v35 = v34;
    }
    *(_QWORD *)&v125 = 0;
    v126 = 0;
    nullsub_1(v28);
    v36 = sub_140001650(6, 1);
    if ( !v36 )
      sub_1416C2D4B(1, 6);
    *(_WORD *)(v36 + 4) = 29285;
    *(_DWORD *)v36 = 1684104552;
    v127 = 6;
    v128 = v36;
    v129 = 6;
    *(_QWORD *)&v131 = 0;
    v132 = 0;
    nullsub_1(v37);
    v38 = sub_140001650(6, 1);
    if ( !v38 )
      sub_1416C2D4B(1, 6);
    *(_WORD *)(v38 + 4) = 28271;
    *(_DWORD *)v38 = 1769235297;
    *(_QWORD *)&v146 = 6;
    *((_QWORD *)&v146 + 1) = v38;
    v147 = 6;
    nullsub_1(v39);
    v40 = (_QWORD *)sub_140001650(8, 1);
    v145 = (__int64)v40;
    if ( !v40 )
      sub_1416C2D4B(1, 8);
    *v40 = 0x6B7361742D6E7572LL;
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = 8;
    v151.m256i_i64[2] = (__int64)v40;
    v151.m256i_i64[3] = 8;
    sub_140307860(&v143, &v131, &v146, &v151);
    if ( v143.m256i_i8[0] != -1 )
      sub_1400104F0(&v143);
    nullsub_1(v41);
    v42 = (_DWORD *)sub_140001650(7, 1);
    if ( !v42 )
      sub_1416C2D4B(1, 7);
    *(_DWORD *)((char *)v42 + 3) = 1684627307;
    *v42 = 1802723700;
    *(_QWORD *)&v146 = 7;
    *((_QWORD *)&v146 + 1) = v42;
    v147 = 7;
    if ( a5 < 0 )
    {
      v44 = 0;
      goto LABEL_37;
    }
    if ( a5 )
    {
      nullsub_1(v43);
      v44 = 1;
      v63 = sub_140001650(a5, 1);
      if ( !v63 )
      {
LABEL_37:
        v141 = 1;
        sub_1416C2D4B(v44, a5);
      }
      v64 = v63;
      sub_141684120(v63, a4, a5);
    }
    else
    {
      v64 = 1;
    }
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = a5;
    v151.m256i_i64[2] = v64;
    v151.m256i_i64[3] = a5;
    v141 = 0;
    sub_140307860(&v143, &v131, &v146, &v151);
    if ( v143.m256i_i8[0] != -1 )
      sub_1400104F0(&v143);
    nullsub_1(v90);
    v91 = sub_140001650(9, 1);
    if ( !v91 )
      sub_1416C2D4B(1, 9);
    *(_QWORD *)v91 = 0x6E696D6165727473LL;
    *(_BYTE *)(v91 + 8) = 103;
    *(_QWORD *)&v146 = 9;
    *((_QWORD *)&v146 + 1) = v91;
    v147 = 9;
    nullsub_1(0x6E696D6165727473LL);
    v92 = sub_140001650(6, 1);
    v145 = v92;
    if ( !v92 )
      sub_1416C2D4B(1, 6);
    *(_WORD *)(v92 + 4) = 30821;
    *(_DWORD *)v92 = 1819309412;
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = 6;
    v151.m256i_i64[2] = v92;
    v151.m256i_i64[3] = 6;
    sub_140307860(&v143, &v131, &v146, &v151);
    if ( v143.m256i_i8[0] != -1 )
      sub_1400104F0(&v143);
    *(_OWORD *)&v151.m256i_u64[1] = v131;
    v151.m256i_i64[3] = v132;
    v151.m256i_i8[0] = 5;
    v140 = 0;
    sub_140307860(&v143, &v125, &v127, &v151);
    if ( v143.m256i_i8[0] != -1 )
      sub_1400104F0(&v143);
    nullsub_1(v93);
    v94 = (_DWORD *)sub_140001650(7, 1);
    if ( !v94 )
      sub_1416C2D4B(1, 7);
    *(_DWORD *)((char *)v94 + 3) = 1684107116;
    *v94 = 1819894128;
    v127 = 7;
    v128 = (__int64)v94;
    v129 = 7;
    *(_QWORD *)&v131 = 0;
    v132 = 0;
    nullsub_1(v95);
    v96 = (void *)sub_140001650(10, 1);
    if ( !v96 )
      sub_1416C2D4B(1, 10);
    qmemcpy(v96, "task_group", 10);
    *(_QWORD *)&v146 = 10;
    *((_QWORD *)&v146 + 1) = v96;
    v147 = 10;
    nullsub_1(0x6F72675F6B736174LL);
    v97 = sub_140001650(5, 1);
    v145 = v97;
    if ( !v97 )
      sub_1416C2D4B(1, 5);
    *(_BYTE *)(v97 + 4) = 111;
    *(_DWORD *)v97 = 1768191329;
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = 5;
    v151.m256i_i64[2] = v97;
    v151.m256i_i64[3] = 5;
    sub_140307860(&v143, &v131, &v146, &v151);
    if ( v143.m256i_i8[0] != -1 )
      sub_1400104F0(&v143);
    nullsub_1(v98);
    v99 = (_DWORD *)sub_140001650(4, 1);
    if ( !v99 )
      sub_1416C2D4B(1, 4);
    *v99 = 1802723700;
    *(_QWORD *)&v146 = 4;
    *((_QWORD *)&v146 + 1) = v99;
    v147 = 4;
    nullsub_1(v100);
    v101 = sub_140001650(3, 1);
    v145 = v101;
    if ( !v101 )
      sub_1416C2D4B(1, 3);
    *(_BYTE *)(v101 + 2) = 114;
    *(_WORD *)v101 = 29537;
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = 3;
    v151.m256i_i64[2] = v101;
    v151.m256i_i64[3] = 3;
    sub_140307860(&v143, &v131, &v146, &v151);
    if ( v143.m256i_i8[0] != -1 )
      sub_1400104F0(&v143);
    nullsub_1(v102);
    v103 = (_QWORD *)sub_140001650(8, 1);
    if ( !v103 )
      sub_1416C2D4B(1, 8);
    *v103 = 0x6E6F6974636E7566LL;
    *(_QWORD *)&v146 = 8;
    *((_QWORD *)&v146 + 1) = v103;
    v147 = 8;
    nullsub_1(0x6E6F6974636E7566LL);
    v104 = (void *)sub_140001650(11, 1);
    v145 = (__int64)v104;
    if ( !v104 )
      sub_1416C2D4B(1, 11);
    qmemcpy(v104, "recognition", 11);
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = 11;
    v151.m256i_i64[2] = (__int64)v104;
    v151.m256i_i64[3] = 11;
    sub_140307860(&v143, &v131, &v146, &v151);
    if ( v143.m256i_i8[0] != -1 )
      sub_1400104F0(&v143);
    nullsub_1(v105);
    v106 = sub_140001650(5, 1);
    if ( !v106 )
      sub_1416C2D4B(1, 5);
    *(_BYTE *)(v106 + 4) = 108;
    *(_DWORD *)v106 = 1701080941;
    *(_QWORD *)&v146 = 5;
    *((_QWORD *)&v146 + 1) = v106;
    v147 = 5;
    v107 = *(_QWORD *)(a2 + 56);
    v108 = *(_QWORD *)(a2 + 64);
    v144 = 1;
    v109 = sub_14033BC10(v107, v108);
    v112 = v110;
    if ( v110 < 0 )
    {
      v113 = 0;
      goto LABEL_129;
    }
    if ( v110 )
    {
      v114 = v109;
      nullsub_1(v111);
      v113 = 1;
      v115 = sub_140001650(v112, 1);
      if ( !v115 )
      {
LABEL_129:
        v144 = 1;
        sub_1416C2D4B(v113, v112);
      }
      v116 = v115;
      sub_141684120(v115, v114, v112);
    }
    else
    {
      v116 = 1;
    }
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = v112;
    v151.m256i_i64[2] = v116;
    v151.m256i_i64[3] = v112;
    v144 = 0;
    sub_140307860(&v143, &v131, &v146, &v151);
    if ( v143.m256i_i8[0] != -1 )
      sub_1400104F0(&v143);
    nullsub_1(v117);
    v118 = (void *)sub_140001650(10, 1);
    if ( !v118 )
      sub_1416C2D4B(1, 10);
    qmemcpy(v118, "parameters", 10);
    *(_QWORD *)&v146 = 10;
    *((_QWORD *)&v146 + 1) = v118;
    v147 = 10;
    v150 = 1;
    sub_140B842D0(&v151, v133);
    if ( v151.m256i_i8[0] == -1 )
    {
      v143.m256i_i64[0] = v151.m256i_i64[1];
      sub_1416C3060(
        (unsigned int)aCalledResultUn_12,
        43,
        (unsigned int)&v143,
        (unsigned int)&off_1417AEA50,
        (__int64)&off_1417B0970);
    }
    v143 = v151;
    v150 = 0;
    sub_140307860(&v151, &v131, &v146, &v143);
    if ( v151.m256i_i8[0] != -1 )
      sub_1400104F0(&v151);
    nullsub_1(v119);
    v120 = sub_140001650(5, 1);
    if ( !v120 )
      sub_1416C2D4B(1, 5);
    *(_BYTE *)(v120 + 4) = 116;
    *(_DWORD *)v120 = 1970302569;
    *(_QWORD *)&v146 = 5;
    *((_QWORD *)&v146 + 1) = v120;
    v147 = 5;
    v151.m256i_i64[1] = 0;
    v151.m256i_i64[3] = 0;
    v151.m256i_i8[0] = 5;
    sub_140307860(&v143, &v131, &v146, &v151);
    if ( v143.m256i_i8[0] != -1 )
      sub_1400104F0(&v143);
    *(_OWORD *)&v151.m256i_u64[1] = v131;
    v151.m256i_i64[3] = v132;
    v151.m256i_i8[0] = 5;
    v139 = 0;
    sub_140307860(&v143, &v125, &v127, &v151);
    if ( v143.m256i_i8[0] != -1 )
      sub_1400104F0(&v143);
    *(_OWORD *)&v151.m256i_u64[1] = v125;
    v89 = v126;
LABEL_146:
    v151.m256i_i64[3] = v89;
    v151.m256i_i8[0] = 5;
    sub_1400104F0(v133);
    goto LABEL_147;
  }
  if ( a3 == 1 )
  {
    *(_QWORD *)&v133[8] = 0;
    v134 = 0;
    v133[0] = 5;
    v8 = (_WORD *)sub_140AEC3F0(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
    if ( v8 )
    {
      nullsub_1(v7);
      v9 = (_WORD *)sub_140001650(2, 1);
      if ( !v9 )
        sub_1416C2D4B(1, 2);
      *v9 = *v8;
      v151.m256i_i8[0] = 3;
      v151.m256i_i64[1] = 2;
      v151.m256i_i64[2] = (__int64)v9;
      v151.m256i_i64[3] = 2;
      v138 = 1;
      v145 = sub_141433E50(aLanguage, 8, v133);
      sub_1400104F0(v145);
      v10 = *(_OWORD *)v151.m256i_i8;
      v11 = (_OWORD *)v145;
      *(_OWORD *)(v145 + 16) = *(_OWORD *)&v151.m256i_u64[2];
      *v11 = v10;
    }
    *(_QWORD *)&v123 = 0;
    v124 = 0;
    nullsub_1(v7);
    v12 = (_QWORD *)sub_140001650(8, 1);
    if ( !v12 )
      sub_1416C2D4B(1, 8);
    *v12 = 0x64695F746E657665LL;
    *(_QWORD *)&v131 = 8;
    v145 = (__int64)v12;
    *((_QWORD *)&v131 + 1) = v12;
    v132 = 8;
    v127 = (__int64)aSession;
    v128 = 7;
    sub_140AECBC0(&v143);
    v151.m256i_i64[0] = (__int64)&v127;
    v151.m256i_i64[1] = (__int64)sub_14041F680;
    v151.m256i_i64[2] = (__int64)&v143;
    v151.m256i_i64[3] = (__int64)sub_1400015F0;
    sub_14149C0F0(&v146, &unk_1417B0AAF, &v151);
    if ( v143.m256i_i64[0] )
      sub_140001660(v143.m256i_i64[1], v143.m256i_i64[0], 1);
    v14 = *((_QWORD *)&v146 + 1);
    v15 = v147;
    v145 = *((_QWORD *)&v146 + 1);
    if ( v147 < 0 )
    {
      v16 = 0;
      goto LABEL_11;
    }
    if ( v147 )
    {
      nullsub_1(v13);
      v16 = 1;
      v61 = sub_140001650(v15, 1);
      if ( !v61 )
      {
LABEL_11:
        v137 = 1;
        sub_1416C2D4B(v16, v15);
      }
      v62 = v61;
      sub_141684120(v61, v14, v15);
    }
    else
    {
      v62 = 1;
    }
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = v15;
    v151.m256i_i64[2] = v62;
    v151.m256i_i64[3] = v15;
    v137 = 0;
    sub_140307860(&v143, &v123, &v131, &v151);
    if ( v143.m256i_i8[0] != -1 )
      sub_1400104F0(&v143);
    if ( (_QWORD)v146 )
      sub_140001660(v145, v146, 1);
    nullsub_1(v65);
    v66 = (_DWORD *)sub_140001650(4, 1);
    if ( !v66 )
      sub_1416C2D4B(1, 4);
    *v66 = 1701869940;
    *(_QWORD *)&v146 = 4;
    *((_QWORD *)&v146 + 1) = v66;
    v147 = 4;
    nullsub_1(v67);
    v68 = (void *)sub_140001650(14, 1);
    v145 = (__int64)v68;
    if ( !v68 )
      sub_1416C2D4B(1, 14);
    qmemcpy(v68, "session.update", 14);
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = 14;
    v151.m256i_i64[2] = (__int64)v68;
    v151.m256i_i64[3] = 14;
    sub_140307860(&v143, &v123, &v146, &v151);
    if ( v143.m256i_i8[0] != -1 )
      sub_1400104F0(&v143);
    nullsub_1(v69);
    v70 = (_DWORD *)sub_140001650(7, 1);
    if ( !v70 )
      sub_1416C2D4B(1, 7);
    *(_DWORD *)((char *)v70 + 3) = 1852795251;
    *v70 = 1936942451;
    v122[0] = 7;
    v122[1] = v70;
    v122[2] = 7;
    *(_QWORD *)&v125 = 0;
    v126 = 0;
    nullsub_1(v71);
    v72 = (void *)sub_140001650(18, 1);
    if ( !v72 )
      sub_1416C2D4B(1, 18);
    qmemcpy(v72, "input_audio_format", 18);
    *(_QWORD *)&v146 = 18;
    *((_QWORD *)&v146 + 1) = v72;
    v147 = 18;
    nullsub_1(v73);
    v74 = sub_140001650(3, 1);
    v145 = v74;
    if ( !v74 )
      sub_1416C2D4B(1, 3);
    *(_BYTE *)(v74 + 2) = 109;
    *(_WORD *)v74 = 25456;
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = 3;
    v151.m256i_i64[2] = v74;
    v151.m256i_i64[3] = 3;
    sub_140307860(&v143, &v125, &v146, &v151);
    if ( v143.m256i_i8[0] != -1 )
      sub_1400104F0(&v143);
    nullsub_1(v75);
    v76 = (void *)sub_140001650(11, 1);
    if ( !v76 )
      sub_1416C2D4B(1, 11);
    qmemcpy(v76, "sample_rate", 11);
    *(_QWORD *)&v146 = 11;
    *((_QWORD *)&v146 + 1) = v76;
    v147 = 11;
    v77 = *(unsigned int *)(a2 + 96);
    v151.m256i_i8[0] = 2;
    v151.m256i_i64[1] = 0;
    v151.m256i_i64[2] = v77;
    sub_140307860(&v143, &v125, &v146, &v151);
    if ( v143.m256i_i8[0] != -1 )
      sub_1400104F0(&v143);
    nullsub_1(v78);
    v79 = (void *)sub_140001650(25, 1);
    if ( !v79 )
      sub_1416C2D4B(1, 25);
    qmemcpy(v79, "input_audio_transcription", 25);
    *(_QWORD *)&v146 = 25;
    *((_QWORD *)&v146 + 1) = v79;
    v147 = 25;
    v149 = 1;
    sub_140B842D0(&v151, v133);
    if ( v151.m256i_i8[0] == -1 )
    {
      v143.m256i_i64[0] = v151.m256i_i64[1];
      sub_1416C3060(
        (unsigned int)aCalledResultUn_12,
        43,
        (unsigned int)&v143,
        (unsigned int)&off_1417AEA50,
        (__int64)&off_1417B0998);
    }
    v143 = v151;
    v149 = 0;
    sub_140307860(&v151, &v125, &v146, &v143);
    if ( v151.m256i_i8[0] != -1 )
      sub_1400104F0(&v151);
    nullsub_1(v80);
    v81 = (void *)sub_140001650(14, 1);
    if ( !v81 )
      sub_1416C2D4B(1, 14);
    qmemcpy(v81, "turn_detection", 14);
    v127 = 14;
    v128 = (__int64)v81;
    v129 = 14;
    *(_QWORD *)&v131 = 0;
    v132 = 0;
    nullsub_1(0x7465645F6E727574LL);
    v82 = (_DWORD *)sub_140001650(4, 1);
    if ( !v82 )
      sub_1416C2D4B(1, 4);
    *v82 = 1701869940;
    *(_QWORD *)&v146 = 4;
    *((_QWORD *)&v146 + 1) = v82;
    v147 = 4;
    nullsub_1(v83);
    v84 = (void *)sub_140001650(10, 1);
    v145 = (__int64)v84;
    if ( !v84 )
      sub_1416C2D4B(1, 10);
    qmemcpy(v84, "server_vad", 10);
    v151.m256i_i8[0] = 3;
    v151.m256i_i64[1] = 10;
    v151.m256i_i64[2] = (__int64)v84;
    v151.m256i_i64[3] = 10;
    sub_140307860(&v143, &v131, &v146, &v151);
    if ( v143.m256i_i8[0] != -1 )
      sub_1400104F0(&v143);
    nullsub_1(v85);
    v86 = sub_140001650(9, 1);
    if ( !v86 )
      sub_1416C2D4B(1, 9);
    *(_QWORD *)v86 = 0x6C6F687365726874LL;
    *(_BYTE *)(v86 + 8) = 100;
    *(_QWORD *)&v146 = 9;
    *((_QWORD *)&v146 + 1) = v86;
    v147 = 9;
    v148 = 1;
    sub_14142F790(&v151);
    if ( v151.m256i_i8[0] == -1 )
    {
      v143.m256i_i64[0] = v151.m256i_i64[1];
      sub_1416C3060(
        (unsigned int)aCalledResultUn_12,
        43,
        (unsigned int)&v143,
        (unsigned int)&off_1417AEA50,
        (__int64)&off_1417B0998);
    }
    v143 = v151;
    v148 = 0;
    sub_140307860(&v151, &v131, &v146, &v143);
    if ( v151.m256i_i8[0] != -1 )
      sub_1400104F0(&v151);
    nullsub_1(v87);
    v88 = (void *)sub_140001650(19, 1);
    if ( !v88 )
      sub_1416C2D4B(1, 19);
    qmemcpy(v88, "silence_duration_ms", 19);
    *(_QWORD *)&v146 = 19;
    *((_QWORD *)&v146 + 1) = v88;
    v147 = 19;
    v151.m256i_i8[0] = 2;
    v151.m256i_i64[1] = 0;
    v151.m256i_i64[2] = 600;
    sub_140307860(&v143, &v131, &v146, &v151);
    if ( v143.m256i_i8[0] != -1 )
      sub_1400104F0(&v143);
    *(_OWORD *)&v151.m256i_u64[1] = v131;
    v151.m256i_i64[3] = v132;
    v151.m256i_i8[0] = 5;
    v136 = 0;
    sub_140307860(&v143, &v125, &v127, &v151);
    if ( v143.m256i_i8[0] != -1 )
      sub_1400104F0(&v143);
    *(_OWORD *)&v151.m256i_u64[1] = v125;
    v151.m256i_i64[3] = v126;
    v151.m256i_i8[0] = 5;
    v135 = 0;
    sub_140307860(&v143, &v123, v122, &v151);
    if ( v143.m256i_i8[0] != -1 )
      sub_1400104F0(&v143);
    *(_OWORD *)&v151.m256i_u64[1] = v123;
    v89 = v124;
    goto LABEL_146;
  }
  *(_QWORD *)&v146 = 0;
  v147 = 0;
  nullsub_1(a1);
  v45 = (_DWORD *)sub_140001650(4, 1);
  if ( !v45 )
    sub_1416C2D4B(1, 4);
  *v45 = 1701080941;
  *(_QWORD *)v133 = 4;
  *(_QWORD *)&v133[8] = v45;
  *(_QWORD *)&v133[16] = 4;
  nullsub_1(v46);
  v47 = sub_140001650(5, 1);
  v145 = v47;
  if ( !v47 )
    sub_1416C2D4B(1, 5);
  *(_BYTE *)(v47 + 4) = 115;
  *(_DWORD *)v47 = 1935765554;
  v151.m256i_i8[0] = 3;
  v151.m256i_i64[1] = 5;
  v151.m256i_i64[2] = v47;
  v151.m256i_i64[3] = 5;
  sub_140307860(&v143, &v146, v133, &v151);
  if ( v143.m256i_i8[0] != -1 )
    sub_1400104F0(&v143);
  nullsub_1(v48);
  v49 = (void *)sub_140001650(10, 1);
  if ( !v49 )
    sub_1416C2D4B(1, 10);
  qmemcpy(v49, "chunk_size", 10);
  *(_QWORD *)v133 = 10;
  *(_QWORD *)&v133[8] = v49;
  *(_QWORD *)&v133[16] = 10;
  nullsub_1(0x69735F6B6E756863LL);
  v50 = sub_140001650(96, 8);
  v145 = v50;
  if ( !v50 )
    sub_1416C2D31(8, 96);
  *(_BYTE *)(v50 + 64) = 2;
  *(_QWORD *)(v50 + 72) = 0;
  *(_QWORD *)(v50 + 80) = 5;
  *(_BYTE *)v50 = 2;
  *(_QWORD *)(v50 + 8) = 0;
  *(_QWORD *)(v50 + 16) = 5;
  *(_BYTE *)(v50 + 32) = 2;
  *(_QWORD *)(v50 + 40) = 0;
  *(_QWORD *)(v50 + 48) = 10;
  v151.m256i_i64[1] = 3;
  v151.m256i_i64[2] = v50;
  v151.m256i_i64[3] = 3;
  v151.m256i_i8[0] = 4;
  sub_140307860(&v143, &v146, v133, &v151);
  if ( v143.m256i_i8[0] != -1 )
    sub_1400104F0(&v143);
  nullsub_1(v51);
  v52 = (_QWORD *)sub_140001650(8, 1);
  if ( !v52 )
    sub_1416C2D4B(1, 8);
  *v52 = 0x656D616E5F766177LL;
  *(_QWORD *)v133 = 8;
  *(_QWORD *)&v133[8] = v52;
  *(_QWORD *)&v133[16] = 8;
  nullsub_1(0x656D616E5F766177LL);
  v53 = sub_140001650(6, 1);
  v145 = v53;
  if ( !v53 )
    sub_1416C2D4B(1, 6);
  *(_WORD *)(v53 + 4) = 26989;
  *(_DWORD *)v53 = 1634560353;
  v151.m256i_i8[0] = 3;
  v151.m256i_i64[1] = 6;
  v151.m256i_i64[2] = v53;
  v151.m256i_i64[3] = 6;
  sub_140307860(&v143, &v146, v133, &v151);
  if ( v143.m256i_i8[0] != -1 )
    sub_1400104F0(&v143);
  nullsub_1(v54);
  v55 = (void *)sub_140001650(11, 1);
  if ( !v55 )
    sub_1416C2D4B(1, 11);
  qmemcpy(v55, "is_speaking", 11);
  *(_QWORD *)v133 = 11;
  *(_QWORD *)&v133[8] = v55;
  *(_QWORD *)&v133[16] = 11;
  v151.m256i_i16[0] = 257;
  sub_140307860(&v143, &v146, v133, &v151);
  if ( v143.m256i_i8[0] != -1 )
    sub_1400104F0(&v143);
  nullsub_1(v56);
  v57 = (void *)sub_140001650(14, 1);
  if ( !v57 )
    sub_1416C2D4B(1, 14);
  qmemcpy(v57, "chunk_interval", 14);
  *(_QWORD *)v133 = 14;
  *(_QWORD *)&v133[8] = v57;
  *(_QWORD *)&v133[16] = 14;
  v151.m256i_i8[0] = 2;
  v151.m256i_i64[1] = 0;
  v151.m256i_i64[2] = 10;
  sub_140307860(&v143, &v146, v133, &v151);
  if ( v143.m256i_i8[0] != -1 )
    sub_1400104F0(&v143);
  nullsub_1(v58);
  v59 = (void *)sub_140001650(11, 1);
  if ( !v59 )
    sub_1416C2D4B(1, 11);
  qmemcpy(v59, "sample_rate", 11);
  *(_QWORD *)v133 = 11;
  *(_QWORD *)&v133[8] = v59;
  *(_QWORD *)&v133[16] = 11;
  v60 = *(unsigned int *)(a2 + 96);
  v151.m256i_i8[0] = 2;
  v151.m256i_i64[1] = 0;
  v151.m256i_i64[2] = v60;
  sub_140307860(&v143, &v146, v133, &v151);
  if ( v143.m256i_i8[0] != -1 )
    sub_1400104F0(&v143);
  *(_OWORD *)&v151.m256i_u64[1] = v146;
  v151.m256i_i64[3] = v147;
  v151.m256i_i8[0] = 5;
LABEL_147:
  *(_QWORD *)v133 = 0;
  *(_QWORD *)&v133[8] = 1;
  *(_QWORD *)&v133[16] = 0;
  v143.m256i_i64[2] = 1610612768;
  v143.m256i_i64[0] = (__int64)v133;
  v143.m256i_i64[1] = (__int64)&off_1417B1268;
  if ( (unsigned __int8)sub_14142EA10(&v151, &v143) )
    sub_1416C3060(
      (unsigned int)aADisplayImplem_9,
      55,
      (unsigned int)&v130,
      (unsigned int)&unk_1417AEA70,
      (__int64)&off_1417B1320);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)&v133[16];
  *(_OWORD *)(a1 + 8) = *(_OWORD *)v133;
  *(_QWORD *)a1 = 0;
  sub_1400104F0(&v151);
  return a1;
}