// win 1.2.1 | module src/core/relay/router_transition.rs | attributed via panic-Location xref (win-native)
__int128 *__fastcall sub_1406F2550(
        __int128 *a1,
        void *a2,
        __int64 a3,
        char a4,
        __int128 a5,
        __int64 *a6,
        __int64 a7,
        int a8,
        __int64 a9,
        unsigned __int8 *a10)
{
  __int8 v10; // bl
  __int128 *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  int v16; // edx
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rdx
  char v20; // al
  _QWORD *v21; // rsi
  char i; // di
  int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r9d
  int v28; // edx
  __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // r9d
  __int32 v34; // esi
  __int8 v35; // di
  unsigned __int64 v36; // rax
  unsigned int v37; // edx
  bool v38; // zf
  bool v39; // al
  __int64 v40; // rdi
  __int64 v41; // r12
  __int128 *v42; // rbx
  __int64 v43; // r13
  __int64 v44; // r15
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  _QWORD *v48; // rsi
  unsigned __int64 v49; // rax
  unsigned int v50; // edx
  _QWORD *v51; // rsi
  bool v52; // al
  char v53; // r15
  char v54; // al
  _QWORD *v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // r15
  __int64 v58; // rdi
  _QWORD *v59; // rsi
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm2
  __int128 v63; // xmm3
  _OWORD *v64; // rax
  __int64 v65; // rax
  unsigned int v66; // edx
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm2
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm2
  __int64 v74; // rdi
  __int64 v75; // rsi
  _QWORD *v76; // rbx
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // r9
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm2
  char v83; // r15
  bool v84; // r14
  __int64 v85; // rdi
  _QWORD *v86; // rbx
  __int64 v87; // rdx
  __int64 v88; // rsi
  __int64 v89; // rax
  __int64 v90; // rcx
  __int128 v91; // xmm0
  __int128 v92; // xmm1
  __int128 v93; // xmm2
  __int64 v94; // rsi
  _QWORD *v95; // rbx
  __int64 v96; // rdx
  __int128 v97; // xmm0
  __int128 v98; // xmm1
  __int128 v99; // xmm2
  __int64 v100; // rsi
  __int64 v101; // rax
  unsigned int v102; // edx
  __int128 v103; // xmm0
  __int128 v104; // xmm1
  __int128 v105; // xmm2
  __int128 v106; // xmm3
  __int128 v107; // xmm4
  __int64 v108; // rax
  unsigned int v109; // edx
  __int128 v110; // xmm0
  __int128 v111; // xmm1
  __int128 v112; // xmm2
  __int128 v113; // xmm3
  __int128 v114; // xmm4
  _QWORD *v115; // rsi
  __int64 v116; // rdx
  __int64 v117; // rax
  unsigned int v118; // edx
  __int128 v119; // xmm0
  __int128 v120; // xmm1
  __int128 v121; // xmm2
  __int64 v122; // [rsp+48h] [rbp-38h]
  __m512i v123; // [rsp+50h] [rbp-30h] BYREF
  __int128 v124; // [rsp+90h] [rbp+10h]
  __int128 v125; // [rsp+A0h] [rbp+20h]
  __int128 v126; // [rsp+B0h] [rbp+30h]
  __int128 v127; // [rsp+C0h] [rbp+40h]
  __int128 v128; // [rsp+D0h] [rbp+50h]
  __int64 v129; // [rsp+E0h] [rbp+60h]
  __m256i v130; // [rsp+E8h] [rbp+68h] BYREF
  __int128 v131; // [rsp+108h] [rbp+88h]
  __int128 v132; // [rsp+118h] [rbp+98h]
  __int128 v133; // [rsp+128h] [rbp+A8h]
  __int128 v134; // [rsp+138h] [rbp+B8h]
  __int64 v135; // [rsp+148h] [rbp+C8h] BYREF
  __int128 v136; // [rsp+150h] [rbp+D0h]
  __int64 v137; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v138; // [rsp+168h] [rbp+E8h]
  __int64 v139; // [rsp+178h] [rbp+F8h] BYREF
  __int128 v140; // [rsp+180h] [rbp+100h]
  __int64 v141; // [rsp+190h] [rbp+110h] BYREF
  int v142; // [rsp+198h] [rbp+118h]
  __int128 v143; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v144; // [rsp+1B0h] [rbp+130h]
  __int64 v145; // [rsp+1B8h] [rbp+138h]
  __int64 v146; // [rsp+1C0h] [rbp+140h]
  __int64 v147; // [rsp+1C8h] [rbp+148h]
  __int64 v148; // [rsp+1D0h] [rbp+150h] BYREF
  int v149; // [rsp+1D8h] [rbp+158h]
  _BYTE v150[96]; // [rsp+1E0h] [rbp+160h] BYREF
  __m512i *v151; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 (__fastcall *v152)(_QWORD, _QWORD); // [rsp+248h] [rbp+1C8h]
  __int64 v153; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v154; // [rsp+258h] [rbp+1D8h]
  __int64 v155; // [rsp+260h] [rbp+1E0h]
  unsigned __int64 v156; // [rsp+268h] [rbp+1E8h]
  __int64 v157; // [rsp+270h] [rbp+1F0h]
  __int128 v158; // [rsp+278h] [rbp+1F8h] BYREF
  __int64 v159; // [rsp+288h] [rbp+208h]
  __int128 v160; // [rsp+290h] [rbp+210h] BYREF
  __int128 v161; // [rsp+2A0h] [rbp+220h]
  __int128 v162; // [rsp+2B0h] [rbp+230h]
  __int128 v163; // [rsp+2C0h] [rbp+240h]
  __int128 v164; // [rsp+2D0h] [rbp+250h]
  __int128 v165; // [rsp+2E0h] [rbp+260h]
  __int128 v166; // [rsp+2F0h] [rbp+270h] BYREF
  __int64 v167; // [rsp+300h] [rbp+280h]
  __m512i v168; // [rsp+310h] [rbp+290h] BYREF
  __int128 v169; // [rsp+350h] [rbp+2D0h]
  __int128 v170; // [rsp+360h] [rbp+2E0h]
  unsigned __int128 v171; // [rsp+378h] [rbp+2F8h] BYREF
  __int64 v172; // [rsp+388h] [rbp+308h]
  unsigned int v173; // [rsp+394h] [rbp+314h]
  __int64 v174; // [rsp+398h] [rbp+318h]
  __m256i v175; // [rsp+3A0h] [rbp+320h] BYREF
  __int128 v176; // [rsp+3C0h] [rbp+340h]
  __int128 v177; // [rsp+3D0h] [rbp+350h]
  __int128 v178; // [rsp+3E0h] [rbp+360h]
  __int128 v179; // [rsp+3F0h] [rbp+370h]
  __int128 v180; // [rsp+400h] [rbp+380h] BYREF
  __int64 v181; // [rsp+410h] [rbp+390h]
  __int32 v182; // [rsp+418h] [rbp+398h] BYREF
  __int8 v183; // [rsp+41Ch] [rbp+39Ch] BYREF
  __m512i v184; // [rsp+420h] [rbp+3A0h] BYREF
  __int128 v185; // [rsp+460h] [rbp+3E0h]
  __int128 v186; // [rsp+470h] [rbp+3F0h]
  __m512i v187; // [rsp+480h] [rbp+400h] BYREF
  __int128 v188; // [rsp+4C0h] [rbp+440h]
  __int128 v189; // [rsp+4D0h] [rbp+450h]
  __m256i v190; // [rsp+4E0h] [rbp+460h]
  __int128 v191; // [rsp+500h] [rbp+480h]
  __int128 v192; // [rsp+510h] [rbp+490h]
  __int128 v193; // [rsp+520h] [rbp+4A0h]
  __int128 v194; // [rsp+530h] [rbp+4B0h]
  __m256i FileHandle; // [rsp+540h] [rbp+4C0h] BYREF
  __int128 v196; // [rsp+560h] [rbp+4E0h]
  __int128 v197; // [rsp+570h] [rbp+4F0h]
  __int128 v198; // [rsp+580h] [rbp+500h]
  __int128 v199; // [rsp+590h] [rbp+510h]
  unsigned __int8 v200; // [rsp+5AFh] [rbp+52Fh] BYREF
  __m512i v201; // [rsp+5B0h] [rbp+530h] BYREF
  __int128 v202; // [rsp+5F0h] [rbp+570h]
  __int128 v203; // [rsp+600h] [rbp+580h]
  char v204; // [rsp+61Eh] [rbp+59Eh]
  char v205; // [rsp+61Fh] [rbp+59Fh] BYREF
  __int64 v206; // [rsp+620h] [rbp+5A0h]
  char v207; // [rsp+62Fh] [rbp+5AFh] BYREF
  void *Buf; // [rsp+630h] [rbp+5B0h]
  char v209; // [rsp+63Fh] [rbp+5BFh]
  __int64 v210; // [rsp+640h] [rbp+5C0h]
  char v211; // [rsp+64Ah] [rbp+5CAh]
  char v212; // [rsp+64Bh] [rbp+5CBh]
  char v213; // [rsp+64Ch] [rbp+5CCh]
  char v214; // [rsp+64Dh] [rbp+5CDh] BYREF
  char v215; // [rsp+64Eh] [rbp+5CEh] BYREF
  unsigned __int8 v216; // [rsp+64Fh] [rbp+5CFh] BYREF
  __int64 v217; // [rsp+650h] [rbp+5D0h]

  v217 = -2;
  v10 = a3;
  Buf = a2;
  v11 = a1;
  v216 = a3;
  v207 = a4;
  v143 = a5;
  v148 = sub_141471910(a1, a2, a3);
  v149 = v12;
  v15 = sub_141471910(v13, v12, v14);
  v156 = sub_141491390(v15, v16, 12, 0, (__int64)&off_1417874D0);
  v173 = v17;
  v187.m512i_i64[0] = (__int64)&v207;
  v187.m512i_i64[1] = (__int64)sub_1407B87B0;
  v187.m512i_i64[2] = (__int64)&v143;
  v187.m512i_i64[3] = (__int64)sub_14041F680;
  sub_14149C0F0(&v139, &unk_1417874E8, &v187);
  v184.m512i_i8[0] = v10;
  v210 = v140;
  *(_OWORD *)FileHandle.m256i_i8 = v140;
  v187.m512i_i64[0] = (__int64)&v184;
  v187.m512i_i64[1] = (__int64)sub_1407B2DA0;
  v187.m512i_i64[2] = (__int64)&FileHandle;
  v187.m512i_i64[3] = (__int64)sub_14041F680;
  sub_14149C0F0(&v201, &unk_141787489, &v187);
  sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aStart_1, 5, (__int64)&v201);
  LODWORD(v19) = v139;
  if ( v139 )
    sub_140001660(v210, v139, 1);
  v144 = *a6;
  v145 = a6[1];
  v146 = a6[2];
  v147 = *(_QWORD *)(a7 + 24);
  v20 = 1;
  v21 = off_141EC8D80;
  for ( i = 0; ; i = v210 )
  {
    while ( 1 )
    {
      if ( (i & 1) != 0 || (unsigned __int8)v20 > 3u )
      {
        nullsub_1(v18);
        v64 = (_OWORD *)sub_140001650(109, 1);
        if ( !v64 )
          sub_1416C2D4B(1, 109);
        *(_OWORD *)((char *)v64 + 93) = *(__int128 *)((char *)&xmmword_141787551 + 13);
        v64[5] = xmmword_141787551;
        v64[4] = xmmword_141787541;
        v64[3] = xmmword_141787531;
        v64[2] = xmmword_141787521;
        qmemcpy(v64, "CODEX_TRANSITION_REENTRY_TIMEOUT", 32);
        v184.m512i_i64[1] = 109;
        v184.m512i_i64[2] = (__int64)v64;
        v184.m512i_i64[3] = 109;
        v184.m512i_i64[0] = 10;
        v201.m512i_i64[0] = 0;
        *(_OWORD *)&v201.m512i_u64[1] = 1u;
        v187.m512i_i64[2] = 1610612768;
        v187.m512i_i64[0] = (__int64)&v201;
        v187.m512i_i64[1] = (__int64)&off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v184, &v187) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v215,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v206 = v201.m512i_i64[1];
        v210 = v201.m512i_i64[0];
        write((int)&FileHandle, Buf, v216);
        if ( FileHandle.m256i_i32[0] != -1 )
        {
          v203 = v199;
          v202 = v198;
          *(_OWORD *)&v201.m512i_u64[6] = v197;
          *(_OWORD *)&v201.m512i_u64[4] = v196;
          *(__m256i *)v201.m512i_i8 = FileHandle;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            v175.m256i_i64[0] = (__int64)&v201;
            v175.m256i_i64[1] = (__int64)sub_140B036A0;
            v187.m512i_i64[0] = 0;
            v187.m512i_i64[1] = (__int64)aCodexmateLibCo_27;
            *(_OWORD *)&v187.m512i_u64[2] = 0x2Du;
            v187.m512i_i64[4] = (__int64)aSrcCoreRelayRo_1;
            v187.m512i_i64[5] = 35;
            v187.m512i_i64[6] = 2;
            v187.m512i_i64[7] = (__int64)aCodexmateLibCo_27;
            *(_QWORD *)&v188 = 45;
            *((_QWORD *)&v188 + 1) = 0x15F00000001LL;
            *(_QWORD *)&v189 = &unk_14178FCF6;
            *((_QWORD *)&v189 + 1) = &v175;
            sub_1412C36A0(&v215, &v187);
          }
          sub_1406CDA20(&v201);
        }
        if ( v210 )
          sub_140001660(v206, v210, 1);
        v201.m512i_i64[0] = 0;
        *(_OWORD *)&v201.m512i_u64[1] = 1u;
        v187.m512i_i64[2] = 1610612768;
        v187.m512i_i64[0] = (__int64)&v201;
        v187.m512i_i64[1] = (__int64)&off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v184, &v187) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v215,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        Buf = (void *)v201.m512i_i64[0];
        v175.m256i_i8[0] = v216;
        v210 = v201.m512i_i64[1];
        *(_OWORD *)FileHandle.m256i_i8 = *(_OWORD *)&v201.m512i_u64[1];
        v187.m512i_i64[0] = (__int64)&v175;
        v187.m512i_i64[1] = (__int64)sub_1407B2DA0;
        v187.m512i_i64[2] = (__int64)&FileHandle;
        v187.m512i_i64[3] = (__int64)sub_14041F680;
        sub_14149C0F0(&v201, &unk_141787489, &v187);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aRetryExhausted, 15, (__int64)&v201);
        if ( Buf )
          sub_140001660(v210, Buf, 1);
        goto LABEL_115;
      }
      LOBYTE(v19) = v20 == 3;
      LODWORD(v210) = v19;
      v23 = (unsigned __int8)(v20 + 1);
      if ( v20 == 3 )
        v23 = 3;
      LODWORD(v206) = v23;
      v214 = v20;
      write((int)&FileHandle, Buf, v216);
      if ( FileHandle.m256i_i32[0] != -1 )
      {
        v203 = v199;
        v202 = v198;
        *(_OWORD *)&v201.m512i_u64[6] = v197;
        *(_OWORD *)&v201.m512i_u64[4] = v196;
        *(__m256i *)v201.m512i_i8 = FileHandle;
        if ( *v21 >= 2u )
        {
          v184.m512i_i64[0] = (__int64)&v201;
          v184.m512i_i64[1] = (__int64)sub_140B036A0;
          v187.m512i_i64[0] = 0;
          v187.m512i_i64[1] = (__int64)aCodexmateLibCo_27;
          *(_OWORD *)&v187.m512i_u64[2] = 0x2Du;
          v187.m512i_i64[4] = (__int64)aSrcCoreRelayRo_1;
          v187.m512i_i64[5] = 35;
          v187.m512i_i64[6] = 2;
          v187.m512i_i64[7] = (__int64)aCodexmateLibCo_27;
          *(_QWORD *)&v188 = 45;
          *((_QWORD *)&v188 + 1) = 0x15F00000001LL;
          *(_QWORD *)&v189 = &unk_14178FCF6;
          *((_QWORD *)&v189 + 1) = &v184;
          sub_1412C36A0(&v215, &v187);
        }
        sub_1406CDA20(&v201);
      }
      v141 = sub_141471910(v25, v24, v26);
      v142 = v28;
      if ( !v207 )
      {
        acquire_with_policy((unsigned int)&v123, 5, 0, 0, 0);
        if ( v123.m512i_i32[0] == -1 )
          goto LABEL_16;
LABEL_106:
        v186 = v125;
        v185 = v124;
        v184 = v123;
        v201.m512i_i64[0] = 0;
        *(_OWORD *)&v201.m512i_u64[1] = 1u;
        v187.m512i_i64[2] = 1610612768;
        v187.m512i_i64[0] = (__int64)&v201;
        v187.m512i_i64[1] = (__int64)&off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v184, &v187) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v215,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v206 = v201.m512i_i64[1];
        v210 = v201.m512i_i64[0];
        write((int)&FileHandle, Buf, v216);
        if ( FileHandle.m256i_i32[0] != -1 )
        {
          v203 = v199;
          v202 = v198;
          *(_OWORD *)&v201.m512i_u64[6] = v197;
          *(_OWORD *)&v201.m512i_u64[4] = v196;
          *(__m256i *)v201.m512i_i8 = FileHandle;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            v175.m256i_i64[0] = (__int64)&v201;
            v175.m256i_i64[1] = (__int64)sub_140B036A0;
            v187.m512i_i64[0] = 0;
            v187.m512i_i64[1] = (__int64)aCodexmateLibCo_27;
            *(_OWORD *)&v187.m512i_u64[2] = 0x2Du;
            v187.m512i_i64[4] = (__int64)aSrcCoreRelayRo_1;
            v187.m512i_i64[5] = 35;
            v187.m512i_i64[6] = 2;
            v187.m512i_i64[7] = (__int64)aCodexmateLibCo_27;
            *(_QWORD *)&v188 = 45;
            *((_QWORD *)&v188 + 1) = 0x15F00000001LL;
            *(_QWORD *)&v189 = &unk_14178FCF6;
            *((_QWORD *)&v189 + 1) = &v175;
            sub_1412C36A0(&v215, &v187);
          }
          sub_1406CDA20(&v201);
        }
        if ( v210 )
          sub_140001660(v206, v210, 1);
        v65 = sub_141471AC0(&v141);
        *(_OWORD *)v201.m512i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v65 + v66 / 0xF4240uLL;
        v187.m512i_i64[0] = (__int64)&v214;
        v187.m512i_i64[1] = (__int64)sub_1414A9660;
        v187.m512i_i64[2] = (__int64)&v201;
        v187.m512i_i64[3] = (__int64)sub_1414A9600;
        v187.m512i_i64[4] = (__int64)&v184;
        v187.m512i_i64[5] = (__int64)sub_140B036A0;
        sub_14149C0F0(&FileHandle, &unk_1417878F4, &v187);
        v168.m512i_i8[0] = v216;
        Buf = (void *)FileHandle.m256i_i64[1];
        *(_OWORD *)v175.m256i_i8 = *(_OWORD *)&FileHandle.m256i_u64[1];
        v187.m512i_i64[0] = (__int64)&v168;
        v187.m512i_i64[1] = (__int64)sub_1407B2DA0;
        v187.m512i_i64[2] = (__int64)&v175;
        v187.m512i_i64[3] = (__int64)sub_14041F680;
        sub_14149C0F0(&v201, &unk_141787489, &v187);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aStopFailed, 11, (__int64)&v201);
        if ( FileHandle.m256i_i64[0] )
          sub_140001660(Buf, FileHandle.m256i_i64[0], 1);
