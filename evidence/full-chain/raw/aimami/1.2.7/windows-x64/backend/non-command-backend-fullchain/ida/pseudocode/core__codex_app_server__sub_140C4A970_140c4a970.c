// win 1.2.7 | module src/core/codex_app_server.rs | ea 0x140c4a970 | name sub_140C4A970
// win 1.2.7 | module src/core/codex_app_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140C4A970(_QWORD *a1, __int64 a2, char a3)
{
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  char v11; // r12
  __int8 *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r12
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rsi
  __int8 *v27; // rbx
  unsigned __int64 v28; // r13
  char v29; // di
  __int64 v30; // r12
  __m128i *v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rcx
  _DWORD *v36; // rax
  __int64 v37; // rcx
  _DWORD *v38; // rax
  __int64 v39; // rcx
  void *v40; // rax
  _DWORD *v41; // rax
  __int64 v42; // rcx
  void *v43; // rax
  __int64 v44; // rcx
  void *v45; // rax
  __int128 v46; // xmm0
  _QWORD *v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // r12
  __m128i v52; // xmm0
  __int64 v53; // rdi
  __int64 v54; // r15
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm2
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdi
  __int64 v62; // rdi
  __int64 v63; // rcx
  __int64 v64; // rdi
  __int64 v66; // rcx
  __int64 v67; // r12
  __int64 v68; // rbx
  __int64 v69; // rsi
  __int64 v70; // r12
  const __m128i *v71; // rdi
  __m128i v73; // xmm0
  __int64 v74; // rax
  __int64 v75; // rdx
  unsigned __int64 v76; // rax
  __int64 v77; // rbx
  __int64 v78; // rsi
  __int64 v79; // rdi
  __m128i v80; // xmm0
  _QWORD *v81; // rcx
  __int64 v82; // rax
  _QWORD *v83; // rcx
  __int64 v84; // rsi
  __int64 v85; // rdi
  __int64 v86; // rbx
  const __m128i *v87; // r14
  __m128i si128; // xmm0
  __int64 v90; // rax
  unsigned __int64 v91; // rax
  __int64 v92; // rsi
  __int64 v94; // rsi
  __int64 v95; // rdi
  __int64 v96; // rbx
  const __m128i *v97; // r14
  __m128i v99; // xmm0
  __int64 v100; // rax
  unsigned __int64 v101; // rax
  __int64 v102; // rsi
  __int64 v103; // rcx
  __int64 v104; // rsi
  __int64 result; // rax
  __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // r8
  _QWORD *v109; // rcx
  _QWORD *v110; // rcx
  __int64 v111; // rsi
  __int64 v112; // rdi
  __int64 v113; // rbx
  const __m128i *v114; // r14
  __m128i v116; // xmm0
  __int64 v117; // rax
  __int64 v118; // rdx
  __int128 v119; // xmm0
  __int128 v120; // xmm1
  __int128 v121; // xmm0
  __int64 v122; // rsi
  _QWORD *v123; // rcx
  _OWORD v124[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v125[31]; // [rsp+69h] [rbp-17h]
  __m128i v126; // [rsp+88h] [rbp+8h] BYREF
  __int64 v127; // [rsp+98h] [rbp+18h]
  _BYTE v128[40]; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v129; // [rsp+C8h] [rbp+48h]
  __int128 v130; // [rsp+D8h] [rbp+58h]
  __int128 v131; // [rsp+E8h] [rbp+68h]
  __int128 v132; // [rsp+F8h] [rbp+78h]
  __m128i v133[16]; // [rsp+108h] [rbp+88h] BYREF
  __int64 v134; // [rsp+208h] [rbp+188h]
  __int64 v135; // [rsp+210h] [rbp+190h]
  _WORD v136[4]; // [rsp+218h] [rbp+198h]
  __m128i v137; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v138; // [rsp+230h] [rbp+1B0h]
  __m128i v139; // [rsp+240h] [rbp+1C0h]
  __int64 v140; // [rsp+250h] [rbp+1D0h]
  __int64 v141; // [rsp+260h] [rbp+1E0h] BYREF
  int v142; // [rsp+268h] [rbp+1E8h]
  __int64 v143; // [rsp+270h] [rbp+1F0h]
  __int64 v144; // [rsp+278h] [rbp+1F8h]
  unsigned __int64 v145; // [rsp+280h] [rbp+200h]
  unsigned __int64 v146; // [rsp+288h] [rbp+208h]
  __int64 v147; // [rsp+290h] [rbp+210h]
  unsigned __int64 v148; // [rsp+298h] [rbp+218h]
  __int64 v149; // [rsp+2A0h] [rbp+220h]
  __int64 v150; // [rsp+2A8h] [rbp+228h]
  __m128i v151; // [rsp+2B0h] [rbp+230h] BYREF
  __m128i v152; // [rsp+2C0h] [rbp+240h] BYREF
  __int64 v153; // [rsp+2D0h] [rbp+250h]
  __int64 v154; // [rsp+2D8h] [rbp+258h]
  __int64 v155; // [rsp+2E0h] [rbp+260h]
  __int64 v156; // [rsp+2F0h] [rbp+270h]
  __int64 v157; // [rsp+2F8h] [rbp+278h]
  __int64 v158; // [rsp+308h] [rbp+288h]
  __int64 v159; // [rsp+310h] [rbp+290h]
  __m128i v160; // [rsp+318h] [rbp+298h] BYREF
  __int64 v161; // [rsp+328h] [rbp+2A8h]
  __int64 v162; // [rsp+338h] [rbp+2B8h]
  __int64 v163; // [rsp+340h] [rbp+2C0h]
  __int64 v164; // [rsp+350h] [rbp+2D0h]
  __int64 v165; // [rsp+358h] [rbp+2D8h]
  __int64 v166; // [rsp+368h] [rbp+2E8h]
  __int64 v167; // [rsp+370h] [rbp+2F0h]
  __int64 v168; // [rsp+380h] [rbp+300h]
  __int64 v169; // [rsp+388h] [rbp+308h]
  __int64 v170; // [rsp+398h] [rbp+318h]
  __int64 v171; // [rsp+3A0h] [rbp+320h]
  __int64 v172; // [rsp+3B0h] [rbp+330h]
  __int64 v173; // [rsp+3B8h] [rbp+338h]
  unsigned __int64 v174; // [rsp+3C8h] [rbp+348h]
  __int64 v175; // [rsp+3D0h] [rbp+350h]
  _BYTE v176[48]; // [rsp+3E0h] [rbp+360h] BYREF
  __m128i v177; // [rsp+410h] [rbp+390h] BYREF
  __int64 v178; // [rsp+420h] [rbp+3A0h]
  __int128 v179; // [rsp+430h] [rbp+3B0h] BYREF
  __int128 v180; // [rsp+440h] [rbp+3C0h]
  __int64 v181; // [rsp+450h] [rbp+3D0h]
  __int64 v182; // [rsp+458h] [rbp+3D8h]
  __int128 v183; // [rsp+460h] [rbp+3E0h] BYREF
  __int128 v184; // [rsp+470h] [rbp+3F0h]
  __int64 v185; // [rsp+480h] [rbp+400h]
  __int64 v186; // [rsp+488h] [rbp+408h]
  __int64 v187; // [rsp+490h] [rbp+410h]
  __int64 v188; // [rsp+498h] [rbp+418h]
  __int64 v189; // [rsp+4A0h] [rbp+420h]
  const __m128i *v190; // [rsp+4A8h] [rbp+428h]
  __int64 v191; // [rsp+4B0h] [rbp+430h] BYREF
  __int128 v192; // [rsp+4B8h] [rbp+438h] BYREF
  __int64 v193; // [rsp+4C8h] [rbp+448h]
  __int64 v194; // [rsp+4D0h] [rbp+450h]
  __m128i v195; // [rsp+4D8h] [rbp+458h] BYREF
  __int64 v196; // [rsp+4E8h] [rbp+468h]
  __int64 v197; // [rsp+4F0h] [rbp+470h]
  unsigned __int64 v198; // [rsp+4F8h] [rbp+478h]
  __int64 v199; // [rsp+500h] [rbp+480h]
  const __m128i *v200; // [rsp+508h] [rbp+488h]
  __int64 v201; // [rsp+510h] [rbp+490h]
  const __m128i *v202; // [rsp+518h] [rbp+498h]
  _QWORD *v203; // [rsp+520h] [rbp+4A0h]
  __int64 v204; // [rsp+528h] [rbp+4A8h]
  __int64 v205; // [rsp+530h] [rbp+4B0h]
  __int64 v206; // [rsp+538h] [rbp+4B8h]
  __m256i v207; // [rsp+540h] [rbp+4C0h] BYREF
  _DWORD *v208; // [rsp+568h] [rbp+4E8h]
  char v209; // [rsp+572h] [rbp+4F2h]
  char v210; // [rsp+573h] [rbp+4F3h]
  char v211; // [rsp+574h] [rbp+4F4h]
  char v212; // [rsp+576h] [rbp+4F6h]
  char v213; // [rsp+577h] [rbp+4F7h]
  __int64 v214; // [rsp+578h] [rbp+4F8h]

  v214 = -2;
  v147 = a2;
  v141 = sub_14167FC00();
  v142 = v5;
  v195.m128i_i64[0] = 0;
  v195.m128i_i64[1] = 8;
  v196 = 0;
  v7 = sub_14167F170(v6);
  v8 = v7;
  if ( *(_BYTE *)(v7 + 16) == 1 )
  {
    v9 = *(_QWORD *)v7;
    v10 = *(_QWORD *)(v8 + 8);
  }
  else
  {
    v9 = sub_141696260();
    *(_QWORD *)v8 = v9;
    *(_QWORD *)(v8 + 8) = v10;
    *(_BYTE *)(v8 + 16) = 1;
  }
  *(_QWORD *)v8 = v9 + 1;
  v184 = xmmword_141A39750;
  v183 = *(_OWORD *)&off_141A39740;
  v185 = v9;
  v186 = v10;
  v135 = 2;
  v136[0] = 256;
  v11 = a3 ^ 1;
  v12 = &v151.m128i_i8[1];
  v13 = 0;
  while ( v13 != 2 )
  {
    v149 = v13 + 1;
    v134 = v13 + 1;
    v210 = *((_BYTE *)v136 + v13);
    v190 = v202;
    v189 = -1;
    v14 = sub_14167F170(v13 + 1);
    v15 = *(_BYTE *)(v14 + 16) == 1;
    v203 = a1;
    v211 = v11;
    if ( v15 )
    {
      v16 = *(_QWORD *)v14;
      v17 = *(_QWORD *)(v14 + 8);
    }
    else
    {
      v190 = v202;
      v189 = -1;
      v79 = v14;
      v16 = sub_141696260();
      v14 = v79;
      *(_QWORD *)v79 = v16;
      *(_QWORD *)(v79 + 8) = v17;
      *(_BYTE *)(v79 + 16) = 1;
    }
    *(_QWORD *)v14 = v16 + 1;
    v180 = xmmword_141A39750;
    v179 = *(_OWORD *)&off_141A39740;
    v181 = v16;
    v182 = v17;
    v18 = 0;
    v204 = -1;
    while ( 1 )
    {
      if ( (unsigned __int64)sub_14167FD50(&v141) > 0x1D )
      {
        nullsub_1(v19);
        _RAX = sub_140001650(62, 1);
        v67 = v204;
        if ( !_RAX )
          sub_141938D2B(1, 62);
        *(_OWORD *)(_RAX + 46) = *(__int128 *)((char *)&xmmword_141A399AA + 14);
        *(_OWORD *)(_RAX + 32) = xmmword_141A399AA;
        *(_OWORD *)(_RAX + 16) = xmmword_141A3999A;
        *(__m128i *)_RAX = _mm_loadu_si128((const __m128i *)&xmmword_141A3998A);
        v110 = v203;
        *v203 = 10;
        v110[1] = 62;
        v110[2] = _RAX;
        v110[3] = 62;
        goto LABEL_125;
      }
      *(_QWORD *)&v192 = 0;
      v193 = 0;
      nullsub_1(v19);
      v20 = (_QWORD *)sub_140001650(8, 1);
      if ( !v20 )
        sub_141938D2B(1, 8);
      *v20 = 0x6465766968637261LL;
      v207.m256i_i64[0] = 8;
      v207.m256i_i64[1] = (__int64)v20;
      v207.m256i_i64[2] = 8;
      v128[0] = 1;
      v128[1] = v210;
      sub_140E72AA0(&v151, &v192, &v207, v128);
      if ( v151.m128i_i8[0] != -1 )
        sub_14002F9D0(&v151);
      nullsub_1(v21);
      v22 = sub_140001650(6, 1);
      if ( !v22 )
        sub_141938D2B(1, 6);
      *(_WORD *)(v22 + 4) = 29295;
      *(_DWORD *)v22 = 1936880995;
      v207.m256i_i64[0] = 6;
      v207.m256i_i64[1] = v22;
      v207.m256i_i64[2] = 6;
      v24 = v144;
      v25 = v145;
      v26 = v146;
      if ( v204 == -1 )
      {
        v27 = v12;
        v28 = v18;
        v29 = 0;
      }
      else
      {
        v26 = v188;
        if ( v188 < 0 )
        {
          v30 = 0;
LABEL_114:
          v209 = 1;
          sub_141938D2B(v30, v26);
        }
        v27 = v12;
        v28 = v18;
        v29 = 3;
        if ( v188 )
        {
          nullsub_1(v23);
          v30 = 1;
          v26 = v188;
          v31 = (__m128i *)sub_140001650(v188, 1);
          if ( !v31 )
            goto LABEL_114;
          v24 = (__int64)v31;
          sub_1418F44E0(v31, v202, v26);
          v25 = v26;
        }
        else
        {
          v24 = 1;
          v25 = 0;
          v26 = 0;
        }
      }
      v128[0] = v29;
      v146 = v26;
      *(_QWORD *)&v128[8] = v26;
      v144 = v24;
      *(_QWORD *)&v128[16] = v24;
      v145 = v25;
      *(_QWORD *)&v128[24] = v25;
      v209 = 0;
      sub_140E72AA0(&v151, &v192, &v207, v128);
      v33 = v28;
      v12 = v27;
      if ( v151.m128i_i8[0] != -1 )
        sub_14002F9D0(&v151);
      nullsub_1(v32);
      v34 = sub_140001650(5, 1);
      if ( !v34 )
        sub_141938D2B(1, 5);
      *(_BYTE *)(v34 + 4) = 116;
      *(_DWORD *)v34 = 1768778092;
      v207.m256i_i64[0] = 5;
      v207.m256i_i64[1] = v34;
      v207.m256i_i64[2] = 5;
      v128[0] = 2;
      *(_QWORD *)&v128[8] = 0;
      *(_QWORD *)&v128[16] = 100;
      sub_140E72AA0(&v151, &v192, &v207, v128);
      if ( v151.m128i_i8[0] != -1 )
        sub_14002F9D0(&v151);
      nullsub_1(v35);
      v36 = (_DWORD *)sub_140001650(7, 1);
      if ( !v36 )
        sub_141938D2B(1, 7);
      *(_DWORD *)((char *)v36 + 3) = 2036681588;
      *v36 = 1953656691;
      v207.m256i_i64[0] = 7;
      v207.m256i_i64[1] = (__int64)v36;
      v207.m256i_i64[2] = 7;
      nullsub_1(v37);
      v38 = (_DWORD *)sub_140001650(10, 1);
      v208 = v38;
      if ( !v38 )
        sub_141938D2B(1, 10);
      qmemcpy(v38, "recency_at", 10);
      v128[0] = 3;
      *(_QWORD *)&v128[8] = 10;
      *(_QWORD *)&v128[16] = v38;
      *(_QWORD *)&v128[24] = 10;
      sub_140E72AA0(&v151, &v192, &v207, v128);
      if ( v151.m128i_i8[0] != -1 )
        sub_14002F9D0(&v151);
      nullsub_1(v39);
      v40 = (void *)sub_140001650(13, 1);
      if ( !v40 )
        sub_141938D2B(1, 13);
      qmemcpy(v40, "sortDirection", 13);
      v207.m256i_i64[0] = 13;
      v207.m256i_i64[1] = (__int64)v40;
      v207.m256i_i64[2] = 13;
      nullsub_1(0x6572694474726F73LL);
      v41 = (_DWORD *)sub_140001650(4, 1);
      v208 = v41;
      if ( !v41 )
        sub_141938D2B(1, 4);
      *v41 = 1668506980;
      v128[0] = 3;
      *(_QWORD *)&v128[8] = 4;
      *(_QWORD *)&v128[16] = v41;
      *(_QWORD *)&v128[24] = 4;
      sub_140E72AA0(&v151, &v192, &v207, v128);
      if ( v151.m128i_i8[0] != -1 )
        sub_14002F9D0(&v151);
      nullsub_1(v42);
      v43 = (void *)sub_140001650(14, 1);
      if ( !v43 )
        sub_141938D2B(1, 14);
      qmemcpy(v43, "useStateDbOnly", 14);
      v207.m256i_i64[0] = 14;
      v207.m256i_i64[1] = (__int64)v43;
      v207.m256i_i64[2] = 14;
      v128[0] = 1;
      v128[1] = v211;
      sub_140E72AA0(&v151, &v192, &v207, v128);
      if ( v151.m128i_i8[0] != -1 )
        sub_14002F9D0(&v151);
      nullsub_1(v44);
      v45 = (void *)sub_140001650(11, 1);
      if ( !v45 )
        sub_141938D2B(1, 11);
      qmemcpy(v45, "sourceKinds", 11);
      v207.m256i_i64[0] = 11;
      v207.m256i_i64[1] = (__int64)v45;
      v207.m256i_i64[2] = 11;
      v212 = 1;
      sub_14040EFB0(v128, &off_141A39840);
      if ( v128[0] == 0xFF )
      {
        v151.m128i_i64[0] = *(_QWORD *)&v128[8];
        sub_141939040(
          (unsigned int)aCalledResultUn_13,
          43,
          (unsigned int)&v151,
          (unsigned int)&off_141A3BB28,
          (__int64)&off_141A397B8);
      }
      v152 = *(__m128i *)&v128[16];
      v151 = *(__m128i *)v128;
      v212 = 0;
      sub_140E72AA0(v128, &v192, &v207, &v151);
      if ( v128[0] != 0xFF )
        sub_14002F9D0(v128);
      *(_OWORD *)v128 = v192;
      *(_QWORD *)&v128[16] = v193;
      *(_QWORD *)&v125[23] = v193;
      *(_OWORD *)&v125[7] = v192;
      v46 = *(_OWORD *)v125;
      *(_OWORD *)(v27 + 15) = *(_OWORD *)&v125[15];
      *(_OWORD *)v27 = v46;
      v151.m128i_i8[0] = 5;
      sub_140C1BC30((__int128 *)v128, v147);
      _RAX = *(_QWORD *)v128;
      v207 = *(__m256i *)&v128[8];
      if ( *(_QWORD *)v128 != -1 )
      {
        v48 = v203;
        v203[11] = v132;
        v119 = v129;
        v120 = v130;
        *(_OWORD *)(v48 + 9) = v131;
        *(_OWORD *)(v48 + 7) = v120;
        *(_OWORD *)(v48 + 5) = v119;
        v121 = *(_OWORD *)v207.m256i_i8;
        *(_OWORD *)(v48 + 3) = *(_OWORD *)&v207.m256i_u64[2];
        *(_OWORD *)(v48 + 1) = v121;
        *v48 = _RAX;
        v67 = v204;
        goto LABEL_125;
      }
      v124[0] = _mm_load_si128((const __m128i *)&v207);
      v124[1] = *(_OWORD *)&v207.m256i_u64[2];
      sub_140421120(v128, v124, aThreadlistpage, 14, &off_141A3A680, 2, 0);
      v48 = *(_QWORD **)&v128[8];
      if ( *(_QWORD *)v128 == -1 )
      {
        _RAX = (__int64)v203;
        *v203 = 3;
        *(_QWORD *)(_RAX + 8) = v48;
        v67 = v204;
        goto LABEL_125;
      }
      v148 = v33 + 1;
      v205 = *(_QWORD *)&v128[24];
      v200 = *(const __m128i **)&v128[32];
      v187 = v129;
      *(_QWORD *)&v192 = *(_QWORD *)&v128[8];
      *((_QWORD *)&v192 + 1) = *(_QWORD *)&v128[8];
      v201 = *(_QWORD *)v128;
      v193 = *(_QWORD *)v128;
      v49 = *(_QWORD *)&v128[8] + 32LL * *(_QWORD *)&v128[16];
      v194 = v49;
      v50 = *(_QWORD *)&v128[8];
      v51 = *(_QWORD *)&v128[8] + 32LL;
      v150 = 32LL * *(_QWORD *)&v128[16];
      v198 = 32LL * *(_QWORD *)&v128[16] - 32;
      v197 = *(_QWORD *)&v128[8];
      while ( 1 )
      {
        if ( v50 == v49 )
        {
          v63 = v49;
          goto LABEL_89;
        }
        v199 = v50 + 32;
        *((_QWORD *)&v192 + 1) = v50 + 32;
        if ( *(_BYTE *)v50 == 0xFF )
          break;
        v207.m256i_i8[0] = *(_BYTE *)v50;
        v52 = _mm_loadu_si128((const __m128i *)(v50 + 1));
        *(_OWORD *)&v207.m256i_u64[2] = *(_OWORD *)(v50 + 16);
        *(__m128i *)&v207.m256i_i8[1] = v52;
        sub_14041C960(v128, &v207, aAppserverthrea, 15, &off_141A3A570, 15);
        v53 = *(_QWORD *)v128;
        if ( *(_QWORD *)v128 == 2 )
        {
          v191 = *(_QWORD *)&v128[8];
          v177.m128i_i64[0] = (__int64)&v191;
          v177.m128i_i64[1] = (__int64)sub_14163CE40;
          sub_1416ABFD0(&v126, &unk_141A3AD4A, &v177);
          v177 = _mm_loadu_si128(&v126);
          v178 = v127;
          sub_14002F910(&v191);
          v80 = _mm_load_si128(&v177);
          v139 = v80;
          v140 = v178;
          v81 = v203;
          v203[3] = v178;
          *(__m128i *)(v81 + 1) = v80;
          *v81 = 10;
          goto LABEL_118;
        }
        v54 = *(_QWORD *)&v128[8];
        v138 = *(_QWORD *)&v128[32];
        v137 = *(__m128i *)&v128[16];
        v55 = v129;
        v56 = v130;
        v57 = v131;
        *(_OWORD *)(v27 + 87) = v132;
        *(_OWORD *)(v27 + 71) = v57;
        *(_OWORD *)(v27 + 55) = v56;
        *(_OWORD *)(v27 + 39) = v55;
        sub_1418F44E0(&v160, v133, 0xF8u);
        v140 = v138;
        v139 = _mm_load_si128(&v137);
        v153 = v138;
        v152 = v139;
        v151.m128i_i64[0] = v53;
        v151.m128i_i64[1] = v54;
        v213 = 1;
        sub_140E91160(v139.m128i_i64[1], v138);
        if ( !v59 )
        {
          nullsub_1(v58);
          v82 = sub_140001650(40, 1);
          if ( !v82 )
          {
            v213 = 1;
            sub_141938D2B(1, 40);
          }
          *(_OWORD *)(v82 + 16) = xmmword_141A39935;
          *(__m128i *)v82 = _mm_loadu_si128((const __m128i *)&xmmword_141A39925);
          *(_QWORD *)(v82 + 32) = 0x4449208BA8E7BFBALL;
          v83 = v203;
          *v203 = 9;
          v83[1] = 40;
          v83[2] = v82;
          v83[3] = 40;
          sub_14029D3A0(&v151);
LABEL_118:
          v206 = (unsigned __int64)(v49 - v199) >> 5;
          v198 >>= 5;
          v208 = nullptr;
          while ( (_DWORD *)v198 != v208 )
          {
            v208 = (_DWORD *)((char *)v208 + 1);
            sub_1403880E0(v51);
            v51 += 32;
          }
          if ( v201 )
            sub_140001660(v197, 32 * v201, 8);
          v48 = (_QWORD *)v205;
          _RAX = v205 - 1;
          v67 = v204;
          if ( (unsigned __int64)(v205 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
LABEL_124:
            HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v200, v48, 1) >> 32;
LABEL_125:
          v84 = *((_QWORD *)&v179 + 1);
          if ( *((_QWORD *)&v179 + 1) )
          {
            v85 = *((_QWORD *)&v180 + 1);
            if ( *((_QWORD *)&v180 + 1) )
            {
              v86 = v179;
              v87 = (const __m128i *)(v179 + 16);
              _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v179));
              do
              {
                if ( !(_WORD)_R15D )
                {
                  do
                  {
                    si128 = _mm_load_si128(v87);
                    v86 -= 384;
                    ++v87;
                    _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
                  }
                  while ( !_R15D );
                }
                __asm { tzcnt   eax, r15d }
                v90 = -3 * _RAX;
                v48 = *(_QWORD **)(v86 + 8 * v90 - 24);
                if ( v48 )
                  sub_140001660(*(_QWORD *)(v86 + 8 * v90 - 16), v48, 1);
                --v85;
                _RAX = _R15D & (unsigned int)(_R15D - 1);
                _R15D &= _R15D - 1;
              }
              while ( v85 );
            }
            v91 = (24 * v84 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
            v92 = v91 + v84 + 17;
            if ( v92 )
              sub_140001660(v179 - v91, v92, 16);
          }
          _RAX = v67 - 1;
          if ( (unsigned __int64)(v67 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v202, v67, 1) >> 32;
          v94 = *((_QWORD *)&v183 + 1);
          if ( *((_QWORD *)&v183 + 1) )
          {
            v95 = *((_QWORD *)&v184 + 1);
            if ( *((_QWORD *)&v184 + 1) )
            {
              v96 = v183;
              v97 = (const __m128i *)(v183 + 16);
              _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v183));
              do
              {
                if ( !(_WORD)_R15D )
                {
                  do
                  {
                    v99 = _mm_load_si128(v97);
                    v96 -= 384;
                    ++v97;
                    _R15D = _mm_movemask_epi8(v99) ^ 0xFFFF;
                  }
                  while ( !_R15D );
                }
                __asm { tzcnt   eax, r15d }
                v100 = -3 * _RAX;
                v48 = *(_QWORD **)(v96 + 8 * v100 - 24);
                if ( v48 )
                  sub_140001660(*(_QWORD *)(v96 + 8 * v100 - 16), v48, 1);
                --v95;
                _RAX = _R15D & (unsigned int)(_R15D - 1);
                _R15D &= _R15D - 1;
              }
              while ( v95 );
            }
            v101 = (24 * v94 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
            v102 = v101 + v94 + 17;
            if ( v102 )
              sub_140001660(v183 - v101, v102, 16);
          }
          v103 = v195.m128i_i64[1];
          v206 = v196;
          v208 = nullptr;
          v198 = v195.m128i_u64[1];
          while ( (_DWORD *)v206 != v208 )
          {
            v208 = (_DWORD *)((char *)v208 + 1);
            v104 = v103 + 352;
            sub_14038AB90(v103, v48);
            v103 = v104;
          }
          result = v195.m128i_i64[0];
          if ( v195.m128i_i64[0] )
          {
            v106 = v195.m128i_i64[1];
            v107 = 352 * v195.m128i_i64[0];
            v108 = 8;
            return sub_140001660(v106, v107, v108);
          }
          return result;
        }
        v176[40] = v210;
        v213 = 1;
        sub_1416AC440(v128, &v152);
        v213 = 1;
        if ( (unsigned __int8)sub_1403AAB80(&v183, v128) )
        {
          if ( v152.m128i_i64[0] )
            sub_140001660(v152.m128i_i64[1], v152.m128i_i64[0], 1);
          if ( v154 )
            sub_140001660(v155, v154, 1);
          if ( v160.m128i_i64[1] != -1 && v160.m128i_i64[1] )
            sub_140001660(v161, v160.m128i_i64[1], 1);
          if ( v162 != -1 && v162 )
            sub_140001660(v163, v162, 1);
          if ( v156 )
            sub_140001660(v157, v156, 1);
          sub_14002F9D0(v176);
          if ( v164 != -1 && v164 )
            sub_140001660(v165, v164, 1);
          if ( v166 != -1 && v166 )
            sub_140001660(v167, v166, 1);
          if ( v168 != -1 && v168 )
            sub_140001660(v169, v168, 1);
          if ( v170 != -1 && v170 )
            sub_140001660(v171, v170, 1);
          if ( v172 != -1 && v172 )
            sub_140001660(v173, v172, 1);
          if ( v174 <= 0xFFFFFFFFFFFFFFFDuLL && v174 )
            sub_140001660(v175, v174, 1);
          v60 = v159;
          v206 = v160.m128i_i64[0];
          v143 = v159;
          v208 = nullptr;
          while ( (_DWORD *)v206 != v208 )
          {
            v208 = (_DWORD *)((char *)v208 + 1);
            v61 = v60 + 32;
            sub_1403880E0(v60);
            v60 = v61;
          }
          if ( v158 )
            sub_140001660(v159, 32 * v158, 8);
        }
        else
        {
          sub_1418F44E0((__m128i *)v128, &v151, 0x160u);
          v62 = v196;
          if ( v196 == v195.m128i_i64[0] )
            sub_14190FA40(&v195);
          sub_1418F44E0((__m128i *)(v195.m128i_i64[1] + 352 * v62), (const __m128i *)v128, 0x160u);
          v196 = v62 + 1;
        }
        v51 += 32;
        v198 -= 32LL;
        v50 = v199;
      }
      v63 = v199;
LABEL_89:
      v206 = (unsigned __int64)(v49 - v63) >> 5;
      v199 = v63;
      v208 = nullptr;
      while ( (_DWORD *)v206 != v208 )
      {
        v208 = (_DWORD *)((char *)v208 + 1);
        v64 = v63 + 32;
        sub_1403880E0(v63);
        v63 = v64;
      }
      v18 = v148;
      if ( v201 )
        sub_140001660(v197, 32 * v201, 8);
      HIDWORD(_RAX) = HIDWORD(v205);
      if ( v205 == -1 )
        break;
      v151.m128i_i64[0] = v205;
      v151.m128i_i64[1] = (__int64)v200;
      v152.m128i_i64[0] = v187;
      sub_1416AC440(v128, &v151);
      if ( (unsigned __int8)sub_1403AAB80(&v179, v128) )
      {
        nullsub_1(v66);
        _RAX = sub_140001650(55, 1);
        v67 = v204;
        if ( !_RAX )
          sub_141938D2B(1, 55);
        *(_OWORD *)(_RAX + 32) = xmmword_141A3990E;
        *(_OWORD *)(_RAX + 16) = xmmword_141A398FE;
        *(__m128i *)_RAX = _mm_loadu_si128((const __m128i *)&xmmword_141A398EE);
        *(_QWORD *)(_RAX + 47) = 0x87A0E6B8B8E6B5A1uLL;
        v123 = v203;
        *v203 = 10;
        v123[1] = 55;
        v123[2] = _RAX;
        v123[3] = 55;
        v48 = (_QWORD *)v205;
        if ( v205 )
          goto LABEL_124;
        goto LABEL_125;
      }
      if ( (unsigned __int64)(v204 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v202, v204, 1);
      v188 = v187;
      v202 = v200;
      v67 = v205;
      v204 = v205;
      if ( v18 > 0x63 )
      {
        nullsub_1(v66);
        _RAX = sub_140001650(49, 1);
        if ( !_RAX )
          sub_141938D2B(1, 49);
        *(_OWORD *)(_RAX + 32) = xmmword_141A39780;
        *(_OWORD *)(_RAX + 16) = xmmword_141A39770;
        *(_OWORD *)_RAX = xmmword_141A39760;
        *(_BYTE *)(_RAX + 48) = -112;
        v109 = v203;
        *v203 = 10;
        v109[1] = 49;
        v109[2] = _RAX;
        v109[3] = 49;
        goto LABEL_125;
      }
    }
    v68 = *((_QWORD *)&v179 + 1);
    if ( *((_QWORD *)&v179 + 1) )
    {
      v69 = *((_QWORD *)&v180 + 1);
      if ( *((_QWORD *)&v180 + 1) )
      {
        v70 = v179;
        v71 = (const __m128i *)(v179 + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v179));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v73 = _mm_load_si128(v71);
              v70 -= 384;
              ++v71;
              _R15D = _mm_movemask_epi8(v73) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v74 = -3 * _RAX;
          v75 = *(_QWORD *)(v70 + 8 * v74 - 24);
          if ( v75 )
            sub_140001660(*(_QWORD *)(v70 + 8 * v74 - 16), v75, 1);
          --v69;
          _RAX = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v69 );
      }
      v76 = (24 * v68 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v77 = v76 + v68 + 17;
      if ( v77 )
        sub_140001660(v179 - v76, v77, 16);
    }
    v78 = v149;
    v13 = v149;
    a1 = v203;
    v11 = v211;
    if ( (unsigned __int64)(v204 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      sub_140001660(v202, v204, 1);
      v13 = v78;
    }
  }
  result = v196;
  a1[3] = v196;
  *(__m128i *)(a1 + 1) = _mm_loadu_si128(&v195);
  *a1 = -1;
  v111 = *((_QWORD *)&v183 + 1);
  if ( *((_QWORD *)&v183 + 1) )
  {
    v112 = *((_QWORD *)&v184 + 1);
    if ( *((_QWORD *)&v184 + 1) )
    {
      v113 = v183;
      v114 = (const __m128i *)(v183 + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v183));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v116 = _mm_load_si128(v114);
            v113 -= 384;
            ++v114;
            _R15D = _mm_movemask_epi8(v116) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v117 = -3 * result;
        v118 = *(_QWORD *)(v113 + 8 * v117 - 24);
        if ( v118 )
          sub_140001660(*(_QWORD *)(v113 + 8 * v117 - 16), v118, 1);
        --v112;
        result = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v112 );
    }
    result = (24 * v111 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v122 = result + v111 + 17;
    if ( v122 )
    {
      v106 = v183 - result;
      v108 = 16;
      v107 = v122;
      return sub_140001660(v106, v107, v108);
    }
  }
  return result;
}
