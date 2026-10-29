// win 1.2.7 | module src/core/sessions/detail.rs | ea 0x140f75cb0 | name sub_140F75CB0
// win 1.2.7 | module src/core/sessions/detail.rs | attributed via panic-Location xref (win-native)
__int128 *__fastcall sub_140F75CB0(__int128 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  int v5; // r15d
  __int64 v8; // r15
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // kr00_16
  __int64 v16; // r15
  __int128 v17; // kr10_16
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  signed __int64 v21; // rdx
  __int64 v22; // rcx
  signed __int64 v23; // r13
  const __m128i *v24; // r15
  __int64 v25; // r12
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int64 v29; // rcx
  __int64 v30; // rax
  __m128i *v31; // rax
  __int128 v32; // kr20_16
  __int64 v33; // rdx
  __int64 v34; // rax
  char v35; // bl
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  __int64 v39; // rax
  __int128 v41; // kr30_16
  __int64 v42; // r8
  __int64 v43; // r14
  unsigned __int64 v44; // r15
  __int128 v45; // rax
  __int64 v46; // rcx
  char v47; // r12
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r14
  int v53; // r8d
  char v54; // al
  int v55; // ecx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r14
  _BYTE *v59; // r14
  int v60; // edi
  int v61; // r8d
  __int64 v62; // rcx
  char v63; // al
  __int128 v64; // xmm1
  unsigned __int8 v65; // r14
  unsigned __int64 v66; // r15
  int v67; // r8d
  char v68; // al
  int v69; // ecx
  __int64 v70; // r8
  __int64 v71[2]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v72; // [rsp+38h] [rbp-48h]
  __int128 v73; // [rsp+40h] [rbp-40h] BYREF
  __int64 v74; // [rsp+50h] [rbp-30h]
  _BYTE v75[104]; // [rsp+60h] [rbp-20h] BYREF
  __m128i v76; // [rsp+C8h] [rbp+48h]
  __int128 v77; // [rsp+D8h] [rbp+58h]
  __int128 v78; // [rsp+E8h] [rbp+68h]
  __int128 v79; // [rsp+F8h] [rbp+78h]
  __int64 v80; // [rsp+108h] [rbp+88h]
  __int64 v81; // [rsp+118h] [rbp+98h] BYREF
  __int64 v82; // [rsp+120h] [rbp+A0h]
  _BYTE v83[24]; // [rsp+128h] [rbp+A8h] BYREF
  _BYTE v84[80]; // [rsp+140h] [rbp+C0h]
  __m128i v85; // [rsp+190h] [rbp+110h] BYREF
  __int64 v86; // [rsp+1A8h] [rbp+128h]
  __int64 v87; // [rsp+1B0h] [rbp+130h]
  __int64 v88; // [rsp+1C0h] [rbp+140h]
  __int64 v89; // [rsp+1C8h] [rbp+148h]
  __int64 v90; // [rsp+1D8h] [rbp+158h]
  __int64 v91; // [rsp+1E0h] [rbp+160h]
  __int64 v92; // [rsp+1F0h] [rbp+170h]
  __int64 v93; // [rsp+1F8h] [rbp+178h]
  __int64 v94; // [rsp+208h] [rbp+188h]
  __int64 v95; // [rsp+210h] [rbp+190h]
  _BYTE v96[80]; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v97; // [rsp+270h] [rbp+1F0h]
  __int64 v98; // [rsp+278h] [rbp+1F8h]
  __int64 v99; // [rsp+288h] [rbp+208h]
  __int64 v100; // [rsp+290h] [rbp+210h]
  __int64 v101; // [rsp+2A0h] [rbp+220h]
  __int64 v102; // [rsp+2A8h] [rbp+228h]
  __int64 v103; // [rsp+2B8h] [rbp+238h]
  __int64 v104; // [rsp+2C0h] [rbp+240h]
  __int64 v105; // [rsp+2D0h] [rbp+250h]
  __int64 v106; // [rsp+2D8h] [rbp+258h]
  __int64 v107; // [rsp+2E8h] [rbp+268h]
  __int64 v108; // [rsp+2F0h] [rbp+270h]
  __int64 v109; // [rsp+300h] [rbp+280h]
  __int64 v110; // [rsp+308h] [rbp+288h]
  __int64 v111; // [rsp+318h] [rbp+298h]
  __int64 v112; // [rsp+320h] [rbp+2A0h]
  char v113; // [rsp+33Fh] [rbp+2BFh]
  _BYTE v114[104]; // [rsp+340h] [rbp+2C0h] BYREF
  __m128i v115; // [rsp+3A8h] [rbp+328h] BYREF
  __int128 v116; // [rsp+3B8h] [rbp+338h]
  __int128 v117; // [rsp+3C8h] [rbp+348h]
  __int128 v118; // [rsp+3D8h] [rbp+358h]
  __int64 v119; // [rsp+3E8h] [rbp+368h]
  __int64 v120; // [rsp+3F8h] [rbp+378h]
  __int64 v121; // [rsp+400h] [rbp+380h]
  __int64 v122; // [rsp+410h] [rbp+390h]
  __int64 v123; // [rsp+418h] [rbp+398h]
  __int64 v124; // [rsp+428h] [rbp+3A8h]
  __int64 v125; // [rsp+430h] [rbp+3B0h]
  __int64 v126; // [rsp+440h] [rbp+3C0h]
  __int64 v127; // [rsp+448h] [rbp+3C8h]
  __int64 v128; // [rsp+450h] [rbp+3D0h]
  unsigned __int64 v129; // [rsp+458h] [rbp+3D8h]
  __int64 v130; // [rsp+460h] [rbp+3E0h]
  _BYTE v131[128]; // [rsp+470h] [rbp+3F0h] BYREF
  __int128 v132; // [rsp+4F0h] [rbp+470h] BYREF
  __int128 v133; // [rsp+500h] [rbp+480h]
  __int128 v134; // [rsp+510h] [rbp+490h]
  __int128 v135; // [rsp+520h] [rbp+4A0h]
  __int128 v136; // [rsp+530h] [rbp+4B0h]
  __int128 v137; // [rsp+540h] [rbp+4C0h]
  __int128 v138; // [rsp+550h] [rbp+4D0h] BYREF
  __int128 v139; // [rsp+560h] [rbp+4E0h]
  __int128 v140; // [rsp+570h] [rbp+4F0h]
  __int128 v141; // [rsp+580h] [rbp+500h]
  __int128 v142; // [rsp+590h] [rbp+510h]
  __int128 v143; // [rsp+5A0h] [rbp+520h]
  __int64 v144; // [rsp+5B0h] [rbp+530h]
  __int64 v145; // [rsp+5B8h] [rbp+538h]
  _BYTE *v146; // [rsp+5C0h] [rbp+540h]
  char v147; // [rsp+5CEh] [rbp+54Eh] BYREF
  char v148; // [rsp+5CFh] [rbp+54Fh]
  __int64 v149; // [rsp+5D0h] [rbp+550h]

  v149 = -2;
  v4 = a4;
  v5 = a3;
  v81 = a3;
  v82 = a4;
  sub_140C1C870(v114);
  v138 = *(_OWORD *)&v114[8];
  v139 = *(_OWORD *)&v114[24];
  v140 = *(_OWORD *)&v114[40];
  v141 = *(_OWORD *)&v114[56];
  v142 = *(_OWORD *)&v114[72];
  v143 = *(_OWORD *)&v114[88];
  if ( *(_QWORD *)v114 == 2 )
  {
    *(_OWORD *)&v83[8] = v138;
    *(_OWORD *)v84 = v139;
    *(_OWORD *)&v84[16] = v140;
    *(_OWORD *)&v84[32] = v141;
    *(_OWORD *)&v84[48] = v142;
    *(_OWORD *)&v84[64] = v143;
    v132 = v138;
    v133 = v139;
    v134 = v140;
    v135 = v141;
    v136 = v142;
    v137 = v143;
LABEL_4:
    a1[5] = v137;
    a1[4] = v136;
    v9 = v132;
    v10 = v133;
    v11 = v134;
    a1[3] = v135;
    a1[2] = v11;
    a1[1] = v10;
    *a1 = v9;
    goto LABEL_5;
  }
  v80 = v119;
  v79 = v118;
  v78 = v117;
  v77 = v116;
  v76 = v115;
  *(_OWORD *)&v75[8] = v138;
  *(_OWORD *)&v75[24] = v139;
  *(_OWORD *)&v75[40] = v140;
  *(_OWORD *)&v75[56] = v141;
  *(_OWORD *)&v75[72] = v142;
  *(_OWORD *)&v75[88] = v143;
  *(_QWORD *)v75 = *(_QWORD *)v114;
  sub_140C4A4F0((unsigned int)v83, (unsigned int)v75, v5, v4, 0);
  sub_140BAC0A0(v75);
  v8 = *(_QWORD *)v83;
  v132 = *(_OWORD *)&v83[8];
  v133 = *(_OWORD *)v84;
  v134 = *(_OWORD *)&v84[16];
  v135 = *(_OWORD *)&v84[32];
  v136 = *(_OWORD *)&v84[48];
  v137 = *(_OWORD *)&v84[64];
  if ( *(_QWORD *)v83 == 2 )
    goto LABEL_4;
  sub_1418F44E0(&v115, &v85, 0xF8u);
  *(_OWORD *)&v114[8] = v132;
  *(_OWORD *)&v114[24] = v133;
  *(_OWORD *)&v114[40] = v134;
  *(_OWORD *)&v114[56] = v135;
  *(_OWORD *)&v114[72] = v136;
  *(_OWORD *)&v114[88] = v137;
  *(_QWORD *)v114 = v8;
  v146 = &v114[64];
  if ( (_QWORD)v117 == -1 || (v20 = sub_140E91160(*((_QWORD *)&v117 + 1), v118), !v21) )
  {
    v20 = sub_140E91160(*(_QWORD *)&v114[72], *(_QWORD *)&v114[80]);
    if ( !v21 )
      v20 = 0;
  }
  v23 = 16;
  if ( v20 )
    v23 = v21;
  v24 = (const __m128i *)&xmmword_141A63B78;
  if ( v20 )
    v24 = (const __m128i *)v20;
  if ( v23 < 0 )
  {
    v25 = 0;
    goto LABEL_22;
  }
  v145 = v23;
  if ( !v23 )
  {
    v144 = 1;
    if ( v126 == -1 )
      goto LABEL_42;
LABEL_40:
    if ( v128 == 9 && !(*(_QWORD *)v127 ^ 0x6574616E69676170LL | *(unsigned __int8 *)(v127 + 8) ^ 0x64LL) )
      goto LABEL_48;
    goto LABEL_42;
  }
  nullsub_1(v22);
  v25 = 1;
  v31 = (__m128i *)sub_140001650(v23, 1);
  if ( !v31 )
LABEL_22:
    sub_141938D2B(v25, v23);
  v144 = (__int64)v31;
  sub_1418F44E0(v31, v24, v23);
  if ( v126 != -1 )
    goto LABEL_40;
LABEL_42:
  if ( v115.m128i_i64[1] != -1 )
  {
    v41 = v116;
    if ( (unsigned __int8)sub_141682B30(v116, *((_QWORD *)&v116 + 1)) )
    {
      sub_140F7C920(&v138, v41, *((_QWORD *)&v41 + 1));
      if ( (_DWORD)v138 == -1 )
      {
        v65 = v140;
        *(_QWORD *)v83 = v139;
        *(_QWORD *)&v83[8] = v139;
        *(_QWORD *)&v83[16] = *((_QWORD *)&v138 + 1);
        *(_QWORD *)v84 = v139 + (*((_QWORD *)&v139 + 1) << 6);
        sub_1403EDFA0(v75, v83);
        v66 = *(_QWORD *)&v75[16];
        sub_140F750B0((__int64)v83, (__int64 *)v75, v67);
        *((_QWORD *)a1 + 9) = *(_QWORD *)&v83[16];
        *(__int128 *)((char *)a1 + 56) = *(_OWORD *)v83;
        v68 = 1;
        if ( !v65 )
          v68 = v84[0];
        *((_QWORD *)a1 + 3) = *(_QWORD *)&v114[32];
        *(__int128 *)((char *)a1 + 8) = *(_OWORD *)&v114[16];
        v69 = 0x7FFFFFFF;
        if ( v66 < 0x7FFFFFFF )
          v69 = v66;
        v70 = v145;
        *((_QWORD *)a1 + 4) = v145;
        *((_QWORD *)a1 + 5) = v144;
        *((_QWORD *)a1 + 6) = v70;
        *((_DWORD *)a1 + 20) = v65 ^ 1;
        *((_DWORD *)a1 + 21) = v69;
        *((_BYTE *)a1 + 88) = v68;
        *(_QWORD *)a1 = -1;
        v50 = *(_QWORD *)&v114[40];
        if ( !*(_QWORD *)&v114[40] )
          goto LABEL_59;
        goto LABEL_58;
      }
      *(_OWORD *)&v75[80] = v143;
      *(_OWORD *)&v75[64] = v142;
      *(_OWORD *)&v75[48] = v141;
      *(_OWORD *)&v75[32] = v140;
      *(_OWORD *)&v75[16] = v139;
      *(_OWORD *)v75 = v138;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)&v132 = v75;
        *((_QWORD *)&v132 + 1) = sub_14104A7D0;
        *(_QWORD *)&v84[24] = 2;
        *(_QWORD *)&v84[32] = aCodexmateLibCo_48;
        *(_QWORD *)&v84[40] = 37;
        *(_QWORD *)&v84[56] = &unk_141A63B88;
        *(_QWORD *)&v84[64] = &v132;
        *(_QWORD *)v83 = 0;
        *(_QWORD *)&v83[8] = aCodexmateLibCo_48;
        *(_QWORD *)&v83[16] = 37;
        *(_QWORD *)v84 = 0;
        *(_QWORD *)&v84[8] = aSrcCoreSession_0;
        *(_QWORD *)&v84[16] = 27;
        *(_QWORD *)&v84[48] = 0x4800000001LL;
        sub_1414D53A0(&v147, v83);
      }
      sub_140E97700(v75);
    }
  }
