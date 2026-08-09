__int128 *__fastcall sub_140AA86E0(
        __int128 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int128 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // r14d
  __int128 *v10; // rbx
  __int64 v11; // rax
  _OWORD *v12; // rcx
  int v13; // r15d
  int v14; // edx
  int v15; // r13d
  __int64 v16; // r8
  __int64 v17; // r9
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rdx
  __int64 v21; // rcx
  void (__fastcall *v22)(__int64, const char *, __int64); // rax
  __int64 v23; // r13
  int v24; // edx
  int v25; // r15d
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  _QWORD *v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rsi
  _QWORD *v38; // rdi
  __int64 v39; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  unsigned int v47; // edx
  void *v48; // rax
  __int64 v49; // rcx
  __int128 v50; // kr10_16
  __int128 v51; // kr20_16
  __int128 v52; // xmm0
  void (__fastcall *v53)(__int64, const char *, __int64); // rax
  int v54; // r13d
  int v55; // edx
  int v56; // r12d
  __int64 v57; // rax
  unsigned int v58; // r14d
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm2
  __int64 v62; // rcx
  int v63; // r12d
  int v64; // edx
  int v65; // r13d
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rcx
  char v70; // al
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm2
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rcx
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  __int128 v79; // xmm2
  __int64 v80; // rcx
  __int128 v81; // xmm0
  __int128 v82; // xmm1
  __int128 v83; // xmm2
  __int128 v84; // xmm3
  __int64 v85; // r12
  unsigned int v86; // edx
  unsigned int v87; // r13d
  __int64 v88; // rsi
  __int64 v89; // rcx
  __int64 v90; // r12
  unsigned int v91; // edx
  unsigned int v92; // r13d
  __int64 v93; // rcx
  void (__fastcall *v94)(__int64, const char *, __int64); // rax
  int v95; // r12d
  int v96; // edx
  int v97; // r13d
  __int64 v98; // rax
  char v99; // si
  __int128 v100; // xmm0
  __int128 v101; // xmm1
  __int128 v102; // xmm2
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  int v107; // r13d
  int v108; // edx
  int v109; // r12d
  __int64 v110; // rcx
  __int64 v111; // rbx
  unsigned int v112; // edx
  unsigned int v113; // r12d
  __int64 v114; // rax
  __int64 v115; // rcx
  unsigned __int128 v116; // xmm0
  __int128 v117; // xmm1
  __int128 v118; // xmm2
  __int128 v119; // xmm0
  __int128 v120; // xmm1
  __int128 v121; // xmm2
  void *v122; // rax
  __int64 v123; // rcx
  int v124; // r13d
  int v125; // edx
  int v126; // r12d
  _OWORD *v127; // rax
  __int128 v128; // xmm0
  __int128 v129; // xmm1
  __int128 v130; // xmm2
  char v131; // bl
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rsi
  __int64 v137; // rax
  char v138; // al
  __int128 v139; // xmm0
  unsigned __int128 v140; // xmm1
  __int64 v141; // rdx
  __int64 v142; // [rsp+20h] [rbp-60h]
  __int64 v143; // [rsp+20h] [rbp-60h]
  __int64 v144; // [rsp+20h] [rbp-60h]
  __int64 v145; // [rsp+20h] [rbp-60h]
  __int64 v146; // [rsp+20h] [rbp-60h]
  __int64 v147; // [rsp+20h] [rbp-60h]
  __int64 v148; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int128 v149; // [rsp+50h] [rbp-30h]
  __int128 v150; // [rsp+60h] [rbp-20h]
  __int128 v151; // [rsp+70h] [rbp-10h]
  __int128 v152; // [rsp+80h] [rbp+0h]
  __int128 v153; // [rsp+90h] [rbp+10h]
  __int128 v154; // [rsp+A0h] [rbp+20h]
  __int128 v155; // [rsp+B0h] [rbp+30h]
  _BYTE v156[24]; // [rsp+C0h] [rbp+40h] BYREF
  _BYTE v157[24]; // [rsp+D8h] [rbp+58h] BYREF
  _BYTE v158[24]; // [rsp+F0h] [rbp+70h] BYREF
  _BYTE v159[24]; // [rsp+108h] [rbp+88h] BYREF
  _BYTE v160[24]; // [rsp+120h] [rbp+A0h] BYREF
  _BYTE v161[24]; // [rsp+138h] [rbp+B8h] BYREF
  _BYTE v162[24]; // [rsp+150h] [rbp+D0h] BYREF
  _BYTE v163[24]; // [rsp+168h] [rbp+E8h] BYREF
  _BYTE v164[24]; // [rsp+180h] [rbp+100h] BYREF
  _BYTE v165[24]; // [rsp+198h] [rbp+118h] BYREF
  _BYTE v166[24]; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v167; // [rsp+1C8h] [rbp+148h] BYREF
  __int64 v168; // [rsp+1D8h] [rbp+158h]
  __int128 v169; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v170; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v171; // [rsp+200h] [rbp+180h]
  __int128 v172; // [rsp+210h] [rbp+190h]
  __int128 v173; // [rsp+220h] [rbp+1A0h]
  __int128 v174; // [rsp+230h] [rbp+1B0h]
  __int64 v175; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v176; // [rsp+248h] [rbp+1C8h]
  __int128 v177; // [rsp+258h] [rbp+1D8h]
  __int128 v178; // [rsp+268h] [rbp+1E8h]
  __int128 v179; // [rsp+278h] [rbp+1F8h]
  __int128 v180; // [rsp+288h] [rbp+208h]
  __int128 v181; // [rsp+298h] [rbp+218h]
  __int64 v182; // [rsp+2A8h] [rbp+228h]
  unsigned __int128 v183; // [rsp+2B0h] [rbp+230h] BYREF
  __int128 v184; // [rsp+2C0h] [rbp+240h]
  __int128 v185; // [rsp+2D0h] [rbp+250h]
  __int128 v186; // [rsp+2E0h] [rbp+260h]
  __int128 v187; // [rsp+2F0h] [rbp+270h]
  __int128 v188; // [rsp+300h] [rbp+280h]
  __int128 v189; // [rsp+310h] [rbp+290h]
  __int64 v190; // [rsp+320h] [rbp+2A0h]
  __int128 v191; // [rsp+330h] [rbp+2B0h]
  __int64 v192; // [rsp+340h] [rbp+2C0h]
  __int64 v193; // [rsp+348h] [rbp+2C8h]
  _BYTE v194[104]; // [rsp+350h] [rbp+2D0h] BYREF
  char v195[192]; // [rsp+3B8h] [rbp+338h] BYREF
  __int64 v196; // [rsp+478h] [rbp+3F8h] BYREF
  __int64 v197; // [rsp+480h] [rbp+400h] BYREF
  __int64 v198; // [rsp+488h] [rbp+408h] BYREF
  __int64 v199; // [rsp+490h] [rbp+410h] BYREF
  __int64 v200; // [rsp+498h] [rbp+418h] BYREF
  __int64 v201; // [rsp+4A0h] [rbp+420h] BYREF
  _BYTE v202[104]; // [rsp+4A8h] [rbp+428h] BYREF
  __int64 v203[7]; // [rsp+510h] [rbp+490h] BYREF
  char v204; // [rsp+548h] [rbp+4C8h] BYREF
  char v205; // [rsp+568h] [rbp+4E8h] BYREF
  char v206; // [rsp+570h] [rbp+4F0h] BYREF
  __int64 v207; // [rsp+5D0h] [rbp+550h] BYREF
  __int128 v208; // [rsp+5D8h] [rbp+558h]
  __int128 v209; // [rsp+5E8h] [rbp+568h] BYREF
  __int64 v210; // [rsp+5F8h] [rbp+578h]
  unsigned __int128 v211; // [rsp+600h] [rbp+580h] BYREF
  __int128 v212; // [rsp+610h] [rbp+590h]
  __int128 v213; // [rsp+620h] [rbp+5A0h]
  __int128 v214; // [rsp+630h] [rbp+5B0h]
  __int128 v215; // [rsp+640h] [rbp+5C0h]
  __int128 v216; // [rsp+650h] [rbp+5D0h]
  __int128 v217; // [rsp+668h] [rbp+5E8h] BYREF
  __int64 v218; // [rsp+678h] [rbp+5F8h]
  _BYTE v219[104]; // [rsp+680h] [rbp+600h] BYREF
  __int128 v220; // [rsp+6E8h] [rbp+668h] BYREF
  char v221; // [rsp+6FEh] [rbp+67Eh] BYREF
  char v222; // [rsp+6FFh] [rbp+67Fh] BYREF
  __int64 v223; // [rsp+700h] [rbp+680h]
  __int64 v224; // [rsp+708h] [rbp+688h]
  char v225; // [rsp+717h] [rbp+697h]
  char v226; // [rsp+718h] [rbp+698h]
  char v227; // [rsp+719h] [rbp+699h] BYREF
  char v228; // [rsp+71Ah] [rbp+69Ah]
  char v229; // [rsp+71Bh] [rbp+69Bh]
  char v230; // [rsp+71Ch] [rbp+69Ch]
  char v231; // [rsp+71Dh] [rbp+69Dh]
  char v232; // [rsp+71Eh] [rbp+69Eh]
  char v233; // [rsp+71Fh] [rbp+69Fh]
  __int64 v234; // [rsp+720h] [rbp+6A0h]

  v234 = -2;
  v223 = a2;
  v10 = a1;
  v169 = a5;
  nullsub_1(a1, a2, a3, a4, v142);
  v11 = sub_140001650(24, 8);
  if ( !v11 )
    sub_14176E531(8, 24);
  v224 = v11;
  *(_QWORD *)v202 = &v169;
  *(_QWORD *)&v202[8] = sub_1402DDC10;
  sub_141543AF0(&v167, &unk_14185AA39, v202);
  v12 = (_OWORD *)v224;
  *(_QWORD *)(v224 + 16) = v168;
  *v12 = v167;
  *(_QWORD *)&v217 = 1;
  *((_QWORD *)&v217 + 1) = v12;
  v218 = 1;
  *(_QWORD *)&v209 = 0;
  *((_QWORD *)&v209 + 1) = 8;
  v210 = 0;
  v226 = 1;
  v13 = sub_141518E10(v12);
  v15 = v14;
  v16 = *(_QWORD *)(a4 + 8);
  v17 = *(_QWORD *)(a4 + 16);
  v18 = *(_OWORD *)(a4 + 32);
  LOBYTE(v7) = *(_BYTE *)(a4 + 72);
  v19 = *(_OWORD *)(a4 + 56);
  v226 = 1;
  sub_14055EA40((__int64)v202, v223, v16, v17, v18, *((__int64 *)&v18 + 1), v7 ^ 1, v19, *((__int64 *)&v19 + 1));
  *(_OWORD *)v194 = *(_OWORD *)&v202[8];
  *(_OWORD *)&v194[16] = *(_OWORD *)&v202[24];
  *(_OWORD *)&v194[32] = *(_OWORD *)&v202[40];
  *(_OWORD *)&v194[48] = *(_OWORD *)&v202[56];
  *(_OWORD *)&v194[64] = *(_OWORD *)&v202[72];
  *(_OWORD *)&v194[80] = *(_OWORD *)&v202[88];
  if ( *(_QWORD *)v202 == -1 )
  {
    v10[5] = *(_OWORD *)&v194[80];
    v10[4] = *(_OWORD *)&v194[64];
    v32 = *(_OWORD *)v194;
    v33 = *(_OWORD *)&v194[16];
    v34 = *(_OWORD *)&v194[32];
    v10[3] = *(_OWORD *)&v194[48];
    v10[2] = v34;
    v10[1] = v33;
    *v10 = v32;
    v31 = v210;
    if ( !v210 )
    {
LABEL_21:
      if ( (_QWORD)v209 )
        sub_140001660(*((_QWORD *)&v209 + 1), 24 * v209, 8);
      v37 = v218;
      if ( v218 )
      {
        v38 = (_QWORD *)(*((_QWORD *)&v217 + 1) + 8LL);
        do
        {
          v39 = *(v38 - 1);
          if ( v39 )
            sub_140001660(*v38, v39, 1);
          v38 += 3;
          --v37;
        }
        while ( v37 );
      }
      if ( (_QWORD)v217 )
        sub_140001660(*((_QWORD *)&v217 + 1), 24 * v217, 8);
      return v10;
    }
LABEL_17:
    v35 = (_QWORD *)(*((_QWORD *)&v209 + 1) + 8LL);
    do
    {
      v36 = *(v35 - 1);
      if ( v36 )
        sub_140001660(*v35, v36, 1);
      v35 += 3;
      --v31;
    }
    while ( v31 );
    goto LABEL_21;
  }
  v224 = (__int64)v10;
  v176 = *(_OWORD *)v194;
  v177 = *(_OWORD *)&v194[16];
  v178 = *(_OWORD *)&v194[32];
  v179 = *(_OWORD *)&v194[48];
  v180 = *(_OWORD *)&v194[64];
  v181 = *(_OWORD *)&v194[80];
  v175 = *(_QWORD *)v202;
  v182 = v203[0];
  v20 = qword_141864EE0[v194[89]];
  *(_QWORD *)v194 = (char *)dword_141864F08 + dword_141864F08[v194[89]];
  *(_QWORD *)&v194[8] = v20;
  *(_QWORD *)v219 = *(_QWORD *)&v194[32];
  LOBYTE(v211) = v194[88];
  *(_QWORD *)v202 = a4 + 72;
  *(_QWORD *)&v202[8] = sub_141554060;
  *(_QWORD *)&v202[16] = v194;
  *(_QWORD *)&v202[24] = sub_1402DDC10;
  *(_QWORD *)&v202[32] = v219;
  *(_QWORD *)&v202[40] = sub_141553F20;
  *(_QWORD *)&v202[48] = &v211;
  *(_QWORD *)&v202[56] = sub_141554060;
  v229 = 1;
  sub_141543AF0(v163, &unk_14185AA64, v202);
  v229 = 1;
  sub_140AA8570(0, (unsigned int)aCatalogPreflig, 17, v13, v15, (__int64)v163);
  v21 = a6;
  if ( a6 )
  {
    v22 = *(void (__fastcall **)(__int64, const char *, __int64))(a7 + 32);
    v229 = 1;
    v22(a6, aStartingProxy, 14);
  }
  v229 = 1;
  v23 = sub_141518E10(v21);
  v25 = v24;
  v229 = 1;
  sub_1409ADCD0(v202, a3);
  if ( *(_DWORD *)v202 != -1 )
  {
    v10 = (__int128 *)v224;
    *(_OWORD *)(v224 + 80) = *(_OWORD *)&v202[80];
    v10[4] = *(_OWORD *)&v202[64];
    v26 = *(_OWORD *)v202;
    v27 = *(_OWORD *)&v202[16];
    v28 = *(_OWORD *)&v202[32];
    v10[3] = *(_OWORD *)&v202[48];
    v10[2] = v28;
    v10[1] = v27;
    *v10 = v26;
    goto LABEL_7;
  }
  v41 = *(_QWORD *)(a3 + 24);
  v229 = 1;
  sub_1409ACA30(v202, v41);
  if ( *(_QWORD *)v202 == -1 )
  {
    nullsub_1(v43, v42, v44, v45, v143);
    v48 = (void *)sub_140001650(49, 1);
    if ( !v48 )
    {
      v229 = 1;
      sub_14176E54B(1, 49);
    }
    qmemcpy(v48, "relay proxy started without an available root URL", 49);
    v10 = (__int128 *)v224;
    *(_QWORD *)v224 = 10;
    *((_QWORD *)v10 + 1) = 49;
    *((_QWORD *)v10 + 2) = v48;
    *((_QWORD *)v10 + 3) = 49;
LABEL_7:
    if ( v175 )
      sub_140001660(v176, v175, 1);
    v29 = *((_QWORD *)&v177 + 1);
    v224 = v178;
    v223 = 0;
    v193 = *((_QWORD *)&v177 + 1);
    while ( v224 != v223 )
    {
      ++v223;
      v30 = v29 + 32;
      sub_1403FF680();
      v29 = v30;
    }
    if ( (_QWORD)v177 )
      sub_140001660(*((_QWORD *)&v177 + 1), 32 * v177, 8);
    v31 = v210;
    if ( !v210 )
      goto LABEL_21;
    goto LABEL_17;
  }
  v207 = *(_QWORD *)v202;
  v208 = *(_OWORD *)&v202[8];
  LOBYTE(v196) = 0;
  *(_QWORD *)&v170 = aProxyStarted;
  *((_QWORD *)&v170 + 1) = 13;
  *(_QWORD *)&v183 = v23;
  DWORD2(v183) = v25;
  v232 = 1;
  v46 = sub_141518FC0(&v183);
  v211 = 0x3E8 * (unsigned __int128)(unsigned __int64)v46 + v47 / 0xF4240uLL;
  *(_QWORD *)v219 = aProxyRootPrese;
  *(_QWORD *)&v219[8] = 23;
  *(_QWORD *)v202 = &v196;
  *(_QWORD *)&v202[8] = sub_140B63790;
  *(_QWORD *)&v202[16] = &v170;
  *(_QWORD *)&v202[24] = sub_1402DDC10;
  *(_QWORD *)&v202[32] = &v211;
  *(_QWORD *)&v202[40] = sub_141551000;
  *(_QWORD *)&v202[48] = v219;
  *(_QWORD *)&v202[56] = sub_1402DDC10;
  v232 = 1;
  sub_141543AF0(v194, &unk_14185A9F8, v202);
  v232 = 1;
  sub_140AA6250((unsigned int)aRouterTransiti_1, 17, (unsigned int)aPhaseTiming, 12, (__int64)v194);
  v232 = 1;
  sub_140B3DD80(v202);
  if ( *(_QWORD *)v202 != -1 )
  {
    *(_OWORD *)&v194[80] = *(_OWORD *)&v202[80];
    *(_OWORD *)&v194[64] = *(_OWORD *)&v202[64];
    *(_OWORD *)&v194[48] = *(_OWORD *)&v202[48];
    *(_OWORD *)&v194[32] = *(_OWORD *)&v202[32];
    *(_OWORD *)v194 = *(_OWORD *)v202;
    *(_OWORD *)&v194[16] = *(_OWORD *)&v202[16];
LABEL_37:
    v10 = (__int128 *)v224;
    *(_OWORD *)(v224 + 80) = *(_OWORD *)&v194[80];
    v10[4] = *(_OWORD *)&v194[64];
    v50 = *(_OWORD *)v194;
    v51 = *(_OWORD *)&v194[16];
    v52 = *(_OWORD *)&v194[32];
    v10[3] = *(_OWORD *)&v194[48];
    v10[2] = v52;
    v10[1] = v51;
    *v10 = v50;
    goto LABEL_38;
  }
  *(_QWORD *)v219 = *(_QWORD *)&v202[16];
  *(_QWORD *)&v219[8] = *(_QWORD *)&v202[16];
  *(_QWORD *)&v219[16] = *(_QWORD *)&v202[8];
  *(_QWORD *)&v219[24] = *(_QWORD *)&v202[16] + 32LL * *(_QWORD *)&v202[24];
  v232 = 1;
  sub_14004BC00(&v211, v219);
  v232 = 1;
  sub_140B3D580(v194, &v211);
  if ( *(_DWORD *)v194 != -1 )
    goto LABEL_37;
  if ( a6 )
  {
    v53 = *(void (__fastcall **)(__int64, const char *, __int64))(a7 + 32);
    v232 = 1;
    v53(a6, aPreparingAuth, 14);
  }
  v232 = 1;
  v54 = sub_141518E10(v49);
  v56 = v55;
  v232 = 1;
  sub_140BF6180(v202, v223, v7);
  v57 = *(_QWORD *)v202;
  v58 = v202[8];
  if ( *(_QWORD *)v202 != -1 )
  {
    v10 = (__int128 *)v224;
    *(_QWORD *)(v224 + 88) = *(_QWORD *)&v202[88];
    *(__int128 *)((char *)v10 + 73) = *(_OWORD *)&v202[73];
    v59 = *(_OWORD *)&v202[9];
    v60 = *(_OWORD *)&v202[25];
    v61 = *(_OWORD *)&v202[41];
    *(__int128 *)((char *)v10 + 57) = *(_OWORD *)&v202[57];
    *(__int128 *)((char *)v10 + 41) = v61;
    *(__int128 *)((char *)v10 + 25) = v60;
    *(__int128 *)((char *)v10 + 9) = v59;
    *(_QWORD *)v10 = v57;
    *((_BYTE *)v10 + 8) = v58;
    goto LABEL_38;
  }
  v227 = v202[8];
  *(_QWORD *)v202 = &v227;
  *(_QWORD *)&v202[8] = sub_141554060;
  v232 = 1;
  sub_141543AF0(v162, &unk_14185AAF9, v202);
  v232 = 1;
  sub_140AA8570(0, (unsigned int)aAuthPreflight, 14, v54, v56, (__int64)v162);
  v232 = 1;
  v63 = sub_141518E10(v62);
  v65 = v64;
  v232 = 1;
  sub_14057AC30((__int64)v202, v223);
  v69 = *(_QWORD *)v202;
  v70 = v202[8];
  if ( *(_QWORD *)v202 != -1 )
  {
    v10 = (__int128 *)v224;
    *(_QWORD *)(v224 + 88) = *(_QWORD *)&v202[88];
    *(__int128 *)((char *)v10 + 73) = *(_OWORD *)&v202[73];
    v71 = *(_OWORD *)&v202[9];
    v72 = *(_OWORD *)&v202[25];
    v73 = *(_OWORD *)&v202[41];
    *(__int128 *)((char *)v10 + 57) = *(_OWORD *)&v202[57];
    *(__int128 *)((char *)v10 + 41) = v73;
    *(__int128 *)((char *)v10 + 25) = v72;
    *(__int128 *)((char *)v10 + 9) = v71;
    *(_QWORD *)v10 = v69;
    *((_BYTE *)v10 + 8) = v70;
    goto LABEL_38;
  }
  v222 = v202[8];
  if ( (v202[8] & 1) != 0 )
  {
    nullsub_1(-1, v66, v67, v68, v144);
    v74 = sub_140001650(37, 1);
    if ( !v74 )
    {
      v232 = 1;
      sub_14176E54B(1, 37);
    }
    *(_OWORD *)(v74 + 16) = xmmword_14185AB2A;
    *(_OWORD *)v74 = xmmword_14185AB1A;
    *(_QWORD *)(v74 + 29) = 0x98A2E9AE97E982B1uLL;
    *(_QWORD *)v202 = 37;
    *(_QWORD *)&v202[8] = v74;
    *(_QWORD *)&v202[16] = 37;
    v232 = 1;
    sub_140542B50(&v217, v202);
  }
  v232 = 1;
  sub_140AAAA10(v202, v223);
  v75 = *(_QWORD *)v202;
  *(_OWORD *)v194 = *(_OWORD *)&v202[8];
  *(_OWORD *)&v194[16] = *(_OWORD *)&v202[24];
  *(_OWORD *)&v194[32] = *(_OWORD *)&v202[40];
  *(_OWORD *)&v194[48] = *(_OWORD *)&v202[56];
  *(_OWORD *)&v194[64] = *(_OWORD *)&v202[72];
  if ( *(_QWORD *)v202 != -1 )
  {
    v76 = *(_QWORD *)&v202[88];
    v10 = (__int128 *)v224;
    *(_OWORD *)(v224 + 72) = *(_OWORD *)&v194[64];
    v77 = *(_OWORD *)v194;
    v78 = *(_OWORD *)&v194[16];
    v79 = *(_OWORD *)&v194[32];
    *(__int128 *)((char *)v10 + 56) = *(_OWORD *)&v194[48];
    *(__int128 *)((char *)v10 + 40) = v79;
    *(__int128 *)((char *)v10 + 24) = v78;
    *(__int128 *)((char *)v10 + 8) = v77;
    *(_QWORD *)v10 = v75;
    *((_QWORD *)v10 + 11) = v76;
    goto LABEL_38;
  }
  v174 = *(_OWORD *)&v194[64];
  v170 = *(_OWORD *)v194;
  v171 = *(_OWORD *)&v194[16];
  v172 = *(_OWORD *)&v194[32];
  v173 = *(_OWORD *)&v194[48];
  if ( *(_QWORD *)&v194[64] )
  {
    v230 = 1;
    sub_140A9F870((unsigned int)v202, DWORD2(v173), *(_DWORD *)&v194[64], (unsigned int)&unk_14185AB4E, 3);
    *(_QWORD *)&v194[16] = *(_QWORD *)&v202[16];
    *(_OWORD *)v194 = *(_OWORD *)v202;
    *(_QWORD *)v202 = v194;
    *(_QWORD *)&v202[8] = sub_1400015F0;
    sub_141543AF0(v166, &unk_14185AB51, v202);
    if ( *(_QWORD *)v194 )
      sub_140001660(*(_QWORD *)&v194[8], *(_QWORD *)v194, 1);
    v230 = 1;
    sub_140542B50(&v209, v166);
  }
  v201 = v171;
  v200 = *((_QWORD *)&v172 + 1);
  if ( (unsigned __int64)v171 | *((_QWORD *)&v172 + 1) )
  {
    *(_QWORD *)v202 = &v201;
    *(_QWORD *)&v202[8] = sub_141553F20;
    *(_QWORD *)&v202[16] = &v200;
    *(_QWORD *)&v202[24] = sub_141553F20;
    v230 = 1;
    sub_141543AF0(v165, &unk_14185ABCA, v202);
    v230 = 1;
    sub_140542B50(&v217, v165);
  }
  *(_QWORD *)v202 = &v222;
  *(_QWORD *)&v202[8] = sub_141554060;
  *(_QWORD *)&v202[16] = &v201;
  *(_QWORD *)&v202[24] = sub_141553F20;
  *(_QWORD *)&v202[32] = &v200;
  *(_QWORD *)&v202[40] = sub_141553F20;
  v230 = 1;
  sub_141543AF0(v161, &unk_14185ABFB, v202);
  v230 = 1;
  sub_140AA8570(0, (unsigned int)aConfigTakeover, 15, v63, v65, (__int64)v161);
  v230 = 1;
  sub_140B3F290(v202);
  if ( *(_DWORD *)v202 != -1 )
  {
    v10 = (__int128 *)v224;
    *(_OWORD *)(v224 + 80) = *(_OWORD *)&v202[80];
    v10[4] = *(_OWORD *)&v202[64];
    v81 = *(_OWORD *)v202;
    v82 = *(_OWORD *)&v202[16];
    v83 = *(_OWORD *)&v202[32];
    v84 = *(_OWORD *)&v202[48];
LABEL_62:
    v10[3] = v84;
    v10[2] = v83;
    v10[1] = v82;
    *v10 = v81;
LABEL_63:
    sub_14049F190(&v170);
LABEL_38:
    if ( v207 )
      sub_140001660(v208, v207, 1);
    goto LABEL_7;
  }
  v230 = 1;
  v85 = sub_141518E10(v80);
  v87 = v86;
  *((_QWORD *)&v212 + 1) = aAimai1_0;
  *(_QWORD *)&v213 = 6;
  WORD4(v213) = 0;
  *(_QWORD *)&v211 = -1;
  v230 = 1;
  sub_140C0F880((unsigned int)v202, v223, (unsigned int)&v211, 0);
  v88 = *(_QWORD *)v202;
  *(_OWORD *)v219 = *(_OWORD *)&v202[8];
  *(_OWORD *)&v219[16] = *(_OWORD *)&v202[24];
  *(_OWORD *)&v219[32] = *(_OWORD *)&v202[40];
  *(_OWORD *)&v219[48] = *(_OWORD *)&v202[56];
  *(_OWORD *)&v219[64] = *(_OWORD *)&v202[72];
  *(_OWORD *)&v219[80] = *(_OWORD *)&v202[88];
  if ( *(_QWORD *)v202 == 2 )
  {
    v10 = (__int128 *)v224;
    *(_OWORD *)(v224 + 80) = *(_OWORD *)&v219[80];
    v10[4] = *(_OWORD *)&v219[64];
    v81 = *(_OWORD *)v219;
    v82 = *(_OWORD *)&v219[16];
    v83 = *(_OWORD *)&v219[32];
    v84 = *(_OWORD *)&v219[48];
    goto LABEL_62;
  }
  sub_14172B820(v195, v203, 192);
  *(_OWORD *)&v194[8] = *(_OWORD *)v219;
  *(_OWORD *)&v194[24] = *(_OWORD *)&v219[16];
  *(_OWORD *)&v194[40] = *(_OWORD *)&v219[32];
  *(_OWORD *)&v194[56] = *(_OWORD *)&v219[48];
  *(_OWORD *)&v194[72] = *(_OWORD *)&v219[64];
  *(_OWORD *)&v194[88] = *(_OWORD *)&v219[80];
  *(_QWORD *)v194 = v88;
  v228 = 1;
  sub_140B4F590(0, v85, v87, v194, v145);
  v228 = 1;
  sub_140B4FD60(v219, aRouteron, 8, v194);
  *(_QWORD *)v202 = *(_QWORD *)&v219[8];
  *(_QWORD *)&v202[8] = *(_QWORD *)&v219[8];
  *(_QWORD *)&v202[16] = *(_QWORD *)v219;
  *(_QWORD *)&v202[24] = *(_QWORD *)&v219[8] + 24LL * *(_QWORD *)&v219[16];
  v228 = 1;
  sub_14045B820(&v217, v202);
  v228 = 1;
  sub_140B502B0(&v209, aRouteron, 8, v194);
  v228 = 1;
  v90 = sub_141518E10(v89);
  v92 = v91;
  v228 = 1;
  sub_1405E0390(v202, v223);
  v233 = 1;
  sub_1405D7C20(v219, v202);
  if ( *(_QWORD *)v219 == -1 )
  {
    *(_QWORD *)v219 = &v204;
    *(_QWORD *)&v219[8] = sub_141553F20;
    *(_QWORD *)&v219[16] = &v205;
    *(_QWORD *)&v219[24] = sub_141553F20;
    *(_QWORD *)&v219[32] = &v206;
    *(_QWORD *)&v219[40] = sub_141553F20;
    v233 = 1;
    sub_141543AF0(v159, &unk_14185AC8B, v219);
    v233 = 1;
    sub_140AA8570(0, (unsigned int)aProjectState, 13, v90, v92, (__int64)v159);
  }
  else
  {
    if ( *(_QWORD *)v219 )
      sub_140001660(*(_QWORD *)&v219[8], *(_QWORD *)v219, 1);
    v233 = 1;
    sub_1405D7DD0(&v148, v223);
    if ( v148 == -1 )
    {
      v216 = v154;
      v215 = v153;
      v214 = v152;
      v213 = v151;
      v212 = v150;
      v211 = v149;
      v233 = 1;
      sub_140AB83E0(&v183, v90, v92, &v211);
      v154 = v188;
      v153 = v187;
      v152 = v186;
      v151 = v185;
      v150 = v184;
      v149 = v183;
      v10 = (__int128 *)v224;
      *(_OWORD *)(v224 + 80) = v188;
      v10[4] = v153;
      v119 = v149;
      v120 = v150;
      v121 = v151;
      v10[3] = v152;
      v10[2] = v121;
      v10[1] = v120;
      *v10 = v119;
      goto LABEL_91;
    }
    v220 = v155;
    *(_OWORD *)&v219[8] = v149;
    *(_OWORD *)&v219[24] = v150;
    *(_OWORD *)&v219[40] = v151;
    *(_OWORD *)&v219[56] = v152;
    *(_OWORD *)&v219[72] = v153;
    *(_OWORD *)&v219[88] = v154;
    *(_QWORD *)v219 = v148;
    *(_QWORD *)&v211 = (char *)&v220 + 8;
    *((_QWORD *)&v211 + 1) = sub_141554060;
    *(_QWORD *)&v212 = &v219[88];
    *((_QWORD *)&v212 + 1) = sub_141553F20;
    *(_QWORD *)&v213 = &v219[96];
    *((_QWORD *)&v213 + 1) = sub_141553F20;
    *(_QWORD *)&v214 = &v220;
    *((_QWORD *)&v214 + 1) = sub_141553F20;
    v225 = 1;
    sub_141543AF0(v160, &unk_14185AC3C, &v211);
    v225 = 1;
    sub_140AA8570(0, (unsigned int)aProjectState, 13, v90, v92, (__int64)v160);
    *(_QWORD *)&v212 = *(_QWORD *)&v219[16];
    v211 = *(_OWORD *)v219;
    v225 = 0;
    sub_140542B50(&v217, &v211);
    if ( *(_QWORD *)&v219[24] != -1 && *(_QWORD *)&v219[24] )
      sub_140001660(*(_QWORD *)&v219[32], *(_QWORD *)&v219[24], 1);
    if ( *(_QWORD *)&v219[56] != -1 && *(_QWORD *)&v219[56] )
      sub_140001660(*(_QWORD *)&v219[64], *(_QWORD *)&v219[56], 1);
  }
  if ( a6 )
  {
    v94 = *(void (__fastcall **)(__int64, const char *, __int64))(a7 + 32);
    v233 = 1;
    v94(a6, aWritingConfig, 14);
  }
  v233 = 1;
  v95 = sub_141518E10(v93);
  v97 = v96;
  *(_QWORD *)&v211 = v223;
  *((_QWORD *)&v211 + 1) = a4;
  *(_QWORD *)&v212 = &v207;
  *((_QWORD *)&v212 + 1) = &v227;
  *(_QWORD *)&v213 = &v175;
  v233 = 1;
  sub_140AAB170(v219, &v211);
  v98 = *(_QWORD *)v219;
  v99 = v219[8];
  if ( *(_QWORD *)v219 != -1 )
  {
    v10 = (__int128 *)v224;
    *(_QWORD *)(v224 + 88) = *(_QWORD *)&v219[88];
    *(__int128 *)((char *)v10 + 73) = *(_OWORD *)&v219[73];
    v100 = *(_OWORD *)&v219[9];
    v101 = *(_OWORD *)&v219[25];
    v102 = *(_OWORD *)&v219[41];
    *(__int128 *)((char *)v10 + 57) = *(_OWORD *)&v219[57];
    *(__int128 *)((char *)v10 + 41) = v102;
    *(__int128 *)((char *)v10 + 25) = v101;
    *(__int128 *)((char *)v10 + 9) = v100;
    *(_QWORD *)v10 = v98;
    *((_BYTE *)v10 + 8) = v99;
LABEL_91:
    sub_14049F2D0(v202);
    sub_1405229D0(v194);
    goto LABEL_63;
  }
  v221 = v219[8];
  *(_QWORD *)v219 = &v221;
  *(_QWORD *)&v219[8] = sub_141554060;
  v233 = 1;
  sub_141543AF0(v158, &unk_14185ACE5, v219);
  v233 = 1;
  sub_140AA8570(0, (unsigned int)aConfigSync, 11, v95, v97, (__int64)v158);
  if ( (v99 & 1) == 0 )
  {
    nullsub_1(v104, v103, v105, v106, v146);
    v122 = (void *)sub_140001650(85, 1);
    if ( !v122 )
    {
      v233 = 1;
      sub_14176E54B(1, 85);
    }
    qmemcpy(v122, "router reconcile did not become effective: missing active provider, proxy, or catalog", 85);
    v10 = (__int128 *)v224;
    *(_QWORD *)v224 = 10;
    *((_QWORD *)v10 + 1) = 85;
    *((_QWORD *)v10 + 2) = v122;
    *((_QWORD *)v10 + 3) = 85;
    goto LABEL_91;
  }
  v233 = 1;
  v107 = sub_141518E10(v104);
  v109 = v108;
  v233 = 1;
  sub_140C018C0(&v196, v223);
  *(_QWORD *)v219 = &v196;
  *(_QWORD *)&v219[8] = sub_141553F20;
  *(_QWORD *)&v219[16] = &v197;
  *(_QWORD *)&v219[24] = sub_141553F20;
  *(_QWORD *)&v219[32] = &v198;
  *(_QWORD *)&v219[40] = sub_141553F20;
  *(_QWORD *)&v219[48] = &v199;
  *(_QWORD *)&v219[56] = sub_141553F20;
  v233 = 1;
  sub_141543AF0(v157, &unk_14185AD52, v219);
  v233 = 1;
  sub_140AA8570(0, (unsigned int)aModelRestore, 13, v107, v109, (__int64)v157);
  if ( v196 | v199 )
  {
    *(_QWORD *)&v211 = v197 + v198;
    *(_QWORD *)v219 = &v196;
    *(_QWORD *)&v219[8] = sub_141553F20;
    *(_QWORD *)&v219[16] = &v211;
    *(_QWORD *)&v219[24] = sub_141553F20;
    *(_QWORD *)&v219[32] = &v199;
    *(_QWORD *)&v219[40] = sub_141553F20;
    v233 = 1;
    sub_141543AF0(v164, &unk_14185AD9B, v219);
    v233 = 1;
    sub_140542B50(&v217, v164);
  }
  v233 = 1;
  v111 = sub_141518E10(v110);
  v113 = v112;
  v233 = 1;
  sub_140C2D520(v219, v223, BYTE8(v181));
  v114 = *(_QWORD *)v219;
  v211 = *(_OWORD *)&v219[8];
  v212 = *(_OWORD *)&v219[24];
  v213 = *(_OWORD *)&v219[40];
  v214 = *(_OWORD *)&v219[56];
  v215 = *(_OWORD *)&v219[72];
  if ( *(_QWORD *)v219 != -1 )
  {
    v115 = *(_QWORD *)&v219[88];
    v10 = (__int128 *)v224;
    *(_OWORD *)(v224 + 72) = v215;
    v116 = v211;
    v117 = v212;
    v118 = v213;
    *(__int128 *)((char *)v10 + 56) = v214;
    *(__int128 *)((char *)v10 + 40) = v118;
    *(__int128 *)((char *)v10 + 24) = v117;
    *(__int128 *)((char *)v10 + 8) = v116;
    *(_QWORD *)v10 = v114;
    *((_QWORD *)v10 + 11) = v115;
    goto LABEL_91;
  }
  v183 = v211;
  v184 = v212;
  v185 = v213;
  v186 = v214;
  v187 = v215;
  v231 = 1;
  sub_140B501C0(v111, v113, &v183);
  v231 = 1;
  sub_140B50660(&v211, &v183);
  *(_QWORD *)v219 = *((_QWORD *)&v211 + 1);
  *(_QWORD *)&v219[8] = *((_QWORD *)&v211 + 1);
  *(_QWORD *)&v219[16] = v211;
  *(_QWORD *)&v219[24] = *((_QWORD *)&v211 + 1) + 24 * v212;
  v231 = 1;
  sub_14045B820(&v217, v219);
  if ( v227 && (v231 = 1, sub_140B546C0((unsigned int)v219, v223, v208, DWORD2(v208), a4), *(_DWORD *)v219 != -1)
    || (v231 = 1,
        v124 = sub_141518E10(v123),
        v126 = v125,
        v231 = 1,
        sub_140BF4CE0(v219, v223, v58),
        *(_DWORD *)v219 != -1) )
  {
    v127 = (_OWORD *)v224;
    *(_OWORD *)(v224 + 80) = *(_OWORD *)&v219[80];
    v127[4] = *(_OWORD *)&v219[64];
    v128 = *(_OWORD *)v219;
    v129 = *(_OWORD *)&v219[16];
    v130 = *(_OWORD *)&v219[32];
    v127[3] = *(_OWORD *)&v219[48];
    v127[2] = v130;
    v127[1] = v129;
    *v127 = v128;
    sub_140033330(&v183);
    v10 = (__int128 *)v224;
    goto LABEL_91;
  }
  *(_QWORD *)v219 = &v227;
  *(_QWORD *)&v219[8] = sub_141554060;
  v231 = 1;
  sub_141543AF0(v156, &unk_14185AAF9, v219);
  v231 = 1;
  sub_140AA8570(0, (unsigned int)aAuthCommit, 11, v124, v126, (__int64)v156);
  v131 = v227;
  nullsub_1(v133, v132, v134, v135, v147);
  if ( v131 )
  {
    v136 = 64;
    v137 = sub_140001650(64, 1);
    if ( !v137 )
    {
      v231 = 1;
      sub_14176E54B(1, 64);
    }
    *(_OWORD *)(v137 + 48) = xmmword_14185AE4B;
    *(_OWORD *)(v137 + 32) = xmmword_14185AE3B;
    *(_OWORD *)(v137 + 16) = xmmword_14185AE2B;
    *(_OWORD *)v137 = xmmword_14185AE1B;
  }
  else
  {
    v136 = 37;
    v137 = sub_140001650(37, 1);
    if ( !v137 )
    {
      v231 = 1;
      sub_14176E54B(1, 37);
    }
    *(_OWORD *)(v137 + 16) = xmmword_14185AE06;
    *(_OWORD *)v137 = xmmword_14185ADF6;
    *(_QWORD *)(v137 + 29) = 0xA894E7AF8FE58180uLL;
  }
  *(_QWORD *)v219 = v136;
  *(_QWORD *)&v219[8] = v137;
  *(_QWORD *)&v219[16] = v136;
  v231 = 1;
  sub_140542B50(&v217, v219);
  v192 = v218;
  v191 = v217;
  v190 = v210;
  v189 = v209;
  if ( v227 )
  {
    sub_14046B960(&v211, a4 + 48);
    v138 = v227;
  }
  else
  {
    *(_QWORD *)&v211 = 0;
    *((_QWORD *)&v211 + 1) = 8;
    *(_QWORD *)&v212 = 0;
    v138 = 0;
  }
  *(_QWORD *)&v219[16] = v192;
  v139 = v191;
  *(_OWORD *)v219 = v191;
  *(_QWORD *)&v219[40] = v190;
  *(_OWORD *)&v219[24] = v189;
  v140 = v211;
  *(_OWORD *)&v219[48] = v211;
  *(_QWORD *)&v219[64] = v212;
  v141 = v224;
  *(_QWORD *)(v224 + 72) = v212;
  *(_OWORD *)(v141 + 56) = v140;
  *(_OWORD *)(v141 + 40) = *(_OWORD *)&v219[32];
  *(_OWORD *)(v141 + 24) = *(_OWORD *)&v219[16];
  *(_OWORD *)(v141 + 8) = v139;
  *(_BYTE *)(v141 + 80) = v138;
  *(_QWORD *)v141 = -1;
  sub_140033330(&v183);
  sub_14049F2D0(v202);
  sub_1405229D0(v194);
  sub_14049F190(&v170);
  if ( v207 )
    sub_140001660(v208, v207, 1);
  v226 = 0;
  sub_140521BC0(&v175);
  return (__int128 *)v224;
}
