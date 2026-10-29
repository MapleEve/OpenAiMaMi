// win 1.2.7 | module src/core/relay/router_transition.rs | ea 0x14019f190 | name sub_14019F190
// win 1.2.7 | module src/core/relay/router_transition.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int128 *__fastcall sub_14019F190(
        __int128 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int128 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // r14
  _QWORD *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int64 v27; // rbx
  _OWORD *v28; // rcx
  __int64 v29; // r14
  int v30; // edx
  int v31; // r12d
  char v32; // al
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int128 *v35; // r8
  __int64 v36; // r9
  __int128 v37; // xmm0
  char v38; // al
  __int128 v39; // xmm1
  __int128 v40; // xmm1
  __int128 v41; // xmm2
  __int128 v42; // xmm3
  __int128 v43; // xmm4
  unsigned __int8 *v44; // rbx
  void (__fastcall *v45)(__int64, const char *, __int64); // rax
  __int64 v46; // r12
  int v47; // edx
  int v48; // r13d
  __int64 v49; // rcx
  __int64 v50; // rdi
  __int128 v51; // rax
  __int128 v52; // xmm1
  __int128 v53; // xmm2
  __int128 v54; // xmm3
  __int64 v55; // rdi
  _QWORD *v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rdi
  _QWORD *v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  unsigned int v64; // edx
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm2
  void (__fastcall *v68)(__int64, const char *, __int64); // rax
  __int64 v69; // r12
  int v70; // edx
  int v71; // r13d
  __int64 v72; // r8
  __int64 v73; // rcx
  char v74; // al
  __int64 v75; // r12
  int v76; // edx
  int v77; // r13d
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int128 v80; // xmm2
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rcx
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm2
  __int128 v87; // xmm0
  __int128 v88; // xmm1
  __int128 v89; // xmm2
  __int64 v90; // r15
  unsigned int v91; // edx
  unsigned int v92; // r12d
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // r13
  __int128 v96; // xmm0
  __int128 v97; // xmm1
  __int128 v98; // xmm2
  int v99; // r15d
  int v100; // edx
  int v101; // r12d
  __int128 v102; // xmm0
  __int128 v103; // xmm1
  __int128 v104; // xmm2
  int v105; // edx
  __int128 v106; // kr30_16
  __int128 v107; // kr40_16
  __int64 v108; // r13
  __int128 v109; // xmm0
  __int128 v110; // xmm1
  __int64 v111; // r14
  unsigned int v112; // edx
  unsigned int v113; // r15d
  __int64 v114; // rax
  __int64 v115; // rcx
  __int128 v116; // xmm0
  __int128 v117; // xmm1
  __int128 v118; // xmm2
  __int64 v119; // r15
  int v120; // edx
  int v121; // r14d
  __int128 v122; // xmm0
  __int128 v123; // xmm1
  __int128 v124; // xmm2
  char v125; // bl
  __int64 v126; // rcx
  __int64 v127; // rdi
  __int64 v128; // rax
  char v129; // al
  __int64 v130; // [rsp+20h] [rbp-60h]
  _QWORD v131[3]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v132[24]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v133[3]; // [rsp+78h] [rbp-8h] BYREF
  _QWORD v134[3]; // [rsp+90h] [rbp+10h] BYREF
  _QWORD v135[3]; // [rsp+A8h] [rbp+28h] BYREF
  _BYTE v136[24]; // [rsp+C0h] [rbp+40h] BYREF
  _BYTE v137[24]; // [rsp+D8h] [rbp+58h] BYREF
  _QWORD v138[3]; // [rsp+F0h] [rbp+70h] BYREF
  _BYTE v139[24]; // [rsp+108h] [rbp+88h] BYREF
  _BYTE v140[24]; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v141; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v142; // [rsp+148h] [rbp+C8h]
  __int128 v143; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v144; // [rsp+160h] [rbp+E0h]
  __int128 v145; // [rsp+170h] [rbp+F0h]
  __int128 v146; // [rsp+180h] [rbp+100h]
  __int128 v147; // [rsp+190h] [rbp+110h]
  _QWORD v148[2]; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v149; // [rsp+1B0h] [rbp+130h]
  __int128 v150; // [rsp+1C0h] [rbp+140h]
  __int128 v151; // [rsp+1D0h] [rbp+150h]
  __int128 v152; // [rsp+1E0h] [rbp+160h]
  __int128 v153; // [rsp+1F0h] [rbp+170h]
  __int128 v154; // [rsp+200h] [rbp+180h] BYREF
  __int128 v155; // [rsp+210h] [rbp+190h]
  __int128 v156; // [rsp+220h] [rbp+1A0h]
  __int128 v157; // [rsp+230h] [rbp+1B0h]
  __int128 v158; // [rsp+240h] [rbp+1C0h]
  __int128 v159; // [rsp+250h] [rbp+1D0h]
  __int128 v160; // [rsp+260h] [rbp+1E0h]
  __int128 v161; // [rsp+270h] [rbp+1F0h]
  __int128 v162; // [rsp+280h] [rbp+200h]
  __int128 v163; // [rsp+290h] [rbp+210h]
  __int64 v164; // [rsp+2A0h] [rbp+220h]
  unsigned __int128 v165; // [rsp+2B0h] [rbp+230h] BYREF
  __int128 v166; // [rsp+2C0h] [rbp+240h]
  __int128 v167; // [rsp+2D0h] [rbp+250h]
  __int128 v168; // [rsp+2E0h] [rbp+260h]
  __int128 v169; // [rsp+2F0h] [rbp+270h]
  _BYTE v170[88]; // [rsp+300h] [rbp+280h] BYREF
  __int128 v171; // [rsp+358h] [rbp+2D8h]
  __m128i v172[8]; // [rsp+368h] [rbp+2E8h] BYREF
  _OWORD v173[2]; // [rsp+3F0h] [rbp+370h] BYREF
  __int64 v174; // [rsp+410h] [rbp+390h]
  __int64 v175; // [rsp+418h] [rbp+398h]
  __int64 v176; // [rsp+420h] [rbp+3A0h]
  __int64 v177; // [rsp+428h] [rbp+3A8h] BYREF
  __int64 v178; // [rsp+430h] [rbp+3B0h] BYREF
  __int64 v179; // [rsp+438h] [rbp+3B8h] BYREF
  __int128 v180; // [rsp+440h] [rbp+3C0h] BYREF
  __int64 v181; // [rsp+450h] [rbp+3D0h] BYREF
  __int64 v182; // [rsp+458h] [rbp+3D8h] BYREF
  __int128 v183; // [rsp+460h] [rbp+3E0h]
  int v184; // [rsp+474h] [rbp+3F4h]
  __int128 v185; // [rsp+478h] [rbp+3F8h] BYREF
  __int64 v186; // [rsp+488h] [rbp+408h]
  unsigned __int128 v187; // [rsp+490h] [rbp+410h] BYREF
  __int128 v188; // [rsp+4A0h] [rbp+420h]
  __int128 v189; // [rsp+4B0h] [rbp+430h]
  __int128 v190; // [rsp+4C0h] [rbp+440h]
  __int128 v191; // [rsp+4D0h] [rbp+450h]
  __int128 v192; // [rsp+4E0h] [rbp+460h]
  __int64 v193; // [rsp+4F8h] [rbp+478h]
  __int128 v194; // [rsp+500h] [rbp+480h] BYREF
  __int64 v195; // [rsp+510h] [rbp+490h]
  __int64 v196; // [rsp+518h] [rbp+498h]
  _BYTE v197[104]; // [rsp+520h] [rbp+4A0h] BYREF
  __m128i v198[9]; // [rsp+588h] [rbp+508h] BYREF
  char v199; // [rsp+61Ah] [rbp+59Ah] BYREF
  char v200; // [rsp+61Bh] [rbp+59Bh]
  char v201; // [rsp+61Ch] [rbp+59Ch] BYREF
  char v202; // [rsp+61Dh] [rbp+59Dh]
  char v203; // [rsp+61Eh] [rbp+59Eh]
  char v204; // [rsp+61Fh] [rbp+59Fh]
  __int64 v205; // [rsp+620h] [rbp+5A0h]

  v205 = -2;
  v143 = a5;
  sub_140C967E0(v197, a2);
  v11 = *(_QWORD *)v197;
  if ( *(_QWORD *)v197 != -1
    || (sub_140252A60(v197, *(_QWORD *)(a2 + 776), *(_QWORD *)(a2 + 784)), v11 = *(_QWORD *)v197, *(_QWORD *)v197 != -1) )
  {
    v164 = *(_QWORD *)&v197[88];
    v163 = *(_OWORD *)&v197[72];
    v162 = *(_OWORD *)&v197[56];
    v161 = *(_OWORD *)&v197[40];
    v160 = *(_OWORD *)&v197[24];
    v159 = *(_OWORD *)&v197[8];
    *(_QWORD *)a1 = v11;
    v12 = v160;
    v13 = v161;
    v14 = v162;
    *(__int128 *)((char *)a1 + 8) = v159;
    *(__int128 *)((char *)a1 + 24) = v12;
    *(__int128 *)((char *)a1 + 40) = v13;
    *(__int128 *)((char *)a1 + 56) = v14;
    *(__int128 *)((char *)a1 + 72) = v163;
    *((_QWORD *)a1 + 11) = v164;
    return a1;
  }
  v196 = a4;
  v16 = *(_QWORD *)&v197[8];
  v17 = *(_QWORD *)&v197[24];
  v18 = *(_QWORD *)&v197[16];
  if ( *(_QWORD *)&v197[24] )
  {
    v19 = (_QWORD *)(*(_QWORD *)&v197[16] + 56LL);
    do
    {
      v20 = *(v19 - 7);
      if ( v20 )
        sub_140001660(*(v19 - 6), v20, 1);
      v21 = *(v19 - 1);
      if ( v21 != -1 && v21 )
        sub_140001660(*v19, v21, 1);
      v22 = *(v19 - 4);
      if ( v22 )
        sub_140001660(*(v19 - 3), v22, 1);
      v19 += 9;
      --v17;
    }
    while ( v17 );
  }
  if ( v16 )
    sub_140001660(v18, 72 * v16, 8);
  sub_140EFE1A0(v197);
  if ( *(_DWORD *)v197 != -1 )
  {
    a1[5] = *(_OWORD *)&v197[80];
    a1[4] = *(_OWORD *)&v197[64];
    v24 = *(_OWORD *)v197;
    v25 = *(_OWORD *)&v197[16];
    v26 = *(_OWORD *)&v197[32];
    a1[3] = *(_OWORD *)&v197[48];
    a1[2] = v26;
    a1[1] = v25;
    *a1 = v24;
    return a1;
  }
  nullsub_1(v23);
  v193 = sub_140001650(24, 8);
  if ( !v193 )
    sub_141938D11(8, 24);
  *(_QWORD *)v197 = &v143;
  *(_QWORD *)&v197[8] = sub_140186EE0;
  sub_1416ABFD0(&v141, &unk_1419D53CA, v197);
  v27 = v196;
  v28 = (_OWORD *)v193;
  *(_QWORD *)(v193 + 16) = v142;
  *v28 = v141;
  *(_QWORD *)&v194 = 1;
  *((_QWORD *)&v194 + 1) = v28;
  v195 = 1;
  *(_QWORD *)&v185 = 0;
  *((_QWORD *)&v185 + 1) = 8;
  v186 = 0;
  v200 = 1;
  v29 = sub_14167FC00();
  v31 = v30;
  if ( *(_DWORD *)v27 != -1 )
  {
    v200 = 1;
    v32 = sub_140FE4820(v27, a2);
    v33 = -1;
    v34 = v27;
    if ( v32 )
      goto LABEL_26;
    v200 = 1;
    sub_1401BDB90(v197, v27);
    v33 = *(_QWORD *)v197;
    if ( *(_QWORD *)v197 != -1 )
    {
      v34 = *(_QWORD *)&v197[8];
      *(_OWORD *)v170 = *(_OWORD *)&v197[16];
      *(_OWORD *)&v170[16] = *(_OWORD *)&v197[32];
      *(_OWORD *)&v170[32] = *(_OWORD *)&v197[48];
      *(_OWORD *)&v170[48] = *(_OWORD *)&v197[64];
      *(_OWORD *)&v170[64] = *(_OWORD *)&v197[80];
LABEL_25:
      v191 = *(_OWORD *)&v170[64];
      v40 = *(_OWORD *)v170;
      v41 = *(_OWORD *)&v170[16];
      v42 = *(_OWORD *)&v170[32];
      v43 = *(_OWORD *)&v170[48];
      v190 = *(_OWORD *)&v170[48];
      v189 = *(_OWORD *)&v170[32];
      v188 = *(_OWORD *)&v170[16];
      v187 = *(_OWORD *)v170;
      a1[5] = *(_OWORD *)&v170[64];
      a1[4] = v43;
      a1[3] = v42;
      a1[2] = v41;
      a1[1] = v40;
      *(_QWORD *)a1 = v33;
      *((_QWORD *)a1 + 1) = v34;
LABEL_33:
      v55 = v186;
      if ( v186 )
      {
        v56 = (_QWORD *)(*((_QWORD *)&v185 + 1) + 8LL);
        do
        {
          v57 = *(v56 - 1);
          if ( v57 )
            sub_140001660(*v56, v57, 1);
          v56 += 3;
          --v55;
        }
        while ( v55 );
      }
      if ( (_QWORD)v185 )
        sub_140001660(*((_QWORD *)&v185 + 1), 24 * v185, 8);
      v58 = v195;
      if ( v195 )
      {
        v59 = (_QWORD *)(*((_QWORD *)&v194 + 1) + 8LL);
        do
        {
          v60 = *(v59 - 1);
          if ( v60 )
            sub_140001660(*v59, v60, 1);
          v59 += 3;
          --v58;
        }
        while ( v58 );
      }
      if ( (_QWORD)v194 )
        sub_140001660(*((_QWORD *)&v194 + 1), 24 * v194, 8);
      return a1;
    }
  }
  v35 = *(__int128 **)(v27 + 104);
  v36 = *(_QWORD *)(v27 + 112);
  v37 = *(_OWORD *)(v27 + 128);
  v38 = *(_BYTE *)(v27 + 168) ^ 1;
  v39 = *(_OWORD *)(v27 + 152);
  v200 = 1;
  sub_141018040((__int64)v197, a2, v35, v36, v37, *((__int64 *)&v37 + 1), v38, (_QWORD *)v39, *((__int64 *)&v39 + 1));
  v33 = *(_QWORD *)&v197[8];
  v34 = *(_QWORD *)&v197[16];
  *(_OWORD *)v170 = *(_OWORD *)&v197[24];
  *(_OWORD *)&v170[16] = *(_OWORD *)&v197[40];
  *(_OWORD *)&v170[32] = *(_OWORD *)&v197[56];
  *(_OWORD *)&v170[48] = *(_OWORD *)&v197[72];
  *(_OWORD *)&v170[64] = *(_OWORD *)&v197[88];
  if ( *(_DWORD *)v197 == 1 )
    goto LABEL_25;