LABEL_48:
  if ( v126 == -1 || v128 != 9 || *(_QWORD *)v127 ^ 0x6574616E69676170LL | *(unsigned __int8 *)(v127 + 8) ^ 0x64LL )
    sub_140C47850((unsigned int)v83, a2, *(_DWORD *)&v114[24], *(_DWORD *)&v114[32], 300);
  else
    sub_140C48D60((__int64 *)v83, a2, *(__int64 *)&v114[24], *(__int64 *)&v114[32], 0x12Cu);
  v43 = *(_QWORD *)&v83[8];
  v42 = *(_QWORD *)v83;
  v44 = *(_QWORD *)&v83[16];
  v45 = *(_OWORD *)v84;
  v46 = *(_QWORD *)&v84[16];
  v47 = v84[24];
  if ( *(_QWORD *)v83 == -1 )
  {
    *(_QWORD *)v83 = *(_QWORD *)&v84[8];
    *(_QWORD *)&v83[8] = *(_QWORD *)&v84[8];
    *(_QWORD *)&v83[16] = *(_QWORD *)v84;
    *(_QWORD *)v84 = *(_QWORD *)&v84[8] + (*(_QWORD *)&v84[16] << 6);
    sub_1403EDE20(v75, v83);
    sub_140F750B0((__int64)v83, (__int64 *)v75, v53);
    *((_QWORD *)a1 + 9) = *(_QWORD *)&v83[16];
    *(__int128 *)((char *)a1 + 56) = *(_OWORD *)v83;
    v54 = 1;
    if ( (v47 & 1) == 0 )
      v54 = v84[0];
    *((_QWORD *)a1 + 3) = *(_QWORD *)&v114[32];
    *(__int128 *)((char *)a1 + 8) = *(_OWORD *)&v114[16];
    v55 = 0x7FFFFFFF;
    if ( v44 < 0x7FFFFFFF )
      v55 = v44;
    v56 = v145;
    *((_QWORD *)a1 + 4) = v145;
    *((_QWORD *)a1 + 5) = v144;
    *((_QWORD *)a1 + 6) = v56;
    *((_DWORD *)a1 + 20) = v43 & 1;
    *((_DWORD *)a1 + 21) = v55;
    *((_BYTE *)a1 + 88) = v54;
    *(_QWORD *)a1 = -1;
    if ( *(_QWORD *)&v114[40] )
      sub_140001660(*(_QWORD *)&v114[48], *(_QWORD *)&v114[40], 1);
    if ( v115.m128i_i64[1] != -1 && v115.m128i_i64[1] )
      sub_140001660(v116, v115.m128i_i64[1], 1);
    if ( (_QWORD)v117 != -1 && (_QWORD)v117 )
      sub_140001660(*((_QWORD *)&v117 + 1), v117, 1);
    if ( *(_QWORD *)&v114[64] )
      sub_140001660(*((_QWORD *)v146 + 1), *(_QWORD *)&v114[64], 1);
    sub_14002F9D0(v131);
    if ( *((_QWORD *)&v118 + 1) != -1 && *((_QWORD *)&v118 + 1) )
      sub_140001660(v119, *((_QWORD *)&v118 + 1), 1);
    if ( v120 != -1 && v120 )
      sub_140001660(v121, v120, 1);
    if ( v122 != -1 && v122 )
      sub_140001660(v123, v122, 1);
    if ( v124 != -1 && v124 )
      sub_140001660(v125, v124, 1);
    if ( v126 != -1 && v126 )
      sub_140001660(v127, v126, 1);
    if ( v129 <= 0xFFFFFFFFFFFFFFFDuLL && v129 )
      sub_140001660(v130, v129, 1);
    v57 = *(_QWORD *)&v114[96];
    v145 = v115.m128i_i64[0];
    v146 = nullptr;
    v144 = *(_QWORD *)&v114[96];
    while ( (_BYTE *)v145 != v146 )
    {
      ++v146;
      v58 = v57 + 32;
      sub_1403880E0(v57);
      v57 = v58;
    }
    goto LABEL_123;
  }
  v48 = *(_OWORD *)&v84[25];
  v49 = *(_OWORD *)&v84[41];
  a1[5] = *(_OWORD *)&v84[56];
  *(__int128 *)((char *)a1 + 65) = v49;
  *(__int128 *)((char *)a1 + 49) = v48;
  *(_QWORD *)a1 = v42;
  *((_QWORD *)a1 + 1) = v43;
  *((_QWORD *)a1 + 2) = v44;
  *(__int128 *)((char *)a1 + 24) = v45;
  *((_QWORD *)a1 + 5) = v46;
  *((_BYTE *)a1 + 48) = v47;
  if ( v145 )
    sub_140001660(v144, v145, 1);
  if ( *(_QWORD *)&v114[16] )
    sub_140001660(*(_QWORD *)&v114[24], *(_QWORD *)&v114[16], 1);
  v50 = *(_QWORD *)&v114[40];
  if ( *(_QWORD *)&v114[40] )
