// win 1.2.7 latest-exe | module src/core/codex_app_server/models.rs | ea 0x140cba770 | successor of pre-update 0x140df6f20 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.919, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140CBA770(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __m128i v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  int v9; // eax
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rcx
  void *v13; // rax
  unsigned __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __m128i si128; // xmm0
  void *v18; // rax
  __m128i v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  void *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  char v40; // al
  __int64 v42; // rax
  __int64 v43; // r8
  unsigned __int64 v44; // rbx
  __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // r13
  unsigned __int64 v48; // r12
  __m128i v49; // xmm0
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  bool v53; // zf
  __int64 v54; // r15
  __int64 v55; // rax
  __int64 v56; // rcx
  __m128i v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm2
  __int128 v60; // xmm3
  __int64 v61; // r15
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // r15
  _QWORD *v66; // r12
  __int64 v67; // rdx
  __int64 v68; // r15
  unsigned __int64 v69; // rdi
  char v70; // bl
  __int64 v71; // rdi
  __int64 v72; // r14
  __int64 v73; // r15
  const __m128i *v74; // r12
  __m128i v76; // xmm0
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rdi
  __int64 v80; // rdi
  __int64 v81; // r14
  __int64 v82; // r15
  const __m128i *v83; // r12
  __m128i v85; // xmm0
  __int64 v86; // rax
  __int64 v87; // rdx
  unsigned __int64 v88; // rax
  __int64 v89; // rdi
  __int64 v90; // rbx
  __int64 v91; // rdi
  __int128 v93; // xmm0
  __int128 v94; // xmm1
  __m128i v95; // xmm0
  __int128 v96; // xmm1
  __int64 v97; // rax
  void *v98; // rax
  __int128 v99; // xmm0
  __int128 v100; // xmm1
  void *v101; // rax
  __m128i v102; // xmm0
  __int128 v103; // xmm1
  __int128 v104; // xmm2
  __int64 v105; // rbx
  __int64 v106; // rbx
  void *v107; // rdi
  void *v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rax
  _OWORD v112[2]; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v113; // [rsp+90h] [rbp+10h] BYREF
  __m128i v114; // [rsp+98h] [rbp+18h]
  __m256i v115; // [rsp+A8h] [rbp+28h]
  __int128 v116; // [rsp+C8h] [rbp+48h]
  __int128 v117; // [rsp+D8h] [rbp+58h]
  __m128i v118; // [rsp+E8h] [rbp+68h]
  __int128 v119; // [rsp+F8h] [rbp+78h]
  __int128 v120; // [rsp+108h] [rbp+88h]
  __int128 v121; // [rsp+118h] [rbp+98h]
  __int128 v122; // [rsp+128h] [rbp+A8h]
  __int64 v123; // [rsp+138h] [rbp+B8h]
  _BYTE v124[31]; // [rsp+141h] [rbp+C1h]
  __m128i v125; // [rsp+160h] [rbp+E0h]
  __int128 v126; // [rsp+170h] [rbp+F0h]
  _OWORD v127[2]; // [rsp+180h] [rbp+100h] BYREF
  __int128 v128; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v129; // [rsp+1B0h] [rbp+130h]
  __int64 v130; // [rsp+1C0h] [rbp+140h]
  __int64 v131; // [rsp+1C8h] [rbp+148h]
  __int128 v132; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v133; // [rsp+1E0h] [rbp+160h]
  __int64 v134; // [rsp+1F0h] [rbp+170h]
  __int64 v135; // [rsp+1F8h] [rbp+178h]
  __int64 v136; // [rsp+208h] [rbp+188h]
  __int64 v137; // [rsp+210h] [rbp+190h]
  __int64 v138; // [rsp+218h] [rbp+198h]
  __int128 v139; // [rsp+220h] [rbp+1A0h]
  _BYTE v140[32]; // [rsp+230h] [rbp+1B0h] BYREF
  __int128 v141; // [rsp+250h] [rbp+1D0h] BYREF
  __m128i v142; // [rsp+260h] [rbp+1E0h] BYREF
  __int64 v143; // [rsp+270h] [rbp+1F0h] BYREF
  int v144; // [rsp+278h] [rbp+1F8h]
  __m256i v145; // [rsp+280h] [rbp+200h] BYREF
  __int128 v146; // [rsp+2A0h] [rbp+220h]
  __int128 v147; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v148; // [rsp+2C0h] [rbp+240h]
  __int64 v149; // [rsp+2C8h] [rbp+248h]
  __int128 v150; // [rsp+2D0h] [rbp+250h] BYREF
  __m128i v151; // [rsp+2E0h] [rbp+260h]
  __m256i v152; // [rsp+2F0h] [rbp+270h] BYREF
  __int128 v153; // [rsp+310h] [rbp+290h]
  unsigned __int64 v154; // [rsp+320h] [rbp+2A0h] BYREF
  _BYTE v155[96]; // [rsp+328h] [rbp+2A8h]
  __int128 v156; // [rsp+388h] [rbp+308h]
  __int128 v157; // [rsp+398h] [rbp+318h]
  __int128 v158; // [rsp+3A8h] [rbp+328h]
  __int128 v159; // [rsp+3B8h] [rbp+338h]
  __int64 v160; // [rsp+3C8h] [rbp+348h]
  __m256i v161; // [rsp+3D0h] [rbp+350h] BYREF
  __int128 v162; // [rsp+3F0h] [rbp+370h]
  __m256i v163; // [rsp+400h] [rbp+380h] BYREF
  __int128 v164; // [rsp+420h] [rbp+3A0h]
  __int64 v165; // [rsp+438h] [rbp+3B8h] BYREF
  __int64 v166; // [rsp+440h] [rbp+3C0h]
  __int64 v167; // [rsp+448h] [rbp+3C8h]
  __m128i v168; // [rsp+450h] [rbp+3D0h] BYREF
  __m256i v169; // [rsp+460h] [rbp+3E0h] BYREF
  __int128 v170; // [rsp+480h] [rbp+400h]
  __int128 v171; // [rsp+490h] [rbp+410h]
  __m128i v172; // [rsp+4A0h] [rbp+420h] BYREF
  __m128i v173; // [rsp+4B8h] [rbp+438h] BYREF
  __int64 v174; // [rsp+4C8h] [rbp+448h]
  unsigned int v175; // [rsp+4D4h] [rbp+454h]
  __int64 v176; // [rsp+4D8h] [rbp+458h]
  __int64 v177; // [rsp+4E0h] [rbp+460h]
  __int64 v178; // [rsp+4E8h] [rbp+468h]
  char v179; // [rsp+4F2h] [rbp+472h]
  char v180; // [rsp+4F3h] [rbp+473h]
  char v181; // [rsp+4F4h] [rbp+474h]
  char v182; // [rsp+4F5h] [rbp+475h]
  char v183; // [rsp+4F6h] [rbp+476h]
  char v184; // [rsp+4F7h] [rbp+477h]
  __int64 v185; // [rsp+4F8h] [rbp+478h]

  v185 = -2;
  sub_140932A70(&v154);
  v168 = *(__m128i *)v155;
  v169 = *(__m256i *)&v155[16];
  v170 = *(_OWORD *)&v155[48];
  v171 = *(_OWORD *)&v155[64];
  v172 = *(__m128i *)&v155[80];
  if ( v154 == 2 )
  {
    *(__m128i *)(a1 + 80) = v172;
    *(_OWORD *)(a1 + 64) = v171;
    v6 = _mm_load_si128(&v168);
    v7 = *(_OWORD *)v169.m256i_i8;
    v8 = *(_OWORD *)&v169.m256i_u64[2];
    *(_OWORD *)(a1 + 48) = v170;
    *(_OWORD *)(a1 + 32) = v8;
    *(_OWORD *)(a1 + 16) = v7;
    *(__m128i *)a1 = v6;
    return a1;
  }
  v123 = v160;
  v122 = v159;
  v121 = v158;
  v120 = v157;
  v119 = v156;
  v114 = v168;
  v115 = v169;
  v116 = v170;
  v117 = v171;
  v118 = _mm_load_si128(&v172);
  v113 = v154;
  v9 = sub_1416AEBD0();
  v143 = sub_1416D0210(v9, v10, 20, 0, (__int64)&off_141A907F8);
  v144 = v11;
  v152.m256i_i64[0] = 0;
  v152.m256i_i64[2] = 0;
  nullsub_1(v12, v11);
  v13 = (void *)sub_140001650(13, 1);
  if ( !v13 )
    sub_14196B2DB(1, 13);
  qmemcpy(v13, "includeLayers", 13);
  v145.m256i_i64[0] = 13;
  v145.m256i_i64[1] = (__int64)v13;
  v145.m256i_i64[2] = 13;
  LOWORD(v141) = 1;
  *(__m128i *)v169.m256i_i8 = _mm_loadu_si128(&v142);
  v168.m128i_i16[0] = 1;
  *(__int64 *)((char *)v168.m128i_i64 + 2) = *(_QWORD *)((char *)&v141 + 2);
  *(__int32 *)((char *)&v168.m128i_i32[2] + 2) = *(_DWORD *)((char *)&v141 + 10);
  v168.m128i_i16[7] = HIWORD(v141);
  sub_140A68320(&v163, &v152, &v145, &v168);
  if ( v163.m256i_i8[0] != -1 )
    sub_140032FF0(&v163);
  *(_OWORD *)((char *)&v163.m256i_u32[1] + 3) = *(_OWORD *)v152.m256i_i8;
  *(__int64 *)((char *)&v163.m256i_i64[2] + 7) = v152.m256i_i64[2];
  v168.m128i_i64[0] = (__int64)aConfigRead;
  v168.m128i_i64[1] = 11;
  v169.m256i_i8[0] = 5;
  *(__m128i *)&v169.m256i_i8[1] = _mm_loadu_si128((const __m128i *)&v163);
  *(_OWORD *)&v169.m256i_u64[2] = *(_OWORD *)&v152.m256i_u64[1];
  sub_140CED5F0(
    (unsigned int)&v154,
    (unsigned int)&v143,
    (unsigned int)&v113,
    (unsigned int)aConfigRead,
    11,
    (__int64)&v169);
  v14 = v154;
  v161 = *(__m256i *)v155;
  if ( v154 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v155[80];
    v15 = *(_OWORD *)&v155[32];
    v16 = *(_OWORD *)&v155[48];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v155[64];
    *(_OWORD *)(a1 + 56) = v16;
    *(_OWORD *)(a1 + 40) = v15;
    si128 = _mm_load_si128((const __m128i *)&v161);
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v161.m256i_u64[2];
    *(__m128i *)(a1 + 8) = si128;
    *(_QWORD *)a1 = v14;
    goto LABEL_100;
  }
  v127[0] = _mm_load_si128((const __m128i *)&v161);
  v127[1] = *(_OWORD *)&v161.m256i_u64[2];
  v18 = (void *)sub_1416724D0(aConfig_5, 6, v127);
  if ( !v18 )
    v18 = off_142240158;
  sub_1408D7AA0(&v154, v18, a3);
  if ( (_DWORD)v154 != -1 )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v155[72];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v155[56];
    v19 = _mm_loadu_si128((const __m128i *)&v154);
    v20 = *(_OWORD *)&v155[8];
    v21 = *(_OWORD *)&v155[24];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v155[40];
    *(_OWORD *)(a1 + 32) = v21;
    *(_OWORD *)(a1 + 16) = v20;
    *(__m128i *)a1 = v19;
    goto LABEL_99;
  }
  v173.m128i_i64[0] = 0;
  v173.m128i_i64[1] = 8;
  v174 = 0;
  v182 = 1;
  v22 = sub_1416AE140();
  if ( *(_BYTE *)(v22 + 16) == 1 )
  {
    v23 = *(_QWORD *)v22;
    v24 = *(_QWORD *)(v22 + 8);
  }
  else
  {
    v182 = 1;
    v105 = v22;
    v23 = sub_1416C5230();
    v22 = v105;
    *(_QWORD *)v105 = v23;
    *(_QWORD *)(v105 + 8) = v24;
    *(_BYTE *)(v105 + 16) = 1;
  }
  *(_QWORD *)v22 = v23 + 1;
  v133 = xmmword_141A90850;
  v132 = *(_OWORD *)&off_141A90840;
  v134 = v23;
  v135 = v24;
  v181 = 1;
  v25 = sub_1416AE140();
  if ( *(_BYTE *)(v25 + 16) == 1 )
  {
    v26 = *(_QWORD *)v25;
    v27 = *(_QWORD *)(v25 + 8);
  }
  else
  {
    v181 = 1;
    v106 = v25;
    v26 = sub_1416C5230();
    v25 = v106;
    *(_QWORD *)v106 = v26;
    *(_QWORD *)(v106 + 8) = v27;
    *(_BYTE *)(v106 + 16) = 1;
  }
  *(_QWORD *)v25 = v26 + 1;
  v129 = xmmword_141A90850;
  v128 = *(_OWORD *)&off_141A90840;
  v130 = v26;
  v131 = v27;
  v28 = 0;
  v178 = -1;
  while ( 1 )
  {
    v175 = v28;
    *(_QWORD *)&v147 = 0;
    v148 = 0;
    nullsub_1(v28, v27);
    v29 = (void *)sub_140001650(13, 1);
    if ( !v29 )
      sub_14196B2DB(1, 13);
    qmemcpy(v29, "includeHidden", 13);
    v165 = 13;
    v166 = (__int64)v29;
    v167 = 13;
    v151 = v142;
    v150 = v141;
    sub_140A68320(v140, &v147, &v165, &v150);
    if ( v140[0] != 0xFF )
      sub_140032FF0(v140);
    nullsub_1(v31, v30);
    v32 = sub_140001650(5, 1);
    if ( !v32 )
      sub_14196B2DB(1, 5);
    *(_BYTE *)(v32 + 4) = 116;
    *(_DWORD *)v32 = 1768778092;
    v165 = 5;
    v166 = v32;
    v167 = 5;
    LOBYTE(v150) = 2;
    *((_QWORD *)&v150 + 1) = 0;
    v151.m128i_i64[0] = 100;
    sub_140A68320(v140, &v147, &v165, &v150);
    if ( v140[0] != 0xFF )
      sub_140032FF0(v140);
    nullsub_1(v34, v33);
    v35 = sub_140001650(6, 1);
    if ( !v35 )
      sub_14196B2DB(1, 6);
    *(_WORD *)(v35 + 4) = 29295;
    *(_DWORD *)v35 = 1936880995;
    v165 = 6;
    v166 = v35;
    v167 = 6;
    v36 = v136;
    v37 = v137;
    v38 = v138;
    if ( v178 == -1 )
    {
      v40 = 0;
    }
    else
    {
      nullsub_1(v137, v138);
      v39 = sub_140001650(v3, 1);
      if ( !v39 )
      {
        v179 = 1;
        sub_14196B2DB(1, v3);
      }
      v36 = v39;
      sub_1419234B0(v39, v176, v3);
      v40 = 3;
      v37 = v3;
      v38 = v3;
    }
    LOBYTE(v150) = v40;
    v138 = v38;
    *((_QWORD *)&v150 + 1) = v38;
    v136 = v36;
    v151.m128i_i64[0] = v36;
    v137 = v37;
    v151.m128i_i64[1] = v37;
    v179 = 0;
    sub_140A68320(v140, &v147, &v165, &v150);
    if ( v140[0] != 0xFF )
      sub_140032FF0(v140);
    v150 = v147;
    v151.m128i_i64[0] = v148;
    *(_QWORD *)&v124[23] = v148;
    *(_OWORD *)&v124[7] = v147;
    v168.m128i_i64[0] = (__int64)aModelList;
    v168.m128i_i64[1] = 10;
    v169.m256i_i8[0] = 5;
    *(_OWORD *)&v169.m256i_u64[2] = *(_OWORD *)&v124[15];
    *(_OWORD *)&v169.m256i_i8[1] = *(_OWORD *)v124;
    v184 = 1;
    sub_140CED5F0(
      (unsigned int)&v154,
      (unsigned int)&v143,
      (unsigned int)&v113,
      (unsigned int)aModelList,
      10,
      (__int64)&v169);
    _RAX = v154;
    v125 = *(__m128i *)v155;
    v126 = *(_OWORD *)&v155[16];
    if ( v154 != -1 )
    {
      *(_QWORD *)(a1 + 88) = *(_QWORD *)&v155[80];
      v93 = *(_OWORD *)&v155[32];
      v94 = *(_OWORD *)&v155[48];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v155[64];
      *(_OWORD *)(a1 + 56) = v94;
      *(_OWORD *)(a1 + 40) = v93;
      v95 = v125;
      v96 = v126;
LABEL_104:
      *(_OWORD *)(a1 + 24) = v96;
      *(__m128i *)(a1 + 8) = v95;
      *(_QWORD *)a1 = _RAX;
      v70 = 1;
      goto LABEL_105;
    }
    v112[0] = v125;
    v112[1] = v126;
    v184 = 1;
    sub_140B94080(&v163, v112, aPage, 4, &off_141A90880, 2);
    if ( v163.m256i_i64[0] == -1 )
    {
      v184 = 1;
      sub_140CED780(&v154, v163.m256i_i64[1]);
      _RAX = v154;
      v161 = *(__m256i *)v155;
      v162 = *(_OWORD *)&v155[32];
      *(_QWORD *)(a1 + 88) = *(_QWORD *)&v155[80];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v155[64];
      *(_OWORD *)(a1 + 56) = *(_OWORD *)&v155[48];
      v95 = _mm_load_si128((const __m128i *)&v161);
      v96 = *(_OWORD *)&v161.m256i_u64[2];
      *(__m128i *)v145.m256i_i8 = v95;
      *(_OWORD *)&v145.m256i_u64[2] = *(_OWORD *)&v161.m256i_u64[2];
      v146 = v162;
      *(_OWORD *)(a1 + 40) = v162;
      goto LABEL_104;
    }
    ++v175;
    *(__m128i *)v145.m256i_i8 = _mm_loadu_si128((const __m128i *)&v163);
    *(_OWORD *)&v145.m256i_u64[2] = *(_OWORD *)&v163.m256i_u64[2];
    *(_OWORD *)v152.m256i_i8 = *(_OWORD *)v145.m256i_i8;
    *(_OWORD *)&v152.m256i_u64[2] = *(_OWORD *)&v163.m256i_u64[2];
    v153 = v164;
    v42 = 16 * v163.m256i_i64[2];
    v43 = v145.m256i_i64[1] + 80 * v163.m256i_i64[2];
    v163.m256i_i64[0] = v145.m256i_i64[1];
    v163.m256i_i64[1] = v145.m256i_i64[1];
    v139 = *(_OWORD *)v145.m256i_i8;
    v163.m256i_i64[2] = v145.m256i_i64[0];
    v163.m256i_i64[3] = v43;
    v44 = 5 * v42 - 80;
    v45 = v145.m256i_i64[1] + 80;
    v46 = v145.m256i_i64[1];
    v149 = v43;
    if ( v145.m256i_i64[1] != v43 )
    {
      do
      {
        v47 = v46 + 80;
        v163.m256i_i64[1] = v46 + 80;
        v48 = *(_QWORD *)v46;
        *(_QWORD *)&v171 = *(_QWORD *)(v46 + 72);
        v170 = *(_OWORD *)(v46 + 56);
        v169 = *(__m256i *)(v46 + 24);
        v168 = _mm_loadu_si128((const __m128i *)(v46 + 8));
        if ( v48 == -1 )
          break;
        v154 = v48;
        *(_QWORD *)&v155[64] = v171;
        v49 = _mm_load_si128(&v168);
        *(_OWORD *)&v155[48] = v170;
        *(__m256i *)&v155[16] = v169;
        *(__m128i *)v155 = v49;
        sub_1408FEA60(v49.m128i_i64[0], v49.m128i_i64[1]);
        if ( !v50 || !*(_QWORD *)&v155[32] )
          goto LABEL_51;
        v52 = *(_QWORD *)&v155[48];
        v51 = 24LL * *(_QWORD *)&v155[56];
        while ( v51 )
        {
          v51 -= 24;
          v53 = *(_QWORD *)(v52 + 16) == 0;
          v52 += 24;
          if ( v53 )
            goto LABEL_51;
        }
        v180 = 1;
        sub_1416DB410(&v161, &v154);
        v180 = 1;
        if ( (unsigned __int8)sub_140871180(&v132, &v161) )
        {
LABEL_51:
          nullsub_1(v51, v50);
          v63 = sub_140001650(71, 1);
          if ( !v63 )
          {
            v180 = 1;
            sub_14196B2DB(1, 71);
          }
          *(_OWORD *)(v63 + 48) = xmmword_141A90953;
          *(_OWORD *)(v63 + 32) = xmmword_141A90943;
          *(_OWORD *)(v63 + 16) = xmmword_141A90933;
          *(__m128i *)v63 = _mm_loadu_si128((const __m128i *)&xmmword_141A90923);
          *(_QWORD *)(v63 + 63) = 0xA18AE5BBBBE4B994uLL;
          *(_QWORD *)a1 = 10;
          *(_QWORD *)(a1 + 8) = 71;
          *(_QWORD *)(a1 + 16) = v63;
          *(_QWORD *)(a1 + 24) = 71;
          if ( v48 )
            sub_140001660(v49.m128i_i64[0], v48, 1);
          if ( *(_QWORD *)&v155[16] )
            sub_140001660(*(_QWORD *)&v155[24], *(_QWORD *)&v155[16], 1);
          v64 = *(_QWORD *)&v155[48];
          v65 = *(_QWORD *)&v155[56];
          if ( *(_QWORD *)&v155[56] )
          {
            v66 = (_QWORD *)(*(_QWORD *)&v155[48] + 8LL);
            do
            {
              v67 = *(v66 - 1);
              if ( v67 )
                sub_140001660(*v66, v67, 1);
              v66 += 3;
              --v65;
            }
            while ( v65 );
          }
          if ( *(_QWORD *)&v155[40] )
            sub_140001660(v64, 24LL * *(_QWORD *)&v155[40], 8);
          v68 = v178;
          if ( v149 != v47 )
          {
            v69 = v44 / 0x50;
            do
            {
              sub_1401B0A00(v45);
              v45 += 80;
              --v69;
            }
            while ( v69 );
          }
          HIDWORD(_RAX) = DWORD1(v139);
          if ( (_QWORD)v139 )
            sub_140001660(*((_QWORD *)&v139 + 1), 80 * v139, 8);
          v70 = 1;
          if ( v152.m256i_i64[3] != -1 && v152.m256i_i64[3] )
            sub_140001660(v153, v152.m256i_i64[3], 1);
          if ( v68 <= 0 )
            goto LABEL_73;
          goto LABEL_72;
        }
        v54 = v174;
        if ( v174 == v173.m128i_i64[0] )
          sub_141939900(&v173);
        v55 = v173.m128i_i64[1];
        v56 = 80 * v54;
        v57 = _mm_loadu_si128((const __m128i *)&v154);
        v58 = *(_OWORD *)&v155[8];
        v59 = *(_OWORD *)&v155[24];
        v60 = *(_OWORD *)&v155[40];
        *(_OWORD *)(v173.m128i_i64[1] + v56 + 64) = *(_OWORD *)&v155[56];
        *(_OWORD *)(v55 + v56 + 48) = v60;
        *(_OWORD *)(v55 + v56 + 32) = v59;
        *(_OWORD *)(v55 + v56 + 16) = v58;
        *(__m128i *)(v55 + v56) = v57;
        v174 = v54 + 1;
        v44 -= 80LL;
        v45 += 80;
        v46 = v47;
      }
      while ( v47 != v149 );
    }
    sub_1401A6940(&v163);
    v61 = v152.m256i_i64[3];
    if ( v152.m256i_i64[3] == -1 )
      break;
    v3 = *((_QWORD *)&v153 + 1);
    if ( !*((_QWORD *)&v153 + 1)
      || (v177 = v152.m256i_i64[3],
          v183 = 1,
          sub_1416DB410(&v154, &v152.m256i_u64[3]),
          v177 = v61,
          v183 = 1,
          (unsigned __int8)sub_140871180(&v128, &v154)) )
    {
      if ( v61 )
        sub_140001660(v153, v61, 1);
      v61 = v178;
LABEL_110:
      nullsub_1(v28, v27);
      v97 = sub_140001650(59, 1);
      if ( !v97 )
      {
        v184 = 1;
        sub_14196B2DB(1, 59);
      }
      *(_OWORD *)(v97 + 43) = *(__int128 *)((char *)&xmmword_141A90908 + 11);
      *(_OWORD *)(v97 + 32) = xmmword_141A90908;
      *(_OWORD *)(v97 + 16) = xmmword_141A908F8;
      *(__m128i *)v97 = _mm_loadu_si128((const __m128i *)&xmmword_141A908E8);
      *(_QWORD *)a1 = 10;
      *(_QWORD *)(a1 + 8) = 59;
      *(_QWORD *)(a1 + 16) = v97;
      *(_QWORD *)(a1 + 24) = 59;
      if ( v61 > 0 )
        sub_140001660(v176, v61, 1);
      v181 = 1;
      sub_140190060(&v128);
      v182 = 1;
      sub_140190060(&v132);
      sub_140B6B310(&v173);
      sub_140032FF0(v127);
      goto LABEL_100;
    }
    v62 = v153;
    v27 = v178;
    if ( v178 > 0 )
      sub_140001660(v176, v178, 1);
    v176 = v62;
    v28 = v175;
    v178 = v61;
    if ( v175 > 0x13 )
      goto LABEL_110;
  }
  v145.m256i_i64[0] = 0;
  v145.m256i_i64[2] = 0;
  nullsub_1(v28, v27);
  v98 = (void *)sub_140001650(13, 1);
  if ( !v98 )
    sub_14196B2DB(1, 13);
  qmemcpy(v98, "includeLayers", 13);
  v161.m256i_i64[0] = 13;
  v161.m256i_i64[1] = (__int64)v98;
  v161.m256i_i64[2] = 13;
  sub_140A68320(&v168, &v145, &v161, &v141);
  if ( v168.m128i_i8[0] != -1 )
    sub_140032FF0(&v168);
  *(_OWORD *)((char *)&v161.m256i_u32[1] + 3) = *(_OWORD *)v145.m256i_i8;
  *(__int64 *)((char *)&v161.m256i_i64[2] + 7) = v145.m256i_i64[2];
  v168.m128i_i64[0] = (__int64)aConfigRead;
  v168.m128i_i64[1] = 11;
  v169.m256i_i8[0] = 5;
  *(__m128i *)&v169.m256i_i8[1] = _mm_loadu_si128((const __m128i *)&v161);
  *(_OWORD *)&v169.m256i_u64[2] = *(_OWORD *)&v145.m256i_u64[1];
  v177 = -1;
  v183 = 1;
  sub_140CED5F0(
    (unsigned int)&v154,
    (unsigned int)&v143,
    (unsigned int)&v113,
    (unsigned int)aConfigRead,
    11,
    (__int64)&v169);
  _RAX = v154;
  v163 = *(__m256i *)v155;
  if ( v154 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v155[80];
    v99 = *(_OWORD *)&v155[32];
    v100 = *(_OWORD *)&v155[48];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v155[64];
    *(_OWORD *)(a1 + 56) = v100;
    *(_OWORD *)(a1 + 40) = v99;
    v95 = _mm_load_si128((const __m128i *)&v163);
    v96 = *(_OWORD *)&v163.m256i_u64[2];
    goto LABEL_104;
  }
  v168 = _mm_load_si128((const __m128i *)&v163);
  *(_OWORD *)v169.m256i_i8 = *(_OWORD *)&v163.m256i_u64[2];
  v101 = (void *)sub_1416724D0(aConfig_5, 6, &v168);
  if ( !v101 )
    v101 = off_142240158;
  sub_1408D7AA0(&v154, v101, a3);
  if ( (_DWORD)v154 != -1 )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v155[72];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v155[56];
    v102 = _mm_loadu_si128((const __m128i *)&v154);
    v103 = *(_OWORD *)&v155[8];
    v104 = *(_OWORD *)&v155[24];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v155[40];
    *(_OWORD *)(a1 + 32) = v104;
    *(_OWORD *)(a1 + 16) = v103;
    *(__m128i *)a1 = v102;
    goto LABEL_133;
  }
  v107 = (void *)sub_1416724D0(aConfig_5, 6, v127);
  v108 = (void *)sub_1416724D0(aConfig_5, 6, &v168);
  if ( !v107 )
    v107 = off_142240158;
  if ( !v108 )
    v108 = off_142240158;
  if ( (unsigned __int8)sub_140D75D50(v107, v108) )
  {
    *(_QWORD *)(a1 + 24) = v174;
    *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v173);
    *(_QWORD *)a1 = -1;
    v70 = 0;
  }
  else
  {
    nullsub_1(v110, v109);
    v111 = sub_140001650(72, 1);
    if ( !v111 )
      sub_14196B2DB(1, 72);
    *(_OWORD *)(v111 + 48) = xmmword_141A908D0;
    *(_OWORD *)(v111 + 32) = xmmword_141A908C0;
    *(_OWORD *)(v111 + 16) = xmmword_141A908B0;
    *(__m128i *)v111 = _mm_loadu_si128((const __m128i *)&xmmword_141A908A0);
    *(_QWORD *)(v111 + 64) = 0xA18AE5BBBBE4B994uLL;
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 72;
    *(_QWORD *)(a1 + 16) = v111;
    *(_QWORD *)(a1 + 24) = 72;
LABEL_133:
    v70 = 1;
  }
  v177 = -1;
  v183 = v70;
  HIDWORD(_RAX) = (unsigned __int64)sub_140032FF0(&v168) >> 32;
