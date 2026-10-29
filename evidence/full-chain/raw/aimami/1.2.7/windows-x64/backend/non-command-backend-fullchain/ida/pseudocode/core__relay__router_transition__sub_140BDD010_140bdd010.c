// win 1.2.7 | module src/core/relay/router_transition.rs | ea 0x140bdd010 | name sub_140BDD010
// win 1.2.7 | module src/core/relay/router_transition.rs | attributed via panic-Location xref (win-native)
__int128 *__fastcall sub_140BDD010(
        __int128 *a1,
        __int128 *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __int128 a5,
        __int64 *a6,
        __int64 a7,
        int a8,
        __int64 a9,
        unsigned __int8 *a10)
{
  __int128 v13; // kr00_16
  __int128 v14; // kr10_16
  __int128 v15; // kr20_16
  __int128 v16; // kr30_16
  __int64 v18; // rdx
  int v19; // ebx
  char v20; // al
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // edx
  __int64 v28; // rax
  unsigned int v29; // edx
  unsigned int v30; // ebx
  __int128 *v31; // rcx
  unsigned __int128 *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // esi
  char v37; // bl
  unsigned __int64 v38; // rax
  unsigned int v39; // edx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r12
  __int64 v45; // r14
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  _QWORD *v51; // rsi
  unsigned __int64 v52; // rax
  unsigned int v53; // edx
  int v54; // ebx
  bool v55; // cl
  bool v56; // dl
  int v57; // edx
  bool v58; // cl
  bool v59; // dl
  int v60; // edx
  _QWORD *v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // rbx
  __int64 v64; // r14
  _QWORD *v65; // rsi
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int128 v68; // xmm2
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int128 v71; // xmm2
  unsigned __int8 v72; // al
  _OWORD *v73; // rax
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm2
  char v77; // al
  __int64 v78; // rax
  unsigned int v79; // edx
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm2
  __int128 v83; // xmm0
  __int128 v84; // xmm1
  __int128 v85; // xmm2
  unsigned __int8 v86; // al
  __int128 v87; // xmm0
  __int128 v88; // xmm1
  __int128 v89; // xmm2
  int v90; // eax
  __int128 v91; // xmm0
  __int128 v92; // xmm1
  __int128 v93; // xmm2
  unsigned __int8 v94; // al
  __int64 v95; // rax
  __int64 v96; // rcx
  __int128 v97; // krC0_16
  int v98; // edx
  __int128 v99; // xmm0
  __int128 v100; // xmm1
  __int128 v101; // xmm2
  unsigned __int8 v102; // al
  __int128 v103; // xmm0
  __int128 v104; // xmm1
  __int128 v105; // xmm2
  __int64 v106; // rdx
  int v107; // r9d
  __int64 v108; // rbx
  __int64 v109; // rdi
  _OWORD *v110; // rsi
  __int64 v111; // r15
  char v112; // r14
  __int128 v113; // xmm0
  __int128 v114; // xmm1
  __int128 v115; // xmm2
  __int128 *v116; // rcx
  unsigned __int8 v117; // al
  unsigned __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rcx
  unsigned __int64 v121; // r14
  int v122; // edi
  __int64 v123; // rax
  unsigned int v124; // edx
  __int64 (__fastcall *v125)(unsigned __int64); // rax
  __int64 v126; // rcx
  __int64 v127; // rdx
  __int64 v128; // rbx
  __int64 v129; // rsi
  __int64 v130; // rax
  __int64 v131; // rcx
  __int128 v132; // xmm0
  __int128 v133; // xmm1
  __int128 v134; // xmm2
  __int128 *v135; // rax
  __int64 v136; // rax
  unsigned int v137; // edx
  __int128 v138; // [rsp+50h] [rbp-30h] BYREF
  __int64 v139; // [rsp+60h] [rbp-20h] BYREF
  __int128 v140; // [rsp+68h] [rbp-18h]
  __int64 v141; // [rsp+78h] [rbp-8h] BYREF
  unsigned __int128 v142; // [rsp+80h] [rbp+0h]
  __int64 v143; // [rsp+90h] [rbp+10h] BYREF
  unsigned __int128 v144; // [rsp+98h] [rbp+18h]
  unsigned __int64 v145; // [rsp+A8h] [rbp+28h]
  __int64 v146; // [rsp+B0h] [rbp+30h] BYREF
  int v147; // [rsp+B8h] [rbp+38h]
  __int64 v148; // [rsp+C0h] [rbp+40h]
  __int64 v149; // [rsp+C8h] [rbp+48h]
  _BYTE *v150; // [rsp+D0h] [rbp+50h]
  __int64 v151; // [rsp+D8h] [rbp+58h]
  __int64 v152; // [rsp+E0h] [rbp+60h]
  __int64 v153; // [rsp+E8h] [rbp+68h]
  unsigned __int128 v154; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v155; // [rsp+100h] [rbp+80h]
  __int128 v156; // [rsp+110h] [rbp+90h]
  __int128 v157; // [rsp+120h] [rbp+A0h]
  __int128 v158; // [rsp+130h] [rbp+B0h]
  __int128 v159; // [rsp+140h] [rbp+C0h]
  __int128 v160; // [rsp+150h] [rbp+D0h]
  __int128 v161; // [rsp+160h] [rbp+E0h]
  __int128 v162; // [rsp+170h] [rbp+F0h]
  __int64 v163; // [rsp+180h] [rbp+100h]
  __int64 v164; // [rsp+188h] [rbp+108h]
  __int64 v165; // [rsp+190h] [rbp+110h]
  _QWORD v166[3]; // [rsp+198h] [rbp+118h] BYREF
  _QWORD v167[3]; // [rsp+1B0h] [rbp+130h] BYREF
  _QWORD v168[3]; // [rsp+1C8h] [rbp+148h] BYREF
  _BYTE v169[96]; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v170; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v171; // [rsp+250h] [rbp+1D0h]
  unsigned __int64 v172; // [rsp+258h] [rbp+1D8h]
  __int128 v173; // [rsp+260h] [rbp+1E0h] BYREF
  __int128 *v174; // [rsp+270h] [rbp+1F0h]
  int v175; // [rsp+27Ch] [rbp+1FCh]
  __int64 v176; // [rsp+280h] [rbp+200h] BYREF
  int v177; // [rsp+288h] [rbp+208h]
  __int64 v178; // [rsp+290h] [rbp+210h] BYREF
  __int64 v179; // [rsp+298h] [rbp+218h]
  __int64 v180; // [rsp+2A0h] [rbp+220h]
  int v181; // [rsp+2A8h] [rbp+228h] BYREF
  char v182; // [rsp+2ACh] [rbp+22Ch] BYREF
  unsigned __int128 v183; // [rsp+2B0h] [rbp+230h] BYREF
  __int128 v184; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v185; // [rsp+2D0h] [rbp+250h]
  __int128 v186; // [rsp+2E0h] [rbp+260h]
  __int128 v187; // [rsp+2F0h] [rbp+270h] BYREF
  __int128 v188; // [rsp+300h] [rbp+280h]
  __int128 v189; // [rsp+310h] [rbp+290h] BYREF
  __int128 v190; // [rsp+320h] [rbp+2A0h] BYREF
  __int64 v191; // [rsp+330h] [rbp+2B0h]
  __m256i v192; // [rsp+340h] [rbp+2C0h] BYREF
  __int128 v193; // [rsp+360h] [rbp+2E0h]
  __int128 v194; // [rsp+370h] [rbp+2F0h]
  _BYTE v195[112]; // [rsp+380h] [rbp+300h] BYREF
  __int128 v196; // [rsp+3F0h] [rbp+370h]
  __int128 v197; // [rsp+400h] [rbp+380h]
  __int128 v198; // [rsp+410h] [rbp+390h]
  __int128 v199; // [rsp+420h] [rbp+3A0h]
  __int128 v200; // [rsp+430h] [rbp+3B0h]
  __m256i v201; // [rsp+440h] [rbp+3C0h] BYREF
  __int128 v202; // [rsp+460h] [rbp+3E0h]
  __int128 v203; // [rsp+470h] [rbp+3F0h]
  __int64 v204; // [rsp+488h] [rbp+408h]
  unsigned __int128 v205; // [rsp+490h] [rbp+410h] BYREF
  _BYTE v206[48]; // [rsp+4A0h] [rbp+420h]
  __int128 v207; // [rsp+4D0h] [rbp+450h] BYREF
  __int128 v208; // [rsp+4E0h] [rbp+460h]
  __int128 *v209; // [rsp+4F0h] [rbp+470h]
  char v210; // [rsp+4FEh] [rbp+47Eh] BYREF
  unsigned __int8 v211; // [rsp+4FFh] [rbp+47Fh]
  _BYTE v212[48]; // [rsp+500h] [rbp+480h] BYREF
  _BYTE v213[48]; // [rsp+530h] [rbp+4B0h]
  char v214; // [rsp+567h] [rbp+4E7h]
  __int64 v215; // [rsp+568h] [rbp+4E8h]
  char v216; // [rsp+573h] [rbp+4F3h]
  char v217; // [rsp+574h] [rbp+4F4h]
  char v218; // [rsp+575h] [rbp+4F5h]
  unsigned __int8 v219; // [rsp+576h] [rbp+4F6h] BYREF
  char v220; // [rsp+577h] [rbp+4F7h]
  __int64 v221; // [rsp+578h] [rbp+4F8h]
  char v222; // [rsp+585h] [rbp+505h]
  char v223; // [rsp+586h] [rbp+506h]
  char v224; // [rsp+587h] [rbp+507h]
  char v225; // [rsp+588h] [rbp+508h]
  char v226; // [rsp+589h] [rbp+509h]
  char v227; // [rsp+58Ah] [rbp+50Ah]
  char v228; // [rsp+58Bh] [rbp+50Bh] BYREF
  char v229; // [rsp+58Ch] [rbp+50Ch]
  char v230; // [rsp+58Dh] [rbp+50Dh]
  unsigned __int8 v231; // [rsp+58Eh] [rbp+50Eh] BYREF
  unsigned __int8 v232; // [rsp+58Fh] [rbp+50Fh] BYREF
  __int64 v233; // [rsp+590h] [rbp+510h]

  v233 = -2;
  v232 = a3;
  v219 = a4;
  v189 = a5;
  sub_1410257E0(v195);
  v13 = *(_OWORD *)&v195[32];
  v205 = *(_OWORD *)&v195[48];
  *(_OWORD *)v206 = *(_OWORD *)&v195[64];
  if ( *(_QWORD *)v195 != -1 )
  {
    *(_OWORD *)&v213[32] = *(_OWORD *)&v195[80];
    *(_QWORD *)&v212[16] = *(_QWORD *)&v195[16];
    *(_OWORD *)&v212[24] = *(_OWORD *)&v195[24];
    *(_QWORD *)&v212[40] = *(_QWORD *)&v195[40];
    *(_OWORD *)v213 = v205;
    *(_OWORD *)&v213[16] = *(_OWORD *)v206;
    *(_OWORD *)v212 = *(_OWORD *)v195;
LABEL_3:
    a1[5] = *(_OWORD *)&v213[32];
    a1[4] = *(_OWORD *)&v213[16];
    v14 = *(_OWORD *)v212;
    v15 = *(_OWORD *)&v212[16];
    v16 = *(_OWORD *)&v212[32];
    a1[3] = *(_OWORD *)v213;
    a1[2] = v16;
    a1[1] = v15;
    *a1 = v14;
LABEL_4:
    *((_WORD *)a1 + 48) = 0;
    return a1;
  }
  if ( *(_QWORD *)&v195[8] != -1 )
  {
    if ( *(_QWORD *)&v195[8] )
      sub_140001660(*(_QWORD *)&v195[16], *(_QWORD *)&v195[8], 1);
    if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(*((_QWORD *)&v13 + 1), v13, 1);
  }
  sub_14023D790((__int64)v195, (__int64)a2);
  if ( *(_DWORD *)v195 == -1 )
  {
    sub_140EFE1A0(v212);
    if ( *(_QWORD *)v212 != -1 )
      goto LABEL_3;
  }
  else
  {
    *(_OWORD *)&v213[32] = *(_OWORD *)&v195[80];
    *(_OWORD *)&v213[16] = *(_OWORD *)&v195[64];
    *(_OWORD *)v213 = *(_OWORD *)&v195[48];
    *(_OWORD *)&v212[32] = *(_OWORD *)&v195[32];
    *(_OWORD *)&v212[16] = *(_OWORD *)&v195[16];
    *(_OWORD *)v212 = *(_OWORD *)v195;
    if ( *(_QWORD *)v195 != -1 )
      goto LABEL_3;
  }
  sub_141568C20(&v138);
  *(_QWORD *)v195 = &v219;
  *(_QWORD *)&v195[8] = sub_140C9DE00;
  *(_QWORD *)&v195[16] = &v189;
  *(_QWORD *)&v195[24] = sub_140186EE0;
  sub_1416ABFD0(&v143, &unk_141A39F10, v195);
  LOBYTE(v183) = v232;
  v221 = v144;
  v205 = v144;
  *(_QWORD *)v195 = &v183;
  *(_QWORD *)&v195[8] = sub_140C98D50;
  *(_QWORD *)&v195[16] = &v205;
  *(_QWORD *)&v195[24] = sub_140186EE0;
  sub_1416ABFD0(v212, &unk_141A39D2E, v195);
  sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStart_0, 5, (__int64)v212);
  if ( v143 )
    sub_140001660(v221, v143, 1);
  if ( !v219 )
  {
    sub_140267190((__int64 *)v212, (__int64)a2, 0);
    if ( *(_DWORD *)v212 != -1 )
    {
      *(_OWORD *)&v195[80] = *(_OWORD *)&v213[32];
      *(_OWORD *)&v195[64] = *(_OWORD *)&v213[16];
      *(_OWORD *)&v195[48] = *(_OWORD *)v213;
      *(_OWORD *)&v195[32] = *(_OWORD *)&v212[32];
      *(_OWORD *)&v195[16] = *(_OWORD *)&v212[16];
      *(_OWORD *)v195 = *(_OWORD *)v212;
      *(_QWORD *)&v183 = 0;
      *((_QWORD *)&v183 + 1) = 1;
      *(_QWORD *)&v184 = 0;
      *(_QWORD *)v206 = 1610612768;
      *(_QWORD *)&v205 = &v183;
      *((_QWORD *)&v205 + 1) = &off_141A3FE88;
      if ( (unsigned __int8)sub_14104A7D0(v195, &v205) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v228,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v215 = *((_QWORD *)&v183 + 1);
      v221 = v183;
      sub_140C75030(a2, (__int128 *)v232);
      if ( v221 )
        sub_140001660(v215, v221, 1);
      *(_QWORD *)&v205 = &v189;
      *((_QWORD *)&v205 + 1) = sub_140186EE0;
      *(_QWORD *)v206 = v195;
      *(_QWORD *)&v206[8] = sub_14104A7D0;
      sub_1416ABFD0(&v154, &unk_141A39F29, &v205);
      v201.m256i_i8[0] = v232;
      v221 = *((_QWORD *)&v154 + 1);
      *(_OWORD *)v169 = __PAIR128__(v155, *((unsigned __int64 *)&v154 + 1));
      *(_QWORD *)&v205 = &v201;
      *((_QWORD *)&v205 + 1) = sub_140C98D50;
      *(_QWORD *)v206 = v169;
      *(_QWORD *)&v206[8] = sub_140186EE0;
      sub_1416ABFD0(&v183, &unk_141A39D2E, &v205);
      sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aPreflightFaile, 16, (__int64)&v183);
      if ( (_QWORD)v154 )
        sub_140001660(v221, v154, 1);
      a1[5] = *(_OWORD *)&v195[80];
      a1[4] = *(_OWORD *)&v195[64];
      v66 = *(_OWORD *)v195;
      v67 = *(_OWORD *)&v195[16];
      v68 = *(_OWORD *)&v195[32];
      a1[3] = *(_OWORD *)&v195[48];
      a1[2] = v68;
      a1[1] = v67;
      *a1 = v66;
      goto LABEL_4;
    }
  }
  v211 = a4;
  v148 = 2LL * (a4 ^ 1u) + 3;
  v149 = *a6;
  v150 = (_BYTE *)a6[1];
  v164 = a6[2];
  v18 = a6[3];
  v151 = v18;
  v152 = a6[4];
  v153 = *(_QWORD *)(a7 + 24);
  v19 = -1;
  v20 = 1;
  v21 = 0;
  v174 = a1;
  v209 = a2;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (v21 & 1) != 0 || (unsigned __int8)v20 > 3u )
      {
        nullsub_1(v21);
        v73 = (_OWORD *)sub_140001650(109, 1);
        if ( !v73 )
          sub_141938D2B(1, 109);
        *(_OWORD *)((char *)v73 + 93) = *(__int128 *)((char *)&xmmword_141A39F8C + 13);
        v73[5] = xmmword_141A39F8C;
        v73[4] = xmmword_141A39F7C;
        v73[3] = xmmword_141A39F6C;
        v73[2] = xmmword_141A39F5C;
        qmemcpy(v73, "CODEX_TRANSITION_REENTRY_TIMEOUT", 32);
        *(_QWORD *)&v195[8] = 109;
        *(_QWORD *)&v195[16] = v73;
        *(_QWORD *)&v195[24] = 109;
        *(_QWORD *)v195 = 10;
        *(_QWORD *)&v205 = 0;
        *((_QWORD *)&v205 + 1) = 1;
        *(_QWORD *)v206 = 0;
        *(_QWORD *)&v212[16] = 1610612768;
        *(_QWORD *)v212 = &v205;
        *(_QWORD *)&v212[8] = &off_141A3FE88;
        if ( (unsigned __int8)sub_14104A7D0(v195, v212) )
          sub_141939040(
            (unsigned int)aADisplayImplem_7,
            55,
            (unsigned int)&v228,
            (unsigned int)&unk_141A3BB68,
            (__int64)&off_141A3FF40);
        v215 = *((_QWORD *)&v205 + 1);
        v221 = v205;
        sub_140C75030(a2, (__int128 *)v232);
        if ( v221 )
          sub_140001660(v215, v221, 1);
        *(_QWORD *)&v205 = 0;
        *((_QWORD *)&v205 + 1) = 1;
        *(_QWORD *)v206 = 0;
        *(_QWORD *)&v212[16] = 1610612768;
        *(_QWORD *)v212 = &v205;
        *(_QWORD *)&v212[8] = &off_141A3FE88;
        if ( (unsigned __int8)sub_14104A7D0(v195, v212) )
          sub_141939040(
            (unsigned int)aADisplayImplem_7,
            55,
            (unsigned int)&v228,
            (unsigned int)&unk_141A3BB68,
            (__int64)&off_141A3FF40);
        *(_QWORD *)&v184 = *(_QWORD *)v206;
        v183 = v205;
        sub_140BBE8E0(v232, (int)aRetryExhausted, 15, &v183);
        a1[5] = *(_OWORD *)&v195[80];
        a1[4] = *(_OWORD *)&v195[64];
        v74 = *(_OWORD *)v195;
        v75 = *(_OWORD *)&v195[16];
        v76 = *(_OWORD *)&v195[32];
        a1[3] = *(_OWORD *)&v195[48];
        a1[2] = v76;
        a1[1] = v75;
        *a1 = v74;
        *((_WORD *)a1 + 48) = 772;
        return a1;
      }
      LODWORD(v221) = v19;
      LOBYTE(v18) = v20 == 3;
      v215 = v18;
      v22 = (unsigned __int8)(v20 + 1);
      if ( v20 == 3 )
        v22 = 3;
      v175 = v22;
      v231 = v20;
      sub_140C75030(a2, (__int128 *)v232);
      v146 = sub_14167FC00(v24, v23, v25, v26);
      v147 = v27;
      sub_140EC0AC0((unsigned int)v195, v148, 0, v211, 0);
      *(_DWORD *)((char *)&v205 + 3) = *(_DWORD *)&v195[12];
      LODWORD(v205) = *(_DWORD *)&v195[9];
      *(_DWORD *)((char *)&v183 + 3) = *(_DWORD *)&v195[20];
      LODWORD(v183) = *(_DWORD *)&v195[17];
      *(_DWORD *)((char *)&v154 + 3) = *(_DWORD *)&v195[28];
      LODWORD(v154) = *(_DWORD *)&v195[25];
      *(_DWORD *)v169 = *(_DWORD *)&v195[33];
      *(_DWORD *)&v169[3] = *(_DWORD *)&v195[36];
      *(__int32 *)((char *)v201.m256i_i32 + 3) = *(_DWORD *)&v195[44];
      v201.m256i_i32[0] = *(_DWORD *)&v195[41];
      *(__int32 *)((char *)v192.m256i_i32 + 3) = *(_DWORD *)&v195[52];
      v192.m256i_i32[0] = *(_DWORD *)&v195[49];
      *(_DWORD *)((char *)&v160 + 3) = *(_DWORD *)&v195[60];
      LODWORD(v160) = *(_DWORD *)&v195[57];
      if ( *(_QWORD *)v195 != -1 )
      {
        LODWORD(v176) = *(_DWORD *)&v195[65];
        *(_DWORD *)((char *)&v176 + 3) = *(_DWORD *)&v195[68];
        *(_QWORD *)&v213[40] = *(_QWORD *)&v195[88];
        *(_OWORD *)&v213[24] = *(_OWORD *)&v195[72];
        *(_DWORD *)&v212[9] = v205;
        *(_DWORD *)&v212[12] = *(_DWORD *)((char *)&v205 + 3);
        LODWORD(v190) = v183;
        *(_DWORD *)((char *)&v190 + 3) = *(_DWORD *)((char *)&v183 + 3);
        *(_DWORD *)((char *)v166 + 3) = *(_DWORD *)((char *)&v154 + 3);
        LODWORD(v166[0]) = v154;
        *(_DWORD *)((char *)&v170 + 3) = *(_DWORD *)&v169[3];
        LODWORD(v170) = *(_DWORD *)v169;
        *(_DWORD *)((char *)v167 + 3) = *(__int32 *)((char *)v201.m256i_i32 + 3);
        LODWORD(v167[0]) = v201.m256i_i32[0];
        *(_DWORD *)((char *)v168 + 3) = *(__int32 *)((char *)v192.m256i_i32 + 3);
        LODWORD(v168[0]) = v192.m256i_i32[0];
        *(_DWORD *)((char *)&v178 + 3) = *(_DWORD *)((char *)&v160 + 3);
        LODWORD(v178) = v160;
        *(_QWORD *)v212 = *(_QWORD *)v195;
        v212[8] = v195[8];
        v212[16] = v195[16];
        *(_DWORD *)&v212[20] = *(_DWORD *)((char *)&v183 + 3);
        *(_DWORD *)&v212[17] = v190;
        v212[24] = v195[24];
        *(_DWORD *)&v212[28] = *(_DWORD *)((char *)v166 + 3);
        *(_DWORD *)&v212[25] = v154;
        v212[32] = v195[32];
        *(_DWORD *)&v212[36] = *(_DWORD *)((char *)&v170 + 3);
        *(_DWORD *)&v212[33] = *(_DWORD *)v169;
        v212[40] = v195[40];
        *(_DWORD *)&v212[44] = *(_DWORD *)((char *)v167 + 3);
        *(_DWORD *)&v212[41] = v201.m256i_i32[0];
        v213[0] = v195[48];
        *(_DWORD *)&v213[4] = *(_DWORD *)((char *)v168 + 3);
        *(_DWORD *)&v213[1] = v192.m256i_i32[0];
        v213[8] = v195[56];
        *(_DWORD *)&v213[12] = *(_DWORD *)((char *)&v178 + 3);
        *(_DWORD *)&v213[9] = v160;
        v213[16] = v195[64];
        *(_DWORD *)&v213[20] = *(_DWORD *)&v195[68];
        *(_DWORD *)&v213[17] = v176;
        *(_QWORD *)&v205 = 0;
        *((_QWORD *)&v205 + 1) = 1;
        *(_QWORD *)v206 = 0;
        *(_QWORD *)&v195[16] = 1610612768;
        *(_QWORD *)v195 = &v205;
        *(_QWORD *)&v195[8] = &off_141A3FE88;
        v77 = sub_14104A7D0(v212, v195);
        a1 = v174;
        if ( v77 )
          sub_141939040(
            (unsigned int)aADisplayImplem_7,
            55,
            (unsigned int)&v228,
            (unsigned int)&unk_141A3BB68,
            (__int64)&off_141A3FF40);
        v215 = *((_QWORD *)&v205 + 1);
        v221 = v205;
        sub_140C75030(v209, (__int128 *)v232);
        if ( v221 )
          sub_140001660(v215, v221, 1);
        v78 = sub_14167FD50(&v146);
        v183 = 0x3E8 * (unsigned __int128)(unsigned __int64)v78 + v79 / 0xF4240uLL;
        *(_QWORD *)v195 = &v231;
        *(_QWORD *)&v195[8] = sub_1416B9630;
        *(_QWORD *)&v195[16] = &v183;
        *(_QWORD *)&v195[24] = sub_1416B95D0;
        *(_QWORD *)&v195[32] = v212;
        *(_QWORD *)&v195[40] = sub_14104A7D0;
        sub_1416ABFD0(&v205, &unk_141A3A247, v195);
        sub_140BBE8E0(v232, (int)aStopFailed, 11, &v205);
        a1[5] = *(_OWORD *)&v213[32];
        a1[4] = *(_OWORD *)&v213[16];
        v80 = *(_OWORD *)v212;
        v81 = *(_OWORD *)&v212[16];
        v82 = *(_OWORD *)&v212[32];
        a1[3] = *(_OWORD *)v213;
        a1[2] = v82;
        a1[1] = v81;
        *a1 = v80;
        v72 = v231;
        *((_BYTE *)a1 + 96) = 1;
        goto LABEL_120;
      }
      LODWORD(v190) = v205;
      *(_DWORD *)((char *)&v190 + 3) = *(_DWORD *)((char *)&v205 + 3);
      LODWORD(v166[0]) = v183;
      *(_DWORD *)((char *)v166 + 3) = *(_DWORD *)((char *)&v183 + 3);
      LODWORD(v170) = v154;
      *(_DWORD *)((char *)&v170 + 3) = *(_DWORD *)((char *)&v154 + 3);
      LODWORD(v167[0]) = *(_DWORD *)v169;
      *(_DWORD *)((char *)v167 + 3) = *(_DWORD *)&v169[3];
      *(_DWORD *)((char *)v168 + 3) = *(__int32 *)((char *)v201.m256i_i32 + 3);
      LODWORD(v168[0]) = v201.m256i_i32[0];
      *(_DWORD *)((char *)&v178 + 3) = *(__int32 *)((char *)v192.m256i_i32 + 3);
      LODWORD(v178) = v192.m256i_i32[0];
      LODWORD(v176) = v160;
      *(_DWORD *)((char *)&v176 + 3) = *(_DWORD *)((char *)&v160 + 3);
      DWORD1(v160) = *(_DWORD *)((char *)&v205 + 3);
      *(_DWORD *)((char *)&v160 + 1) = v190;
      HIDWORD(v160) = *(_DWORD *)((char *)&v183 + 3);
      *(_DWORD *)((char *)&v160 + 9) = v166[0];
      DWORD1(v161) = *(_DWORD *)((char *)&v154 + 3);
      *(_DWORD *)((char *)&v161 + 1) = v170;
      HIDWORD(v161) = *(_DWORD *)&v169[3];
      *(_DWORD *)((char *)&v161 + 9) = v167[0];
      DWORD1(v162) = *(_DWORD *)((char *)v168 + 3);
      *(_DWORD *)((char *)&v162 + 1) = v201.m256i_i32[0];
      HIDWORD(v162) = *(_DWORD *)((char *)&v178 + 3);
      *(_DWORD *)((char *)&v162 + 9) = v192.m256i_i32[0];
      HIDWORD(v163) = *(_DWORD *)((char *)&v176 + 3);
      *(_DWORD *)((char *)&v163 + 1) = v176;
      v210 = v195[56];
      LOBYTE(v160) = v195[8];
      BYTE8(v160) = v195[16];
      LOBYTE(v161) = v195[24];
      BYTE8(v161) = v195[32];
      LOBYTE(v162) = v195[40];
      BYTE8(v162) = v195[48];
      LOBYTE(v163) = v195[56];
      v227 = 1;
      v28 = sub_14167FD50(&v146);
      a1 = v174;
      a2 = v209;
      *(_OWORD *)v212 = 0x3E8 * (unsigned __int128)(unsigned __int64)v28 + v29 / 0xF4240uLL;
      *(_QWORD *)v195 = &v231;
      *(_QWORD *)&v195[8] = sub_1416B9630;
      *(_QWORD *)&v195[16] = v212;
      *(_QWORD *)&v195[24] = sub_1416B95D0;
      *(_QWORD *)&v195[32] = &v210;
      *(_QWORD *)&v195[40] = sub_1416BCC50;
      v227 = 1;
      sub_1416ABFD0(&v141, &unk_141A39FC6, v195);
      LOBYTE(v183) = v232;
      v204 = v142;
      v205 = v142;
      *(_QWORD *)v195 = &v183;
      *(_QWORD *)&v195[8] = sub_140C98D50;
      *(_QWORD *)&v195[16] = &v205;
      *(_QWORD *)&v195[24] = sub_140186EE0;
      sub_1416ABFD0(v212, &unk_141A39D2E, v195);
      sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStopComplete, 13, (__int64)v212);
      if ( v141 )
        sub_140001660(v204, v141, 1);
      v227 = 1;
      sub_140C75030(a2, (__int128 *)v232);
      v30 = v231;
      *(_QWORD *)&v154 = v149;
      if ( *v150 || (v227 = 1, sub_1402452F0((__m128i *)v195, v164), *(_QWORD *)v195 == -1) )
      {
        v31 = (__int128 *)&unk_141A3B210;
        if ( (_BYTE)v30 == 1 )
          v31 = (__int128 *)"auth-mode toggle";
        v32 = nullptr;
        if ( (_BYTE)v30 == 1 )
          v32 = &v154;
        v227 = 1;
        sub_14019F190((__int128 *)v195, v164, v151, v152, v31, 9LL * ((_BYTE)v30 != 1) + 16, (__int64)v32);
        v205 = *(_OWORD *)&v195[8];
        *(_OWORD *)v206 = *(_OWORD *)&v195[24];
        *(_OWORD *)&v206[16] = *(_OWORD *)&v195[40];
        *(_QWORD *)&v206[32] = *(_QWORD *)&v195[56];
        if ( *(_QWORD *)v195 == -1 )
        {
          v183 = v205;
          v184 = *(_OWORD *)v206;
          v185 = *(_OWORD *)&v206[16];
          *(_QWORD *)&v186 = *(_QWORD *)&v206[32];
          sub_1403F1200(&v205, (char *)&v184 + 8);
          *(_QWORD *)&v195[48] = v186;
          *(_OWORD *)&v195[32] = v185;
          *(_OWORD *)&v195[16] = v184;
          *(_OWORD *)v195 = v183;
          *(_QWORD *)&v195[72] = *(_QWORD *)v206;
          *(_OWORD *)&v195[56] = v205;
          *(_OWORD *)v212 = v183;
          *(_OWORD *)&v212[16] = v184;
          *(_OWORD *)&v212[32] = v185;
          *(_OWORD *)v213 = *(_OWORD *)&v195[48];
          *(_OWORD *)&v213[16] = *(_OWORD *)&v195[64];
          *(_QWORD *)&v169[88] = *(_QWORD *)v206;
          *(_OWORD *)&v169[72] = *(_OWORD *)&v213[8];
          *(_QWORD *)&v169[64] = v186;
          *(_OWORD *)&v169[48] = v185;
          *(_OWORD *)&v169[32] = v184;
          *(_OWORD *)&v169[16] = v183;
          *(_OWORD *)v169 = 0xFFFFFFFFFFFFFFFFuLL;
        }
        else
        {
          *(_OWORD *)&v213[24] = *(_OWORD *)&v195[80];
          *(_OWORD *)&v213[8] = *(_OWORD *)&v195[64];
          *(_QWORD *)v213 = *(_QWORD *)&v206[32];
          *(_OWORD *)v212 = v205;
          *(_OWORD *)&v212[16] = *(_OWORD *)v206;
          *(_OWORD *)&v212[32] = *(_OWORD *)&v206[16];
          *(_QWORD *)v169 = *(_QWORD *)v195;
          *(_QWORD *)&v169[88] = *(_QWORD *)&v195[88];
          *(_OWORD *)&v169[72] = *(_OWORD *)&v213[16];
          *(_OWORD *)&v169[56] = __PAIR128__(*(unsigned __int64 *)&v195[64], *(unsigned __int64 *)&v206[32]);
          *(_OWORD *)&v169[40] = *(_OWORD *)&v206[16];
          *(_OWORD *)&v169[24] = *(_OWORD *)v206;
          *(_OWORD *)&v169[8] = v205;
        }
      }
      else
      {
        *(_OWORD *)&v169[80] = *(_OWORD *)&v195[80];
        *(_OWORD *)&v169[64] = *(_OWORD *)&v195[64];
        *(_OWORD *)&v169[48] = *(_OWORD *)&v195[48];
        *(_QWORD *)v169 = *(_QWORD *)v195;
        *(_OWORD *)&v169[8] = *(_OWORD *)&v195[8];
        *(_OWORD *)&v169[24] = *(_OWORD *)&v195[24];
        *(_QWORD *)&v169[40] = *(_QWORD *)&v195[40];
      }
      *(_QWORD *)&v195[48] = v163;
      *(_OWORD *)&v195[32] = v162;
      *(_OWORD *)&v195[16] = v161;
      *(_OWORD *)v195 = v160;
      v224 = 1;
      sub_140EC14F0(&v154, v195);
      *(_OWORD *)&v195[80] = *(_OWORD *)&v169[80];
      *(_OWORD *)&v195[64] = *(_OWORD *)&v169[64];
      *(_OWORD *)&v195[48] = *(_OWORD *)&v169[48];
      *(_OWORD *)&v195[32] = *(_OWORD *)&v169[32];
      *(_OWORD *)&v195[16] = *(_OWORD *)&v169[16];
      *(_OWORD *)v195 = *(_OWORD *)v169;
      v200 = v159;
      v199 = v158;
      v198 = v157;
      v197 = v156;
      v196 = v155;
      *(_OWORD *)&v195[96] = v154;
      if ( *(_QWORD *)v169 == -1 )
        break;
      v165 = *(_QWORD *)v195;
      if ( *(_QWORD *)&v195[96] != -1 )
      {
        v188 = *(_OWORD *)&v169[80];
        v187 = *(_OWORD *)&v169[64];
        v186 = *(_OWORD *)&v169[48];
        v185 = *(_OWORD *)&v169[32];
        v184 = *(_OWORD *)&v169[16];
        v183 = *(_OWORD *)v169;
        v208 = v159;
        v207 = v158;
        *(_OWORD *)&v206[32] = v157;
        *(_OWORD *)&v206[16] = v156;
        *(_OWORD *)v206 = v155;
        v205 = v154;
        *(_QWORD *)v212 = &v183;
        *(_QWORD *)&v212[8] = sub_14104A7D0;
        *(_QWORD *)&v212[16] = &v205;
        *(_QWORD *)&v212[24] = sub_14104A7D0;
        sub_1416ABFD0(&v190, &unk_141A3A21C, v212);
        *(_OWORD *)&v212[8] = v190;
        *(_QWORD *)&v212[24] = v191;
        *(_QWORD *)v212 = 10;
        v192.m256i_i64[0] = 0;
        *(_OWORD *)&v192.m256i_u64[1] = 1u;
        v201.m256i_i64[2] = 1610612768;
        v201.m256i_i64[0] = (__int64)&v192;
        v201.m256i_i64[1] = (__int64)&off_141A3FE88;
        if ( (unsigned __int8)sub_14104A7D0(v212, &v201) )
          sub_141939040(
            (unsigned int)aADisplayImplem_7,
            55,
            (unsigned int)&v228,
            (unsigned int)&unk_141A3BB68,
            (__int64)&off_141A3FF40);
        v215 = v192.m256i_i64[1];
        v221 = v192.m256i_i64[0];
        sub_140C75030(a2, (__int128 *)v232);
        if ( v221 )
          sub_140001660(v215, v221, 1);
        v201.m256i_i64[0] = (__int64)&v231;
        v201.m256i_i64[1] = (__int64)sub_1416B9630;
        v201.m256i_i64[2] = (__int64)v212;
        v201.m256i_i64[3] = (__int64)sub_14104A7D0;
        sub_1416ABFD0(&v192, &unk_141A3A180, &v201);
        sub_140BBE8E0(v232, (int)aReconcileFaile, 16, &v192);
        a1[5] = *(_OWORD *)&v213[32];
        a1[4] = *(_OWORD *)&v213[16];
        v83 = *(_OWORD *)v212;
        v84 = *(_OWORD *)&v212[16];
        v85 = *(_OWORD *)&v212[32];
        a1[3] = *(_OWORD *)v213;
        a1[2] = v85;
        a1[1] = v84;
        *a1 = v83;
        v86 = v231;
        *((_BYTE *)a1 + 96) = 2;
        *((_BYTE *)a1 + 97) = v86;
        sub_140BAC840(&v205);
        sub_140BAC840(&v183);
        return a1;
      }
      v208 = *(_OWORD *)&v169[80];
      v207 = *(_OWORD *)&v169[64];
      *(_OWORD *)&v206[32] = *(_OWORD *)&v169[48];
      *(_OWORD *)&v206[16] = *(_OWORD *)&v169[32];
      *(_OWORD *)v206 = *(_OWORD *)&v169[16];
      v205 = *(_OWORD *)v169;
      v36 = *(_DWORD *)&v195[104];
      v37 = v195[108];
      v38 = sub_14167FC00(*(_QWORD *)v169, v33, v34, v35);
      if ( v219 )
        goto LABEL_104;
      if ( v36 )
      {
        if ( v231 > 2u )
          goto LABEL_104;
      }
      else if ( v231 > 2u || !v37 )
      {
        goto LABEL_104;
      }
      if ( (_DWORD)v221 == -1 )
      {
        v172 = sub_1416A1240(v38, v39, 12, 0, (__int64)&off_141A3EA90);
        LODWORD(v221) = v57;
      }
      else
      {
        v55 = v39 < (unsigned int)v221;
        v56 = v38 < v172;
        if ( v38 == v172 )
          v56 = v55;
        if ( !v56 )
        {
LABEL_104:
          *(_QWORD *)&v183 = 0;
          *((_QWORD *)&v183 + 1) = 1;
          *(_QWORD *)&v184 = 0;
          *(_QWORD *)&v212[16] = 1610612768;
          *(_QWORD *)v212 = &v183;
          *(_QWORD *)&v212[8] = &off_141A3FE88;
          if ( (unsigned __int8)sub_14104A7D0(&v205, v212) )
            sub_141939040(
              (unsigned int)aADisplayImplem_7,
              55,
              (unsigned int)&v228,
              (unsigned int)&unk_141A3BB68,
              (__int64)&off_141A3FF40);
          v215 = *((_QWORD *)&v183 + 1);
          v221 = v183;
          sub_140C75030(a2, (__int128 *)v232);
          if ( v221 )
            sub_140001660(v215, v221, 1);
          *(_QWORD *)v212 = &v231;
          *(_QWORD *)&v212[8] = sub_1416B9630;
          *(_QWORD *)&v212[16] = &v205;
          *(_QWORD *)&v212[24] = sub_14104A7D0;
          sub_1416ABFD0(&v201, &unk_141A3A180, v212);
          LOBYTE(v190) = v232;
          v221 = v201.m256i_i64[1];
          *(_OWORD *)v192.m256i_i8 = *(_OWORD *)&v201.m256i_u64[1];
          *(_QWORD *)v212 = &v190;
          *(_QWORD *)&v212[8] = sub_140C98D50;
          *(_QWORD *)&v212[16] = &v192;
          *(_QWORD *)&v212[24] = sub_140186EE0;
          sub_1416ABFD0(&v183, &unk_141A39D2E, v212);
          sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aReconcileFaile, 16, (__int64)&v183);
          if ( v201.m256i_i64[0] )
            sub_140001660(v221, v201.m256i_i64[0], 1);
          a1[5] = v208;
          a1[4] = v207;
          v69 = v205;
          v70 = *(_OWORD *)v206;
          v71 = *(_OWORD *)&v206[16];
          a1[3] = *(_OWORD *)&v206[32];
          a1[2] = v71;
          a1[1] = v70;
          *a1 = v69;
          v72 = v231;
          *((_BYTE *)a1 + 96) = 2;
LABEL_120:
          *((_BYTE *)a1 + 97) = v72;
          return a1;
        }
      }
      *(_QWORD *)&v183 = 0;
      *((_QWORD *)&v183 + 1) = 1;
      *(_QWORD *)&v184 = 0;
      *(_QWORD *)&v212[16] = 1610612768;
      *(_QWORD *)v212 = &v183;
      *(_QWORD *)&v212[8] = &off_141A3FE88;
      if ( (unsigned __int8)sub_14104A7D0(&v205, v212) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v228,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v201.m256i_i64[2] = v184;
      *(_OWORD *)v201.m256i_i8 = v183;
      v19 = v221;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)&v183 = &v232;
        *((_QWORD *)&v183 + 1) = sub_140C98D50;
        *(_QWORD *)&v184 = &v231;
        *((_QWORD *)&v184 + 1) = sub_1416B9630;
        *(_QWORD *)&v185 = &v201;
        *((_QWORD *)&v185 + 1) = sub_1400015F0;
        *(_QWORD *)v213 = 2;
        *(_QWORD *)&v213[8] = aCodexmateLibCo_31;
        *(_QWORD *)&v213[16] = 45;
        *(_QWORD *)&v213[32] = &unk_141A3A1B1;
        *(_QWORD *)&v213[40] = &v183;
        *(_QWORD *)v212 = 0;
        *(_QWORD *)&v212[8] = aCodexmateLibCo_31;
        *(_OWORD *)&v212[16] = 0x2Du;
        *(_QWORD *)&v212[32] = aSrcCoreRelayRo_0;
        *(_QWORD *)&v212[40] = 35;
        *(_QWORD *)&v213[24] = 0x12E00000001LL;
        sub_1414D53A0(&v228, v212);
      }
      sub_140C75030(a2, (__int128 *)v232);
      *(_QWORD *)v212 = &v231;
      *(_QWORD *)&v212[8] = sub_1416B9630;
      *(_QWORD *)&v212[16] = &v201;
      *(_QWORD *)&v212[24] = sub_1400015F0;
      sub_1416ABFD0(&v139, &unk_141A3A180, v212);
      LOBYTE(v190) = v232;
      v204 = v140;
      *(_OWORD *)v192.m256i_i8 = v140;
      *(_QWORD *)v212 = &v190;
      *(_QWORD *)&v212[8] = sub_140C98D50;
      *(_QWORD *)&v212[16] = &v192;
      *(_QWORD *)&v212[24] = sub_140186EE0;
      sub_1416ABFD0(&v183, &unk_141A39D2E, v212);
      sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aReconcileRetry, 15, (__int64)&v183);
      if ( v139 )
        sub_140001660(v204, v139, 1);
      if ( v201.m256i_i64[0] )
        sub_140001660(v201.m256i_i64[1], v201.m256i_i64[0], 1);
      sub_140BAC840(&v205);
      v20 = v175;
      v21 = v215;
    }
    if ( *(_QWORD *)&v195[96] != -1 )
    {
      v165 = *(_QWORD *)v195;
      *(_OWORD *)&v213[32] = v159;
      *(_OWORD *)&v213[16] = v158;
      *(_OWORD *)v213 = v157;
      *(_OWORD *)&v212[32] = v156;
      *(_OWORD *)&v212[16] = v155;
      *(_OWORD *)v212 = v154;
      *(_QWORD *)&v183 = 0;
      *((_QWORD *)&v183 + 1) = 1;
      *(_QWORD *)&v184 = 0;
      *(_QWORD *)v206 = 1610612768;
      *(_QWORD *)&v205 = &v183;
      *((_QWORD *)&v205 + 1) = &off_141A3FE88;
      if ( (unsigned __int8)sub_14104A7D0(v212, &v205) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v228,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v215 = *((_QWORD *)&v183 + 1);
      v221 = v183;
      sub_140C75030(a2, (__int128 *)v232);
      if ( v221 )
        sub_140001660(v215, v221, 1);
      *(_QWORD *)&v205 = &v231;
      *((_QWORD *)&v205 + 1) = sub_1416B9630;
      *(_QWORD *)v206 = v212;
      *(_QWORD *)&v206[8] = sub_14104A7D0;
      sub_1416ABFD0(&v183, &unk_141A3A180, &v205);
      sub_140BBE8E0(v232, (int)aSettleFailed, 13, &v183);
      a1[5] = *(_OWORD *)&v213[32];
      a1[4] = *(_OWORD *)&v213[16];
      v91 = *(_OWORD *)v212;
      v92 = *(_OWORD *)&v212[16];
      v93 = *(_OWORD *)&v212[32];
      a1[3] = *(_OWORD *)v213;
      a1[2] = v93;
      a1[1] = v92;
      *a1 = v91;
      v94 = v231;
      *((_BYTE *)a1 + 96) = 3;
      *((_BYTE *)a1 + 97) = v94;
      sub_140BAD350(&v195[8]);
      sub_1403FAE40(&v195[72]);
      v95 = *(_QWORD *)&v195[72];
      if ( *(_QWORD *)&v195[72] )
      {
        v96 = *(_QWORD *)&v195[80];
        goto LABEL_150;
      }
      return a1;
    }
    *(_QWORD *)&v188 = *(_QWORD *)&v169[88];
    v187 = *(_OWORD *)&v169[72];
    v186 = *(_OWORD *)&v169[56];
    v185 = *(_OWORD *)&v169[40];
    v184 = *(_OWORD *)&v169[24];
    v183 = *(_OWORD *)&v169[8];
    v181 = *(_DWORD *)&v195[104];
    v182 = v195[108];
    v218 = 1;
    v217 = 1;
    sub_140D8FC20((unsigned int)&v178, v153, a8, 0, (*(_DWORD *)&v195[104] == 0) & (v195[108] ^ 1));
    v44 = v180;
    if ( !v180 )
    {
      if ( (v181 || (v182 & 1) != 0) && *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)v195 = &v232;
        *(_QWORD *)&v195[8] = sub_140C98D50;
        *(_QWORD *)&v195[16] = &v231;
        *(_QWORD *)&v195[24] = sub_1416B9630;
        *(_QWORD *)&v195[32] = &v181;
        *(_QWORD *)&v195[40] = sub_1416BBD00;
        *(_QWORD *)&v195[48] = &v182;
        *(_QWORD *)&v195[56] = sub_1416BCC50;
        *(_QWORD *)v212 = aCodexmateLibCo_31;
        *(_QWORD *)&v212[8] = 45;
        *(_QWORD *)&v212[16] = aCodexmateLibCo_31;
        *(_QWORD *)&v212[24] = 45;
        *(_QWORD *)&v212[32] = &off_141A3A078;
        v223 = 1;
        v222 = 1;
        sub_140BAD520(&unk_141A3A000, v195, 2, v212);
      }
      *(_QWORD *)&v208 = v188;
      v207 = v187;
      *(_OWORD *)&v206[32] = v186;
      *(_OWORD *)&v206[16] = v185;
      *(_OWORD *)v206 = v184;
      v205 = v183;
      LOBYTE(v30) = v232;
      v97 = v189;
      v173 = v189;
      v230 = 1;
      v229 = 1;
      v176 = sub_14167FC00(v41, v40, v42, v43);
      v177 = v98;
      v230 = 1;
      v229 = 1;
      sub_1410255B0((unsigned int)v195, (_DWORD)v209, v30, v97, *((__int64 *)&v97 + 1));
      if ( *(_DWORD *)v195 == -1 )
      {
        v201.m256i_i64[0] = (__int64)&v205;
        *(_OWORD *)&v201.m256i_u64[1] = v138;
        v107 = *a10;
        v230 = 1;
        v229 = 1;
        sub_140D883F0((unsigned int)v212, a9, (unsigned int)&v205, v107, (__int64)&v201.m256i_i64[1]);
        if ( *(_QWORD *)v212 == -1 )
        {
          v230 = 1;
          v229 = 1;
          v118 = sub_1401BD880(*(_QWORD *)&v212[8]);
          v121 = v118;
          if ( v118 )
          {
            v145 = v118;
            v122 = v118 & 3;
            switch ( v118 & 3 )
            {
              case 0uLL:
                LOBYTE(v118) = *(_BYTE *)(v118 + 16);
                break;
              case 1uLL:
                LOBYTE(v118) = *(_BYTE *)(v118 + 31);
                break;
              case 2uLL:
                v220 = 1;
                v125 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v120, v119) + 8);
                v220 = 1;
                LOBYTE(v118) = v125(HIDWORD(v121));
                break;
              case 3uLL:
                v118 >>= 32;
                break;
            }
            v212[0] = v118;
            *(_QWORD *)v195 = v212;
            *(_QWORD *)&v195[8] = sub_140C9E0F0;
            v220 = 1;
            sub_1416ABFD0(v168, &unk_141A39D4C, v195);
            v220 = 1;
            sub_140BBE8E0(v30, (int)aCommitSyncUnco, 23, v168);
            v126 = *((_QWORD *)v209 + 97);
            v127 = *((_QWORD *)v209 + 98);
            v220 = 1;
            sub_1410237A0(
              v126,
              v127,
              v30,
              (unsigned int)&unk_141A6FF17,
              23,
              v173,
              *((__int64 *)&v173 + 1),
              (__int64)&unk_141A702FA,
              28);
            v191 = v208;
            v190 = v207;
            sub_141026E80(v195);
            v201.m256i_i64[0] = 0;
            *(_OWORD *)&v201.m256i_u64[1] = 1u;
            *(_QWORD *)&v212[16] = 1610612768;
            *(_QWORD *)v212 = &v201;
            *(_QWORD *)&v212[8] = &off_141A3FE88;
            if ( (unsigned __int8)sub_14104A7D0(v195, v212) )
              sub_141939040(
                (unsigned int)aADisplayImplem_7,
                55,
                (unsigned int)&v228,
                (unsigned int)&unk_141A3BB68,
                (__int64)&off_141A3FF40);
            v209 = (__int128 *)v201.m256i_i64[1];
            v221 = v201.m256i_i64[0];
            v128 = v201.m256i_i64[2];
            v129 = v191;
            if ( v191 == (_QWORD)v190 )
              sub_14190FDC0(&v190);
            v130 = *((_QWORD *)&v190 + 1);
            v131 = 3 * v129;
            *(_QWORD *)(*((_QWORD *)&v190 + 1) + 8 * v131) = v221;
            *(_QWORD *)(v130 + 8 * v131 + 8) = v209;
            *(_QWORD *)(v130 + 8 * v131 + 16) = v128;
            v191 = v129 + 1;
            sub_140BAC840(v195);
            *(_OWORD *)v192.m256i_i8 = v205;
            *(_OWORD *)&v192.m256i_u64[2] = *(_OWORD *)v206;
            v193 = *(_OWORD *)&v206[16];
            v194 = *(_OWORD *)&v206[32];
            v110 = *((_OWORD **)&v190 + 1);
            v108 = v190;
            v111 = v191;
            if ( (unsigned int)(v122 - 2) >= 2 && (v121 & 3) != 0 )
            {
              *(_QWORD *)&v195[8] = v121 - 1;
              v195[0] = 3;
              v230 = 0;
              v229 = 0;
              sub_1416BCB00(&v195[8]);
            }
            v109 = 2;
            goto LABEL_182;
          }
          if ( (_QWORD)v208 )
          {
            v230 = 1;
            v229 = 1;
            sub_140D1EE10((unsigned int)v195, DWORD2(v207), v208, (unsigned int)&unk_141A39BD6, 3);
            v215 = *(_QWORD *)&v195[8];
            v221 = *(_QWORD *)v195;
            sub_141026C20(
              (unsigned int)v212,
              (_DWORD)v209,
              v30,
              v173,
              *((__int64 *)&v173 + 1),
              *(__int64 *)&v195[8],
              *(__int64 *)&v195[16]);
            if ( *(_DWORD *)v212 != -1 )
            {
              *(_OWORD *)&v195[80] = *(_OWORD *)&v213[32];
              *(_OWORD *)&v195[64] = *(_OWORD *)&v213[16];
              *(_OWORD *)&v195[48] = *(_OWORD *)v213;
              *(_OWORD *)&v195[32] = *(_OWORD *)&v212[32];
              *(_OWORD *)&v195[16] = *(_OWORD *)&v212[16];
              *(_OWORD *)v195 = *(_OWORD *)v212;
              if ( *(_QWORD *)off_1421E6EC0 >= 2u )
              {
                v192.m256i_i64[0] = (__int64)v195;
                v192.m256i_i64[1] = (__int64)sub_14104A7D0;
                v201.m256i_i64[0] = (__int64)aCodexmateLibCo_31;
                v201.m256i_i64[1] = 45;
                v201.m256i_i64[2] = (__int64)aCodexmateLibCo_31;
                v201.m256i_i64[3] = 45;
                *(_QWORD *)&v202 = &off_141A39EC0;
                sub_140BAD520(&unk_141A39E7E, &v192, 2, &v201);
              }
              sub_140BAC840(v195);
            }
            if ( v221 )
              sub_140001660(v215, v221, 1);
            v230 = 1;
            v229 = 1;
            v123 = sub_14167FD50(&v176);
            *(_OWORD *)v212 = 0x3E8 * (unsigned __int128)(unsigned __int64)v123 + v124 / 0xF4240uLL;
            v201.m256i_i64[0] = v208;
            *(_QWORD *)v195 = &v173;
            *(_QWORD *)&v195[8] = sub_140186EE0;
            *(_QWORD *)&v195[16] = v212;
            *(_QWORD *)&v195[24] = sub_1416B95D0;
            *(_QWORD *)&v195[32] = &v201;
            *(_QWORD *)&v195[40] = sub_1416BCB10;
            v230 = 1;
            v229 = 1;
            sub_1416ABFD0(v167, &unk_141A39ED8, v195);
            v230 = 1;
            v229 = 1;
            sub_140BBE8E0(v30, (int)aDegraded, 8, v167);
            v194 = *(_OWORD *)&v206[32];
            v193 = *(_OWORD *)&v206[16];
            *(_OWORD *)&v192.m256i_u64[2] = *(_OWORD *)v206;
            *(_OWORD *)v192.m256i_i8 = v205;
            v110 = *((_OWORD **)&v207 + 1);
            v108 = v207;
            v109 = 1;
            v111 = v208;
            goto LABEL_182;
          }
          v230 = 1;
          v229 = 1;
          sub_141022500(v212, v209, v30);
          if ( *(_DWORD *)v212 == -1 )
          {
            v230 = 1;
            v229 = 1;
            v136 = sub_14167FD50(&v176);
            *(_OWORD *)v212 = 0x3E8 * (unsigned __int128)(unsigned __int64)v136 + v137 / 0xF4240uLL;
            *(_QWORD *)v195 = &v173;
            *(_QWORD *)&v195[8] = sub_140186EE0;
            *(_QWORD *)&v195[16] = v212;
            *(_QWORD *)&v195[24] = sub_1416B95D0;
            v230 = 1;
            v229 = 1;
            sub_1416ABFD0(v166, &unk_141A39E59, v195);
            v230 = 1;
            v229 = 1;
            sub_140BBE8E0(v30, (int)aStable, 6, v166);
            v110 = *((_OWORD **)&v205 + 1);
            v108 = v205;
            v111 = *(_QWORD *)v206;
            v192 = *(__m256i *)&v206[8];
            *(_QWORD *)&v193 = *(_QWORD *)&v206[40];
            sub_140025530(&v207);
            v109 = 0;
            goto LABEL_182;
          }
          *(_OWORD *)&v195[80] = *(_OWORD *)&v213[32];
          *(_OWORD *)&v195[64] = *(_OWORD *)&v213[16];
          *(_OWORD *)&v195[48] = *(_OWORD *)v213;
          *(_OWORD *)&v195[32] = *(_OWORD *)&v212[32];
          *(_OWORD *)&v195[16] = *(_OWORD *)&v212[16];
          *(_OWORD *)v195 = *(_OWORD *)v212;
          if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          {
            v192.m256i_i64[0] = (__int64)v195;
            v192.m256i_i64[1] = (__int64)sub_14104A7D0;
            v201.m256i_i64[0] = (__int64)aCodexmateLibCo_31;
            v201.m256i_i64[1] = 45;
            v201.m256i_i64[2] = (__int64)aCodexmateLibCo_31;
            v201.m256i_i64[3] = 45;
            *(_QWORD *)&v202 = &off_141A39DD8;
            v214 = 1;
            sub_140BAD520(&unk_141A39D6B, &v192, 2, &v201);
          }
          v203 = *(_OWORD *)&v206[32];
          v202 = *(_OWORD *)&v206[16];
          *(_OWORD *)&v201.m256i_u64[2] = *(_OWORD *)v206;
          *(_OWORD *)v201.m256i_i8 = v205;
          v221 = sub_140C23890(24);
          v192.m256i_i64[0] = (__int64)v195;
          v192.m256i_i64[1] = (__int64)sub_14104A7D0;
          sub_1416ABFD0(&v170, &unk_141A39E1D, &v192);
          v110 = (_OWORD *)v221;
          *(_QWORD *)(v221 + 16) = v171;
          *v110 = v170;
          v192 = v201;
          v193 = v202;
          v194 = v203;
          v230 = 0;
          v229 = 1;
          sub_140BAC840(v195);
          v108 = 1;
          v112 = 0;
          v111 = 1;
          v109 = 1;
LABEL_156:
          sub_1403FAE40(&v207);
          if ( (_QWORD)v207 )
            sub_140001660(*((_QWORD *)&v207 + 1), 24 * v207, 8);
          if ( v112 )
          {
            v113 = *(_OWORD *)v192.m256i_i8;
            v114 = *(_OWORD *)&v192.m256i_u64[2];
            v115 = v193;
            v116 = v174;
            v174[5] = v194;
            v116[4] = v115;
            v116[3] = v114;
            v116[2] = v113;
            v117 = v231;
            *(_QWORD *)v116 = v109;
            *((_QWORD *)v116 + 1) = v108;
            *((_QWORD *)v116 + 2) = v110;
            *((_QWORD *)v116 + 3) = v111;
            a1 = v116;
            *((_BYTE *)v116 + 96) = 5;
            *((_BYTE *)v116 + 97) = v117;
LABEL_183:
            sub_1403FAC20(&v178);
            if ( !v178 )
              return a1;
            v96 = v179;
            v106 = 32 * v178;
            goto LABEL_185;
          }
LABEL_182:
          v132 = *(_OWORD *)v192.m256i_i8;
          v133 = *(_OWORD *)&v192.m256i_u64[2];
          v134 = v193;
          v135 = v174;
          *(__int128 *)((char *)v174 + 88) = v194;
          *(__int128 *)((char *)v135 + 72) = v134;
          *(__int128 *)((char *)v135 + 56) = v133;
          *(__int128 *)((char *)v135 + 40) = v132;
          *((_QWORD *)v135 + 1) = v109;
          *((_QWORD *)v135 + 2) = v108;
          *((_QWORD *)v135 + 3) = v110;
          *((_QWORD *)v135 + 4) = v111;
          a1 = v135;
          *(_QWORD *)v135 = -1;
          goto LABEL_183;
        }
      }
      else
      {
        *(_OWORD *)&v213[32] = *(_OWORD *)&v195[80];
        *(_OWORD *)&v213[16] = *(_OWORD *)&v195[64];
        *(_OWORD *)v213 = *(_OWORD *)&v195[48];
        *(_OWORD *)&v212[32] = *(_OWORD *)&v195[32];
        *(_OWORD *)&v212[16] = *(_OWORD *)&v195[16];
        *(_OWORD *)v212 = *(_OWORD *)v195;
      }
      *(_OWORD *)&v195[80] = *(_OWORD *)&v213[32];
      *(_OWORD *)&v195[64] = *(_OWORD *)&v213[16];
      *(_OWORD *)&v195[48] = *(_OWORD *)v213;
      *(_OWORD *)&v195[32] = *(_OWORD *)&v212[32];
      *(_OWORD *)&v195[16] = *(_OWORD *)&v212[16];
      *(_OWORD *)v195 = *(_OWORD *)v212;
      v192.m256i_i64[0] = 0;
      *(_OWORD *)&v192.m256i_u64[1] = 1u;
      v201.m256i_i64[2] = 1610612768;
      v201.m256i_i64[0] = (__int64)&v192;
      v201.m256i_i64[1] = (__int64)&off_141A3FE88;
      if ( (unsigned __int8)sub_14104A7D0(v195, &v201) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v228,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v215 = v192.m256i_i64[1];
      v221 = v192.m256i_i64[0];
      sub_140C75030(v209, (__int128 *)v30);
      if ( v221 )
        sub_140001660(v215, v221, 1);
      v201.m256i_i64[0] = (__int64)&v173;
      v201.m256i_i64[1] = (__int64)sub_140186EE0;
      v201.m256i_i64[2] = (__int64)v195;
      v201.m256i_i64[3] = (__int64)sub_14104A7D0;
      sub_1416ABFD0(&v190, &unk_141A39F29, &v201);
      sub_140BBE8E0(v30, (int)aCommitFailed, 13, &v190);
      v108 = *(_QWORD *)&v195[8];
      v109 = *(_QWORD *)v195;
      v111 = *(_QWORD *)&v195[24];
      v110 = *(_OWORD **)&v195[16];
      v192 = *(__m256i *)&v195[32];
      v193 = *(_OWORD *)&v195[64];
      v194 = *(_OWORD *)&v195[80];
      sub_140BAD350(&v205);
      v112 = 1;
      goto LABEL_156;
    }
    v223 = 1;
    v222 = 1;
    v204 = v179;
    sub_1403EBE40(v212, v179, v179 + 32 * v180);
    v45 = *(_QWORD *)&v212[8];
    v46 = *(_QWORD *)&v212[16];
    sub_140D1EE10((unsigned int)v195, *(_DWORD *)&v212[8], *(_DWORD *)&v212[16], (unsigned int)&unk_141A39BD6, 3);
    v192.m256i_i64[2] = *(_QWORD *)&v195[16];
    *(_OWORD *)v192.m256i_i8 = *(_OWORD *)v195;
    if ( v46 )
    {
      v51 = (_QWORD *)(v45 + 8);
      do
      {
        v47 = *(v51 - 1);
        if ( v47 )
          sub_140001660(*v51, v47, 1);
        v51 += 3;
        --v46;
      }
      while ( v46 );
    }
    if ( *(_QWORD *)v212 )
      sub_140001660(v45, 24LL * *(_QWORD *)v212, 8);
    v226 = 1;
    v225 = 1;
    v52 = sub_14167FC00(v48, v47, v49, v50);
    v54 = v221;
    if ( v219 )
    {
      v201.m256i_i64[2] = *(_QWORD *)&v169[88];
      *(_OWORD *)v201.m256i_i8 = *(_OWORD *)&v169[72];
      *(_QWORD *)v195 = &v192;
      *(_QWORD *)&v195[8] = sub_1400015F0;
      v216 = 1;
      sub_1416ABFD0(&v205, &unk_141A3A0DE, v195);
      v216 = 1;
      sub_1401F4600(&v201, &v205);
      *(_OWORD *)v213 = *(_OWORD *)&v169[56];
      *(_OWORD *)&v212[32] = *(_OWORD *)&v169[40];
      *(_OWORD *)&v212[16] = *(_OWORD *)&v169[24];
      *(_OWORD *)v212 = *(_OWORD *)&v169[8];
      *(_OWORD *)&v213[16] = *(_OWORD *)v201.m256i_i8;
      *(_QWORD *)&v213[32] = v201.m256i_i64[2];
      v216 = 0;
      sub_140BBFA40((__int64)v195, (__int64)v209, v232, v189, *((__int64 *)&v189 + 1), (__int128 *)v212, a9, a10, &v138);
      if ( v195[0] )
      {
        a1[5] = *(_OWORD *)&v195[88];
        a1[4] = *(_OWORD *)&v195[72];
        v99 = *(_OWORD *)&v195[8];
        v100 = *(_OWORD *)&v195[24];
        v101 = *(_OWORD *)&v195[40];
        a1[3] = *(_OWORD *)&v195[56];
        a1[2] = v101;
        a1[1] = v100;
        *a1 = v99;
        v102 = v231;
        *((_BYTE *)a1 + 96) = 5;
        *((_BYTE *)a1 + 97) = v102;
      }
      else
      {
        *(__int128 *)((char *)a1 + 88) = *(_OWORD *)&v195[88];
        *(__int128 *)((char *)a1 + 72) = *(_OWORD *)&v195[72];
        v103 = *(_OWORD *)&v195[8];
        v104 = *(_OWORD *)&v195[24];
        v105 = *(_OWORD *)&v195[40];
        *(__int128 *)((char *)a1 + 56) = *(_OWORD *)&v195[56];
        *(__int128 *)((char *)a1 + 40) = v105;
        *(__int128 *)((char *)a1 + 24) = v104;
        *(__int128 *)((char *)a1 + 8) = v103;
        *(_QWORD *)a1 = -1;
      }
      LODWORD(v221) = 0;
      goto LABEL_143;
    }
    if ( v181 )
    {
      if ( v231 > 2u )
        break;
    }
    else if ( v231 > 2u || (v182 & 1) == 0 )
    {
      break;
    }
    if ( (_DWORD)v221 == -1 )
    {
      v226 = 1;
      v225 = 1;
      v172 = sub_1416A1240(v52, v53, 12, 0, (__int64)&off_141A3EA90);
      v54 = v60;
      if ( *(_QWORD *)off_1421E6EC0 < 2u )
        goto LABEL_81;
LABEL_80:
      *(_QWORD *)v212 = &v232;
      *(_QWORD *)&v212[8] = sub_140C98D50;
      *(_QWORD *)&v212[16] = &v231;
      *(_QWORD *)&v212[24] = sub_1416B9630;
      *(_QWORD *)&v212[32] = &v192;
      *(_QWORD *)&v212[40] = sub_1400015F0;
      *(_QWORD *)&v195[48] = 2;
      *(_QWORD *)&v195[56] = aCodexmateLibCo_31;
      *(_QWORD *)&v195[64] = 45;
      *(_QWORD *)&v195[80] = &unk_141A3A11B;
      *(_QWORD *)&v195[88] = v212;
      *(_QWORD *)v195 = 0;
      *(_QWORD *)&v195[8] = aCodexmateLibCo_31;
      *(_OWORD *)&v195[16] = 0x2Du;
      *(_QWORD *)&v195[32] = aSrcCoreRelayRo_0;
      *(_QWORD *)&v195[40] = 35;
      *(_QWORD *)&v195[72] = 0x17D00000001LL;
      v226 = 1;
      v225 = 1;
      sub_1414D53A0(&v228, v195);
      goto LABEL_81;
    }
    v58 = v53 < (unsigned int)v221;
    v59 = v52 < v172;
    if ( v52 == v172 )
      v59 = v58;
    if ( !v59 )
      break;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      goto LABEL_80;
