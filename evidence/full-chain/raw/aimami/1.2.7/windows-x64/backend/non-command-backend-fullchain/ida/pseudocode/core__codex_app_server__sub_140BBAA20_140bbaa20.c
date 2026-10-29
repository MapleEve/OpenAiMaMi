// win 1.2.7 | module src/core/codex_app_server.rs | ea 0x140bbaa20 | name sub_140BBAA20
// win 1.2.7 | module src/core/codex_app_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140BBAA20(_QWORD *a1, __int64 a2, __int64 a3, const __m128i *a4, __int64 a5, __int64 a6, int a7)
{
  signed __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // r13
  signed __int64 v17; // rdi
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  signed __int64 v23; // rcx
  char v24; // r15
  __int64 v25; // rbx
  signed __int64 v26; // r14
  __m128i *v27; // rax
  __m128i *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  _DWORD *v32; // rax
  __int64 v33; // rcx
  void *v34; // rax
  __int64 v35; // rcx
  void *v36; // rax
  _DWORD *v37; // rax
  __int64 v38; // rcx
  void *v39; // rax
  __int64 v40; // rcx
  void *v41; // rax
  __int64 v42; // r15
  __m128i *v43; // rax
  __int64 v44; // rbx
  __m128i v45; // xmm0
  _OWORD *v46; // rax
  unsigned __int64 v47; // rax
  int v48; // edx
  unsigned __int64 v49; // r8
  int v50; // ecx
  __int64 v51; // r8
  bool v52; // zf
  unsigned __int64 v53; // rax
  __m128i si128; // xmm0
  bool v55; // r8
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // r15
  __m128i v61; // xmm0
  __int64 v62; // rbx
  __int64 v63; // rdi
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rbx
  __m128i *v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rdi
  __int64 v70; // rbx
  __int64 v71; // rcx
  __int64 v72; // rbx
  __int64 v73; // rcx
  __int64 v74; // r14
  __int64 v75; // rdi
  __int64 v76; // r15
  __int64 v77; // rbx
  __int64 v78; // rcx
  _QWORD *v79; // rcx
  __int64 result; // rax
  _QWORD *v81; // rcx
  __int64 v82; // rsi
  __int64 v83; // rdi
  __int64 v84; // rbx
  const __m128i *v85; // r14
  __m128i v87; // xmm0
  __int64 v88; // rax
  __int64 v89; // rdx
  _QWORD *v90; // rcx
  __m128i v91; // xmm0
  _QWORD *v92; // rcx
  __int64 v93; // rdi
  __int64 v94; // rax
  _QWORD *v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rsi
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // rdx
  __int64 *v101; // rdx
  __int128 v102; // xmm0
  __int128 v103; // xmm1
  __m128i v104; // xmm0
  __int64 v105; // rsi
  __int64 v106; // rdi
  __int64 v107; // rbx
  const __m128i *v108; // r14
  __m128i v110; // xmm0
  __int64 v111; // rax
  __int64 v112; // rdx
  unsigned __int64 v113; // rax
  __int64 v114; // rsi
  __int64 v116; // rsi
  __int64 v117; // rdi
  __int64 v118; // rbx
  const __m128i *v119; // r14
  __m128i v121; // xmm0
  __int64 v122; // rax
  __int64 v123; // rdx
  unsigned __int64 v124; // rax
  __int64 v125; // rsi
  __int64 v126; // rcx
  __int64 v127; // rsi
  _QWORD *v128; // rcx
  int v129; // [rsp+30h] [rbp-50h]
  _OWORD v130[2]; // [rsp+40h] [rbp-40h] BYREF
  __m128i v131; // [rsp+60h] [rbp-20h] BYREF
  __int64 v132; // [rsp+70h] [rbp-10h]
  __int64 v133; // [rsp+78h] [rbp-8h]
  __int64 v134; // [rsp+80h] [rbp+0h]
  _WORD v135[4]; // [rsp+88h] [rbp+8h]
  __m128i v136; // [rsp+90h] [rbp+10h] BYREF
  __int64 v137; // [rsp+A0h] [rbp+20h]
  __m128i v138; // [rsp+B0h] [rbp+30h]
  __int64 v139; // [rsp+C0h] [rbp+40h]
  _BYTE v140[40]; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v141; // [rsp+F8h] [rbp+78h]
  __int128 v142; // [rsp+108h] [rbp+88h]
  __int128 v143; // [rsp+118h] [rbp+98h]
  __int128 v144; // [rsp+128h] [rbp+A8h]
  __m128i v145[15]; // [rsp+138h] [rbp+B8h] BYREF
  __int128 v146; // [rsp+230h] [rbp+1B0h] BYREF
  __int128 v147; // [rsp+240h] [rbp+1C0h]
  __int64 v148; // [rsp+250h] [rbp+1D0h]
  __int64 v149; // [rsp+258h] [rbp+1D8h]
  __int64 v150; // [rsp+260h] [rbp+1E0h]
  signed __int64 v151; // [rsp+268h] [rbp+1E8h]
  __int64 v152; // [rsp+270h] [rbp+1F0h]
  __int64 v153; // [rsp+278h] [rbp+1F8h]
  signed __int64 v154; // [rsp+280h] [rbp+200h]
  __int64 v155; // [rsp+288h] [rbp+208h]
  __int64 v156; // [rsp+290h] [rbp+210h]
  __int64 v157; // [rsp+298h] [rbp+218h]
  __m128i v158; // [rsp+2A0h] [rbp+220h] BYREF
  __int64 v159; // [rsp+2B0h] [rbp+230h]
  __int128 v160; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v161; // [rsp+2D0h] [rbp+250h]
  __int64 v162; // [rsp+2E0h] [rbp+260h]
  __int64 v163; // [rsp+2E8h] [rbp+268h]
  __int8 v164; // [rsp+2F0h] [rbp+270h] BYREF
  _BYTE v165[23]; // [rsp+2F1h] [rbp+271h] BYREF
  __int64 v166; // [rsp+308h] [rbp+288h]
  __int64 v167; // [rsp+310h] [rbp+290h] BYREF
  int v168; // [rsp+318h] [rbp+298h]
  __m128i v169; // [rsp+320h] [rbp+2A0h] BYREF
  __m128i v170; // [rsp+330h] [rbp+2B0h] BYREF
  __int64 v171; // [rsp+340h] [rbp+2C0h]
  __int128 v172; // [rsp+348h] [rbp+2C8h]
  __int128 v173; // [rsp+358h] [rbp+2D8h]
  __int128 v174; // [rsp+368h] [rbp+2E8h]
  __int128 v175; // [rsp+378h] [rbp+2F8h]
  __m128i v176; // [rsp+388h] [rbp+308h] BYREF
  __int64 v177; // [rsp+398h] [rbp+318h]
  __int64 v178; // [rsp+3A8h] [rbp+328h]
  __int64 v179; // [rsp+3B0h] [rbp+330h]
  __int64 v180; // [rsp+3C0h] [rbp+340h]
  __int64 v181; // [rsp+3C8h] [rbp+348h]
  __int64 v182; // [rsp+3D0h] [rbp+350h]
  __int64 v183; // [rsp+3D8h] [rbp+358h]
  __int64 v184; // [rsp+3E0h] [rbp+360h]
  __int64 v185; // [rsp+3F0h] [rbp+370h]
  __int64 v186; // [rsp+3F8h] [rbp+378h]
  __int64 v187; // [rsp+408h] [rbp+388h]
  __int64 v188; // [rsp+410h] [rbp+390h]
  __int64 v189; // [rsp+420h] [rbp+3A0h]
  __int64 v190; // [rsp+428h] [rbp+3A8h]
  unsigned __int64 v191; // [rsp+438h] [rbp+3B8h]
  __int64 v192; // [rsp+440h] [rbp+3C0h]
  _BYTE v193[56]; // [rsp+450h] [rbp+3D0h] BYREF
  signed __int64 v194; // [rsp+488h] [rbp+408h]
  __int64 v195; // [rsp+490h] [rbp+410h] BYREF
  __int64 v196; // [rsp+498h] [rbp+418h]
  const __m128i *v197; // [rsp+4A0h] [rbp+420h]
  __int64 v198; // [rsp+4A8h] [rbp+428h]
  __m128i v199; // [rsp+4B0h] [rbp+430h] BYREF
  __int128 v200; // [rsp+4C0h] [rbp+440h]
  __m128i v201; // [rsp+4D0h] [rbp+450h] BYREF
  __int64 v202; // [rsp+4E0h] [rbp+460h]
  const __m128i *v203; // [rsp+4E8h] [rbp+468h]
  __int64 v204; // [rsp+4F0h] [rbp+470h]
  unsigned __int64 v205; // [rsp+4F8h] [rbp+478h]
  __int64 v206; // [rsp+500h] [rbp+480h]
  __int64 v207; // [rsp+508h] [rbp+488h]
  const __m128i *v208; // [rsp+510h] [rbp+490h]
  __int64 v209; // [rsp+518h] [rbp+498h]
  __int64 v210; // [rsp+520h] [rbp+4A0h]
  const __m128i *v211; // [rsp+528h] [rbp+4A8h]
  _QWORD *v212; // [rsp+530h] [rbp+4B0h]
  __int64 v213; // [rsp+538h] [rbp+4B8h]
  __m256i v214; // [rsp+540h] [rbp+4C0h] BYREF
  __int64 v215; // [rsp+568h] [rbp+4E8h]
  char v216; // [rsp+570h] [rbp+4F0h]
  char v217; // [rsp+571h] [rbp+4F1h]
  char v218; // [rsp+572h] [rbp+4F2h]
  char v219; // [rsp+573h] [rbp+4F3h]
  char v220; // [rsp+575h] [rbp+4F5h]
  char v221; // [rsp+576h] [rbp+4F6h]
  char v222; // [rsp+577h] [rbp+4F7h]
  __int64 v223; // [rsp+578h] [rbp+4F8h]

  v223 = -2;
  v203 = a4;
  v153 = a3;
  v152 = a2;
  v212 = a1;
  v167 = a6;
  v168 = a7;
  v201.m128i_i64[0] = 0;
  v201.m128i_i64[1] = 8;
  v202 = 0;
  v8 = sub_14167F170();
  v9 = v8;
  if ( *(_BYTE *)(v8 + 16) == 1 )
  {
    v10 = *(_QWORD *)v8;
    v11 = *(_QWORD *)(v9 + 8);
  }
  else
  {
    v10 = sub_141696260();
    *(_QWORD *)v9 = v10;
    *(_QWORD *)(v9 + 8) = v11;
    *(_BYTE *)(v9 + 16) = 1;
  }
  *(_QWORD *)v9 = v10 + 1;
  v161 = xmmword_141A39750;
  v160 = *(_OWORD *)&off_141A39740;
  v162 = v10;
  v163 = v11;
  v134 = 2;
  v135[0] = 256;
  v12 = 0;
  while ( v12 != 2 )
  {
    v155 = v12 + 1;
    v133 = v12 + 1;
    v219 = *((_BYTE *)v135 + v12);
    v197 = v211;
    v196 = -1;
    v13 = sub_14167F170();
    if ( *(_BYTE *)(v13 + 16) == 1 )
    {
      v14 = *(_QWORD *)v13;
      v15 = *(_QWORD *)(v13 + 8);
    }
    else
    {
      v197 = v211;
      v196 = -1;
      v77 = v13;
      v14 = sub_141696260();
      v13 = v77;
      *(_QWORD *)v77 = v14;
      *(_QWORD *)(v77 + 8) = v15;
      *(_BYTE *)(v77 + 16) = 1;
    }
    *(_QWORD *)v13 = v14 + 1;
    v147 = xmmword_141A39750;
    v146 = *(_OWORD *)&off_141A39740;
    v148 = v14;
    v149 = v15;
    v206 = -1;
    v16 = 0;
    v17 = a5;
    while ( 1 )
    {
      if ( (unsigned __int64)sub_14167FD50(&v167) > 0x1D )
      {
        nullsub_1(v18);
        _RAX = sub_140001650(62, 1);
        if ( !_RAX )
          sub_141938D2B(1, 62);
        *(_OWORD *)(_RAX + 46) = *(__int128 *)((char *)&xmmword_141A399AA + 14);
        *(_OWORD *)(_RAX + 32) = xmmword_141A399AA;
        *(_OWORD *)(_RAX + 16) = xmmword_141A3999A;
        *(__m128i *)_RAX = _mm_loadu_si128((const __m128i *)&xmmword_141A3998A);
        v90 = v212;
        *v212 = 10;
        v90[1] = 62;
        v90[2] = _RAX;
        v90[3] = 62;
        goto LABEL_171;
      }
      v199.m128i_i64[0] = 0;
      *(_QWORD *)&v200 = 0;
      nullsub_1(v18);
      v19 = (_QWORD *)sub_140001650(8, 1);
      if ( !v19 )
        sub_141938D2B(1, 8);
      *v19 = 0x6465766968637261LL;
      v214.m256i_i64[0] = 8;
      v214.m256i_i64[1] = (__int64)v19;
      v214.m256i_i64[2] = 8;
      v140[0] = 1;
      v140[1] = v219;
      sub_140E72AA0(&v169, &v199, &v214, v140);
      if ( v169.m128i_i8[0] != -1 )
        sub_14002F9D0(&v169);
      nullsub_1(v20);
      v21 = sub_140001650(6, 1);
      if ( !v21 )
        sub_141938D2B(1, 6);
      *(_WORD *)(v21 + 4) = 29295;
      *(_DWORD *)v21 = 1936880995;
      v214.m256i_i64[0] = 6;
      v214.m256i_i64[1] = v21;
      v214.m256i_i64[2] = 6;
      v22 = v150;
      v23 = v151;
      if ( v206 == -1 )
      {
        v24 = 0;
        v26 = v154;
      }
      else
      {
        if ( v7 < 0 )
        {
          v25 = 0;
          v26 = v7;
LABEL_137:
          v218 = 1;
          sub_141938D2B(v25, v26);
        }
        v24 = 3;
        if ( v7 )
        {
          nullsub_1(v151);
          v25 = 1;
          v26 = v7;
          v27 = (__m128i *)sub_140001650(v7, 1);
          if ( !v27 )
            goto LABEL_137;
          v28 = v27;
          sub_1418F44E0(v27, v211, v7);
          v22 = (__int64)v28;
          v23 = v7;
        }
        else
        {
          v22 = 1;
          v23 = 0;
          v26 = 0;
        }
      }
      v140[0] = v24;
      v154 = v26;
      *(_QWORD *)&v140[8] = v26;
      v150 = v22;
      *(_QWORD *)&v140[16] = v22;
      v151 = v23;
      *(_QWORD *)&v140[24] = v23;
      v218 = 0;
      sub_140E72AA0(&v169, &v199, &v214, v140);
      if ( v169.m128i_i8[0] != -1 )
        sub_14002F9D0(&v169);
      nullsub_1(v29);
      v30 = sub_140001650(5, 1);
      if ( !v30 )
        sub_141938D2B(1, 5);
      *(_BYTE *)(v30 + 4) = 116;
      *(_DWORD *)v30 = 1768778092;
      v214.m256i_i64[0] = 5;
      v214.m256i_i64[1] = v30;
      v214.m256i_i64[2] = 5;
      v140[0] = 2;
      *(_QWORD *)&v140[8] = 0;
      *(_QWORD *)&v140[16] = 100;
      sub_140E72AA0(&v169, &v199, &v214, v140);
      if ( v169.m128i_i8[0] != -1 )
        sub_14002F9D0(&v169);
      nullsub_1(v31);
      v32 = (_DWORD *)sub_140001650(7, 1);
      if ( !v32 )
        sub_141938D2B(1, 7);
      *(_DWORD *)((char *)v32 + 3) = 2036681588;
      *v32 = 1953656691;
      v214.m256i_i64[0] = 7;
      v214.m256i_i64[1] = (__int64)v32;
      v214.m256i_i64[2] = 7;
      nullsub_1(v33);
      v34 = (void *)sub_140001650(10, 1);
      v215 = (__int64)v34;
      if ( !v34 )
        sub_141938D2B(1, 10);
      qmemcpy(v34, "recency_at", 10);
      v140[0] = 3;
      *(_QWORD *)&v140[8] = 10;
      *(_QWORD *)&v140[16] = v34;
      *(_QWORD *)&v140[24] = 10;
      sub_140E72AA0(&v169, &v199, &v214, v140);
      if ( v169.m128i_i8[0] != -1 )
        sub_14002F9D0(&v169);
      nullsub_1(v35);
      v36 = (void *)sub_140001650(13, 1);
      if ( !v36 )
        sub_141938D2B(1, 13);
      qmemcpy(v36, "sortDirection", 13);
      v214.m256i_i64[0] = 13;
      v214.m256i_i64[1] = (__int64)v36;
      v214.m256i_i64[2] = 13;
      nullsub_1(0x6572694474726F73LL);
      v37 = (_DWORD *)sub_140001650(4, 1);
      v215 = (__int64)v37;
      if ( !v37 )
        sub_141938D2B(1, 4);
      *v37 = 1668506980;
      v140[0] = 3;
      *(_QWORD *)&v140[8] = 4;
      *(_QWORD *)&v140[16] = v37;
      *(_QWORD *)&v140[24] = 4;
      sub_140E72AA0(&v169, &v199, &v214, v140);
      if ( v169.m128i_i8[0] != -1 )
        sub_14002F9D0(&v169);
      nullsub_1(v38);
      v39 = (void *)sub_140001650(14, 1);
      if ( !v39 )
        sub_141938D2B(1, 14);
      qmemcpy(v39, "useStateDbOnly", 14);
      v214.m256i_i64[0] = 14;
      v214.m256i_i64[1] = (__int64)v39;
      v214.m256i_i64[2] = 14;
      *(_WORD *)v140 = 257;
      sub_140E72AA0(&v169, &v199, &v214, v140);
      if ( v169.m128i_i8[0] != -1 )
        sub_14002F9D0(&v169);
      nullsub_1(v40);
      v41 = (void *)sub_140001650(11, 1);
      if ( !v41 )
        sub_141938D2B(1, 11);
      qmemcpy(v41, "sourceKinds", 11);
      v214.m256i_i64[0] = 11;
      v214.m256i_i64[1] = (__int64)v41;
      v214.m256i_i64[2] = 11;
      v220 = 1;
      sub_14040EFB0(v140, &off_141A39840);
      if ( v140[0] == 0xFF )
      {
        v169.m128i_i64[0] = *(_QWORD *)&v140[8];
        sub_141939040(
          (unsigned int)aCalledResultUn_13,
          43,
          (unsigned int)&v169,
          (unsigned int)&off_141A3BB28,
          (__int64)&off_141A397B8);
      }
      v170 = *(__m128i *)&v140[16];
      v169 = *(__m128i *)v140;
      v220 = 0;
      sub_140E72AA0(v140, &v199, &v214, &v169);
      if ( v140[0] != 0xFF )
        sub_14002F9D0(v140);
      v166 = v200;
      *(__m128i *)&v165[7] = _mm_loadu_si128(&v199);
      v164 = 5;
      if ( v203 )
      {
        if ( v17 < 0 )
        {
          v42 = 0;
LABEL_141:
          v222 = 1;
          sub_141938D2B(v42, v17);
        }
        if ( v17 )
        {
          nullsub_1(&v165[7]);
          v42 = 1;
          v43 = (__m128i *)sub_140001650(v17, 1);
          if ( !v43 )
            goto LABEL_141;
          v44 = (__int64)v43;
          sub_1418F44E0(v43, v203, v17);
        }
        else
        {
          v44 = 1;
        }
        v140[0] = 3;
        *(_QWORD *)&v140[8] = v17;
        *(_QWORD *)&v140[16] = v44;
        *(_QWORD *)&v140[24] = v17;
        v216 = 1;
        v215 = sub_141641AF0(aParentthreadid, 14, &v164);
        sub_14002F9D0(v215);
        v45 = _mm_loadu_si128((const __m128i *)v140);
        v46 = (_OWORD *)v215;
        *(_OWORD *)(v215 + 16) = *(_OWORD *)&v140[16];
        *v46 = v45;
      }
      *(__m128i *)&v214.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v165[15]);
      v214.m256i_i8[0] = v164;
      *(__int64 *)((char *)v214.m256i_i64 + 1) = *(_QWORD *)v165;
      *(__int32 *)((char *)&v214.m256i_i32[2] + 1) = *(_DWORD *)&v165[8];
      *(__int16 *)((char *)&v214.m256i_i16[6] + 1) = *(_WORD *)&v165[12];
      v214.m256i_i8[15] = v165[14];
      v217 = 1;
      v47 = sub_14167FD50(v152);
      v50 = -1;
      if ( v47 <= 0x1E )
      {
        if ( v48 )
        {
          if ( v47 == 30 )
            goto LABEL_53;
          v50 = 1000000000 - v48;
          v51 = 29;
        }
        else
        {
          v51 = 30;
          v50 = 0;
        }
        v49 = v51 - v47;
      }
LABEL_53:
      v52 = v50 == -1;
      if ( v50 == -1 )
        v50 = 0;
      v53 = 0;
      if ( !v52 )
        v53 = v49;
      si128 = _mm_load_si128((const __m128i *)&v214);
      v55 = v53 >= 0xB;
      if ( v53 == 10 )
        v55 = v50 != 0;
      v170 = *(__m128i *)&v214.m256i_u64[2];
      if ( v55 )
        v50 = 0;
      v169 = si128;
      v217 = 0;
      v129 = v50;
      sub_140C1BC30((__int128 *)v140, v153);
      _RAX = *(_QWORD *)v140;
      v199 = *(__m128i *)&v140[8];
      v200 = *(_OWORD *)&v140[24];
      if ( *(_QWORD *)v140 != -1 )
      {
        v101 = v212;
        v212[11] = v144;
        v102 = v141;
        v103 = v142;
        *(_OWORD *)(v101 + 9) = v143;
        *(_OWORD *)(v101 + 7) = v103;
        *(_OWORD *)(v101 + 5) = v102;
        v104 = v199;
        *(_OWORD *)(v101 + 3) = v200;
        *(__m128i *)(v101 + 1) = v104;
        *v101 = _RAX;
        goto LABEL_171;
      }
      v130[0] = _mm_load_si128(&v199);
      v130[1] = v200;
      v222 = 0;
      sub_140421120(v140, v130, aThreadlistpage, 14, &off_141A3A680, 2, v129);
      v57 = *(_QWORD *)&v140[8];
      if ( *(_QWORD *)v140 == -1 )
      {
        _RAX = (__int64)v212;
        *v212 = 3;
        *(_QWORD *)(_RAX + 8) = v57;
        goto LABEL_171;
      }
      ++v16;
      v210 = *(_QWORD *)&v140[24];
      v208 = *(const __m128i **)&v140[32];
      v194 = v141;
      v58 = *(_QWORD *)&v140[8] + 32LL * *(_QWORD *)&v140[16];
      v199.m128i_i64[0] = *(_QWORD *)&v140[8];
      v199.m128i_i64[1] = *(_QWORD *)&v140[8];
      v209 = *(_QWORD *)v140;
      *(_QWORD *)&v200 = *(_QWORD *)v140;
      *((_QWORD *)&v200 + 1) = v58;
      v59 = *(_QWORD *)&v140[8];
      v60 = *(_QWORD *)&v140[8] + 32LL;
      v156 = 32LL * *(_QWORD *)&v140[16];
      v205 = 32LL * *(_QWORD *)&v140[16] - 32;
      v204 = *(_QWORD *)&v140[8];
      if ( *(_QWORD *)&v140[8] != v58 )
      {
        while ( 1 )
        {
          v207 = v59 + 32;
          v199.m128i_i64[1] = v59 + 32;
          if ( *(_BYTE *)v59 == 0xFF )
          {
            v71 = v207;
            goto LABEL_122;
          }
          v214.m256i_i8[0] = *(_BYTE *)v59;
          v61 = _mm_loadu_si128((const __m128i *)(v59 + 1));
          *(_OWORD *)&v214.m256i_u64[2] = *(_OWORD *)(v59 + 16);
          *(__m128i *)&v214.m256i_i8[1] = v61;
          sub_14041C960(v140, &v214, aAppserverthrea, 15, &off_141A3A570, 15);
          v62 = *(_QWORD *)v140;
          if ( *(_QWORD *)v140 == 2 )
          {
            v195 = *(_QWORD *)&v140[8];
            v158.m128i_i64[0] = (__int64)&v195;
            v158.m128i_i64[1] = (__int64)sub_14163CE40;
            sub_1416ABFD0(&v131, &unk_141A3AD4A, &v158);
            v158 = _mm_loadu_si128(&v131);
            v159 = v132;
            sub_14002F910(&v195);
            v91 = _mm_load_si128(&v158);
            v138 = v91;
            v139 = v159;
            v92 = v212;
            v212[3] = v159;
            *(__m128i *)(v92 + 1) = v91;
            *v92 = 10;
            goto LABEL_160;
          }
          v63 = *(_QWORD *)&v140[8];
          v137 = *(_QWORD *)&v140[32];
          v136 = *(__m128i *)&v140[16];
          v175 = v144;
          v174 = v143;
          v173 = v142;
          v172 = v141;
          sub_1418F44E0(&v176, v145, 0xF8u);
          v139 = v137;
          v138 = _mm_load_si128(&v136);
          v171 = v137;
          v170 = v138;
          v169.m128i_i64[0] = v62;
          v169.m128i_i64[1] = v63;
          v17 = a5;
          v221 = 1;
          sub_140E91160(v138.m128i_i64[1], v137);
          if ( !v65 )
          {
            nullsub_1(v64);
            v93 = 40;
            v94 = sub_140001650(40, 1);
            if ( !v94 )
            {
              v221 = 1;
              sub_141938D2B(1, 40);
            }
            *(_OWORD *)(v94 + 16) = xmmword_141A39935;
            *(__m128i *)v94 = _mm_loadu_si128((const __m128i *)&xmmword_141A39925);
            *(_QWORD *)(v94 + 32) = 0x4449208BA8E7BFBALL;
LABEL_159:
            v95 = v212;
            *v212 = 9;
            v95[1] = v93;
            v95[2] = v94;
            v95[3] = v93;
            sub_14029D3A0(&v169);
LABEL_160:
            v213 = (unsigned __int64)(v58 - v207) >> 5;
            v205 >>= 5;
            v215 = 0;
            while ( v205 != v215 )
            {
              ++v215;
              sub_1403880E0(v60);
              v60 += 32;
            }
            if ( v209 )
              sub_140001660(v204, 32 * v209, 8);
            v96 = v210;
            _RAX = v210 - 1;
            if ( (unsigned __int64)(v210 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
LABEL_166:
              HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v208, v96, 1) >> 32;
LABEL_171:
            v105 = *((_QWORD *)&v146 + 1);
            if ( *((_QWORD *)&v146 + 1) )
            {
              v106 = *((_QWORD *)&v147 + 1);
              if ( *((_QWORD *)&v147 + 1) )
              {
                v107 = v146;
                v108 = (const __m128i *)(v146 + 16);
                _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v146));
                do
                {
                  if ( !(_WORD)_R15D )
                  {
                    do
                    {
                      v110 = _mm_load_si128(v108);
                      v107 -= 384;
                      ++v108;
                      _R15D = _mm_movemask_epi8(v110) ^ 0xFFFF;
                    }
                    while ( !_R15D );
                  }
                  __asm { tzcnt   eax, r15d }
                  v111 = -3 * _RAX;
                  v112 = *(_QWORD *)(v107 + 8 * v111 - 24);
                  if ( v112 )
                    sub_140001660(*(_QWORD *)(v107 + 8 * v111 - 16), v112, 1);
                  --v106;
                  _RAX = _R15D & (unsigned int)(_R15D - 1);
                  _R15D &= _R15D - 1;
                }
                while ( v106 );
              }
              v113 = (24 * v105 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
              v114 = v113 + v105 + 17;
              if ( v114 )
                sub_140001660(v146 - v113, v114, 16);
            }
            _RAX = v206 - 1;
            if ( (unsigned __int64)(v206 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v211, v206, 1) >> 32;
            v116 = *((_QWORD *)&v160 + 1);
            if ( *((_QWORD *)&v160 + 1) )
            {
              v117 = *((_QWORD *)&v161 + 1);
              if ( *((_QWORD *)&v161 + 1) )
              {
                v118 = v160;
                v119 = (const __m128i *)(v160 + 16);
                _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v160));
                do
                {
                  if ( !(_WORD)_R15D )
                  {
                    do
                    {
                      v121 = _mm_load_si128(v119);
                      v118 -= 384;
                      ++v119;
                      _R15D = _mm_movemask_epi8(v121) ^ 0xFFFF;
                    }
                    while ( !_R15D );
                  }
                  __asm { tzcnt   eax, r15d }
                  v122 = -3 * _RAX;
                  v123 = *(_QWORD *)(v118 + 8 * v122 - 24);
                  if ( v123 )
                    sub_140001660(*(_QWORD *)(v118 + 8 * v122 - 16), v123, 1);
                  --v117;
                  _RAX = _R15D & (unsigned int)(_R15D - 1);
                  _R15D &= _R15D - 1;
                }
                while ( v117 );
              }
              v124 = (24 * v116 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
              v125 = v124 + v116 + 17;
              if ( v125 )
                sub_140001660(v160 - v124, v125, 16);
            }
            v126 = v201.m128i_i64[1];
            v213 = v202;
            v215 = 0;
            v205 = v201.m128i_u64[1];
            while ( v213 != v215 )
            {
              ++v215;
              v127 = v126 + 352;
              sub_14038AB90();
              v126 = v127;
            }
            result = v201.m128i_i64[0];
            if ( v201.m128i_i64[0] )
            {
              v98 = v201.m128i_i64[1];
              v100 = 352 * v201.m128i_i64[0];
              v99 = 8;
              return sub_140001660(v98, v100, v99);
            }
            return result;
          }
          if ( v203 )
            break;
LABEL_80:
          v193[40] = v219;
          v221 = 1;
          sub_1416AC440(v140, &v170);
          v221 = 1;
          if ( (unsigned __int8)sub_1403AAB80(&v160, v140) )
          {
            if ( v170.m128i_i64[0] )
              sub_140001660(v170.m128i_i64[1], v170.m128i_i64[0], 1);
            if ( (_QWORD)v172 )
              sub_140001660(*((_QWORD *)&v172 + 1), v172, 1);
            if ( v176.m128i_i64[1] != -1 && v176.m128i_i64[1] )
              sub_140001660(v177, v176.m128i_i64[1], 1);
            if ( v178 != -1 && v178 )
              sub_140001660(v179, v178, 1);
            if ( *((_QWORD *)&v173 + 1) )
              sub_140001660(v174, *((_QWORD *)&v173 + 1), 1);
            sub_14002F9D0(v193);
            if ( v180 != -1 && v180 )
              sub_140001660(v181, v180, 1);
            if ( v183 != -1 && v183 )
              sub_140001660(v184, v183, 1);
            if ( v185 != -1 && v185 )
              sub_140001660(v186, v185, 1);
            if ( v187 != -1 && v187 )
              sub_140001660(v188, v187, 1);
            if ( v189 != -1 && v189 )
              sub_140001660(v190, v189, 1);
            if ( v191 <= 0xFFFFFFFFFFFFFFFDuLL && v191 )
              sub_140001660(v192, v191, 1);
            v68 = *((_QWORD *)&v175 + 1);
            v213 = v176.m128i_i64[0];
            v157 = *((_QWORD *)&v175 + 1);
            v215 = 0;
            while ( v213 != v215 )
            {
              ++v215;
              v69 = v68 + 32;
              sub_1403880E0(v68);
              v68 = v69;
            }
            v17 = a5;
            if ( (_QWORD)v175 )
              sub_140001660(*((_QWORD *)&v175 + 1), 32 * v175, 8);
          }
          else
          {
            sub_1418F44E0((__m128i *)v140, &v169, 0x160u);
            v70 = v202;
            if ( v202 == v201.m128i_i64[0] )
              sub_14190FA40(&v201);
            sub_1418F44E0((__m128i *)(v201.m128i_i64[1] + 352 * v70), (const __m128i *)v140, 0x160u);
            v202 = v70 + 1;
          }
          v60 += 32;
          v205 -= 32LL;
          v59 = v207;
          if ( v207 == v58 )
            goto LABEL_120;
        }
        v66 = v180;
        if ( v180 != -1 && (v182 != a5 || (unsigned int)sub_1418F4B70(v181, v203)) )
        {
          nullsub_1(v64);
          v93 = 61;
          v94 = sub_140001650(61, 1);
          if ( !v94 )
          {
            v221 = 1;
            sub_141938D2B(1, 61);
          }
          *(_OWORD *)(v94 + 45) = *(__int128 *)((char *)&xmmword_141A3996D + 13);
          *(_OWORD *)(v94 + 32) = xmmword_141A3996D;
          *(_OWORD *)(v94 + 16) = xmmword_141A3995D;
          *(__m128i *)v94 = _mm_loadu_si128((const __m128i *)&xmmword_141A3994D);
          goto LABEL_159;
        }
        if ( a5 < 0 )
        {
          v78 = 0;
          goto LABEL_139;
        }
        if ( a5 )
        {
          nullsub_1(v64);
          v67 = (__m128i *)sub_140001650(a5, 1);
          if ( !v67 )
          {
            v198 = a5;
            v78 = 1;
LABEL_139:
            v221 = 1;
            sub_141938D2B(v78, v198);
          }
          v198 = (__int64)v67;
          sub_1418F44E0(v67, v203, a5);
          v66 = v180;
          if ( v180 == -1 )
            goto LABEL_79;
LABEL_77:
          if ( v66 )
            sub_140001660(v181, v66, 1);
        }
        else
        {
          v198 = 1;
          if ( v66 != -1 )
            goto LABEL_77;
        }
LABEL_79:
        v180 = a5;
        v181 = v198;
        v182 = a5;
        goto LABEL_80;
      }
LABEL_120:
      v71 = v58;
LABEL_122:
      v213 = (unsigned __int64)(v58 - v71) >> 5;
      v207 = v71;
      v215 = 0;
      while ( v213 != v215 )
      {
        ++v215;
        v72 = v71 + 32;
        sub_1403880E0(v71);
        v71 = v72;
      }
      if ( v209 )
        sub_140001660(v204, 32 * v209, 8);
      if ( v210 == -1 )
        break;
      v169.m128i_i64[0] = v210;
      v169.m128i_i64[1] = (__int64)v208;
      v170.m128i_i64[0] = v194;
      sub_1416AC440(v140, &v169);
      if ( (unsigned __int8)sub_1403AAB80(&v146, v140) )
      {
        nullsub_1(v73);
        _RAX = sub_140001650(55, 1);
        v96 = v210;
        if ( !_RAX )
          sub_141938D2B(1, 55);
        *(_OWORD *)(_RAX + 32) = xmmword_141A3990E;
        *(_OWORD *)(_RAX + 16) = xmmword_141A398FE;
        *(__m128i *)_RAX = _mm_loadu_si128((const __m128i *)&xmmword_141A398EE);
        *(_QWORD *)(_RAX + 47) = 0x87A0E6B8B8E6B5A1uLL;
        v128 = v212;
        *v212 = 10;
        v128[1] = 55;
        v128[2] = _RAX;
        v128[3] = 55;
        if ( v96 )
          goto LABEL_166;
        goto LABEL_171;
      }
      v74 = v210;
      if ( (unsigned __int64)(v206 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v211, v206, 1);
      v7 = v194;
      v211 = v208;
      v206 = v74;
      if ( v16 > 0x63 )
      {
        nullsub_1(v73);
        _RAX = sub_140001650(49, 1);
        if ( !_RAX )
          sub_141938D2B(1, 49);
        *(_OWORD *)(_RAX + 32) = xmmword_141A39780;
        *(_OWORD *)(_RAX + 16) = xmmword_141A39770;
        *(_OWORD *)_RAX = xmmword_141A39760;
        *(_BYTE *)(_RAX + 48) = -112;
        v79 = v212;
        *v212 = 10;
        v79[1] = 49;
        v79[2] = _RAX;
        v79[3] = 49;
        goto LABEL_171;
      }
    }
    v197 = v211;
    v75 = v206;
    v196 = v206;
    sub_140370B80(&v146);
    v76 = v155;
    v12 = v155;
    if ( (unsigned __int64)(v75 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      sub_140001660(v211, v75, 1);
      v12 = v76;
    }
  }
  result = v202;
  v81 = v212;
  v212[3] = v202;
  *(__m128i *)(v81 + 1) = _mm_loadu_si128(&v201);
  *v81 = -1;
  v82 = *((_QWORD *)&v160 + 1);
  if ( *((_QWORD *)&v160 + 1) )
  {
    v83 = *((_QWORD *)&v161 + 1);
    if ( *((_QWORD *)&v161 + 1) )
    {
      v84 = v160;
      v85 = (const __m128i *)(v160 + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v160));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v87 = _mm_load_si128(v85);
            v84 -= 384;
            ++v85;
            _R15D = _mm_movemask_epi8(v87) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v88 = -3 * result;
        v89 = *(_QWORD *)(v84 + 8 * v88 - 24);
        if ( v89 )
          sub_140001660(*(_QWORD *)(v84 + 8 * v88 - 16), v89, 1);
        --v83;
        result = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v83 );
    }
    result = (24 * v82 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v97 = result + v82 + 17;
    if ( v97 )
    {
      v98 = v160 - result;
      v99 = 16;
      v100 = v97;
      return sub_140001660(v98, v100, v99);
    }
  }
  return result;
}