LABEL_105:
  v68 = v178;
  if ( v178 > 0 )
LABEL_72:
    sub_140001660(v176, v68, 1);
LABEL_73:
  v71 = *((_QWORD *)&v128 + 1);
  if ( *((_QWORD *)&v128 + 1) )
  {
    v72 = *((_QWORD *)&v129 + 1);
    if ( *((_QWORD *)&v129 + 1) )
    {
      v73 = v128;
      v74 = (const __m128i *)(v128 + 16);
      _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v128));
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v76 = _mm_load_si128(v74);
            v73 -= 384;
            ++v74;
            _R13D = _mm_movemask_epi8(v76) ^ 0xFFFF;
          }
          while ( !_R13D );
        }
        __asm { tzcnt   eax, r13d }
        v77 = -3LL * _RAX;
        v78 = *(_QWORD *)(v73 + 8 * v77 - 24);
        if ( v78 )
          sub_140001660(*(_QWORD *)(v73 + 8 * v77 - 16), v78, 1);
        --v72;
        _RAX = _R13D & (unsigned int)(_R13D - 1);
        _R13D &= _R13D - 1;
      }
      while ( v72 );
    }
    _RAX = (24 * v71 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v79 = _RAX + v71 + 17;
    if ( v79 )
      sub_140001660(v128 - _RAX, v79, 16);
  }
  v80 = *((_QWORD *)&v132 + 1);
  if ( *((_QWORD *)&v132 + 1) )
  {
    v81 = *((_QWORD *)&v133 + 1);
    if ( *((_QWORD *)&v133 + 1) )
    {
      v82 = v132;
      v83 = (const __m128i *)(v132 + 16);
      _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v132));
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v85 = _mm_load_si128(v83);
            v82 -= 384;
            ++v83;
            _R13D = _mm_movemask_epi8(v85) ^ 0xFFFF;
          }
          while ( !_R13D );
        }
        __asm { tzcnt   eax, r13d }
        v86 = -3LL * _RAX;
        v87 = *(_QWORD *)(v82 + 8 * v86 - 24);
        if ( v87 )
          sub_140001660(*(_QWORD *)(v82 + 8 * v86 - 16), v87, 1);
        --v81;
        _RAX = _R13D & (unsigned int)(_R13D - 1);
        _R13D &= _R13D - 1;
      }
      while ( v81 );
    }
    v88 = (24 * v80 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v89 = v88 + v80 + 17;
    if ( v89 )
      sub_140001660(v132 - v88, v89, 16);
  }
  if ( v70 )
  {
    v90 = v174;
    if ( v174 )
    {
      v91 = v173.m128i_i64[1];
      do
      {
        sub_1401B0A00(v91);
        v91 += 80;
        --v90;
      }
      while ( v90 );
    }
    if ( v173.m128i_i64[0] )
      sub_140001660(v173.m128i_i64[1], 80 * v173.m128i_i64[0], 8);
  }
LABEL_99:
  sub_140032FF0(v127);
LABEL_100:
  sub_140CB87B0(&v113);
  return a1;
}