LABEL_81:
    v226 = 1;
    v225 = 1;
    sub_140C75030(v209, (__int128 *)v232);
    if ( v192.m256i_i64[0] )
      sub_140001660(v192.m256i_i64[1], v192.m256i_i64[0], 1);
    v61 = (_QWORD *)(v204 + 8);
    do
    {
      v62 = *(v61 - 1);
      if ( v62 )
        sub_140001660(*v61, v62, 1);
      v61 += 4;
      --v44;
    }
    while ( v44 );
    LODWORD(v221) = v54;
    if ( v178 )
      sub_140001660(v204, 32 * v178, 8);
    sub_140BAD350(&v183);
    v63 = *((_QWORD *)&v187 + 1);
    v64 = v188;
    a2 = v209;
    if ( (_QWORD)v188 )
    {
      v65 = (_QWORD *)(*((_QWORD *)&v187 + 1) + 8LL);
      do
      {
        v18 = *(v65 - 1);
        if ( v18 )
          sub_140001660(*v65, v18, 1);
        v65 += 3;
        --v64;
      }
      while ( v64 );
    }
    if ( (_QWORD)v187 )
      sub_140001660(v63, 24 * v187, 8);
    v20 = v175;
    v19 = v221;
    v21 = v215;
  }
  *(_QWORD *)v195 = &v232;
  *(_QWORD *)&v195[8] = sub_140C98D50;
  *(_QWORD *)&v195[16] = &v192;
  *(_QWORD *)&v195[24] = sub_1400015F0;
  v226 = 1;
  v225 = 1;
  sub_1416ABFD0(&v201, &unk_141A3A090, v195);
  *(_OWORD *)&v195[8] = *(_OWORD *)v201.m256i_i8;
  *(_QWORD *)&v195[24] = v201.m256i_i64[2];
  *(_QWORD *)v195 = 10;
  sub_140C9CF30(v212, v195);
  v221 = *(_QWORD *)&v212[8];
  sub_140C75030(v209, (__int128 *)v232);
  if ( *(_QWORD *)v212 )
    sub_140001660(v221, *(_QWORD *)v212, 1);
  *(_QWORD *)&v190 = v44;
  *(_QWORD *)v212 = &v231;
  *(_QWORD *)&v212[8] = sub_1416B9630;
  *(_QWORD *)&v212[16] = &v190;
  *(_QWORD *)&v212[24] = sub_1416BCB10;
  sub_1416ABFD0(&v205, &unk_141A3A0B1, v212);
  sub_140BBE8E0(v232, (int)aPostconditionF, 20, &v205);
  a1[5] = *(_OWORD *)&v195[80];
  a1[4] = *(_OWORD *)&v195[64];
  v87 = *(_OWORD *)v195;
  v88 = *(_OWORD *)&v195[16];
  v89 = *(_OWORD *)&v195[32];
  a1[3] = *(_OWORD *)&v195[48];
  a1[2] = v89;
  a1[1] = v88;
  *a1 = v87;
  v90 = v231;
  *((_BYTE *)a1 + 96) = 4;
  *((_BYTE *)a1 + 97) = v90;
  LOBYTE(v90) = 1;
  LODWORD(v221) = v90;
LABEL_143:
  if ( v192.m256i_i64[0] )
    sub_140001660(v192.m256i_i64[1], v192.m256i_i64[0], 1);
  sub_1403FAC20(&v178);
  if ( v178 )
    sub_140001660(v204, 32 * v178, 8);
  if ( (_BYTE)v221 )
  {
    sub_140BAD350(&v183);
    sub_1403FAE40(&v187);
    v95 = v187;
    if ( (_QWORD)v187 )
    {
      v96 = *((_QWORD *)&v187 + 1);
LABEL_150:
      v106 = 24 * v95;
LABEL_185:
      sub_140001660(v96, v106, 8);
    }
  }
  return a1;
}
