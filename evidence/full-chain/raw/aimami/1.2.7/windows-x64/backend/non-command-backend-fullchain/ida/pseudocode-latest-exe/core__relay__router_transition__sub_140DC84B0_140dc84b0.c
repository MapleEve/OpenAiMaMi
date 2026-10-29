// win 1.2.7 latest-exe | module src/core/relay/router_transition.rs | ea 0x140dc84b0 | successor of pre-update 0x140bdd010 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.664, "str_ov": 0.5, "verdict": "CONFIRMED_DIFF"}
double __fastcall sub_140DC84B0(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        unsigned __int8 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char *a10)
{
  __int128 v14; // kr00_16
  __int128 v15; // kr10_16
  __int128 v16; // kr20_16
  __int128 v17; // kr30_16
  __int128 v18; // xmm0
  __int64 v19; // rcx
  __int64 v20; // rdx
  char v21; // al
  char v22; // bl
  int v23; // ebx
  __int128 v24; // kr40_16
  int v25; // edx
  char v26; // bl
  __int64 v27; // rax
  __int128 *v28; // rsi
  unsigned int v29; // edx
  _BYTE *v30; // rbx
  __int64 v31; // r8
  int v32; // r14d
  char v33; // bl
  unsigned __int64 v34; // rax
  unsigned int v35; // edx
  __int64 v36; // r12
  __int64 v37; // rbx
  __int64 v38; // r14
  _QWORD *v39; // r13
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  unsigned int v42; // edx
  char v43; // bl
  bool v44; // cl
  bool v45; // dl
  unsigned int v46; // edx
  bool v47; // cl
  bool v48; // dl
  unsigned int v49; // edx
  __int64 v50; // r14
  _QWORD *v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rbx
  __int64 v54; // r14
  _QWORD *v55; // r12
  _OWORD *v56; // rax
  __int128 v57; // xmm1
  __int128 v58; // xmm2
  char v59; // al
  __int64 v60; // rsi
  __int64 v61; // rax
  unsigned int v62; // edx
  __int128 v63; // xmm1
  __int128 v64; // xmm2
  char v65; // al
  __int128 v66; // xmm1
  __int128 v67; // xmm2
  __int64 v68; // rsi
  __int128 v69; // xmm1
  __int128 v70; // xmm2
  char v71; // al
  __int128 v72; // xmm1
  __int128 v73; // xmm2
  char v74; // al
  __int128 v75; // xmm1
  __int128 v76; // xmm2
  char v77; // al
  __int64 v78; // rsi
  __int128 v79; // xmm1
  __int128 v80; // xmm2
  char v81; // al
  __int64 v82; // rax
  __int64 v83; // rcx
  __int128 v84; // kr90_16
  int v85; // edx
  __int128 v86; // xmm1
  __int128 v87; // xmm2
  __int64 v88; // rsi
  __int64 v89; // rdx
  __int64 v90; // rdx
  __int128 v91; // xmm1
  __int128 v92; // xmm2
  char v93; // al
  __int128 v94; // krA0_16
  __int64 v95; // rsi
  __int64 v96; // rbx
  __int64 v97; // rdi
  _OWORD *v98; // r12
  __int64 v99; // r14
  char v100; // r15
  __int128 v101; // xmm1
  __int128 v102; // xmm2
  char v103; // al
  unsigned __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  unsigned __int64 v107; // rdi
  __int64 v108; // rax
  unsigned int v109; // edx
  __int64 (__fastcall *v110)(unsigned __int64); // rax
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // r14
  __int64 v114; // rbx
  __int64 v115; // rax
  __int64 v116; // rcx
  __int128 v117; // xmm1
  __int128 v118; // xmm2
  __int64 v119; // rax
  unsigned int v120; // edx
  double result; // xmm0_8
  __int64 v122; // [rsp+20h] [rbp-60h]
  __int64 v123; // [rsp+20h] [rbp-60h]
  __int64 v124; // [rsp+20h] [rbp-60h]
  __int128 v125; // [rsp+28h] [rbp-58h]
  __int128 v126; // [rsp+28h] [rbp-58h]
  __int128 v127; // [rsp+28h] [rbp-58h]
  __int64 v128; // [rsp+28h] [rbp-58h]
  __int128 v129; // [rsp+28h] [rbp-58h]
  __int64 v130; // [rsp+28h] [rbp-58h]
  __int64 v131; // [rsp+28h] [rbp-58h]
  __int64 v132; // [rsp+30h] [rbp-50h]
  __int64 v133; // [rsp+30h] [rbp-50h]
  __int64 v134; // [rsp+38h] [rbp-48h]
  __int64 v135; // [rsp+38h] [rbp-48h]
  __int64 v136; // [rsp+38h] [rbp-48h]
  __int64 v137; // [rsp+38h] [rbp-48h]
  __int64 v138; // [rsp+38h] [rbp-48h]
  __int64 v139; // [rsp+38h] [rbp-48h]
  __int64 v140; // [rsp+40h] [rbp-40h]
  __int64 v141; // [rsp+40h] [rbp-40h]
  __int64 v142; // [rsp+40h] [rbp-40h]
  __int64 v143; // [rsp+40h] [rbp-40h]
  __int64 v144; // [rsp+40h] [rbp-40h]
  __int64 v145; // [rsp+40h] [rbp-40h]
  _BYTE v146[24]; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v147[24]; // [rsp+70h] [rbp-10h] BYREF
  _BYTE v148[24]; // [rsp+88h] [rbp+8h] BYREF
  _BYTE v149[24]; // [rsp+A0h] [rbp+20h] BYREF
  _BYTE v150[24]; // [rsp+B8h] [rbp+38h] BYREF
  __int128 v151; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v152; // [rsp+E0h] [rbp+60h]
  __int128 v153; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v154; // [rsp+F8h] [rbp+78h]
  __int128 v155; // [rsp+100h] [rbp+80h] BYREF
  __int64 v156; // [rsp+110h] [rbp+90h] BYREF
  __int128 v157; // [rsp+118h] [rbp+98h]
  __int64 v158; // [rsp+128h] [rbp+A8h] BYREF
  __int128 v159; // [rsp+130h] [rbp+B0h]
  __int64 v160; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v161; // [rsp+148h] [rbp+C8h]
  __int64 v162; // [rsp+158h] [rbp+D8h] BYREF
  __int128 v163; // [rsp+160h] [rbp+E0h]
  __int64 v164; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v165; // [rsp+178h] [rbp+F8h]
  __int128 v166; // [rsp+188h] [rbp+108h]
  __int128 v167; // [rsp+198h] [rbp+118h]
  __int128 v168; // [rsp+1A8h] [rbp+128h]
  __int64 v169; // [rsp+1B8h] [rbp+138h]
  __int64 v170; // [rsp+1C0h] [rbp+140h] BYREF
  int v171; // [rsp+1C8h] [rbp+148h]
  __int64 v172; // [rsp+1D0h] [rbp+150h]
  __m256i v173; // [rsp+1D8h] [rbp+158h] BYREF
  __int128 v174; // [rsp+1F8h] [rbp+178h]
  __int128 v175; // [rsp+208h] [rbp+188h]
  __int128 v176; // [rsp+218h] [rbp+198h]
  __int128 v177; // [rsp+228h] [rbp+1A8h]
  __int64 v178; // [rsp+238h] [rbp+1B8h]
  _BYTE v179[96]; // [rsp+240h] [rbp+1C0h]
  _BYTE v180[21]; // [rsp+2A8h] [rbp+228h] BYREF
  _BYTE v181[21]; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v182; // [rsp+2D8h] [rbp+258h] BYREF
  __int64 v183; // [rsp+2E8h] [rbp+268h]
  __int128 *v184; // [rsp+2F0h] [rbp+270h]
  unsigned __int64 v185; // [rsp+2F8h] [rbp+278h]
  __int128 v186; // [rsp+300h] [rbp+280h] BYREF
  __int128 v187; // [rsp+310h] [rbp+290h]
  __int128 v188; // [rsp+320h] [rbp+2A0h]
  __int128 v189; // [rsp+330h] [rbp+2B0h]
  __int128 v190; // [rsp+340h] [rbp+2C0h] BYREF
  __int128 v191; // [rsp+350h] [rbp+2D0h]
  _QWORD v192[3]; // [rsp+368h] [rbp+2E8h] BYREF
  __int128 v193; // [rsp+380h] [rbp+300h] BYREF
  _QWORD v194[2]; // [rsp+390h] [rbp+310h] BYREF
  __int128 v195; // [rsp+3A0h] [rbp+320h] BYREF
  __int128 v196; // [rsp+3B0h] [rbp+330h]
  __int128 v197; // [rsp+3C0h] [rbp+340h]
  __int128 v198; // [rsp+3D0h] [rbp+350h]
  __int64 v199; // [rsp+3E8h] [rbp+368h] BYREF
  int v200; // [rsp+3F0h] [rbp+370h]
  __int64 v201; // [rsp+3F8h] [rbp+378h] BYREF
  __int64 v202; // [rsp+400h] [rbp+380h]
  __int64 v203; // [rsp+408h] [rbp+388h]
  __int128 v204; // [rsp+410h] [rbp+390h] BYREF
  _BYTE v205[48]; // [rsp+420h] [rbp+3A0h]
  __int128 v206; // [rsp+450h] [rbp+3D0h] BYREF
  __int128 v207; // [rsp+460h] [rbp+3E0h]
  int v208; // [rsp+478h] [rbp+3F8h] BYREF
  char v209; // [rsp+47Ch] [rbp+3FCh] BYREF
  __int64 v210; // [rsp+480h] [rbp+400h]
  unsigned int v211; // [rsp+48Ch] [rbp+40Ch]
  __int128 v212; // [rsp+490h] [rbp+410h] BYREF
  __m256i v213; // [rsp+4A0h] [rbp+420h] BYREF
  __int128 v214; // [rsp+4C0h] [rbp+440h]
  __int128 v215; // [rsp+4D0h] [rbp+450h]
  __int128 v216; // [rsp+4E0h] [rbp+460h]
  __int128 v217; // [rsp+4F0h] [rbp+470h]
  _BYTE v218[128]; // [rsp+500h] [rbp+480h] BYREF
  __int128 v219; // [rsp+580h] [rbp+500h]
  __int128 v220; // [rsp+590h] [rbp+510h]
  __int128 v221; // [rsp+5A0h] [rbp+520h]
  __int128 v222; // [rsp+5B0h] [rbp+530h]
  __int64 v223; // [rsp+5C0h] [rbp+540h]
  char v224; // [rsp+5CFh] [rbp+54Fh] BYREF
  _BYTE v225[96]; // [rsp+5D0h] [rbp+550h] BYREF
  char v226; // [rsp+63Ch] [rbp+5BCh]
  char v227; // [rsp+63Dh] [rbp+5BDh]
  char v228; // [rsp+63Eh] [rbp+5BEh]
  unsigned __int8 v229; // [rsp+63Fh] [rbp+5BFh]
  _BYTE v230[96]; // [rsp+640h] [rbp+5C0h] BYREF
  __int64 v231; // [rsp+6A0h] [rbp+620h]
  char v232; // [rsp+6ADh] [rbp+62Dh]
  _BYTE v233[2]; // [rsp+6AEh] [rbp+62Eh] BYREF
  unsigned __int64 v234; // [rsp+6B0h] [rbp+630h]
  char v235; // [rsp+6BDh] [rbp+63Dh]
  char v236; // [rsp+6BEh] [rbp+63Eh]
  char v237; // [rsp+6BFh] [rbp+63Fh]
  char v238; // [rsp+6C0h] [rbp+640h]
  char v239; // [rsp+6C1h] [rbp+641h]
  char v240; // [rsp+6C2h] [rbp+642h]
  char v241; // [rsp+6C3h] [rbp+643h] BYREF
  char v242; // [rsp+6C4h] [rbp+644h]
  char v243; // [rsp+6C5h] [rbp+645h]
  char v244; // [rsp+6C6h] [rbp+646h] BYREF
  unsigned __int8 v245; // [rsp+6C7h] [rbp+647h] BYREF
  __int64 v246; // [rsp+6C8h] [rbp+648h]

  v246 = -2;
  v245 = 1;
  v233[0] = 1;
  *(_QWORD *)&v212 = aRouteronRollba;
  *((_QWORD *)&v212 + 1) = 17;
  sub_1407D5CC0(v218);
  v14 = *(_OWORD *)&v218[32];
  *(_OWORD *)v225 = *(_OWORD *)&v218[48];
  *(_OWORD *)&v225[16] = *(_OWORD *)&v218[64];
  if ( *(_QWORD *)v218 != -1 )
  {
    *(_OWORD *)&v230[80] = *(_OWORD *)&v218[80];
    *(_QWORD *)&v230[16] = *(_QWORD *)&v218[16];
    *(_OWORD *)&v230[24] = *(_OWORD *)&v218[24];
    *(_QWORD *)&v230[40] = *(_QWORD *)&v218[40];
    *(_OWORD *)&v230[48] = *(_OWORD *)v225;
    *(_OWORD *)&v230[64] = *(_OWORD *)&v225[16];
    *(_OWORD *)v230 = *(_OWORD *)v218;
LABEL_3:
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v230[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v230[64];
    v15 = *(_OWORD *)v230;
    v16 = *(_OWORD *)&v230[16];
    v17 = *(_OWORD *)&v230[32];
    *(_QWORD *)&v18 = *(_QWORD *)&v230[48];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v230[48];
    *(_OWORD *)(a1 + 32) = v17;
    *(_OWORD *)(a1 + 16) = v16;
    *(_OWORD *)a1 = v15;
LABEL_4:
    *(_WORD *)(a1 + 96) = 0;
    goto LABEL_244;
  }
  if ( *(_QWORD *)&v218[8] != -1 )
  {
    if ( *(_QWORD *)&v218[8] )
      sub_140001660(*(_QWORD *)&v218[16], *(_QWORD *)&v218[8], 1);
    if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(*((_QWORD *)&v14 + 1), v14, 1);
  }
  sub_1407E52E0(v218);
  if ( *(_DWORD *)v218 == -1 )
  {
    sub_1408D1F30(v230, a2);
    if ( *(_QWORD *)v230 != -1 )
      goto LABEL_3;
  }
  else
  {
    *(_OWORD *)&v230[80] = *(_OWORD *)&v218[80];
    *(_OWORD *)&v230[64] = *(_OWORD *)&v218[64];
    *(_OWORD *)&v230[48] = *(_OWORD *)&v218[48];
    *(_OWORD *)&v230[32] = *(_OWORD *)&v218[32];
    *(_OWORD *)&v230[16] = *(_OWORD *)&v218[16];
    *(_OWORD *)v230 = *(_OWORD *)v218;
    if ( *(_QWORD *)v218 != -1 )
      goto LABEL_3;
  }
  v229 = a4;
  sub_141597890(&v155);
  *(_QWORD *)v218 = v233;
  *(_QWORD *)&v218[8] = sub_140EDAE50;
  *(_QWORD *)&v218[16] = &v212;
  *(_QWORD *)&v218[24] = sub_140191200;
  sub_1416DAFA0(&v164, &unk_141A9B638, v218);
  v213.m256i_i8[0] = v245;
  v234 = v165;
  *(_OWORD *)v225 = v165;
  *(_QWORD *)v218 = &v213;
  *(_QWORD *)&v218[8] = sub_140ED78B0;
  *(_QWORD *)&v218[16] = v225;
  *(_QWORD *)&v218[24] = sub_140191200;
  sub_1416DAFA0(v230, &unk_141A9B450, v218);
  sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStart_2, 5, (__int64)v230);
  v20 = v164;
  if ( v164 )
    sub_140001660(v234, v164, 1);
  if ( !v233[0] )
  {
    sub_14080DD30(&v213, a3, 0);
    if ( v213.m256i_i32[0] != -1 )
    {
      *(_OWORD *)&v225[80] = v217;
      *(_OWORD *)&v225[64] = v216;
      *(_OWORD *)&v225[48] = v215;
      *(_OWORD *)&v225[32] = v214;
      *(__m256i *)v225 = v213;
      *(_QWORD *)v230 = 0;
      *(_QWORD *)&v230[8] = 1;
      *(_QWORD *)&v230[16] = 0;
      *(_QWORD *)&v218[16] = 1610612768;
      *(_QWORD *)v218 = v230;
      *(_QWORD *)&v218[8] = &off_141AA1A90;
      if ( (unsigned __int8)sub_140D76130(v225, v218) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v241,
          (unsigned int)&unk_141A9F540,
          (__int64)&off_141AA1B48);
      v231 = *(_QWORD *)&v230[8];
      v234 = *(_QWORD *)v230;
      sub_1407D2B10(
        (unsigned int)v218,
        (_DWORD)a2,
        v245,
        (unsigned int)aFailed_2,
        6,
        v212,
        *((__int64 *)&v212 + 1),
        *(__int64 *)&v230[8],
        *(__int64 *)&v230[16],
        0);
      if ( *(_QWORD *)v218 == -1 )
      {
        sub_1407B9160(*(_QWORD *)&v218[8]);
      }
      else
      {
        *(_QWORD *)&v230[88] = *(_QWORD *)&v218[88];
        *(_OWORD *)&v230[72] = *(_OWORD *)&v218[72];
        *(_OWORD *)&v230[56] = *(_OWORD *)&v218[56];
        *(_OWORD *)&v230[40] = *(_OWORD *)&v218[40];
        *(_OWORD *)&v230[24] = *(_OWORD *)&v218[24];
        *(_OWORD *)&v230[8] = *(_OWORD *)&v218[8];
        *(_QWORD *)v230 = *(_QWORD *)v218;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)&v204 = v230;
          *((_QWORD *)&v204 + 1) = sub_140D76130;
          *(_QWORD *)v218 = aCodexmateLibCo_49;
          *(_QWORD *)&v218[8] = 45;
          *(_QWORD *)&v218[16] = aCodexmateLibCo_49;
          *(_QWORD *)&v218[24] = 45;
          *(_QWORD *)&v218[32] = &off_141AA1958;
          sub_140AF72B0(&unk_141AA1920, &v204, 2, v218);
        }
        sub_140D8A3A0(v230);
      }
      if ( v234 )
        sub_140001660(v231, v234, 1);
      *(_QWORD *)v218 = &v212;
      *(_QWORD *)&v218[8] = sub_140191200;
      *(_QWORD *)&v218[16] = v225;
      *(_QWORD *)&v218[24] = sub_140D76130;
      sub_1416DAFA0(&v162, &unk_141A9B651, v218);
      LOBYTE(v186) = v245;
      v234 = v163;
      v204 = v163;
      *(_QWORD *)v218 = &v186;
      *(_QWORD *)&v218[8] = sub_140ED78B0;
      *(_QWORD *)&v218[16] = &v204;
      *(_QWORD *)&v218[24] = sub_140191200;
      sub_1416DAFA0(v230, &unk_141A9B450, v218);
      sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aPreflightFaile, 16, (__int64)v230);
      if ( v162 )
        sub_140001660(v234, v162, 1);
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v225[80];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v225[64];
      v18 = *(_OWORD *)v225;
      v66 = *(_OWORD *)&v225[16];
      v67 = *(_OWORD *)&v225[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v225[48];
      *(_OWORD *)(a1 + 32) = v67;
      *(_OWORD *)(a1 + 16) = v66;
      *(_OWORD *)a1 = v18;
      goto LABEL_4;
    }
  }
  v172 = 2LL * ((v229 & 1) == 0) + 3;
  v211 = -1;
  v21 = 1;
  v22 = 0;
  v210 = a1;
  v184 = a2;
  while ( (v22 & 1) == 0 && (unsigned __int8)v21 <= 3u )
  {
    LOBYTE(a1) = v21 == 3;
    v23 = (unsigned __int8)(v21 + 1);
    if ( v21 == 3 )
      v23 = 3;
    v244 = v21;
    v24 = v212;
    sub_1407D2B10(
      (unsigned int)v218,
      (_DWORD)a2,
      v245,
      (unsigned int)aStoppingCodex,
      14,
      v212,
      *((__int64 *)&v212 + 1),
      v212,
      *((__int64 *)&v212 + 1),
      0);
    LODWORD(v234) = a1;
    LODWORD(v231) = v23;
    if ( *(_QWORD *)v218 == -1 )
    {
      sub_1407B9160(*(_QWORD *)&v218[8]);
    }
    else
    {
      *(_QWORD *)&v230[88] = *(_QWORD *)&v218[88];
      *(_OWORD *)&v230[72] = *(_OWORD *)&v218[72];
      *(_OWORD *)&v230[56] = *(_OWORD *)&v218[56];
      *(_OWORD *)&v230[40] = *(_OWORD *)&v218[40];
      *(_OWORD *)&v230[24] = *(_OWORD *)&v218[24];
      *(_OWORD *)&v230[8] = *(_OWORD *)&v218[8];
      *(_QWORD *)v230 = *(_QWORD *)v218;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)v225 = v230;
        *(_QWORD *)&v225[8] = sub_140D76130;
        *(_QWORD *)&v218[48] = 2;
        *(_QWORD *)&v218[56] = aCodexmateLibCo_49;
        *(_QWORD *)&v218[64] = 45;
        *(_QWORD *)&v218[80] = &unk_141AA1920;
        *(_QWORD *)&v218[88] = v225;
        *(_QWORD *)v218 = 0;
        *(_QWORD *)&v218[8] = aCodexmateLibCo_49;
        *(_OWORD *)&v218[16] = 0x2Du;
        *(_QWORD *)&v218[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v218[40] = 35;
        *(_QWORD *)&v218[72] = 0x22E00000001LL;
        sub_141503E20(&v241, v218);
      }
      sub_140D8A3A0(v230);
    }
    v170 = sub_1416AEBD0();
    v171 = v25;
    sub_140933FA0((unsigned int)v218, v172, 0, v229, a5);
    *(_DWORD *)&v230[3] = *(_DWORD *)&v218[12];
    *(_DWORD *)v230 = *(_DWORD *)&v218[9];
    *(__int32 *)((char *)v213.m256i_i32 + 3) = *(_DWORD *)&v218[20];
    v213.m256i_i32[0] = *(_DWORD *)&v218[17];
    *(_DWORD *)((char *)&v204 + 3) = *(_DWORD *)&v218[28];
    LODWORD(v204) = *(_DWORD *)&v218[25];
    LODWORD(v186) = *(_DWORD *)&v218[33];
    *(_DWORD *)((char *)&v186 + 3) = *(_DWORD *)&v218[36];
    *(__int32 *)((char *)v173.m256i_i32 + 3) = *(_DWORD *)&v218[44];
    v173.m256i_i32[0] = *(_DWORD *)&v218[41];
    *(_DWORD *)&v179[3] = *(_DWORD *)&v218[52];
    *(_DWORD *)v179 = *(_DWORD *)&v218[49];
    v26 = v218[56];
    *(_DWORD *)((char *)&v195 + 3) = *(_DWORD *)&v218[60];
    LODWORD(v195) = *(_DWORD *)&v218[57];
    if ( *(_QWORD *)v218 != -1 )
    {
      LODWORD(v199) = *(_DWORD *)&v218[65];
      *(_DWORD *)((char *)&v199 + 3) = *(_DWORD *)&v218[68];
      *(_QWORD *)&v225[88] = *(_QWORD *)&v218[88];
      *(_OWORD *)&v225[72] = *(_OWORD *)&v218[72];
      *(_DWORD *)&v225[9] = *(_DWORD *)v230;
      *(_DWORD *)&v225[12] = *(_DWORD *)&v230[3];
      LODWORD(v192[0]) = v213.m256i_i32[0];
      *(_DWORD *)((char *)v192 + 3) = *(__int32 *)((char *)v213.m256i_i32 + 3);
      *(_DWORD *)((char *)&v182 + 3) = *(_DWORD *)((char *)&v204 + 3);
      LODWORD(v182) = v204;
      *(_DWORD *)&v180[3] = *(_DWORD *)((char *)&v186 + 3);
      *(_DWORD *)v180 = v186;
      *(_DWORD *)&v181[3] = *(__int32 *)((char *)v173.m256i_i32 + 3);
      *(_DWORD *)v181 = v173.m256i_i32[0];
      *(_DWORD *)((char *)&v201 + 3) = *(_DWORD *)&v179[3];
      LODWORD(v201) = *(_DWORD *)v179;
      *(_DWORD *)((char *)v194 + 3) = *(_DWORD *)((char *)&v195 + 3);
      LODWORD(v194[0]) = v195;
      *(_QWORD *)v225 = *(_QWORD *)v218;
      v225[8] = v218[8];
      v225[16] = v218[16];
      *(_DWORD *)&v225[20] = *(__int32 *)((char *)v213.m256i_i32 + 3);
      *(_DWORD *)&v225[17] = v192[0];
      v225[24] = v218[24];
      *(_DWORD *)&v225[28] = *(_DWORD *)((char *)&v182 + 3);
      *(_DWORD *)&v225[25] = v204;
      v225[32] = v218[32];
      *(_DWORD *)&v225[36] = *(_DWORD *)&v180[3];
      *(_DWORD *)&v225[33] = v186;
      v225[40] = v218[40];
      *(_DWORD *)&v225[44] = *(_DWORD *)&v181[3];
      *(_DWORD *)&v225[41] = v173.m256i_i32[0];
      v225[48] = v218[48];
      *(_DWORD *)&v225[52] = *(_DWORD *)((char *)&v201 + 3);
      *(_DWORD *)&v225[49] = *(_DWORD *)v179;
      v225[56] = v218[56];
      *(_DWORD *)&v225[60] = *(_DWORD *)((char *)v194 + 3);
      *(_DWORD *)&v225[57] = v195;
      v225[64] = v218[64];
      *(_DWORD *)&v225[68] = *(_DWORD *)&v218[68];
      *(_DWORD *)&v225[65] = v199;
      *(_QWORD *)v230 = 0;
      *(_QWORD *)&v230[8] = 1;
      *(_QWORD *)&v230[16] = 0;
      *(_QWORD *)&v218[16] = 1610612768;
      *(_QWORD *)v218 = v230;
      *(_QWORD *)&v218[8] = &off_141AA1A90;
      v59 = sub_140D76130(v225, v218);
      v60 = v210;
      if ( v59 )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v241,
          (unsigned int)&unk_141A9F540,
          (__int64)&off_141AA1B48);
      v234 = *(_QWORD *)v230;
      v142 = *(_QWORD *)&v230[16];
      v231 = *(_QWORD *)&v230[8];
      v136 = *(_QWORD *)&v230[8];
      v126 = v212;
      sub_1407D7360((__int128 *)v230, v184, v245);
      if ( *(_DWORD *)v230 != -1 )
      {
        *(_OWORD *)&v218[80] = *(_OWORD *)&v230[80];
        *(_OWORD *)&v218[64] = *(_OWORD *)&v230[64];
        *(_OWORD *)&v218[48] = *(_OWORD *)&v230[48];
        *(_OWORD *)&v218[32] = *(_OWORD *)&v230[32];
        *(_OWORD *)&v218[16] = *(_OWORD *)&v230[16];
        *(_OWORD *)v218 = *(_OWORD *)v230;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)&v204 = v218;
          *((_QWORD *)&v204 + 1) = sub_140D76130;
          v213.m256i_i64[0] = (__int64)aCodexmateLibCo_49;
          v213.m256i_i64[1] = 45;
          v213.m256i_i64[2] = (__int64)aCodexmateLibCo_49;
          v213.m256i_i64[3] = 45;
          *(_QWORD *)&v214 = &off_141AA1958;
          sub_140AF72B0(&unk_141AA1920, &v204, 2, &v213);
        }
        sub_140D8A3A0(v218);
      }
      if ( v234 )
        sub_140001660(v231, v234, 1);
      v61 = sub_1416AED20(&v170);
      *(_OWORD *)v230 = 0x3E8 * (unsigned __int128)(unsigned __int64)v61 + v62 / 0xF4240uLL;
      *(_QWORD *)v218 = &v244;
      *(_QWORD *)&v218[8] = sub_1416E8600;
      *(_QWORD *)&v218[16] = v230;
      *(_QWORD *)&v218[24] = sub_1416E85A0;
      *(_QWORD *)&v218[32] = v225;
      *(_QWORD *)&v218[40] = sub_140D76130;
      sub_1416DAFA0(v150, &unk_141A9B96F, v218);
      sub_140DB20C0(v245, aStopFailed, 11, v150, 6, v126, *((_QWORD *)&v126 + 1), v136, v142);
      *(_OWORD *)(v60 + 80) = *(_OWORD *)&v225[80];
      *(_OWORD *)(v60 + 64) = *(_OWORD *)&v225[64];
      v18 = *(_OWORD *)v225;
      v63 = *(_OWORD *)&v225[16];
      v64 = *(_OWORD *)&v225[32];
      *(_OWORD *)(v60 + 48) = *(_OWORD *)&v225[48];
      *(_OWORD *)(v60 + 32) = v64;
      *(_OWORD *)(v60 + 16) = v63;
      *(_OWORD *)v60 = v18;
      v65 = v244;
      *(_BYTE *)(v60 + 96) = 1;
      *(_BYTE *)(v60 + 97) = v65;
      goto LABEL_244;
    }
    LODWORD(v192[0]) = *(_DWORD *)v230;
    *(_DWORD *)((char *)v192 + 3) = *(_DWORD *)&v230[3];
    LODWORD(v182) = v213.m256i_i32[0];
    *(_DWORD *)((char *)&v182 + 3) = *(__int32 *)((char *)v213.m256i_i32 + 3);
    *(_DWORD *)v180 = v204;
    *(_DWORD *)&v180[3] = *(_DWORD *)((char *)&v204 + 3);
    *(_DWORD *)v181 = v186;
    *(_DWORD *)&v181[3] = *(_DWORD *)((char *)&v186 + 3);
    *(_DWORD *)((char *)&v201 + 3) = *(__int32 *)((char *)v173.m256i_i32 + 3);
    LODWORD(v201) = v173.m256i_i32[0];
    *(_DWORD *)((char *)v194 + 3) = *(_DWORD *)&v179[3];
    LODWORD(v194[0]) = *(_DWORD *)v179;
    LODWORD(v199) = v195;
    *(_DWORD *)((char *)&v199 + 3) = *(_DWORD *)((char *)&v195 + 3);
    DWORD1(v166) = *(_DWORD *)&v230[3];
    *(_DWORD *)((char *)&v166 + 1) = v192[0];
    HIDWORD(v166) = *(__int32 *)((char *)v213.m256i_i32 + 3);
    *(_DWORD *)((char *)&v166 + 9) = v182;
    DWORD1(v167) = *(_DWORD *)((char *)&v204 + 3);
    *(_DWORD *)((char *)&v167 + 1) = *(_DWORD *)v180;
    HIDWORD(v167) = *(_DWORD *)((char *)&v186 + 3);
    *(_DWORD *)((char *)&v167 + 9) = *(_DWORD *)v181;
    DWORD1(v168) = *(_DWORD *)((char *)&v201 + 3);
    *(_DWORD *)((char *)&v168 + 1) = v173.m256i_i32[0];
    HIDWORD(v168) = *(_DWORD *)((char *)v194 + 3);
    *(_DWORD *)((char *)&v168 + 9) = *(_DWORD *)v179;
    HIDWORD(v169) = *(_DWORD *)((char *)&v195 + 3);
    *(_DWORD *)((char *)&v169 + 1) = v199;
    v224 = v218[56];
    LOBYTE(v166) = v218[8];
    BYTE8(v166) = v218[16];
    LOBYTE(v167) = v218[24];
    BYTE8(v167) = v218[32];
    LOBYTE(v168) = v218[40];
    BYTE8(v168) = v218[48];
    LOBYTE(v169) = v218[56];
    v238 = 1;
    v27 = sub_1416AED20(&v170);
    v28 = v184;
    *(_OWORD *)v230 = 0x3E8 * (unsigned __int128)(unsigned __int64)v27 + v29 / 0xF4240uLL;
    *(_QWORD *)v218 = &v244;
    *(_QWORD *)&v218[8] = sub_1416E8600;
    *(_QWORD *)&v218[16] = v230;
    *(_QWORD *)&v218[24] = sub_1416E85A0;
    *(_QWORD *)&v218[32] = &v224;
    *(_QWORD *)&v218[40] = sub_1416EBC20;
    v238 = 1;
    sub_1416DAFA0(&v160, &unk_141A9B6EE, v218);
    v213.m256i_i8[0] = v245;
    v223 = v161;
    *(_OWORD *)v225 = v161;
    *(_QWORD *)v218 = &v213;
    *(_QWORD *)&v218[8] = sub_140ED78B0;
    *(_QWORD *)&v218[16] = v225;
    *(_QWORD *)&v218[24] = sub_140191200;
    sub_1416DAFA0(v230, &unk_141A9B450, v218);
    sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStopComplete, 13, (__int64)v230);
    if ( v160 )
      sub_140001660(v223, v160, 1);
    v238 = 1;
    sub_1407D2B10(
      (unsigned int)v218,
      (_DWORD)v28,
      v245,
      (unsigned int)&unk_141A9B71D,
      11,
      v212,
      *((__int64 *)&v212 + 1),
      v24,
      *((__int64 *)&v24 + 1),
      0);
    if ( *(_QWORD *)v218 == -1 )
    {
      v238 = 1;
      sub_1407B9160(*(_QWORD *)&v218[8]);
    }
    else
    {
      *(_QWORD *)&v230[88] = *(_QWORD *)&v218[88];
      *(_OWORD *)&v230[72] = *(_OWORD *)&v218[72];
      *(_OWORD *)&v230[56] = *(_OWORD *)&v218[56];
      *(_OWORD *)&v230[40] = *(_OWORD *)&v218[40];
      *(_OWORD *)&v230[24] = *(_OWORD *)&v218[24];
      *(_OWORD *)&v230[8] = *(_OWORD *)&v218[8];
      *(_QWORD *)v230 = *(_QWORD *)v218;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)v225 = v230;
        *(_QWORD *)&v225[8] = sub_140D76130;
        *(_QWORD *)&v218[48] = 2;
        *(_QWORD *)&v218[56] = aCodexmateLibCo_49;
        *(_QWORD *)&v218[64] = 45;
        *(_QWORD *)&v218[80] = &unk_141AA1920;
        *(_QWORD *)&v218[88] = v225;
        *(_QWORD *)v218 = 0;
        *(_QWORD *)&v218[8] = aCodexmateLibCo_49;
        *(_OWORD *)&v218[16] = 0x2Du;
        *(_QWORD *)&v218[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v218[40] = 35;
        *(_QWORD *)&v218[72] = 0x22E00000001LL;
        sub_141503E20(&v241, v218);
      }
      v238 = 1;
      sub_140D8A3A0(v230);
    }
    v238 = 1;
    sub_140EB1C60((unsigned int)v218, a6, a7, (unsigned int)aRouteronRollba, 17, 1, v26, 0, 0);
    if ( *(_DWORD *)v218 == -1 )
    {
      *(_QWORD *)&v179[88] = *(_QWORD *)&v218[80];
      *(_OWORD *)&v179[72] = *(_OWORD *)&v218[64];
      *(_QWORD *)&v179[64] = *(_QWORD *)&v218[56];
      *(_OWORD *)&v179[48] = *(_OWORD *)&v218[40];
      *(_OWORD *)&v179[32] = *(_OWORD *)&v218[24];
      *(_OWORD *)&v179[16] = *(_OWORD *)&v218[8];
      *(_QWORD *)&v179[8] = 1;
      *(_QWORD *)v179 = -1;
    }
    else
    {
      *(_OWORD *)&v179[80] = *(_OWORD *)&v218[80];
      *(_OWORD *)&v179[64] = *(_OWORD *)&v218[64];
      *(_OWORD *)&v179[48] = *(_OWORD *)&v218[48];
      *(_OWORD *)&v179[32] = *(_OWORD *)&v218[32];
      *(_OWORD *)&v179[16] = *(_OWORD *)&v218[16];
      *(_OWORD *)v179 = *(_OWORD *)v218;
    }
    v30 = v230;
    *(_QWORD *)&v218[48] = v169;
    *(_OWORD *)&v218[32] = v168;
    *(_OWORD *)&v218[16] = v167;
    *(_OWORD *)v218 = v166;
    v233[1] = 1;
    sub_1409349D0(&v173, v218);
    *(_OWORD *)&v218[80] = *(_OWORD *)&v179[80];
    *(_OWORD *)&v218[64] = *(_OWORD *)&v179[64];
    *(_OWORD *)&v218[48] = *(_OWORD *)&v179[48];
    *(_OWORD *)&v218[32] = *(_OWORD *)&v179[32];
    *(_OWORD *)&v218[16] = *(_OWORD *)&v179[16];
    *(_OWORD *)v218 = *(_OWORD *)v179;
    v222 = v177;
    v221 = v176;
    v220 = v175;
    v219 = v174;
    *(__m256i *)&v218[96] = v173;
    if ( *(_QWORD *)v179 == -1 )
    {
      if ( *(_QWORD *)&v218[96] != -1 )
      {
        v178 = *(_QWORD *)v218;
        v217 = v177;
        v216 = v176;
        v215 = v175;
        v214 = v174;
        v213 = v173;
        *(_QWORD *)v225 = 0;
        *(_QWORD *)&v225[8] = 1;
        *(_QWORD *)&v225[16] = 0;
        *(_QWORD *)&v230[16] = 1610612768;
        *(_QWORD *)v230 = v225;
        *(_QWORD *)&v230[8] = &off_141AA1A90;
        if ( (unsigned __int8)sub_140D76130(&v213, v230) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v241,
            (unsigned int)&unk_141A9F540,
            (__int64)&off_141AA1B48);
        v234 = *(_QWORD *)v225;
        v144 = *(_QWORD *)&v225[16];
        v231 = *(_QWORD *)&v225[8];
        v138 = *(_QWORD *)&v225[8];
        v129 = v212;
        sub_1407D7360((__int128 *)v225, v28, v245);
        v78 = v210;
        if ( *(_DWORD *)v225 != -1 )
        {
          *(_OWORD *)&v230[80] = *(_OWORD *)&v225[80];
          *(_OWORD *)&v230[64] = *(_OWORD *)&v225[64];
          *(_OWORD *)&v230[48] = *(_OWORD *)&v225[48];
          *(_OWORD *)&v230[32] = *(_OWORD *)&v225[32];
          *(_OWORD *)&v230[16] = *(_OWORD *)&v225[16];
          *(_OWORD *)v230 = *(_OWORD *)v225;
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            *(_QWORD *)&v186 = v230;
            *((_QWORD *)&v186 + 1) = sub_140D76130;
            *(_QWORD *)&v204 = aCodexmateLibCo_49;
            *((_QWORD *)&v204 + 1) = 45;
            *(_QWORD *)v205 = aCodexmateLibCo_49;
            *(_QWORD *)&v205[8] = 45;
            *(_QWORD *)&v205[16] = &off_141AA1958;
            sub_140AF72B0(&unk_141AA1920, &v186, 2, &v204);
          }
          sub_140D8A3A0(v230);
        }
        if ( v234 )
          sub_140001660(v231, v234, 1);
        *(_QWORD *)v230 = &v244;
        *(_QWORD *)&v230[8] = sub_1416E8600;
        *(_QWORD *)&v230[16] = &v213;
        *(_QWORD *)&v230[24] = sub_140D76130;
        sub_1416DAFA0(v149, &unk_141A9B8A8, v230);
        sub_140DB20C0(v245, aSettleFailed, 13, v149, 6, v129, *((_QWORD *)&v129 + 1), v138, v144);
        *(_OWORD *)(v78 + 80) = v217;
        *(_OWORD *)(v78 + 64) = v216;
        v18 = *(_OWORD *)v213.m256i_i8;
        v79 = *(_OWORD *)&v213.m256i_u64[2];
        v80 = v214;
        *(_OWORD *)(v78 + 48) = v215;
        *(_OWORD *)(v78 + 32) = v80;
        *(_OWORD *)(v78 + 16) = v79;
        *(_OWORD *)v78 = v18;
        v81 = v244;
        *(_BYTE *)(v78 + 96) = 3;
        *(_BYTE *)(v78 + 97) = v81;
        sub_140D8A7D0(&v218[8]);
        sub_1402346F0(&v218[72]);
        v82 = *(_QWORD *)&v218[72];
        if ( !*(_QWORD *)&v218[72] )
          goto LABEL_244;
        v83 = *(_QWORD *)&v218[80];
LABEL_186:
        v90 = 24 * v82;
        goto LABEL_228;
      }
      *(_QWORD *)&v191 = *(_QWORD *)&v179[88];
      v190 = *(_OWORD *)&v179[72];
      v189 = *(_OWORD *)&v179[56];
      v188 = *(_OWORD *)&v179[40];
      v187 = *(_OWORD *)&v179[24];
      v186 = *(_OWORD *)&v179[8];
      v208 = *(_DWORD *)&v218[104];
      v209 = v218[108];
      v228 = 1;
      v227 = 1;
      LOBYTE(v31) = 1;
      sub_140D52CE0(&v201, a8, v31, (*(_DWORD *)&v218[104] == 0) & (unsigned __int8)(v218[108] ^ 1));
      v36 = v203;
      if ( !v203 )
      {
        if ( (v208 || (v209 & 1) != 0) && *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)v218 = &v245;
          *(_QWORD *)&v218[8] = sub_140ED78B0;
          *(_QWORD *)&v218[16] = &v244;
          *(_QWORD *)&v218[24] = sub_1416E8600;
          *(_QWORD *)&v218[32] = &v208;
          *(_QWORD *)&v218[40] = sub_1416EACD0;
          *(_QWORD *)&v218[48] = &v209;
          *(_QWORD *)&v218[56] = sub_1416EBC20;
          *(_QWORD *)v230 = aCodexmateLibCo_49;
          *(_QWORD *)&v230[8] = 45;
          *(_QWORD *)&v230[16] = aCodexmateLibCo_49;
          *(_QWORD *)&v230[24] = 45;
          *(_QWORD *)&v230[32] = &off_141A9B7A0;
          v237 = 1;
          v236 = 1;
          sub_140AF72B0(&unk_141A9B728, v218, 2, v230);
        }
        *(_QWORD *)&v207 = v191;
        v206 = v190;
        *(_OWORD *)&v205[32] = v189;
        *(_OWORD *)&v205[16] = v188;
        *(_OWORD *)v205 = v187;
        v204 = v186;
        LOBYTE(v30) = v245;
        v84 = v212;
        v193 = v212;
        v243 = 1;
        v242 = 1;
        v199 = sub_1416AEBD0();
        v200 = v85;
        v243 = 1;
        v242 = 1;
        sub_1407D5A90((unsigned int)v218, (_DWORD)v28, (_DWORD)v30, v84, *((__int64 *)&v84 + 1));
        if ( *(_DWORD *)v218 != -1 )
        {
          v217 = *(_OWORD *)&v218[80];
          v216 = *(_OWORD *)&v218[64];
          v215 = *(_OWORD *)&v218[48];
          v214 = *(_OWORD *)&v218[32];
          v213 = *(__m256i *)v218;
          goto LABEL_190;
        }
        *(_QWORD *)v230 = &v204;
        *(_OWORD *)&v230[8] = v155;
        v93 = *a10;
        v243 = 1;
        v242 = 1;
        sub_140EA2DA0((unsigned int)&v213, a9, v204, v205[40], v93, (__int64)&v230[8]);
        if ( v213.m256i_i64[0] != -1 )
        {
LABEL_190:
          *(_OWORD *)&v225[80] = v217;
          *(_OWORD *)&v225[64] = v216;
          *(_OWORD *)&v225[48] = v215;
          *(_OWORD *)&v225[32] = v214;
          *(__m256i *)v225 = v213;
          v94 = v193;
          *(_QWORD *)v230 = 0;
          *(_QWORD *)&v230[8] = 1;
          *(_QWORD *)&v230[16] = 0;
          *(_QWORD *)&v218[16] = 1610612768;
          *(_QWORD *)v218 = v230;
          *(_QWORD *)&v218[8] = &off_141AA1A90;
          if ( (unsigned __int8)sub_140D76130(v225, v218) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v241,
              (unsigned int)&unk_141A9F540,
              (__int64)&off_141AA1B48);
          v234 = *(_QWORD *)v230;
          v145 = *(_QWORD *)&v230[16];
          v231 = *(_QWORD *)&v230[8];
          v139 = *(_QWORD *)&v230[8];
          sub_1407D7360((__int128 *)v230, v28, (unsigned int)v30);
          v95 = v210;
          if ( *(_DWORD *)v230 != -1 )
          {
            *(_OWORD *)&v218[80] = *(_OWORD *)&v230[80];
            *(_OWORD *)&v218[64] = *(_OWORD *)&v230[64];
            *(_OWORD *)&v218[48] = *(_OWORD *)&v230[48];
            *(_OWORD *)&v218[32] = *(_OWORD *)&v230[32];
            *(_OWORD *)&v218[16] = *(_OWORD *)&v230[16];
            *(_OWORD *)v218 = *(_OWORD *)v230;
            if ( *(_QWORD *)off_14223FF10 >= 2u )
            {
              v194[0] = v218;
              v194[1] = sub_140D76130;
              *(_QWORD *)&v195 = aCodexmateLibCo_49;
              *((_QWORD *)&v195 + 1) = 45;
              *(_QWORD *)&v196 = aCodexmateLibCo_49;
              *((_QWORD *)&v196 + 1) = 45;
              *(_QWORD *)&v197 = &off_141AA1958;
              sub_140AF72B0(&unk_141AA1920, v194, 2, &v195);
            }
            sub_140D8A3A0(v218);
          }
          if ( v234 )
            sub_140001660(v231, v234, 1);
          *(_QWORD *)v218 = &v193;
          *(_QWORD *)&v218[8] = sub_140191200;
          *(_QWORD *)&v218[16] = v225;
          *(_QWORD *)&v218[24] = sub_140D76130;
          sub_1416DAFA0(v230, &unk_141A9B651, v218);
          sub_140DB20C0((unsigned int)v30, aCommitFailed, 13, v230, 13, v94, *((_QWORD *)&v94 + 1), v139, v145);
          v96 = *(_QWORD *)&v225[8];
          v97 = *(_QWORD *)v225;
          v99 = *(_QWORD *)&v225[24];
          v98 = *(_OWORD **)&v225[16];
          v195 = *(_OWORD *)&v225[32];
          v196 = *(_OWORD *)&v225[48];
          v197 = *(_OWORD *)&v225[64];
          v198 = *(_OWORD *)&v225[80];
          sub_140D8A7D0(&v204);
          v100 = 1;
          goto LABEL_198;
        }
        v243 = 1;
        v242 = 1;
        v104 = sub_1407B92D0(v213.m256i_i64[1]);
        if ( v104 )
        {
          v107 = v104 & 3;
          v234 = v104;
          switch ( v104 & 3 )
          {
            case 0uLL:
              LOBYTE(v104) = *(_BYTE *)(v104 + 16);
              break;
            case 1uLL:
              LOBYTE(v104) = *(_BYTE *)(v104 + 31);
              break;
            case 2uLL:
              v235 = 1;
              v110 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v106, v105) + 8);
              v235 = 1;
              LOBYTE(v104) = v110(HIDWORD(v234));
              break;
            case 3uLL:
              v104 >>= 32;
              break;
          }
          v230[0] = v104;
          *(_QWORD *)v218 = v230;
          *(_QWORD *)&v218[8] = sub_140EDB0F0;
          v235 = 1;
          sub_1416DAFA0(v181, &unk_141A9B46E, v218);
          v235 = 1;
          sub_140DB20C0((unsigned int)v30, aCommitSyncUnco, 23, v181, v123, v130, v132, v134, v140);
          v111 = *((_QWORD *)v28 + 97);
          v112 = *((_QWORD *)v28 + 98);
          v235 = 1;
          sub_1407D3B80(
            v111,
            v112,
            (_DWORD)v30,
            (unsigned int)&unk_141A4A03B,
            23,
            v193,
            *((__int64 *)&v193 + 1),
            (__int64)&unk_141A4A42A,
            28);
          v213.m256i_i64[2] = v207;
          *(_OWORD *)v213.m256i_i8 = v206;
          sub_1407D7410(v218);
          *(_QWORD *)v225 = 0;
          *(_QWORD *)&v225[8] = 1;
          *(_QWORD *)&v225[16] = 0;
          *(_QWORD *)&v230[16] = 1610612768;
          *(_QWORD *)v230 = v225;
          *(_QWORD *)&v230[8] = &off_141AA1A90;
          if ( (unsigned __int8)sub_140D76130(v218, v230) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v241,
              (unsigned int)&unk_141A9F540,
              (__int64)&off_141AA1B48);
          v223 = *(_QWORD *)&v225[8];
          v231 = *(_QWORD *)v225;
          v113 = *(_QWORD *)&v225[16];
          v114 = v213.m256i_i64[2];
          if ( v213.m256i_i64[2] == v213.m256i_i64[0] )
            sub_141939F90(&v213);
          v115 = v213.m256i_i64[1];
          v116 = 3 * v114;
          *(_QWORD *)(v213.m256i_i64[1] + 8 * v116) = v231;
          *(_QWORD *)(v115 + 8 * v116 + 8) = v223;
          *(_QWORD *)(v115 + 8 * v116 + 16) = v113;
          v213.m256i_i64[2] = v114 + 1;
          sub_140D8A3A0(v218);
          v195 = v204;
          v196 = *(_OWORD *)v205;
          v197 = *(_OWORD *)&v205[16];
          v198 = *(_OWORD *)&v205[32];
          v98 = (_OWORD *)v213.m256i_i64[1];
          v96 = v213.m256i_i64[0];
          v99 = v213.m256i_i64[2];
          if ( (unsigned int)(v107 - 2) >= 2 && v107 )
          {
            *(_QWORD *)&v218[8] = v234 - 1;
            v218[0] = 3;
            v243 = 0;
            v242 = 0;
            sub_1416EBAD0(&v218[8]);
          }
          v97 = 2;
          goto LABEL_224;
        }
        if ( (_QWORD)v207 )
        {
          v243 = 1;
          v242 = 1;
          sub_1406C5480((unsigned int)v218, DWORD2(v206), v207, (unsigned int)&unk_141A9B28E, 3);
          v231 = *(_QWORD *)&v218[8];
          v234 = *(_QWORD *)v218;
          sub_1407D7100(
            (unsigned int)v230,
            (_DWORD)v28,
            (_DWORD)v30,
            v193,
            *((__int64 *)&v193 + 1),
            *(__int64 *)&v218[8],
            *(__int64 *)&v218[16]);
          if ( *(_DWORD *)v230 != -1 )
          {
            *(_OWORD *)&v218[80] = *(_OWORD *)&v230[80];
            *(_OWORD *)&v218[64] = *(_OWORD *)&v230[64];
            *(_OWORD *)&v218[48] = *(_OWORD *)&v230[48];
            *(_OWORD *)&v218[32] = *(_OWORD *)&v230[32];
            *(_OWORD *)&v218[16] = *(_OWORD *)&v230[16];
            *(_OWORD *)v218 = *(_OWORD *)v230;
            if ( *(_QWORD *)off_14223FF10 >= 2u )
            {
              v213.m256i_i64[0] = (__int64)v218;
              v213.m256i_i64[1] = (__int64)sub_140D76130;
              *(_QWORD *)v225 = aCodexmateLibCo_49;
              *(_QWORD *)&v225[8] = 45;
              *(_QWORD *)&v225[16] = aCodexmateLibCo_49;
              *(_QWORD *)&v225[24] = 45;
              *(_QWORD *)&v225[32] = &off_141A9B5E8;
              sub_140AF72B0(&unk_141A9B5A6, &v213, 2, v225);
            }
            sub_140D8A3A0(v218);
          }
          if ( v234 )
            sub_140001660(v231, v234, 1);
          v243 = 1;
          v242 = 1;
          v108 = sub_1416AED20(&v199);
          *(_OWORD *)v230 = 0x3E8 * (unsigned __int128)(unsigned __int64)v108 + v109 / 0xF4240uLL;
          *(_QWORD *)v225 = v207;
          *(_QWORD *)v218 = &v193;
          *(_QWORD *)&v218[8] = sub_140191200;
          *(_QWORD *)&v218[16] = v230;
          *(_QWORD *)&v218[24] = sub_1416E85A0;
          *(_QWORD *)&v218[32] = v225;
          *(_QWORD *)&v218[40] = sub_1416EBAE0;
          v243 = 1;
          v242 = 1;
          sub_1416DAFA0(v180, &unk_141A9B600, v218);
          v243 = 1;
          v242 = 1;
          sub_140DB20C0((unsigned int)v30, aDegraded, 8, v180, v124, v131, v133, v134, v140);
          v198 = *(_OWORD *)&v205[32];
          v197 = *(_OWORD *)&v205[16];
          v196 = *(_OWORD *)v205;
          v195 = v204;
          v98 = *((_OWORD **)&v206 + 1);
          v96 = v206;
          v97 = 1;
          v99 = v207;
LABEL_224:
          v95 = v210;
LABEL_225:
          v18 = v195;
          v117 = v196;
          v118 = v197;
          *(_OWORD *)(v95 + 88) = v198;
          *(_OWORD *)(v95 + 72) = v118;
          *(_OWORD *)(v95 + 56) = v117;
          *(_OWORD *)(v95 + 40) = v18;
          *(_QWORD *)(v95 + 8) = v97;
          *(_QWORD *)(v95 + 16) = v96;
          *(_QWORD *)(v95 + 24) = v98;
          *(_QWORD *)(v95 + 32) = v99;
          *(_QWORD *)v95 = -1;
        }
        else
        {
          v243 = 1;
          v242 = 1;
          sub_1407D2600(v230, v28, (unsigned int)v30);
          if ( *(_DWORD *)v230 == -1 )
          {
            v243 = 1;
            v242 = 1;
            v119 = sub_1416AED20(&v199);
            *(_OWORD *)v230 = 0x3E8 * (unsigned __int128)(unsigned __int64)v119 + v120 / 0xF4240uLL;
            *(_QWORD *)v218 = &v193;
            *(_QWORD *)&v218[8] = sub_140191200;
            *(_QWORD *)&v218[16] = v230;
            *(_QWORD *)&v218[24] = sub_1416E85A0;
            v243 = 1;
            v242 = 1;
            sub_1416DAFA0(v192, &unk_141A9B581, v218);
            v243 = 1;
            v242 = 1;
            sub_140DB20C0((unsigned int)v30, aStable, 6, v192, v123, v130, v132, v134, v140);
            v98 = *((_OWORD **)&v204 + 1);
            v96 = v204;
            v99 = *(_QWORD *)v205;
            v195 = *(_OWORD *)&v205[8];
            v196 = *(_OWORD *)&v205[24];
            *(_QWORD *)&v197 = *(_QWORD *)&v205[40];
            sub_1400290B0(&v206);
            v97 = 0;
            goto LABEL_224;
          }
          *(_OWORD *)&v218[80] = *(_OWORD *)&v230[80];
          *(_OWORD *)&v218[64] = *(_OWORD *)&v230[64];
          *(_OWORD *)&v218[48] = *(_OWORD *)&v230[48];
          *(_OWORD *)&v218[32] = *(_OWORD *)&v230[32];
          *(_OWORD *)&v218[16] = *(_OWORD *)&v230[16];
          *(_OWORD *)v218 = *(_OWORD *)v230;
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            v213.m256i_i64[0] = (__int64)v218;
            v213.m256i_i64[1] = (__int64)sub_140D76130;
            *(_QWORD *)v225 = aCodexmateLibCo_49;
            *(_QWORD *)&v225[8] = 45;
            *(_QWORD *)&v225[16] = aCodexmateLibCo_49;
            *(_QWORD *)&v225[24] = 45;
            *(_QWORD *)&v225[32] = &off_141A9B500;
            v226 = 1;
            sub_140AF72B0(&unk_141A9B48D, &v213, 2, v225);
          }
          *(_OWORD *)&v225[48] = *(_OWORD *)&v205[32];
          *(_OWORD *)&v225[32] = *(_OWORD *)&v205[16];
          *(_OWORD *)&v225[16] = *(_OWORD *)v205;
          *(_OWORD *)v225 = v204;
          v234 = sub_14017AA90();
          v213.m256i_i64[0] = (__int64)v218;
          v213.m256i_i64[1] = (__int64)sub_140D76130;
          sub_1416DAFA0(&v182, &unk_141A9B545, &v213);
          v98 = (_OWORD *)v234;
          *(_QWORD *)(v234 + 16) = v183;
          *v98 = v182;
          v195 = *(_OWORD *)v225;
          v196 = *(_OWORD *)&v225[16];
          v197 = *(_OWORD *)&v225[32];
          v198 = *(_OWORD *)&v225[48];
          v243 = 0;
          v242 = 1;
          sub_140D8A3A0(v218);
          v95 = v210;
          v96 = 1;
          v100 = 0;
          v99 = 1;
          v97 = 1;
