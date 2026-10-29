// win 1.2.7 latest-exe | module src/core/codex_app_server.rs | ea 0x14090d0f0 | successor of pre-update 0x140bbaa20 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
double __fastcall sub_14090D0F0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // r13
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  char v34; // r15
  __int64 v35; // rbx
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  _DWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  void *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  void *v50; // rax
  __int64 v51; // rdx
  _DWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  void *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  void *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r15
  __int64 v61; // rax
  __int64 v62; // rbx
  __m128i v63; // xmm0
  _OWORD *v64; // rax
  unsigned __int64 v65; // rax
  int v66; // edx
  unsigned __int64 v67; // r8
  int v68; // ecx
  __int64 v69; // r8
  bool v70; // zf
  unsigned __int64 v71; // rax
  __m128i si128; // xmm0
  bool v73; // r8
  __m128i v75; // xmm0
  __int64 v76; // rdx
  __int64 v77; // rsi
  __int64 v78; // rax
  __int64 v79; // r15
  __int64 v80; // rbx
  __m128i v81; // xmm0
  __int64 v82; // rbx
  __int64 v83; // rdi
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rbx
  __int64 v87; // rax
  __int64 v88; // rbx
  unsigned __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rdi
  unsigned __int64 v92; // rbx
  __int64 v93; // rcx
  __int64 v94; // rbx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // r14
  __int64 v99; // rdi
  __int64 v100; // r15
  __int64 v101; // rbx
  __int64 v102; // rcx
  _QWORD *v103; // rcx
  _QWORD *v105; // rcx
  __int64 v106; // rsi
  __int64 v107; // rdi
  __int64 v108; // rbx
  const __m128i *v109; // r14
  __int64 v111; // rax
  __int64 v112; // rdx
  _QWORD *v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // rbx
  _QWORD *v116; // rcx
  __int64 v117; // rdi
  __int64 v118; // rax
  _QWORD *v119; // rcx
  __int64 v120; // rdx
  unsigned __int64 v121; // rax
  __int64 v122; // rsi
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // rdx
  __int64 *v126; // rdx
  __int128 v127; // xmm0
  __int128 v128; // xmm1
  __int64 v129; // rsi
  __int64 v130; // rdi
  __int64 v131; // rbx
  const __m128i *v132; // r14
  __int64 v134; // rax
  __int64 v135; // rdx
  unsigned __int64 v136; // rax
  __int64 v137; // rsi
  __int64 v139; // rsi
  __int64 v140; // rdi
  __int64 v141; // rbx
  const __m128i *v142; // r14
  __int64 v144; // rax
  __int64 v145; // rdx
  unsigned __int64 v146; // rax
  __int64 v147; // rsi
  _QWORD *v148; // rcx
  _QWORD *v149; // rsi
  _QWORD *v150; // rcx
  int v152; // [rsp+30h] [rbp-50h]
  _OWORD v153[2]; // [rsp+40h] [rbp-40h] BYREF
  __m128i v154; // [rsp+60h] [rbp-20h] BYREF
  __int64 v155; // [rsp+70h] [rbp-10h]
  __int64 v156; // [rsp+78h] [rbp-8h]
  __int64 v157; // [rsp+80h] [rbp+0h]
  _WORD v158[4]; // [rsp+88h] [rbp+8h]
  __m128i v159; // [rsp+90h] [rbp+10h] BYREF
  __int64 v160; // [rsp+A0h] [rbp+20h]
  __m128i v161; // [rsp+B0h] [rbp+30h]
  __int64 v162; // [rsp+C0h] [rbp+40h]
  _BYTE v163[40]; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v164; // [rsp+F8h] [rbp+78h]
  __int128 v165; // [rsp+108h] [rbp+88h]
  __int128 v166; // [rsp+118h] [rbp+98h]
  __int128 v167; // [rsp+128h] [rbp+A8h]
  char v168[248]; // [rsp+138h] [rbp+B8h] BYREF
  __int128 v169; // [rsp+230h] [rbp+1B0h] BYREF
  __int128 v170; // [rsp+240h] [rbp+1C0h]
  __int64 v171; // [rsp+250h] [rbp+1D0h]
  __int64 v172; // [rsp+258h] [rbp+1D8h]
  __int64 v173; // [rsp+260h] [rbp+1E0h]
  __int64 v174; // [rsp+268h] [rbp+1E8h]
  __int64 v175; // [rsp+270h] [rbp+1F0h]
  __int64 v176; // [rsp+278h] [rbp+1F8h]
  __int64 v177; // [rsp+280h] [rbp+200h]
  __int64 v178; // [rsp+288h] [rbp+208h]
  __int64 v179; // [rsp+290h] [rbp+210h]
  __int64 v180; // [rsp+298h] [rbp+218h]
  __m128i v181; // [rsp+2A0h] [rbp+220h] BYREF
  __int64 v182; // [rsp+2B0h] [rbp+230h]
  __int128 v183; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v184; // [rsp+2D0h] [rbp+250h]
  __int64 v185; // [rsp+2E0h] [rbp+260h]
  __int64 v186; // [rsp+2E8h] [rbp+268h]
  __int8 v187; // [rsp+2F0h] [rbp+270h] BYREF
  _BYTE v188[23]; // [rsp+2F1h] [rbp+271h] BYREF
  __int64 v189; // [rsp+308h] [rbp+288h]
  __int64 v190; // [rsp+310h] [rbp+290h] BYREF
  int v191; // [rsp+318h] [rbp+298h]
  __m128i v192; // [rsp+320h] [rbp+2A0h] BYREF
  __m128i v193; // [rsp+330h] [rbp+2B0h] BYREF
  __int64 v194; // [rsp+340h] [rbp+2C0h]
  __int128 v195; // [rsp+348h] [rbp+2C8h]
  __int128 v196; // [rsp+358h] [rbp+2D8h]
  __int128 v197; // [rsp+368h] [rbp+2E8h]
  __int128 v198; // [rsp+378h] [rbp+2F8h]
  unsigned __int64 v199; // [rsp+388h] [rbp+308h] BYREF
  __int64 v200; // [rsp+390h] [rbp+310h]
  __int64 v201; // [rsp+398h] [rbp+318h]
  __int64 v202; // [rsp+3A8h] [rbp+328h]
  __int64 v203; // [rsp+3B0h] [rbp+330h]
  __int64 v204; // [rsp+3C0h] [rbp+340h]
  __int64 v205; // [rsp+3C8h] [rbp+348h]
  __int64 v206; // [rsp+3D0h] [rbp+350h]
  __int64 v207; // [rsp+3D8h] [rbp+358h]
  __int64 v208; // [rsp+3E0h] [rbp+360h]
  __int64 v209; // [rsp+3F0h] [rbp+370h]
  __int64 v210; // [rsp+3F8h] [rbp+378h]
  __int64 v211; // [rsp+408h] [rbp+388h]
  __int64 v212; // [rsp+410h] [rbp+390h]
  __int64 v213; // [rsp+420h] [rbp+3A0h]
  __int64 v214; // [rsp+428h] [rbp+3A8h]
  unsigned __int64 v215; // [rsp+438h] [rbp+3B8h]
  __int64 v216; // [rsp+440h] [rbp+3C0h]
  _BYTE v217[56]; // [rsp+450h] [rbp+3D0h] BYREF
  __int64 v218; // [rsp+488h] [rbp+408h]
  __int64 v219; // [rsp+490h] [rbp+410h] BYREF
  __int64 v220; // [rsp+498h] [rbp+418h]
  __int64 v221; // [rsp+4A0h] [rbp+420h]
  __int64 v222; // [rsp+4A8h] [rbp+428h]
  __m128i v223; // [rsp+4B0h] [rbp+430h] BYREF
  __int128 v224; // [rsp+4C0h] [rbp+440h]
  __m128i v225; // [rsp+4D0h] [rbp+450h] BYREF
  unsigned __int64 v226; // [rsp+4E0h] [rbp+460h]
  __int64 v227; // [rsp+4E8h] [rbp+468h]
  __int64 v228; // [rsp+4F0h] [rbp+470h]
  unsigned __int64 v229; // [rsp+4F8h] [rbp+478h]
  __int64 v230; // [rsp+500h] [rbp+480h]
  __int64 v231; // [rsp+508h] [rbp+488h]
  __int64 v232; // [rsp+510h] [rbp+490h]
  __int64 v233; // [rsp+518h] [rbp+498h]
  __int64 v234; // [rsp+520h] [rbp+4A0h]
  __int64 v235; // [rsp+528h] [rbp+4A8h]
  _QWORD *v236; // [rsp+530h] [rbp+4B0h]
  unsigned __int64 v237; // [rsp+538h] [rbp+4B8h]
  __m256i v238; // [rsp+540h] [rbp+4C0h] BYREF
  __int64 v239; // [rsp+568h] [rbp+4E8h]
  char v240; // [rsp+570h] [rbp+4F0h]
  char v241; // [rsp+571h] [rbp+4F1h]
  char v242; // [rsp+572h] [rbp+4F2h]
  char v243; // [rsp+573h] [rbp+4F3h]
  char v244; // [rsp+575h] [rbp+4F5h]
  char v245; // [rsp+576h] [rbp+4F6h]
  char v246; // [rsp+577h] [rbp+4F7h]
  __int64 v247; // [rsp+578h] [rbp+4F8h]

  v247 = -2;
  v227 = a4;
  v176 = a3;
  v175 = a2;
  v236 = a1;
  v190 = a6;
  v191 = a7;
  v225.m128i_i64[0] = 0;
  v225.m128i_i64[1] = 8;
  v226 = 0;
  v8 = sub_1416AE140(a6);
  v13 = v8;
  if ( *(_BYTE *)(v8 + 16) == 1 )
  {
    v14 = *(_QWORD *)v8;
    v15 = *(_QWORD *)(v13 + 8);
  }
  else
  {
    v14 = sub_1416C5230(v10, v9, v11, v12);
    *(_QWORD *)v13 = v14;
    *(_QWORD *)(v13 + 8) = v15;
    *(_BYTE *)(v13 + 16) = 1;
  }
  *(_QWORD *)v13 = v14 + 1;
  v184 = xmmword_141A57990;
  v183 = *(_OWORD *)&off_141A57980;
  v185 = v14;
  v186 = v15;
  v157 = 2;
  v158[0] = 256;
  v16 = 0;
  while ( v16 != 2 )
  {
    v178 = v16 + 1;
    v156 = v16 + 1;
    v243 = *((_BYTE *)v158 + v16);
    v221 = v234;
    v220 = -1;
    v17 = sub_1416AE140(v16 + 1);
    if ( *(_BYTE *)(v17 + 16) == 1 )
    {
      v21 = *(_QWORD *)v17;
      v22 = *(_QWORD *)(v17 + 8);
    }
    else
    {
      v221 = v234;
      v220 = -1;
      v101 = v17;
      v21 = sub_1416C5230(v234, v18, v19, v20);
      v17 = v101;
      *(_QWORD *)v101 = v21;
      *(_QWORD *)(v101 + 8) = v22;
      *(_BYTE *)(v101 + 16) = 1;
    }
    *(_QWORD *)v17 = v21 + 1;
    v170 = xmmword_141A57990;
    v169 = *(_OWORD *)&off_141A57980;
    v171 = v21;
    v172 = v22;
    v230 = -1;
    v23 = 0;
    v24 = a5;
    while ( 1 )
    {
      if ( (unsigned __int64)sub_1416AED20(&v190) > 0x1D )
      {
        nullsub_1(v26, v25);
        _RAX = sub_140001650(62, 1);
        if ( !_RAX )
          sub_14196B2DB(1, 62);
        *(_OWORD *)(_RAX + 46) = *(__int128 *)((char *)&xmmword_141A57BE2 + 14);
        *(_OWORD *)(_RAX + 32) = xmmword_141A57BE2;
        *(_OWORD *)(_RAX + 16) = xmmword_141A57BD2;
        v75 = _mm_loadu_si128((const __m128i *)&xmmword_141A57BC2);
        *(__m128i *)_RAX = v75;
        v113 = v236;
        *v236 = 10;
        v113[1] = 62;
        v113[2] = _RAX;
        v113[3] = 62;
        goto LABEL_171;
      }
      v223.m128i_i64[0] = 0;
      *(_QWORD *)&v224 = 0;
      nullsub_1(v26, v25);
      v27 = (_QWORD *)sub_140001650(8, 1);
      if ( !v27 )
        sub_14196B2DB(1, 8);
      *v27 = 0x6465766968637261LL;
      v238.m256i_i64[0] = 8;
      v238.m256i_i64[1] = (__int64)v27;
      v238.m256i_i64[2] = 8;
      v163[0] = 1;
      v163[1] = v243;
      sub_140A68320(&v192, &v223, &v238, v163);
      if ( v192.m128i_i8[0] != -1 )
        sub_140032FF0(&v192);
      nullsub_1(v29, v28);
      v30 = sub_140001650(6, 1);
      if ( !v30 )
        sub_14196B2DB(1, 6);
      *(_WORD *)(v30 + 4) = 29295;
      *(_DWORD *)v30 = 1936880995;
      v238.m256i_i64[0] = 6;
      v238.m256i_i64[1] = v30;
      v238.m256i_i64[2] = 6;
      v32 = v173;
      v33 = v174;
      if ( v230 == -1 )
      {
        v34 = 0;
        v36 = v177;
      }
      else
      {
        if ( v7 < 0 )
        {
          v35 = 0;
          v36 = v7;
LABEL_137:
          v242 = 1;
          sub_14196B2DB(v35, v36);
        }
        v34 = 3;
        if ( v7 )
        {
          nullsub_1(v174, v31);
          v35 = 1;
          v36 = v7;
          v37 = sub_140001650(v7, 1);
          if ( !v37 )
            goto LABEL_137;
          v38 = v37;
          sub_1419234B0(v37, v234, v7);
          v32 = v38;
          v33 = v7;
        }
        else
        {
          v32 = 1;
          v33 = 0;
          v36 = 0;
        }
      }
      v163[0] = v34;
      v177 = v36;
      *(_QWORD *)&v163[8] = v36;
      v173 = v32;
      *(_QWORD *)&v163[16] = v32;
      v174 = v33;
      *(_QWORD *)&v163[24] = v33;
      v242 = 0;
      sub_140A68320(&v192, &v223, &v238, v163);
      if ( v192.m128i_i8[0] != -1 )
        sub_140032FF0(&v192);
      nullsub_1(v40, v39);
      v41 = sub_140001650(5, 1);
      if ( !v41 )
        sub_14196B2DB(1, 5);
      *(_BYTE *)(v41 + 4) = 116;
      *(_DWORD *)v41 = 1768778092;
      v238.m256i_i64[0] = 5;
      v238.m256i_i64[1] = v41;
      v238.m256i_i64[2] = 5;
      v163[0] = 2;
      *(_QWORD *)&v163[8] = 0;
      *(_QWORD *)&v163[16] = 100;
      sub_140A68320(&v192, &v223, &v238, v163);
      if ( v192.m128i_i8[0] != -1 )
        sub_140032FF0(&v192);
      nullsub_1(v43, v42);
      v44 = (_DWORD *)sub_140001650(7, 1);
      if ( !v44 )
        sub_14196B2DB(1, 7);
      *(_DWORD *)((char *)v44 + 3) = 2036681588;
      *v44 = 1953656691;
      v238.m256i_i64[0] = 7;
      v238.m256i_i64[1] = (__int64)v44;
      v238.m256i_i64[2] = 7;
      nullsub_1(v46, v45);
      v47 = (void *)sub_140001650(10, 1);
      v239 = (__int64)v47;
      if ( !v47 )
        sub_14196B2DB(1, 10);
      qmemcpy(v47, "recency_at", 10);
      v163[0] = 3;
      *(_QWORD *)&v163[8] = 10;
      *(_QWORD *)&v163[16] = v47;
      *(_QWORD *)&v163[24] = 10;
      sub_140A68320(&v192, &v223, &v238, v163);
      if ( v192.m128i_i8[0] != -1 )
        sub_140032FF0(&v192);
      nullsub_1(v49, v48);
      v50 = (void *)sub_140001650(13, 1);
      if ( !v50 )
        sub_14196B2DB(1, 13);
      qmemcpy(v50, "sortDirection", 13);
      v238.m256i_i64[0] = 13;
      v238.m256i_i64[1] = (__int64)v50;
      v238.m256i_i64[2] = 13;
      nullsub_1(0x6572694474726F73LL, v51);
      v52 = (_DWORD *)sub_140001650(4, 1);
      v239 = (__int64)v52;
      if ( !v52 )
        sub_14196B2DB(1, 4);
      *v52 = 1668506980;
      v163[0] = 3;
      *(_QWORD *)&v163[8] = 4;
      *(_QWORD *)&v163[16] = v52;
      *(_QWORD *)&v163[24] = 4;
      sub_140A68320(&v192, &v223, &v238, v163);
      if ( v192.m128i_i8[0] != -1 )
        sub_140032FF0(&v192);
      nullsub_1(v54, v53);
      v55 = (void *)sub_140001650(14, 1);
      if ( !v55 )
        sub_14196B2DB(1, 14);
      qmemcpy(v55, "useStateDbOnly", 14);
      v238.m256i_i64[0] = 14;
      v238.m256i_i64[1] = (__int64)v55;
      v238.m256i_i64[2] = 14;
      *(_WORD *)v163 = 257;
      sub_140A68320(&v192, &v223, &v238, v163);
      if ( v192.m128i_i8[0] != -1 )
        sub_140032FF0(&v192);
      nullsub_1(v57, v56);
      v58 = (void *)sub_140001650(11, 1);
      if ( !v58 )
        sub_14196B2DB(1, 11);
      qmemcpy(v58, "sourceKinds", 11);
      v238.m256i_i64[0] = 11;
      v238.m256i_i64[1] = (__int64)v58;
      v238.m256i_i64[2] = 11;
      v244 = 1;
      sub_140B727C0(v163, &off_141A57A78);
      if ( v163[0] == 0xFF )
      {
        v192.m128i_i64[0] = *(_QWORD *)&v163[8];
        sub_14196B5F0(
          (unsigned int)aCalledResultUn_13,
          43,
          (unsigned int)&v192,
          (unsigned int)&off_141A5A840,
          (__int64)&off_141A579F8);
      }
      v193 = *(__m128i *)&v163[16];
      v192 = *(__m128i *)v163;
      v244 = 0;
      sub_140A68320(v163, &v223, &v238, &v192);
      if ( v163[0] != 0xFF )
        sub_140032FF0(v163);
      v189 = v224;
      *(__m128i *)&v188[7] = _mm_loadu_si128(&v223);
      v187 = 5;
      if ( v227 )
      {
        if ( v24 < 0 )
        {
          v60 = 0;
LABEL_141:
          v246 = 1;
          sub_14196B2DB(v60, v24);
        }
        if ( v24 )
        {
          nullsub_1(&v188[7], v59);
          v60 = 1;
          v61 = sub_140001650(v24, 1);
          if ( !v61 )
            goto LABEL_141;
          v62 = v61;
          sub_1419234B0(v61, v227, v24);
        }
        else
        {
          v62 = 1;
        }
        v163[0] = 3;
        *(_QWORD *)&v163[8] = v24;
        *(_QWORD *)&v163[16] = v62;
        *(_QWORD *)&v163[24] = v24;
        v240 = 1;
        v239 = sub_1416725D0(aParentthreadid, 14, &v187);
        sub_140032FF0(v239);
        v63 = _mm_loadu_si128((const __m128i *)v163);
        v64 = (_OWORD *)v239;
        *(_OWORD *)(v239 + 16) = *(_OWORD *)&v163[16];
        *v64 = v63;
      }
      *(__m128i *)&v238.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v188[15]);
      v238.m256i_i8[0] = v187;
      *(__int64 *)((char *)v238.m256i_i64 + 1) = *(_QWORD *)v188;
      *(__int32 *)((char *)&v238.m256i_i32[2] + 1) = *(_DWORD *)&v188[8];
      *(__int16 *)((char *)&v238.m256i_i16[6] + 1) = *(_WORD *)&v188[12];
      v238.m256i_i8[15] = v188[14];
      v241 = 1;
      v65 = sub_1416AED20(v175);
      v68 = -1;
      if ( v65 <= 0x1E )
      {
        if ( v66 )
        {
          if ( v65 == 30 )
            goto LABEL_53;
          v68 = 1000000000 - v66;
          v69 = 29;
        }
        else
        {
          v69 = 30;
          v68 = 0;
        }
        v67 = v69 - v65;
      }
LABEL_53:
      v70 = v68 == -1;
      if ( v68 == -1 )
        v68 = 0;
      v71 = 0;
      if ( !v70 )
        v71 = v67;
      si128 = _mm_load_si128((const __m128i *)&v238);
      v73 = v71 >= 0xB;
      if ( v71 == 10 )
        v73 = v68 != 0;
      v193 = *(__m128i *)&v238.m256i_u64[2];
      if ( v73 )
        v68 = 0;
      v192 = si128;
      v241 = 0;
      v152 = v68;
      sub_1409316C0((__int128 *)v163, v176);
      _RAX = *(_QWORD *)v163;
      v223 = *(__m128i *)&v163[8];
      v224 = *(_OWORD *)&v163[24];
      if ( *(_QWORD *)v163 != -1 )
      {
        v126 = v236;
        v236[11] = v167;
        v127 = v164;
        v128 = v165;
        *(_OWORD *)(v126 + 9) = v166;
        *(_OWORD *)(v126 + 7) = v128;
        *(_OWORD *)(v126 + 5) = v127;
        v75 = v223;
        *(_OWORD *)(v126 + 3) = v224;
        *(__m128i *)(v126 + 1) = v75;
        *v126 = _RAX;
        goto LABEL_171;
      }
      v75 = _mm_load_si128(&v223);
      v153[0] = v75;
      v153[1] = v224;
      v246 = 0;
      sub_140B843C0(v163, v153, aThreadlistpage, 14, &off_141A58140, 2, v152);
      v76 = *(_QWORD *)&v163[8];
      if ( *(_QWORD *)v163 == -1 )
      {
        _RAX = (__int64)v236;
        *v236 = 3;
        *(_QWORD *)(_RAX + 8) = v76;
        goto LABEL_171;
      }
      ++v23;
      v233 = *(_QWORD *)&v163[24];
      v231 = *(_QWORD *)&v163[32];
      v218 = v164;
      v77 = *(_QWORD *)&v163[8] + 32LL * *(_QWORD *)&v163[16];
      v223.m128i_i64[0] = *(_QWORD *)&v163[8];
      v223.m128i_i64[1] = *(_QWORD *)&v163[8];
      v232 = *(_QWORD *)v163;
      *(_QWORD *)&v224 = *(_QWORD *)v163;
      *((_QWORD *)&v224 + 1) = v77;
      v78 = *(_QWORD *)&v163[8];
      v79 = *(_QWORD *)&v163[8] + 32LL;
      v179 = 32LL * *(_QWORD *)&v163[16];
      v229 = 32LL * *(_QWORD *)&v163[16] - 32;
      v228 = *(_QWORD *)&v163[8];
      if ( *(_QWORD *)&v163[8] != v77 )
      {
        while ( 1 )
        {
          v80 = v78 + 32;
          v223.m128i_i64[1] = v78 + 32;
          if ( *(_BYTE *)v78 == 0xFF )
            goto LABEL_122;
          v238.m256i_i8[0] = *(_BYTE *)v78;
          v81 = _mm_loadu_si128((const __m128i *)(v78 + 1));
          *(_OWORD *)&v238.m256i_u64[2] = *(_OWORD *)(v78 + 16);
          *(__m128i *)&v238.m256i_i8[1] = v81;
          sub_140B7FC00(
            v163,
            &v238,
            "AppServerThreadidcwdpathnamepreviewsourceagentNicknameagentRoleprojectIdhistoryModegitInfoupdatedAtrecencyAtturns",
            15,
            &off_141A58030,
            15);
          v235 = v80;
          v82 = *(_QWORD *)v163;
          if ( *(_QWORD *)v163 == 2 )
          {
            v219 = *(_QWORD *)&v163[8];
            v181.m128i_i64[0] = (__int64)&v219;
            v181.m128i_i64[1] = (__int64)sub_14166FAD0;
            sub_1416DAFA0(&v154, &unk_141A58E4C, &v181);
            v181 = _mm_loadu_si128(&v154);
            v182 = v155;
            sub_140032F30(&v219);
            v115 = v235;
            v75 = _mm_load_si128(&v181);
            v161 = v75;
            v162 = v182;
            v116 = v236;
            v236[3] = v182;
            *(__m128i *)(v116 + 1) = v75;
            *v116 = 10;
            goto LABEL_160;
          }
          v83 = *(_QWORD *)&v163[8];
          v160 = *(_QWORD *)&v163[32];
          v159 = *(__m128i *)&v163[16];
          v198 = v167;
          v197 = v166;
          v196 = v165;
          v195 = v164;
          sub_1419234B0(&v199, v168, 248);
          v162 = v160;
          v161 = _mm_load_si128(&v159);
          v194 = v160;
          v193 = v161;
          v192.m128i_i64[0] = v82;
          v192.m128i_i64[1] = v83;
          sub_1408FEA60(v161.m128i_i64[1], v160);
          if ( !v84 )
          {
            nullsub_1(v85, 0);
            v117 = 40;
            v118 = sub_140001650(40, 1);
            if ( !v118 )
            {
              v245 = 1;
              sub_14196B2DB(1, 40);
            }
            *(_OWORD *)(v118 + 16) = xmmword_141A57B6D;
            v75 = _mm_loadu_si128((const __m128i *)&xmmword_141A57B5D);
            *(__m128i *)v118 = v75;
            *(_QWORD *)(v118 + 32) = 0x4449208BA8E7BFBALL;
LABEL_159:
            v115 = v235;
            v119 = v236;
            *v236 = 9;
            v119[1] = v117;
            v119[2] = v118;
            v119[3] = v117;
            sub_140906010(&v192);
LABEL_160:
            v237 = (unsigned __int64)(v77 - v115) >> 5;
            v229 >>= 5;
            v239 = 0;
            while ( v229 != v239 )
            {
              ++v239;
              sub_1401AB4D0(v79, v114);
              v79 += 32;
            }
            if ( v232 )
              *(double *)v75.m128i_i64 = sub_140001660(v228, 32 * v232, 8);
            v120 = v233;
            _RAX = v233 - 1;
            if ( (unsigned __int64)(v233 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
LABEL_166:
              *(double *)v75.m128i_i64 = sub_140001660(v231, v120, 1);
LABEL_171:
            v129 = *((_QWORD *)&v169 + 1);
            if ( *((_QWORD *)&v169 + 1) )
            {
              v130 = *((_QWORD *)&v170 + 1);
              if ( *((_QWORD *)&v170 + 1) )
              {
                v131 = v169;
                v75 = _mm_load_si128((const __m128i *)v169);
                v132 = (const __m128i *)(v169 + 16);
                _R15D = ~_mm_movemask_epi8(v75);
                do
                {
                  if ( !(_WORD)_R15D )
                  {
                    do
                    {
                      v75 = _mm_load_si128(v132);
                      v131 -= 384;
                      ++v132;
                      _R15D = _mm_movemask_epi8(v75) ^ 0xFFFF;
                    }
                    while ( !_R15D );
                  }
                  __asm { tzcnt   eax, r15d }
                  v134 = -3 * _RAX;
                  v135 = *(_QWORD *)(v131 + 8 * v134 - 24);
                  if ( v135 )
                    *(double *)v75.m128i_i64 = sub_140001660(*(_QWORD *)(v131 + 8 * v134 - 16), v135, 1);
                  --v130;
                  _RAX = _R15D & (unsigned int)(_R15D - 1);
                  _R15D &= _R15D - 1;
                }
                while ( v130 );
              }
              v136 = (24 * v129 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
              v137 = v136 + v129 + 17;
              if ( v137 )
                *(double *)v75.m128i_i64 = sub_140001660(v169 - v136, v137, 16);
            }
            _RAX = v230 - 1;
            if ( (unsigned __int64)(v230 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              *(double *)v75.m128i_i64 = sub_140001660(v234, v230, 1);
            v139 = *((_QWORD *)&v183 + 1);
            if ( *((_QWORD *)&v183 + 1) )
            {
              v140 = *((_QWORD *)&v184 + 1);
              if ( *((_QWORD *)&v184 + 1) )
              {
                v141 = v183;
                v75 = _mm_load_si128((const __m128i *)v183);
                v142 = (const __m128i *)(v183 + 16);
                _R15D = ~_mm_movemask_epi8(v75);
                do
                {
                  if ( !(_WORD)_R15D )
                  {
                    do
                    {
                      v75 = _mm_load_si128(v142);
                      v141 -= 384;
                      ++v142;
                      _R15D = _mm_movemask_epi8(v75) ^ 0xFFFF;
                    }
                    while ( !_R15D );
                  }
                  __asm { tzcnt   eax, r15d }
                  v144 = -3 * _RAX;
                  v145 = *(_QWORD *)(v141 + 8 * v144 - 24);
                  if ( v145 )
                    *(double *)v75.m128i_i64 = sub_140001660(*(_QWORD *)(v141 + 8 * v144 - 16), v145, 1);
                  --v140;
                  _RAX = _R15D & (unsigned int)(_R15D - 1);
                  _R15D &= _R15D - 1;
                }
                while ( v140 );
              }
              v146 = (24 * v139 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
              v147 = v146 + v139 + 17;
              if ( v147 )
                *(double *)v75.m128i_i64 = sub_140001660(v183 - v146, v147, 16);
            }
            v148 = (_QWORD *)v225.m128i_i64[1];
            v237 = v226;
            v239 = 0;
            v229 = v225.m128i_u64[1];
            while ( v237 != v239 )
            {
              ++v239;
              v149 = v148 + 44;
              *(double *)v75.m128i_i64 = sub_1401AEAD0(v148);
              v148 = v149;
            }
            if ( v225.m128i_i64[0] )
            {
              v123 = v225.m128i_i64[1];
              v125 = 352 * v225.m128i_i64[0];
              v124 = 8;
LABEL_198:
              *(double *)v75.m128i_i64 = sub_140001660(v123, v125, v124);
            }
            return *(double *)v75.m128i_i64;
          }
          if ( v227 )
            break;
          v24 = a5;
LABEL_81:
          v217[40] = v243;
          v245 = 1;
          sub_1416DB410(v163, &v193);
          v245 = 1;
          if ( (unsigned __int8)sub_140871180((__int64)&v183, v163) )
          {
            v88 = v235;
            if ( v193.m128i_i64[0] )
              sub_140001660(v193.m128i_i64[1], v193.m128i_i64[0], 1);
            if ( (_QWORD)v195 )
              sub_140001660(*((_QWORD *)&v195 + 1), v195, 1);
            if ( v200 != -1 && v200 )
              sub_140001660(v201, v200, 1);
            if ( v202 != -1 && v202 )
              sub_140001660(v203, v202, 1);
            if ( *((_QWORD *)&v196 + 1) )
              sub_140001660(v197, *((_QWORD *)&v196 + 1), 1);
            sub_140032FF0(v217);
            if ( v204 != -1 && v204 )
              sub_140001660(v205, v204, 1);
            if ( v207 != -1 && v207 )
              sub_140001660(v208, v207, 1);
            if ( v209 != -1 && v209 )
              sub_140001660(v210, v209, 1);
            if ( v211 != -1 && v211 )
              sub_140001660(v212, v211, 1);
            if ( v213 != -1 && v213 )
              sub_140001660(v214, v213, 1);
            v89 = v215;
            if ( v215 <= 0xFFFFFFFFFFFFFFFDuLL && v215 )
              sub_140001660(v216, v215, 1);
            v90 = *((_QWORD *)&v198 + 1);
            v237 = v199;
            v180 = *((_QWORD *)&v198 + 1);
            v239 = 0;
            while ( v237 != v239 )
            {
              ++v239;
              v91 = v90 + 32;
              sub_1401AB4D0(v90, v89);
              v90 = v91;
            }
            v76 = v198;
            v24 = a5;
            if ( (_QWORD)v198 )
              sub_140001660(*((_QWORD *)&v198 + 1), 32 * v198, 8);
          }
          else
          {
            sub_1419234B0(v163, &v192, 352);
            v92 = v226;
            if ( v226 == v225.m128i_i64[0] )
              sub_141939C80(v225.m128i_i64);
            sub_1419234B0(v225.m128i_i64[1] + 352 * v92, v163, 352);
            v226 = v92 + 1;
            v88 = v235;
          }
          v79 += 32;
          v229 -= 32LL;
          v78 = v88;
          if ( v88 == v77 )
            goto LABEL_121;
        }
        v86 = v204;
        v24 = a5;
        if ( v204 != -1 && (v206 != a5 || (unsigned int)sub_141923B40(v205, v227, a5)) )
        {
          nullsub_1(v85, v84);
          v117 = 61;
          v118 = sub_140001650(61, 1);
          if ( !v118 )
          {
            v245 = 1;
            sub_14196B2DB(1, 61);
          }
          *(_OWORD *)(v118 + 45) = *(__int128 *)((char *)&xmmword_141A57BA5 + 13);
          *(_OWORD *)(v118 + 32) = xmmword_141A57BA5;
          *(_OWORD *)(v118 + 16) = xmmword_141A57B95;
          v75 = _mm_loadu_si128((const __m128i *)&xmmword_141A57B85);
          *(__m128i *)v118 = v75;
          goto LABEL_159;
        }
        if ( a5 < 0 )
        {
          v102 = 0;
          goto LABEL_139;
        }
        if ( a5 )
        {
          nullsub_1(v85, v84);
          v87 = sub_140001650(a5, 1);
          if ( !v87 )
          {
            v222 = a5;
            v102 = 1;
LABEL_139:
            v245 = 1;
            sub_14196B2DB(v102, v222);
          }
          v222 = v87;
          sub_1419234B0(v87, v227, a5);
          v86 = v204;
          if ( v204 == -1 )
            goto LABEL_80;
LABEL_78:
          if ( v86 )
            sub_140001660(v205, v86, 1);
        }
        else
        {
          v222 = 1;
          if ( v86 != -1 )
            goto LABEL_78;
        }
LABEL_80:
        v204 = a5;
        v205 = v222;
        v206 = a5;
        goto LABEL_81;
      }
LABEL_121:
      v80 = v77;
LABEL_122:
      v237 = (unsigned __int64)(v77 - v80) >> 5;
      v235 = v80;
      v93 = v80;
      v239 = 0;
      while ( v237 != v239 )
      {
        ++v239;
        v94 = v93 + 32;
        sub_1401AB4D0(v93, v76);
        v93 = v94;
      }
      if ( v232 )
        sub_140001660(v228, 32 * v232, 8);
      if ( v233 == -1 )
        break;
      v192.m128i_i64[0] = v233;
      v192.m128i_i64[1] = v231;
      v193.m128i_i64[0] = v218;
      sub_1416DB410(v163, &v192);
      if ( (unsigned __int8)sub_140871180((__int64)&v169, v163) )
      {
        nullsub_1(v96, v95);
        _RAX = sub_140001650(55, 1);
        v120 = v233;
        if ( !_RAX )
          sub_14196B2DB(1, 55);
        *(_OWORD *)(_RAX + 32) = xmmword_141A57B46;
        *(_OWORD *)(_RAX + 16) = xmmword_141A57B36;
        v75 = _mm_loadu_si128((const __m128i *)&xmmword_141A57B26);
        *(__m128i *)_RAX = v75;
        *(_QWORD *)(_RAX + 47) = 0x87A0E6B8B8E6B5A1uLL;
        v150 = v236;
        *v236 = 10;
        v150[1] = 55;
        v150[2] = _RAX;
        v150[3] = 55;
        if ( v120 )
          goto LABEL_166;
        goto LABEL_171;
      }
      v97 = v230;
      v98 = v233;
      if ( (unsigned __int64)(v230 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v234, v230, 1);
      v7 = v218;
      v234 = v231;
      v230 = v98;
      if ( v23 > 0x63 )
      {
        nullsub_1(v96, v97);
        _RAX = sub_140001650(49, 1);
        if ( !_RAX )
          sub_14196B2DB(1, 49);
        *(_OWORD *)(_RAX + 32) = xmmword_141A579C0;
        *(_OWORD *)(_RAX + 16) = xmmword_141A579B0;
        v75.m128i_i64[0] = 0x2054504774616843LL;
        *(_OWORD *)_RAX = xmmword_141A579A0;
        *(_BYTE *)(_RAX + 48) = -112;
        v103 = v236;
        *v236 = 10;
        v103[1] = 49;
        v103[2] = _RAX;
        v103[3] = 49;
        goto LABEL_171;
      }
    }
    v221 = v234;
    v99 = v230;
    v220 = v230;
    sub_140190060(&v169);
    v100 = v178;
    v16 = v178;
    if ( (unsigned __int64)(v99 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      sub_140001660(v234, v99, 1);
      v16 = v100;
    }
  }
  HIDWORD(_RAX) = HIDWORD(v226);
  v105 = v236;
  v236[3] = v226;
  v75 = _mm_loadu_si128(&v225);
  *(__m128i *)(v105 + 1) = v75;
  *v105 = -1;
  v106 = *((_QWORD *)&v183 + 1);
  if ( *((_QWORD *)&v183 + 1) )
  {
    v107 = *((_QWORD *)&v184 + 1);
    if ( *((_QWORD *)&v184 + 1) )
    {
      v108 = v183;
      v75 = _mm_load_si128((const __m128i *)v183);
      v109 = (const __m128i *)(v183 + 16);
      _R15D = ~_mm_movemask_epi8(v75);
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v75 = _mm_load_si128(v109);
            v108 -= 384;
            ++v109;
            _R15D = _mm_movemask_epi8(v75) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v111 = -3 * _RAX;
        v112 = *(_QWORD *)(v108 + 8 * v111 - 24);
        if ( v112 )
          *(double *)v75.m128i_i64 = sub_140001660(*(_QWORD *)(v108 + 8 * v111 - 16), v112, 1);
        --v107;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v107 );
    }
    v121 = (24 * v106 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v122 = v121 + v106 + 17;
    if ( v122 )
    {
      v123 = v183 - v121;
      v124 = 16;
      v125 = v122;
      goto LABEL_198;
    }
  }
  return *(double *)v75.m128i_i64;
}