LABEL_115:
        v11[5] = v186;
        v11[4] = v185;
        v60 = *(_OWORD *)v184.m512i_i8;
        v61 = *(_OWORD *)&v184.m512i_u64[2];
        v62 = *(_OWORD *)&v184.m512i_u64[4];
        v63 = *(_OWORD *)&v184.m512i_u64[6];
LABEL_116:
        v11[3] = v63;
        v11[2] = v62;
        v11[1] = v61;
        *v11 = v60;
        return v11;
      }
      LOBYTE(v27) = 1;
      acquire_with_policy((unsigned int)&v123, 3, 0, v27, 0);
      if ( v123.m512i_i32[0] != -1 )
        goto LABEL_106;
LABEL_16:
      v129 = v123.m512i_i64[7];
      v128 = *(_OWORD *)&v123.m512i_u64[5];
      v127 = *(_OWORD *)&v123.m512i_u64[3];
      v126 = *(_OWORD *)&v123.m512i_u64[1];
      v205 = v123.m512i_i8[56];
      v212 = 1;
      v29 = sub_141471AC0(&v141);
      *(_OWORD *)v201.m512i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v29 + v30 / 0xF4240uLL;
      v187.m512i_i64[0] = (__int64)&v214;
      v187.m512i_i64[1] = (__int64)sub_1414A9660;
      v187.m512i_i64[2] = (__int64)&v201;
      v187.m512i_i64[3] = (__int64)sub_1414A9600;
      v187.m512i_i64[4] = (__int64)&v205;
      v187.m512i_i64[5] = (__int64)sub_1414AC660;
      v212 = 1;
      sub_14149C0F0(&v137, &unk_141787591, &v187);
      v184.m512i_i8[0] = v216;
      v174 = v138;
      *(_OWORD *)FileHandle.m256i_i8 = v138;
      v187.m512i_i64[0] = (__int64)&v184;
      v187.m512i_i64[1] = (__int64)sub_1407B2DA0;
      v187.m512i_i64[2] = (__int64)&FileHandle;
      v187.m512i_i64[3] = (__int64)sub_14041F680;
      sub_14149C0F0(&v201, &unk_141787489, &v187);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aStopComplete, 13, (__int64)&v201);
      if ( v137 )
        sub_140001660(v174, v137, 1);
      v212 = 1;
      write((int)&FileHandle, Buf, v216);
      if ( FileHandle.m256i_i32[0] != -1 )
      {
        v203 = v199;
        v202 = v198;
        *(_OWORD *)&v201.m512i_u64[6] = v197;
        *(_OWORD *)&v201.m512i_u64[4] = v196;
        *(__m256i *)v201.m512i_i8 = FileHandle;
        if ( *v21 >= 2u )
        {
          v184.m512i_i64[0] = (__int64)&v201;
          v184.m512i_i64[1] = (__int64)sub_140B036A0;
          v187.m512i_i64[0] = 0;
          v187.m512i_i64[1] = (__int64)aCodexmateLibCo_27;
          *(_OWORD *)&v187.m512i_u64[2] = 0x2Du;
          v187.m512i_i64[4] = (__int64)aSrcCoreRelayRo_1;
          v187.m512i_i64[5] = 35;
          v187.m512i_i64[6] = 2;
          v187.m512i_i64[7] = (__int64)aCodexmateLibCo_27;
          *(_QWORD *)&v188 = 45;
          *((_QWORD *)&v188 + 1) = 0x15F00000001LL;
          *(_QWORD *)&v189 = &unk_14178FCF6;
          *((_QWORD *)&v189 + 1) = &v184;
          sub_1412C36A0(&v215, &v187);
        }
        v212 = 1;
        sub_1406CDA20(&v201);
      }
      v212 = 1;
      sub_140850400(
        (unsigned int)&v187,
        v144,
        v145,
        v146,
        (__int64)"RouterOn rollbackauth-mode toggle",
        17,
        1,
        v205,
        0,
        v122);
      if ( v187.m512i_i32[0] == -1 )
      {
        *(_QWORD *)&v150[88] = v189;
        *(_OWORD *)&v150[72] = v188;
        *(_QWORD *)&v150[64] = v187.m512i_i64[7];
        *(_OWORD *)&v150[48] = *(_OWORD *)&v187.m512i_u64[5];
        *(_OWORD *)&v150[32] = *(_OWORD *)&v187.m512i_u64[3];
        *(_OWORD *)&v150[16] = *(_OWORD *)&v187.m512i_u64[1];
        *(_QWORD *)&v150[8] = 1;
        *(_QWORD *)v150 = -1;
      }
      else
      {
        *(_OWORD *)&v150[80] = v189;
        *(_OWORD *)&v150[64] = v188;
        *(__m512i *)v150 = v187;
      }
      v187.m512i_i64[6] = v129;
      *(_OWORD *)&v187.m512i_u64[4] = v128;
      *(_OWORD *)&v187.m512i_u64[2] = v127;
      *(_OWORD *)v187.m512i_i8 = v126;
      v209 = 1;
      sub_140387CC0(&v130, &v187);
      v189 = *(_OWORD *)&v150[80];
      v188 = *(_OWORD *)&v150[64];
      v187 = *(__m512i *)v150;
      v194 = v134;
      v193 = v133;
      v192 = v132;
      v191 = v131;
      v190 = v130;
      if ( *(_QWORD *)v150 == -1 )
        break;
      v157 = *(_QWORD *)v150;
      if ( v130.m256i_i64[0] != -1 )
      {
        v165 = *(_OWORD *)&v150[80];
        v164 = *(_OWORD *)&v150[64];
        v163 = *(_OWORD *)&v150[48];
        v162 = *(_OWORD *)&v150[32];
        v161 = *(_OWORD *)&v150[16];
        v160 = *(_OWORD *)v150;
        v170 = v134;
        v169 = v133;
        *(_OWORD *)&v168.m512i_u64[6] = v132;
        *(_OWORD *)&v168.m512i_u64[4] = v131;
        *(__m256i *)v168.m512i_i8 = v130;
        v201.m512i_i64[0] = (__int64)&v160;
        v201.m512i_i64[1] = (__int64)sub_140B036A0;
        v201.m512i_i64[2] = (__int64)&v168;
        v201.m512i_i64[3] = (__int64)sub_140B036A0;
        sub_14149C0F0(&v158, &unk_1417878C9, &v201);
        *(_OWORD *)&v175.m256i_u64[1] = v158;
        v175.m256i_i64[3] = v159;
        v175.m256i_i64[0] = 10;
        FileHandle.m256i_i64[0] = 0;
        *(_OWORD *)&FileHandle.m256i_u64[1] = 1u;
        v201.m512i_i64[2] = 1610612768;
        v201.m512i_i64[0] = (__int64)&FileHandle;
        v201.m512i_i64[1] = (__int64)&off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v175, &v201) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v215,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v206 = FileHandle.m256i_i64[1];
        v210 = FileHandle.m256i_i64[0];
        write((int)&v184, Buf, v216);
        if ( v184.m512i_i32[0] != -1 )
        {
          v199 = v186;
          v198 = v185;
          v197 = *(_OWORD *)&v184.m512i_u64[6];
          v196 = *(_OWORD *)&v184.m512i_u64[4];
          FileHandle = *(__m256i *)v184.m512i_i8;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            *(_QWORD *)&v171 = &FileHandle;
            *((_QWORD *)&v171 + 1) = sub_140B036A0;
            v201.m512i_i64[0] = 0;
            v201.m512i_i64[1] = (__int64)aCodexmateLibCo_27;
            *(_OWORD *)&v201.m512i_u64[2] = 0x2Du;
            v201.m512i_i64[4] = (__int64)aSrcCoreRelayRo_1;
            v201.m512i_i64[5] = 35;
            v201.m512i_i64[6] = 2;
            v201.m512i_i64[7] = (__int64)aCodexmateLibCo_27;
            *(_QWORD *)&v202 = 45;
            *((_QWORD *)&v202 + 1) = 0x15F00000001LL;
            *(_QWORD *)&v203 = &unk_14178FCF6;
            *((_QWORD *)&v203 + 1) = &v171;
            sub_1412C36A0(&v215, &v201);
          }
          sub_1406CDA20(&FileHandle);
        }
        if ( v210 )
          sub_140001660(v206, v210, 1);
        v201.m512i_i64[0] = (__int64)&v214;
        v201.m512i_i64[1] = (__int64)sub_1414A9660;
        v201.m512i_i64[2] = (__int64)&v175;
        v201.m512i_i64[3] = (__int64)sub_140B036A0;
        sub_14149C0F0(&v184, &unk_1417876C6, &v201);
        LOBYTE(v180) = v216;
        Buf = (void *)v184.m512i_i64[1];
        v171 = *(_OWORD *)&v184.m512i_u64[1];
        v201.m512i_i64[0] = (__int64)&v180;
        v201.m512i_i64[1] = (__int64)sub_1407B2DA0;
        v201.m512i_i64[2] = (__int64)&v171;
        v201.m512i_i64[3] = (__int64)sub_14041F680;
        sub_14149C0F0(&FileHandle, &unk_141787489, &v201);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aReconcileFaile, 16, (__int64)&FileHandle);
        if ( v184.m512i_i64[0] )
          sub_140001660(Buf, v184.m512i_i64[0], 1);
        v11[5] = v179;
        v11[4] = v178;
        v68 = *(_OWORD *)v175.m256i_i8;
        v69 = *(_OWORD *)&v175.m256i_u64[2];
        v70 = v176;
        v11[3] = v177;
        v11[2] = v70;
        v11[1] = v69;
        *v11 = v68;
        sub_1406CDA20(&v168);
        sub_1406CDA20(&v160);
        return v11;
      }
      v179 = *(_OWORD *)&v150[80];
      v178 = *(_OWORD *)&v150[64];
      v177 = *(_OWORD *)&v150[48];
      v176 = *(_OWORD *)&v150[32];
      v175 = *(__m256i *)v150;
      v34 = v190.m256i_i32[2];
      v35 = v190.m256i_i8[12];
      v36 = sub_141471910(*(_QWORD *)v150, v31, v32);
      v38 = v36 == v156;
      v39 = v36 < v156;
      if ( v38 )
        v39 = v37 < v173;
      if ( v207 )
      {
LABEL_84:
        FileHandle.m256i_i64[0] = 0;
        *(_OWORD *)&FileHandle.m256i_u64[1] = 1u;
        v201.m512i_i64[2] = 1610612768;
        v201.m512i_i64[0] = (__int64)&FileHandle;
        v201.m512i_i64[1] = (__int64)&off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v175, &v201) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v215,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v206 = FileHandle.m256i_i64[1];
        v210 = FileHandle.m256i_i64[0];
        write((int)&v184, Buf, v216);
        if ( v184.m512i_i32[0] != -1 )
        {
          v199 = v186;
          v198 = v185;
          v197 = *(_OWORD *)&v184.m512i_u64[6];
          v196 = *(_OWORD *)&v184.m512i_u64[4];
          FileHandle = *(__m256i *)v184.m512i_i8;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            v168.m512i_i64[0] = (__int64)&FileHandle;
            v168.m512i_i64[1] = (__int64)sub_140B036A0;
            v201.m512i_i64[0] = 0;
            v201.m512i_i64[1] = (__int64)aCodexmateLibCo_27;
            *(_OWORD *)&v201.m512i_u64[2] = 0x2Du;
            v201.m512i_i64[4] = (__int64)aSrcCoreRelayRo_1;
            v201.m512i_i64[5] = 35;
            v201.m512i_i64[6] = 2;
            v201.m512i_i64[7] = (__int64)aCodexmateLibCo_27;
            *(_QWORD *)&v202 = 45;
            *((_QWORD *)&v202 + 1) = 0x15F00000001LL;
            *(_QWORD *)&v203 = &unk_14178FCF6;
            *((_QWORD *)&v203 + 1) = &v168;
            sub_1412C36A0(&v215, &v201);
          }
          sub_1406CDA20(&FileHandle);
        }
        if ( v210 )
          sub_140001660(v206, v210, 1);
        v201.m512i_i64[0] = (__int64)&v214;
        v201.m512i_i64[1] = (__int64)sub_1414A9660;
        v201.m512i_i64[2] = (__int64)&v175;
        v201.m512i_i64[3] = (__int64)sub_140B036A0;
        sub_14149C0F0(&v184, &unk_1417876C6, &v201);
        LOBYTE(v160) = v216;
        Buf = (void *)v184.m512i_i64[1];
        *(_OWORD *)v168.m512i_i8 = *(_OWORD *)&v184.m512i_u64[1];
        v201.m512i_i64[0] = (__int64)&v160;
        v201.m512i_i64[1] = (__int64)sub_1407B2DA0;
        v201.m512i_i64[2] = (__int64)&v168;
        v201.m512i_i64[3] = (__int64)sub_14041F680;
        sub_14149C0F0(&FileHandle, &unk_141787489, &v201);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aReconcileFaile, 16, (__int64)&FileHandle);
        if ( v184.m512i_i64[0] )
          sub_140001660(Buf, v184.m512i_i64[0], 1);
        v11[5] = v179;
        v11[4] = v178;
        v60 = *(_OWORD *)v175.m256i_i8;
        v61 = *(_OWORD *)&v175.m256i_u64[2];
        v62 = v176;
        v63 = v177;
        goto LABEL_116;
      }
      if ( v34 )
      {
        if ( !v39 || (unsigned __int8)v214 >= 3u )
          goto LABEL_84;
      }
      else if ( (v39 & (unsigned __int8)v35 & ((unsigned __int8)v214 < 3u)) == 0 )
      {
        goto LABEL_84;
      }
      FileHandle.m256i_i64[0] = 0;
      *(_OWORD *)&FileHandle.m256i_u64[1] = 1u;
      v201.m512i_i64[2] = 1610612768;
      v201.m512i_i64[0] = (__int64)&FileHandle;
      v201.m512i_i64[1] = (__int64)&off_141790AA0;
      v54 = sub_140B036A0(&v175, &v201);
      v21 = off_141EC8D80;
      if ( v54 )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v215,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      v168.m512i_i64[2] = FileHandle.m256i_i64[2];
      *(_OWORD *)v168.m512i_i8 = *(_OWORD *)FileHandle.m256i_i8;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        FileHandle.m256i_i64[0] = (__int64)&v216;
        FileHandle.m256i_i64[1] = (__int64)sub_1407B2DA0;
        FileHandle.m256i_i64[2] = (__int64)&v214;
        FileHandle.m256i_i64[3] = (__int64)sub_1414A9660;
        *(_QWORD *)&v196 = &v168;
        *((_QWORD *)&v196 + 1) = sub_1400015F0;
        v201.m512i_i64[0] = 0;
        v201.m512i_i64[1] = (__int64)aCodexmateLibCo_27;
        *(_OWORD *)&v201.m512i_u64[2] = 0x2Du;
        v201.m512i_i64[4] = (__int64)aSrcCoreRelayRo_1;
        v201.m512i_i64[5] = 35;
        v201.m512i_i64[6] = 2;
        v201.m512i_i64[7] = (__int64)aCodexmateLibCo_27;
        *(_QWORD *)&v202 = 45;
        *((_QWORD *)&v202 + 1) = 0xA800000001LL;
        *(_QWORD *)&v203 = &unk_14178785E;
        *((_QWORD *)&v203 + 1) = &FileHandle;
        sub_1412C36A0(&v215, &v201);
      }
      write((int)&v184, Buf, v216);
      if ( v184.m512i_i32[0] != -1 )
      {
        v199 = v186;
        v198 = v185;
        v197 = *(_OWORD *)&v184.m512i_u64[6];
        v196 = *(_OWORD *)&v184.m512i_u64[4];
        FileHandle = *(__m256i *)v184.m512i_i8;
        if ( *v21 >= 2u )
        {
          *(_QWORD *)&v160 = &FileHandle;
          *((_QWORD *)&v160 + 1) = sub_140B036A0;
          v201.m512i_i64[0] = 0;
          v201.m512i_i64[1] = (__int64)aCodexmateLibCo_27;
          *(_OWORD *)&v201.m512i_u64[2] = 0x2Du;
          v201.m512i_i64[4] = (__int64)aSrcCoreRelayRo_1;
          v201.m512i_i64[5] = 35;
          v201.m512i_i64[6] = 2;
          v201.m512i_i64[7] = (__int64)aCodexmateLibCo_27;
          *(_QWORD *)&v202 = 45;
          *((_QWORD *)&v202 + 1) = 0x15F00000001LL;
          *(_QWORD *)&v203 = &unk_14178FCF6;
          *((_QWORD *)&v203 + 1) = &v160;
          sub_1412C36A0(&v215, &v201);
        }
        sub_1406CDA20(&FileHandle);
      }
      v201.m512i_i64[0] = (__int64)&v214;
      v201.m512i_i64[1] = (__int64)sub_1414A9660;
      v201.m512i_i64[2] = (__int64)&v168;
      v201.m512i_i64[3] = (__int64)sub_1400015F0;
      sub_14149C0F0(&v135, &unk_1417876C6, &v201);
      LOBYTE(v160) = v216;
      v174 = v136;
      *(_OWORD *)v184.m512i_i8 = v136;
      v201.m512i_i64[0] = (__int64)&v160;
      v201.m512i_i64[1] = (__int64)sub_1407B2DA0;
      v201.m512i_i64[2] = (__int64)&v184;
      v201.m512i_i64[3] = (__int64)sub_14041F680;
      sub_14149C0F0(&FileHandle, &unk_141787489, &v201);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aReconcileRetry, 15, (__int64)&FileHandle);
      i = v210;
      if ( v135 )
        sub_140001660(v174, v135, 1);
      if ( v168.m512i_i64[0] )
        sub_140001660(v168.m512i_i64[1], v168.m512i_i64[0], 1);
      sub_1406CDA20(&v175);
      v20 = v206;
    }
    if ( v130.m256i_i64[0] != -1 )
    {
      v157 = *(_QWORD *)v150;
      v179 = v134;
      v178 = v133;
      v177 = v132;
      v176 = v131;
      v175 = v130;
      FileHandle.m256i_i64[0] = 0;
      *(_OWORD *)&FileHandle.m256i_u64[1] = 1u;
      v201.m512i_i64[2] = 1610612768;
      v201.m512i_i64[0] = (__int64)&FileHandle;
      v201.m512i_i64[1] = (__int64)&off_141790AA0;
      if ( (unsigned __int8)sub_140B036A0(&v175, &v201) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v215,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      v206 = FileHandle.m256i_i64[1];
      v210 = FileHandle.m256i_i64[0];
      write((int)&v184, Buf, v216);
      if ( v184.m512i_i32[0] != -1 )
      {
        v199 = v186;
        v198 = v185;
        v197 = *(_OWORD *)&v184.m512i_u64[6];
        v196 = *(_OWORD *)&v184.m512i_u64[4];
        FileHandle = *(__m256i *)v184.m512i_i8;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v168.m512i_i64[0] = (__int64)&FileHandle;
          v168.m512i_i64[1] = (__int64)sub_140B036A0;
          v201.m512i_i64[0] = 0;
          v201.m512i_i64[1] = (__int64)aCodexmateLibCo_27;
          *(_OWORD *)&v201.m512i_u64[2] = 0x2Du;
          v201.m512i_i64[4] = (__int64)aSrcCoreRelayRo_1;
          v201.m512i_i64[5] = 35;
          v201.m512i_i64[6] = 2;
          v201.m512i_i64[7] = (__int64)aCodexmateLibCo_27;
          *(_QWORD *)&v202 = 45;
          *((_QWORD *)&v202 + 1) = 0x15F00000001LL;
          *(_QWORD *)&v203 = &unk_14178FCF6;
          *((_QWORD *)&v203 + 1) = &v168;
          sub_1412C36A0(&v215, &v201);
        }
        sub_1406CDA20(&FileHandle);
      }
      if ( v210 )
        sub_140001660(v206, v210, 1);
      v201.m512i_i64[0] = (__int64)&v214;
      v201.m512i_i64[1] = (__int64)sub_1414A9660;
      v201.m512i_i64[2] = (__int64)&v175;
      v201.m512i_i64[3] = (__int64)sub_140B036A0;
      sub_14149C0F0(&v184, &unk_1417876C6, &v201);
      LOBYTE(v160) = v216;
      Buf = (void *)v184.m512i_i64[1];
      *(_OWORD *)v168.m512i_i8 = *(_OWORD *)&v184.m512i_u64[1];
      v201.m512i_i64[0] = (__int64)&v160;
      v201.m512i_i64[1] = (__int64)sub_1407B2DA0;
      v201.m512i_i64[2] = (__int64)&v168;
      v201.m512i_i64[3] = (__int64)sub_14041F680;
      sub_14149C0F0(&FileHandle, &unk_141787489, &v201);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aSettleFailed, 13, (__int64)&FileHandle);
      if ( v184.m512i_i64[0] )
        sub_140001660(Buf, v184.m512i_i64[0], 1);
      v11[5] = v179;
      v11[4] = v178;
      v71 = *(_OWORD *)v175.m256i_i8;
      v72 = *(_OWORD *)&v175.m256i_u64[2];
      v73 = v176;
      v11[3] = v177;
      v11[2] = v73;
      v11[1] = v72;
      *v11 = v71;
      sub_1406CE2E0(&v187.m512i_u64[1]);
      v74 = *((_QWORD *)&v189 + 1);
      v75 = v189;
      if ( *((_QWORD *)&v189 + 1) )
      {
        v76 = (_QWORD *)(v189 + 8);
        do
        {
          v77 = *(v76 - 1);
          if ( v77 )
            sub_140001660(*v76, v77, 1);
          v76 += 3;
          --v74;
        }
        while ( v74 );
      }
      v78 = *((_QWORD *)&v188 + 1);
      if ( !*((_QWORD *)&v188 + 1) )
        return v11;
      goto LABEL_170;
    }
    *(_QWORD *)&v170 = *(_QWORD *)&v150[88];
    v169 = *(_OWORD *)&v150[72];
    v168 = *(__m512i *)&v150[8];
    v182 = v190.m256i_i32[2];
    v183 = v190.m256i_i8[12];
    v204 = 1;
    LOBYTE(v33) = 1;
    sub_140852800((unsigned int)&v153, v147, a8, v33, (v190.m256i_i32[2] == 0) & (v190.m256i_i8[12] ^ 1));
    v40 = v155;
    if ( !v155 )
    {
      if ( (v182 || (v183 & 1) != 0) && *v21 >= 2u )
      {
        v187.m512i_i64[0] = (__int64)&v216;
        v187.m512i_i64[1] = (__int64)sub_1407B2DA0;
        v187.m512i_i64[2] = (__int64)&v214;
        v187.m512i_i64[3] = (__int64)sub_1414A9660;
        v187.m512i_i64[4] = (__int64)&v182;
        v187.m512i_i64[5] = (__int64)sub_1414AB780;
        v187.m512i_i64[6] = (__int64)&v183;
        v187.m512i_i64[7] = (__int64)sub_1414AC660;
        v201.m512i_i64[0] = (__int64)aCodexmateLibCo_27;
        v201.m512i_i64[1] = 45;
        v201.m512i_i64[2] = (__int64)aCodexmateLibCo_27;
        v201.m512i_i64[3] = 45;
        v201.m512i_i64[4] = (__int64)&off_141787640;
        v213 = 1;
        sub_140985BA0(&unk_1417875CB, &v187, 2, &v201);
      }
      v79 = *a10;
      v213 = 1;
      sub_14084BFF0(&v175, a9, &v168, v79);
      if ( v175.m256i_i32[0] != -1 )
      {
        v186 = v179;
        v185 = v178;
        *(_OWORD *)&v184.m512i_u64[6] = v177;
        *(_OWORD *)&v184.m512i_u64[4] = v176;
        *(__m256i *)v184.m512i_i8 = v175;
        v187.m512i_i64[0] = (__int64)&v216;
        v187.m512i_i64[1] = (__int64)sub_1407B2DA0;
        v187.m512i_i64[2] = (__int64)&v184;
        v187.m512i_i64[3] = (__int64)sub_140B036A0;
        sub_14149C0F0(&v158, &unk_141787685, &v187);
        *(_OWORD *)&FileHandle.m256i_u64[1] = v158;
        FileHandle.m256i_i64[3] = v159;
        FileHandle.m256i_i64[0] = 10;
        v201.m512i_i64[0] = 0;
        *(_OWORD *)&v201.m512i_u64[1] = 1u;
        v187.m512i_i64[2] = 1610612768;
        v187.m512i_i64[0] = (__int64)&v201;
        v187.m512i_i64[1] = (__int64)&off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&FileHandle, &v187) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v215,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v206 = v201.m512i_i64[1];
        v210 = v201.m512i_i64[0];
        write((int)&v201, Buf, v216);
        if ( v201.m512i_i32[0] != -1 )
        {
          v189 = v203;
          v188 = v202;
          v187 = v201;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            *(_QWORD *)&v171 = &v187;
            *((_QWORD *)&v171 + 1) = sub_140B036A0;
            *(_QWORD *)&v160 = aCodexmateLibCo_27;
            *((_QWORD *)&v160 + 1) = 45;
            *(_QWORD *)&v161 = aCodexmateLibCo_27;
            *((_QWORD *)&v161 + 1) = 45;
            *(_QWORD *)&v162 = &off_14178FD30;
            sub_140985BA0(&unk_14178FCF6, &v171, 2, &v160);
          }
          sub_1406CDA20(&v187);
        }
        if ( v210 )
          sub_140001660(v206, v210, 1);
        v187.m512i_i64[0] = (__int64)&v214;
        v187.m512i_i64[1] = (__int64)sub_1414A9660;
        v187.m512i_i64[2] = (__int64)&FileHandle;
        v187.m512i_i64[3] = (__int64)sub_140B036A0;
        sub_14149C0F0(&v160, &unk_1417876C6, &v187);
        LOBYTE(v180) = v216;
        Buf = *((void **)&v160 + 1);
        v171 = __PAIR128__(v161, *((unsigned __int64 *)&v160 + 1));
        v187.m512i_i64[0] = (__int64)&v180;
        v187.m512i_i64[1] = (__int64)sub_1407B2DA0;
        v187.m512i_i64[2] = (__int64)&v171;
        v187.m512i_i64[3] = (__int64)sub_14041F680;
        sub_14149C0F0(&v201, &unk_141787489, &v187);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aCommitFailed, 13, (__int64)&v201);
        if ( (_QWORD)v160 )
          sub_140001660(Buf, v160, 1);
        v11[5] = v199;
        v11[4] = v198;
        v80 = *(_OWORD *)FileHandle.m256i_i8;
        v81 = *(_OWORD *)&FileHandle.m256i_u64[2];
        v82 = v196;
        v11[3] = v197;
        v11[2] = v82;
        v11[1] = v81;
        *v11 = v80;
        v213 = 1;
        sub_1406CDA20(&v184);
        v83 = 1;
        v41 = v154;
        v84 = 1;
        goto LABEL_159;
      }
      v100 = v170;
      if ( (_QWORD)v170 )
      {
        v213 = 1;
        sub_140440300((unsigned int)&v187, DWORD2(v169), v170, (unsigned int)&unk_1417876F9, 3);
        v206 = v187.m512i_i64[1];
        v210 = v187.m512i_i64[0];
        sub_1407A0A20(Buf, v216, *(__int128 *)&v187.m512i_u64[1]);
        if ( v210 )
          sub_140001660(v206, v210, 1);
        v213 = 1;
        v101 = sub_141471AC0(&v148);
        *(_OWORD *)FileHandle.m256i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v101 + v102 / 0xF4240uLL;
        v184.m512i_i64[0] = v100;
        v187.m512i_i64[0] = (__int64)&v214;
        v187.m512i_i64[1] = (__int64)sub_1414A9660;
        v187.m512i_i64[2] = (__int64)&FileHandle;
        v187.m512i_i64[3] = (__int64)sub_1414A9600;
        v187.m512i_i64[4] = (__int64)&v184;
        v187.m512i_i64[5] = (__int64)sub_1414AC520;
        v213 = 1;
        sub_14149C0F0(&v201, &unk_141787704, &v187);
        v213 = 1;
        sub_1406DB090(v216, aDegraded, 8, &v201);
        v103 = *(_OWORD *)v168.m512i_i8;
        v104 = *(_OWORD *)&v168.m512i_u64[2];
        v105 = *(_OWORD *)&v168.m512i_u64[4];
        v106 = *(_OWORD *)&v168.m512i_u64[6];
        v187 = v168;
        v107 = v169;
        v188 = v169;
        *(_QWORD *)&v189 = v170;
        *((_QWORD *)v11 + 11) = v170;
        *(__int128 *)((char *)v11 + 72) = v107;
        *(__int128 *)((char *)v11 + 56) = v106;
        *(__int128 *)((char *)v11 + 40) = v105;
        *(__int128 *)((char *)v11 + 24) = v104;
        *(__int128 *)((char *)v11 + 8) = v103;
      }
      else
      {
        v213 = 1;
        sub_140ADF0F0(Buf);
        v213 = 1;
        v117 = sub_141471AC0(&v148);
        *(_OWORD *)FileHandle.m256i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v117 + v118 / 0xF4240uLL;
        v187.m512i_i64[0] = (__int64)&v214;
        v187.m512i_i64[1] = (__int64)sub_1414A9660;
        v187.m512i_i64[2] = (__int64)&FileHandle;
        v187.m512i_i64[3] = (__int64)sub_1414A9600;
        v213 = 1;
        sub_14149C0F0(&v201, &unk_1417876DA, &v187);
        v213 = 1;
        sub_1406DB090(v216, aStable, 6, &v201);
        v119 = *(_OWORD *)v168.m512i_i8;
        v120 = *(_OWORD *)&v168.m512i_u64[2];
        v121 = *(_OWORD *)&v168.m512i_u64[4];
        v11[4] = *(_OWORD *)&v168.m512i_u64[6];
        v11[3] = v121;
        v11[2] = v120;
        v11[1] = v119;
        *((_QWORD *)v11 + 1) = 2;
      }
      *(_QWORD *)v11 = -1;
      if ( v153 )
        sub_140001660(v154, 32 * v153, 8);
      if ( v100 )
        return v11;