LABEL_198:
          sub_1402346F0(&v206);
          if ( (_QWORD)v206 )
            sub_140001660(*((_QWORD *)&v206 + 1), 24 * v206, 8);
          if ( !v100 )
            goto LABEL_225;
          v18 = v195;
          v101 = v196;
          v102 = v197;
          *(_OWORD *)(v95 + 80) = v198;
          *(_OWORD *)(v95 + 64) = v102;
          *(_OWORD *)(v95 + 48) = v101;
          *(_OWORD *)(v95 + 32) = v18;
          v103 = v244;
          *(_QWORD *)v95 = v97;
          *(_QWORD *)(v95 + 8) = v96;
          *(_QWORD *)(v95 + 16) = v98;
          *(_QWORD *)(v95 + 24) = v99;
          *(_BYTE *)(v95 + 96) = 5;
          *(_BYTE *)(v95 + 97) = v103;
        }
        sub_140234510(&v201);
        if ( !v201 )
          goto LABEL_244;
        v83 = v202;
        v90 = 32 * v201;
LABEL_228:
        *(double *)&v18 = sub_140001660(v83, v90, 8);
        goto LABEL_244;
      }
      v237 = 1;
      v236 = 1;
      v223 = v202;
      sub_140226C80(v230, v202, v202 + 32 * v203);
      v37 = *(_QWORD *)&v230[8];
      v38 = *(_QWORD *)&v230[16];
      sub_1406C5480((unsigned int)v218, *(_DWORD *)&v230[8], *(_DWORD *)&v230[16], (unsigned int)&unk_141A9B28E, 3);
      v213.m256i_i64[2] = *(_QWORD *)&v218[16];
      *(_OWORD *)v213.m256i_i8 = *(_OWORD *)v218;
      a1 = v210;
      if ( v38 )
      {
        v39 = (_QWORD *)(v37 + 8);
        do
        {
          v40 = *(v39 - 1);
          if ( v40 )
            sub_140001660(*v39, v40, 1);
          v39 += 3;
          --v38;
        }
        while ( v38 );
      }
      if ( *(_QWORD *)v230 )
        sub_140001660(v37, 24LL * *(_QWORD *)v230, 8);
      v240 = 1;
      v239 = 1;
      v41 = sub_1416AEBD0();
      a2 = v184;
      v43 = v233[0];
      if ( v233[0] )
      {
        *(_QWORD *)&v225[16] = *(_QWORD *)&v179[88];
        *(_OWORD *)v225 = *(_OWORD *)&v179[72];
        *(_QWORD *)v218 = &v213;
        *(_QWORD *)&v218[8] = sub_1400015F0;
        v232 = 1;
        sub_1416DAFA0(v147, &unk_141A9B806, v218);
        v232 = 1;
        sub_1401E7610(v225, v147);
        *(_OWORD *)&v230[48] = *(_OWORD *)&v179[56];
        *(_OWORD *)&v230[32] = *(_OWORD *)&v179[40];
        *(_OWORD *)&v230[16] = *(_OWORD *)&v179[24];
        *(_OWORD *)v230 = *(_OWORD *)&v179[8];
        *(_OWORD *)&v230[64] = *(_OWORD *)v225;
        *(_QWORD *)&v230[80] = *(_QWORD *)&v225[16];
        v232 = 0;
        sub_140DB3370(
          (unsigned int)v218,
          (_DWORD)a2,
          v245,
          v212,
          *((__int64 *)&v212 + 1),
          (__int64)v230,
          a9,
          (__int64)a10,
          (__int64)&v155);
        if ( v218[0] )
        {
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v218[88];
          *(_OWORD *)(a1 + 64) = *(_OWORD *)&v218[72];
          v18 = *(_OWORD *)&v218[8];
          v86 = *(_OWORD *)&v218[24];
          v87 = *(_OWORD *)&v218[40];
          *(_OWORD *)(a1 + 48) = *(_OWORD *)&v218[56];
          *(_OWORD *)(a1 + 32) = v87;
          *(_OWORD *)(a1 + 16) = v86;
          *(_OWORD *)a1 = v18;
          v77 = v244;
          *(_BYTE *)(a1 + 96) = 5;
          goto LABEL_179;
        }
        *(_OWORD *)(a1 + 88) = *(_OWORD *)&v218[88];
        *(_OWORD *)(a1 + 72) = *(_OWORD *)&v218[72];
        v18 = *(_OWORD *)&v218[8];
        v91 = *(_OWORD *)&v218[24];
        v92 = *(_OWORD *)&v218[40];
        *(_OWORD *)(a1 + 56) = *(_OWORD *)&v218[56];
        *(_OWORD *)(a1 + 40) = v92;
        *(_OWORD *)(a1 + 24) = v91;
        *(_OWORD *)(a1 + 8) = v18;
        *(_QWORD *)a1 = -1;
        v88 = v223;
        v89 = v213.m256i_i64[0];
        if ( !v213.m256i_i64[0] )
        {
LABEL_181:
          sub_140234510(&v201);
          if ( v201 )
            *(double *)&v18 = sub_140001660(v88, 32 * v201, 8);
          if ( v43 )
            goto LABEL_244;
          sub_140D8A7D0(&v186);
          sub_1402346F0(&v190);
          v82 = v190;
          if ( !(_QWORD)v190 )
            goto LABEL_244;
          v83 = *((_QWORD *)&v190 + 1);
          goto LABEL_186;
        }
LABEL_180:
        *(double *)&v18 = sub_140001660(v213.m256i_i64[1], v89, 1);
        goto LABEL_181;
      }
      if ( v208 )
      {
        if ( (unsigned __int8)v244 > 2u )
          goto LABEL_159;
      }
      else if ( (unsigned __int8)v244 > 2u || (v209 & 1) == 0 )
      {
        goto LABEL_159;
      }
      if ( v211 == -1 )
      {
        v240 = 1;
        v239 = 1;
        v185 = sub_1416D0210(v41, v42, 12, 0, (__int64)&off_141AA1908);
        v211 = v49;
        if ( *(_QWORD *)off_14223FF10 < 2u )
          goto LABEL_89;
LABEL_88:
        *(_QWORD *)v230 = &v245;
        *(_QWORD *)&v230[8] = sub_140ED78B0;
        *(_QWORD *)&v230[16] = &v244;
        *(_QWORD *)&v230[24] = sub_1416E8600;
        *(_QWORD *)&v230[32] = &v213;
        *(_QWORD *)&v230[40] = sub_1400015F0;
        *(_QWORD *)&v218[48] = 2;
        *(_QWORD *)&v218[56] = aCodexmateLibCo_49;
        *(_QWORD *)&v218[64] = 45;
        *(_QWORD *)&v218[80] = &unk_141A9B843;
        *(_QWORD *)&v218[88] = v230;
        *(_QWORD *)v218 = 0;
        *(_QWORD *)&v218[8] = aCodexmateLibCo_49;
        *(_OWORD *)&v218[16] = 0x2Du;
        *(_QWORD *)&v218[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v218[40] = 35;
        *(_QWORD *)&v218[72] = 0x17D00000001LL;
        v240 = 1;
        v239 = 1;
        sub_141503E20(&v241, v218);
        goto LABEL_89;
      }
      v47 = v42 < v211;
      v48 = v41 < v185;
      if ( v41 == v185 )
        v48 = v47;
      if ( !v48 )
      {
LABEL_159:
        *(_QWORD *)v218 = &v245;
        *(_QWORD *)&v218[8] = sub_140ED78B0;
        *(_QWORD *)&v218[16] = &v213;
        *(_QWORD *)&v218[24] = sub_1400015F0;
        v240 = 1;
        v239 = 1;
        sub_1416DAFA0(&v151, &unk_141A9B7B8, v218);
        *(_OWORD *)&v218[8] = v151;
        *(_QWORD *)&v218[24] = v152;
        *(_QWORD *)v218 = 10;
        sub_140EDA570(v230, v218);
        v128 = *(_QWORD *)&v230[16];
        v234 = *(_QWORD *)&v230[8];
        v122 = *(_QWORD *)&v230[8];
        sub_140ED3800(a2);
        if ( *(_QWORD *)v230 )
          sub_140001660(v234, *(_QWORD *)v230, 1);
        *(_QWORD *)v225 = v36;
        *(_QWORD *)v230 = &v244;
        *(_QWORD *)&v230[8] = sub_1416E8600;
        *(_QWORD *)&v230[16] = v225;
        *(_QWORD *)&v230[24] = sub_1416EBAE0;
        sub_1416DAFA0(v146, &unk_141A9B7D9, v230);
        sub_140DB20C0(v245, aPostconditionF, 20, v146, v122, v128, v132, v134, v140);
        *(_OWORD *)(a1 + 80) = *(_OWORD *)&v218[80];
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v218[64];
        v18 = *(_OWORD *)v218;
        v75 = *(_OWORD *)&v218[16];
        v76 = *(_OWORD *)&v218[32];
        *(_OWORD *)(a1 + 48) = *(_OWORD *)&v218[48];
        *(_OWORD *)(a1 + 32) = v76;
        *(_OWORD *)(a1 + 16) = v75;
        *(_OWORD *)a1 = v18;
        v77 = v244;
        *(_BYTE *)(a1 + 96) = 4;
LABEL_179:
        *(_BYTE *)(a1 + 97) = v77;
        v88 = v223;
        v89 = v213.m256i_i64[0];
        if ( !v213.m256i_i64[0] )
          goto LABEL_181;
        goto LABEL_180;
      }
      if ( *(_QWORD *)off_14223FF10 >= 2u )
        goto LABEL_88;
LABEL_89:
      v240 = 1;
      v239 = 1;
      sub_1407D2B10(
        (unsigned int)v218,
        (_DWORD)a2,
        v245,
        (unsigned int)&unk_141A9B8A0,
        8,
        v212,
        *((__int64 *)&v212 + 1),
        v213.m256i_i64[1],
        v213.m256i_i64[2],
        0);
      if ( *(_QWORD *)v218 == -1 )
      {
        v240 = 1;
        v239 = 1;
        sub_1407B9160(*(_QWORD *)&v218[8]);
      }
      else
      {
        *(_QWORD *)&v230[88] = *(_QWORD *)&v218[88];
        *(_OWORD *)&v230[72] = *(_OWORD *)&v218[72];
        *(_OWORD *)&v230[56] = *(_OWORD *)&v218[56];
        *(_OWORD *)&v230[40] = *(_OWORD *)&v218[40];
        *(_OWORD *)&v230[24] = *(_OWORD *)&v218[24];
        *(_OWORD *)&v230[8] = *(_OWORD *)&v218[8];
        *(_QWORD *)v230 = *(_QWORD *)v218;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)v225 = v230;
          *(_QWORD *)&v225[8] = sub_140D76130;
          *(_QWORD *)&v218[48] = 2;
          *(_QWORD *)&v218[56] = aCodexmateLibCo_49;
          *(_QWORD *)&v218[64] = 45;
          *(_QWORD *)&v218[80] = &unk_141AA1920;
          *(_QWORD *)&v218[88] = v225;
          *(_QWORD *)v218 = 0;
          *(_QWORD *)&v218[8] = aCodexmateLibCo_49;
          *(_OWORD *)&v218[16] = 0x2Du;
          *(_QWORD *)&v218[32] = aSrcCoreRelayRo_1;
          *(_QWORD *)&v218[40] = 35;
          *(_QWORD *)&v218[72] = 0x22E00000001LL;
          sub_141503E20(&v241, v218);
        }
        v240 = 1;
        v239 = 1;
        sub_140D8A3A0(v230);
      }
      v50 = v223;
      if ( v213.m256i_i64[0] )
        sub_140001660(v213.m256i_i64[1], v213.m256i_i64[0], 1);
      v51 = (_QWORD *)(v50 + 8);
      do
      {
        v52 = *(v51 - 1);
        if ( v52 )
          sub_140001660(*v51, v52, 1);
        v51 += 4;
        --v36;
      }
      while ( v36 );
      if ( v201 )
        sub_140001660(v50, 32 * v201, 8);
      sub_140D8A7D0(&v186);
      v53 = *((_QWORD *)&v190 + 1);
      v54 = v191;
      if ( (_QWORD)v191 )
      {
        v55 = (_QWORD *)(*((_QWORD *)&v190 + 1) + 8LL);
        do
        {
          v20 = *(v55 - 1);
          if ( v20 )
            sub_140001660(*v55, v20, 1);
          v55 += 3;
          --v54;
        }
        while ( v54 );
      }
      if ( (_QWORD)v190 )
        sub_140001660(v53, 24 * v190, 8);
      v21 = v231;
      v22 = v234;
    }
    else
    {
      v178 = *(_QWORD *)v218;
      if ( *(_QWORD *)&v218[96] != -1 )
      {
        v191 = *(_OWORD *)&v179[80];
        v190 = *(_OWORD *)&v179[64];
        v189 = *(_OWORD *)&v179[48];
        v188 = *(_OWORD *)&v179[32];
        v187 = *(_OWORD *)&v179[16];
        v186 = *(_OWORD *)v179;
        v207 = v177;
        v206 = v176;
        *(_OWORD *)&v205[32] = v175;
        *(_OWORD *)&v205[16] = v174;
        *(_OWORD *)v205 = *(_OWORD *)&v173.m256i_u64[2];
        v204 = *(_OWORD *)v173.m256i_i8;
        *(_QWORD *)v230 = &v186;
        *(_QWORD *)&v230[8] = sub_140D76130;
        *(_QWORD *)&v230[16] = &v204;
        *(_QWORD *)&v230[24] = sub_140D76130;
        sub_1416DAFA0(&v153, &unk_141A9B944, v230);
        *(_OWORD *)&v213.m256i_u64[1] = v153;
        v213.m256i_i64[3] = v154;
        v213.m256i_i64[0] = 10;
        *(_QWORD *)v225 = 0;
        *(_QWORD *)&v225[8] = 1;
        *(_QWORD *)&v225[16] = 0;
        *(_QWORD *)&v230[16] = 1610612768;
        *(_QWORD *)v230 = v225;
        *(_QWORD *)&v230[8] = &off_141AA1A90;
        if ( (unsigned __int8)sub_140D76130(&v213, v230) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v241,
            (unsigned int)&unk_141A9F540,
            (__int64)&off_141AA1B48);
        v234 = *(_QWORD *)v225;
        v143 = *(_QWORD *)&v225[16];
        v231 = *(_QWORD *)&v225[8];
        v137 = *(_QWORD *)&v225[8];
        v127 = v212;
        sub_1407D7360((__int128 *)v225, v28, v245);
        v68 = v210;
        if ( *(_DWORD *)v225 != -1 )
        {
          *(_OWORD *)&v230[80] = *(_OWORD *)&v225[80];
          *(_OWORD *)&v230[64] = *(_OWORD *)&v225[64];
          *(_OWORD *)&v230[48] = *(_OWORD *)&v225[48];
          *(_OWORD *)&v230[32] = *(_OWORD *)&v225[32];
          *(_OWORD *)&v230[16] = *(_OWORD *)&v225[16];
          *(_OWORD *)v230 = *(_OWORD *)v225;
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            v192[0] = v230;
            v192[1] = sub_140D76130;
            *(_QWORD *)&v195 = aCodexmateLibCo_49;
            *((_QWORD *)&v195 + 1) = 45;
            *(_QWORD *)&v196 = aCodexmateLibCo_49;
            *((_QWORD *)&v196 + 1) = 45;
            *(_QWORD *)&v197 = &off_141AA1958;
            sub_140AF72B0(&unk_141AA1920, v192, 2, &v195);
          }
          sub_140D8A3A0(v230);
        }
        if ( v234 )
          sub_140001660(v231, v234, 1);
        *(_QWORD *)v230 = &v244;
        *(_QWORD *)&v230[8] = sub_1416E8600;
        *(_QWORD *)&v230[16] = &v213;
        *(_QWORD *)&v230[24] = sub_140D76130;
        sub_1416DAFA0(v148, &unk_141A9B8A8, v230);
        sub_140DB20C0(v245, aReconcileFaile, 16, v148, 6, v127, *((_QWORD *)&v127 + 1), v137, v143);
        *(_OWORD *)(v68 + 80) = v217;
        *(_OWORD *)(v68 + 64) = v216;
        v18 = *(_OWORD *)v213.m256i_i8;
        v69 = *(_OWORD *)&v213.m256i_u64[2];
        v70 = v214;
        *(_OWORD *)(v68 + 48) = v215;
        *(_OWORD *)(v68 + 32) = v70;
        *(_OWORD *)(v68 + 16) = v69;
        *(_OWORD *)v68 = v18;
        v71 = v244;
        *(_BYTE *)(v68 + 96) = 2;
        *(_BYTE *)(v68 + 97) = v71;
        sub_140D8A3A0(&v204);
        sub_140D8A3A0(&v186);
        goto LABEL_244;
      }
      v217 = *(_OWORD *)&v179[80];
      v216 = *(_OWORD *)&v179[64];
      v215 = *(_OWORD *)&v179[48];
      v214 = *(_OWORD *)&v179[32];
      v213 = *(__m256i *)v179;
      v32 = *(_DWORD *)&v218[104];
      v33 = v218[108];
      v34 = sub_1416AEBD0();
      a2 = v28;
      a1 = v210;
      if ( v233[0] )
        goto LABEL_116;
      if ( v32 )
      {
        if ( (unsigned __int8)v244 > 2u )
          goto LABEL_116;
      }
      else if ( (unsigned __int8)v244 > 2u || !v33 )
      {
        goto LABEL_116;
      }
      if ( v211 == -1 )
      {
        v185 = sub_1416D0210(v34, v35, 12, 0, (__int64)&off_141AA1908);
        v211 = v46;
      }
      else
      {
        v44 = v35 < v211;
        v45 = v34 < v185;
        if ( v34 == v185 )
          v45 = v44;
        if ( !v45 )
        {
LABEL_116:
          *(_QWORD *)v225 = 0;
          *(_QWORD *)&v225[8] = 1;
          *(_QWORD *)&v225[16] = 0;
          *(_QWORD *)&v230[16] = 1610612768;
          *(_QWORD *)v230 = v225;
          *(_QWORD *)&v230[8] = &off_141AA1A90;
          if ( (unsigned __int8)sub_140D76130(&v213, v230) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v241,
              (unsigned int)&unk_141A9F540,
              (__int64)&off_141AA1B48);
          v231 = *(_QWORD *)&v225[8];
          v234 = *(_QWORD *)v225;
          sub_1407D2B10(
            (unsigned int)v230,
            (_DWORD)a2,
            v245,
            (unsigned int)aFailed_2,
            6,
            v212,
            *((__int64 *)&v212 + 1),
            *(__int64 *)&v225[8],
            *(__int64 *)&v225[16],
            0);
          if ( *(_QWORD *)v230 == -1 )
          {
            sub_1407B9160(*(_QWORD *)&v230[8]);
          }
          else
          {
            *(_QWORD *)&v225[88] = *(_QWORD *)&v230[88];
            *(_OWORD *)&v225[72] = *(_OWORD *)&v230[72];
            *(_OWORD *)&v225[56] = *(_OWORD *)&v230[56];
            *(_OWORD *)&v225[40] = *(_OWORD *)&v230[40];
            *(_OWORD *)&v225[24] = *(_OWORD *)&v230[24];
            *(_OWORD *)&v225[8] = *(_OWORD *)&v230[8];
            *(_QWORD *)v225 = *(_QWORD *)v230;
            if ( *(_QWORD *)off_14223FF10 >= 2u )
            {
              *(_QWORD *)&v204 = v225;
              *((_QWORD *)&v204 + 1) = sub_140D76130;
              *(_QWORD *)v230 = aCodexmateLibCo_49;
              *(_QWORD *)&v230[8] = 45;
              *(_QWORD *)&v230[16] = aCodexmateLibCo_49;
              *(_QWORD *)&v230[24] = 45;
              *(_QWORD *)&v230[32] = &off_141AA1958;
              sub_140AF72B0(&unk_141AA1920, &v204, 2, v230);
            }
            sub_140D8A3A0(v225);
          }
          if ( v234 )
            sub_140001660(v231, v234, 1);
          *(_QWORD *)v230 = &v244;
          *(_QWORD *)&v230[8] = sub_1416E8600;
          *(_QWORD *)&v230[16] = &v213;
          *(_QWORD *)&v230[24] = sub_140D76130;
          sub_1416DAFA0(&v156, &unk_141A9B8A8, v230);
          LOBYTE(v186) = v245;
          v234 = v157;
          v204 = v157;
          *(_QWORD *)v230 = &v186;
          *(_QWORD *)&v230[8] = sub_140ED78B0;
          *(_QWORD *)&v230[16] = &v204;
          *(_QWORD *)&v230[24] = sub_140191200;
          sub_1416DAFA0(v225, &unk_141A9B450, v230);
          sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aReconcileFaile, 16, (__int64)v225);
          if ( v156 )
            sub_140001660(v234, v156, 1);
          *(_OWORD *)(a1 + 80) = v217;
          *(_OWORD *)(a1 + 64) = v216;
          v18 = *(_OWORD *)v213.m256i_i8;
          v72 = *(_OWORD *)&v213.m256i_u64[2];
          v73 = v214;
          *(_OWORD *)(a1 + 48) = v215;
          *(_OWORD *)(a1 + 32) = v73;
          *(_OWORD *)(a1 + 16) = v72;
          *(_OWORD *)a1 = v18;
          v74 = v244;
          *(_BYTE *)(a1 + 96) = 2;
          *(_BYTE *)(a1 + 97) = v74;
          goto LABEL_244;
        }
      }
      *(_QWORD *)v225 = 0;
      *(_QWORD *)&v225[8] = 1;
      *(_QWORD *)&v225[16] = 0;
      *(_QWORD *)&v230[16] = 1610612768;
      *(_QWORD *)v230 = v225;
      *(_QWORD *)&v230[8] = &off_141AA1A90;
      if ( (unsigned __int8)sub_140D76130(&v213, v230) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v241,
          (unsigned int)&unk_141A9F540,
          (__int64)&off_141AA1B48);
      *(_QWORD *)v205 = *(_QWORD *)&v225[16];
      v204 = *(_OWORD *)v225;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)v225 = &v245;
        *(_QWORD *)&v225[8] = sub_140ED78B0;
        *(_QWORD *)&v225[16] = &v244;
        *(_QWORD *)&v225[24] = sub_1416E8600;
        *(_QWORD *)&v225[32] = &v204;
        *(_QWORD *)&v225[40] = sub_1400015F0;
        *(_QWORD *)&v230[48] = 2;
        *(_QWORD *)&v230[56] = aCodexmateLibCo_49;
        *(_QWORD *)&v230[64] = 45;
        *(_QWORD *)&v230[80] = &unk_141A9B8D9;
        *(_QWORD *)&v230[88] = v225;
        *(_QWORD *)v230 = 0;
        *(_QWORD *)&v230[8] = aCodexmateLibCo_49;
        *(_OWORD *)&v230[16] = 0x2Du;
        *(_QWORD *)&v230[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v230[40] = 35;
        *(_QWORD *)&v230[72] = 0x12E00000001LL;
        sub_141503E20(&v241, v230);
      }
      sub_1407D2B10(
        (unsigned int)v230,
        (_DWORD)a2,
        v245,
        (unsigned int)&unk_141A9B8A0,
        8,
        v212,
        *((__int64 *)&v212 + 1),
        *((__int64 *)&v204 + 1),
        *(__int64 *)v205,
        0);
      if ( *(_QWORD *)v230 == -1 )
      {
        sub_1407B9160(*(_QWORD *)&v230[8]);
      }
      else
      {
        *(_QWORD *)&v225[88] = *(_QWORD *)&v230[88];
        *(_OWORD *)&v225[72] = *(_OWORD *)&v230[72];
        *(_OWORD *)&v225[56] = *(_OWORD *)&v230[56];
        *(_OWORD *)&v225[40] = *(_OWORD *)&v230[40];
        *(_OWORD *)&v225[24] = *(_OWORD *)&v230[24];
        *(_OWORD *)&v225[8] = *(_OWORD *)&v230[8];
        *(_QWORD *)v225 = *(_QWORD *)v230;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)&v186 = v225;
          *((_QWORD *)&v186 + 1) = sub_140D76130;
          *(_QWORD *)&v230[48] = 2;
          *(_QWORD *)&v230[56] = aCodexmateLibCo_49;
          *(_QWORD *)&v230[64] = 45;
          *(_QWORD *)&v230[80] = &unk_141AA1920;
          *(_QWORD *)&v230[88] = &v186;
          *(_QWORD *)v230 = 0;
          *(_QWORD *)&v230[8] = aCodexmateLibCo_49;
          *(_OWORD *)&v230[16] = 0x2Du;
          *(_QWORD *)&v230[32] = aSrcCoreRelayRo_1;
          *(_QWORD *)&v230[40] = 35;
          *(_QWORD *)&v230[72] = 0x22E00000001LL;
          sub_141503E20(&v241, v230);
        }
        sub_140D8A3A0(v225);
      }
      *(_QWORD *)v230 = &v244;
      *(_QWORD *)&v230[8] = sub_1416E8600;
      *(_QWORD *)&v230[16] = &v204;
      *(_QWORD *)&v230[24] = sub_1400015F0;
      sub_1416DAFA0(&v158, &unk_141A9B8A8, v230);
      LOBYTE(v195) = v245;
      v223 = v159;
      v186 = v159;
      *(_QWORD *)v230 = &v195;
      *(_QWORD *)&v230[8] = sub_140ED78B0;
      *(_QWORD *)&v230[16] = &v186;
      *(_QWORD *)&v230[24] = sub_140191200;
      sub_1416DAFA0(v225, &unk_141A9B450, v230);
      sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aReconcileRetry, 15, (__int64)v225);
      v22 = v234;
      if ( v158 )
        sub_140001660(v223, v158, 1);
      if ( (_QWORD)v204 )
        sub_140001660(*((_QWORD *)&v204 + 1), v204, 1);
      sub_140D8A3A0(&v213);
      v21 = v231;
    }
  }
  nullsub_1(v19, v20);
  v56 = (_OWORD *)sub_140001650(109, 1);
  if ( !v56 )
    sub_14196B2DB(1, 109);
  *(_OWORD *)((char *)v56 + 93) = *(__int128 *)((char *)&xmmword_141A9B6B4 + 13);
  v56[5] = xmmword_141A9B6B4;
  v56[4] = xmmword_141A9B6A4;
  v56[3] = xmmword_141A9B694;
  v56[2] = xmmword_141A9B684;
  qmemcpy(v56, "CODEX_TRANSITION_REENTRY_TIMEOUT", 32);
  *(_QWORD *)&v225[8] = 109;
  *(_QWORD *)&v225[16] = v56;
  *(_QWORD *)&v225[24] = 109;
  *(_QWORD *)v225 = 10;
  *(_QWORD *)v230 = 0;
  *(_QWORD *)&v230[8] = 1;
  *(_QWORD *)&v230[16] = 0;
  *(_QWORD *)&v218[16] = 1610612768;
  *(_QWORD *)v218 = v230;
  *(_QWORD *)&v218[8] = &off_141AA1A90;
  if ( (unsigned __int8)sub_140D76130(v225, v218) )
    sub_14196B5F0(
      (unsigned int)aADisplayImplem_11,
      55,
      (unsigned int)&v241,
      (unsigned int)&unk_141A9F540,
      (__int64)&off_141AA1B48);
  v234 = *(_QWORD *)v230;
  v141 = *(_QWORD *)&v230[16];
  v231 = *(_QWORD *)&v230[8];
  v135 = *(_QWORD *)&v230[8];
  v125 = v212;
  sub_1407D7360((__int128 *)v230, a2, v245);
  if ( *(_DWORD *)v230 != -1 )
  {
    *(_OWORD *)&v218[80] = *(_OWORD *)&v230[80];
    *(_OWORD *)&v218[64] = *(_OWORD *)&v230[64];
    *(_OWORD *)&v218[48] = *(_OWORD *)&v230[48];
    *(_OWORD *)&v218[32] = *(_OWORD *)&v230[32];
    *(_OWORD *)&v218[16] = *(_OWORD *)&v230[16];
    *(_OWORD *)v218 = *(_OWORD *)v230;
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      *(_QWORD *)&v204 = v218;
      *((_QWORD *)&v204 + 1) = sub_140D76130;
      v213.m256i_i64[0] = (__int64)aCodexmateLibCo_49;
      v213.m256i_i64[1] = 45;
      v213.m256i_i64[2] = (__int64)aCodexmateLibCo_49;
      v213.m256i_i64[3] = 45;
      *(_QWORD *)&v214 = &off_141AA1958;
      sub_140AF72B0(&unk_141AA1920, &v204, 2, &v213);
    }
    sub_140D8A3A0(v218);
  }
  if ( v234 )
    sub_140001660(v231, v234, 1);
  *(_QWORD *)v230 = 0;
  *(_QWORD *)&v230[8] = 1;
  *(_QWORD *)&v230[16] = 0;
  *(_QWORD *)&v218[16] = 1610612768;
  *(_QWORD *)v218 = v230;
  *(_QWORD *)&v218[8] = &off_141AA1A90;
  if ( (unsigned __int8)sub_140D76130(v225, v218) )
    sub_14196B5F0(
      (unsigned int)aADisplayImplem_11,
      55,
      (unsigned int)&v241,
      (unsigned int)&unk_141A9F540,
      (__int64)&off_141AA1B48);
  v213.m256i_i64[2] = *(_QWORD *)&v230[16];
  *(_OWORD *)v213.m256i_i8 = *(_OWORD *)v230;
  sub_140DB20C0(v245, aRetryExhausted, 15, &v213, 6, v125, *((_QWORD *)&v125 + 1), v135, v141);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)&v225[80];
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v225[64];
  v18 = *(_OWORD *)v225;
  v57 = *(_OWORD *)&v225[16];
  v58 = *(_OWORD *)&v225[32];
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v225[48];
  *(_OWORD *)(a1 + 32) = v58;
  *(_OWORD *)(a1 + 16) = v57;
  *(_OWORD *)a1 = v18;
  *(_WORD *)(a1 + 96) = 772;
LABEL_244:
  *(_QWORD *)&result = v18;
  return result;
}
