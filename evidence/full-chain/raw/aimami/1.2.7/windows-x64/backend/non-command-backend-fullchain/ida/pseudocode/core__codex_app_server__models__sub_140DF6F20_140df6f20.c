// win 1.2.7 | module src/core/codex_app_server/models.rs | ea 0x140df6f20 | name sub_140DF6F20
// win 1.2.7 | module src/core/codex_app_server/models.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140DF6F20(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  __m128i v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  int v9; // eax
  int v10; // edx
  int v11; // edx
  __int64 v12; // rcx
  void *v13; // rax
  unsigned __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __m128i si128; // xmm0
  _BYTE *v18; // rax
  __int64 v19; // rcx
  __m128i v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // r15d
  void *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __m128i *v44; // r14
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  __m128i *v47; // rax
  char v48; // al
  unsigned int v50; // r14d
  __int64 v51; // rax
  __int64 v52; // r8
  _QWORD *v53; // r12
  __int64 v54; // rax
  unsigned __int64 v55; // r15
  __m128i v56; // xmm0
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rax
  bool v60; // zf
  unsigned __int64 v61; // r15
  __int64 v62; // rax
  __int64 v63; // rcx
  __m128i v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm2
  __int128 v67; // xmm3
  __int64 v68; // r15
  const __m128i *v69; // r13
  __int64 v70; // rax
  __int64 v71; // rdi
  __int64 v72; // rbx
  _QWORD *v73; // r14
  __int64 v74; // rdx
  unsigned __int64 v75; // rdi
  char v76; // bl
  __int64 v77; // rdi
  __int64 v78; // rdi
  __int64 v79; // r14
  __int64 v80; // r15
  const __m128i *v81; // r12
  __m128i v83; // xmm0
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rdi
  __int64 v87; // rdi
  __int64 v88; // r14
  __int64 v89; // r15
  const __m128i *v90; // r12
  __m128i v92; // xmm0
  __int64 v93; // rax
  __int64 v94; // rdx
  unsigned __int64 v95; // rax
  __int64 v96; // rdi
  _QWORD *v97; // rcx
  _QWORD *v98; // rdi
  __int128 v100; // xmm0
  __int128 v101; // xmm1
  __m128i v102; // xmm0
  __int128 v103; // xmm1
  __int64 v104; // rax
  void *v105; // rax
  __int128 v106; // xmm0
  __int128 v107; // xmm1
  _BYTE *v108; // rax
  __m128i v109; // xmm0
  __int128 v110; // xmm1
  __int128 v111; // xmm2
  __int64 v112; // r14
  __int64 v113; // r14
  void *v114; // rdi
  void *v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rax
  _OWORD v118[2]; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v119; // [rsp+90h] [rbp+10h] BYREF
  __m128i v120; // [rsp+98h] [rbp+18h]
  __m256i v121; // [rsp+A8h] [rbp+28h]
  __int128 v122; // [rsp+C8h] [rbp+48h]
  __int128 v123; // [rsp+D8h] [rbp+58h]
  __m128i v124; // [rsp+E8h] [rbp+68h]
  __int128 v125; // [rsp+F8h] [rbp+78h]
  __int128 v126; // [rsp+108h] [rbp+88h]
  __int128 v127; // [rsp+118h] [rbp+98h]
  __int128 v128; // [rsp+128h] [rbp+A8h]
  __int64 v129; // [rsp+138h] [rbp+B8h]
  _BYTE v130[31]; // [rsp+141h] [rbp+C1h]
  _WORD v131[16]; // [rsp+160h] [rbp+E0h] BYREF
  __m128i v132; // [rsp+180h] [rbp+100h]
  __int128 v133; // [rsp+190h] [rbp+110h]
  _OWORD v134[2]; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v135; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v136; // [rsp+1D0h] [rbp+150h]
  __int64 v137; // [rsp+1E0h] [rbp+160h]
  __int64 v138; // [rsp+1E8h] [rbp+168h]
  __int128 v139; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v140; // [rsp+200h] [rbp+180h]
  __int64 v141; // [rsp+210h] [rbp+190h]
  __int64 v142; // [rsp+218h] [rbp+198h]
  unsigned __int64 v143; // [rsp+220h] [rbp+1A0h]
  unsigned __int64 v144; // [rsp+228h] [rbp+1A8h]
  _QWORD v145[4]; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v146; // [rsp+250h] [rbp+1D0h] BYREF
  int v147; // [rsp+258h] [rbp+1D8h]
  __m128i v148; // [rsp+260h] [rbp+1E0h]
  __int128 v149; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v150; // [rsp+280h] [rbp+200h]
  __int64 v151; // [rsp+290h] [rbp+210h] BYREF
  __int64 v152; // [rsp+298h] [rbp+218h]
  __int64 v153; // [rsp+2A0h] [rbp+220h]
  __int128 v154; // [rsp+2A8h] [rbp+228h] BYREF
  __int64 v155; // [rsp+2B8h] [rbp+238h]
  __m128i v156; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v157; // [rsp+2D0h] [rbp+250h]
  __int128 v158; // [rsp+2E0h] [rbp+260h]
  __int64 v159; // [rsp+2F8h] [rbp+278h]
  __int128 v160; // [rsp+300h] [rbp+280h] BYREF
  __int64 v161; // [rsp+310h] [rbp+290h]
  unsigned __int64 v162; // [rsp+318h] [rbp+298h]
  unsigned __int64 v163; // [rsp+320h] [rbp+2A0h] BYREF
  _BYTE v164[96]; // [rsp+328h] [rbp+2A8h]
  __int128 v165; // [rsp+388h] [rbp+308h]
  __int128 v166; // [rsp+398h] [rbp+318h]
  __int128 v167; // [rsp+3A8h] [rbp+328h]
  __int128 v168; // [rsp+3B8h] [rbp+338h]
  __int64 v169; // [rsp+3C8h] [rbp+348h]
  unsigned __int64 v170; // [rsp+3D0h] [rbp+350h]
  _BYTE v171[24]; // [rsp+3D8h] [rbp+358h] BYREF
  __int128 v172; // [rsp+3F0h] [rbp+370h]
  __int128 v173; // [rsp+400h] [rbp+380h]
  __m256i v174; // [rsp+410h] [rbp+390h] BYREF
  __int128 v175; // [rsp+430h] [rbp+3B0h]
  __m128i v176; // [rsp+440h] [rbp+3C0h] BYREF
  __m256i v177; // [rsp+450h] [rbp+3D0h] BYREF
  __int128 v178; // [rsp+470h] [rbp+3F0h]
  __int128 v179; // [rsp+480h] [rbp+400h]
  __m128i v180; // [rsp+490h] [rbp+410h] BYREF
  __m128i v181; // [rsp+4A0h] [rbp+420h] BYREF
  unsigned __int64 v182; // [rsp+4B0h] [rbp+430h]
  __int64 v183; // [rsp+4B8h] [rbp+438h]
  const __m128i *v184; // [rsp+4C0h] [rbp+440h]
  __m128i *v185; // [rsp+4C8h] [rbp+448h]
  unsigned __int64 v186; // [rsp+4D0h] [rbp+450h]
  __int64 v187; // [rsp+4D8h] [rbp+458h]
  char v188; // [rsp+4E2h] [rbp+462h]
  char v189; // [rsp+4E3h] [rbp+463h]
  char v190; // [rsp+4E4h] [rbp+464h]
  char v191; // [rsp+4E5h] [rbp+465h]
  char v192; // [rsp+4E6h] [rbp+466h]
  char v193; // [rsp+4E7h] [rbp+467h]
  __int64 v194; // [rsp+4E8h] [rbp+468h]

  v194 = -2;
  sub_140C1C870((__int64)&v163, a2);
  v176 = *(__m128i *)v164;
  v177 = *(__m256i *)&v164[16];
  v178 = *(_OWORD *)&v164[48];
  v179 = *(_OWORD *)&v164[64];
  v180 = *(__m128i *)&v164[80];
  if ( v163 == 2 )
  {
    *(__m128i *)(a1 + 80) = v180;
    *(_OWORD *)(a1 + 64) = v179;
    v6 = _mm_load_si128(&v176);
    v7 = *(_OWORD *)v177.m256i_i8;
    v8 = *(_OWORD *)&v177.m256i_u64[2];
    *(_OWORD *)(a1 + 48) = v178;
    *(_OWORD *)(a1 + 32) = v8;
    *(_OWORD *)(a1 + 16) = v7;
    *(__m128i *)a1 = v6;
    return a1;
  }
  v129 = v169;
  v128 = v168;
  v127 = v167;
  v126 = v166;
  v125 = v165;
  v120 = v176;
  v121 = v177;
  v122 = v178;
  v123 = v179;
  v124 = _mm_load_si128(&v180);
  v119 = v163;
  v9 = sub_14167FC00();
  v146 = sub_1416A1240(v9, v10, 20, 0, (__int64)&off_141A52738);
  v147 = v11;
  v156.m128i_i64[0] = 0;
  *(_QWORD *)&v157 = 0;
  nullsub_1(v12);
  v13 = (void *)sub_140001650(13, 1);
  if ( !v13 )
    sub_141938D2B(1, 13);
  qmemcpy(v13, "includeLayers", 13);
  v174.m256i_i64[0] = 13;
  v174.m256i_i64[1] = (__int64)v13;
  v174.m256i_i64[2] = 13;
  v131[0] = 1;
  sub_140E72AA0(&v176, &v156, &v174, v131);
  if ( v176.m128i_i8[0] != -1 )
    sub_140DF44E0(&v176);
  *(__m128i *)((char *)&v174.m256i_u32[1] + 3) = v156;
  *(__int64 *)((char *)&v174.m256i_i64[2] + 7) = v157;
  v176.m128i_i64[0] = (__int64)aConfigRead;
  v176.m128i_i64[1] = 11;
  v177.m256i_i8[0] = 5;
  *(__m128i *)&v177.m256i_i8[1] = _mm_loadu_si128((const __m128i *)&v174);
  *(_OWORD *)&v177.m256i_u64[2] = __PAIR128__(v157, v156.m128i_u64[1]);
  sub_140E18190(
    (unsigned int)&v163,
    (unsigned int)&v146,
    (unsigned int)&v119,
    (unsigned int)aConfigRead,
    11,
    (__int64)&v177);
  v14 = v163;
  *(_OWORD *)&v171[8] = *(_OWORD *)v164;
  v172 = *(_OWORD *)&v164[16];
  if ( v163 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v164[80];
    v15 = *(_OWORD *)&v164[32];
    v16 = *(_OWORD *)&v164[48];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v164[64];
    *(_OWORD *)(a1 + 56) = v16;
    *(_OWORD *)(a1 + 40) = v15;
    si128 = _mm_load_si128((const __m128i *)&v171[8]);
    *(_OWORD *)(a1 + 24) = v172;
    *(__m128i *)(a1 + 8) = si128;
    *(_QWORD *)a1 = v14;
    goto LABEL_100;
  }
  v134[0] = _mm_load_si128((const __m128i *)&v171[8]);
  v134[1] = v172;
  v18 = (_BYTE *)sub_1416419F0(aConfig_5, 6, v134);
  if ( !v18 )
    v18 = off_1421E7108;
  sub_14022F700((const char *)&v163, v18, a3);
  if ( (_DWORD)v163 != -1 )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v164[72];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v164[56];
    v20 = _mm_loadu_si128((const __m128i *)&v163);
    v21 = *(_OWORD *)&v164[8];
    v22 = *(_OWORD *)&v164[24];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v164[40];
    *(_OWORD *)(a1 + 32) = v22;
    *(_OWORD *)(a1 + 16) = v21;
    *(__m128i *)a1 = v20;
    goto LABEL_99;
  }
  v181.m128i_i64[0] = 0;
  v181.m128i_i64[1] = 8;
  v182 = 0;
  v190 = 1;
  v23 = sub_14167F170(v19);
  if ( *(_BYTE *)(v23 + 16) == 1 )
  {
    v28 = *(_QWORD *)v23;
    v29 = *(_QWORD *)(v23 + 8);
  }
  else
  {
    v190 = 1;
    v112 = v23;
    v28 = sub_141696260(v25, v24, v26, v27);
    v23 = v112;
    *(_QWORD *)v112 = v28;
    *(_QWORD *)(v112 + 8) = v29;
    *(_BYTE *)(v112 + 16) = 1;
  }
  *(_QWORD *)v23 = v28 + 1;
  v140 = xmmword_141A52790;
  v139 = *(_OWORD *)&off_141A52780;
  v141 = v28;
  v142 = v29;
  v189 = 1;
  v30 = sub_14167F170(v28);
  if ( *(_BYTE *)(v30 + 16) == 1 )
  {
    v35 = *(_QWORD *)v30;
    v36 = *(_QWORD *)(v30 + 8);
  }
  else
  {
    v189 = 1;
    v113 = v30;
    v35 = sub_141696260(v32, v31, v33, v34);
    v30 = v113;
    *(_QWORD *)v113 = v35;
    *(_QWORD *)(v113 + 8) = v36;
    *(_BYTE *)(v113 + 16) = 1;
  }
  *(_QWORD *)v30 = v35 + 1;
  v136 = xmmword_141A52790;
  v135 = *(_OWORD *)&off_141A52780;
  v137 = v35;
  v138 = v36;
  v37 = 0;
  v187 = -1;
  while ( 1 )
  {
    v38 = v37;
    *(_QWORD *)&v154 = 0;
    v155 = 0;
    nullsub_1(v37);
    v39 = (void *)sub_140001650(13, 1);
    if ( !v39 )
      sub_141938D2B(1, 13);
    qmemcpy(v39, "includeHidden", 13);
    v145[0] = 13;
    v145[1] = v39;
    v145[2] = 13;
    sub_140E72AA0(&v160, &v154, v145, v131);
    if ( (_BYTE)v160 != 0xFF )
      sub_140DF44E0(&v160);
    nullsub_1(v40);
    v41 = sub_140001650(5, 1);
    if ( !v41 )
      sub_141938D2B(1, 5);
    *(_BYTE *)(v41 + 4) = 116;
    *(_DWORD *)v41 = 1768778092;
    v151 = 5;
    v152 = v41;
    v153 = 5;
    LOBYTE(v160) = 2;
    *((_QWORD *)&v160 + 1) = 0;
    v161 = 100;
    sub_140E72AA0(v145, &v154, &v151, &v160);
    if ( LOBYTE(v145[0]) != 0xFF )
      sub_140DF44E0(v145);
    nullsub_1(v42);
    v43 = sub_140001650(6, 1);
    if ( !v43 )
      sub_141938D2B(1, 6);
    *(_WORD *)(v43 + 4) = 29295;
    *(_DWORD *)v43 = 1936880995;
    v151 = 6;
    v152 = v43;
    v153 = 6;
    v44 = v185;
    v45 = v143;
    v46 = v144;
    v186 = v43;
    if ( v187 == -1 )
    {
      v48 = 0;
    }
    else
    {
      nullsub_1(v143);
      v47 = (__m128i *)sub_140001650(v3, 1);
      if ( !v47 )
      {
        v188 = 1;
        sub_141938D2B(1, v3);
      }
      v44 = v47;
      sub_1418F44E0(v47, v184, v3);
      v48 = 3;
      v45 = v3;
      v46 = v3;
    }
    LOBYTE(v160) = v48;
    v144 = v46;
    *((_QWORD *)&v160 + 1) = v46;
    v185 = v44;
    v161 = (__int64)v44;
    v143 = v45;
    v162 = v45;
    v188 = 0;
    sub_140E72AA0(v145, &v154, &v151, &v160);
    if ( LOBYTE(v145[0]) != 0xFF )
      sub_140DF44E0(v145);
    v160 = v154;
    v161 = v155;
    *(_QWORD *)&v130[23] = v155;
    *(_OWORD *)&v130[7] = v154;
    v176.m128i_i64[0] = (__int64)aModelList;
    v176.m128i_i64[1] = 10;
    v177.m256i_i8[0] = 5;
    *(_OWORD *)&v177.m256i_u64[2] = *(_OWORD *)&v130[15];
    *(_OWORD *)&v177.m256i_i8[1] = *(_OWORD *)v130;
    v192 = 1;
    sub_140E18190(
      (unsigned int)&v163,
      (unsigned int)&v146,
      (unsigned int)&v119,
      (unsigned int)aModelList,
      10,
      (__int64)&v177);
    _RAX = v163;
    v132 = *(__m128i *)v164;
    v133 = *(_OWORD *)&v164[16];
    if ( v163 != -1 )
    {
      *(_QWORD *)(a1 + 88) = *(_QWORD *)&v164[80];
      v100 = *(_OWORD *)&v164[32];
      v101 = *(_OWORD *)&v164[48];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v164[64];
      *(_OWORD *)(a1 + 56) = v101;
      *(_OWORD *)(a1 + 40) = v100;
      v102 = v132;
      v103 = v133;
LABEL_104:
      *(_OWORD *)(a1 + 24) = v103;
      *(__m128i *)(a1 + 8) = v102;
      *(_QWORD *)a1 = _RAX;
      v76 = 1;
      goto LABEL_105;
    }
    v118[0] = v132;
    v118[1] = v133;
    v192 = 1;
    sub_1404311B0(&v171[8], v118, aPage, 4, &off_141A527C0, 2);
    if ( *(_QWORD *)&v171[8] == -1 )
    {
      v192 = 1;
      sub_140E18320(&v163, *(_QWORD *)&v171[16]);
      _RAX = v163;
      v174 = *(__m256i *)v164;
      v175 = *(_OWORD *)&v164[32];
      *(_QWORD *)(a1 + 88) = *(_QWORD *)&v164[80];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v164[64];
      *(_OWORD *)(a1 + 56) = *(_OWORD *)&v164[48];
      v102 = _mm_load_si128((const __m128i *)&v174);
      v103 = *(_OWORD *)&v174.m256i_u64[2];
      v156 = v102;
      v157 = *(_OWORD *)&v174.m256i_u64[2];
      v158 = v175;
      *(_OWORD *)(a1 + 40) = v175;
      goto LABEL_104;
    }
    v50 = v38 + 1;
    v156 = _mm_loadu_si128((const __m128i *)&v171[8]);
    v157 = v172;
    v148 = v156;
    v149 = v172;
    v150 = v173;
    v51 = 16 * v172;
    v52 = v156.m128i_i64[1] + 80 * v172;
    *(_QWORD *)&v171[16] = v156.m128i_i64[1];
    *(__m128i *)v171 = v156;
    *(_QWORD *)&v172 = v156.m128i_i64[0];
    *((_QWORD *)&v172 + 1) = v52;
    v53 = (_QWORD *)(v156.m128i_i64[1] + 80);
    v170 = 5 * v51 - 80;
    v159 = v156.m128i_i64[1];
    v54 = v156.m128i_i64[1];
    v186 = v52;
    if ( v156.m128i_i64[1] != v52 )
    {
      do
      {
        *(_QWORD *)&v171[16] = v54 + 80;
        v55 = *(_QWORD *)v54;
        *(_QWORD *)&v179 = *(_QWORD *)(v54 + 72);
        v178 = *(_OWORD *)(v54 + 56);
        v177 = *(__m256i *)(v54 + 24);
        v176 = _mm_loadu_si128((const __m128i *)(v54 + 8));
        if ( v55 == -1 )
          break;
        v183 = v54 + 80;
        v163 = v55;
        *(_QWORD *)&v164[64] = v179;
        v56 = _mm_load_si128(&v176);
        *(_OWORD *)&v164[48] = v178;
        *(__m256i *)&v164[16] = v177;
        *(__m128i *)v164 = v56;
        v191 = 1;
        sub_140E91160(v56.m128i_i64[0], v56.m128i_i64[1]);
        if ( !v58 || !*(_QWORD *)&v164[32] )
          goto LABEL_51;
        v59 = *(_QWORD *)&v164[48];
        v57 = 24LL * *(_QWORD *)&v164[56];
        while ( v57 )
        {
          v57 -= 24;
          v60 = *(_QWORD *)(v59 + 16) == 0;
          v59 += 24;
          if ( v60 )
            goto LABEL_51;
        }
        v191 = 1;
        sub_1416AC440(&v174, &v163);
        v191 = 1;
        if ( (unsigned __int8)sub_1403AAB80(&v139, &v174) )
        {
LABEL_51:
          nullsub_1(v57);
          v70 = sub_140001650(71, 1);
          if ( !v70 )
          {
            v191 = 1;
            sub_141938D2B(1, 71);
          }
          *(_OWORD *)(v70 + 48) = xmmword_141A52893;
          *(_OWORD *)(v70 + 32) = xmmword_141A52883;
          *(_OWORD *)(v70 + 16) = xmmword_141A52873;
          *(__m128i *)v70 = _mm_loadu_si128((const __m128i *)&xmmword_141A52863);
          *(_QWORD *)(v70 + 63) = 0xA18AE5BBBBE4B994uLL;
          *(_QWORD *)a1 = 10;
          *(_QWORD *)(a1 + 8) = 71;
          *(_QWORD *)(a1 + 16) = v70;
          *(_QWORD *)(a1 + 24) = 71;
          if ( v55 )
            sub_140001660(v56.m128i_i64[0], v55, 1);
          if ( *(_QWORD *)&v164[16] )
            sub_140001660(*(_QWORD *)&v164[24], *(_QWORD *)&v164[16], 1);
          v71 = *(_QWORD *)&v164[48];
          v72 = *(_QWORD *)&v164[56];
          if ( *(_QWORD *)&v164[56] )
          {
            v73 = (_QWORD *)(*(_QWORD *)&v164[48] + 8LL);
            do
            {
              v74 = *(v73 - 1);
              if ( v74 )
                sub_140001660(*v73, v74, 1);
              v73 += 3;
              --v72;
            }
            while ( v72 );
          }
          if ( *(_QWORD *)&v164[40] )
            sub_140001660(v71, 24LL * *(_QWORD *)&v164[40], 8);
          v186 = 0xCCCCCCCCCCCCCCCDuLL * ((v186 - v183) >> 4);
          v75 = v170 / 0x50;
          v185 = nullptr;
          while ( (__m128i *)v75 != v185 )
          {
            v185 = (__m128i *)((char *)v185 + 1);
            sub_14038C890(v53);
            v53 += 10;
          }
          HIDWORD(_RAX) = *(_DWORD *)&v171[4];
          if ( *(_QWORD *)v171 )
            HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v159, 80LL * *(_QWORD *)v171, 8) >> 32;
          v76 = 1;
          v77 = v187;
          if ( *((_QWORD *)&v149 + 1) != -1 && *((_QWORD *)&v149 + 1) )
            HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v150, *((_QWORD *)&v149 + 1), 1) >> 32;
          if ( v77 <= 0 )
            goto LABEL_73;
          goto LABEL_72;
        }
        v61 = v182;
        if ( v182 == v181.m128i_i64[0] )
          sub_14190F6C0(&v181);
        v62 = v181.m128i_i64[1];
        v63 = 80 * v61;
        v64 = _mm_loadu_si128((const __m128i *)&v163);
        v65 = *(_OWORD *)&v164[8];
        v66 = *(_OWORD *)&v164[24];
        v67 = *(_OWORD *)&v164[40];
        *(_OWORD *)(v181.m128i_i64[1] + v63 + 64) = *(_OWORD *)&v164[56];
        *(_OWORD *)(v62 + v63 + 48) = v67;
        *(_OWORD *)(v62 + v63 + 32) = v66;
        *(_OWORD *)(v62 + v63 + 16) = v65;
        *(__m128i *)(v62 + v63) = v64;
        v182 = v61 + 1;
        v53 += 10;
        v170 -= 80LL;
        v54 = v183;
      }
      while ( v183 != v186 );
    }
    v193 = 1;
    sub_140384600(&v171[8]);
    v68 = *((_QWORD *)&v149 + 1);
    if ( *((_QWORD *)&v149 + 1) == -1 )
      break;
    v3 = *((_QWORD *)&v150 + 1);
    if ( !*((_QWORD *)&v150 + 1)
      || (v193 = 1, sub_1416AC440(&v163, (char *)&v149 + 8), v193 = 1, (unsigned __int8)sub_1403AAB80(&v135, &v163)) )
    {
      if ( v68 )
        sub_140001660(v150, v68, 1);
      v68 = v187;
LABEL_110:
      nullsub_1(v37);
      v104 = sub_140001650(59, 1);
      if ( !v104 )
      {
        v192 = 1;
        sub_141938D2B(1, 59);
      }
      *(_OWORD *)(v104 + 43) = *(__int128 *)((char *)&xmmword_141A52848 + 11);
      *(_OWORD *)(v104 + 32) = xmmword_141A52848;
      *(_OWORD *)(v104 + 16) = xmmword_141A52838;
      *(__m128i *)v104 = _mm_loadu_si128((const __m128i *)&xmmword_141A52828);
      *(_QWORD *)a1 = 10;
      *(_QWORD *)(a1 + 8) = 59;
      *(_QWORD *)(a1 + 16) = v104;
      *(_QWORD *)(a1 + 24) = 59;
      if ( v68 > 0 )
        sub_140001660(v184, v68, 1);
      v189 = 1;
      sub_140370B80(&v135);
      v190 = 1;
      sub_140370B80(&v139);
      sub_1404031A0(&v181);
      sub_140DF44E0(v134);
      goto LABEL_100;
    }
    v69 = (const __m128i *)v150;
    if ( v187 > 0 )
      sub_140001660(v184, v187, 1);
    v184 = v69;
    v37 = v50;
    v187 = v68;
    if ( v50 > 0x13 )
      goto LABEL_110;
  }
  v156.m128i_i64[0] = 0;
  *(_QWORD *)&v157 = 0;
  nullsub_1(v37);
  v105 = (void *)sub_140001650(13, 1);
  if ( !v105 )
    sub_141938D2B(1, 13);
  qmemcpy(v105, "includeLayers", 13);
  v174.m256i_i64[0] = 13;
  v174.m256i_i64[1] = (__int64)v105;
  v174.m256i_i64[2] = 13;
  sub_140E72AA0(&v176, &v156, &v174, v131);
  if ( v176.m128i_i8[0] != -1 )
    sub_140DF44E0(&v176);
  *(__m128i *)((char *)&v174.m256i_u32[1] + 3) = v156;
  *(__int64 *)((char *)&v174.m256i_i64[2] + 7) = v157;
  v176.m128i_i64[0] = (__int64)aConfigRead;
  v176.m128i_i64[1] = 11;
  v177.m256i_i8[0] = 5;
  *(__m128i *)&v177.m256i_i8[1] = _mm_loadu_si128((const __m128i *)&v174);
  *(_OWORD *)&v177.m256i_u64[2] = __PAIR128__(v157, v156.m128i_u64[1]);
  v193 = 1;
  sub_140E18190(
    (unsigned int)&v163,
    (unsigned int)&v146,
    (unsigned int)&v119,
    (unsigned int)aConfigRead,
    11,
    (__int64)&v177);
  _RAX = v163;
  *(_OWORD *)&v171[8] = *(_OWORD *)v164;
  v172 = *(_OWORD *)&v164[16];
  if ( v163 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v164[80];
    v106 = *(_OWORD *)&v164[32];
    v107 = *(_OWORD *)&v164[48];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v164[64];
    *(_OWORD *)(a1 + 56) = v107;
    *(_OWORD *)(a1 + 40) = v106;
    v102 = _mm_load_si128((const __m128i *)&v171[8]);
    v103 = v172;
    goto LABEL_104;
  }
  v176 = _mm_load_si128((const __m128i *)&v171[8]);
  *(_OWORD *)v177.m256i_i8 = v172;
  v108 = (_BYTE *)sub_1416419F0(aConfig_5, 6, &v176);
  if ( !v108 )
    v108 = off_1421E7108;
  sub_14022F700((const char *)&v163, v108, a3);
  if ( (_DWORD)v163 != -1 )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v164[72];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v164[56];
    v109 = _mm_loadu_si128((const __m128i *)&v163);
    v110 = *(_OWORD *)&v164[8];
    v111 = *(_OWORD *)&v164[24];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v164[40];
    *(_OWORD *)(a1 + 32) = v111;
    *(_OWORD *)(a1 + 16) = v110;
    *(__m128i *)a1 = v109;
    goto LABEL_133;
  }
  v114 = (void *)sub_1416419F0(aConfig_5, 6, v134);
  v115 = (void *)sub_1416419F0(aConfig_5, 6, &v176);
  if ( !v114 )
    v114 = off_1421E7108;
  if ( !v115 )
    v115 = off_1421E7108;
  if ( (unsigned __int8)sub_140E8EE70(v114, v115) )
  {
    *(_QWORD *)(a1 + 24) = v182;
    *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v181);
    *(_QWORD *)a1 = -1;
    v76 = 0;
  }
  else
  {
    nullsub_1(v116);
    v117 = sub_140001650(72, 1);
    if ( !v117 )
      sub_141938D2B(1, 72);
    *(_OWORD *)(v117 + 48) = xmmword_141A52810;
    *(_OWORD *)(v117 + 32) = xmmword_141A52800;
    *(_OWORD *)(v117 + 16) = xmmword_141A527F0;
    *(__m128i *)v117 = _mm_loadu_si128((const __m128i *)&xmmword_141A527E0);
    *(_QWORD *)(v117 + 64) = 0xA18AE5BBBBE4B994uLL;
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 72;
    *(_QWORD *)(a1 + 16) = v117;
    *(_QWORD *)(a1 + 24) = 72;
LABEL_133:
    v76 = 1;
  }
  v193 = v76;
  HIDWORD(_RAX) = (unsigned __int64)sub_140DF44E0(&v176) >> 32;
