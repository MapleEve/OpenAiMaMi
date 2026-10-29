// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x14024f9e0 | name sub_14024F9E0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
_QWORD *__fastcall sub_14024F9E0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  _QWORD *v3; // r12
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // r13
  __int128 v11; // kr10_16
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // r13
  __int64 v15; // rdi
  __int64 v16; // r14
  _QWORD *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 *v20; // rsi
  __int64 v21; // rsi
  __int64 v22; // r13
  __int64 v23; // rcx
  __int64 v24; // rsi
  const __m128i *v25; // r8
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // rsi
  __int64 v36; // rsi
  __int64 v37; // rsi
  _QWORD *v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rsi
  __int64 i; // rdi
  __int64 v44; // rsi
  __int64 j; // rdi
  _QWORD *v46; // rcx
  _QWORD *v47; // rsi
  _QWORD *v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r14
  unsigned __int64 v52; // rbx
  __int64 v53; // rdx
  _QWORD *result; // rax
  _QWORD *v55; // rsi
  __int128 v56; // kr110_16
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm2
  __int64 v60; // rax
  _QWORD *v61; // rsi
  unsigned __int64 v62; // rbx
  __int64 v63; // rdx
  _OWORD v64[6]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v65; // [rsp+90h] [rbp+10h]
  char v66; // [rsp+98h] [rbp+18h]
  _BYTE v67[7]; // [rsp+99h] [rbp+19h]
  __int64 v68; // [rsp+A0h] [rbp+20h]
  _QWORD *v69; // [rsp+A8h] [rbp+28h]
  __int64 v70; // [rsp+B0h] [rbp+30h]
  __int64 v71; // [rsp+B8h] [rbp+38h]
  _QWORD v72[3]; // [rsp+C0h] [rbp+40h] BYREF
  _QWORD v73[3]; // [rsp+D8h] [rbp+58h] BYREF
  __int128 v74; // [rsp+F0h] [rbp+70h]
  __int64 v75; // [rsp+100h] [rbp+80h]
  __int128 v76; // [rsp+110h] [rbp+90h]
  __int64 v77; // [rsp+120h] [rbp+A0h]
  __int128 v78; // [rsp+130h] [rbp+B0h]
  __int128 v79; // [rsp+140h] [rbp+C0h]
  __m256i v80; // [rsp+150h] [rbp+D0h]
  __int128 v81; // [rsp+170h] [rbp+F0h]
  __int128 v82; // [rsp+180h] [rbp+100h]
  __m256i v83; // [rsp+190h] [rbp+110h]
  _QWORD v84[3]; // [rsp+1B8h] [rbp+138h] BYREF
  __int128 v85; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v86; // [rsp+1E0h] [rbp+160h]
  __int64 v87; // [rsp+1E8h] [rbp+168h]
  __int64 v88; // [rsp+1F0h] [rbp+170h]
  __int64 v89; // [rsp+1F8h] [rbp+178h]
  _BYTE v90[48]; // [rsp+200h] [rbp+180h] BYREF
  __int128 v91; // [rsp+230h] [rbp+1B0h] BYREF
  __m256i v92; // [rsp+240h] [rbp+1C0h]
  _QWORD *v93; // [rsp+260h] [rbp+1E0h]
  __int64 v94; // [rsp+268h] [rbp+1E8h]
  __int64 v95; // [rsp+270h] [rbp+1F0h]
  __int128 v96; // [rsp+278h] [rbp+1F8h]
  __int64 v97; // [rsp+288h] [rbp+208h]
  __int64 v98; // [rsp+290h] [rbp+210h]
  __int64 v99; // [rsp+298h] [rbp+218h]
  __int128 v100; // [rsp+2A0h] [rbp+220h] BYREF
  __m256i v101; // [rsp+2B0h] [rbp+230h]
  __int64 v102; // [rsp+2D8h] [rbp+258h]
  __int64 v103; // [rsp+2E0h] [rbp+260h]
  __int64 v104; // [rsp+2E8h] [rbp+268h] BYREF
  __int64 v105; // [rsp+2F0h] [rbp+270h]
  __int64 v106; // [rsp+2F8h] [rbp+278h]
  __m128i v107; // [rsp+300h] [rbp+280h] BYREF
  __m256i v108; // [rsp+310h] [rbp+290h]
  __int128 v109; // [rsp+330h] [rbp+2B0h] BYREF
  __int128 v110; // [rsp+340h] [rbp+2C0h]
  __int128 v111; // [rsp+350h] [rbp+2D0h]
  __int64 v112; // [rsp+360h] [rbp+2E0h]
  __int64 v113; // [rsp+368h] [rbp+2E8h]
  __int64 v114; // [rsp+390h] [rbp+310h]
  __int64 v115; // [rsp+398h] [rbp+318h]
  __int64 v116; // [rsp+3A0h] [rbp+320h]
  _BYTE v117[24]; // [rsp+3A8h] [rbp+328h] BYREF
  _BYTE v118[72]; // [rsp+3C0h] [rbp+340h] BYREF
  _BYTE v119[104]; // [rsp+410h] [rbp+390h] BYREF
  __int128 v120; // [rsp+478h] [rbp+3F8h]
  __int64 v121; // [rsp+488h] [rbp+408h]
  __int64 v122; // [rsp+490h] [rbp+410h]
  __int64 v123; // [rsp+4C0h] [rbp+440h] BYREF
  __int64 v124; // [rsp+4C8h] [rbp+448h]
  __int64 v125; // [rsp+4D0h] [rbp+450h]
  __int64 v126; // [rsp+4D8h] [rbp+458h]
  const __m128i *v127; // [rsp+4E0h] [rbp+460h]
  __int64 v128; // [rsp+4E8h] [rbp+468h]
  __int128 v129; // [rsp+4F0h] [rbp+470h] BYREF
  __m256i v130; // [rsp+500h] [rbp+480h]
  __int64 v131; // [rsp+528h] [rbp+4A8h]
  __int64 v132; // [rsp+530h] [rbp+4B0h]
  __int64 v133; // [rsp+538h] [rbp+4B8h]
  __int128 v134; // [rsp+540h] [rbp+4C0h] BYREF
  __int128 v135; // [rsp+550h] [rbp+4D0h]
  __m256i v136; // [rsp+560h] [rbp+4E0h]
  __int64 v137; // [rsp+588h] [rbp+508h]
  __int64 v138; // [rsp+590h] [rbp+510h]
  __int64 v139; // [rsp+598h] [rbp+518h]
  __int64 v140; // [rsp+5A0h] [rbp+520h]

  v140 = -2;
  v103 = a1;
  v87 = a2;
  sub_1401B7010(v119, a2);
  v68 = *(_QWORD *)&v119[8];
  v96 = *(_OWORD *)v119;
  v70 = *(_QWORD *)v119;
  v102 = *(_QWORD *)&v119[8] + 32LL * *(_QWORD *)&v119[16];
  v71 = v102;
  v2 = 32LL * *(_QWORD *)&v119[16] - 32;
  v3 = (_QWORD *)(*(_QWORD *)&v119[8] + 40LL);
  v94 = 0;
  v4 = *(__int64 **)&v119[8];
  v95 = 0;
  while ( 1 )
  {
    if ( v4 == (__int64 *)v102 )
      goto LABEL_142;
    v69 = v4 + 4;
    v5 = *v4;
    if ( *v4 == -1 )
      break;
    v93 = v4 + 4;
    v116 = v5;
    v6 = v4[2];
    v126 = v4[1];
    sub_141695A00(v119, v126, v6);
    if ( *(_DWORD *)v119 == 2 )
    {
      if ( (v119[8] & 3u) - 2 >= 2 && (v119[8] & 3) != 0 )
      {
        --*(_QWORD *)&v119[8];
        v119[0] = 3;
        sub_1416BCB00(&v119[8]);
      }
      v7 = 0;
      v8 = 0;
      goto LABEL_31;
    }
    sub_140189230(v119, v126, v6, 32770);
    v10 = *(_QWORD *)&v119[8];
    v9 = *(_QWORD *)v119;
    v11 = *(_OWORD *)&v119[16];
    v134 = *(_OWORD *)&v119[32];
    v135 = *(_OWORD *)&v119[48];
    if ( (_BYTE)v120 == 0xFF )
    {
      *(_OWORD *)v118 = v134;
      *(_OWORD *)&v118[16] = v135;
LABEL_149:
      *(_QWORD *)v119 = v9;
      *(_QWORD *)&v119[8] = v10;
      *(_OWORD *)&v119[16] = v11;
      *(_OWORD *)&v119[32] = *(_OWORD *)v118;
      *(_OWORD *)&v119[48] = *(_OWORD *)&v118[16];
      *(_QWORD *)&v134 = v119;
      *((_QWORD *)&v134 + 1) = sub_141404740;
      sub_1416ABFD0(&v107, &unk_1419D720E, &v134);
      v7 = v107.m128i_i64[1];
      v8 = v107.m128i_i64[0];
      v139 = v108.m256i_i64[0];
      sub_140193AA0(v119);
      v19 = 10;
      goto LABEL_150;
    }
    v112 = *(_QWORD *)&v119[96];
    v111 = *(_OWORD *)&v119[80];
    v110 = *(_OWORD *)&v119[64];
    v113 = v120;
    v107 = *(__m128i *)v119;
    *(_OWORD *)v108.m256i_i8 = *(_OWORD *)&v119[16];
    v109 = v135;
    *(_OWORD *)&v108.m256i_u64[2] = v134;
    sub_141403910(v119, &v107, 5, 0);
    v9 = *(_QWORD *)v119;
    if ( *(_QWORD *)v119 != -1 )
    {
      v10 = *(_QWORD *)&v119[8];
      v56 = *(_OWORD *)&v119[16];
      *(_OWORD *)v118 = *(_OWORD *)&v119[32];
      *(_OWORD *)&v118[16] = *(_OWORD *)&v119[48];
      sub_1401923E0(&v107);
      v11 = v56;
      goto LABEL_149;
    }
    v10 = v107.m128i_i64[1];
    v9 = v107.m128i_i64[0];
    *(_OWORD *)v118 = *(_OWORD *)&v108.m256i_u64[2];
    *(_OWORD *)&v118[16] = v109;
    *(_OWORD *)&v118[32] = v110;
    *(_OWORD *)&v118[48] = v111;
    *(_QWORD *)&v118[64] = v112;
    *(_DWORD *)((char *)&v100 + 3) = HIDWORD(v113);
    LODWORD(v100) = *(_DWORD *)((char *)&v113 + 1);
    v11 = *(_OWORD *)v108.m256i_i8;
    if ( (_BYTE)v113 == 0xFF )
      goto LABEL_149;
    v65 = *(_QWORD *)&v118[64];
    v64[5] = *(_OWORD *)&v118[48];
    v64[4] = *(_OWORD *)&v118[32];
    v64[3] = *(_OWORD *)&v118[16];
    v64[2] = *(_OWORD *)v118;
    *(_DWORD *)&v67[3] = *(_DWORD *)((char *)&v100 + 3);
    *(_DWORD *)v67 = v100;
    v64[1] = *(_OWORD *)v108.m256i_i8;
    v64[0] = v107;
    v66 = v113;
    sub_1414039F0(&v107, v64, aPragmaWalCheck, 28);
    if ( v107.m128i_i64[0] != -1 )
    {
      *(_OWORD *)&v119[48] = v109;
      *(__m256i *)&v119[16] = v108;
      *(__m128i *)v119 = v107;
      *(_QWORD *)&v134 = v119;
      *((_QWORD *)&v134 + 1) = sub_141404740;
      sub_1416ABFD0(v118, &unk_1419D78E4, &v134);
      v7 = *(_QWORD *)&v118[8];
      v8 = *(_QWORD *)v118;
      v139 = *(_QWORD *)&v118[16];
      sub_140193AA0(v119);
      goto LABEL_29;
    }
    sub_1401C6270(v119, v64, aSelectDistinct, 125);
    if ( *(_DWORD *)v119 == 1 )
    {
      v109 = *(_OWORD *)&v119[56];
      v108 = *(__m256i *)&v119[24];
      v107 = *(__m128i *)&v119[8];
      *(_QWORD *)&v134 = &v107;
      *((_QWORD *)&v134 + 1) = sub_141404740;
      sub_1416ABFD0(&v129, &unk_1419DEBB0, &v134);
      v7 = *((_QWORD *)&v129 + 1);
      v8 = v129;
      v139 = v130.m256i_i64[0];
      sub_140193AA0(&v107);
      goto LABEL_29;
    }
    *(_OWORD *)&v118[48] = *(_OWORD *)&v119[56];
    *(_OWORD *)&v118[32] = *(_OWORD *)&v119[40];
    *(_OWORD *)&v118[16] = *(_OWORD *)&v119[24];
    *(_OWORD *)v118 = *(_OWORD *)&v119[8];
    v12 = sub_1417A9630(*(_QWORD *)&v119[64]);
    if ( v12 )
    {
      *(_OWORD *)v119 = 0x8000000000000013uLL;
      *(_QWORD *)&v119[16] = v12;
      *(_QWORD *)&v134 = v119;
      *((_QWORD *)&v134 + 1) = sub_141404740;
      sub_1416ABFD0(&v107, &unk_1419D748D, &v134);
      v7 = v107.m128i_i64[1];
      v8 = v107.m128i_i64[0];
      v139 = v108.m256i_i64[0];
      sub_140193AA0(v119);
LABEL_28:
      sub_140193C30(v118);
LABEL_29:
      v19 = 10;
LABEL_30:
      sub_1401923E0(v64);
      if ( v19 == -1 )
        goto LABEL_31;
LABEL_150:
      v57 = v81;
      v58 = v82;
      v59 = *(_OWORD *)v83.m256i_i8;
      v60 = v103;
      *(_OWORD *)(v103 + 80) = *(_OWORD *)&v83.m256i_u64[2];
      *(_OWORD *)(v60 + 64) = v59;
      *(_OWORD *)(v60 + 48) = v58;
      *(_OWORD *)(v60 + 32) = v57;
      *(_QWORD *)v60 = v19;
      *(_QWORD *)(v60 + 8) = v8;
      *(_QWORD *)(v60 + 16) = v7;
      *(_QWORD *)(v60 + 24) = v139;
      v61 = v93;
      if ( v116 )
        sub_140001660(v126, v116, 1);
      if ( (_QWORD *)v102 != v61 )
      {
        v62 = v2 >> 5;
        do
        {
          v63 = *(v3 - 1);
          if ( v63 )
            sub_140001660(*v3, v63, 1);
          v3 += 4;
          --v62;
        }
        while ( v62 );
      }
      if ( (_QWORD)v96 )
        sub_140001660(*((_QWORD *)&v96 + 1), 32 * v96, 8);
      return (_QWORD *)v103;
    }
    *(_QWORD *)v119 = -1;
    *(_QWORD *)&v134 = v119;
    *((_QWORD *)&v134 + 1) = v118;
    *(_QWORD *)&v135 = 0;
    sub_1403C9110(&v100, &v134);
    v13 = *(_QWORD *)v119;
    if ( *(_QWORD *)v119 != -1 )
    {
      v131 = *(_QWORD *)&v119[8];
      v14 = *(_QWORD *)&v119[24];
      v139 = *(_QWORD *)&v119[16];
      v107 = *(__m128i *)&v119[32];
      *(_OWORD *)v108.m256i_i8 = *(_OWORD *)&v119[48];
      v15 = *((_QWORD *)&v100 + 1);
      v16 = v101.m256i_i64[0];
      if ( v101.m256i_i64[0] )
      {
        v17 = (_QWORD *)(*((_QWORD *)&v100 + 1) + 8LL);
        do
        {
          v18 = *(v17 - 1);
          if ( v18 )
            sub_140001660(*v17, v18, 1);
          v17 += 3;
          --v16;
        }
        while ( v16 );
      }
      if ( (_QWORD)v100 )
        sub_140001660(v15, 24 * v100, 8);
      *(_OWORD *)&v119[48] = *(_OWORD *)v108.m256i_i8;
      *(__m128i *)&v119[32] = v107;
      *(_QWORD *)v119 = v13;
      *(_QWORD *)&v119[8] = v131;
      *(_QWORD *)&v119[16] = v139;
      *(_QWORD *)&v119[24] = v14;
      *(_QWORD *)&v100 = v119;
      *((_QWORD *)&v100 + 1) = sub_141404740;
      sub_1416ABFD0(&v134, &unk_1419D7473, &v100);
      v7 = *((_QWORD *)&v134 + 1);
      v8 = v134;
      v139 = v135;
      sub_140193AA0(v119);
      goto LABEL_28;
    }
    *(_QWORD *)v119 = *((_QWORD *)&v100 + 1);
    *(_QWORD *)&v119[8] = *((_QWORD *)&v100 + 1);
    *(_QWORD *)&v119[16] = v100;
    *(_QWORD *)&v119[24] = *((_QWORD *)&v100 + 1) + 24 * v101.m256i_i64[0];
    sub_1403ED440(&v107, v119);
    v8 = v107.m128i_i64[1];
    v21 = v107.m128i_i64[0];
    v22 = v108.m256i_i64[0];
    sub_140193C30(v118);
    v88 = v21;
    v84[0] = v21;
    v84[1] = v8;
    v84[2] = v22;
    v123 = 0;
    v124 = 8;
    v125 = 0;
    v97 = v22;
    v7 = v8 + 32 * v22;
    v131 = v7;
    v98 = v8;
    v23 = v8;
    while ( v23 != v131 )
    {
      v24 = v23;
      v25 = *(const __m128i **)(v23 + 16);
      v137 = *(_QWORD *)(v23 + 8);
      v127 = v25;
      sub_140282430(v119);
      if ( *(_QWORD *)&v119[32] == -1 )
      {
        v8 = *(_QWORD *)v119;
        v19 = 2;
        goto LABEL_109;
      }
      v23 = v24 + 32;
      if ( *(_DWORD *)&v119[32] != 2 )
      {
        v132 = v24 + 32;
        if ( *(_QWORD *)v119 )
          sub_140001660(*(_QWORD *)&v119[8], *(_QWORD *)v119, 1);
        sub_1402331D0((__int64)v119, v137, v127);
        v26 = *(_QWORD *)v119;
        if ( *(_QWORD *)v119 == -1 )
          goto LABEL_42;
        if ( *(_QWORD *)v119 == -2 )
        {
          v133 = *(_QWORD *)&v119[8];
          v7 = *(_QWORD *)&v119[24];
          v8 = *(_QWORD *)&v119[16];
          v139 = *(_QWORD *)&v119[32];
          v134 = *(_OWORD *)&v119[40];
          v135 = *(_OWORD *)&v119[56];
          v136 = *(__m256i *)&v119[72];
LABEL_42:
          v23 = v132;
          goto LABEL_98;
        }
        sub_1418F44E0(&v107, (const __m128i *)v119, 0x90u);
        sub_140232D30(v119, &v107, v137, v127);
        v27 = *(_QWORD *)v119;
        v129 = *(_OWORD *)&v119[32];
        v130 = *(__m256i *)&v119[48];
        v138 = *(_QWORD *)&v119[24];
        if ( *(_QWORD *)v119 == -1 )
        {
          *(_QWORD *)v118 = *(_QWORD *)&v119[8];
          v99 = *(_QWORD *)&v119[16];
          *(_OWORD *)&v118[8] = *(_OWORD *)&v119[16];
          *(__m256i *)&v118[40] = v130;
          *(_OWORD *)&v118[24] = v129;
          v28 = *(_QWORD *)&v119[8];
          nullsub_1(*(_QWORD *)&v119[24]);
          v29 = sub_140001650(144, 8);
          if ( !v29 )
            sub_141938D2B(8, 144);
          v104 = 2;
          v105 = v29;
          v106 = 0;
          *(_QWORD *)v90 = -1;
          *(_QWORD *)&v91 = -1;
          v89 = v28;
          if ( v28 != -1 && sub_14023B5A0(v99, v138) )
          {
            sub_140244EB0(v119, v107.m128i_i64[1], v108.m256i_i64[0], (const __m128i *)aOpenai_0, 6);
            v30 = *(_QWORD *)&v119[8];
            v31 = *(_QWORD *)&v119[24];
            v128 = *(_QWORD *)v119;
            if ( *(_QWORD *)v119 != -1 )
            {
              v139 = *(_QWORD *)&v119[16];
              v32 = *(_QWORD *)&v119[8];
              goto LABEL_56;
            }
            *(_QWORD *)v117 = *(_QWORD *)&v119[8];
            *(_OWORD *)&v117[8] = *(_OWORD *)&v119[16];
            v115 = *(_QWORD *)&v119[8];
            sub_1416AC440(&v129, &v107);
            v138 = v30;
            *(_OWORD *)&v130.m256i_u64[1] = *(_OWORD *)&v108.m256i_u64[1];
            v130.m256i_i16[12] = v108.m256i_i16[12];
            sub_1416AC440(&v85, v117);
            *(__m256i *)&v119[16] = v130;
            *(_OWORD *)v119 = v129;
            *(_QWORD *)&v119[64] = v86;
            *(_OWORD *)&v119[48] = v85;
            v33 = v138;
            v115 = v138;
            sub_1401F4B50(&v104, (__int128 *)v119);
            v115 = v33;
            sub_1416AC440(&v129, &v107);
            *(_QWORD *)&v119[40] = *(_QWORD *)&v117[16];
            *(_OWORD *)&v119[24] = *(_OWORD *)v117;
            *(_QWORD *)&v119[16] = v130.m256i_i64[0];
            *(_OWORD *)&v130.m256i_u64[2] = *(_OWORD *)&v119[32];
            v130.m256i_i64[1] = *(_QWORD *)v117;
            sub_140020E50(v90);
            *(__m256i *)&v90[16] = v130;
            *(_OWORD *)v90 = v129;
          }
          v34 = *((_QWORD *)&v110 + 1);
          if ( *((_QWORD *)&v110 + 1) != v108.m256i_i64[1]
            && *(_QWORD *)&v118[24] != -1
            && sub_14023B5A0(*(__int64 *)&v118[32], *(__int64 *)&v118[40]) )
          {
            sub_140244EB0(v119, *((__int64 *)&v109 + 1), v110, (const __m128i *)aOpenai_0, 6);
            v31 = *(_QWORD *)&v119[24];
            v128 = *(_QWORD *)v119;
            if ( *(_QWORD *)v119 != -1 )
            {
              v139 = *(_QWORD *)&v119[16];
              v32 = *(_QWORD *)&v119[8];
LABEL_56:
              v138 = v31;
              v136 = *(__m256i *)&v119[64];
              v135 = *(_OWORD *)&v119[48];
              v134 = *(_OWORD *)&v119[32];
              v35 = -2;
LABEL_62:
              if ( (_QWORD)v91 != -1 )
              {
                if ( (_QWORD)v91 )
                  sub_140001660(*((_QWORD *)&v91 + 1), v91, 1);
                if ( v92.m256i_i64[1] )
                  sub_140001660(v92.m256i_i64[2], v92.m256i_i64[1], 1);
              }
              if ( *(_QWORD *)v90 != -1 )
              {
                if ( *(_QWORD *)v90 )
                  sub_140001660(*(_QWORD *)&v90[8], *(_QWORD *)v90, 1);
                if ( *(_QWORD *)&v90[24] )
                  sub_140001660(*(_QWORD *)&v90[32], *(_QWORD *)&v90[24], 1);
              }
              v137 = v35;
              v37 = v106;
              if ( v106 )
              {
                v38 = (_QWORD *)(v105 + 56);
                do
                {
                  v39 = *(v38 - 7);
                  if ( v39 )
                    sub_140001660(*(v38 - 6), v39, 1);
                  v40 = *(v38 - 1);
                  if ( v40 )
                    sub_140001660(*v38, v40, 1);
                  v38 += 9;
                  --v37;
                }
                while ( v37 );
              }
              if ( v104 )
                sub_140001660(v105, 72 * v104, 8);
              v8 = v32;
              if ( (unsigned __int64)(v89 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                sub_140001660(v99, v89, 1);
              if ( *(_QWORD *)&v118[24] != -1 && *(_QWORD *)&v118[24] )
                sub_140001660(*(_QWORD *)&v118[32], *(_QWORD *)&v118[24], 1);
              if ( *(_QWORD *)&v118[48] != -1 && *(_QWORD *)&v118[48] )
                sub_140001660(*(_QWORD *)&v118[56], *(_QWORD *)&v118[48], 1);
              v7 = v139;
              v27 = v128;
              goto LABEL_90;
            }
            *(_QWORD *)v117 = *(_QWORD *)&v119[8];
            *(_OWORD *)&v117[8] = *(_OWORD *)&v119[16];
            v138 = *(_QWORD *)&v119[8];
            v114 = *(_QWORD *)&v119[8];
            sub_1416AC440(&v129, &v109);
            v130.m256i_i64[1] = v34;
            v130.m256i_i64[2] = v111;
            v130.m256i_i16[12] = WORD4(v111);
            sub_1416AC440(&v85, v117);
            *(__m256i *)&v119[16] = v130;
            *(_OWORD *)v119 = v129;
            *(_QWORD *)&v119[64] = v86;
            *(_OWORD *)&v119[48] = v85;
            v36 = v138;
            v114 = v138;
            sub_1401F4B50(&v104, (__int128 *)v119);
            v114 = v36;
            sub_1416AC440(v119, &v109);
            v101.m256i_i64[3] = *(_QWORD *)&v117[16];
            *(_OWORD *)&v101.m256i_u64[1] = *(_OWORD *)v117;
            v100 = *(_OWORD *)v119;
            v101.m256i_i64[0] = *(_QWORD *)&v119[16];
            sub_140020E50(&v91);
            v92 = v101;
            v91 = v100;
          }
          if ( v106 )
          {
            sub_14026A400((unsigned int)v119, v137, (_DWORD)v127, v105, v106, 0);
            if ( *(_QWORD *)v119 == -1 )
            {
              sub_141681D30(v119, v137, v127);
              v139 = *(_QWORD *)v90;
              v134 = *(_OWORD *)&v90[8];
              v135 = *(_OWORD *)&v90[24];
              v136.m256i_i64[0] = *(_QWORD *)&v90[40];
              v133 = *(_QWORD *)&v119[8];
              v26 = *(_QWORD *)v119;
              v7 = *(_QWORD *)&v119[24];
              v8 = *(_QWORD *)&v119[16];
              v136.m256i_i64[3] = v92.m256i_i64[0];
              *(_OWORD *)&v136.m256i_u64[1] = v91;
              v76 = *(_OWORD *)&v92.m256i_u64[1];
              v77 = v92.m256i_i64[3];
              sub_1401917C0(&v104);
              sub_140196250(v118);
              sub_140196190(&v107);
              goto LABEL_42;
            }
            v32 = *(_QWORD *)&v119[8];
            v128 = *(_QWORD *)v119;
            v138 = *(_QWORD *)&v119[24];
            v139 = *(_QWORD *)&v119[16];
            v134 = *(_OWORD *)&v119[32];
            v135 = *(_OWORD *)&v119[48];
            v136 = *(__m256i *)&v119[64];
            v35 = -2;
          }
          else
          {
            v35 = -1;
            v138 = v139;
            v139 = v7;
            v32 = v8;
            v128 = v133;
          }
          goto LABEL_62;
        }
        v8 = *(_QWORD *)&v119[8];
        v7 = *(_QWORD *)&v119[16];
        *(_OWORD *)&v136.m256i_u64[2] = *(_OWORD *)&v119[80];
        v134 = v129;
        v135 = *(_OWORD *)v130.m256i_i8;
        *(_OWORD *)v136.m256i_i8 = *(_OWORD *)&v130.m256i_u64[2];
        v137 = -2;
LABEL_90:
        if ( v107.m128i_i64[0] )
          sub_140001660(v107.m128i_i64[1], v107.m128i_i64[0], 1);
        if ( (_QWORD)v109 )
          sub_140001660(*((_QWORD *)&v109 + 1), v109, 1);
        if ( v112 != -1 && v112 )
          sub_140001660(v113, v112, 1);
        v139 = v138;
        v133 = v27;
        v23 = v132;
        v26 = v137;
LABEL_98:
        if ( v26 == -2 )
        {
          v19 = v133;
LABEL_109:
          v80 = v136;
          v79 = v135;
          v78 = v134;
          v81 = v134;
          v82 = v135;
          v83 = v136;
LABEL_120:
          v46 = (_QWORD *)v124;
          v137 = v125;
          v127 = (const __m128i *)v124;
          v131 = 0;
          while ( v137 != v131 )
          {
            ++v131;
            v47 = v46 + 22;
            sub_140196740(v46);
            v46 = v47;
          }
          if ( v123 )
            sub_140001660(v124, 176 * v123, 8);
          if ( v97 )
          {
            v48 = (_QWORD *)(v98 + 8);
            v49 = v97;
            do
            {
              v50 = *(v48 - 1);
              if ( v50 )
              {
                v51 = v49;
                sub_140001660(*v48, v50, 1);
                v49 = v51;
              }
              v48 += 4;
              --v49;
            }
            while ( v49 );
          }
          if ( v88 )
            sub_140001660(v98, 32 * v88, 8);
          goto LABEL_30;
        }
        v80 = v136;
        v79 = v135;
        v78 = v134;
        v74 = v76;
        v75 = v77;
        if ( v26 != -1 )
        {
          *(_QWORD *)v119 = v26;
          *(_QWORD *)&v119[8] = v133;
          *(_QWORD *)&v119[16] = v8;
          *(_QWORD *)&v119[24] = v7;
          *(_QWORD *)&v119[32] = v139;
          *(__m256i *)&v119[72] = v80;
          *(_OWORD *)&v119[56] = v79;
          *(_OWORD *)&v119[40] = v78;
          v121 = v75;
          v120 = v74;
          v122 = -1;
          v41 = v125;
          if ( v125 == v123 )
            sub_14190FFF0(&v123);
          sub_1418F44E0((__m128i *)(v124 + 176 * v41), (const __m128i *)v119, 0xB0u);
          v125 = v41 + 1;
          v23 = v132;
        }
      }
    }
    *(_QWORD *)&v100 = aAimai1_0;
    *((_QWORD *)&v100 + 1) = 6;
    *(_QWORD *)v118 = &off_1419DE160;
    *(_QWORD *)&v118[8] = &unk_1419D4100;
    *(_QWORD *)&v118[16] = &v100;
    *(_QWORD *)&v118[24] = &unk_1419D4100;
    *(_QWORD *)&v118[32] = &off_1419DE8E0;
    *(_QWORD *)&v118[40] = &unk_1419D4100;
    sub_1401895D0((unsigned int)&v107, (unsigned int)v64, (unsigned int)aUpdateThreadsS_2, 146, (__int64)v118, 3);
    if ( v107.m128i_i64[0] != -1 )
    {
      *(_OWORD *)&v119[48] = v109;
      *(__m256i *)&v119[16] = v108;
      *(__m128i *)v119 = v107;
      v42 = v124;
      for ( i = v124 + 176 * v125; v42 != i; sub_140247960(i) )
        i -= 176;
      *(_QWORD *)&v134 = v119;
      *((_QWORD *)&v134 + 1) = sub_141404740;
      sub_1416ABFD0(v73, &unk_1419E0297, &v134);
      v8 = v73[0];
      v7 = v73[1];
      v139 = v73[2];
      sub_140193AA0(v119);
      v19 = 10;
      goto LABEL_120;
    }
    v8 = v107.m128i_i64[1];
    sub_1414039F0(v119, v64, aPragmaWalCheck_0, 32);
    if ( *(_QWORD *)v119 != -1 )
      sub_140193AA0(v119);
    sub_1402397A0(v119, v64);
    if ( *(_QWORD *)v119 != -1 )
    {
      v139 = *(_QWORD *)&v119[24];
      v7 = *(_QWORD *)&v119[16];
      v81 = *(_OWORD *)&v119[32];
      v82 = *(_OWORD *)&v119[48];
      v83 = *(__m256i *)&v119[64];
      v8 = *(_QWORD *)&v119[8];
      v19 = *(_QWORD *)v119;
      goto LABEL_120;
    }
    *(_QWORD *)&v129 = *(_QWORD *)&v119[8];
    if ( *(_QWORD *)&v119[8] )
    {
      v44 = v124;
      for ( j = v124 + 176 * v125; v44 != j; sub_140247960(j) )
        j -= 176;
      v107.m128i_i64[0] = v126;
      v107.m128i_i64[1] = v6;
      *(_QWORD *)v119 = &v107;
      *(_QWORD *)&v119[8] = sub_14169F630;
      *(_QWORD *)&v119[16] = &v129;
      *(_QWORD *)&v119[24] = sub_1416BCB10;
      sub_1416ABFD0(v72, &unk_1419E024A, v119);
      v8 = v72[0];
      v7 = v72[1];
      v19 = 10;
      v139 = v72[2];
      goto LABEL_120;
    }
    v7 = v125;
    *(_QWORD *)&v134 = v8;
    *((_QWORD *)&v134 + 1) = v125;
    if ( v8 | v125 && *(_QWORD *)off_1421E6EC0 >= 3u )
    {
      *(_QWORD *)v118 = v126;
      *(_QWORD *)&v118[8] = v6;
      *(_QWORD *)v119 = v118;
      *(_QWORD *)&v119[8] = sub_14169F630;
      *(_QWORD *)&v119[16] = &v134;
      *(_QWORD *)&v119[24] = sub_1416BCB10;
      *(_QWORD *)&v119[32] = (char *)&v134 + 8;
      *(_QWORD *)&v119[40] = sub_1416BCB10;
      v107.m128i_i64[0] = (__int64)aCodexmateLibCo_0;
      v107.m128i_i64[1] = 51;
      v108.m256i_i64[0] = (__int64)aCodexmateLibCo_0;
      v108.m256i_i64[1] = 51;
      v108.m256i_i64[2] = (__int64)&off_1419E0220;
      sub_140BAD520(&unk_1419E01CB, v119, 3, &v107);
      v7 = *((_QWORD *)&v134 + 1);
      v8 = v134;
    }
    sub_140191080(&v123);
    sub_140025860(v84);
    sub_1401923E0(v64);
LABEL_31:
    v20 = v93;
    if ( v116 )
      sub_140001660(v126, v116, 1);
    v94 += v7;
    v95 += v8;
    v2 -= 32LL;
    v3 += 4;
    v4 = v20;
  }
  if ( (__int64 *)v102 != v4 + 4 )
  {
    v52 = v2 >> 5;
    do
    {
      v53 = *(v3 - 1);
      if ( v53 )
        sub_140001660(*v3, v53, 1);
      v3 += 4;
      --v52;
    }
    while ( v52 );
  }
LABEL_142:
  if ( (_QWORD)v96 )
    sub_140001660(*((_QWORD *)&v96 + 1), 32 * v96, 8);
  v107.m128i_i64[0] = sub_14023F0B0(v87);
  result = (_QWORD *)v103;
  if ( v107.m128i_i64[0] )
  {
    *(_QWORD *)v119 = &v107;
    *(_QWORD *)&v119[8] = sub_1416BCB10;
    v55 = (_QWORD *)v103;
    sub_1416ABFD0(v103 + 8, &unk_1419DFA5F, v119);
    *v55 = 10;
    return v55;
  }
  else
  {
    *(_QWORD *)(v103 + 8) = v95;
    result[2] = v94;
    *result = -1;
  }
  return result;
}