LABEL_58:
    sub_140001660(*(_QWORD *)&v114[48], v50, 1);
LABEL_59:
  if ( v115.m128i_i64[1] != -1 && v115.m128i_i64[1] )
    sub_140001660(v116, v115.m128i_i64[1], 1);
  if ( (_QWORD)v117 != -1 && (_QWORD)v117 )
    sub_140001660(*((_QWORD *)&v117 + 1), v117, 1);
  if ( *(_QWORD *)&v114[64] )
    sub_140001660(*((_QWORD *)v146 + 1), *(_QWORD *)&v114[64], 1);
  sub_14002F9D0(v131);
  if ( *((_QWORD *)&v118 + 1) != -1 && *((_QWORD *)&v118 + 1) )
    sub_140001660(v119, *((_QWORD *)&v118 + 1), 1);
  if ( v120 != -1 && v120 )
    sub_140001660(v121, v120, 1);
  if ( v122 != -1 && v122 )
    sub_140001660(v123, v122, 1);
  if ( v124 != -1 && v124 )
    sub_140001660(v125, v124, 1);
  if ( v126 != -1 && v126 )
    sub_140001660(v127, v126, 1);
  if ( v129 <= 0xFFFFFFFFFFFFFFFDuLL && v129 )
    sub_140001660(v130, v129, 1);
  v51 = *(_QWORD *)&v114[96];
  v145 = v115.m128i_i64[0];
  v146 = nullptr;
  v144 = *(_QWORD *)&v114[96];
  while ( (_BYTE *)v145 != v146 )
  {
    ++v146;
    v52 = v51 + 32;
    sub_1403880E0(v51);
    v51 = v52;
  }
