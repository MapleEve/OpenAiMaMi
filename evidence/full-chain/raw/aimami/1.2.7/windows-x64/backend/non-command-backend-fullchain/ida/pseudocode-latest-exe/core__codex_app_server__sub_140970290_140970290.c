// win 1.2.7 latest-exe | module src/core/codex_app_server.rs | ea 0x140970290 | successor of pre-update 0x140c1c870 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.466, "str_ov": 0.0, "verdict": "CONFIRMED_DIFF"}
void __fastcall sub_140970290(_QWORD *a1, __int64 a2, char a3)
{
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  char v10; // r12
  __m256i *v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __m256i *v23; // rbx
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // rcx
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  _DWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  _DWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  void *v44; // rax
  __int64 v45; // rdx
  _DWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  void *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  void *v52; // rax
  _QWORD *v54; // rdx
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // r12
  __m128i v58; // xmm0
  __int64 v59; // rdi
  __int64 v60; // r13
  __int64 v61; // rcx
  __int64 v62; // rdx
  unsigned __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdi
  unsigned __int64 v66; // rdi
  __int64 v67; // rcx
  __int64 v68; // r12
  __int64 v69; // rdi
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // r12
  __int64 v75; // rbx
  __int64 v76; // rsi
  __int64 v77; // r12
  const __m128i *v78; // rdi
  __m128i v80; // xmm0
  __int64 v81; // rax
  __int64 v82; // rdx
  unsigned __int64 v83; // rax
  __int64 v84; // rbx
  __int64 v85; // rbx
  __int64 v86; // rdi
  __int64 v87; // rdi
  __int64 v88; // rdx
  __m128i v89; // xmm0
  _QWORD *v90; // rcx
  __int64 v91; // rax
  _QWORD *v92; // rcx
  __int64 v93; // rsi
  __int64 v94; // rdi
  __int64 v95; // rbx
  const __m128i *v96; // r14
  __m128i si128; // xmm0
  __int64 v99; // rax
  unsigned __int64 v100; // rax
  __int64 v101; // rsi
  __int64 v103; // rsi
  __int64 v104; // rdi
  __int64 v105; // rbx
  const __m128i *v106; // r14
  __m128i v108; // xmm0
  __int64 v109; // rax
  unsigned __int64 v110; // rax
  __int64 v111; // rsi
  __int64 v112; // rcx
  __int64 v113; // rsi
  __int64 v114; // rcx
  __int64 v115; // rdx
  __int64 v116; // r8
  _QWORD *v117; // rcx
  _QWORD *v118; // rcx
  __int64 v120; // rsi
  __int64 v121; // rdi
  __int64 v122; // rbx
  const __m128i *v123; // r14
  __m128i v125; // xmm0
  __int64 v126; // rax
  __int64 v127; // rdx
  __int128 v128; // xmm0
  __int128 v129; // xmm1
  __int128 v130; // xmm0
  unsigned __int64 v131; // rax
  __int64 v132; // rsi
  _QWORD *v133; // rcx
  _OWORD v134[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v135[31]; // [rsp+61h] [rbp-1Fh]
  __m128i v136; // [rsp+80h] [rbp+0h] BYREF
  __int64 v137; // [rsp+90h] [rbp+10h]
  __int64 v138; // [rsp+98h] [rbp+18h]
  __int64 v139; // [rsp+A0h] [rbp+20h]
  _WORD v140[4]; // [rsp+A8h] [rbp+28h]
  __m128i v141; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v142; // [rsp+C0h] [rbp+40h]
  __m128i v143; // [rsp+D0h] [rbp+50h]
  __int64 v144; // [rsp+E0h] [rbp+60h]
  _BYTE v145[40]; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v146; // [rsp+118h] [rbp+98h]
  __int128 v147; // [rsp+128h] [rbp+A8h]
  __int128 v148; // [rsp+138h] [rbp+B8h]
  __int128 v149; // [rsp+148h] [rbp+C8h]
  char v150[256]; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v151; // [rsp+258h] [rbp+1D8h] BYREF
  int v152; // [rsp+260h] [rbp+1E0h]
  __int64 v153; // [rsp+268h] [rbp+1E8h]
  __int64 v154; // [rsp+270h] [rbp+1F0h]
  __int64 v155; // [rsp+278h] [rbp+1F8h]
  __int64 v156; // [rsp+280h] [rbp+200h]
  __int64 v157; // [rsp+288h] [rbp+208h]
  __int64 v158; // [rsp+290h] [rbp+210h]
  __int64 v159; // [rsp+298h] [rbp+218h]
  __m256i v160; // [rsp+2A0h] [rbp+220h] BYREF
  __int64 v161; // [rsp+2C0h] [rbp+240h]
  __int128 v162; // [rsp+2C8h] [rbp+248h]
  __int128 v163; // [rsp+2D8h] [rbp+258h]
  __int128 v164; // [rsp+2E8h] [rbp+268h]
  __int128 v165; // [rsp+2F8h] [rbp+278h]
  unsigned __int64 v166; // [rsp+308h] [rbp+288h] BYREF
  __int64 v167; // [rsp+310h] [rbp+290h]
  __int64 v168; // [rsp+318h] [rbp+298h]
  __int64 v169; // [rsp+328h] [rbp+2A8h]
  __int64 v170; // [rsp+330h] [rbp+2B0h]
  __int64 v171; // [rsp+340h] [rbp+2C0h]
  __int64 v172; // [rsp+348h] [rbp+2C8h]
  __int64 v173; // [rsp+358h] [rbp+2D8h]
  __int64 v174; // [rsp+360h] [rbp+2E0h]
  __int64 v175; // [rsp+370h] [rbp+2F0h]
  __int64 v176; // [rsp+378h] [rbp+2F8h]
  __int64 v177; // [rsp+388h] [rbp+308h]
  __int64 v178; // [rsp+390h] [rbp+310h]
  __int64 v179; // [rsp+3A0h] [rbp+320h]
  __int64 v180; // [rsp+3A8h] [rbp+328h]
  unsigned __int64 v181; // [rsp+3B8h] [rbp+338h]
  __int64 v182; // [rsp+3C0h] [rbp+340h]
  _BYTE v183[48]; // [rsp+3D0h] [rbp+350h] BYREF
  __m128i v184; // [rsp+400h] [rbp+380h] BYREF
  __int64 v185; // [rsp+410h] [rbp+390h]
  __int128 v186; // [rsp+420h] [rbp+3A0h] BYREF
  __int128 v187; // [rsp+430h] [rbp+3B0h]
  __int64 v188; // [rsp+440h] [rbp+3C0h]
  __int64 v189; // [rsp+448h] [rbp+3C8h]
  __int128 v190; // [rsp+450h] [rbp+3D0h] BYREF
  __int128 v191; // [rsp+460h] [rbp+3E0h]
  __int64 v192; // [rsp+470h] [rbp+3F0h]
  __int64 v193; // [rsp+478h] [rbp+3F8h]
  __int64 v194; // [rsp+480h] [rbp+400h]
  __int64 v195; // [rsp+488h] [rbp+408h]
  __int64 v196; // [rsp+490h] [rbp+410h]
  __int64 v197; // [rsp+498h] [rbp+418h]
  __int64 v198; // [rsp+4A0h] [rbp+420h] BYREF
  __int128 v199; // [rsp+4A8h] [rbp+428h] BYREF
  __int64 v200; // [rsp+4B8h] [rbp+438h]
  __int64 v201; // [rsp+4C0h] [rbp+440h]
  __m128i v202; // [rsp+4C8h] [rbp+448h] BYREF
  unsigned __int64 v203; // [rsp+4D8h] [rbp+458h]
  __int64 v204; // [rsp+4E0h] [rbp+460h]
  unsigned __int64 v205; // [rsp+4E8h] [rbp+468h]
  __int64 v206; // [rsp+4F0h] [rbp+470h]
  __int64 v207; // [rsp+4F8h] [rbp+478h]
  __int64 v208; // [rsp+500h] [rbp+480h]
  __int64 v209; // [rsp+508h] [rbp+488h]
  _QWORD *v210; // [rsp+510h] [rbp+490h]
  __int64 v211; // [rsp+518h] [rbp+498h]
  __int64 v212; // [rsp+520h] [rbp+4A0h]
  unsigned __int64 v213; // [rsp+528h] [rbp+4A8h]
  __m256i v214; // [rsp+530h] [rbp+4B0h] BYREF
  _DWORD *v215; // [rsp+558h] [rbp+4D8h]
  char v216; // [rsp+562h] [rbp+4E2h]
  char v217; // [rsp+563h] [rbp+4E3h]
  char v218; // [rsp+564h] [rbp+4E4h]
  char v219; // [rsp+566h] [rbp+4E6h]
  char v220; // [rsp+567h] [rbp+4E7h]
  __int64 v221; // [rsp+568h] [rbp+4E8h]

  v221 = -2;
  v157 = a2;
  v151 = sub_1416AEBD0();
  v152 = v5;
  v202.m128i_i64[0] = 0;
  v202.m128i_i64[1] = 8;
  v203 = 0;
  v6 = sub_1416AE140();
  v7 = v6;
  if ( *(_BYTE *)(v6 + 16) == 1 )
  {
    v8 = *(_QWORD *)v6;
    v9 = *(_QWORD *)(v7 + 8);
  }
  else
  {
    v8 = sub_1416C5230();
    *(_QWORD *)v7 = v8;
    *(_QWORD *)(v7 + 8) = v9;
    *(_BYTE *)(v7 + 16) = 1;
  }
  *(_QWORD *)v7 = v8 + 1;
  v191 = xmmword_141A57990;
  v190 = *(_OWORD *)&off_141A57980;
  v192 = v8;
  v193 = v9;
  v139 = 2;
  v140[0] = 256;
  v10 = a3 ^ 1;
  v11 = &v160;
  v12 = 0;
  while ( v12 != 2 )
  {
    v195 = v12 + 1;
    v138 = v12 + 1;
    v217 = *((_BYTE *)v140 + v12);
    v197 = v209;
    v196 = -1;
    v13 = sub_1416AE140();
    v14 = *(_BYTE *)(v13 + 16) == 1;
    v210 = a1;
    v218 = v10;
    if ( v14 )
    {
      v15 = *(_QWORD *)v13;
      v16 = *(_QWORD *)(v13 + 8);
    }
    else
    {
      v197 = v209;
      v196 = -1;
      v87 = v13;
      v15 = sub_1416C5230();
      v13 = v87;
      *(_QWORD *)v87 = v15;
      *(_QWORD *)(v87 + 8) = v16;
      *(_BYTE *)(v87 + 16) = 1;
    }
    *(_QWORD *)v13 = v15 + 1;
    v187 = xmmword_141A57990;
    v186 = *(_OWORD *)&off_141A57980;
    v188 = v15;
    v189 = v16;
    v17 = 0;
    v211 = -1;
    while ( 1 )
    {
      if ( (unsigned __int64)sub_1416AED20(&v151) > 0x1D )
      {
        nullsub_1(v19, v18);
        _RAX = sub_140001650(62, 1);
        v74 = v211;
        if ( !_RAX )
          sub_14196B2DB(1, 62);
        *(_OWORD *)(_RAX + 46) = *(__int128 *)((char *)&xmmword_141A57BE2 + 14);
        *(_OWORD *)(_RAX + 32) = xmmword_141A57BE2;
        *(_OWORD *)(_RAX + 16) = xmmword_141A57BD2;
        *(__m128i *)_RAX = _mm_loadu_si128((const __m128i *)&xmmword_141A57BC2);
        v118 = v210;
        *v210 = 10;
        v118[1] = 62;
        v118[2] = _RAX;
        v118[3] = 62;
        goto LABEL_125;
      }
      *(_QWORD *)&v199 = 0;
      v200 = 0;
      nullsub_1(v19, v18);
      v20 = (_QWORD *)sub_140001650(8, 1);
      if ( !v20 )
        sub_14196B2DB(1, 8);
      *v20 = 0x6465766968637261LL;
      v214.m256i_i64[0] = 8;
      v214.m256i_i64[1] = (__int64)v20;
      v214.m256i_i64[2] = 8;
      v145[0] = 1;
      v145[1] = v217;
      sub_140A68320(v11, &v199, &v214, v145);
      if ( v160.m256i_i8[0] != -1 )
        sub_140032FF0(v11);
      v23 = v11;
      v24 = v17;
      nullsub_1(v22, v21);
      v25 = sub_140001650(6, 1);
      if ( !v25 )
        sub_14196B2DB(1, 6);
      *(_WORD *)(v25 + 4) = 29295;
      *(_DWORD *)v25 = 1936880995;
      v214.m256i_i64[0] = 6;
      v214.m256i_i64[1] = v25;
      v214.m256i_i64[2] = 6;
      v27 = v154;
      v28 = v155;
      v29 = v158;
      v30 = v156;
      if ( v211 == -1 )
      {
        LOBYTE(v26) = 0;
      }
      else
      {
        if ( v158 < 0 )
        {
          v31 = 0;
LABEL_114:
          v216 = 1;
          sub_14196B2DB(v31, v29);
        }
        LOBYTE(v26) = 3;
        if ( v158 )
        {
          nullsub_1(v156, v26);
          v31 = 1;
          v32 = sub_140001650(v29, 1);
          if ( !v32 )
            goto LABEL_114;
          v27 = v32;
          sub_1419234B0(v32, v209, v29);
          v28 = v29;
          v30 = v29;
          LOBYTE(v26) = 3;
        }
        else
        {
          v27 = 1;
          v28 = 0;
          v30 = 0;
        }
      }
      v145[0] = v26;
      v156 = v30;
      *(_QWORD *)&v145[8] = v30;
      v154 = v27;
      *(_QWORD *)&v145[16] = v27;
      v155 = v28;
      *(_QWORD *)&v145[24] = v28;
      v216 = 0;
      v11 = v23;
      sub_140A68320(v23, &v199, &v214, v145);
      if ( v160.m256i_i8[0] != -1 )
        sub_140032FF0(v23);
      nullsub_1(v34, v33);
      v35 = sub_140001650(5, 1);
      if ( !v35 )
        sub_14196B2DB(1, 5);
      *(_BYTE *)(v35 + 4) = 116;
      *(_DWORD *)v35 = 1768778092;
      v214.m256i_i64[0] = 5;
      v214.m256i_i64[1] = v35;
      v214.m256i_i64[2] = 5;
      v145[0] = 2;
      *(_QWORD *)&v145[8] = 0;
      *(_QWORD *)&v145[16] = 100;
      sub_140A68320(v23, &v199, &v214, v145);
      if ( v160.m256i_i8[0] != -1 )
        sub_140032FF0(v23);
      nullsub_1(v37, v36);
      v38 = (_DWORD *)sub_140001650(7, 1);
      if ( !v38 )
        sub_14196B2DB(1, 7);
      *(_DWORD *)((char *)v38 + 3) = 2036681588;
      *v38 = 1953656691;
      v214.m256i_i64[0] = 7;
      v214.m256i_i64[1] = (__int64)v38;
      v214.m256i_i64[2] = 7;
      nullsub_1(v40, v39);
      v41 = (_DWORD *)sub_140001650(10, 1);
      v215 = v41;
      if ( !v41 )
        sub_14196B2DB(1, 10);
      qmemcpy(v41, "recency_at", 10);
      v145[0] = 3;
      *(_QWORD *)&v145[8] = 10;
      *(_QWORD *)&v145[16] = v41;
      *(_QWORD *)&v145[24] = 10;
      sub_140A68320(v23, &v199, &v214, v145);
      if ( v160.m256i_i8[0] != -1 )
        sub_140032FF0(v23);
      nullsub_1(v43, v42);
      v44 = (void *)sub_140001650(13, 1);
      if ( !v44 )
        sub_14196B2DB(1, 13);
      qmemcpy(v44, "sortDirection", 13);
      v214.m256i_i64[0] = 13;
      v214.m256i_i64[1] = (__int64)v44;
      v214.m256i_i64[2] = 13;
      nullsub_1(0x6572694474726F73LL, v45);
      v46 = (_DWORD *)sub_140001650(4, 1);
      v215 = v46;
      if ( !v46 )
        sub_14196B2DB(1, 4);
      *v46 = 1668506980;
      v145[0] = 3;
      *(_QWORD *)&v145[8] = 4;
      *(_QWORD *)&v145[16] = v46;
      *(_QWORD *)&v145[24] = 4;
      sub_140A68320(v23, &v199, &v214, v145);
      if ( v160.m256i_i8[0] != -1 )
        sub_140032FF0(v23);
      nullsub_1(v48, v47);
      v49 = (void *)sub_140001650(14, 1);
      if ( !v49 )
        sub_14196B2DB(1, 14);
      qmemcpy(v49, "useStateDbOnly", 14);
      v214.m256i_i64[0] = 14;
      v214.m256i_i64[1] = (__int64)v49;
      v214.m256i_i64[2] = 14;
      v145[0] = 1;
      v145[1] = v218;
      sub_140A68320(v23, &v199, &v214, v145);
      if ( v160.m256i_i8[0] != -1 )
        sub_140032FF0(v23);
      nullsub_1(v51, v50);
      v52 = (void *)sub_140001650(11, 1);
      if ( !v52 )
        sub_14196B2DB(1, 11);
      qmemcpy(v52, "sourceKinds", 11);
      v214.m256i_i64[0] = 11;
      v214.m256i_i64[1] = (__int64)v52;
      v214.m256i_i64[2] = 11;
      v219 = 1;
      sub_140B727C0(v145, &off_141A57A78);
      if ( v145[0] == 0xFF )
      {
        v160.m256i_i64[0] = *(_QWORD *)&v145[8];
        sub_14196B5F0(
          (unsigned int)aCalledResultUn_13,
          43,
          (unsigned int)&v160,
          (unsigned int)&off_141A5A840,
          (__int64)&off_141A579F8);
      }
      v160 = *(__m256i *)v145;
      v219 = 0;
      sub_140A68320(v145, &v199, &v214, v23);
      if ( v145[0] != 0xFF )
        sub_140032FF0(v145);
      *(_OWORD *)v145 = v199;
      *(_QWORD *)&v145[16] = v200;
      *(_QWORD *)&v135[23] = v200;
      *(_OWORD *)&v135[7] = v199;
      *(_OWORD *)&v160.m256i_u64[2] = *(_OWORD *)&v135[15];
      *(_OWORD *)&v160.m256i_i8[1] = *(_OWORD *)v135;
      v160.m256i_i8[0] = 5;
      sub_1409316C0((__int128 *)v145, v157);
      _RAX = *(_QWORD *)v145;
      v214 = *(__m256i *)&v145[8];
      if ( *(_QWORD *)v145 != -1 )
      {
        v54 = v210;
        v210[11] = v149;
        v128 = v146;
        v129 = v147;
        *(_OWORD *)(v54 + 9) = v148;
        *(_OWORD *)(v54 + 7) = v129;
        *(_OWORD *)(v54 + 5) = v128;
        v130 = *(_OWORD *)v214.m256i_i8;
        *(_OWORD *)(v54 + 3) = *(_OWORD *)&v214.m256i_u64[2];
        *(_OWORD *)(v54 + 1) = v130;
        *v54 = _RAX;
        v74 = v211;
        goto LABEL_125;
      }
      v134[0] = _mm_load_si128((const __m128i *)&v214);
      v134[1] = *(_OWORD *)&v214.m256i_u64[2];
      sub_140B843C0(v145, v134, aThreadlistpage, 14, &off_141A58140, 2, 0);
      v54 = *(_QWORD **)&v145[8];
      if ( *(_QWORD *)v145 == -1 )
      {
        _RAX = (__int64)v210;
        *v210 = 3;
        *(_QWORD *)(_RAX + 8) = v54;
        v74 = v211;
        goto LABEL_125;
      }
      v17 = v24 + 1;
      v212 = *(_QWORD *)&v145[24];
      v207 = *(_QWORD *)&v145[32];
      v194 = v146;
      v55 = *(_QWORD *)&v145[8] + 32LL * *(_QWORD *)&v145[16];
      *(_QWORD *)&v199 = *(_QWORD *)&v145[8];
      *((_QWORD *)&v199 + 1) = *(_QWORD *)&v145[8];
      v208 = *(_QWORD *)v145;
      v200 = *(_QWORD *)v145;
      v201 = v55;
      v56 = *(_QWORD *)&v145[8];
      v57 = *(_QWORD *)&v145[8] + 32LL;
      v159 = 32LL * *(_QWORD *)&v145[16];
      v205 = 32LL * *(_QWORD *)&v145[16] - 32;
      v204 = *(_QWORD *)&v145[8];
      while ( 1 )
      {
        if ( v56 == v55 )
        {
          v67 = v55;
          goto LABEL_89;
        }
        v206 = v56 + 32;
        *((_QWORD *)&v199 + 1) = v56 + 32;
        if ( *(_BYTE *)v56 == 0xFF )
          break;
        v214.m256i_i8[0] = *(_BYTE *)v56;
        v58 = _mm_loadu_si128((const __m128i *)(v56 + 1));
        *(_OWORD *)&v214.m256i_u64[2] = *(_OWORD *)(v56 + 16);
        *(__m128i *)&v214.m256i_i8[1] = v58;
        sub_140B7FC00(
          v145,
          &v214,
          "AppServerThreadidcwdpathnamepreviewsourceagentNicknameagentRoleprojectIdhistoryModegitInfoupdatedAtrecencyAtturns",
          15,
          &off_141A58030,
          15);
        v59 = *(_QWORD *)v145;
        if ( *(_QWORD *)v145 == 2 )
        {
          v198 = *(_QWORD *)&v145[8];
          v184.m128i_i64[0] = (__int64)&v198;
          v184.m128i_i64[1] = (__int64)sub_14166FAD0;
          sub_1416DAFA0(&v136, &unk_141A58E4C, &v184);
          v184 = _mm_loadu_si128(&v136);
          v185 = v137;
          sub_140032F30(&v198);
          v89 = _mm_load_si128(&v184);
          v143 = v89;
          v144 = v185;
          v90 = v210;
          v210[3] = v185;
          *(__m128i *)(v90 + 1) = v89;
          *v90 = 10;
          goto LABEL_118;
        }
        v60 = *(_QWORD *)&v145[8];
        v142 = *(_QWORD *)&v145[32];
        v141 = *(__m128i *)&v145[16];
        v165 = v149;
        v164 = v148;
        v163 = v147;
        v162 = v146;
        sub_1419234B0(&v166, v150, 248);
        v144 = v142;
        v143 = _mm_load_si128(&v141);
        v161 = v142;
        *(__m128i *)&v160.m256i_u64[2] = v143;
        v160.m256i_i64[0] = v59;
        v160.m256i_i64[1] = v60;
        sub_1408FEA60(v143.m128i_i64[1], v142);
        if ( !v62 )
        {
          nullsub_1(v61, 0);
          v91 = sub_140001650(40, 1);
          if ( !v91 )
          {
            v220 = 1;
            sub_14196B2DB(1, 40);
          }
          *(_OWORD *)(v91 + 16) = xmmword_141A57B6D;
          *(__m128i *)v91 = _mm_loadu_si128((const __m128i *)&xmmword_141A57B5D);
          *(_QWORD *)(v91 + 32) = 0x4449208BA8E7BFBALL;
          v92 = v210;
          *v210 = 9;
          v92[1] = 40;
          v92[2] = v91;
          v92[3] = 40;
          sub_140906010(&v160);
LABEL_118:
          v213 = (unsigned __int64)(v55 - v206) >> 5;
          v205 >>= 5;
          v215 = nullptr;
          while ( (_DWORD *)v205 != v215 )
          {
            v215 = (_DWORD *)((char *)v215 + 1);
            sub_1401AB4D0(v57, v88);
            v57 += 32;
          }
          if ( v208 )
            sub_140001660(v204, 32 * v208, 8);
          v54 = (_QWORD *)v212;
          _RAX = v212 - 1;
          v74 = v211;
          if ( (unsigned __int64)(v212 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
LABEL_124:
            sub_140001660(v207, v54, 1);
LABEL_125:
          v93 = *((_QWORD *)&v186 + 1);
          if ( *((_QWORD *)&v186 + 1) )
          {
            v94 = *((_QWORD *)&v187 + 1);
            if ( *((_QWORD *)&v187 + 1) )
            {
              v95 = v186;
              v96 = (const __m128i *)(v186 + 16);
              _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v186));
              do
              {
                if ( !(_WORD)_R15D )
                {
                  do
                  {
                    si128 = _mm_load_si128(v96);
                    v95 -= 384;
                    ++v96;
                    _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
                  }
                  while ( !_R15D );
                }
                __asm { tzcnt   eax, r15d }
                v99 = -3 * _RAX;
                v54 = *(_QWORD **)(v95 + 8 * v99 - 24);
                if ( v54 )
                  sub_140001660(*(_QWORD *)(v95 + 8 * v99 - 16), v54, 1);
                --v94;
                _RAX = _R15D & (unsigned int)(_R15D - 1);
                _R15D &= _R15D - 1;
              }
              while ( v94 );
            }
            v100 = (24 * v93 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
            v101 = v100 + v93 + 17;
            if ( v101 )
              sub_140001660(v186 - v100, v101, 16);
          }
          _RAX = v74 - 1;
          if ( (unsigned __int64)(v74 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            sub_140001660(v209, v74, 1);
          v103 = *((_QWORD *)&v190 + 1);
          if ( *((_QWORD *)&v190 + 1) )
          {
            v104 = *((_QWORD *)&v191 + 1);
            if ( *((_QWORD *)&v191 + 1) )
            {
              v105 = v190;
              v106 = (const __m128i *)(v190 + 16);
              _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v190));
              do
              {
                if ( !(_WORD)_R15D )
                {
                  do
                  {
                    v108 = _mm_load_si128(v106);
                    v105 -= 384;
                    ++v106;
                    _R15D = _mm_movemask_epi8(v108) ^ 0xFFFF;
                  }
                  while ( !_R15D );
                }
                __asm { tzcnt   eax, r15d }
                v109 = -3 * _RAX;
                v54 = *(_QWORD **)(v105 + 8 * v109 - 24);
                if ( v54 )
                  sub_140001660(*(_QWORD *)(v105 + 8 * v109 - 16), v54, 1);
                --v104;
                _RAX = _R15D & (unsigned int)(_R15D - 1);
                _R15D &= _R15D - 1;
              }
              while ( v104 );
            }
            v110 = (24 * v103 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
            v111 = v110 + v103 + 17;
            if ( v111 )
              sub_140001660(v190 - v110, v111, 16);
          }
          v112 = v202.m128i_i64[1];
          v213 = v203;
          v215 = nullptr;
          v205 = v202.m128i_u64[1];
          while ( (_DWORD *)v213 != v215 )
          {
            v215 = (_DWORD *)((char *)v215 + 1);
            v113 = v112 + 352;
            sub_1401AEAD0(v112, v54);
            v112 = v113;
          }
          if ( v202.m128i_i64[0] )
          {
            v114 = v202.m128i_i64[1];
            v115 = 352 * v202.m128i_i64[0];
            v116 = 8;
            goto LABEL_152;
          }
          return;
        }
        v183[40] = v217;
        v220 = 1;
        sub_1416DB410(v145, &v160.m256i_u64[2]);
        v11 = &v160;
        v220 = 1;
        if ( (unsigned __int8)sub_140871180(&v190, v145) )
        {
          if ( v160.m256i_i64[2] )
            sub_140001660(v160.m256i_i64[3], v160.m256i_i64[2], 1);
          if ( (_QWORD)v162 )
            sub_140001660(*((_QWORD *)&v162 + 1), v162, 1);
          if ( v167 != -1 && v167 )
            sub_140001660(v168, v167, 1);
          if ( v169 != -1 && v169 )
            sub_140001660(v170, v169, 1);
          if ( *((_QWORD *)&v163 + 1) )
            sub_140001660(v164, *((_QWORD *)&v163 + 1), 1);
          sub_140032FF0(v183);
          if ( v171 != -1 && v171 )
            sub_140001660(v172, v171, 1);
          if ( v173 != -1 && v173 )
            sub_140001660(v174, v173, 1);
          if ( v175 != -1 && v175 )
            sub_140001660(v176, v175, 1);
          if ( v177 != -1 && v177 )
            sub_140001660(v178, v177, 1);
          if ( v179 != -1 && v179 )
            sub_140001660(v180, v179, 1);
          v63 = v181;
          if ( v181 <= 0xFFFFFFFFFFFFFFFDuLL && v181 )
            sub_140001660(v182, v181, 1);
          v64 = *((_QWORD *)&v165 + 1);
          v213 = v166;
          v153 = *((_QWORD *)&v165 + 1);
          v215 = nullptr;
          while ( (_DWORD *)v213 != v215 )
          {
            v215 = (_DWORD *)((char *)v215 + 1);
            v65 = v64 + 32;
            sub_1401AB4D0(v64, v63);
            v64 = v65;
          }
          v54 = (_QWORD *)v165;
          if ( (_QWORD)v165 )
            sub_140001660(*((_QWORD *)&v165 + 1), 32 * v165, 8);
        }
        else
        {
          sub_1419234B0(v145, &v160, 352);
          v66 = v203;
          if ( v203 == v202.m128i_i64[0] )
            sub_141939C80(&v202);
          sub_1419234B0(v202.m128i_i64[1] + 352 * v66, v145, 352);
          v203 = v66 + 1;
        }
        v57 += 32;
        v205 -= 32LL;
        v56 = v206;
      }
      v67 = v206;
LABEL_89:
      v213 = (unsigned __int64)(v55 - v67) >> 5;
      v206 = v67;
      v215 = nullptr;
      v68 = v195;
      while ( (_DWORD *)v213 != v215 )
      {
        v215 = (_DWORD *)((char *)v215 + 1);
        v69 = v67 + 32;
        sub_1401AB4D0(v67, v54);
        v67 = v69;
      }
      if ( v208 )
        sub_140001660(v204, 32 * v208, 8);
      HIDWORD(_RAX) = HIDWORD(v212);
      if ( v212 == -1 )
        break;
      v160.m256i_i64[0] = v212;
      v160.m256i_i64[1] = v207;
      v160.m256i_i64[2] = v194;
      sub_1416DB410(v145, v11);
      if ( (unsigned __int8)sub_140871180(&v186, v145) )
      {
        nullsub_1(v72, v71);
        _RAX = sub_140001650(55, 1);
        v74 = v211;
        if ( !_RAX )
          sub_14196B2DB(1, 55);
        *(_OWORD *)(_RAX + 32) = xmmword_141A57B46;
        *(_OWORD *)(_RAX + 16) = xmmword_141A57B36;
        *(__m128i *)_RAX = _mm_loadu_si128((const __m128i *)&xmmword_141A57B26);
        *(_QWORD *)(_RAX + 47) = 0x87A0E6B8B8E6B5A1uLL;
        v133 = v210;
        *v210 = 10;
        v133[1] = 55;
        v133[2] = _RAX;
        v133[3] = 55;
        v54 = (_QWORD *)v212;
        if ( v212 )
          goto LABEL_124;
        goto LABEL_125;
      }
      v73 = v211;
      if ( (unsigned __int64)(v211 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v209, v211, 1);
      v158 = v194;
      v209 = v207;
      v74 = v212;
      v211 = v212;
      if ( v17 > 0x63 )
      {
        nullsub_1(v72, v73);
        _RAX = sub_140001650(49, 1);
        if ( !_RAX )
          sub_14196B2DB(1, 49);
        *(_OWORD *)(_RAX + 32) = xmmword_141A579C0;
        *(_OWORD *)(_RAX + 16) = xmmword_141A579B0;
        *(_OWORD *)_RAX = xmmword_141A579A0;
        *(_BYTE *)(_RAX + 48) = -112;
        v117 = v210;
        *v210 = 10;
        v117[1] = 49;
        v117[2] = _RAX;
        v117[3] = 49;
        goto LABEL_125;
      }
    }
    v75 = *((_QWORD *)&v186 + 1);
    if ( *((_QWORD *)&v186 + 1) )
    {
      v76 = *((_QWORD *)&v187 + 1);
      if ( *((_QWORD *)&v187 + 1) )
      {
        v77 = v186;
        v78 = (const __m128i *)(v186 + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v186));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v80 = _mm_load_si128(v78);
              v77 -= 384;
              ++v78;
              _R15D = _mm_movemask_epi8(v80) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v81 = -3 * _RAX;
          v82 = *(_QWORD *)(v77 + 8 * v81 - 24);
          if ( v82 )
            sub_140001660(*(_QWORD *)(v77 + 8 * v81 - 16), v82, 1);
          --v76;
          _RAX = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v76 );
      }
      v83 = (24 * v75 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v84 = v83 + v75;
      v14 = v84 == -17;
      v85 = v84 + 17;
      v11 = &v160;
      v68 = v195;
      if ( !v14 )
        sub_140001660(v186 - v83, v85, 16);
    }
    v12 = v68;
    a1 = v210;
    v86 = v68;
    v10 = v218;
    if ( (unsigned __int64)(v211 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      sub_140001660(v209, v211, 1);
      v12 = v86;
    }
  }
  HIDWORD(_RAX) = HIDWORD(v203);
  a1[3] = v203;
  *(__m128i *)(a1 + 1) = _mm_loadu_si128(&v202);
  *a1 = -1;
  v120 = *((_QWORD *)&v190 + 1);
  if ( *((_QWORD *)&v190 + 1) )
  {
    v121 = *((_QWORD *)&v191 + 1);
    if ( *((_QWORD *)&v191 + 1) )
    {
      v122 = v190;
      v123 = (const __m128i *)(v190 + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v190));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v125 = _mm_load_si128(v123);
            v122 -= 384;
            ++v123;
            _R15D = _mm_movemask_epi8(v125) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v126 = -3 * _RAX;
        v127 = *(_QWORD *)(v122 + 8 * v126 - 24);
        if ( v127 )
          sub_140001660(*(_QWORD *)(v122 + 8 * v126 - 16), v127, 1);
        --v121;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v121 );
    }
    v131 = (24 * v120 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v132 = v131 + v120 + 17;
    if ( v132 )
    {
      v114 = v190 - v131;
      v116 = 16;
      v115 = v132;
LABEL_152:
      sub_140001660(v114, v115, v116);
    }
  }
}
