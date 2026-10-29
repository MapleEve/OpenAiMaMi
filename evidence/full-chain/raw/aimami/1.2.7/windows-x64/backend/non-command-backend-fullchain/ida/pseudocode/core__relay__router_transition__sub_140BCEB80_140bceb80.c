// win 1.2.7 | module src/core/relay/router_transition.rs | ea 0x140bceb80 | name sub_140BCEB80
// win 1.2.7 | module src/core/relay/router_transition.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140BCEB80(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 *a8,
        __int64 *a9,
        __int64 a10,
        unsigned __int8 *a11)
{
  int v11; // r15d
  __int128 v14; // kr00_16
  __int128 v15; // kr10_16
  __int128 v16; // kr20_16
  __int128 v17; // kr30_16
  __int64 v19; // rdx
  char v20; // al
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // edx
  char v28; // r13
  __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // rcx
  __int64 (__fastcall *v32)(); // rbx
  __int64 v33; // r14
  const __m128i *v34; // r15
  __m128i *v35; // rax
  __m128i *v36; // rdi
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // r15d
  char v44; // r14
  unsigned __int64 v45; // rax
  unsigned int v46; // edx
  int v47; // r9d
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r13
  _BYTE *v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // r14
  __int64 v56; // r15
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  _QWORD *v61; // r12
  unsigned __int64 v62; // rax
  unsigned int v63; // edx
  __int128 *v64; // rbx
  unsigned int v65; // r15d
  bool v66; // cl
  bool v67; // dl
  unsigned int v68; // edx
  char v69; // al
  bool v70; // cl
  bool v71; // dl
  unsigned int v72; // edx
  __int64 v73; // rbx
  _QWORD *v74; // r14
  __int64 v75; // rdx
  __int64 v76; // r14
  __int64 v77; // r15
  _QWORD *v78; // r12
  __int64 v79; // rcx
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm2
  unsigned __int128 v83; // xmm0
  __int128 v84; // xmm1
  __int128 v85; // xmm2
  unsigned __int8 v86; // al
  _OWORD *v87; // rax
  __int128 v88; // xmm0
  __int128 v89; // xmm1
  __int128 v90; // xmm2
  __int64 v91; // rax
  unsigned int v92; // edx
  __int128 v93; // xmm0
  __int128 v94; // xmm1
  __int128 v95; // xmm2
  __int128 v96; // xmm0
  __int128 v97; // xmm1
  __int128 v98; // xmm2
  unsigned __int8 v99; // al
  __int128 v100; // xmm0
  __int128 v101; // xmm1
  __int128 v102; // xmm2
  int v103; // eax
  __int128 v104; // xmm0
  __int128 v105; // xmm1
  __int128 v106; // xmm2
  unsigned __int8 v107; // al
  __int64 v108; // rax
  __int64 v109; // rcx
  __int128 v110; // krC0_16
  int v111; // edx
  __int128 v112; // xmm0
  __int128 v113; // xmm1
  __int128 v114; // xmm2
  unsigned __int8 v115; // al
  __int128 v116; // xmm0
  __int128 v117; // xmm1
  __int128 v118; // xmm2
  __int64 v119; // rdx
  int v120; // r9d
  __int64 v121; // rbx
  __int64 v122; // rdi
  __int128 *v123; // r12
  __int64 v124; // r15
  char v125; // r14
  __int128 v126; // xmm0
  __int128 v127; // xmm1
  __int128 v128; // xmm2
  unsigned __int8 v129; // al
  unsigned __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  unsigned __int64 v133; // r14
  int v134; // edi
  __int64 v135; // rax
  unsigned int v136; // edx
  __int64 (__fastcall *v137)(unsigned __int64); // rax
  __int64 v138; // rcx
  __int64 v139; // rdx
  __int64 v140; // r15
  __int64 v141; // rbx
  __int64 v142; // rax
  __int64 v143; // rcx
  __int128 v144; // xmm0
  __int128 v145; // xmm1
  __int128 v146; // xmm2
  __int64 v147; // rax
  unsigned int v148; // edx
  __int128 v149; // [rsp+48h] [rbp-38h] BYREF
  __int64 v150; // [rsp+58h] [rbp-28h] BYREF
  __int128 v151; // [rsp+60h] [rbp-20h]
  __int64 v152; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int128 v153; // [rsp+78h] [rbp-8h]
  __int64 v154; // [rsp+88h] [rbp+8h] BYREF
  unsigned __int128 v155; // [rsp+90h] [rbp+10h]
  unsigned __int64 v156; // [rsp+A0h] [rbp+20h]
  __int64 v157; // [rsp+A8h] [rbp+28h] BYREF
  int v158; // [rsp+B0h] [rbp+30h]
  __int64 v159; // [rsp+B8h] [rbp+38h]
  __int64 v160; // [rsp+C0h] [rbp+40h]
  __int64 v161; // [rsp+C8h] [rbp+48h]
  _DWORD *v162; // [rsp+D0h] [rbp+50h]
  __int64 v163; // [rsp+D8h] [rbp+58h]
  __int64 v164; // [rsp+E0h] [rbp+60h]
  unsigned __int8 *v165; // [rsp+E8h] [rbp+68h]
  unsigned __int128 v166; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v167; // [rsp+100h] [rbp+80h]
  __int128 v168; // [rsp+110h] [rbp+90h]
  unsigned __int128 v169; // [rsp+120h] [rbp+A0h]
  __m256i v170; // [rsp+130h] [rbp+B0h]
  __int128 v171; // [rsp+150h] [rbp+D0h]
  __int128 v172; // [rsp+160h] [rbp+E0h]
  __int128 v173; // [rsp+170h] [rbp+F0h]
  __int64 v174; // [rsp+180h] [rbp+100h]
  _BYTE v175[96]; // [rsp+188h] [rbp+108h] BYREF
  __int64 v176; // [rsp+1E8h] [rbp+168h]
  __int64 v177; // [rsp+1F0h] [rbp+170h]
  _QWORD v178[3]; // [rsp+1F8h] [rbp+178h] BYREF
  _QWORD v179[3]; // [rsp+210h] [rbp+190h] BYREF
  _QWORD v180[3]; // [rsp+228h] [rbp+1A8h] BYREF
  __int128 v181; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v182; // [rsp+250h] [rbp+1D0h]
  __int64 v183; // [rsp+258h] [rbp+1D8h]
  unsigned __int64 v184; // [rsp+260h] [rbp+1E0h]
  __int128 v185; // [rsp+268h] [rbp+1E8h] BYREF
  __int64 v186; // [rsp+278h] [rbp+1F8h] BYREF
  int v187; // [rsp+280h] [rbp+200h]
  __int64 v188; // [rsp+288h] [rbp+208h] BYREF
  __int64 v189; // [rsp+290h] [rbp+210h]
  __int64 v190; // [rsp+298h] [rbp+218h]
  unsigned __int128 v191; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v192; // [rsp+2B0h] [rbp+230h]
  __int128 v193; // [rsp+2C0h] [rbp+240h]
  __int128 v194; // [rsp+2D0h] [rbp+250h]
  __int128 v195; // [rsp+2E0h] [rbp+260h] BYREF
  __int128 v196; // [rsp+2F0h] [rbp+270h]
  int v197; // [rsp+300h] [rbp+280h] BYREF
  char v198; // [rsp+304h] [rbp+284h] BYREF
  __int128 v199; // [rsp+308h] [rbp+288h] BYREF
  unsigned int v200; // [rsp+31Ch] [rbp+29Ch]
  __int128 v201; // [rsp+320h] [rbp+2A0h] BYREF
  __int64 v202; // [rsp+330h] [rbp+2B0h]
  __m256i v203; // [rsp+340h] [rbp+2C0h] BYREF
  __int128 v204; // [rsp+360h] [rbp+2E0h]
  __int128 v205; // [rsp+370h] [rbp+2F0h]
  _BYTE v206[112]; // [rsp+380h] [rbp+300h] BYREF
  __int128 v207; // [rsp+3F0h] [rbp+370h]
  __int128 v208; // [rsp+400h] [rbp+380h]
  unsigned __int128 v209; // [rsp+410h] [rbp+390h]
  __m256i v210; // [rsp+420h] [rbp+3A0h]
  __m256i v211; // [rsp+440h] [rbp+3C0h] BYREF
  __int128 v212; // [rsp+460h] [rbp+3E0h]
  __int128 v213; // [rsp+470h] [rbp+3F0h]
  unsigned __int128 v214; // [rsp+480h] [rbp+400h] BYREF
  _BYTE v215[48]; // [rsp+490h] [rbp+410h]
  __m256i v216; // [rsp+4C0h] [rbp+440h] BYREF
  __int64 v217; // [rsp+4E0h] [rbp+460h]
  char v218; // [rsp+4EFh] [rbp+46Fh] BYREF
  _BYTE v219[48]; // [rsp+4F0h] [rbp+470h] BYREF
  unsigned __int128 v220; // [rsp+520h] [rbp+4A0h]
  __m256i v221; // [rsp+530h] [rbp+4B0h]
  char v222; // [rsp+55Eh] [rbp+4DEh]
  unsigned __int8 v223; // [rsp+55Fh] [rbp+4DFh]
  __int128 *v224; // [rsp+560h] [rbp+4E0h]
  __int64 v225; // [rsp+568h] [rbp+4E8h]
  char v226; // [rsp+574h] [rbp+4F4h]
  char v227; // [rsp+575h] [rbp+4F5h]
  char v228; // [rsp+576h] [rbp+4F6h]
  char v229; // [rsp+577h] [rbp+4F7h] BYREF
  __int64 v230; // [rsp+578h] [rbp+4F8h]
  char v231; // [rsp+584h] [rbp+504h]
  char v232; // [rsp+585h] [rbp+505h]
  char v233; // [rsp+586h] [rbp+506h]
  char v234; // [rsp+587h] [rbp+507h]
  char v235; // [rsp+588h] [rbp+508h]
  char v236; // [rsp+589h] [rbp+509h]
  char v237; // [rsp+58Ah] [rbp+50Ah]
  char v238; // [rsp+58Bh] [rbp+50Bh] BYREF
  char v239; // [rsp+58Ch] [rbp+50Ch]
  char v240; // [rsp+58Dh] [rbp+50Dh]
  unsigned __int8 v241; // [rsp+58Eh] [rbp+50Eh] BYREF
  unsigned __int8 v242; // [rsp+58Fh] [rbp+50Fh] BYREF
  __int64 v243; // [rsp+590h] [rbp+510h]

  v243 = -2;
  v11 = a4;
  v242 = (unsigned __int8)a3;
  v229 = a4;
  v199 = a7;
  sub_1410257E0(v206);
  v14 = *(_OWORD *)&v206[32];
  v214 = *(_OWORD *)&v206[48];
  *(_OWORD *)v215 = *(_OWORD *)&v206[64];
  if ( *(_QWORD *)v206 != -1 )
  {
    *(_OWORD *)&v221.m256i_u64[2] = *(_OWORD *)&v206[80];
    *(_QWORD *)&v219[16] = *(_QWORD *)&v206[16];
    *(_OWORD *)&v219[24] = *(_OWORD *)&v206[24];
    *(_QWORD *)&v219[40] = *(_QWORD *)&v206[40];
    v220 = v214;
    *(_OWORD *)v221.m256i_i8 = *(_OWORD *)v215;
    *(_OWORD *)v219 = *(_OWORD *)v206;
LABEL_3:
    *(__m256i *)(a1 + 64) = v221;
    v15 = *(_OWORD *)v219;
    v16 = *(_OWORD *)&v219[16];
    v17 = *(_OWORD *)&v219[32];
    *(_OWORD *)(a1 + 48) = v220;
    *(_OWORD *)(a1 + 32) = v17;
    *(_OWORD *)(a1 + 16) = v16;
    *(_OWORD *)a1 = v15;
LABEL_4:
    *(_WORD *)(a1 + 96) = 0;
    return a1;
  }
  if ( *(_QWORD *)&v206[8] != -1 )
  {
    if ( *(_QWORD *)&v206[8] )
      sub_140001660(*(_QWORD *)&v206[16], *(_QWORD *)&v206[8], 1);
    if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(*((_QWORD *)&v14 + 1), v14, 1);
  }
  sub_14023D790((__int64)v206, (__int64)a2);
  if ( *(_DWORD *)v206 == -1 )
  {
    sub_140EFE1A0(v219);
    if ( *(_QWORD *)v219 != -1 )
      goto LABEL_3;
  }
  else
  {
    v221 = *(__m256i *)&v206[64];
    v220 = *(_OWORD *)&v206[48];
    *(_OWORD *)&v219[32] = *(_OWORD *)&v206[32];
    *(_OWORD *)&v219[16] = *(_OWORD *)&v206[16];
    *(_OWORD *)v219 = *(_OWORD *)v206;
    if ( *(_QWORD *)v206 != -1 )
      goto LABEL_3;
  }
  sub_141568C20(&v149);
  *(_QWORD *)v206 = &v229;
  *(_QWORD *)&v206[8] = sub_140C9DE00;
  *(_QWORD *)&v206[16] = &v199;
  *(_QWORD *)&v206[24] = sub_140186EE0;
  sub_1416ABFD0(&v154, &unk_141A39F10, v206);
  LOBYTE(v191) = v242;
  v230 = v155;
  v214 = v155;
  *(_QWORD *)v206 = &v191;
  *(_QWORD *)&v206[8] = sub_140C98D50;
  *(_QWORD *)&v206[16] = &v214;
  *(_QWORD *)&v206[24] = sub_140186EE0;
  sub_1416ABFD0(v219, &unk_141A39D2E, v206);
  sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStart_0, 5, (__int64)v219);
  if ( v154 )
    sub_140001660(v230, v154, 1);
  if ( !v229 )
  {
    sub_140267190((__int64 *)v219, (__int64)a2, a6);
    if ( *(_DWORD *)v219 != -1 )
    {
      *(__m256i *)&v206[64] = v221;
      *(_OWORD *)&v206[48] = v220;
      *(_OWORD *)&v206[32] = *(_OWORD *)&v219[32];
      *(_OWORD *)&v206[16] = *(_OWORD *)&v219[16];
      *(_OWORD *)v206 = *(_OWORD *)v219;
      *(_QWORD *)&v191 = 0;
      *((_QWORD *)&v191 + 1) = 1;
      *(_QWORD *)&v192 = 0;
      *(_QWORD *)v215 = 1610612768;
      *(_QWORD *)&v214 = &v191;
      *((_QWORD *)&v214 + 1) = &off_141A3FE88;
      if ( (unsigned __int8)sub_14104A7D0(v206, &v214) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v238,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v225 = *((_QWORD *)&v191 + 1);
      v230 = v191;
      sub_140C75030(a2, (__int128 *)v242);
      if ( v230 )
        sub_140001660(v225, v230, 1);
      *(_QWORD *)&v214 = &v199;
      *((_QWORD *)&v214 + 1) = sub_140186EE0;
      *(_QWORD *)v215 = v206;
      *(_QWORD *)&v215[8] = sub_14104A7D0;
      sub_1416ABFD0(&v166, &unk_141A39F29, &v214);
      v211.m256i_i8[0] = v242;
      v224 = *((__int128 **)&v166 + 1);
      *(_OWORD *)v175 = __PAIR128__(v167, *((unsigned __int64 *)&v166 + 1));
      *(_QWORD *)&v214 = &v211;
      *((_QWORD *)&v214 + 1) = sub_140C98D50;
      *(_QWORD *)v215 = v175;
      *(_QWORD *)&v215[8] = sub_140186EE0;
      sub_1416ABFD0(&v191, &unk_141A39D2E, &v214);
      sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aPreflightFaile, 16, (__int64)&v191);
      if ( (_QWORD)v166 )
        sub_140001660(v224, v166, 1);
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v206[80];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v206[64];
      v80 = *(_OWORD *)v206;
      v81 = *(_OWORD *)&v206[16];
      v82 = *(_OWORD *)&v206[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v206[48];
      *(_OWORD *)(a1 + 32) = v82;
      *(_OWORD *)(a1 + 16) = v81;
      *(_OWORD *)a1 = v80;
      goto LABEL_4;
    }
  }
  v159 = 2LL * ((unsigned __int8)v11 ^ 1u) + 3;
  v183 = *a8;
  v160 = a8[1];
  v19 = a8[2];
  v161 = v19;
  v162 = (_DWORD *)a8[3];
  v163 = *a9;
  v164 = a9[1];
  v165 = (unsigned __int8 *)a9[2];
  v200 = -1;
  v20 = 1;
  v21 = 0;
  v224 = a2;
  v223 = v11;
  while ( 1 )
  {
    if ( (v21 & 1) != 0 || (unsigned __int8)v20 > 3u )
    {
      nullsub_1(v21);
      v87 = (_OWORD *)sub_140001650(109, 1);
      if ( !v87 )
        sub_141938D2B(1, 109);
      *(_OWORD *)((char *)v87 + 93) = *(__int128 *)((char *)&xmmword_141A39F8C + 13);
      v87[5] = xmmword_141A39F8C;
      v87[4] = xmmword_141A39F7C;
      v87[3] = xmmword_141A39F6C;
      v87[2] = xmmword_141A39F5C;
      qmemcpy(v87, "CODEX_TRANSITION_REENTRY_TIMEOUT", 32);
      *(_QWORD *)&v206[8] = 109;
      *(_QWORD *)&v206[16] = v87;
      *(_QWORD *)&v206[24] = 109;
      *(_QWORD *)v206 = 10;
      *(_QWORD *)&v214 = 0;
      *((_QWORD *)&v214 + 1) = 1;
      *(_QWORD *)v215 = 0;
      *(_QWORD *)&v219[16] = 1610612768;
      *(_QWORD *)v219 = &v214;
      *(_QWORD *)&v219[8] = &off_141A3FE88;
      if ( (unsigned __int8)sub_14104A7D0(v206, v219) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v238,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v225 = *((_QWORD *)&v214 + 1);
      v230 = v214;
      sub_140C75030(a2, (__int128 *)v242);
      if ( v230 )
        sub_140001660(v225, v230, 1);
      *(_QWORD *)&v214 = 0;
      *((_QWORD *)&v214 + 1) = 1;
      *(_QWORD *)v215 = 0;
      *(_QWORD *)&v219[16] = 1610612768;
      *(_QWORD *)v219 = &v214;
      *(_QWORD *)&v219[8] = &off_141A3FE88;
      if ( (unsigned __int8)sub_14104A7D0(v206, v219) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v238,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      *(_QWORD *)&v192 = *(_QWORD *)v215;
      v191 = v214;
      sub_140BBE8E0(v242, (int)aRetryExhausted, 15, &v191);
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v206[80];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v206[64];
      v88 = *(_OWORD *)v206;
      v89 = *(_OWORD *)&v206[16];
      v90 = *(_OWORD *)&v206[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v206[48];
      *(_OWORD *)(a1 + 32) = v90;
      *(_OWORD *)(a1 + 16) = v89;
      *(_OWORD *)a1 = v88;
      *(_WORD *)(a1 + 96) = 772;
      return a1;
    }
    LOBYTE(v19) = v20 == 3;
    v230 = v19;
    v22 = (unsigned __int8)(v20 + 1);
    if ( v20 == 3 )
      v22 = 3;
    LODWORD(v225) = v22;
    v241 = v20;
    sub_140C75030(a2, (__int128 *)v242);
    v157 = sub_14167FC00(v24, v23, v25, v26);
    v158 = v27;
    sub_140EC0AC0((unsigned int)v206, v159, 0, v11, a5);
    *(_DWORD *)((char *)&v214 + 3) = *(_DWORD *)&v206[12];
    LODWORD(v214) = *(_DWORD *)&v206[9];
    *(_DWORD *)((char *)&v191 + 3) = *(_DWORD *)&v206[20];
    LODWORD(v191) = *(_DWORD *)&v206[17];
    *(_DWORD *)((char *)&v166 + 3) = *(_DWORD *)&v206[28];
    LODWORD(v166) = *(_DWORD *)&v206[25];
    *(_DWORD *)v175 = *(_DWORD *)&v206[33];
    *(_DWORD *)&v175[3] = *(_DWORD *)&v206[36];
    *(__int32 *)((char *)v211.m256i_i32 + 3) = *(_DWORD *)&v206[44];
    v211.m256i_i32[0] = *(_DWORD *)&v206[41];
    *(__int32 *)((char *)v203.m256i_i32 + 3) = *(_DWORD *)&v206[52];
    v203.m256i_i32[0] = *(_DWORD *)&v206[49];
    v28 = v206[56];
    *(_DWORD *)((char *)&v171 + 3) = *(_DWORD *)&v206[60];
    LODWORD(v171) = *(_DWORD *)&v206[57];
    if ( *(_QWORD *)v206 != -1 )
      break;
    LODWORD(v201) = v214;
    *(_DWORD *)((char *)&v201 + 3) = *(_DWORD *)((char *)&v214 + 3);
    LODWORD(v178[0]) = v191;
    *(_DWORD *)((char *)v178 + 3) = *(_DWORD *)((char *)&v191 + 3);
    LODWORD(v181) = v166;
    *(_DWORD *)((char *)&v181 + 3) = *(_DWORD *)((char *)&v166 + 3);
    LODWORD(v179[0]) = *(_DWORD *)v175;
    *(_DWORD *)((char *)v179 + 3) = *(_DWORD *)&v175[3];
    *(_DWORD *)((char *)v180 + 3) = *(__int32 *)((char *)v211.m256i_i32 + 3);
    LODWORD(v180[0]) = v211.m256i_i32[0];
    *(_DWORD *)((char *)&v188 + 3) = *(__int32 *)((char *)v203.m256i_i32 + 3);
    LODWORD(v188) = v203.m256i_i32[0];
    LODWORD(v186) = v171;
    *(_DWORD *)((char *)&v186 + 3) = *(_DWORD *)((char *)&v171 + 3);
    DWORD1(v171) = *(_DWORD *)((char *)&v214 + 3);
    *(_DWORD *)((char *)&v171 + 1) = v201;
    HIDWORD(v171) = *(_DWORD *)((char *)&v191 + 3);
    *(_DWORD *)((char *)&v171 + 9) = v178[0];
    DWORD1(v172) = *(_DWORD *)((char *)&v166 + 3);
    *(_DWORD *)((char *)&v172 + 1) = v181;
    HIDWORD(v172) = *(_DWORD *)&v175[3];
    *(_DWORD *)((char *)&v172 + 9) = v179[0];
    DWORD1(v173) = *(_DWORD *)((char *)v180 + 3);
    *(_DWORD *)((char *)&v173 + 1) = v211.m256i_i32[0];
    HIDWORD(v173) = *(_DWORD *)((char *)&v188 + 3);
    *(_DWORD *)((char *)&v173 + 9) = v203.m256i_i32[0];
    HIDWORD(v174) = *(_DWORD *)((char *)&v186 + 3);
    *(_DWORD *)((char *)&v174 + 1) = v186;
    v218 = v206[56];
    LOBYTE(v171) = v206[8];
    BYTE8(v171) = v206[16];
    LOBYTE(v172) = v206[24];
    BYTE8(v172) = v206[32];
    LOBYTE(v173) = v206[40];
    BYTE8(v173) = v206[48];
    LOBYTE(v174) = v206[56];
    v237 = 1;
    v29 = sub_14167FD50(&v157);
    a2 = v224;
    *(_OWORD *)v219 = 0x3E8 * (unsigned __int128)(unsigned __int64)v29 + v30 / 0xF4240uLL;
    *(_QWORD *)v206 = &v241;
    *(_QWORD *)&v206[8] = sub_1416B9630;
    *(_QWORD *)&v206[16] = v219;
    *(_QWORD *)&v206[24] = sub_1416B95D0;
    *(_QWORD *)&v206[32] = &v218;
    *(_QWORD *)&v206[40] = sub_1416BCC50;
    v237 = 1;
    sub_1416ABFD0(&v152, &unk_141A39FC6, v206);
    LOBYTE(v191) = v242;
    v217 = v153;
    v214 = v153;
    *(_QWORD *)v206 = &v191;
    *(_QWORD *)&v206[8] = sub_140C98D50;
    *(_QWORD *)&v206[16] = &v214;
    *(_QWORD *)&v206[24] = sub_140186EE0;
    sub_1416ABFD0(v219, &unk_141A39D2E, v206);
    sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStopComplete, 13, (__int64)v219);
    if ( v152 )
      sub_140001660(v217, v152, 1);
    v237 = 1;
    sub_140C75030(a2, (__int128 *)v242);
    v32 = sub_140186EE0;
    if ( v241 == 1 )
    {
      v33 = *(_QWORD *)(v183 + 8);
      if ( v33 < 0 )
      {
        v79 = 0;
        goto LABEL_100;
      }
      if ( v33 )
      {
        v34 = *(const __m128i **)v183;
        nullsub_1(v31);
        v35 = (__m128i *)sub_140001650(v33, 1);
        if ( !v35 )
        {
          v176 = v33;
          v79 = 1;
LABEL_100:
          v237 = 1;
          sub_141938D2B(v79, v176);
        }
        v36 = v35;
        sub_1418F44E0(v35, v34, v33);
        v37 = (__int64)v36;
        v38 = (__int64)v36;
      }
      else
      {
        v37 = 1;
        v38 = 1;
      }
      v176 = v38;
      *(_QWORD *)v206 = v33;
      *(_QWORD *)&v206[8] = v37;
      *(_QWORD *)&v206[16] = v33;
    }
    else
    {
      *(_QWORD *)v219 = v183;
      *(_QWORD *)&v219[8] = sub_140186EE0;
      v237 = 1;
      sub_1416ABFD0(v206, &unk_141A3B229, v219);
      v37 = *(_QWORD *)&v206[8];
      v33 = *(_QWORD *)&v206[16];
    }
    v39 = 0;
    if ( *v162 != -2 )
      v39 = (__int64)v162;
    v217 = v37;
    sub_140D8F4C0((unsigned int)v175, v160, v161, v37, v33, v28, v39);
    if ( *(_QWORD *)v206 )
      sub_140001660(v217, *(_QWORD *)v206, 1);
    *(_QWORD *)&v206[48] = v174;
    *(_OWORD *)&v206[32] = v173;
    *(_OWORD *)&v206[16] = v172;
    *(_OWORD *)v206 = v171;
    v234 = 1;
    sub_140EC14F0(&v166, v206);
    *(_OWORD *)&v206[80] = *(_OWORD *)&v175[80];
    *(_OWORD *)&v206[64] = *(_OWORD *)&v175[64];
    *(_OWORD *)&v206[48] = *(_OWORD *)&v175[48];
    *(_OWORD *)&v206[32] = *(_OWORD *)&v175[32];
    *(_OWORD *)&v206[16] = *(_OWORD *)&v175[16];
    *(_OWORD *)v206 = *(_OWORD *)v175;
    v210 = v170;
    v209 = v169;
    v208 = v168;
    v207 = v167;
    *(_OWORD *)&v206[96] = v166;
    if ( *(_QWORD *)v175 == -1 )
    {
      if ( (_QWORD)v166 != -1 )
      {
        v177 = *(_QWORD *)v175;
        v221 = v170;
        v220 = v169;
        *(_OWORD *)&v219[32] = v168;
        *(_OWORD *)&v219[16] = v167;
        *(_OWORD *)v219 = v166;
        *(_QWORD *)&v191 = 0;
        *((_QWORD *)&v191 + 1) = 1;
        *(_QWORD *)&v192 = 0;
        *(_QWORD *)v215 = 1610612768;
        *(_QWORD *)&v214 = &v191;
        *((_QWORD *)&v214 + 1) = &off_141A3FE88;
        if ( (unsigned __int8)sub_14104A7D0(v219, &v214) )
          sub_141939040(
            (unsigned int)aADisplayImplem_7,
            55,
            (unsigned int)&v238,
            (unsigned int)&unk_141A3BB68,
            (__int64)&off_141A3FF40);
        v225 = *((_QWORD *)&v191 + 1);
        v230 = v191;
        sub_140C75030(a2, (__int128 *)v242);
        if ( v230 )
          sub_140001660(v225, v230, 1);
        *(_QWORD *)&v214 = &v241;
        *((_QWORD *)&v214 + 1) = sub_1416B9630;
        *(_QWORD *)v215 = v219;
        *(_QWORD *)&v215[8] = sub_14104A7D0;
        sub_1416ABFD0(&v191, &unk_141A3A180, &v214);
        sub_140BBE8E0(v242, (int)aSettleFailed, 13, &v191);
        *(__m256i *)(a1 + 64) = v221;
        v104 = *(_OWORD *)v219;
        v105 = *(_OWORD *)&v219[16];
        v106 = *(_OWORD *)&v219[32];
        *(_OWORD *)(a1 + 48) = v220;
        *(_OWORD *)(a1 + 32) = v106;
        *(_OWORD *)(a1 + 16) = v105;
        *(_OWORD *)a1 = v104;
        v107 = v241;
        *(_BYTE *)(a1 + 96) = 3;
        *(_BYTE *)(a1 + 97) = v107;
        sub_140BAD350(&v206[8]);
        sub_1403FAE40(&v206[72]);
        v108 = *(_QWORD *)&v206[72];
        if ( !*(_QWORD *)&v206[72] )
          return a1;
        v109 = *(_QWORD *)&v206[80];
        goto LABEL_154;
      }
      *(_QWORD *)&v196 = *(_QWORD *)&v175[88];
      v195 = *(_OWORD *)&v175[72];
      v194 = *(_OWORD *)&v175[56];
      v193 = *(_OWORD *)&v175[40];
      v192 = *(_OWORD *)&v175[24];
      v191 = *(_OWORD *)&v175[8];
      v197 = *(_DWORD *)&v206[104];
      v198 = v206[108];
      v47 = *v165;
      v48 = *(_QWORD *)(v163 + 24);
      v228 = 1;
      v227 = 1;
      sub_140D8FC20((unsigned int)&v188, v48, v164, v47, (*(_DWORD *)&v206[104] == 0) & (v206[108] ^ 1));
      v52 = v190;
      v53 = v219;
      if ( !v190 )
      {
        if ( (v197 || (v198 & 1) != 0) && *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          *(_QWORD *)v206 = &v242;
          *(_QWORD *)&v206[8] = sub_140C98D50;
          *(_QWORD *)&v206[16] = &v241;
          *(_QWORD *)&v206[24] = sub_1416B9630;
          *(_QWORD *)&v206[32] = &v197;
          *(_QWORD *)&v206[40] = sub_1416BBD00;
          *(_QWORD *)&v206[48] = &v198;
          *(_QWORD *)&v206[56] = sub_1416BCC50;
          *(_QWORD *)v219 = aCodexmateLibCo_31;
          *(_QWORD *)&v219[8] = 45;
          *(_QWORD *)&v219[16] = aCodexmateLibCo_31;
          *(_QWORD *)&v219[24] = 45;
          *(_QWORD *)&v219[32] = &off_141A3A078;
          v233 = 1;
          v232 = 1;
          sub_140BAD520(&unk_141A3A000, v206, 2, v219);
        }
        v216.m256i_i64[2] = v196;
        *(_OWORD *)v216.m256i_i8 = v195;
        *(_OWORD *)&v215[32] = v194;
        *(_OWORD *)&v215[16] = v193;
        *(_OWORD *)v215 = v192;
        v214 = v191;
        LOBYTE(v32) = v242;
        v110 = v199;
        v185 = v199;
        v240 = 1;
        v239 = 1;
        v186 = sub_14167FC00(v53, v49, v50, v51);
        v187 = v111;
        v240 = 1;
        v239 = 1;
        sub_1410255B0((unsigned int)v206, (_DWORD)v224, (_DWORD)v32, v110, *((__int64 *)&v110 + 1));
        if ( *(_DWORD *)v206 != -1 )
        {
          v221 = *(__m256i *)&v206[64];
          v220 = *(_OWORD *)&v206[48];
          *(_OWORD *)&v219[32] = *(_OWORD *)&v206[32];
          *(_OWORD *)&v219[16] = *(_OWORD *)&v206[16];
          *(_OWORD *)v219 = *(_OWORD *)v206;
          goto LABEL_156;
        }
        v211.m256i_i64[0] = (__int64)&v214;
        *(_OWORD *)&v211.m256i_u64[1] = v149;
        v120 = *a11;
        v240 = 1;
        v239 = 1;
        sub_140D883F0((unsigned int)v219, a10, (unsigned int)&v214, v120, (__int64)&v211.m256i_i64[1]);
        if ( *(_QWORD *)v219 != -1 )
        {
LABEL_156:
          *(__m256i *)&v206[64] = v221;
          *(_OWORD *)&v206[48] = v220;
          *(_OWORD *)&v206[32] = *(_OWORD *)&v219[32];
          *(_OWORD *)&v206[16] = *(_OWORD *)&v219[16];
          *(_OWORD *)v206 = *(_OWORD *)v219;
          v203.m256i_i64[0] = 0;
          *(_OWORD *)&v203.m256i_u64[1] = 1u;
          v211.m256i_i64[2] = 1610612768;
          v211.m256i_i64[0] = (__int64)&v203;
          v211.m256i_i64[1] = (__int64)&off_141A3FE88;
          if ( (unsigned __int8)sub_14104A7D0(v206, &v211) )
            sub_141939040(
              (unsigned int)aADisplayImplem_7,
              55,
              (unsigned int)&v238,
              (unsigned int)&unk_141A3BB68,
              (__int64)&off_141A3FF40);
          v225 = v203.m256i_i64[1];
          v230 = v203.m256i_i64[0];
          sub_140C75030(v224, (__int128 *)(unsigned int)v32);
          if ( v230 )
            sub_140001660(v225, v230, 1);
          v211.m256i_i64[0] = (__int64)&v185;
          v211.m256i_i64[1] = (__int64)sub_140186EE0;
          v211.m256i_i64[2] = (__int64)v206;
          v211.m256i_i64[3] = (__int64)sub_14104A7D0;
          sub_1416ABFD0(&v201, &unk_141A39F29, &v211);
          sub_140BBE8E0((char)v32, (int)aCommitFailed, 13, &v201);
          v121 = *(_QWORD *)&v206[8];
          v122 = *(_QWORD *)v206;
          v124 = *(_QWORD *)&v206[24];
          v123 = *(__int128 **)&v206[16];
          v203 = *(__m256i *)&v206[32];
          v204 = *(_OWORD *)&v206[64];
          v205 = *(_OWORD *)&v206[80];
          sub_140BAD350(&v214);
          v125 = 1;
          goto LABEL_160;
        }
        v240 = 1;
        v239 = 1;
        v130 = sub_1401BD880(*(_QWORD *)&v219[8]);
        v133 = v130;
        if ( v130 )
        {
          v156 = v130;
          v134 = v130 & 3;
          switch ( v130 & 3 )
          {
            case 0uLL:
              LOBYTE(v130) = *(_BYTE *)(v130 + 16);
              break;
            case 1uLL:
              LOBYTE(v130) = *(_BYTE *)(v130 + 31);
              break;
            case 2uLL:
              v231 = 1;
              v137 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v132, v131) + 8);
              v231 = 1;
              LOBYTE(v130) = v137(HIDWORD(v133));
              break;
            case 3uLL:
              v130 >>= 32;
              break;
          }
          v219[0] = v130;
          *(_QWORD *)v206 = v219;
          *(_QWORD *)&v206[8] = sub_140C9E0F0;
          v231 = 1;
          sub_1416ABFD0(v180, &unk_141A39D4C, v206);
          v231 = 1;
          sub_140BBE8E0((char)v32, (int)aCommitSyncUnco, 23, v180);
          v138 = *((_QWORD *)v224 + 97);
          v139 = *((_QWORD *)v224 + 98);
          v231 = 1;
          sub_1410237A0(
            v138,
            v139,
            (_DWORD)v32,
            (unsigned int)&unk_141A6FF17,
            23,
            v185,
            *((__int64 *)&v185 + 1),
            (__int64)&unk_141A702FA,
            28);
          v202 = v216.m256i_i64[2];
          v201 = *(_OWORD *)v216.m256i_i8;
          sub_141026E80(v206);
          v211.m256i_i64[0] = 0;
          *(_OWORD *)&v211.m256i_u64[1] = 1u;
          *(_QWORD *)&v219[16] = 1610612768;
          *(_QWORD *)v219 = &v211;
          *(_QWORD *)&v219[8] = &off_141A3FE88;
          if ( (unsigned __int8)sub_14104A7D0(v206, v219) )
            sub_141939040(
              (unsigned int)aADisplayImplem_7,
              55,
              (unsigned int)&v238,
              (unsigned int)&unk_141A3BB68,
              (__int64)&off_141A3FF40);
          v230 = v211.m256i_i64[1];
          v224 = (__int128 *)v211.m256i_i64[0];
          v140 = v211.m256i_i64[2];
          v141 = v202;
          if ( v202 == (_QWORD)v201 )
            sub_14190FDC0(&v201);
          v142 = *((_QWORD *)&v201 + 1);
          v143 = 3 * v141;
          *(_QWORD *)(*((_QWORD *)&v201 + 1) + 8 * v143) = v224;
          *(_QWORD *)(v142 + 8 * v143 + 8) = v230;
          *(_QWORD *)(v142 + 8 * v143 + 16) = v140;
          v202 = v141 + 1;
          sub_140BAC840(v206);
          *(_OWORD *)v203.m256i_i8 = v214;
          *(_OWORD *)&v203.m256i_u64[2] = *(_OWORD *)v215;
          v204 = *(_OWORD *)&v215[16];
          v205 = *(_OWORD *)&v215[32];
          v123 = *((__int128 **)&v201 + 1);
          v121 = v201;
          v124 = v202;
          if ( (unsigned int)(v134 - 2) >= 2 && (v133 & 3) != 0 )
          {
            *(_QWORD *)&v206[8] = v133 - 1;
            v206[0] = 3;
            v240 = 0;
            v239 = 0;
            sub_1416BCB00(&v206[8]);
          }
          v122 = 2;
          goto LABEL_186;
        }
        if ( v216.m256i_i64[2] )
        {
          v240 = 1;
          v239 = 1;
          sub_140D1EE10((unsigned int)v206, v216.m256i_i32[2], v216.m256i_i32[4], (unsigned int)&unk_141A39BD6, 3);
          v225 = *(_QWORD *)&v206[8];
          v230 = *(_QWORD *)v206;
          sub_141026C20(
            (unsigned int)v219,
            (_DWORD)v224,
            (_DWORD)v32,
            v185,
            *((__int64 *)&v185 + 1),
            *(__int64 *)&v206[8],
            *(__int64 *)&v206[16]);
          if ( *(_DWORD *)v219 != -1 )
          {
            *(__m256i *)&v206[64] = v221;
            *(_OWORD *)&v206[48] = v220;
            *(_OWORD *)&v206[32] = *(_OWORD *)&v219[32];
            *(_OWORD *)&v206[16] = *(_OWORD *)&v219[16];
            *(_OWORD *)v206 = *(_OWORD *)v219;
            if ( *(_QWORD *)off_1421E6EC0 >= 2u )
            {
              v203.m256i_i64[0] = (__int64)v206;
              v203.m256i_i64[1] = (__int64)sub_14104A7D0;
              v211.m256i_i64[0] = (__int64)aCodexmateLibCo_31;
              v211.m256i_i64[1] = 45;
              v211.m256i_i64[2] = (__int64)aCodexmateLibCo_31;
              v211.m256i_i64[3] = 45;
              *(_QWORD *)&v212 = &off_141A39EC0;
              sub_140BAD520(&unk_141A39E7E, &v203, 2, &v211);
            }
            sub_140BAC840(v206);
          }
          if ( v230 )
            sub_140001660(v225, v230, 1);
          v240 = 1;
          v239 = 1;
          v135 = sub_14167FD50(&v186);
          *(_OWORD *)v219 = 0x3E8 * (unsigned __int128)(unsigned __int64)v135 + v136 / 0xF4240uLL;
          v211.m256i_i64[0] = v216.m256i_i64[2];
          *(_QWORD *)v206 = &v185;
          *(_QWORD *)&v206[8] = sub_140186EE0;
          *(_QWORD *)&v206[16] = v219;
          *(_QWORD *)&v206[24] = sub_1416B95D0;
          *(_QWORD *)&v206[32] = &v211;
          *(_QWORD *)&v206[40] = sub_1416BCB10;
          v240 = 1;
          v239 = 1;
          sub_1416ABFD0(v179, &unk_141A39ED8, v206);
          v240 = 1;
          v239 = 1;
          sub_140BBE8E0((char)v32, (int)aDegraded, 8, v179);
          v205 = *(_OWORD *)&v215[32];
          v204 = *(_OWORD *)&v215[16];
          *(_OWORD *)&v203.m256i_u64[2] = *(_OWORD *)v215;
          *(_OWORD *)v203.m256i_i8 = v214;
          v123 = (__int128 *)v216.m256i_i64[1];
          v121 = v216.m256i_i64[0];
          v122 = 1;
          v124 = v216.m256i_i64[2];
          goto LABEL_186;
        }
        v240 = 1;
        v239 = 1;
        sub_141022500(v219, v224, (unsigned int)v32);
        if ( *(_DWORD *)v219 == -1 )
        {
          v240 = 1;
          v239 = 1;
          v147 = sub_14167FD50(&v186);
          *(_OWORD *)v219 = 0x3E8 * (unsigned __int128)(unsigned __int64)v147 + v148 / 0xF4240uLL;
          *(_QWORD *)v206 = &v185;
          *(_QWORD *)&v206[8] = sub_140186EE0;
          *(_QWORD *)&v206[16] = v219;
          *(_QWORD *)&v206[24] = sub_1416B95D0;
          v240 = 1;
          v239 = 1;
          sub_1416ABFD0(v178, &unk_141A39E59, v206);
          v240 = 1;
          v239 = 1;
          sub_140BBE8E0((char)v32, (int)aStable, 6, v178);
          v123 = *((__int128 **)&v214 + 1);
          v121 = v214;
          v124 = *(_QWORD *)v215;
          v203 = *(__m256i *)&v215[8];
          *(_QWORD *)&v204 = *(_QWORD *)&v215[40];
          sub_140025530(&v216);
          v122 = 0;
          goto LABEL_186;
        }
        *(__m256i *)&v206[64] = v221;
        *(_OWORD *)&v206[48] = v220;
        *(_OWORD *)&v206[32] = *(_OWORD *)&v219[32];
        *(_OWORD *)&v206[16] = *(_OWORD *)&v219[16];
        *(_OWORD *)v206 = *(_OWORD *)v219;
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v203.m256i_i64[0] = (__int64)v206;
          v203.m256i_i64[1] = (__int64)sub_14104A7D0;
          v211.m256i_i64[0] = (__int64)aCodexmateLibCo_31;
          v211.m256i_i64[1] = 45;
          v211.m256i_i64[2] = (__int64)aCodexmateLibCo_31;
          v211.m256i_i64[3] = 45;
          *(_QWORD *)&v212 = &off_141A39DD8;
          v222 = 1;
          sub_140BAD520(&unk_141A39D6B, &v203, 2, &v211);
        }
        v213 = *(_OWORD *)&v215[32];
        v212 = *(_OWORD *)&v215[16];
        *(_OWORD *)&v211.m256i_u64[2] = *(_OWORD *)v215;
        *(_OWORD *)v211.m256i_i8 = v214;
        v224 = (__int128 *)sub_140C23890(24);
        v203.m256i_i64[0] = (__int64)v206;
        v203.m256i_i64[1] = (__int64)sub_14104A7D0;
        sub_1416ABFD0(&v181, &unk_141A39E1D, &v203);
        v123 = v224;
        *((_QWORD *)v224 + 2) = v182;
        *v123 = v181;
        v203 = v211;
        v204 = v212;
        v205 = v213;
        v240 = 0;
        v239 = 1;
        sub_140BAC840(v206);
        v121 = 1;
        v125 = 0;
        v124 = 1;
        v122 = 1;
LABEL_160:
        sub_1403FAE40(&v216);
        if ( v216.m256i_i64[0] )
          sub_140001660(v216.m256i_i64[1], 24 * v216.m256i_i64[0], 8);
        if ( v125 )
        {
          v126 = *(_OWORD *)v203.m256i_i8;
          v127 = *(_OWORD *)&v203.m256i_u64[2];
          v128 = v204;
          *(_OWORD *)(a1 + 80) = v205;
          *(_OWORD *)(a1 + 64) = v128;
          *(_OWORD *)(a1 + 48) = v127;
          *(_OWORD *)(a1 + 32) = v126;
          v129 = v241;
          *(_QWORD *)a1 = v122;
          *(_QWORD *)(a1 + 8) = v121;
          *(_QWORD *)(a1 + 16) = v123;
          *(_QWORD *)(a1 + 24) = v124;
          *(_BYTE *)(a1 + 96) = 5;
          *(_BYTE *)(a1 + 97) = v129;
        }
        else
        {
LABEL_186:
          v144 = *(_OWORD *)v203.m256i_i8;
          v145 = *(_OWORD *)&v203.m256i_u64[2];
          v146 = v204;
          *(_OWORD *)(a1 + 88) = v205;
          *(_OWORD *)(a1 + 72) = v146;
          *(_OWORD *)(a1 + 56) = v145;
          *(_OWORD *)(a1 + 40) = v144;
          *(_QWORD *)(a1 + 8) = v122;
          *(_QWORD *)(a1 + 16) = v121;
          *(_QWORD *)(a1 + 24) = v123;
          *(_QWORD *)(a1 + 32) = v124;
          *(_QWORD *)a1 = -1;
        }
        sub_1403FAC20(&v188);
        if ( !v188 )
          return a1;
        v109 = v189;
        v119 = 32 * v188;
LABEL_189:
        sub_140001660(v109, v119, 8);
        return a1;
      }
      v54 = v189;
      v233 = 1;
      v232 = 1;
      sub_1403EBE40(v219, v189, v189 + 32 * v190);
      v55 = *(_QWORD *)&v219[8];
      v56 = *(_QWORD *)&v219[16];
      sub_140D1EE10((unsigned int)v206, *(_DWORD *)&v219[8], *(_DWORD *)&v219[16], (unsigned int)&unk_141A39BD6, 3);
      v203.m256i_i64[2] = *(_QWORD *)&v206[16];
      *(_OWORD *)v203.m256i_i8 = *(_OWORD *)v206;
      if ( v56 )
      {
        v61 = (_QWORD *)(v55 + 8);
        do
        {
          v57 = *(v61 - 1);
          if ( v57 )
            sub_140001660(*v61, v57, 1);
          v61 += 3;
          --v56;
        }
        while ( v56 );
      }
      v217 = v54;
      if ( *(_QWORD *)v219 )
        sub_140001660(v55, 24LL * *(_QWORD *)v219, 8);
      v236 = 1;
      v235 = 1;
      v62 = sub_14167FC00(v58, v57, v59, v60);
      v64 = v224;
      v65 = v200;
      if ( v229 )
      {
        v211.m256i_i64[2] = *(_QWORD *)&v175[88];
        *(_OWORD *)v211.m256i_i8 = *(_OWORD *)&v175[72];
        *(_QWORD *)v206 = &v203;
        *(_QWORD *)&v206[8] = sub_1400015F0;
        v226 = 1;
        sub_1416ABFD0(&v214, &unk_141A3A0DE, v206);
        v226 = 1;
        sub_1401F4600(&v211, &v214);
        v220 = *(_OWORD *)&v175[56];
        *(_OWORD *)&v219[32] = *(_OWORD *)&v175[40];
        *(_OWORD *)&v219[16] = *(_OWORD *)&v175[24];
        *(_OWORD *)v219 = *(_OWORD *)&v175[8];
        *(_OWORD *)v221.m256i_i8 = *(_OWORD *)v211.m256i_i8;
        v221.m256i_i64[2] = v211.m256i_i64[2];
        v226 = 0;
        sub_140BBFA40(
          (__int64)v206,
          (__int64)v64,
          v242,
          v199,
          *((__int64 *)&v199 + 1),
          (__int128 *)v219,
          a10,
          a11,
          &v149);
        if ( v206[0] )
        {
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v206[88];
          *(_OWORD *)(a1 + 64) = *(_OWORD *)&v206[72];
          v112 = *(_OWORD *)&v206[8];
          v113 = *(_OWORD *)&v206[24];
          v114 = *(_OWORD *)&v206[40];
          *(_OWORD *)(a1 + 48) = *(_OWORD *)&v206[56];
          *(_OWORD *)(a1 + 32) = v114;
          *(_OWORD *)(a1 + 16) = v113;
          *(_OWORD *)a1 = v112;
          v115 = v241;
          *(_BYTE *)(a1 + 96) = 5;
          *(_BYTE *)(a1 + 97) = v115;
        }
        else
        {
          *(_OWORD *)(a1 + 88) = *(_OWORD *)&v206[88];
          *(_OWORD *)(a1 + 72) = *(_OWORD *)&v206[72];
          v116 = *(_OWORD *)&v206[8];
          v117 = *(_OWORD *)&v206[24];
          v118 = *(_OWORD *)&v206[40];
          *(_OWORD *)(a1 + 56) = *(_OWORD *)&v206[56];
          *(_OWORD *)(a1 + 40) = v118;
          *(_OWORD *)(a1 + 24) = v117;
          *(_OWORD *)(a1 + 8) = v116;
          *(_QWORD *)a1 = -1;
        }
        LODWORD(v224) = 0;
        goto LABEL_147;
      }
      if ( v197 )
      {
        if ( v241 > 2u )
          goto LABEL_129;
      }
      else if ( v241 > 2u || (v198 & 1) == 0 )
      {
        goto LABEL_129;
      }
      if ( v200 == -1 )
      {
        v236 = 1;
        v235 = 1;
        v184 = sub_1416A1240(v62, v63, 12, 0, (__int64)&off_141A3EA90);
        v65 = v72;
        if ( *(_QWORD *)off_1421E6EC0 < 2u )
          goto LABEL_83;
LABEL_82:
        *(_QWORD *)v219 = &v242;
        *(_QWORD *)&v219[8] = sub_140C98D50;
        *(_QWORD *)&v219[16] = &v241;
        *(_QWORD *)&v219[24] = sub_1416B9630;
        *(_QWORD *)&v219[32] = &v203;
        *(_QWORD *)&v219[40] = sub_1400015F0;
        *(_QWORD *)&v206[48] = 2;
        *(_QWORD *)&v206[56] = aCodexmateLibCo_31;
        *(_QWORD *)&v206[64] = 45;
        *(_QWORD *)&v206[80] = &unk_141A3A11B;
        *(_QWORD *)&v206[88] = v219;
        *(_QWORD *)v206 = 0;
        *(_QWORD *)&v206[8] = aCodexmateLibCo_31;
        *(_OWORD *)&v206[16] = 0x2Du;
        *(_QWORD *)&v206[32] = aSrcCoreRelayRo_0;
        *(_QWORD *)&v206[40] = 35;
        *(_QWORD *)&v206[72] = 0x17D00000001LL;
        v236 = 1;
        v235 = 1;
        sub_1414D53A0(&v238, v206);
        goto LABEL_83;
      }
      v70 = v63 < v200;
      v71 = v62 < v184;
      if ( v62 == v184 )
        v71 = v70;
      if ( !v71 )
      {
LABEL_129:
        *(_QWORD *)v206 = &v242;
        *(_QWORD *)&v206[8] = sub_140C98D50;
        *(_QWORD *)&v206[16] = &v203;
        *(_QWORD *)&v206[24] = sub_1400015F0;
        v236 = 1;
        v235 = 1;
        sub_1416ABFD0(&v211, &unk_141A3A090, v206);
        *(_OWORD *)&v206[8] = *(_OWORD *)v211.m256i_i8;
        *(_QWORD *)&v206[24] = v211.m256i_i64[2];
        *(_QWORD *)v206 = 10;
        sub_140C9CF30(v219, v206);
        v230 = *(_QWORD *)&v219[8];
        sub_140C75030(v64, (__int128 *)v242);
        if ( *(_QWORD *)v219 )
          sub_140001660(v230, *(_QWORD *)v219, 1);
        *(_QWORD *)&v201 = v52;
        *(_QWORD *)v219 = &v241;
        *(_QWORD *)&v219[8] = sub_1416B9630;
        *(_QWORD *)&v219[16] = &v201;
        *(_QWORD *)&v219[24] = sub_1416BCB10;
        sub_1416ABFD0(&v214, &unk_141A3A0B1, v219);
        sub_140BBE8E0(v242, (int)aPostconditionF, 20, &v214);
        *(_OWORD *)(a1 + 80) = *(_OWORD *)&v206[80];
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v206[64];
        v100 = *(_OWORD *)v206;
        v101 = *(_OWORD *)&v206[16];
        v102 = *(_OWORD *)&v206[32];
        *(_OWORD *)(a1 + 48) = *(_OWORD *)&v206[48];
        *(_OWORD *)(a1 + 32) = v102;
        *(_OWORD *)(a1 + 16) = v101;
        *(_OWORD *)a1 = v100;
        v103 = v241;
        *(_BYTE *)(a1 + 96) = 4;
        *(_BYTE *)(a1 + 97) = v103;
        LOBYTE(v103) = 1;
        LODWORD(v224) = v103;
LABEL_147:
        if ( v203.m256i_i64[0] )
          sub_140001660(v203.m256i_i64[1], v203.m256i_i64[0], 1);
        sub_1403FAC20(&v188);
        if ( v188 )
          sub_140001660(v217, 32 * v188, 8);
        if ( !(_BYTE)v224 )
          return a1;
        sub_140BAD350(&v191);
        sub_1403FAE40(&v195);
        v108 = v195;
        if ( !(_QWORD)v195 )
          return a1;
        v109 = *((_QWORD *)&v195 + 1);
LABEL_154:
        v119 = 24 * v108;
        goto LABEL_189;
      }
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        goto LABEL_82;
LABEL_83:
      v236 = 1;
      v235 = 1;
      sub_140C75030(v64, (__int128 *)v242);
      if ( v203.m256i_i64[0] )
        sub_140001660(v203.m256i_i64[1], v203.m256i_i64[0], 1);
      v73 = v217;
      v74 = (_QWORD *)(v217 + 8);
      do
      {
        v75 = *(v74 - 1);
        if ( v75 )
          sub_140001660(*v74, v75, 1);
        v74 += 4;
        --v52;
      }
      while ( v52 );
      v200 = v65;
      if ( v188 )
        sub_140001660(v73, 32 * v188, 8);
      sub_140BAD350(&v191);
      v76 = *((_QWORD *)&v195 + 1);
      v77 = v196;
      if ( (_QWORD)v196 )
      {
        v78 = (_QWORD *)(*((_QWORD *)&v195 + 1) + 8LL);
        do
        {
          v19 = *(v78 - 1);
          if ( v19 )
            sub_140001660(*v78, v19, 1);
          v78 += 3;
          --v77;
        }
        while ( v77 );
      }
      if ( (_QWORD)v195 )
        sub_140001660(v76, 24 * v195, 8);
      v20 = v225;
      a2 = v224;
      v11 = v223;
      v21 = v230;
    }
    else
    {
      v177 = *(_QWORD *)v175;
      if ( (_QWORD)v166 != -1 )
      {
        v196 = *(_OWORD *)&v175[80];
        v195 = *(_OWORD *)&v175[64];
        v194 = *(_OWORD *)&v175[48];
        v193 = *(_OWORD *)&v175[32];
        v192 = *(_OWORD *)&v175[16];
        v191 = *(_OWORD *)v175;
        v216 = v170;
        *(_OWORD *)&v215[32] = v169;
        *(_OWORD *)&v215[16] = v168;
        *(_OWORD *)v215 = v167;
        v214 = v166;
        *(_QWORD *)v219 = &v191;
        *(_QWORD *)&v219[8] = sub_14104A7D0;
        *(_QWORD *)&v219[16] = &v214;
        *(_QWORD *)&v219[24] = sub_14104A7D0;
        sub_1416ABFD0(&v201, &unk_141A3A21C, v219);
        *(_OWORD *)&v219[8] = v201;
        *(_QWORD *)&v219[24] = v202;
        *(_QWORD *)v219 = 10;
        v203.m256i_i64[0] = 0;
        *(_OWORD *)&v203.m256i_u64[1] = 1u;
        v211.m256i_i64[2] = 1610612768;
        v211.m256i_i64[0] = (__int64)&v203;
        v211.m256i_i64[1] = (__int64)&off_141A3FE88;
        if ( (unsigned __int8)sub_14104A7D0(v219, &v211) )
          sub_141939040(
            (unsigned int)aADisplayImplem_7,
            55,
            (unsigned int)&v238,
            (unsigned int)&unk_141A3BB68,
            (__int64)&off_141A3FF40);
        v225 = v203.m256i_i64[1];
        v230 = v203.m256i_i64[0];
        sub_140C75030(a2, (__int128 *)v242);
        if ( v230 )
          sub_140001660(v225, v230, 1);
        v211.m256i_i64[0] = (__int64)&v241;
        v211.m256i_i64[1] = (__int64)sub_1416B9630;
        v211.m256i_i64[2] = (__int64)v219;
        v211.m256i_i64[3] = (__int64)sub_14104A7D0;
        sub_1416ABFD0(&v203, &unk_141A3A180, &v211);
        sub_140BBE8E0(v242, (int)aReconcileFaile, 16, &v203);
        *(__m256i *)(a1 + 64) = v221;
        v96 = *(_OWORD *)v219;
        v97 = *(_OWORD *)&v219[16];
        v98 = *(_OWORD *)&v219[32];
        *(_OWORD *)(a1 + 48) = v220;
        *(_OWORD *)(a1 + 32) = v98;
        *(_OWORD *)(a1 + 16) = v97;
        *(_OWORD *)a1 = v96;
        v99 = v241;
        *(_BYTE *)(a1 + 96) = 2;
        *(_BYTE *)(a1 + 97) = v99;
        sub_140BAC840(&v214);
        sub_140BAC840(&v191);
        return a1;
      }
      v216 = *(__m256i *)&v175[64];
      *(_OWORD *)&v215[32] = *(_OWORD *)&v175[48];
      *(_OWORD *)&v215[16] = *(_OWORD *)&v175[32];
      *(_OWORD *)v215 = *(_OWORD *)&v175[16];
      v214 = *(_OWORD *)v175;
      v43 = *(_DWORD *)&v206[104];
      v44 = v206[108];
      v45 = sub_14167FC00(*(_QWORD *)v175, v40, v41, v42);
      if ( v229 )
        goto LABEL_108;
      if ( v43 )
      {
        if ( v241 > 2u )
          goto LABEL_108;
      }
      else if ( v241 > 2u || !v44 )
      {
        goto LABEL_108;
      }
      if ( v200 == -1 )
      {
        v184 = sub_1416A1240(v45, v46, 12, 0, (__int64)&off_141A3EA90);
        v200 = v68;
      }
      else
      {
        v66 = v46 < v200;
        v67 = v45 < v184;
        if ( v45 == v184 )
          v67 = v66;
        if ( !v67 )
        {
LABEL_108:
          *(_QWORD *)&v191 = 0;
          *((_QWORD *)&v191 + 1) = 1;
          *(_QWORD *)&v192 = 0;
          *(_QWORD *)&v219[16] = 1610612768;
          *(_QWORD *)v219 = &v191;
          *(_QWORD *)&v219[8] = &off_141A3FE88;
          if ( (unsigned __int8)sub_14104A7D0(&v214, v219) )
            sub_141939040(
              (unsigned int)aADisplayImplem_7,
              55,
              (unsigned int)&v238,
              (unsigned int)&unk_141A3BB68,
              (__int64)&off_141A3FF40);
          v225 = *((_QWORD *)&v191 + 1);
          v230 = v191;
          sub_140C75030(a2, (__int128 *)v242);
          if ( v230 )
            sub_140001660(v225, v230, 1);
          *(_QWORD *)v219 = &v241;
          *(_QWORD *)&v219[8] = sub_1416B9630;
          *(_QWORD *)&v219[16] = &v214;
          *(_QWORD *)&v219[24] = sub_14104A7D0;
          sub_1416ABFD0(&v211, &unk_141A3A180, v219);
          LOBYTE(v201) = v242;
          v224 = (__int128 *)v211.m256i_i64[1];
          *(_OWORD *)v203.m256i_i8 = *(_OWORD *)&v211.m256i_u64[1];
          *(_QWORD *)v219 = &v201;
          *(_QWORD *)&v219[8] = sub_140C98D50;
          *(_QWORD *)&v219[16] = &v203;
          *(_QWORD *)&v219[24] = sub_140186EE0;
          sub_1416ABFD0(&v191, &unk_141A39D2E, v219);
          sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aReconcileFaile, 16, (__int64)&v191);
          if ( v211.m256i_i64[0] )
            sub_140001660(v224, v211.m256i_i64[0], 1);
          *(__m256i *)(a1 + 64) = v216;
          v83 = v214;
          v84 = *(_OWORD *)v215;
          v85 = *(_OWORD *)&v215[16];
          *(_OWORD *)(a1 + 48) = *(_OWORD *)&v215[32];
          *(_OWORD *)(a1 + 32) = v85;
          *(_OWORD *)(a1 + 16) = v84;
          *(_OWORD *)a1 = v83;
          v86 = v241;
          *(_BYTE *)(a1 + 96) = 2;
          goto LABEL_124;
        }
      }
      *(_QWORD *)&v191 = 0;
      *((_QWORD *)&v191 + 1) = 1;
      *(_QWORD *)&v192 = 0;
      *(_QWORD *)&v219[16] = 1610612768;
      *(_QWORD *)v219 = &v191;
      *(_QWORD *)&v219[8] = &off_141A3FE88;
      v69 = sub_14104A7D0(&v214, v219);
      v11 = v223;
      if ( v69 )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v238,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v211.m256i_i64[2] = v192;
      *(_OWORD *)v211.m256i_i8 = v191;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)&v191 = &v242;
        *((_QWORD *)&v191 + 1) = sub_140C98D50;
        *(_QWORD *)&v192 = &v241;
        *((_QWORD *)&v192 + 1) = sub_1416B9630;
        *(_QWORD *)&v193 = &v211;
        *((_QWORD *)&v193 + 1) = sub_1400015F0;
        *(_QWORD *)&v220 = 2;
        *((_QWORD *)&v220 + 1) = aCodexmateLibCo_31;
        v221.m256i_i64[0] = 45;
        v221.m256i_i64[2] = (__int64)&unk_141A3A1B1;
        v221.m256i_i64[3] = (__int64)&v191;
        *(_QWORD *)v219 = 0;
        *(_QWORD *)&v219[8] = aCodexmateLibCo_31;
        *(_OWORD *)&v219[16] = 0x2Du;
        *(_QWORD *)&v219[32] = aSrcCoreRelayRo_0;
        *(_QWORD *)&v219[40] = 35;
        v221.m256i_i64[1] = 0x12E00000001LL;
        sub_1414D53A0(&v238, v219);
      }
      sub_140C75030(a2, (__int128 *)v242);
      *(_QWORD *)v219 = &v241;
      *(_QWORD *)&v219[8] = sub_1416B9630;
      *(_QWORD *)&v219[16] = &v211;
      *(_QWORD *)&v219[24] = sub_1400015F0;
      sub_1416ABFD0(&v150, &unk_141A3A180, v219);
      LOBYTE(v201) = v242;
      v217 = v151;
      *(_OWORD *)v203.m256i_i8 = v151;
      *(_QWORD *)v219 = &v201;
      *(_QWORD *)&v219[8] = sub_140C98D50;
      *(_QWORD *)&v219[16] = &v203;
      *(_QWORD *)&v219[24] = sub_140186EE0;
      sub_1416ABFD0(&v191, &unk_141A39D2E, v219);
      sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aReconcileRetry, 15, (__int64)&v191);
      if ( v150 )
        sub_140001660(v217, v150, 1);
      if ( v211.m256i_i64[0] )
        sub_140001660(v211.m256i_i64[1], v211.m256i_i64[0], 1);
      sub_140BAC840(&v214);
      v20 = v225;
      v21 = v230;
    }
  }
  LODWORD(v186) = *(_DWORD *)&v206[65];
  *(_DWORD *)((char *)&v186 + 3) = *(_DWORD *)&v206[68];
  v221.m256i_i64[3] = *(_QWORD *)&v206[88];
  *(_OWORD *)&v221.m256i_u64[1] = *(_OWORD *)&v206[72];
  *(_DWORD *)&v219[9] = v214;
  *(_DWORD *)&v219[12] = *(_DWORD *)((char *)&v214 + 3);
  LODWORD(v201) = v191;
  *(_DWORD *)((char *)&v201 + 3) = *(_DWORD *)((char *)&v191 + 3);
  *(_DWORD *)((char *)v178 + 3) = *(_DWORD *)((char *)&v166 + 3);
  LODWORD(v178[0]) = v166;
  *(_DWORD *)((char *)&v181 + 3) = *(_DWORD *)&v175[3];
  LODWORD(v181) = *(_DWORD *)v175;
  *(_DWORD *)((char *)v179 + 3) = *(__int32 *)((char *)v211.m256i_i32 + 3);
  LODWORD(v179[0]) = v211.m256i_i32[0];
  *(_DWORD *)((char *)v180 + 3) = *(__int32 *)((char *)v203.m256i_i32 + 3);
  LODWORD(v180[0]) = v203.m256i_i32[0];
  *(_DWORD *)((char *)&v188 + 3) = *(_DWORD *)((char *)&v171 + 3);
  LODWORD(v188) = v171;
  *(_QWORD *)v219 = *(_QWORD *)v206;
  v219[8] = v206[8];
  v219[16] = v206[16];
  *(_DWORD *)&v219[20] = *(_DWORD *)((char *)&v191 + 3);
  *(_DWORD *)&v219[17] = v201;
  v219[24] = v206[24];
  *(_DWORD *)&v219[28] = *(_DWORD *)((char *)v178 + 3);
  *(_DWORD *)&v219[25] = v166;
  v219[32] = v206[32];
  *(_DWORD *)&v219[36] = *(_DWORD *)((char *)&v181 + 3);
  *(_DWORD *)&v219[33] = *(_DWORD *)v175;
  v219[40] = v206[40];
  *(_DWORD *)&v219[44] = *(_DWORD *)((char *)v179 + 3);
  *(_DWORD *)&v219[41] = v211.m256i_i32[0];
  LOBYTE(v220) = v206[48];
  DWORD1(v220) = *(_DWORD *)((char *)v180 + 3);
  *(_DWORD *)((char *)&v220 + 1) = v203.m256i_i32[0];
  BYTE8(v220) = v206[56];
  HIDWORD(v220) = *(_DWORD *)((char *)&v188 + 3);
  *(_DWORD *)((char *)&v220 + 9) = v171;
  v221.m256i_i8[0] = v206[64];
  v221.m256i_i32[1] = *(_DWORD *)&v206[68];
  *(__int32 *)((char *)v221.m256i_i32 + 1) = v186;
  *(_QWORD *)&v214 = 0;
  *((_QWORD *)&v214 + 1) = 1;
  *(_QWORD *)v215 = 0;
  *(_QWORD *)&v206[16] = 1610612768;
  *(_QWORD *)v206 = &v214;
  *(_QWORD *)&v206[8] = &off_141A3FE88;
  if ( (unsigned __int8)sub_14104A7D0(v219, v206) )
    sub_141939040(
      (unsigned int)aADisplayImplem_7,
      55,
      (unsigned int)&v238,
      (unsigned int)&unk_141A3BB68,
      (__int64)&off_141A3FF40);
  v225 = *((_QWORD *)&v214 + 1);
  v230 = v214;
  sub_140C75030(v224, (__int128 *)v242);
  if ( v230 )
    sub_140001660(v225, v230, 1);
  v91 = sub_14167FD50(&v157);
  v191 = 0x3E8 * (unsigned __int128)(unsigned __int64)v91 + v92 / 0xF4240uLL;
  *(_QWORD *)v206 = &v241;
  *(_QWORD *)&v206[8] = sub_1416B9630;
  *(_QWORD *)&v206[16] = &v191;
  *(_QWORD *)&v206[24] = sub_1416B95D0;
  *(_QWORD *)&v206[32] = v219;
  *(_QWORD *)&v206[40] = sub_14104A7D0;
  sub_1416ABFD0(&v214, &unk_141A3A247, v206);
  sub_140BBE8E0(v242, (int)aStopFailed, 11, &v214);
  *(__m256i *)(a1 + 64) = v221;
  v93 = *(_OWORD *)v219;
  v94 = *(_OWORD *)&v219[16];
  v95 = *(_OWORD *)&v219[32];
  *(_OWORD *)(a1 + 48) = v220;
  *(_OWORD *)(a1 + 32) = v95;
  *(_OWORD *)(a1 + 16) = v94;
  *(_OWORD *)a1 = v93;
  v86 = v241;
  *(_BYTE *)(a1 + 96) = 1;
LABEL_124:
  *(_BYTE *)(a1 + 97) = v86;
  return a1;
}