LABEL_123:
  if ( *(_QWORD *)&v114[88] )
    sub_140001660(*(_QWORD *)&v114[96], 32LL * *(_QWORD *)&v114[88], 8);
LABEL_5:
  if ( *(_DWORD *)a1 == -1 )
    return a1;
  *(_OWORD *)&v114[80] = a1[5];
  *(_OWORD *)&v114[64] = a1[4];
  v12 = *a1;
  v13 = a1[1];
  v14 = a1[2];
  *(_OWORD *)&v114[48] = a1[3];
  *(_OWORD *)&v114[32] = v14;
  *(_OWORD *)&v114[16] = v13;
  *(_OWORD *)v114 = v12;
  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    *(_QWORD *)v75 = &v81;
    *(_QWORD *)&v75[8] = sub_140186EE0;
    *(_QWORD *)&v75[16] = v114;
    *(_QWORD *)&v75[24] = sub_14104A7D0;
    *(_QWORD *)&v84[24] = 2;
    *(_QWORD *)&v84[32] = aCodexmateLibCo_48;
    *(_QWORD *)&v84[40] = 37;
    *(_QWORD *)&v84[56] = &unk_141A63C12;
    *(_QWORD *)&v84[64] = v75;
    *(_QWORD *)v83 = 0;
    *(_QWORD *)&v83[8] = aCodexmateLibCo_48;
    *(_QWORD *)&v83[16] = 37;
    *(_QWORD *)v84 = 0;
    *(_QWORD *)&v84[8] = aSrcCoreSession_0;
    *(_QWORD *)&v84[16] = 27;
    *(_QWORD *)&v84[48] = 0x1200000001LL;
    sub_1414D53A0(&v147, v83);
  }
  sub_140E97700(v114);
  sub_1402DE620(v83, a2, v81, v82);
  v15 = *(_OWORD *)v83;
  v16 = *(_QWORD *)&v83[16];
  v17 = *(_OWORD *)v84;
  v138 = *(_OWORD *)&v84[16];
  v139 = *(_OWORD *)&v84[32];
  v140 = *(_OWORD *)&v84[48];
  v141 = *(_OWORD *)&v84[64];
  if ( *(_QWORD *)v83 == -1 )
  {
    v26 = v138;
    v27 = v139;
    v28 = v140;
    a1[5] = v141;
    a1[4] = v28;
    a1[3] = v27;
    a1[2] = v26;
    *(_QWORD *)a1 = *((_QWORD *)&v15 + 1);
    *((_QWORD *)a1 + 1) = v16;
    a1[1] = v17;
    return a1;
  }
  sub_1418F44E0((__m128i *)v114, &v85, 0x1B0u);
  if ( (_DWORD)v15 == 2 )
  {
    nullsub_1(v18);
    v19 = sub_140001650(21, 1);
    if ( !v19 )
      sub_141938D2B(1, 21);
    *(_OWORD *)v19 = xmmword_141A588EB;
    *(_QWORD *)(v19 + 13) = 0x8BA8E7BFBAE794BAuLL;
    *(_QWORD *)a1 = 10;
    *((_QWORD *)a1 + 1) = 21;
    *((_QWORD *)a1 + 2) = v19;
    *((_QWORD *)a1 + 3) = 21;
    return a1;
  }
  sub_1418F44E0(&v85, (const __m128i *)v114, 0x1B0u);
  *(_OWORD *)&v84[16] = v138;
  *(_OWORD *)&v84[32] = v139;
  *(_OWORD *)&v84[48] = v140;
  *(_OWORD *)&v84[64] = v141;
  *(_OWORD *)v83 = v15;
  *(_QWORD *)&v83[16] = v16;
  *(_OWORD *)v84 = v17;
  if ( v113 )
  {
    nullsub_1(v29);
    v30 = sub_140001650(51, 1);
    if ( !v30 )
    {
      v148 = 1;
      sub_141938D2B(1, 51);
    }
    *(_OWORD *)(v30 + 32) = xmmword_141A63C90;
    *(_OWORD *)(v30 + 16) = xmmword_141A63C80;
    *(_OWORD *)v30 = xmmword_141A63C70;
    *(_DWORD *)(v30 + 47) = -1179720315;
    *(_QWORD *)a1 = 10;
    *((_QWORD *)a1 + 1) = 51;
    *((_QWORD *)a1 + 2) = v30;
    *((_QWORD *)a1 + 3) = 51;
    goto LABEL_37;
  }
  if ( *(_QWORD *)&v84[56] == -1
    || (v32 = *(_OWORD *)&v84[64], sub_140E91160(*(_QWORD *)&v84[64], *(_QWORD *)&v84[72]), !v33) )
  {
    nullsub_1(v29);
    v39 = sub_140001650(36, 1);
    if ( !v39 )
    {
      v148 = 1;
      sub_141938D2B(1, 36);
    }
    *(_OWORD *)(v39 + 16) = xmmword_141A58910;
    *(_OWORD *)v39 = xmmword_141A58900;
    *(_DWORD *)(v39 + 32) = -2067864145;
    *(_QWORD *)a1 = 10;
    *((_QWORD *)a1 + 1) = 36;
    *((_QWORD *)a1 + 2) = v39;
    *((_QWORD *)a1 + 3) = 36;
    goto LABEL_37;
  }
  v148 = 1;
  sub_140F7C920(v75, v32, *((_QWORD *)&v32 + 1));
  v34 = *(_QWORD *)v75;
  v132 = *(_OWORD *)&v75[8];
  *(_QWORD *)&v133 = *(_QWORD *)&v75[24];
  v35 = v75[32];
  if ( *(_QWORD *)v75 != -1 )
  {
    v36 = *(_OWORD *)&v75[33];
    v37 = *(_OWORD *)&v75[49];
    v38 = *(_OWORD *)&v75[65];
    a1[5] = *(_OWORD *)&v75[80];
    *(__int128 *)((char *)a1 + 65) = v38;
    *(__int128 *)((char *)a1 + 49) = v37;
    *(__int128 *)((char *)a1 + 33) = v36;
    *((_QWORD *)a1 + 3) = v133;
    *(__int128 *)((char *)a1 + 8) = v132;
    *(_QWORD *)a1 = v34;
    *((_BYTE *)a1 + 32) = v35;
LABEL_37:
    sub_14029D790(v83);
    return a1;
  }
  v74 = v133;
  v73 = v132;
  v59 = *((_BYTE **)&v132 + 1);
  sub_1403EE120(v71, *((_QWORD *)&v132 + 1), *((_QWORD *)&v132 + 1) + ((_QWORD)v133 << 6));
  v60 = v72;
  sub_140F750B0((__int64)&v132, v71, v61);
  v146 = v59;
  v62 = v133;
  *(_QWORD *)&v75[64] = v133;
  *(_OWORD *)&v75[48] = v132;
  v63 = 1;
  if ( (v35 & 1) == 0 )
    v63 = BYTE8(v133);
  *(_OWORD *)v75 = *(_OWORD *)&v84[8];
  v64 = *(_OWORD *)&v84[8];
  *(_QWORD *)&v75[16] = *(_QWORD *)&v84[24];
  *(_QWORD *)&v75[40] = *(_QWORD *)&v84[48];
  *(_OWORD *)&v75[24] = *(_OWORD *)&v84[32];
  *(__int128 *)((char *)a1 + 56) = v132;
  *(__int128 *)((char *)a1 + 8) = v64;
  *((_QWORD *)a1 + 9) = v62;
  *((_QWORD *)a1 + 5) = *(_QWORD *)&v75[32];
  *((_QWORD *)a1 + 6) = *(_QWORD *)&v75[40];
  *((_QWORD *)a1 + 3) = *(_QWORD *)&v75[16];
  *((_QWORD *)a1 + 4) = *(_QWORD *)&v75[24];
  *((_DWORD *)a1 + 20) = (v35 & 1) == 0;
  *((_DWORD *)a1 + 21) = v60;
  *((_BYTE *)a1 + 88) = v63;
  *(_QWORD *)a1 = -1;
  sub_1403FC1C0(&v73);
  if ( (_QWORD)v73 )
    sub_140001660(v146, (_QWORD)v73 << 6, 8);
  if ( *(_QWORD *)&v84[56] != -1 && *(_QWORD *)&v84[56] )
    sub_140001660(*(_QWORD *)&v84[64], *(_QWORD *)&v84[56], 1);
  if ( v85.m128i_i64[0] != -1 && v85.m128i_i64[0] )
    sub_140001660(v85.m128i_i64[1], v85.m128i_i64[0], 1);
  if ( v86 != -1 && v86 )
    sub_140001660(v87, v86, 1);
  if ( v88 != -1 && v88 )
    sub_140001660(v89, v88, 1);
  if ( v90 != -1 && v90 )
    sub_140001660(v91, v90, 1);
  if ( v92 != -1 && v92 )
    sub_140001660(v93, v92, 1);
  if ( v94 != -1 && v94 )
    sub_140001660(v95, v94, 1);
  sub_140297AC0(v96);
  if ( v97 != -1 && v97 )
    sub_140001660(v98, v97, 1);
  if ( v99 != -1 && v99 )
    sub_140001660(v100, v99, 1);
  if ( v101 != -1 && v101 )
    sub_140001660(v102, v101, 1);
  if ( v103 != -1 && v103 )
    sub_140001660(v104, v103, 1);
  if ( v105 != -1 && v105 )
    sub_140001660(v106, v105, 1);
  if ( v107 != -1 && v107 )
    sub_140001660(v108, v107, 1);
  if ( v109 != -1 && v109 )
    sub_140001660(v110, v109, 1);
  if ( v111 != -1 && v111 )
    sub_140001660(v112, v111, 1);
  return a1;
}