LABEL_164:
      v75 = *((_QWORD *)&v169 + 1);
      v85 = v170;
      if ( (_QWORD)v170 )
      {
        v86 = (_QWORD *)(*((_QWORD *)&v169 + 1) + 8LL);
        do
        {
          v87 = *(v86 - 1);
          if ( v87 )
            sub_140001660(*v86, v87, 1);
          v86 += 3;
          --v85;
        }
        while ( v85 );
      }
      v78 = v169;
      if ( !(_QWORD)v169 )
        return v11;
LABEL_170:
      sub_140001660(v75, 24 * v78, 8);
      return v11;
    }
    v213 = 1;
    v41 = v154;
    sub_140328B20(&v201, v154, v154 + 32 * v155);
    v42 = v11;
    v44 = v201.m512i_i64[2];
    v43 = v201.m512i_i64[1];
    sub_140440300((unsigned int)&v187, v201.m512i_i32[2], v201.m512i_i32[4], (unsigned int)&unk_1417876F9, 3);
    v167 = v187.m512i_i64[2];
    v166 = *(_OWORD *)v187.m512i_i8;
    if ( v44 )
    {
      v48 = (_QWORD *)(v43 + 8);
      do
      {
        v45 = *(v48 - 1);
        if ( v45 )
          sub_140001660(*v48, v45, 1);
        v48 += 3;
        --v44;
      }
      while ( v44 );
    }
    if ( v201.m512i_i64[0] )
      sub_140001660(v43, 24 * v201.m512i_i64[0], 8);
    v211 = 1;
    v49 = sub_141471910(v46, v45, v47);
    v11 = v42;
    v51 = off_141EC8D80;
    v38 = v49 == v156;
    v52 = v49 < v156;
    if ( v38 )
      v52 = v50 < v173;
    v53 = v207;
    if ( v207 )
      break;
    if ( v182 )
    {
      if ( !v52 || (unsigned __int8)v214 >= 3u )
        goto LABEL_188;
    }
    else if ( (v52 & (unsigned __int8)v183 & ((unsigned __int8)v214 < 3u)) == 0 )
    {
LABEL_188:
      v187.m512i_i64[0] = (__int64)&v216;
      v187.m512i_i64[1] = (__int64)sub_1407B2DA0;
      v187.m512i_i64[2] = (__int64)&v166;
      v187.m512i_i64[3] = (__int64)sub_1400015F0;
      v211 = 1;
      sub_14149C0F0(&v175, &unk_14178772E, &v187);
      *(_OWORD *)&FileHandle.m256i_u64[1] = *(_OWORD *)v175.m256i_i8;
      FileHandle.m256i_i64[3] = v175.m256i_i64[2];
      FileHandle.m256i_i64[0] = 10;
      v201.m512i_i64[0] = 0;
      *(_OWORD *)&v201.m512i_u64[1] = 1u;
      v187.m512i_i64[2] = 1610612768;
      v187.m512i_i64[0] = (__int64)&v201;
      v187.m512i_i64[1] = (__int64)&off_141790AA0;
      if ( (unsigned __int8)sub_140B036A0(&FileHandle, &v187) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v215,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      v206 = v201.m512i_i64[1];
      v210 = v201.m512i_i64[0];
      write((int)&v201, Buf, v216);
      if ( v201.m512i_i32[0] != -1 )
      {
        v189 = v203;
        v188 = v202;
        v187 = v201;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          *(_QWORD *)&v160 = &v187;
          *((_QWORD *)&v160 + 1) = sub_140B036A0;
          v184.m512i_i64[0] = (__int64)aCodexmateLibCo_27;
          v184.m512i_i64[1] = 45;
          v184.m512i_i64[2] = (__int64)aCodexmateLibCo_27;
          v184.m512i_i64[3] = 45;
          v184.m512i_i64[4] = (__int64)&off_14178FD30;
          sub_140985BA0(&unk_14178FCF6, &v160, 2, &v184);
        }
        sub_1406CDA20(&v187);
      }
      if ( v210 )
        sub_140001660(v206, v210, 1);
      v201.m512i_i64[0] = v40;
      v187.m512i_i64[0] = (__int64)&v214;
      v187.m512i_i64[1] = (__int64)sub_1414A9660;
      v187.m512i_i64[2] = (__int64)&v201;
      v187.m512i_i64[3] = (__int64)sub_1414AC520;
      sub_14149C0F0(&v184, &unk_14178774F, &v187);
      LOBYTE(v158) = v216;
      Buf = (void *)v184.m512i_i64[1];
      v160 = *(_OWORD *)&v184.m512i_u64[1];
      v187.m512i_i64[0] = (__int64)&v158;
      v187.m512i_i64[1] = (__int64)sub_1407B2DA0;
      v187.m512i_i64[2] = (__int64)&v160;
      v187.m512i_i64[3] = (__int64)sub_14041F680;
      sub_14149C0F0(&v201, &unk_141787489, &v187);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aPostconditionF, 20, (__int64)&v201);
      if ( v184.m512i_i64[0] )
        sub_140001660(Buf, v184.m512i_i64[0], 1);
      v42[5] = v199;
      v42[4] = v198;
      v97 = *(_OWORD *)FileHandle.m256i_i8;
      v98 = *(_OWORD *)&FileHandle.m256i_u64[2];
      v99 = v196;
      v42[3] = v197;
      v42[2] = v99;
      v42[1] = v98;
      *v42 = v97;
      v84 = 1;
      goto LABEL_213;
    }
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v201.m512i_i64[0] = (__int64)&v216;
      v201.m512i_i64[1] = (__int64)sub_1407B2DA0;
      v201.m512i_i64[2] = (__int64)&v214;
      v201.m512i_i64[3] = (__int64)sub_1414A9660;
      v201.m512i_i64[4] = (__int64)&v166;
      v201.m512i_i64[5] = (__int64)sub_1400015F0;
      v187.m512i_i64[0] = 0;
      v187.m512i_i64[1] = (__int64)aCodexmateLibCo_27;
      *(_OWORD *)&v187.m512i_u64[2] = 0x2Du;
      v187.m512i_i64[4] = (__int64)aSrcCoreRelayRo_1;
      v187.m512i_i64[5] = 35;
      v187.m512i_i64[6] = 2;
      v187.m512i_i64[7] = (__int64)aCodexmateLibCo_27;
      *(_QWORD *)&v188 = 45;
      *((_QWORD *)&v188 + 1) = 0x10B00000001LL;
      *(_QWORD *)&v189 = &unk_1417877DC;
      *((_QWORD *)&v189 + 1) = &v201;
      v211 = 1;
      sub_1412C36A0(&v215, &v187);
    }
    v211 = 1;
    write((int)&FileHandle, Buf, v216);
    if ( FileHandle.m256i_i32[0] != -1 )
    {
      v203 = v199;
      v202 = v198;
      *(_OWORD *)&v201.m512i_u64[6] = v197;
      *(_OWORD *)&v201.m512i_u64[4] = v196;
      *(__m256i *)v201.m512i_i8 = FileHandle;
      if ( *v51 >= 2u )
      {
        v184.m512i_i64[0] = (__int64)&v201;
        v184.m512i_i64[1] = (__int64)sub_140B036A0;
        v187.m512i_i64[0] = 0;
        v187.m512i_i64[1] = (__int64)aCodexmateLibCo_27;
        *(_OWORD *)&v187.m512i_u64[2] = 0x2Du;
        v187.m512i_i64[4] = (__int64)aSrcCoreRelayRo_1;
        v187.m512i_i64[5] = 35;
        v187.m512i_i64[6] = 2;
        v187.m512i_i64[7] = (__int64)aCodexmateLibCo_27;
        *(_QWORD *)&v188 = 45;
        *((_QWORD *)&v188 + 1) = 0x15F00000001LL;
        *(_QWORD *)&v189 = &unk_14178FCF6;
        *((_QWORD *)&v189 + 1) = &v184;
        sub_1412C36A0(&v215, &v187);
      }
      v211 = 1;
      sub_1406CDA20(&v201);
    }
    if ( (_QWORD)v166 )
      sub_140001660(*((_QWORD *)&v166 + 1), v166, 1);
    v55 = (_QWORD *)(v41 + 8);
    do
    {
      v56 = *(v55 - 1);
      if ( v56 )
        sub_140001660(*v55, v56, 1);
      v55 += 4;
      --v40;
    }
    while ( v40 );
    if ( v153 )
      sub_140001660(v41, 32 * v153, 8);
    sub_1406CE2E0(&v168);
    v57 = *((_QWORD *)&v169 + 1);
    v58 = v170;
    if ( (_QWORD)v170 )
    {
      v59 = (_QWORD *)(*((_QWORD *)&v169 + 1) + 8LL);
      do
      {
        v19 = *(v59 - 1);
        if ( v19 )
          sub_140001660(*v59, v19, 1);
        v59 += 3;
        --v58;
      }
      while ( v58 );
    }
    if ( (_QWORD)v169 )
      sub_140001660(v57, 24 * v169, 8);
    v20 = v206;
    v21 = off_141EC8D80;
  }
  v181 = *(_QWORD *)&v150[88];
  v180 = *(_OWORD *)&v150[72];
  v187.m512i_i64[0] = (__int64)&v166;
  v187.m512i_i64[1] = (__int64)sub_1400015F0;
  sub_14149C0F0(&v171, &unk_14178777C, &v187);
  v88 = v181;
  if ( v181 == (_QWORD)v180 )
    sub_141689AB0(&v180);
  v89 = *((_QWORD *)&v180 + 1);
  v90 = 3 * v88;
  *(_QWORD *)(*((_QWORD *)&v180 + 1) + 8 * v90 + 16) = v172;
  *(_OWORD *)(v89 + 8 * v90) = v171;
  v181 = v88 + 1;
  sub_14084BFF0(&v175, a9, &v150[8], *a10);
  v84 = v175.m256i_i64[0] != -1;
  if ( v175.m256i_i64[0] == -1 )
  {
    sub_140440300((unsigned int)&v187, DWORD2(v180), v181, (unsigned int)&unk_1417876F9, 3);
    v206 = v187.m512i_i64[1];
    v210 = v187.m512i_i64[0];
    write((int)&v201, Buf, v216);
    if ( v201.m512i_i32[0] != -1 )
    {
      v189 = v203;
      v188 = v202;
      v187 = v201;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v184.m512i_i64[0] = (__int64)&v187;
        v184.m512i_i64[1] = (__int64)sub_140B036A0;
        FileHandle.m256i_i64[0] = (__int64)aCodexmateLibCo_27;
        FileHandle.m256i_i64[1] = 45;
        FileHandle.m256i_i64[2] = (__int64)aCodexmateLibCo_27;
        FileHandle.m256i_i64[3] = 45;
        *(_QWORD *)&v196 = &off_14178FD30;
        sub_140985BA0(&unk_14178FCF6, &v184, 2, &FileHandle);
      }
      sub_1406CDA20(&v187);
    }
    if ( v210 )
      sub_140001660(v206, v210, 1);
    v108 = sub_141471AC0(&v148);
    *(_OWORD *)v201.m512i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v108 + v109 / 0xF4240uLL;
    v184.m512i_i64[0] = v181;
    v187.m512i_i64[0] = (__int64)&v214;
    v187.m512i_i64[1] = (__int64)sub_1414A9660;
    v187.m512i_i64[2] = (__int64)&v201;
    v187.m512i_i64[3] = (__int64)sub_1414A9600;
    v187.m512i_i64[4] = (__int64)&v184;
    v187.m512i_i64[5] = (__int64)sub_1414AC520;
    sub_14149C0F0(&FileHandle, &unk_141787704, &v187);
    v175.m256i_i8[0] = v216;
    Buf = (void *)FileHandle.m256i_i64[1];
    *(_OWORD *)v184.m512i_i8 = *(_OWORD *)&FileHandle.m256i_u64[1];
    v187.m512i_i64[0] = (__int64)&v175;
    v187.m512i_i64[1] = (__int64)sub_1407B2DA0;
    v187.m512i_i64[2] = (__int64)&v184;
    v187.m512i_i64[3] = (__int64)sub_14041F680;
    sub_14149C0F0(&v201, &unk_141787489, &v187);
    sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aDegraded, 8, (__int64)&v201);
    if ( FileHandle.m256i_i64[0] )
      sub_140001660(Buf, FileHandle.m256i_i64[0], 1);
    v110 = *(_OWORD *)v168.m512i_i8;
    v111 = *(_OWORD *)&v168.m512i_u64[2];
    v112 = *(_OWORD *)&v168.m512i_u64[4];
    v113 = *(_OWORD *)&v168.m512i_u64[6];
    v187 = v168;
    v114 = v180;
    v188 = v180;
    *(_QWORD *)&v189 = v181;
    *((_QWORD *)v42 + 11) = v181;
    *(__int128 *)((char *)v42 + 72) = v114;
    *(__int128 *)((char *)v42 + 56) = v113;
    *(__int128 *)((char *)v42 + 40) = v112;
    *(__int128 *)((char *)v42 + 24) = v111;
    *(__int128 *)((char *)v42 + 8) = v110;
    *(_QWORD *)v42 = -1;
  }
  else
  {
    v186 = v179;
    v185 = v178;
    *(_OWORD *)&v184.m512i_u64[6] = v177;
    *(_OWORD *)&v184.m512i_u64[4] = v176;
    *(__m256i *)v184.m512i_i8 = v175;
    v187.m512i_i64[0] = (__int64)&v216;
    v187.m512i_i64[1] = (__int64)sub_1407B2DA0;
    v187.m512i_i64[2] = (__int64)&v184;
    v187.m512i_i64[3] = (__int64)sub_140B036A0;
    sub_14149C0F0(&v158, &unk_1417877B9, &v187);
    *(_OWORD *)&FileHandle.m256i_u64[1] = v158;
    FileHandle.m256i_i64[3] = v159;
    FileHandle.m256i_i64[0] = 10;
    v201.m512i_i64[0] = 0;
    *(_OWORD *)&v201.m512i_u64[1] = 1u;
    v187.m512i_i64[2] = 1610612768;
    v187.m512i_i64[0] = (__int64)&v201;
    v187.m512i_i64[1] = (__int64)&off_141790AA0;
    if ( (unsigned __int8)sub_140B036A0(&FileHandle, &v187) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_6,
        55,
        (unsigned int)&v215,
        (unsigned int)&unk_141789060,
        (__int64)&off_141790B58);
    v206 = v201.m512i_i64[1];
    v210 = v201.m512i_i64[0];
    write((int)&v201, Buf, v216);
    if ( v201.m512i_i32[0] != -1 )
    {
      v189 = v203;
      v188 = v202;
      v187 = v201;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v151 = &v187;
        v152 = sub_140B036A0;
        *(_QWORD *)&v160 = aCodexmateLibCo_27;
        *((_QWORD *)&v160 + 1) = 45;
        *(_QWORD *)&v161 = aCodexmateLibCo_27;
        *((_QWORD *)&v161 + 1) = 45;
        *(_QWORD *)&v162 = &off_14178FD30;
        sub_140985BA0(&unk_14178FCF6, &v151, 2, &v160);
      }
      sub_1406CDA20(&v187);
    }
    if ( v210 )
      sub_140001660(v206, v210, 1);
    v187.m512i_i64[0] = (__int64)&v214;
    v187.m512i_i64[1] = (__int64)sub_1414A9660;
    v187.m512i_i64[2] = (__int64)&FileHandle;
    v187.m512i_i64[3] = (__int64)sub_140B036A0;
    sub_14149C0F0(&v160, &unk_1417876C6, &v187);
    v200 = v216;
    Buf = *((void **)&v160 + 1);
    v151 = *((__m512i **)&v160 + 1);
    v152 = (__int64 (__fastcall *)(_QWORD, _QWORD))v161;
    v187.m512i_i64[0] = (__int64)&v200;
    v187.m512i_i64[1] = (__int64)sub_1407B2DA0;
    v187.m512i_i64[2] = (__int64)&v151;
    v187.m512i_i64[3] = (__int64)sub_14041F680;
    sub_14149C0F0(&v201, &unk_141787489, &v187);
    sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aCommitFailed, 13, (__int64)&v201);
    if ( (_QWORD)v160 )
      sub_140001660(Buf, v160, 1);
    v42[5] = v199;
    v42[4] = v198;
    v91 = *(_OWORD *)FileHandle.m256i_i8;
    v92 = *(_OWORD *)&FileHandle.m256i_u64[2];
    v93 = v196;
    v42[3] = v197;
    v42[2] = v93;
    v42[1] = v92;
    *v42 = v91;
    sub_1406CDA20(&v184);
    v94 = v181;
    if ( v181 )
    {
      v95 = (_QWORD *)(*((_QWORD *)&v180 + 1) + 8LL);
      do
      {
        v96 = *(v95 - 1);
        if ( v96 )
          sub_140001660(*v95, v96, 1);
        v95 += 3;
        --v94;
      }
      while ( v94 );
    }
    if ( (_QWORD)v180 )
      sub_140001660(*((_QWORD *)&v180 + 1), 24 * v180, 8);
  }
LABEL_213:
  if ( (_QWORD)v166 )
    sub_140001660(*((_QWORD *)&v166 + 1), v166, 1);
  v83 = v53 ^ 1;
  v115 = (_QWORD *)(v41 + 8);
  do
  {
    v116 = *(v115 - 1);
    if ( v116 )
      sub_140001660(*v115, v116, 1);
    v115 += 4;
    --v40;
  }
  while ( v40 );
LABEL_159:
  if ( v153 )
    sub_140001660(v41, 32 * v153, 8);
  if ( v84 )
    sub_1406CE2E0(&v168);
  if ( v83 )
    goto LABEL_164;
  return v11;
}
