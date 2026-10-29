// win 1.2.7 | module src/core/relay/router_transition.rs | ea 0x140bd84f0 | name sub_140BD84F0
// win 1.2.7 | module src/core/relay/router_transition.rs | attributed via panic-Location xref (win-native)
__int128 *__fastcall sub_140BD84F0(
        __int128 *a1,
        __int128 *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __int128 a5,
        __int64 a6,
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
  char v19; // al
  __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // edx
  char v27; // di
  __int64 v28; // rax
  __int128 *v29; // rsi
  unsigned int v30; // edx
  _BYTE *v31; // rbx
  int v32; // edx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // edi
  char v37; // si
  unsigned __int64 v38; // rax
  unsigned int v39; // edx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdi
  __int64 v45; // r14
  __int64 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  _QWORD *v51; // rsi
  unsigned __int64 v52; // rax
  unsigned int v53; // edx
  __int128 *v54; // rsi
  __int64 v55; // r14
  bool v56; // cl
  bool v57; // dl
  unsigned int v58; // edx
  char v59; // al
  bool v60; // cl
  bool v61; // dl
  unsigned int v62; // edx
  _QWORD *v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // r14
  __int64 v66; // rdi
  _QWORD *v67; // rsi
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm2
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm2
  unsigned __int8 v74; // al
  _OWORD *v75; // rax
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int128 v78; // xmm2
  char v79; // al
  __int64 v80; // rax
  unsigned int v81; // edx
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm2
  __int128 v85; // xmm0
  __int128 v86; // xmm1
  __int128 v87; // xmm2
  unsigned __int8 v88; // al
  __int128 v89; // xmm0
  __int128 v90; // xmm1
  __int128 v91; // xmm2
  int v92; // eax
  __int128 v93; // xmm0
  __int128 v94; // xmm1
  __int128 v95; // xmm2
  unsigned __int8 v96; // al
  __int64 v97; // rax
  __int64 v98; // rcx
  __int128 v99; // krC0_16
  int v100; // edx
  __int128 v101; // xmm0
  __int128 v102; // xmm1
  __int128 v103; // xmm2
  unsigned __int8 v104; // al
  __int128 v105; // xmm0
  __int128 v106; // xmm1
  __int128 v107; // xmm2
  __int64 v108; // rdx
  int v109; // r9d
  __int64 v110; // rbx
  __int64 v111; // rdi
  __int128 *v112; // rsi
  __int64 v113; // r15
  char v114; // r14
  __int128 v115; // xmm0
  __int128 v116; // xmm1
  __int128 v117; // xmm2
  __int128 *v118; // rcx
  unsigned __int8 v119; // al
  unsigned __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  unsigned __int64 v123; // r14
  int v124; // edi
  __int128 *v125; // rsi
  __int64 v126; // rax
  unsigned int v127; // edx
  __int64 (__fastcall *v128)(unsigned __int64); // rax
  __int64 v129; // rcx
  __int64 v130; // rdx
  __int64 v131; // rbx
  __int64 v132; // rsi
  __int64 v133; // rax
  __int64 v134; // rcx
  __int128 v135; // xmm0
  __int128 v136; // xmm1
  __int128 v137; // xmm2
  __int128 *v138; // rax
  __int64 v139; // rax
  unsigned int v140; // edx
  __int64 v141; // [rsp+48h] [rbp-38h]
  __int64 v142; // [rsp+58h] [rbp-28h]
  __int128 v143; // [rsp+68h] [rbp-18h] BYREF
  __int64 v144; // [rsp+78h] [rbp-8h] BYREF
  __int128 v145; // [rsp+80h] [rbp+0h]
  __int64 v146; // [rsp+90h] [rbp+10h] BYREF
  unsigned __int128 v147; // [rsp+98h] [rbp+18h]
  __int64 v148; // [rsp+A8h] [rbp+28h] BYREF
  unsigned __int128 v149; // [rsp+B0h] [rbp+30h]
  unsigned __int64 v150; // [rsp+C0h] [rbp+40h]
  __int64 v151; // [rsp+C8h] [rbp+48h] BYREF
  int v152; // [rsp+D0h] [rbp+50h]
  __int64 v153; // [rsp+D8h] [rbp+58h]
  __int64 v154; // [rsp+E0h] [rbp+60h]
  __int64 v155; // [rsp+E8h] [rbp+68h]
  __int64 v156; // [rsp+F0h] [rbp+70h]
  unsigned __int128 v157; // [rsp+F8h] [rbp+78h] BYREF
  __int128 v158; // [rsp+108h] [rbp+88h]
  __int128 v159; // [rsp+118h] [rbp+98h]
  __int128 v160; // [rsp+128h] [rbp+A8h]
  __m256i v161; // [rsp+138h] [rbp+B8h]
  __int128 v162; // [rsp+158h] [rbp+D8h]
  __int128 v163; // [rsp+168h] [rbp+E8h]
  __int128 v164; // [rsp+178h] [rbp+F8h]
  __int64 v165; // [rsp+188h] [rbp+108h]
  __int64 v166; // [rsp+190h] [rbp+110h]
  _QWORD v167[3]; // [rsp+198h] [rbp+118h] BYREF
  _QWORD v168[3]; // [rsp+1B0h] [rbp+130h] BYREF
  _QWORD v169[3]; // [rsp+1C8h] [rbp+148h] BYREF
  _BYTE v170[96]; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v171; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v172; // [rsp+250h] [rbp+1D0h]
  unsigned __int64 v173; // [rsp+258h] [rbp+1D8h]
  __int128 v174; // [rsp+260h] [rbp+1E0h] BYREF
  __int64 v175; // [rsp+270h] [rbp+1F0h] BYREF
  int v176; // [rsp+278h] [rbp+1F8h]
  __int64 v177; // [rsp+280h] [rbp+200h] BYREF
  __int64 v178; // [rsp+288h] [rbp+208h]
  __int64 v179; // [rsp+290h] [rbp+210h]
  __int128 *v180; // [rsp+298h] [rbp+218h]
  unsigned __int128 v181; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v182; // [rsp+2B0h] [rbp+230h]
  __int128 v183; // [rsp+2C0h] [rbp+240h]
  __int128 v184; // [rsp+2D0h] [rbp+250h]
  __int128 v185; // [rsp+2E0h] [rbp+260h] BYREF
  __int128 v186; // [rsp+2F0h] [rbp+270h]
  int v187; // [rsp+308h] [rbp+288h] BYREF
  char v188; // [rsp+30Ch] [rbp+28Ch] BYREF
  __int128 v189; // [rsp+310h] [rbp+290h] BYREF
  _BYTE v190[112]; // [rsp+320h] [rbp+2A0h] BYREF
  __int128 v191; // [rsp+390h] [rbp+310h]
  __int128 v192; // [rsp+3A0h] [rbp+320h]
  __int128 v193; // [rsp+3B0h] [rbp+330h]
  __m256i v194; // [rsp+3C0h] [rbp+340h]
  unsigned int v195; // [rsp+3E4h] [rbp+364h]
  __int64 v196; // [rsp+3E8h] [rbp+368h]
  __int128 v197; // [rsp+3F0h] [rbp+370h] BYREF
  __int64 v198; // [rsp+400h] [rbp+380h]
  __m256i v199; // [rsp+410h] [rbp+390h] BYREF
  __int128 v200; // [rsp+430h] [rbp+3B0h]
  __int128 v201; // [rsp+440h] [rbp+3C0h]
  __m256i v202; // [rsp+450h] [rbp+3D0h] BYREF
  __int128 v203; // [rsp+470h] [rbp+3F0h]
  __int128 v204; // [rsp+480h] [rbp+400h]
  unsigned __int128 v205; // [rsp+490h] [rbp+410h] BYREF
  _BYTE v206[48]; // [rsp+4A0h] [rbp+420h]
  __m256i v207; // [rsp+4D0h] [rbp+450h] BYREF
  char v208; // [rsp+4FEh] [rbp+47Eh] BYREF
  unsigned __int8 v209; // [rsp+4FFh] [rbp+47Fh]
  _BYTE v210[48]; // [rsp+500h] [rbp+480h] BYREF
  __int128 v211; // [rsp+530h] [rbp+4B0h]
  __m256i v212; // [rsp+540h] [rbp+4C0h]
  char v213; // [rsp+56Fh] [rbp+4EFh]
  __int64 v214; // [rsp+570h] [rbp+4F0h]
  __int128 *v215; // [rsp+578h] [rbp+4F8h]
  char v216; // [rsp+584h] [rbp+504h]
  char v217; // [rsp+585h] [rbp+505h]
  char v218; // [rsp+586h] [rbp+506h]
  unsigned __int8 v219; // [rsp+587h] [rbp+507h] BYREF
  __int64 v220; // [rsp+588h] [rbp+508h]
  char v221; // [rsp+594h] [rbp+514h]
  char v222; // [rsp+595h] [rbp+515h]
  char v223; // [rsp+596h] [rbp+516h]
  char v224; // [rsp+597h] [rbp+517h]
  char v225; // [rsp+598h] [rbp+518h]
  char v226; // [rsp+599h] [rbp+519h]
  char v227; // [rsp+59Ah] [rbp+51Ah]
  char v228; // [rsp+59Bh] [rbp+51Bh] BYREF
  char v229; // [rsp+59Ch] [rbp+51Ch]
  char v230; // [rsp+59Dh] [rbp+51Dh]
  unsigned __int8 v231; // [rsp+59Eh] [rbp+51Eh] BYREF
  unsigned __int8 v232; // [rsp+59Fh] [rbp+51Fh] BYREF
  __int64 v233; // [rsp+5A0h] [rbp+520h]

  v233 = -2;
  v232 = a3;
  v219 = a4;
  v189 = a5;
  sub_1410257E0(v190);
  v13 = *(_OWORD *)&v190[32];
  v205 = *(_OWORD *)&v190[48];
  *(_OWORD *)v206 = *(_OWORD *)&v190[64];
  if ( *(_QWORD *)v190 != -1 )
  {
    *(_OWORD *)&v212.m256i_u64[2] = *(_OWORD *)&v190[80];
    *(_QWORD *)&v210[16] = *(_QWORD *)&v190[16];
    *(_OWORD *)&v210[24] = *(_OWORD *)&v190[24];
    *(_QWORD *)&v210[40] = *(_QWORD *)&v190[40];
    v211 = v205;
    *(_OWORD *)v212.m256i_i8 = *(_OWORD *)v206;
    *(_OWORD *)v210 = *(_OWORD *)v190;
LABEL_3:
    *((__m256i *)a1 + 2) = v212;
    v14 = *(_OWORD *)v210;
    v15 = *(_OWORD *)&v210[16];
    v16 = *(_OWORD *)&v210[32];
    a1[3] = v211;
    a1[2] = v16;
    a1[1] = v15;
    *a1 = v14;
LABEL_4:
    *((_WORD *)a1 + 48) = 0;
    return a1;
  }
  if ( *(_QWORD *)&v190[8] != -1 )
  {
    if ( *(_QWORD *)&v190[8] )
      sub_140001660(*(_QWORD *)&v190[16], *(_QWORD *)&v190[8], 1);
    if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(*((_QWORD *)&v13 + 1), v13, 1);
  }
  sub_14023D790((__int64)v190, (__int64)a2);
  if ( *(_DWORD *)v190 == -1 )
  {
    sub_140EFE1A0(v210);
    if ( *(_QWORD *)v210 != -1 )
      goto LABEL_3;
  }
  else
  {
    v212 = *(__m256i *)&v190[64];
    v211 = *(_OWORD *)&v190[48];
    *(_OWORD *)&v210[32] = *(_OWORD *)&v190[32];
    *(_OWORD *)&v210[16] = *(_OWORD *)&v190[16];
    *(_OWORD *)v210 = *(_OWORD *)v190;
    if ( *(_QWORD *)v190 != -1 )
      goto LABEL_3;
  }
  sub_141568C20(&v143);
  *(_QWORD *)v190 = &v219;
  *(_QWORD *)&v190[8] = sub_140C9DE00;
  *(_QWORD *)&v190[16] = &v189;
  *(_QWORD *)&v190[24] = sub_140186EE0;
  sub_1416ABFD0(&v148, &unk_141A39F10, v190);
  LOBYTE(v181) = v232;
  v220 = v149;
  v205 = v149;
  *(_QWORD *)v190 = &v181;
  *(_QWORD *)&v190[8] = sub_140C98D50;
  *(_QWORD *)&v190[16] = &v205;
  *(_QWORD *)&v190[24] = sub_140186EE0;
  sub_1416ABFD0(v210, &unk_141A39D2E, v190);
  sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStart_0, 5, (__int64)v210);
  if ( v148 )
    sub_140001660(v220, v148, 1);
  if ( !v219 )
  {
    sub_140267190((__int64 *)v210, (__int64)a2, 0);
    if ( *(_DWORD *)v210 != -1 )
    {
      *(__m256i *)&v190[64] = v212;
      *(_OWORD *)&v190[48] = v211;
      *(_OWORD *)&v190[32] = *(_OWORD *)&v210[32];
      *(_OWORD *)&v190[16] = *(_OWORD *)&v210[16];
      *(_OWORD *)v190 = *(_OWORD *)v210;
      *(_QWORD *)&v181 = 0;
      *((_QWORD *)&v181 + 1) = 1;
      *(_QWORD *)&v182 = 0;
      *(_QWORD *)v206 = 1610612768;
      *(_QWORD *)&v205 = &v181;
      *((_QWORD *)&v205 + 1) = &off_141A3FE88;
      if ( (unsigned __int8)sub_14104A7D0(v190, &v205) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v228,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v214 = *((_QWORD *)&v181 + 1);
      v220 = v181;
      sub_140C75030(a2, (__int128 *)v232);
      if ( v220 )
        sub_140001660(v214, v220, 1);
      *(_QWORD *)&v205 = &v189;
      *((_QWORD *)&v205 + 1) = sub_140186EE0;
      *(_QWORD *)v206 = v190;
      *(_QWORD *)&v206[8] = sub_14104A7D0;
      sub_1416ABFD0(&v157, &unk_141A39F29, &v205);
      v202.m256i_i8[0] = v232;
      v215 = *((__int128 **)&v157 + 1);
      *(_OWORD *)v170 = __PAIR128__(v158, *((unsigned __int64 *)&v157 + 1));
      *(_QWORD *)&v205 = &v202;
      *((_QWORD *)&v205 + 1) = sub_140C98D50;
      *(_QWORD *)v206 = v170;
      *(_QWORD *)&v206[8] = sub_140186EE0;
      sub_1416ABFD0(&v181, &unk_141A39D2E, &v205);
      sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aPreflightFaile, 16, (__int64)&v181);
      if ( (_QWORD)v157 )
        sub_140001660(v215, v157, 1);
      a1[5] = *(_OWORD *)&v190[80];
      a1[4] = *(_OWORD *)&v190[64];
      v68 = *(_OWORD *)v190;
      v69 = *(_OWORD *)&v190[16];
      v70 = *(_OWORD *)&v190[32];
      a1[3] = *(_OWORD *)&v190[48];
      a1[2] = v70;
      a1[1] = v69;
      *a1 = v68;
      goto LABEL_4;
    }
  }
  v209 = a4;
  v153 = 2LL * (a4 ^ 1u) + 3;
  v18 = *(_QWORD *)(a6 + 8);
  v154 = v18;
  v155 = *(_QWORD *)(a6 + 16);
  v156 = *(_QWORD *)(a7 + 24);
  v195 = -1;
  v19 = 1;
  v20 = 0;
  v180 = a1;
  v215 = a2;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (v20 & 1) != 0 || (unsigned __int8)v19 > 3u )
      {
        nullsub_1(v20);
        v75 = (_OWORD *)sub_140001650(109, 1);
        if ( !v75 )
          sub_141938D2B(1, 109);
        *(_OWORD *)((char *)v75 + 93) = *(__int128 *)((char *)&xmmword_141A39F8C + 13);
        v75[5] = xmmword_141A39F8C;
        v75[4] = xmmword_141A39F7C;
        v75[3] = xmmword_141A39F6C;
        v75[2] = xmmword_141A39F5C;
        qmemcpy(v75, "CODEX_TRANSITION_REENTRY_TIMEOUT", 32);
        *(_QWORD *)&v190[8] = 109;
        *(_QWORD *)&v190[16] = v75;
        *(_QWORD *)&v190[24] = 109;
        *(_QWORD *)v190 = 10;
        *(_QWORD *)&v205 = 0;
        *((_QWORD *)&v205 + 1) = 1;
        *(_QWORD *)v206 = 0;
        *(_QWORD *)&v210[16] = 1610612768;
        *(_QWORD *)v210 = &v205;
        *(_QWORD *)&v210[8] = &off_141A3FE88;
        if ( (unsigned __int8)sub_14104A7D0(v190, v210) )
          sub_141939040(
            (unsigned int)aADisplayImplem_7,
            55,
            (unsigned int)&v228,
            (unsigned int)&unk_141A3BB68,
            (__int64)&off_141A3FF40);
        v214 = *((_QWORD *)&v205 + 1);
        v220 = v205;
        sub_140C75030(a2, (__int128 *)v232);
        if ( v220 )
          sub_140001660(v214, v220, 1);
        *(_QWORD *)&v205 = 0;
        *((_QWORD *)&v205 + 1) = 1;
        *(_QWORD *)v206 = 0;
        *(_QWORD *)&v210[16] = 1610612768;
        *(_QWORD *)v210 = &v205;
        *(_QWORD *)&v210[8] = &off_141A3FE88;
        if ( (unsigned __int8)sub_14104A7D0(v190, v210) )
          sub_141939040(
            (unsigned int)aADisplayImplem_7,
            55,
            (unsigned int)&v228,
            (unsigned int)&unk_141A3BB68,
            (__int64)&off_141A3FF40);
        *(_QWORD *)&v182 = *(_QWORD *)v206;
        v181 = v205;
        sub_140BBE8E0(v232, (int)aRetryExhausted, 15, &v181);
        a1[5] = *(_OWORD *)&v190[80];
        a1[4] = *(_OWORD *)&v190[64];
        v76 = *(_OWORD *)v190;
        v77 = *(_OWORD *)&v190[16];
        v78 = *(_OWORD *)&v190[32];
        a1[3] = *(_OWORD *)&v190[48];
        a1[2] = v78;
        a1[1] = v77;
        *a1 = v76;
        *((_WORD *)a1 + 48) = 772;
        return a1;
      }
      LOBYTE(v18) = v19 == 3;
      LODWORD(v220) = v18;
      v21 = (unsigned __int8)(v19 + 1);
      if ( v19 == 3 )
        v21 = 3;
      LODWORD(v214) = v21;
      v231 = v19;
      sub_140C75030(a2, (__int128 *)v232);
      v151 = sub_14167FC00(v23, v22, v24, v25);
      v152 = v26;
      sub_140EC0AC0((unsigned int)v190, v153, 0, v209, 0);
      *(_DWORD *)((char *)&v205 + 3) = *(_DWORD *)&v190[12];
      LODWORD(v205) = *(_DWORD *)&v190[9];
      *(_DWORD *)((char *)&v181 + 3) = *(_DWORD *)&v190[20];
      LODWORD(v181) = *(_DWORD *)&v190[17];
      *(_DWORD *)((char *)&v157 + 3) = *(_DWORD *)&v190[28];
      LODWORD(v157) = *(_DWORD *)&v190[25];
      *(_DWORD *)v170 = *(_DWORD *)&v190[33];
      *(_DWORD *)&v170[3] = *(_DWORD *)&v190[36];
      *(__int32 *)((char *)v202.m256i_i32 + 3) = *(_DWORD *)&v190[44];
      v202.m256i_i32[0] = *(_DWORD *)&v190[41];
      *(__int32 *)((char *)v199.m256i_i32 + 3) = *(_DWORD *)&v190[52];
      v199.m256i_i32[0] = *(_DWORD *)&v190[49];
      v27 = v190[56];
      *(_DWORD *)((char *)&v162 + 3) = *(_DWORD *)&v190[60];
      LODWORD(v162) = *(_DWORD *)&v190[57];
      if ( *(_QWORD *)v190 != -1 )
      {
        LODWORD(v175) = *(_DWORD *)&v190[65];
        *(_DWORD *)((char *)&v175 + 3) = *(_DWORD *)&v190[68];
        v212.m256i_i64[3] = *(_QWORD *)&v190[88];
        *(_OWORD *)&v212.m256i_u64[1] = *(_OWORD *)&v190[72];
        *(_DWORD *)&v210[9] = v205;
        *(_DWORD *)&v210[12] = *(_DWORD *)((char *)&v205 + 3);
        LODWORD(v197) = v181;
        *(_DWORD *)((char *)&v197 + 3) = *(_DWORD *)((char *)&v181 + 3);
        *(_DWORD *)((char *)v167 + 3) = *(_DWORD *)((char *)&v157 + 3);
        LODWORD(v167[0]) = v157;
        *(_DWORD *)((char *)&v171 + 3) = *(_DWORD *)&v170[3];
        LODWORD(v171) = *(_DWORD *)v170;
        *(_DWORD *)((char *)v168 + 3) = *(__int32 *)((char *)v202.m256i_i32 + 3);
        LODWORD(v168[0]) = v202.m256i_i32[0];
        *(_DWORD *)((char *)v169 + 3) = *(__int32 *)((char *)v199.m256i_i32 + 3);
        LODWORD(v169[0]) = v199.m256i_i32[0];
        *(_DWORD *)((char *)&v177 + 3) = *(_DWORD *)((char *)&v162 + 3);
        LODWORD(v177) = v162;
        *(_QWORD *)v210 = *(_QWORD *)v190;
        v210[8] = v190[8];
        v210[16] = v190[16];
        *(_DWORD *)&v210[20] = *(_DWORD *)((char *)&v181 + 3);
        *(_DWORD *)&v210[17] = v197;
        v210[24] = v190[24];
        *(_DWORD *)&v210[28] = *(_DWORD *)((char *)v167 + 3);
        *(_DWORD *)&v210[25] = v157;
        v210[32] = v190[32];
        *(_DWORD *)&v210[36] = *(_DWORD *)((char *)&v171 + 3);
        *(_DWORD *)&v210[33] = *(_DWORD *)v170;
        v210[40] = v190[40];
        *(_DWORD *)&v210[44] = *(_DWORD *)((char *)v168 + 3);
        *(_DWORD *)&v210[41] = v202.m256i_i32[0];
        LOBYTE(v211) = v190[48];
        DWORD1(v211) = *(_DWORD *)((char *)v169 + 3);
        *(_DWORD *)((char *)&v211 + 1) = v199.m256i_i32[0];
        BYTE8(v211) = v190[56];
        HIDWORD(v211) = *(_DWORD *)((char *)&v177 + 3);
        *(_DWORD *)((char *)&v211 + 9) = v162;
        v212.m256i_i8[0] = v190[64];
        v212.m256i_i32[1] = *(_DWORD *)&v190[68];
        *(__int32 *)((char *)v212.m256i_i32 + 1) = v175;
        *(_QWORD *)&v205 = 0;
        *((_QWORD *)&v205 + 1) = 1;
        *(_QWORD *)v206 = 0;
        *(_QWORD *)&v190[16] = 1610612768;
        *(_QWORD *)v190 = &v205;
        *(_QWORD *)&v190[8] = &off_141A3FE88;
        v79 = sub_14104A7D0(v210, v190);
        a1 = v180;
        if ( v79 )
          sub_141939040(
            (unsigned int)aADisplayImplem_7,
            55,
            (unsigned int)&v228,
            (unsigned int)&unk_141A3BB68,
            (__int64)&off_141A3FF40);
        v214 = *((_QWORD *)&v205 + 1);
        v220 = v205;
        sub_140C75030(v215, (__int128 *)v232);
        if ( v220 )
          sub_140001660(v214, v220, 1);
        v80 = sub_14167FD50(&v151);
        v181 = 0x3E8 * (unsigned __int128)(unsigned __int64)v80 + v81 / 0xF4240uLL;
        *(_QWORD *)v190 = &v231;
        *(_QWORD *)&v190[8] = sub_1416B9630;
        *(_QWORD *)&v190[16] = &v181;
        *(_QWORD *)&v190[24] = sub_1416B95D0;
        *(_QWORD *)&v190[32] = v210;
        *(_QWORD *)&v190[40] = sub_14104A7D0;
        sub_1416ABFD0(&v205, &unk_141A3A247, v190);
        sub_140BBE8E0(v232, (int)aStopFailed, 11, &v205);
        *((__m256i *)a1 + 2) = v212;
        v82 = *(_OWORD *)v210;
        v83 = *(_OWORD *)&v210[16];
        v84 = *(_OWORD *)&v210[32];
        a1[3] = v211;
        a1[2] = v84;
        a1[1] = v83;
        *a1 = v82;
        v74 = v231;
        *((_BYTE *)a1 + 96) = 1;
        goto LABEL_113;
      }
      LODWORD(v197) = v205;
      *(_DWORD *)((char *)&v197 + 3) = *(_DWORD *)((char *)&v205 + 3);
      LODWORD(v167[0]) = v181;
      *(_DWORD *)((char *)v167 + 3) = *(_DWORD *)((char *)&v181 + 3);
      LODWORD(v171) = v157;
      *(_DWORD *)((char *)&v171 + 3) = *(_DWORD *)((char *)&v157 + 3);
      LODWORD(v168[0]) = *(_DWORD *)v170;
      *(_DWORD *)((char *)v168 + 3) = *(_DWORD *)&v170[3];
      *(_DWORD *)((char *)v169 + 3) = *(__int32 *)((char *)v202.m256i_i32 + 3);
      LODWORD(v169[0]) = v202.m256i_i32[0];
      *(_DWORD *)((char *)&v177 + 3) = *(__int32 *)((char *)v199.m256i_i32 + 3);
      LODWORD(v177) = v199.m256i_i32[0];
      LODWORD(v175) = v162;
      *(_DWORD *)((char *)&v175 + 3) = *(_DWORD *)((char *)&v162 + 3);
      DWORD1(v162) = *(_DWORD *)((char *)&v205 + 3);
      *(_DWORD *)((char *)&v162 + 1) = v197;
      HIDWORD(v162) = *(_DWORD *)((char *)&v181 + 3);
      *(_DWORD *)((char *)&v162 + 9) = v167[0];
      DWORD1(v163) = *(_DWORD *)((char *)&v157 + 3);
      *(_DWORD *)((char *)&v163 + 1) = v171;
      HIDWORD(v163) = *(_DWORD *)&v170[3];
      *(_DWORD *)((char *)&v163 + 9) = v168[0];
      DWORD1(v164) = *(_DWORD *)((char *)v169 + 3);
      *(_DWORD *)((char *)&v164 + 1) = v202.m256i_i32[0];
      HIDWORD(v164) = *(_DWORD *)((char *)&v177 + 3);
      *(_DWORD *)((char *)&v164 + 9) = v199.m256i_i32[0];
      HIDWORD(v165) = *(_DWORD *)((char *)&v175 + 3);
      *(_DWORD *)((char *)&v165 + 1) = v175;
      v208 = v190[56];
      LOBYTE(v162) = v190[8];
      BYTE8(v162) = v190[16];
      LOBYTE(v163) = v190[24];
      BYTE8(v163) = v190[32];
      LOBYTE(v164) = v190[40];
      BYTE8(v164) = v190[48];
      LOBYTE(v165) = v190[56];
      v225 = 1;
      v28 = sub_14167FD50(&v151);
      v29 = v215;
      *(_OWORD *)v210 = 0x3E8 * (unsigned __int128)(unsigned __int64)v28 + v30 / 0xF4240uLL;
      *(_QWORD *)v190 = &v231;
      *(_QWORD *)&v190[8] = sub_1416B9630;
      *(_QWORD *)&v190[16] = v210;
      *(_QWORD *)&v190[24] = sub_1416B95D0;
      *(_QWORD *)&v190[32] = &v208;
      *(_QWORD *)&v190[40] = sub_1416BCC50;
      v225 = 1;
      sub_1416ABFD0(&v146, &unk_141A39FC6, v190);
      LOBYTE(v181) = v232;
      v196 = v147;
      v205 = v147;
      *(_QWORD *)v190 = &v181;
      *(_QWORD *)&v190[8] = sub_140C98D50;
      *(_QWORD *)&v190[16] = &v205;
      *(_QWORD *)&v190[24] = sub_140186EE0;
      v31 = v210;
      sub_1416ABFD0(v210, &unk_141A39D2E, v190);
      sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStopComplete, 13, (__int64)v210);
      if ( v146 )
        sub_140001660(v196, v146, 1);
      v225 = 1;
      sub_140C75030(v29, (__int128 *)v232);
      v225 = 1;
      sub_140D946F0(
        (unsigned int)v190,
        v32,
        v154,
        v155,
        (__int64)"RouterOn rollbackauth-mode toggle",
        17,
        1,
        v27,
        0,
        v141,
        0,
        v142);
      if ( *(_DWORD *)v190 == -1 )
      {
        *(_QWORD *)&v170[88] = *(_QWORD *)&v190[80];
        *(_OWORD *)&v170[72] = *(_OWORD *)&v190[64];
        *(_QWORD *)&v170[64] = *(_QWORD *)&v190[56];
        *(_OWORD *)&v170[48] = *(_OWORD *)&v190[40];
        *(_OWORD *)&v170[32] = *(_OWORD *)&v190[24];
        *(_OWORD *)&v170[16] = *(_OWORD *)&v190[8];
        *(_QWORD *)&v170[8] = 1;
        *(_QWORD *)v170 = -1;
      }
      else
      {
        *(_OWORD *)&v170[80] = *(_OWORD *)&v190[80];
        *(_OWORD *)&v170[64] = *(_OWORD *)&v190[64];
        *(_OWORD *)&v170[48] = *(_OWORD *)&v190[48];
        *(_OWORD *)&v170[32] = *(_OWORD *)&v190[32];
        *(_OWORD *)&v170[16] = *(_OWORD *)&v190[16];
        *(_OWORD *)v170 = *(_OWORD *)v190;
      }
      a1 = v180;
      *(_QWORD *)&v190[48] = v165;
      *(_OWORD *)&v190[32] = v164;
      *(_OWORD *)&v190[16] = v163;
      *(_OWORD *)v190 = v162;
      v224 = 1;
      sub_140EC14F0(&v157, v190);
      *(_OWORD *)&v190[80] = *(_OWORD *)&v170[80];
      *(_OWORD *)&v190[64] = *(_OWORD *)&v170[64];
      *(_OWORD *)&v190[48] = *(_OWORD *)&v170[48];
      *(_OWORD *)&v190[32] = *(_OWORD *)&v170[32];
      *(_OWORD *)&v190[16] = *(_OWORD *)&v170[16];
      *(_OWORD *)v190 = *(_OWORD *)v170;
      v194 = v161;
      v193 = v160;
      v192 = v159;
      v191 = v158;
      *(_OWORD *)&v190[96] = v157;
      if ( *(_QWORD *)v170 == -1 )
        break;
      v166 = *(_QWORD *)v190;
      if ( *(_QWORD *)&v190[96] != -1 )
      {
        v186 = *(_OWORD *)&v170[80];
        v185 = *(_OWORD *)&v170[64];
        v184 = *(_OWORD *)&v170[48];
        v183 = *(_OWORD *)&v170[32];
        v182 = *(_OWORD *)&v170[16];
        v181 = *(_OWORD *)v170;
        v207 = v161;
        *(_OWORD *)&v206[32] = v160;
        *(_OWORD *)&v206[16] = v159;
        *(_OWORD *)v206 = v158;
        v205 = v157;
        *(_QWORD *)v210 = &v181;
        *(_QWORD *)&v210[8] = sub_14104A7D0;
        *(_QWORD *)&v210[16] = &v205;
        *(_QWORD *)&v210[24] = sub_14104A7D0;
        sub_1416ABFD0(&v197, &unk_141A3A21C, v210);
        *(_OWORD *)&v210[8] = v197;
        *(_QWORD *)&v210[24] = v198;
        *(_QWORD *)v210 = 10;
        v199.m256i_i64[0] = 0;
        *(_OWORD *)&v199.m256i_u64[1] = 1u;
        v202.m256i_i64[2] = 1610612768;
        v202.m256i_i64[0] = (__int64)&v199;
        v202.m256i_i64[1] = (__int64)&off_141A3FE88;
        if ( (unsigned __int8)sub_14104A7D0(v210, &v202) )
          sub_141939040(
            (unsigned int)aADisplayImplem_7,
            55,
            (unsigned int)&v228,
            (unsigned int)&unk_141A3BB68,
            (__int64)&off_141A3FF40);
        v214 = v199.m256i_i64[1];
        v220 = v199.m256i_i64[0];
        sub_140C75030(v29, (__int128 *)v232);
        if ( v220 )
          sub_140001660(v214, v220, 1);
        v202.m256i_i64[0] = (__int64)&v231;
        v202.m256i_i64[1] = (__int64)sub_1416B9630;
        v202.m256i_i64[2] = (__int64)v210;
        v202.m256i_i64[3] = (__int64)sub_14104A7D0;
        sub_1416ABFD0(&v199, &unk_141A3A180, &v202);
        sub_140BBE8E0(v232, (int)aReconcileFaile, 16, &v199);
        *((__m256i *)a1 + 2) = v212;
        v85 = *(_OWORD *)v210;
        v86 = *(_OWORD *)&v210[16];
        v87 = *(_OWORD *)&v210[32];
        a1[3] = v211;
        a1[2] = v87;
        a1[1] = v86;
        *a1 = v85;
        v88 = v231;
        *((_BYTE *)a1 + 96) = 2;
        *((_BYTE *)a1 + 97) = v88;
        sub_140BAC840(&v205);
        sub_140BAC840(&v181);
        return a1;
      }
      v207 = *(__m256i *)&v170[64];
      *(_OWORD *)&v206[32] = *(_OWORD *)&v170[48];
      *(_OWORD *)&v206[16] = *(_OWORD *)&v170[32];
      *(_OWORD *)v206 = *(_OWORD *)&v170[16];
      v205 = *(_OWORD *)v170;
      v36 = *(_DWORD *)&v190[104];
      v37 = v190[108];
      v38 = sub_14167FC00(*(_QWORD *)v170, v33, v34, v35);
      if ( v219 )
        goto LABEL_97;
      if ( v36 )
      {
        if ( v231 > 2u )
          goto LABEL_97;
      }
      else if ( v231 > 2u || !v37 )
      {
        goto LABEL_97;
      }
      if ( v195 == -1 )
      {
        v173 = sub_1416A1240(v38, v39, 12, 0, (__int64)&off_141A3EA90);
        v195 = v58;
      }
      else
      {
        v56 = v39 < v195;
        v57 = v38 < v173;
        if ( v38 == v173 )
          v57 = v56;
        if ( !v57 )
        {
LABEL_97:
          *(_QWORD *)&v181 = 0;
          *((_QWORD *)&v181 + 1) = 1;
          *(_QWORD *)&v182 = 0;
          *(_QWORD *)&v210[16] = 1610612768;
          *(_QWORD *)v210 = &v181;
          *(_QWORD *)&v210[8] = &off_141A3FE88;
          if ( (unsigned __int8)sub_14104A7D0(&v205, v210) )
            sub_141939040(
              (unsigned int)aADisplayImplem_7,
              55,
              (unsigned int)&v228,
              (unsigned int)&unk_141A3BB68,
              (__int64)&off_141A3FF40);
          v214 = *((_QWORD *)&v181 + 1);
          v220 = v181;
          sub_140C75030(v215, (__int128 *)v232);
          if ( v220 )
            sub_140001660(v214, v220, 1);
          *(_QWORD *)v210 = &v231;
          *(_QWORD *)&v210[8] = sub_1416B9630;
          *(_QWORD *)&v210[16] = &v205;
          *(_QWORD *)&v210[24] = sub_14104A7D0;
          sub_1416ABFD0(&v202, &unk_141A3A180, v210);
          LOBYTE(v197) = v232;
          v215 = (__int128 *)v202.m256i_i64[1];
          *(_OWORD *)v199.m256i_i8 = *(_OWORD *)&v202.m256i_u64[1];
          *(_QWORD *)v210 = &v197;
          *(_QWORD *)&v210[8] = sub_140C98D50;
          *(_QWORD *)&v210[16] = &v199;
          *(_QWORD *)&v210[24] = sub_140186EE0;
          sub_1416ABFD0(&v181, &unk_141A39D2E, v210);
          sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aReconcileFaile, 16, (__int64)&v181);
          if ( v202.m256i_i64[0] )
            sub_140001660(v215, v202.m256i_i64[0], 1);
          *((__m256i *)a1 + 2) = v207;
          v71 = v205;
          v72 = *(_OWORD *)v206;
          v73 = *(_OWORD *)&v206[16];
          a1[3] = *(_OWORD *)&v206[32];
          a1[2] = v73;
          a1[1] = v72;
          *a1 = v71;
          v74 = v231;
          *((_BYTE *)a1 + 96) = 2;
LABEL_113:
          *((_BYTE *)a1 + 97) = v74;
          return a1;
        }
      }
      *(_QWORD *)&v181 = 0;
      *((_QWORD *)&v181 + 1) = 1;
      *(_QWORD *)&v182 = 0;
      *(_QWORD *)&v210[16] = 1610612768;
      *(_QWORD *)v210 = &v181;
      *(_QWORD *)&v210[8] = &off_141A3FE88;
      v59 = sub_14104A7D0(&v205, v210);
      a2 = v215;
      if ( v59 )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v228,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v202.m256i_i64[2] = v182;
      *(_OWORD *)v202.m256i_i8 = v181;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)&v181 = &v232;
        *((_QWORD *)&v181 + 1) = sub_140C98D50;
        *(_QWORD *)&v182 = &v231;
        *((_QWORD *)&v182 + 1) = sub_1416B9630;
        *(_QWORD *)&v183 = &v202;
        *((_QWORD *)&v183 + 1) = sub_1400015F0;
        *(_QWORD *)&v211 = 2;
        *((_QWORD *)&v211 + 1) = aCodexmateLibCo_31;
        v212.m256i_i64[0] = 45;
        v212.m256i_i64[2] = (__int64)&unk_141A3A1B1;
        v212.m256i_i64[3] = (__int64)&v181;
        *(_QWORD *)v210 = 0;
        *(_QWORD *)&v210[8] = aCodexmateLibCo_31;
        *(_OWORD *)&v210[16] = 0x2Du;
        *(_QWORD *)&v210[32] = aSrcCoreRelayRo_0;
        *(_QWORD *)&v210[40] = 35;
        v212.m256i_i64[1] = 0x12E00000001LL;
        sub_1414D53A0(&v228, v210);
      }
      sub_140C75030(a2, (__int128 *)v232);
      *(_QWORD *)v210 = &v231;
      *(_QWORD *)&v210[8] = sub_1416B9630;
      *(_QWORD *)&v210[16] = &v202;
      *(_QWORD *)&v210[24] = sub_1400015F0;
      sub_1416ABFD0(&v144, &unk_141A3A180, v210);
      LOBYTE(v197) = v232;
      v196 = v145;
      *(_OWORD *)v199.m256i_i8 = v145;
      *(_QWORD *)v210 = &v197;
      *(_QWORD *)&v210[8] = sub_140C98D50;
      *(_QWORD *)&v210[16] = &v199;
      *(_QWORD *)&v210[24] = sub_140186EE0;
      sub_1416ABFD0(&v181, &unk_141A39D2E, v210);
      sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aReconcileRetry, 15, (__int64)&v181);
      if ( v144 )
        sub_140001660(v196, v144, 1);
      if ( v202.m256i_i64[0] )
        sub_140001660(v202.m256i_i64[1], v202.m256i_i64[0], 1);
      sub_140BAC840(&v205);
      v19 = v214;
      v20 = (unsigned int)v220;
    }
    if ( *(_QWORD *)&v190[96] != -1 )
    {
      v166 = *(_QWORD *)v190;
      v212 = v161;
      v211 = v160;
      *(_OWORD *)&v210[32] = v159;
      *(_OWORD *)&v210[16] = v158;
      *(_OWORD *)v210 = v157;
      *(_QWORD *)&v181 = 0;
      *((_QWORD *)&v181 + 1) = 1;
      *(_QWORD *)&v182 = 0;
      *(_QWORD *)v206 = 1610612768;
      *(_QWORD *)&v205 = &v181;
      *((_QWORD *)&v205 + 1) = &off_141A3FE88;
      if ( (unsigned __int8)sub_14104A7D0(v210, &v205) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v228,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v214 = *((_QWORD *)&v181 + 1);
      v220 = v181;
      sub_140C75030(v29, (__int128 *)v232);
      if ( v220 )
        sub_140001660(v214, v220, 1);
      *(_QWORD *)&v205 = &v231;
      *((_QWORD *)&v205 + 1) = sub_1416B9630;
      *(_QWORD *)v206 = v210;
      *(_QWORD *)&v206[8] = sub_14104A7D0;
      sub_1416ABFD0(&v181, &unk_141A3A180, &v205);
      sub_140BBE8E0(v232, (int)aSettleFailed, 13, &v181);
      *((__m256i *)a1 + 2) = v212;
      v93 = *(_OWORD *)v210;
      v94 = *(_OWORD *)&v210[16];
      v95 = *(_OWORD *)&v210[32];
      a1[3] = v211;
      a1[2] = v95;
      a1[1] = v94;
      *a1 = v93;
      v96 = v231;
      *((_BYTE *)a1 + 96) = 3;
      *((_BYTE *)a1 + 97) = v96;
      sub_140BAD350(&v190[8]);
      sub_1403FAE40(&v190[72]);
      v97 = *(_QWORD *)&v190[72];
      if ( *(_QWORD *)&v190[72] )
      {
        v98 = *(_QWORD *)&v190[80];
        goto LABEL_143;
      }
      return a1;
    }
    *(_QWORD *)&v186 = *(_QWORD *)&v170[88];
    v185 = *(_OWORD *)&v170[72];
    v184 = *(_OWORD *)&v170[56];
    v183 = *(_OWORD *)&v170[40];
    v182 = *(_OWORD *)&v170[24];
    v181 = *(_OWORD *)&v170[8];
    v187 = *(_DWORD *)&v190[104];
    v188 = v190[108];
    v218 = 1;
    v217 = 1;
    LOBYTE(v35) = 1;
    sub_140D8FC20((unsigned int)&v177, v156, a8, v35, (*(_DWORD *)&v190[104] == 0) & (v190[108] ^ 1));
    v44 = v179;
    if ( !v179 )
    {
      if ( (v187 || (v188 & 1) != 0) && *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)v190 = &v232;
        *(_QWORD *)&v190[8] = sub_140C98D50;
        *(_QWORD *)&v190[16] = &v231;
        *(_QWORD *)&v190[24] = sub_1416B9630;
        *(_QWORD *)&v190[32] = &v187;
        *(_QWORD *)&v190[40] = sub_1416BBD00;
        *(_QWORD *)&v190[48] = &v188;
        *(_QWORD *)&v190[56] = sub_1416BCC50;
        *(_QWORD *)v210 = aCodexmateLibCo_31;
        *(_QWORD *)&v210[8] = 45;
        *(_QWORD *)&v210[16] = aCodexmateLibCo_31;
        *(_QWORD *)&v210[24] = 45;
        *(_QWORD *)&v210[32] = &off_141A3A078;
        v223 = 1;
        v222 = 1;
        sub_140BAD520(&unk_141A3A000, v190, 2, v210);
      }
      v207.m256i_i64[2] = v186;
      *(_OWORD *)v207.m256i_i8 = v185;
      *(_OWORD *)&v206[32] = v184;
      *(_OWORD *)&v206[16] = v183;
      *(_OWORD *)v206 = v182;
      v205 = v181;
      LOBYTE(v31) = v232;
      v99 = v189;
      v174 = v189;
      v230 = 1;
      v229 = 1;
      v175 = sub_14167FC00(v41, v40, v42, v43);
      v176 = v100;
      v230 = 1;
      v229 = 1;
      sub_1410255B0((unsigned int)v190, (_DWORD)v215, (_DWORD)v31, v99, *((__int64 *)&v99 + 1));
      if ( *(_DWORD *)v190 == -1 )
      {
        v202.m256i_i64[0] = (__int64)&v205;
        *(_OWORD *)&v202.m256i_u64[1] = v143;
        v109 = *a10;
        v230 = 1;
        v229 = 1;
        sub_140D883F0((unsigned int)v210, a9, (unsigned int)&v205, v109, (__int64)&v202.m256i_i64[1]);
        if ( *(_QWORD *)v210 == -1 )
        {
          v230 = 1;
          v229 = 1;
          v120 = sub_1401BD880(*(_QWORD *)&v210[8]);
          v123 = v120;
          if ( v120 )
          {
            v150 = v120;
            v124 = v120 & 3;
            v125 = v215;
            switch ( v120 & 3 )
            {
              case 0uLL:
                LOBYTE(v120) = *(_BYTE *)(v120 + 16);
                break;
              case 1uLL:
                LOBYTE(v120) = *(_BYTE *)(v120 + 31);
                break;
              case 2uLL:
                v221 = 1;
                v128 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v122, v121) + 8);
                v221 = 1;
                LOBYTE(v120) = v128(HIDWORD(v123));
                break;
              case 3uLL:
                v120 >>= 32;
                break;
            }
            v210[0] = v120;
            *(_QWORD *)v190 = v210;
            *(_QWORD *)&v190[8] = sub_140C9E0F0;
            v221 = 1;
            sub_1416ABFD0(v169, &unk_141A39D4C, v190);
            v221 = 1;
            sub_140BBE8E0((char)v31, (int)aCommitSyncUnco, 23, v169);
            v129 = *((_QWORD *)v125 + 97);
            v130 = *((_QWORD *)v125 + 98);
            v221 = 1;
            sub_1410237A0(
              v129,
              v130,
              (_DWORD)v31,
              (unsigned int)&unk_141A6FF17,
              23,
              v174,
              *((__int64 *)&v174 + 1),
              (__int64)&unk_141A702FA,
              28);
            v198 = v207.m256i_i64[2];
            v197 = *(_OWORD *)v207.m256i_i8;
            sub_141026E80(v190);
            v202.m256i_i64[0] = 0;
            *(_OWORD *)&v202.m256i_u64[1] = 1u;
            *(_QWORD *)&v210[16] = 1610612768;
            *(_QWORD *)v210 = &v202;
            *(_QWORD *)&v210[8] = &off_141A3FE88;
            if ( (unsigned __int8)sub_14104A7D0(v190, v210) )
              sub_141939040(
                (unsigned int)aADisplayImplem_7,
                55,
                (unsigned int)&v228,
                (unsigned int)&unk_141A3BB68,
                (__int64)&off_141A3FF40);
            v220 = v202.m256i_i64[1];
            v215 = (__int128 *)v202.m256i_i64[0];
            v131 = v202.m256i_i64[2];
            v132 = v198;
            if ( v198 == (_QWORD)v197 )
              sub_14190FDC0(&v197);
            v133 = *((_QWORD *)&v197 + 1);
            v134 = 3 * v132;
            *(_QWORD *)(*((_QWORD *)&v197 + 1) + 8 * v134) = v215;
            *(_QWORD *)(v133 + 8 * v134 + 8) = v220;
            *(_QWORD *)(v133 + 8 * v134 + 16) = v131;
            v198 = v132 + 1;
            sub_140BAC840(v190);
            *(_OWORD *)v199.m256i_i8 = v205;
            *(_OWORD *)&v199.m256i_u64[2] = *(_OWORD *)v206;
            v200 = *(_OWORD *)&v206[16];
            v201 = *(_OWORD *)&v206[32];
            v112 = *((__int128 **)&v197 + 1);
            v110 = v197;
            v113 = v198;
            if ( (unsigned int)(v124 - 2) >= 2 && (v123 & 3) != 0 )
            {
              *(_QWORD *)&v190[8] = v123 - 1;
              v190[0] = 3;
              v230 = 0;
              v229 = 0;
              sub_1416BCB00(&v190[8]);
            }
            v111 = 2;
            goto LABEL_175;
          }
          if ( v207.m256i_i64[2] )
          {
            v230 = 1;
            v229 = 1;
            sub_140D1EE10((unsigned int)v190, v207.m256i_i32[2], v207.m256i_i32[4], (unsigned int)&unk_141A39BD6, 3);
            v214 = *(_QWORD *)&v190[8];
            v220 = *(_QWORD *)v190;
            sub_141026C20(
              (unsigned int)v210,
              (_DWORD)v215,
              (_DWORD)v31,
              v174,
              *((__int64 *)&v174 + 1),
              *(__int64 *)&v190[8],
              *(__int64 *)&v190[16]);
            if ( *(_DWORD *)v210 != -1 )
            {
              *(__m256i *)&v190[64] = v212;
              *(_OWORD *)&v190[48] = v211;
              *(_OWORD *)&v190[32] = *(_OWORD *)&v210[32];
              *(_OWORD *)&v190[16] = *(_OWORD *)&v210[16];
              *(_OWORD *)v190 = *(_OWORD *)v210;
              if ( *(_QWORD *)off_1421E6EC0 >= 2u )
              {
                v199.m256i_i64[0] = (__int64)v190;
                v199.m256i_i64[1] = (__int64)sub_14104A7D0;
                v202.m256i_i64[0] = (__int64)aCodexmateLibCo_31;
                v202.m256i_i64[1] = 45;
                v202.m256i_i64[2] = (__int64)aCodexmateLibCo_31;
                v202.m256i_i64[3] = 45;
                *(_QWORD *)&v203 = &off_141A39EC0;
                sub_140BAD520(&unk_141A39E7E, &v199, 2, &v202);
              }
              sub_140BAC840(v190);
            }
            if ( v220 )
              sub_140001660(v214, v220, 1);
            v230 = 1;
            v229 = 1;
            v126 = sub_14167FD50(&v175);
            *(_OWORD *)v210 = 0x3E8 * (unsigned __int128)(unsigned __int64)v126 + v127 / 0xF4240uLL;
            v202.m256i_i64[0] = v207.m256i_i64[2];
            *(_QWORD *)v190 = &v174;
            *(_QWORD *)&v190[8] = sub_140186EE0;
            *(_QWORD *)&v190[16] = v210;
            *(_QWORD *)&v190[24] = sub_1416B95D0;
            *(_QWORD *)&v190[32] = &v202;
            *(_QWORD *)&v190[40] = sub_1416BCB10;
            v230 = 1;
            v229 = 1;
            sub_1416ABFD0(v168, &unk_141A39ED8, v190);
            v230 = 1;
            v229 = 1;
            sub_140BBE8E0((char)v31, (int)aDegraded, 8, v168);
            v201 = *(_OWORD *)&v206[32];
            v200 = *(_OWORD *)&v206[16];
            *(_OWORD *)&v199.m256i_u64[2] = *(_OWORD *)v206;
            *(_OWORD *)v199.m256i_i8 = v205;
            v112 = (__int128 *)v207.m256i_i64[1];
            v110 = v207.m256i_i64[0];
            v111 = 1;
            v113 = v207.m256i_i64[2];
            goto LABEL_175;
          }
          v230 = 1;
          v229 = 1;
          sub_141022500(v210, v215, (unsigned int)v31);
          if ( *(_DWORD *)v210 == -1 )
          {
            v230 = 1;
            v229 = 1;
            v139 = sub_14167FD50(&v175);
            *(_OWORD *)v210 = 0x3E8 * (unsigned __int128)(unsigned __int64)v139 + v140 / 0xF4240uLL;
            *(_QWORD *)v190 = &v174;
            *(_QWORD *)&v190[8] = sub_140186EE0;
            *(_QWORD *)&v190[16] = v210;
            *(_QWORD *)&v190[24] = sub_1416B95D0;
            v230 = 1;
            v229 = 1;
            sub_1416ABFD0(v167, &unk_141A39E59, v190);
            v230 = 1;
            v229 = 1;
            sub_140BBE8E0((char)v31, (int)aStable, 6, v167);
            v112 = *((__int128 **)&v205 + 1);
            v110 = v205;
            v113 = *(_QWORD *)v206;
            v199 = *(__m256i *)&v206[8];
            *(_QWORD *)&v200 = *(_QWORD *)&v206[40];
            sub_140025530(&v207);
            v111 = 0;
            goto LABEL_175;
          }
          *(__m256i *)&v190[64] = v212;
          *(_OWORD *)&v190[48] = v211;
          *(_OWORD *)&v190[32] = *(_OWORD *)&v210[32];
          *(_OWORD *)&v190[16] = *(_OWORD *)&v210[16];
          *(_OWORD *)v190 = *(_OWORD *)v210;
          if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          {
            v199.m256i_i64[0] = (__int64)v190;
            v199.m256i_i64[1] = (__int64)sub_14104A7D0;
            v202.m256i_i64[0] = (__int64)aCodexmateLibCo_31;
            v202.m256i_i64[1] = 45;
            v202.m256i_i64[2] = (__int64)aCodexmateLibCo_31;
            v202.m256i_i64[3] = 45;
            *(_QWORD *)&v203 = &off_141A39DD8;
            v213 = 1;
            sub_140BAD520(&unk_141A39D6B, &v199, 2, &v202);
          }
          v204 = *(_OWORD *)&v206[32];
          v203 = *(_OWORD *)&v206[16];
          *(_OWORD *)&v202.m256i_u64[2] = *(_OWORD *)v206;
          *(_OWORD *)v202.m256i_i8 = v205;
          v215 = (__int128 *)sub_140C23890(24);
          v199.m256i_i64[0] = (__int64)v190;
          v199.m256i_i64[1] = (__int64)sub_14104A7D0;
          sub_1416ABFD0(&v171, &unk_141A39E1D, &v199);
          v112 = v215;
          *((_QWORD *)v215 + 2) = v172;
          *v112 = v171;
          v199 = v202;
          v200 = v203;
          v201 = v204;
          v230 = 0;
          v229 = 1;
          sub_140BAC840(v190);
          v110 = 1;
          v114 = 0;
          v113 = 1;
          v111 = 1;
LABEL_149:
          sub_1403FAE40(&v207);
          if ( v207.m256i_i64[0] )
            sub_140001660(v207.m256i_i64[1], 24 * v207.m256i_i64[0], 8);
          if ( v114 )
          {
            v115 = *(_OWORD *)v199.m256i_i8;
            v116 = *(_OWORD *)&v199.m256i_u64[2];
            v117 = v200;
            v118 = v180;
            v180[5] = v201;
            v118[4] = v117;
            v118[3] = v116;
            v118[2] = v115;
            v119 = v231;
            *(_QWORD *)v118 = v111;
            *((_QWORD *)v118 + 1) = v110;
            *((_QWORD *)v118 + 2) = v112;
            *((_QWORD *)v118 + 3) = v113;
            a1 = v118;
            *((_BYTE *)v118 + 96) = 5;
            *((_BYTE *)v118 + 97) = v119;
LABEL_176:
            sub_1403FAC20(&v177);
            if ( !v177 )
              return a1;
            v98 = v178;
            v108 = 32 * v177;
            goto LABEL_178;
          }
LABEL_175:
          v135 = *(_OWORD *)v199.m256i_i8;
          v136 = *(_OWORD *)&v199.m256i_u64[2];
          v137 = v200;
          v138 = v180;
          *(__int128 *)((char *)v180 + 88) = v201;
          *(__int128 *)((char *)v138 + 72) = v137;
          *(__int128 *)((char *)v138 + 56) = v136;
          *(__int128 *)((char *)v138 + 40) = v135;
          *((_QWORD *)v138 + 1) = v111;
          *((_QWORD *)v138 + 2) = v110;
          *((_QWORD *)v138 + 3) = v112;
          *((_QWORD *)v138 + 4) = v113;
          a1 = v138;
          *(_QWORD *)v138 = -1;
          goto LABEL_176;
        }
      }
      else
      {
        v212 = *(__m256i *)&v190[64];
        v211 = *(_OWORD *)&v190[48];
        *(_OWORD *)&v210[32] = *(_OWORD *)&v190[32];
        *(_OWORD *)&v210[16] = *(_OWORD *)&v190[16];
        *(_OWORD *)v210 = *(_OWORD *)v190;
      }
      *(__m256i *)&v190[64] = v212;
      *(_OWORD *)&v190[48] = v211;
      *(_OWORD *)&v190[32] = *(_OWORD *)&v210[32];
      *(_OWORD *)&v190[16] = *(_OWORD *)&v210[16];
      *(_OWORD *)v190 = *(_OWORD *)v210;
      v199.m256i_i64[0] = 0;
      *(_OWORD *)&v199.m256i_u64[1] = 1u;
      v202.m256i_i64[2] = 1610612768;
      v202.m256i_i64[0] = (__int64)&v199;
      v202.m256i_i64[1] = (__int64)&off_141A3FE88;
      if ( (unsigned __int8)sub_14104A7D0(v190, &v202) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v228,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v214 = v199.m256i_i64[1];
      v220 = v199.m256i_i64[0];
      sub_140C75030(v215, (__int128 *)(unsigned int)v31);
      if ( v220 )
        sub_140001660(v214, v220, 1);
      v202.m256i_i64[0] = (__int64)&v174;
      v202.m256i_i64[1] = (__int64)sub_140186EE0;
      v202.m256i_i64[2] = (__int64)v190;
      v202.m256i_i64[3] = (__int64)sub_14104A7D0;
      sub_1416ABFD0(&v197, &unk_141A39F29, &v202);
      sub_140BBE8E0((char)v31, (int)aCommitFailed, 13, &v197);
      v110 = *(_QWORD *)&v190[8];
      v111 = *(_QWORD *)v190;
      v113 = *(_QWORD *)&v190[24];
      v112 = *(__int128 **)&v190[16];
      v199 = *(__m256i *)&v190[32];
      v200 = *(_OWORD *)&v190[64];
      v201 = *(_OWORD *)&v190[80];
      sub_140BAD350(&v205);
      v114 = 1;
      goto LABEL_149;
    }
    v223 = 1;
    v222 = 1;
    v196 = v178;
    sub_1403EBE40(v210, v178, v178 + 32 * v179);
    v45 = *(_QWORD *)&v210[8];
    v46 = *(_QWORD *)&v210[16];
    sub_140D1EE10((unsigned int)v190, *(_DWORD *)&v210[8], *(_DWORD *)&v210[16], (unsigned int)&unk_141A39BD6, 3);
    v199.m256i_i64[2] = *(_QWORD *)&v190[16];
    *(_OWORD *)v199.m256i_i8 = *(_OWORD *)v190;
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
    if ( *(_QWORD *)v210 )
      sub_140001660(v45, 24LL * *(_QWORD *)v210, 8);
    v227 = 1;
    v226 = 1;
    v52 = sub_14167FC00(v48, v47, v49, v50);
    a1 = v180;
    v54 = v215;
    v55 = v196;
    if ( v219 )
    {
      v202.m256i_i64[2] = *(_QWORD *)&v170[88];
      *(_OWORD *)v202.m256i_i8 = *(_OWORD *)&v170[72];
      *(_QWORD *)v190 = &v199;
      *(_QWORD *)&v190[8] = sub_1400015F0;
      v216 = 1;
      sub_1416ABFD0(&v205, &unk_141A3A0DE, v190);
      v216 = 1;
      sub_1401F4600(&v202, &v205);
      v211 = *(_OWORD *)&v170[56];
      *(_OWORD *)&v210[32] = *(_OWORD *)&v170[40];
      *(_OWORD *)&v210[16] = *(_OWORD *)&v170[24];
      *(_OWORD *)v210 = *(_OWORD *)&v170[8];
      *(_OWORD *)v212.m256i_i8 = *(_OWORD *)v202.m256i_i8;
      v212.m256i_i64[2] = v202.m256i_i64[2];
      v216 = 0;
      sub_140BBFA40((__int64)v190, (__int64)v54, v232, v189, *((__int64 *)&v189 + 1), (__int128 *)v210, a9, a10, &v143);
      if ( v190[0] )
      {
        a1[5] = *(_OWORD *)&v190[88];
        a1[4] = *(_OWORD *)&v190[72];
        v101 = *(_OWORD *)&v190[8];
        v102 = *(_OWORD *)&v190[24];
        v103 = *(_OWORD *)&v190[40];
        a1[3] = *(_OWORD *)&v190[56];
        a1[2] = v103;
        a1[1] = v102;
        *a1 = v101;
        v104 = v231;
        *((_BYTE *)a1 + 96) = 5;
        *((_BYTE *)a1 + 97) = v104;
      }
      else
      {
        *(__int128 *)((char *)a1 + 88) = *(_OWORD *)&v190[88];
        *(__int128 *)((char *)a1 + 72) = *(_OWORD *)&v190[72];
        v105 = *(_OWORD *)&v190[8];
        v106 = *(_OWORD *)&v190[24];
        v107 = *(_OWORD *)&v190[40];
        *(__int128 *)((char *)a1 + 56) = *(_OWORD *)&v190[56];
        *(__int128 *)((char *)a1 + 40) = v107;
        *(__int128 *)((char *)a1 + 24) = v106;
        *(__int128 *)((char *)a1 + 8) = v105;
        *(_QWORD *)a1 = -1;
      }
      LODWORD(v215) = 0;
      goto LABEL_136;
    }
    if ( v187 )
    {
      if ( v231 > 2u )
        break;
    }
    else if ( v231 > 2u || (v188 & 1) == 0 )
    {
      break;
    }
    if ( v195 == -1 )
    {
      v227 = 1;
      v226 = 1;
      v173 = sub_1416A1240(v52, v53, 12, 0, (__int64)&off_141A3EA90);
      v195 = v62;
      goto LABEL_72;
    }
    v60 = v53 < v195;
    v61 = v52 < v173;
    if ( v52 == v173 )
      v61 = v60;
    if ( !v61 )
      break;