LABEL_26:
  v191 = *(_OWORD *)&v170[64];
  v190 = *(_OWORD *)&v170[48];
  v149 = *(_OWORD *)v170;
  v150 = *(_OWORD *)&v170[16];
  v151 = *(_OWORD *)&v170[32];
  v152 = *(_OWORD *)&v170[48];
  v153 = *(_OWORD *)&v170[64];
  v148[0] = v33;
  v148[1] = v34;
  v170[0] = v33 == -1;
  *(_QWORD *)v197 = v170;
  *(_QWORD *)&v197[8] = sub_1416BCC50;
  v44 = (unsigned __int8 *)(v27 + 168);
  *(_QWORD *)&v197[16] = v44;
  *(_QWORD *)&v197[24] = sub_1416BCC50;
  v202 = 1;
  sub_1416ABFD0(v135, &unk_1419D53F5, v197);
  v202 = 1;
  sub_14019EF00(0, (__int64)aCatalogPreflig, 17, v29, v31, v135);
  if ( a6 )
  {
    v45 = *(void (__fastcall **)(__int64, const char *, __int64))(a7 + 32);
    v202 = 1;
    v45(a6, aStartingProxy, 14);
  }
  v202 = 1;
  v46 = sub_14167FC00();
  v48 = v47;
  v202 = 1;
  sub_140D83600((__int64)v197, (volatile signed __int64 **)a3);
  v49 = *(_QWORD *)v197;
  if ( *(_QWORD *)v197 != -1 )
  {
    v50 = *(_QWORD *)&v197[8];
    v51 = *(_OWORD *)&v197[16];
    v144 = *(_OWORD *)&v197[32];
    v145 = *(_OWORD *)&v197[48];
    v146 = *(_OWORD *)&v197[64];
    v147 = *(_OWORD *)&v197[80];
LABEL_30:
    *(_QWORD *)a1 = v49;
    *((_QWORD *)a1 + 1) = v50;
    a1[1] = v51;
    v52 = v145;
    v53 = v146;
    v54 = v147;
    a1[2] = v144;
    a1[3] = v52;
    a1[4] = v53;
    a1[5] = v54;
LABEL_31:
    if ( LODWORD(v148[0]) != -1 )
      sub_140195A30((__int64)v148);
    goto LABEL_33;
  }
  v61 = *(_QWORD *)(a3 + 24);
  v202 = 1;
  sub_140D81460(v197, v61);
  if ( *(_QWORD *)v197 == -1 )
  {
    nullsub_1(v62);
    v50 = 49;
    *(_QWORD *)&v51 = sub_140001650(49, 1);
    if ( !(_QWORD)v51 )
    {
      v202 = 1;
      sub_141938D2B(1, 49);
    }
    qmemcpy((void *)v51, "relay proxy started without an available root URL", 49);
    v49 = 10;
    *((_QWORD *)&v51 + 1) = 49;
    goto LABEL_30;
  }
  v182 = *(_QWORD *)v197;
  v183 = *(_OWORD *)&v197[8];
  LOBYTE(v179) = 0;
  *(_QWORD *)&v173[0] = aProxyStarted;
  *((_QWORD *)&v173[0] + 1) = 13;
  *(_QWORD *)&v154 = v46;
  DWORD2(v154) = v48;
  v204 = 1;
  v63 = sub_14167FD50(&v154);
  v165 = 0x3E8 * (unsigned __int128)(unsigned __int64)v63 + v64 / 0xF4240uLL;
  *(_QWORD *)&v187 = aProxyRootPrese;
  *((_QWORD *)&v187 + 1) = 23;
  *(_QWORD *)v197 = &v179;
  *(_QWORD *)&v197[8] = sub_140290EB0;
  *(_QWORD *)&v197[16] = v173;
  *(_QWORD *)&v197[24] = sub_140186EE0;
  *(_QWORD *)&v197[32] = &v165;
  *(_QWORD *)&v197[40] = sub_1416B95D0;
  *(_QWORD *)&v197[48] = &v187;
  *(_QWORD *)&v197[56] = sub_140186EE0;
  v204 = 1;
  sub_1416ABFD0(v170, &unk_1419D5389, v197);
  v204 = 1;
  sub_14019B500((unsigned int)aRouterTransiti_0, 17, (unsigned int)aPhaseTiming, 12, (__int64)v170);
  v204 = 1;
  sub_140EEE3A0(v197);
  if ( *(_DWORD *)v197 != -1 )
  {
    a1[5] = *(_OWORD *)&v197[80];
    a1[4] = *(_OWORD *)&v197[64];
    v65 = *(_OWORD *)v197;
    v66 = *(_OWORD *)&v197[16];
    v67 = *(_OWORD *)&v197[32];
    a1[3] = *(_OWORD *)&v197[48];
    a1[2] = v67;
    a1[1] = v66;
    *a1 = v65;
    goto LABEL_57;
  }
  if ( a6 )
  {
    v68 = *(void (__fastcall **)(__int64, const char *, __int64))(a7 + 32);
    v204 = 1;
    v68(a6, aPreparingAuth, 14);
  }
  v204 = 1;
  v69 = sub_14167FC00();
  v71 = v70;
  v72 = *v44;
  v204 = 1;
  sub_140F62670(v197, a2, v72);
  v73 = *(_QWORD *)v197;
  v74 = v197[8];
  if ( *(_QWORD *)v197 != -1 )
    goto LABEL_56;
  v201 = v197[8];
  *(_QWORD *)v197 = &v201;
  *(_QWORD *)&v197[8] = sub_1416BCC50;
  v204 = 1;
  sub_1416ABFD0(v134, &unk_1419D5463, v197);
  v204 = 1;
  sub_14019EF00(0, (__int64)aAuthPreflight, 14, v69, v71, v134);
  v204 = 1;
  v75 = sub_14167FC00();
  v77 = v76;
  v204 = 1;
  sub_140F084E0((__int64)v197, a2);
  v73 = *(_QWORD *)v197;
  v74 = v197[8];
  if ( *(_QWORD *)v197 != -1 )
  {
LABEL_56:
    *((_QWORD *)a1 + 11) = *(_QWORD *)&v197[88];
    *(__int128 *)((char *)a1 + 73) = *(_OWORD *)&v197[73];
    v78 = *(_OWORD *)&v197[9];
    v79 = *(_OWORD *)&v197[25];
    v80 = *(_OWORD *)&v197[41];
    *(__int128 *)((char *)a1 + 57) = *(_OWORD *)&v197[57];
    *(__int128 *)((char *)a1 + 41) = v80;
    *(__int128 *)((char *)a1 + 25) = v79;
    *(__int128 *)((char *)a1 + 9) = v78;
    *(_QWORD *)a1 = v73;
    *((_BYTE *)a1 + 8) = v74;
    goto LABEL_57;
  }
  v199 = v197[8];
  if ( (v197[8] & 1) != 0 )
  {
    nullsub_1(-1);
    v81 = sub_140001650(37, 1);
    if ( !v81 )
    {
      v204 = 1;
      sub_141938D2B(1, 37);
    }
    *(_OWORD *)(v81 + 16) = xmmword_1419D5494;
    *(_OWORD *)v81 = xmmword_1419D5484;
    *(_QWORD *)(v81 + 29) = 0x98A2E9AE97E982B1uLL;
    *(_QWORD *)v197 = 37;
    *(_QWORD *)&v197[8] = v81;
    *(_QWORD *)&v197[16] = 37;
    v204 = 1;
    sub_1401F4600(&v194, v197);
  }
  v204 = 1;
  sub_1401A0EE0((__int128 *)v197, a2);
  v82 = *(_QWORD *)v197;
  *(_OWORD *)v170 = *(_OWORD *)&v197[8];
  *(_OWORD *)&v170[16] = *(_OWORD *)&v197[24];
  *(_OWORD *)&v170[32] = *(_OWORD *)&v197[40];
  *(_OWORD *)&v170[48] = *(_OWORD *)&v197[56];
  *(_OWORD *)&v170[64] = *(_OWORD *)&v197[72];
  if ( *(_QWORD *)v197 != -1 )
  {
    v83 = *(_QWORD *)&v197[88];
    *(__int128 *)((char *)a1 + 72) = *(_OWORD *)&v170[64];
    v84 = *(_OWORD *)v170;
    v85 = *(_OWORD *)&v170[16];
    v86 = *(_OWORD *)&v170[32];
    *(__int128 *)((char *)a1 + 56) = *(_OWORD *)&v170[48];
    *(__int128 *)((char *)a1 + 40) = v86;
    *(__int128 *)((char *)a1 + 24) = v85;
    *(__int128 *)((char *)a1 + 8) = v84;
    *(_QWORD *)a1 = v82;
    *((_QWORD *)a1 + 11) = v83;
    goto LABEL_57;
  }
  v158 = *(_OWORD *)&v170[64];
  v154 = *(_OWORD *)v170;
  v155 = *(_OWORD *)&v170[16];
  v156 = *(_OWORD *)&v170[32];
  v157 = *(_OWORD *)&v170[48];
  if ( *(_QWORD *)&v170[64] )
  {
    v203 = 1;
    sub_140D1EE10((unsigned int)v197, DWORD2(v157), *(_DWORD *)&v170[64], (unsigned int)&unk_1419D54B8, 3);
    *(_QWORD *)&v170[16] = *(_QWORD *)&v197[16];
    *(_OWORD *)v170 = *(_OWORD *)v197;
    *(_QWORD *)v197 = v170;
    *(_QWORD *)&v197[8] = sub_1400015F0;
    sub_1416ABFD0(v140, &unk_1419D54BB, v197);
    if ( *(_QWORD *)v170 )
      sub_140001660(*(_QWORD *)&v170[8], *(_QWORD *)v170, 1);
    v203 = 1;
    sub_1401F4600(&v185, v140);
  }
  v178 = v155;
  v177 = *((_QWORD *)&v156 + 1);
  if ( (unsigned __int64)v155 | *((_QWORD *)&v156 + 1) )
  {
    *(_QWORD *)v197 = &v178;
    *(_QWORD *)&v197[8] = sub_1416BCB10;
    *(_QWORD *)&v197[16] = &v177;
    *(_QWORD *)&v197[24] = sub_1416BCB10;
    v203 = 1;
    sub_1416ABFD0(v139, &unk_1419D5534, v197);
    v203 = 1;
    sub_1401F4600(&v194, v139);
  }
  *(_QWORD *)v197 = &v199;
  *(_QWORD *)&v197[8] = sub_1416BCC50;
  *(_QWORD *)&v197[16] = &v178;
  *(_QWORD *)&v197[24] = sub_1416BCB10;
  *(_QWORD *)&v197[32] = &v177;
  *(_QWORD *)&v197[40] = sub_1416BCB10;
  v203 = 1;
  sub_1416ABFD0(v133, &unk_1419D5565, v197);
  v203 = 1;
  sub_14019EF00(0, (__int64)aConfigTakeover, 15, v75, v77, v133);
  v203 = 1;
  sub_140EEE3A0(v197);
  if ( *(_DWORD *)v197 != -1 )
  {
    a1[5] = *(_OWORD *)&v197[80];
    a1[4] = *(_OWORD *)&v197[64];
    v87 = *(_OWORD *)v197;
    v88 = *(_OWORD *)&v197[16];
    v89 = *(_OWORD *)&v197[32];
    a1[3] = *(_OWORD *)&v197[48];
    a1[2] = v89;
    a1[1] = v88;
    *a1 = v87;
LABEL_93:
    sub_140035660(&v154);
LABEL_57:
    if ( v182 )
      sub_140001660(v183, v182, 1);
    goto LABEL_31;
  }
  v203 = 1;
  v90 = sub_14167FC00();
  v92 = v91;
  v203 = 1;
  v93 = sub_140893A90(&off_1419D8E00);
  v173[1] = xmmword_1419D6520;
  v173[0] = *(_OWORD *)&off_1419D6510;
  v174 = v93;
  v175 = v94;
  v176 = 0;
  *(_QWORD *)&v165 = aAimai1_0;
  *((_QWORD *)&v165 + 1) = 6;
  LOWORD(v166) = 0;
  sub_140237C40((__int64)v197, a2, (__int64)&v165, 0, v130, (__int64)v173);
  v95 = *(_QWORD *)v197;
  v187 = *(_OWORD *)&v197[8];
  v188 = *(_OWORD *)&v197[24];
  v189 = *(_OWORD *)&v197[40];
  v190 = *(_OWORD *)&v197[56];
  v191 = *(_OWORD *)&v197[72];
  v192 = *(_OWORD *)&v197[88];
  if ( *(_QWORD *)v197 == 2 )
  {
    a1[5] = v192;
    a1[4] = v191;
    v96 = v187;
    v97 = v188;
    v98 = v189;
    a1[3] = v190;
    a1[2] = v98;
    a1[1] = v97;
    *a1 = v96;
LABEL_92:
    v203 = 1;
    sub_14036FA40(v173);
    goto LABEL_93;
  }
  sub_1418F44E0(v172, v198, 0x88u);
  *(_OWORD *)&v170[8] = v187;
  *(_OWORD *)&v170[24] = v188;
  *(_OWORD *)&v170[40] = v189;
  *(_OWORD *)&v170[56] = v190;
  *(_OWORD *)&v170[72] = v191;
  v171 = v192;
  *(_QWORD *)v170 = v95;
  sub_1402293E0(0, v90, v92, v170);
  sub_140229910(&v187, aRouteron, 8, v170);
  *(_QWORD *)v197 = *((_QWORD *)&v187 + 1);
  *(_QWORD *)&v197[8] = *((_QWORD *)&v187 + 1);
  *(_QWORD *)&v197[16] = v187;
  *(_QWORD *)&v197[24] = *((_QWORD *)&v187 + 1) + 24 * v188;
  sub_1403E4A40(&v194, v197);
  sub_140229D00(&v185, aRouteron, 8, v170);
  if ( a6 )
    (*(void (__fastcall **)(__int64, const char *, __int64))(a7 + 32))(a6, aWritingConfig, 14);
  v99 = sub_14167FC00();
  v101 = v100;
  *(_QWORD *)&v187 = a2;
  *((_QWORD *)&v187 + 1) = v196;
  *(_QWORD *)&v188 = &v182;
  *((_QWORD *)&v188 + 1) = &v201;
  *(_QWORD *)&v189 = v148;
  sub_1401A1640((__int128 *)v197, (__int64)&v187);
  if ( *(_DWORD *)v197 != -1 )
  {
    a1[5] = *(_OWORD *)&v197[80];
    a1[4] = *(_OWORD *)&v197[64];
    v102 = *(_OWORD *)v197;
    v103 = *(_OWORD *)&v197[16];
    v104 = *(_OWORD *)&v197[32];
    a1[3] = *(_OWORD *)&v197[48];
    a1[2] = v104;
    a1[1] = v103;
    *a1 = v102;
LABEL_91:
    sub_1401968E0(&v170[72]);
    goto LABEL_92;
  }
  sub_14019F070(0, v99, v101, (unsigned int)&unk_1419D55D4, 19);
  v193 = sub_14167FC00();
  v184 = v105;
  sub_140C90350((__int64)v197, a2);
  v106 = *(_OWORD *)v197;
  v107 = *(_OWORD *)&v197[16];
  v108 = *(_QWORD *)&v197[32];
  if ( *(_QWORD *)v197 != -1 )
  {
    *((_QWORD *)a1 + 11) = *(_QWORD *)&v197[88];
    v109 = *(_OWORD *)&v197[40];
    v110 = *(_OWORD *)&v197[56];
    *(__int128 *)((char *)a1 + 72) = *(_OWORD *)&v197[72];
    *(__int128 *)((char *)a1 + 56) = v110;
    *(__int128 *)((char *)a1 + 40) = v109;
    *a1 = v106;
    a1[1] = v107;
    *((_QWORD *)a1 + 4) = v108;
    goto LABEL_91;
  }
  v179 = *(_QWORD *)&v197[8];
  v180 = *(_OWORD *)&v197[16];
  v181 = *(_QWORD *)&v197[32];
  *(_QWORD *)v197 = &v179;
  *(_QWORD *)&v197[8] = sub_1416BCB10;
  *(_QWORD *)&v197[16] = &v180;
  *(_QWORD *)&v197[24] = sub_1416BCB10;
  *(_QWORD *)&v197[32] = (char *)&v180 + 8;
  *(_QWORD *)&v197[40] = sub_1416BCB10;
  *(_QWORD *)&v197[48] = &v181;
  *(_QWORD *)&v197[56] = sub_1416BCB10;
  sub_1416ABFD0(v138, &unk_1419D55E7, v197);
  sub_14019EF00(0, (__int64)aModelRestore, 13, v193, v184, v138);
  if ( v108 | *((_QWORD *)&v106 + 1) )
  {
    *(_QWORD *)&v187 = v107 + *((_QWORD *)&v107 + 1);
    *(_QWORD *)v197 = &v179;
    *(_QWORD *)&v197[8] = sub_1416BCB10;
    *(_QWORD *)&v197[16] = &v187;
    *(_QWORD *)&v197[24] = sub_1416BCB10;
    *(_QWORD *)&v197[32] = &v181;
    *(_QWORD *)&v197[40] = sub_1416BCB10;
    sub_1416ABFD0(v137, &unk_1419D5630, v197);
    sub_1401F4600(&v194, v137);
    if ( v108 )
    {
      *(_QWORD *)v197 = &v181;
      *(_QWORD *)&v197[8] = sub_1416BCB10;
      sub_1416ABFD0(v136, &unk_1419D5680, v197);
      sub_1401F4600(&v185, v136);
    }
  }
  v111 = sub_14167FC00();
  v113 = v112;
  sub_1402620D0((__int64)v197, a2, (__int64 *)v173);
  v114 = *(_QWORD *)v197;
  v187 = *(_OWORD *)&v197[8];
  v188 = *(_OWORD *)&v197[24];
  v189 = *(_OWORD *)&v197[40];
  v190 = *(_OWORD *)&v197[56];
  v191 = *(_OWORD *)&v197[72];
  if ( *(_QWORD *)v197 != -1 )
  {
    v115 = *(_QWORD *)&v197[88];
    *(__int128 *)((char *)a1 + 72) = v191;
    v116 = v187;
    v117 = v188;
    v118 = v189;
    *(__int128 *)((char *)a1 + 56) = v190;
    *(__int128 *)((char *)a1 + 40) = v118;
    *(__int128 *)((char *)a1 + 24) = v117;
    *(__int128 *)((char *)a1 + 8) = v116;
    *(_QWORD *)a1 = v114;
    *((_QWORD *)a1 + 11) = v115;
    goto LABEL_91;
  }
  v165 = v187;
  v166 = v188;
  v167 = v189;
  v168 = v190;
  v169 = v191;
  sub_140229C10(v111, v113, &v165);
  sub_14022A0A0(&v187, &v165);
  *(_QWORD *)v197 = *((_QWORD *)&v187 + 1);
  *(_QWORD *)&v197[8] = *((_QWORD *)&v187 + 1);
  *(_QWORD *)&v197[16] = v187;
  *(_QWORD *)&v197[24] = *((_QWORD *)&v187 + 1) + 24 * v188;
  sub_1403E4A40(&v194, v197);
  *(_QWORD *)&v187 = v176;
  *(_QWORD *)v197 = &v187;
  *(_QWORD *)&v197[8] = sub_1416BCB10;
  sub_1416ABFD0(v132, &unk_1419D56A1, v197);
  sub_14019B500((unsigned int)aRouterTransiti_0, 17, (unsigned int)aThreadReadReus, 17, (__int64)v132);
  if ( v201 && (sub_14022A8E0((unsigned int)v197, a2, v183, DWORD2(v183), v196), *(_DWORD *)v197 != -1)
    || (sub_140EEE3A0(v197), *(_DWORD *)v197 != -1)
    || (v119 = sub_14167FC00(), v121 = v120, sub_140F627E0(v197, a2), *(_DWORD *)v197 != -1) )
  {
    a1[5] = *(_OWORD *)&v197[80];
    a1[4] = *(_OWORD *)&v197[64];
    v122 = *(_OWORD *)v197;
    v123 = *(_OWORD *)&v197[16];
    v124 = *(_OWORD *)&v197[32];
    a1[3] = *(_OWORD *)&v197[48];
    a1[2] = v124;
    a1[1] = v123;
    *a1 = v122;
    sub_140025530(&v165);
    goto LABEL_91;
  }
  *(_QWORD *)v197 = &v201;
  *(_QWORD *)&v197[8] = sub_1416BCC50;
  sub_1416ABFD0(v131, &unk_1419D5463, v197);
  sub_14019EF00(0, (__int64)aAuthDetachedVe, 20, v119, v121, v131);
  v125 = v201;
  nullsub_1(v126);
  if ( v125 )
  {
    v127 = 85;
    v128 = sub_140001650(85, 1);
    if ( !v128 )
      sub_141938D2B(1, 85);
    *(_OWORD *)(v128 + 64) = xmmword_1419D576D;
    *(_OWORD *)(v128 + 48) = xmmword_1419D575D;
    *(_OWORD *)(v128 + 32) = xmmword_1419D574D;
    *(_OWORD *)(v128 + 16) = xmmword_1419D573D;
    *(_OWORD *)v128 = xmmword_1419D572D;
    *(_QWORD *)(v128 + 77) = 0x81AFE8A4AEE8B788uLL;
  }
  else
  {
    v127 = 69;
    v128 = sub_140001650(69, 1);
    if ( !v128 )
      sub_141938D2B(1, 69);
    *(_OWORD *)(v128 + 48) = xmmword_1419D5718;
    *(_OWORD *)(v128 + 32) = xmmword_1419D5708;
    *(_OWORD *)(v128 + 16) = xmmword_1419D56F8;
    *(_OWORD *)v128 = xmmword_1419D56E8;
    *(_QWORD *)(v128 + 61) = 0x8690E7A1AEE79F94uLL;
  }
  *(_QWORD *)v197 = v127;
  *(_QWORD *)&v197[8] = v128;
  *(_QWORD *)&v197[16] = v127;
  sub_1401F4600(&v194, v197);
  *(_QWORD *)&v197[16] = v195;
  *(_OWORD *)v197 = v194;
  *(_QWORD *)&v197[40] = v186;
  *(_OWORD *)&v197[24] = v185;
  v129 = v201;
  *(__int128 *)((char *)a1 + 8) = v194;
  *(__int128 *)((char *)a1 + 24) = *(_OWORD *)&v197[16];
  *(__int128 *)((char *)a1 + 40) = *(_OWORD *)&v197[32];
  *((_BYTE *)a1 + 56) = v129;
  *(_QWORD *)a1 = -1;
  sub_140025530(&v165);
  sub_1401968E0(&v170[72]);
  v203 = 0;
  sub_14036FA40(v173);
  sub_140035660(&v154);
  if ( v182 )
    sub_140001660(v183, v182, 1);
  if ( LODWORD(v148[0]) != -1 )
    sub_140195A30((__int64)v148);
  return a1;
}