LABEL_105:
  v77 = v187;
  if ( v187 > 0 )
LABEL_72:
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v184, v77, 1) >> 32;
LABEL_73:
  v78 = *((_QWORD *)&v135 + 1);
  if ( *((_QWORD *)&v135 + 1) )
  {
    v79 = *((_QWORD *)&v136 + 1);
    if ( *((_QWORD *)&v136 + 1) )
    {
      v80 = v135;
      v81 = (const __m128i *)(v135 + 16);
      _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v135));
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v83 = _mm_load_si128(v81);
            v80 -= 384;
            ++v81;
            _R13D = _mm_movemask_epi8(v83) ^ 0xFFFF;
          }
          while ( !_R13D );
        }
        __asm { tzcnt   eax, r13d }
        v84 = -3LL * _RAX;
        v85 = *(_QWORD *)(v80 + 8 * v84 - 24);
        if ( v85 )
          sub_140001660(*(_QWORD *)(v80 + 8 * v84 - 16), v85, 1);
        --v79;
        _RAX = _R13D & (unsigned int)(_R13D - 1);
        _R13D &= _R13D - 1;
      }
      while ( v79 );
    }
    _RAX = (24 * v78 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v86 = _RAX + v78 + 17;
    if ( v86 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v135 - _RAX, v86, 16) >> 32;
  }
  v87 = *((_QWORD *)&v139 + 1);
  if ( *((_QWORD *)&v139 + 1) )
  {
    v88 = *((_QWORD *)&v140 + 1);
    if ( *((_QWORD *)&v140 + 1) )
    {
      v89 = v139;
      v90 = (const __m128i *)(v139 + 16);
      _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v139));
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v92 = _mm_load_si128(v90);
            v89 -= 384;
            ++v90;
            _R13D = _mm_movemask_epi8(v92) ^ 0xFFFF;
          }
          while ( !_R13D );
        }
        __asm { tzcnt   eax, r13d }
        v93 = -3LL * _RAX;
        v94 = *(_QWORD *)(v89 + 8 * v93 - 24);
        if ( v94 )
          sub_140001660(*(_QWORD *)(v89 + 8 * v93 - 16), v94, 1);
        --v88;
        _RAX = _R13D & (unsigned int)(_R13D - 1);
        _R13D &= _R13D - 1;
      }
      while ( v88 );
    }
    v95 = (24 * v87 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v96 = v95 + v87 + 17;
    if ( v96 )
      sub_140001660(v139 - v95, v96, 16);
  }
  if ( v76 )
  {
    v97 = (_QWORD *)v181.m128i_i64[1];
    v186 = v182;
    v185 = nullptr;
    v183 = v181.m128i_i64[1];
    while ( (__m128i *)v186 != v185 )
    {
      v185 = (__m128i *)((char *)v185 + 1);
      v98 = v97 + 10;
      sub_14038C890(v97);
      v97 = v98;
    }
    if ( v181.m128i_i64[0] )
      sub_140001660(v181.m128i_i64[1], 80 * v181.m128i_i64[0], 8);
  }
LABEL_99:
  sub_140DF44E0(v134);
LABEL_100:
  sub_140DF4F50(&v119);
  return a1;
}