LABEL_72:
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      *(_QWORD *)v210 = &v232;
      *(_QWORD *)&v210[8] = sub_140C98D50;
      *(_QWORD *)&v210[16] = &v231;
      *(_QWORD *)&v210[24] = sub_1416B9630;
      *(_QWORD *)&v210[32] = &v199;
      *(_QWORD *)&v210[40] = sub_1400015F0;
      *(_QWORD *)&v190[48] = 2;
      *(_QWORD *)&v190[56] = aCodexmateLibCo_31;
      *(_QWORD *)&v190[64] = 45;
      *(_QWORD *)&v190[80] = &unk_141A3A11B;
      *(_QWORD *)&v190[88] = v210;
      *(_QWORD *)v190 = 0;
      *(_QWORD *)&v190[8] = aCodexmateLibCo_31;
      *(_OWORD *)&v190[16] = 0x2Du;
      *(_QWORD *)&v190[32] = aSrcCoreRelayRo_0;
      *(_QWORD *)&v190[40] = 35;
      *(_QWORD *)&v190[72] = 0x17D00000001LL;
      v227 = 1;
      v226 = 1;
      sub_1414D53A0(&v228, v190);
    }
    v227 = 1;
    v226 = 1;
    sub_140C75030(v54, (__int128 *)v232);
    if ( v199.m256i_i64[0] )
      sub_140001660(v199.m256i_i64[1], v199.m256i_i64[0], 1);
    v63 = (_QWORD *)(v55 + 8);
    do
    {
      v64 = *(v63 - 1);
      if ( v64 )
        sub_140001660(*v63, v64, 1);
      v63 += 4;
      --v44;
    }
    while ( v44 );
    if ( v177 )
      sub_140001660(v55, 32 * v177, 8);
    sub_140BAD350(&v181);
    v65 = *((_QWORD *)&v185 + 1);
    v66 = v186;
    if ( (_QWORD)v186 )
    {
      v67 = (_QWORD *)(*((_QWORD *)&v185 + 1) + 8LL);
      do
      {
        v18 = *(v67 - 1);
        if ( v18 )
          sub_140001660(*v67, v18, 1);
        v67 += 3;
        --v66;
      }
      while ( v66 );
    }
    if ( (_QWORD)v185 )
      sub_140001660(v65, 24 * v185, 8);
    v19 = v214;
    a2 = v215;
    v20 = (unsigned int)v220;
  }
  *(_QWORD *)v190 = &v232;
  *(_QWORD *)&v190[8] = sub_140C98D50;
  *(_QWORD *)&v190[16] = &v199;
  *(_QWORD *)&v190[24] = sub_1400015F0;
  v227 = 1;
  v226 = 1;
  sub_1416ABFD0(&v202, &unk_141A3A090, v190);
  *(_OWORD *)&v190[8] = *(_OWORD *)v202.m256i_i8;
  *(_QWORD *)&v190[24] = v202.m256i_i64[2];
  *(_QWORD *)v190 = 10;
  sub_140C9CF30(v210, v190);
  v220 = *(_QWORD *)&v210[8];
  sub_140C75030(v54, (__int128 *)v232);
  if ( *(_QWORD *)v210 )
    sub_140001660(v220, *(_QWORD *)v210, 1);
  *(_QWORD *)&v197 = v44;
  *(_QWORD *)v210 = &v231;
  *(_QWORD *)&v210[8] = sub_1416B9630;
  *(_QWORD *)&v210[16] = &v197;
  *(_QWORD *)&v210[24] = sub_1416BCB10;
  sub_1416ABFD0(&v205, &unk_141A3A0B1, v210);
  sub_140BBE8E0(v232, (int)aPostconditionF, 20, &v205);
  a1[5] = *(_OWORD *)&v190[80];
  a1[4] = *(_OWORD *)&v190[64];
  v89 = *(_OWORD *)v190;
  v90 = *(_OWORD *)&v190[16];
  v91 = *(_OWORD *)&v190[32];
  a1[3] = *(_OWORD *)&v190[48];
  a1[2] = v91;
  a1[1] = v90;
  *a1 = v89;
  v92 = v231;
  *((_BYTE *)a1 + 96) = 4;
  *((_BYTE *)a1 + 97) = v92;
  LOBYTE(v92) = 1;
  LODWORD(v215) = v92;
LABEL_136:
  if ( v199.m256i_i64[0] )
    sub_140001660(v199.m256i_i64[1], v199.m256i_i64[0], 1);
  sub_1403FAC20(&v177);
  if ( v177 )
    sub_140001660(v196, 32 * v177, 8);
  if ( (_BYTE)v215 )
  {
    sub_140BAD350(&v181);
    sub_1403FAE40(&v185);
    v97 = v185;
    if ( (_QWORD)v185 )
    {
      v98 = *((_QWORD *)&v185 + 1);
LABEL_143:
      v108 = 24 * v97;
LABEL_178:
      sub_140001660(v98, v108, 8);
    }
  }
  return a1;
}
