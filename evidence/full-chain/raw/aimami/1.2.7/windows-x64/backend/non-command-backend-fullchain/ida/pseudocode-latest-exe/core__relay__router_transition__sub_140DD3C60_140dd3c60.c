// win 1.2.7 latest-exe | module src/core/relay/router_transition.rs | ea 0x140dd3c60 | successor of pre-update 0x140bd84f0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.649, "str_ov": 0.5, "verdict": "CONFIRMED_DIFF"}
double __fastcall sub_140DD3C60(
        __int64 a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7,
        char a8,
        __int64 **a9,
        __int64 *a10,
        __int64 a11,
        char *a12)
{
  __int128 v14; // kr00_16
  __int128 v15; // kr10_16
  __int128 v16; // kr20_16
  __int128 v17; // kr30_16
  __int128 v18; // xmm0
  _BYTE *v19; // r15
  __int64 *v20; // rdx
  __int64 v21; // rcx
  int v22; // ebx
  char v23; // al
  char v24; // r14
  int v25; // edx
  __int128 v26; // kr40_16
  int v27; // edx
  char v28; // r13
  __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r14
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // r14d
  char v42; // bl
  unsigned __int64 v43; // rax
  unsigned int v44; // edx
  int v45; // r9d
  __int64 v46; // rdx
  __int64 v47; // rbx
  __int64 v48; // r13
  __int64 v49; // r14
  _QWORD *v50; // r12
  __int64 v51; // rdx
  unsigned __int64 v52; // rax
  unsigned int v53; // edx
  char v54; // r14
  bool v55; // cl
  bool v56; // dl
  int v57; // edx
  char v58; // al
  bool v59; // cl
  bool v60; // dl
  int v61; // edx
  __int64 v62; // r12
  _QWORD *v63; // r14
  __int64 v64; // rdx
  __int64 v65; // rbx
  __int64 v66; // r14
  _QWORD *v67; // r12
  __int64 v68; // rcx
  __int128 v69; // xmm1
  __int128 v70; // xmm2
  _OWORD *v71; // rax
  __int128 v72; // xmm1
  __int128 v73; // xmm2
  __int64 v74; // rax
  unsigned int v75; // edx
  __int128 v76; // xmm1
  __int128 v77; // xmm2
  char v78; // al
  __int128 v79; // xmm1
  __int128 v80; // xmm2
  char v81; // al
  __int128 v82; // xmm1
  __int128 v83; // xmm2
  char v84; // al
  __int128 v85; // xmm1
  __int128 v86; // xmm2
  char v87; // al
  __int64 v88; // rdi
  __int128 v89; // xmm1
  __int128 v90; // xmm2
  char v91; // al
  __int64 v92; // rax
  __int64 v93; // rcx
  __int128 v94; // krA0_16
  int v95; // edx
  __int128 v96; // xmm1
  __int128 v97; // xmm2
  char v98; // al
  __int128 v99; // xmm1
  __int128 v100; // xmm2
  __int64 v101; // rdx
  char v102; // al
  __int128 v103; // krB0_16
  __int64 v104; // rbx
  __int64 v105; // rdi
  _OWORD *v106; // r12
  __int64 v107; // r14
  char v108; // r15
  __int128 v109; // xmm1
  __int128 v110; // xmm2
  char v111; // al
  unsigned __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  unsigned __int64 v115; // rbx
  __int64 v116; // rax
  unsigned int v117; // edx
  __int64 (__fastcall *v118)(unsigned __int64); // rax
  __int64 v119; // rcx
  __int64 v120; // rdx
  __int64 v121; // r14
  __int64 v122; // rdi
  __int64 v123; // rax
  __int64 v124; // rcx
  __int128 v125; // xmm1
  __int128 v126; // xmm2
  __int64 v127; // rax
  unsigned int v128; // edx
  double result; // xmm0_8
  __int64 v130; // [rsp+20h] [rbp-60h]
  __int64 v131; // [rsp+20h] [rbp-60h]
  __int64 v132; // [rsp+20h] [rbp-60h]
  __int128 v133; // [rsp+28h] [rbp-58h]
  __int128 v134; // [rsp+28h] [rbp-58h]
  __int128 v135; // [rsp+28h] [rbp-58h]
  __int64 v136; // [rsp+28h] [rbp-58h]
  __int128 v137; // [rsp+28h] [rbp-58h]
  __int64 v138; // [rsp+28h] [rbp-58h]
  __int64 v139; // [rsp+28h] [rbp-58h]
  __int64 v140; // [rsp+30h] [rbp-50h]
  __int64 v141; // [rsp+30h] [rbp-50h]
  __int64 v142; // [rsp+38h] [rbp-48h]
  __int64 v143; // [rsp+38h] [rbp-48h]
  __int64 v144; // [rsp+38h] [rbp-48h]
  __int128 v145; // [rsp+38h] [rbp-48h]
  __int64 v146; // [rsp+38h] [rbp-48h]
  __int128 v147; // [rsp+38h] [rbp-48h]
  __int64 v148; // [rsp+40h] [rbp-40h]
  __int64 v149; // [rsp+40h] [rbp-40h]
  __int64 v150; // [rsp+40h] [rbp-40h]
  __int64 v151; // [rsp+40h] [rbp-40h]
  _BYTE v152[24]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v153[24]; // [rsp+68h] [rbp-18h] BYREF
  _BYTE v154[24]; // [rsp+80h] [rbp+0h] BYREF
  _BYTE v155[24]; // [rsp+98h] [rbp+18h] BYREF
  _BYTE v156[24]; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v157; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v158; // [rsp+D8h] [rbp+58h]
  __int128 v159; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v160; // [rsp+F0h] [rbp+70h]
  __int128 v161; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v162; // [rsp+108h] [rbp+88h] BYREF
  __int128 v163; // [rsp+110h] [rbp+90h]
  __int64 v164; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v165; // [rsp+128h] [rbp+A8h]
  __int64 v166; // [rsp+138h] [rbp+B8h] BYREF
  __int128 v167; // [rsp+140h] [rbp+C0h]
  __int64 v168; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v169; // [rsp+158h] [rbp+D8h]
  __int64 v170; // [rsp+168h] [rbp+E8h] BYREF
  __int128 v171; // [rsp+170h] [rbp+F0h]
  __int128 v172; // [rsp+180h] [rbp+100h]
  __int128 v173; // [rsp+190h] [rbp+110h]
  __int128 v174; // [rsp+1A0h] [rbp+120h]
  __int64 v175; // [rsp+1B0h] [rbp+130h]
  __int64 v176; // [rsp+1B8h] [rbp+138h] BYREF
  int v177; // [rsp+1C0h] [rbp+140h]
  __int64 v178; // [rsp+1C8h] [rbp+148h]
  __int64 *v179; // [rsp+1D0h] [rbp+150h]
  __int64 *v180; // [rsp+1D8h] [rbp+158h]
  __int64 *v181; // [rsp+1E0h] [rbp+160h]
  __int64 v182; // [rsp+1E8h] [rbp+168h]
  __int64 v183; // [rsp+1F0h] [rbp+170h]
  unsigned __int8 *v184; // [rsp+1F8h] [rbp+178h]
  __m256i v185; // [rsp+200h] [rbp+180h] BYREF
  __int128 v186; // [rsp+220h] [rbp+1A0h]
  __int128 v187; // [rsp+230h] [rbp+1B0h]
  __int128 v188; // [rsp+240h] [rbp+1C0h]
  __int128 v189; // [rsp+250h] [rbp+1D0h]
  _BYTE v190[96]; // [rsp+260h] [rbp+1E0h] BYREF
  __int128 *v191; // [rsp+2C0h] [rbp+240h]
  __int64 v192; // [rsp+2C8h] [rbp+248h]
  __int64 v193; // [rsp+2D0h] [rbp+250h]
  _BYTE v194[21]; // [rsp+2D8h] [rbp+258h] BYREF
  _BYTE v195[21]; // [rsp+2F0h] [rbp+270h] BYREF
  __int128 v196; // [rsp+308h] [rbp+288h] BYREF
  __int64 v197; // [rsp+318h] [rbp+298h]
  __int64 *v198; // [rsp+320h] [rbp+2A0h]
  unsigned __int64 v199; // [rsp+328h] [rbp+2A8h]
  __int128 v200; // [rsp+330h] [rbp+2B0h] BYREF
  __int128 v201; // [rsp+340h] [rbp+2C0h]
  __int128 v202; // [rsp+350h] [rbp+2D0h]
  __int128 v203; // [rsp+360h] [rbp+2E0h]
  __int128 v204; // [rsp+370h] [rbp+2F0h] BYREF
  __int128 v205; // [rsp+380h] [rbp+300h]
  _QWORD v206[3]; // [rsp+398h] [rbp+318h] BYREF
  __int128 v207; // [rsp+3B0h] [rbp+330h] BYREF
  _QWORD v208[2]; // [rsp+3C0h] [rbp+340h] BYREF
  __int128 v209; // [rsp+3D0h] [rbp+350h] BYREF
  __int128 v210; // [rsp+3E0h] [rbp+360h]
  __int128 v211; // [rsp+3F0h] [rbp+370h]
  __int128 v212; // [rsp+400h] [rbp+380h]
  __int64 v213; // [rsp+410h] [rbp+390h] BYREF
  int v214; // [rsp+418h] [rbp+398h]
  __int64 v215; // [rsp+420h] [rbp+3A0h] BYREF
  __int64 v216; // [rsp+428h] [rbp+3A8h]
  __int64 v217; // [rsp+430h] [rbp+3B0h]
  __int64 v218; // [rsp+438h] [rbp+3B8h]
  __int128 v219; // [rsp+440h] [rbp+3C0h] BYREF
  _BYTE v220[48]; // [rsp+450h] [rbp+3D0h]
  __int128 v221; // [rsp+480h] [rbp+400h] BYREF
  __int128 v222; // [rsp+490h] [rbp+410h]
  int v223; // [rsp+4A8h] [rbp+428h] BYREF
  char v224; // [rsp+4ACh] [rbp+42Ch] BYREF
  __int128 v225; // [rsp+4B0h] [rbp+430h] BYREF
  __m256i v226; // [rsp+4C0h] [rbp+440h] BYREF
  __int128 v227; // [rsp+4E0h] [rbp+460h]
  __int128 v228; // [rsp+4F0h] [rbp+470h]
  __int128 v229; // [rsp+500h] [rbp+480h]
  __int128 v230; // [rsp+510h] [rbp+490h]
  _BYTE v231[128]; // [rsp+520h] [rbp+4A0h] BYREF
  __int128 v232; // [rsp+5A0h] [rbp+520h]
  __int128 v233; // [rsp+5B0h] [rbp+530h]
  __int128 v234; // [rsp+5C0h] [rbp+540h]
  __int128 v235; // [rsp+5D0h] [rbp+550h]
  __int64 v236; // [rsp+5E0h] [rbp+560h]
  char v237; // [rsp+5EFh] [rbp+56Fh] BYREF
  _BYTE v238[96]; // [rsp+5F0h] [rbp+570h] BYREF
  char v239; // [rsp+65Dh] [rbp+5DDh]
  char v240; // [rsp+65Eh] [rbp+5DEh]
  char v241; // [rsp+65Fh] [rbp+5DFh]
  _BYTE v242[96]; // [rsp+660h] [rbp+5E0h] BYREF
  __int64 *v243; // [rsp+6C0h] [rbp+640h]
  char v244; // [rsp+6CAh] [rbp+64Ah]
  _BYTE v245[2]; // [rsp+6CBh] [rbp+64Bh] BYREF
  char v246; // [rsp+6CDh] [rbp+64Dh]
  char v247; // [rsp+6CEh] [rbp+64Eh]
  char v248; // [rsp+6CFh] [rbp+64Fh]
  unsigned __int64 v249; // [rsp+6D0h] [rbp+650h]
  char v250; // [rsp+6D8h] [rbp+658h]
  char v251; // [rsp+6D9h] [rbp+659h]
  char v252; // [rsp+6DAh] [rbp+65Ah]
  char v253; // [rsp+6DBh] [rbp+65Bh] BYREF
  char v254; // [rsp+6DCh] [rbp+65Ch]
  char v255; // [rsp+6DDh] [rbp+65Dh]
  char v256; // [rsp+6DEh] [rbp+65Eh] BYREF
  unsigned __int8 v257; // [rsp+6DFh] [rbp+65Fh] BYREF
  __int64 v258; // [rsp+6E0h] [rbp+660h]

  v258 = -2;
  v257 = a3;
  v245[0] = 0;
  *(_QWORD *)&v225 = a4;
  *((_QWORD *)&v225 + 1) = a5;
  sub_1407D5CC0(v231);
  v14 = *(_OWORD *)&v231[32];
  *(_OWORD *)v238 = *(_OWORD *)&v231[48];
  *(_OWORD *)&v238[16] = *(_OWORD *)&v231[64];
  if ( *(_QWORD *)v231 != -1 )
  {
    *(_OWORD *)&v242[80] = *(_OWORD *)&v231[80];
    *(_QWORD *)&v242[16] = *(_QWORD *)&v231[16];
    *(_OWORD *)&v242[24] = *(_OWORD *)&v231[24];
    *(_QWORD *)&v242[40] = *(_QWORD *)&v231[40];
    *(_OWORD *)&v242[48] = *(_OWORD *)v238;
    *(_OWORD *)&v242[64] = *(_OWORD *)&v238[16];
    *(_OWORD *)v242 = *(_OWORD *)v231;
LABEL_3:
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v242[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v242[64];
    v15 = *(_OWORD *)v242;
    v16 = *(_OWORD *)&v242[16];
    v17 = *(_OWORD *)&v242[32];
    *(_QWORD *)&v18 = *(_QWORD *)&v242[48];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v242[48];
    *(_OWORD *)(a1 + 32) = v17;
    *(_OWORD *)(a1 + 16) = v16;
    *(_OWORD *)a1 = v15;
LABEL_4:
    *(_WORD *)(a1 + 96) = 0;
    goto LABEL_254;
  }
  if ( *(_QWORD *)&v231[8] != -1 )
  {
    if ( *(_QWORD *)&v231[8] )
      sub_140001660(*(_QWORD *)&v231[16], *(_QWORD *)&v231[8], 1);
    if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(*((_QWORD *)&v14 + 1), v14, 1);
  }
  sub_1407E52E0(v231);
  if ( *(_DWORD *)v231 == -1 )
  {
    sub_1408D1F30(v242, a2);
    if ( *(_QWORD *)v242 != -1 )
      goto LABEL_3;
  }
  else
  {
    *(_OWORD *)&v242[80] = *(_OWORD *)&v231[80];
    *(_OWORD *)&v242[64] = *(_OWORD *)&v231[64];
    *(_OWORD *)&v242[48] = *(_OWORD *)&v231[48];
    *(_OWORD *)&v242[32] = *(_OWORD *)&v231[32];
    *(_OWORD *)&v242[16] = *(_OWORD *)&v231[16];
    *(_OWORD *)v242 = *(_OWORD *)v231;
    if ( *(_QWORD *)v231 != -1 )
      goto LABEL_3;
  }
  sub_141597890(&v161);
  *(_QWORD *)v231 = v245;
  *(_QWORD *)&v231[8] = sub_140EDAE50;
  *(_QWORD *)&v231[16] = &v225;
  *(_QWORD *)&v231[24] = sub_140191200;
  sub_1416DAFA0(&v170, &unk_141A9B638, v231);
  v226.m256i_i8[0] = v257;
  v249 = v171;
  *(_OWORD *)v238 = v171;
  *(_QWORD *)v231 = &v226;
  *(_QWORD *)&v231[8] = sub_140ED78B0;
  *(_QWORD *)&v231[16] = v238;
  *(_QWORD *)&v231[24] = sub_140191200;
  sub_1416DAFA0(v242, &unk_141A9B450, v231);
  sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStart_2, 5, (__int64)v242);
  if ( v170 )
    sub_140001660(v249, v170, 1);
  if ( !v245[0] )
  {
    sub_14080DD30(&v226, a6, 0);
    if ( v226.m256i_i32[0] != -1 )
    {
      *(_OWORD *)&v238[80] = v230;
      *(_OWORD *)&v238[64] = v229;
      *(_OWORD *)&v238[48] = v228;
      *(_OWORD *)&v238[32] = v227;
      *(__m256i *)v238 = v226;
      *(_QWORD *)v242 = 0;
      *(_QWORD *)&v242[8] = 1;
      *(_QWORD *)&v242[16] = 0;
      *(_QWORD *)&v231[16] = 1610612768;
      *(_QWORD *)v231 = v242;
      *(_QWORD *)&v231[8] = &off_141AA1A90;
      if ( (unsigned __int8)sub_140D76130(v238, v231) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v253,
          (unsigned int)&unk_141A9F540,
          (__int64)&off_141AA1B48);
      v243 = *(__int64 **)&v242[8];
      v249 = *(_QWORD *)v242;
      sub_1407D2B10(
        (unsigned int)v231,
        (_DWORD)a2,
        v257,
        (unsigned int)aFailed_2,
        6,
        v225,
        *((__int64 *)&v225 + 1),
        *(__int64 *)&v242[8],
        *(__int64 *)&v242[16],
        0);
      if ( *(_QWORD *)v231 == -1 )
      {
        sub_1407B9160(*(_QWORD *)&v231[8]);
      }
      else
      {
        *(_QWORD *)&v242[88] = *(_QWORD *)&v231[88];
        *(_OWORD *)&v242[72] = *(_OWORD *)&v231[72];
        *(_OWORD *)&v242[56] = *(_OWORD *)&v231[56];
        *(_OWORD *)&v242[40] = *(_OWORD *)&v231[40];
        *(_OWORD *)&v242[24] = *(_OWORD *)&v231[24];
        *(_OWORD *)&v242[8] = *(_OWORD *)&v231[8];
        *(_QWORD *)v242 = *(_QWORD *)v231;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)&v219 = v242;
          *((_QWORD *)&v219 + 1) = sub_140D76130;
          *(_QWORD *)v231 = aCodexmateLibCo_49;
          *(_QWORD *)&v231[8] = 45;
          *(_QWORD *)&v231[16] = aCodexmateLibCo_49;
          *(_QWORD *)&v231[24] = 45;
          *(_QWORD *)&v231[32] = &off_141AA1958;
          sub_140AF72B0(&unk_141AA1920, &v219, 2, v231);
        }
        sub_140D8A3A0(v242);
      }
      if ( v249 )
        sub_140001660(v243, v249, 1);
      *(_QWORD *)v231 = &v225;
      *(_QWORD *)&v231[8] = sub_140191200;
      *(_QWORD *)&v231[16] = v238;
      *(_QWORD *)&v231[24] = sub_140D76130;
      sub_1416DAFA0(&v168, &unk_141A9B651, v231);
      LOBYTE(v200) = v257;
      v249 = v169;
      v219 = v169;
      *(_QWORD *)v231 = &v200;
      *(_QWORD *)&v231[8] = sub_140ED78B0;
      *(_QWORD *)&v231[16] = &v219;
      *(_QWORD *)&v231[24] = sub_140191200;
      sub_1416DAFA0(v242, &unk_141A9B450, v231);
      sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aPreflightFaile, 16, (__int64)v242);
      if ( v168 )
        sub_140001660(v249, v168, 1);
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v238[80];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v238[64];
      v18 = *(_OWORD *)v238;
      v69 = *(_OWORD *)&v238[16];
      v70 = *(_OWORD *)&v238[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v238[48];
      *(_OWORD *)(a1 + 32) = v70;
      *(_OWORD *)(a1 + 16) = v69;
      *(_OWORD *)a1 = v18;
      goto LABEL_4;
    }
  }
  v178 = 2LL * ((a7 & 1) == 0) + 3;
  v19 = &v231[9];
  v198 = *a9;
  v179 = a9[1];
  v20 = a9[2];
  v180 = v20;
  v181 = a9[3];
  v182 = *a10;
  v21 = a10[1];
  v183 = v21;
  v184 = (unsigned __int8 *)a10[2];
  v22 = -1;
  v23 = 1;
  v24 = 0;
  v191 = a2;
  while ( (v24 & 1) == 0 && (unsigned __int8)v23 <= 3u )
  {
    LODWORD(v249) = v22;
    LOBYTE(v20) = v23 == 3;
    v243 = v20;
    v25 = (unsigned __int8)(v23 + 1);
    if ( v23 == 3 )
      v25 = 3;
    LODWORD(v218) = v25;
    v256 = v23;
    v26 = v225;
    sub_1407D2B10(
      (unsigned int)v231,
      (_DWORD)a2,
      v257,
      (unsigned int)aStoppingCodex,
      14,
      v225,
      *((__int64 *)&v225 + 1),
      v225,
      *((__int64 *)&v225 + 1),
      0);
    if ( *(_QWORD *)v231 == -1 )
    {
      sub_1407B9160(*(_QWORD *)&v231[8]);
    }
    else
    {
      *(_QWORD *)&v242[88] = *(_QWORD *)&v231[88];
      *(_OWORD *)&v242[72] = *(_OWORD *)&v231[72];
      *(_OWORD *)&v242[56] = *(_OWORD *)&v231[56];
      *(_OWORD *)&v242[40] = *(_OWORD *)&v231[40];
      *(_OWORD *)&v242[24] = *(_OWORD *)&v231[24];
      *(_OWORD *)&v242[8] = *(_OWORD *)&v231[8];
      *(_QWORD *)v242 = *(_QWORD *)v231;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)v238 = v242;
        *(_QWORD *)&v238[8] = sub_140D76130;
        *(_QWORD *)&v231[48] = 2;
        *(_QWORD *)&v231[56] = aCodexmateLibCo_49;
        *(_QWORD *)&v231[64] = 45;
        *(_QWORD *)&v231[80] = &unk_141AA1920;
        *(_QWORD *)&v231[88] = v238;
        *(_QWORD *)v231 = 0;
        *(_QWORD *)&v231[8] = aCodexmateLibCo_49;
        *(_OWORD *)&v231[16] = 0x2Du;
        *(_QWORD *)&v231[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v231[40] = 35;
        *(_QWORD *)&v231[72] = 0x22E00000001LL;
        sub_141503E20(&v253, v231);
      }
      sub_140D8A3A0(v242);
    }
    v176 = sub_1416AEBD0();
    v177 = v27;
    sub_140933FA0((unsigned int)v231, v178, 0, a7, a8);
    *(_DWORD *)&v242[3] = *(_DWORD *)&v231[12];
    *(_DWORD *)v242 = *(_DWORD *)&v231[9];
    *(__int32 *)((char *)v226.m256i_i32 + 3) = *(_DWORD *)&v231[20];
    v226.m256i_i32[0] = *(_DWORD *)&v231[17];
    *(_DWORD *)((char *)&v219 + 3) = *(_DWORD *)&v231[28];
    LODWORD(v219) = *(_DWORD *)&v231[25];
    LODWORD(v200) = *(_DWORD *)&v231[33];
    *(_DWORD *)((char *)&v200 + 3) = *(_DWORD *)&v231[36];
    *(__int32 *)((char *)v185.m256i_i32 + 3) = *(_DWORD *)&v231[44];
    v185.m256i_i32[0] = *(_DWORD *)&v231[41];
    *(_DWORD *)&v190[3] = *(_DWORD *)&v231[52];
    *(_DWORD *)v190 = *(_DWORD *)&v231[49];
    v28 = v231[56];
    *(_DWORD *)((char *)&v209 + 3) = *(_DWORD *)&v231[60];
    LODWORD(v209) = *(_DWORD *)&v231[57];
    if ( *(_QWORD *)v231 != -1 )
    {
      LODWORD(v213) = *(_DWORD *)&v231[65];
      *(_DWORD *)((char *)&v213 + 3) = *(_DWORD *)&v231[68];
      *(_QWORD *)&v238[88] = *(_QWORD *)&v231[88];
      *(_OWORD *)&v238[72] = *(_OWORD *)&v231[72];
      *(_DWORD *)&v238[9] = *(_DWORD *)v242;
      *(_DWORD *)&v238[12] = *(_DWORD *)&v242[3];
      LODWORD(v206[0]) = v226.m256i_i32[0];
      *(_DWORD *)((char *)v206 + 3) = *(__int32 *)((char *)v226.m256i_i32 + 3);
      *(_DWORD *)((char *)&v196 + 3) = *(_DWORD *)((char *)&v219 + 3);
      LODWORD(v196) = v219;
      *(_DWORD *)&v194[3] = *(_DWORD *)((char *)&v200 + 3);
      *(_DWORD *)v194 = v200;
      *(_DWORD *)&v195[3] = *(__int32 *)((char *)v185.m256i_i32 + 3);
      *(_DWORD *)v195 = v185.m256i_i32[0];
      *(_DWORD *)((char *)&v215 + 3) = *(_DWORD *)&v190[3];
      LODWORD(v215) = *(_DWORD *)v190;
      *(_DWORD *)((char *)v208 + 3) = *(_DWORD *)((char *)&v209 + 3);
      LODWORD(v208[0]) = v209;
      *(_QWORD *)v238 = *(_QWORD *)v231;
      v238[8] = v231[8];
      v238[16] = v231[16];
      *(_DWORD *)&v238[20] = *(__int32 *)((char *)v226.m256i_i32 + 3);
      *(_DWORD *)&v238[17] = v206[0];
      v238[24] = v231[24];
      *(_DWORD *)&v238[28] = *(_DWORD *)((char *)&v196 + 3);
      *(_DWORD *)&v238[25] = v219;
      v238[32] = v231[32];
      *(_DWORD *)&v238[36] = *(_DWORD *)&v194[3];
      *(_DWORD *)&v238[33] = v200;
      v238[40] = v231[40];
      *(_DWORD *)&v238[44] = *(_DWORD *)&v195[3];
      *(_DWORD *)&v238[41] = v185.m256i_i32[0];
      v238[48] = v231[48];
      *(_DWORD *)&v238[52] = *(_DWORD *)((char *)&v215 + 3);
      *(_DWORD *)&v238[49] = *(_DWORD *)v190;
      v238[56] = v231[56];
      *(_DWORD *)&v238[60] = *(_DWORD *)((char *)v208 + 3);
      *(_DWORD *)&v238[57] = v209;
      v238[64] = v231[64];
      *(_DWORD *)&v238[68] = *(_DWORD *)&v231[68];
      *(_DWORD *)&v238[65] = v213;
      *(_QWORD *)v242 = 0;
      *(_QWORD *)&v242[8] = 1;
      *(_QWORD *)&v242[16] = 0;
      *(_QWORD *)&v231[16] = 1610612768;
      *(_QWORD *)v231 = v242;
      *(_QWORD *)&v231[8] = &off_141AA1A90;
      if ( (unsigned __int8)sub_140D76130(v238, v231) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v253,
          (unsigned int)&unk_141A9F540,
          (__int64)&off_141AA1B48);
      v249 = *(_QWORD *)v242;
      v150 = *(_QWORD *)&v242[16];
      v243 = *(__int64 **)&v242[8];
      v144 = *(_QWORD *)&v242[8];
      v134 = v225;
      sub_1407D7360((__int128 *)v242, v191, v257);
      if ( *(_DWORD *)v242 != -1 )
      {
        *(_OWORD *)&v231[80] = *(_OWORD *)&v242[80];
        *(_OWORD *)&v231[64] = *(_OWORD *)&v242[64];
        *(_OWORD *)&v231[48] = *(_OWORD *)&v242[48];
        *(_OWORD *)&v231[32] = *(_OWORD *)&v242[32];
        *(_OWORD *)&v231[16] = *(_OWORD *)&v242[16];
        *(_OWORD *)v231 = *(_OWORD *)v242;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)&v219 = v231;
          *((_QWORD *)&v219 + 1) = sub_140D76130;
          v226.m256i_i64[0] = (__int64)aCodexmateLibCo_49;
          v226.m256i_i64[1] = 45;
          v226.m256i_i64[2] = (__int64)aCodexmateLibCo_49;
          v226.m256i_i64[3] = 45;
          *(_QWORD *)&v227 = &off_141AA1958;
          sub_140AF72B0(&unk_141AA1920, &v219, 2, &v226);
        }
        sub_140D8A3A0(v231);
      }
      if ( v249 )
        sub_140001660(v243, v249, 1);
      v74 = sub_1416AED20(&v176);
      *(_OWORD *)v242 = 0x3E8 * (unsigned __int128)(unsigned __int64)v74 + v75 / 0xF4240uLL;
      *(_QWORD *)v231 = &v256;
      *(_QWORD *)&v231[8] = sub_1416E8600;
      *(_QWORD *)&v231[16] = v242;
      *(_QWORD *)&v231[24] = sub_1416E85A0;
      *(_QWORD *)&v231[32] = v238;
      *(_QWORD *)&v231[40] = sub_140D76130;
      sub_1416DAFA0(v156, &unk_141A9B96F, v231);
      sub_140DB20C0(v257, aStopFailed, 11, v156, 6, v134, *((_QWORD *)&v134 + 1), v144, v150);
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v238[80];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v238[64];
      v18 = *(_OWORD *)v238;
      v76 = *(_OWORD *)&v238[16];
      v77 = *(_OWORD *)&v238[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v238[48];
      *(_OWORD *)(a1 + 32) = v77;
      *(_OWORD *)(a1 + 16) = v76;
      *(_OWORD *)a1 = v18;
      v78 = v256;
      *(_BYTE *)(a1 + 96) = 1;
      *(_BYTE *)(a1 + 97) = v78;
      goto LABEL_254;
    }
    LODWORD(v206[0]) = *(_DWORD *)v242;
    *(_DWORD *)((char *)v206 + 3) = *(_DWORD *)&v242[3];
    LODWORD(v196) = v226.m256i_i32[0];
    *(_DWORD *)((char *)&v196 + 3) = *(__int32 *)((char *)v226.m256i_i32 + 3);
    *(_DWORD *)v194 = v219;
    *(_DWORD *)&v194[3] = *(_DWORD *)((char *)&v219 + 3);
    *(_DWORD *)v195 = v200;
    *(_DWORD *)&v195[3] = *(_DWORD *)((char *)&v200 + 3);
    *(_DWORD *)((char *)&v215 + 3) = *(__int32 *)((char *)v185.m256i_i32 + 3);
    LODWORD(v215) = v185.m256i_i32[0];
    *(_DWORD *)((char *)v208 + 3) = *(_DWORD *)&v190[3];
    LODWORD(v208[0]) = *(_DWORD *)v190;
    LODWORD(v213) = v209;
    *(_DWORD *)((char *)&v213 + 3) = *(_DWORD *)((char *)&v209 + 3);
    DWORD1(v172) = *(_DWORD *)&v242[3];
    *(_DWORD *)((char *)&v172 + 1) = v206[0];
    HIDWORD(v172) = *(__int32 *)((char *)v226.m256i_i32 + 3);
    *(_DWORD *)((char *)&v172 + 9) = v196;
    DWORD1(v173) = *(_DWORD *)((char *)&v219 + 3);
    *(_DWORD *)((char *)&v173 + 1) = *(_DWORD *)v194;
    HIDWORD(v173) = *(_DWORD *)((char *)&v200 + 3);
    *(_DWORD *)((char *)&v173 + 9) = *(_DWORD *)v195;
    DWORD1(v174) = *(_DWORD *)((char *)&v215 + 3);
    *(_DWORD *)((char *)&v174 + 1) = v185.m256i_i32[0];
    HIDWORD(v174) = *(_DWORD *)((char *)v208 + 3);
    *(_DWORD *)((char *)&v174 + 9) = *(_DWORD *)v190;
    HIDWORD(v175) = *(_DWORD *)((char *)&v209 + 3);
    *(_DWORD *)((char *)&v175 + 1) = v213;
    v237 = v231[56];
    LOBYTE(v172) = v231[8];
    BYTE8(v172) = v231[16];
    LOBYTE(v173) = v231[24];
    BYTE8(v173) = v231[32];
    LOBYTE(v174) = v231[40];
    BYTE8(v174) = v231[48];
    LOBYTE(v175) = v231[56];
    v252 = 1;
    v29 = sub_1416AED20(&v176);
    a2 = v191;
    *(_OWORD *)v242 = 0x3E8 * (unsigned __int128)(unsigned __int64)v29 + v30 / 0xF4240uLL;
    *(_QWORD *)v231 = &v256;
    *(_QWORD *)&v231[8] = sub_1416E8600;
    *(_QWORD *)&v231[16] = v242;
    *(_QWORD *)&v231[24] = sub_1416E85A0;
    *(_QWORD *)&v231[32] = &v237;
    *(_QWORD *)&v231[40] = sub_1416EBC20;
    v252 = 1;
    sub_1416DAFA0(&v166, &unk_141A9B6EE, v231);
    v226.m256i_i8[0] = v257;
    v236 = v167;
    *(_OWORD *)v238 = v167;
    *(_QWORD *)v231 = &v226;
    *(_QWORD *)&v231[8] = sub_140ED78B0;
    *(_QWORD *)&v231[16] = v238;
    *(_QWORD *)&v231[24] = sub_140191200;
    sub_1416DAFA0(v242, &unk_141A9B450, v231);
    sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStopComplete, 13, (__int64)v242);
    if ( v166 )
      sub_140001660(v236, v166, 1);
    v252 = 1;
    sub_1407D2B10(
      (unsigned int)v231,
      (_DWORD)a2,
      v257,
      (unsigned int)&unk_141A9B71D,
      11,
      v225,
      *((__int64 *)&v225 + 1),
      v26,
      *((__int64 *)&v26 + 1),
      0);
    if ( *(_QWORD *)v231 == -1 )
    {
      v252 = 1;
      sub_1407B9160(*(_QWORD *)&v231[8]);
    }
    else
    {
      *(_QWORD *)&v242[88] = *(_QWORD *)&v231[88];
      *(_OWORD *)&v242[72] = *(_OWORD *)&v231[72];
      *(_OWORD *)&v242[56] = *(_OWORD *)&v231[56];
      *(_OWORD *)&v242[40] = *(_OWORD *)&v231[40];
      *(_OWORD *)&v242[24] = *(_OWORD *)&v231[24];
      *(_OWORD *)&v242[8] = *(_OWORD *)&v231[8];
      *(_QWORD *)v242 = *(_QWORD *)v231;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)v238 = v242;
        *(_QWORD *)&v238[8] = sub_140D76130;
        *(_QWORD *)&v231[48] = 2;
        *(_QWORD *)&v231[56] = aCodexmateLibCo_49;
        *(_QWORD *)&v231[64] = 45;
        *(_QWORD *)&v231[80] = &unk_141AA1920;
        *(_QWORD *)&v231[88] = v238;
        *(_QWORD *)v231 = 0;
        *(_QWORD *)&v231[8] = aCodexmateLibCo_49;
        *(_OWORD *)&v231[16] = 0x2Du;
        *(_QWORD *)&v231[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v231[40] = 35;
        *(_QWORD *)&v231[72] = 0x22E00000001LL;
        sub_141503E20(&v253, v231);
      }
      v252 = 1;
      sub_140D8A3A0(v242);
    }
    if ( v256 == 1 )
    {
      v33 = v198[1];
      if ( v33 < 0 )
      {
        v68 = 0;
        goto LABEL_120;
      }
      if ( v33 )
      {
        v34 = *v198;
        nullsub_1(v32, v31);
        v35 = sub_140001650(v33, 1);
        if ( !v35 )
        {
          v192 = v33;
          v68 = 1;
LABEL_120:
          v252 = 1;
          sub_14196B2DB(v68, v192);
        }
        v36 = v34;
        v37 = v35;
        sub_1419234B0(v35, v36, v33);
        v38 = v37;
        v39 = v37;
      }
      else
      {
        v38 = 1;
        v39 = 1;
      }
      v192 = v39;
      *(_QWORD *)v231 = v33;
      *(_QWORD *)&v231[8] = v38;
      *(_QWORD *)&v231[16] = v33;
    }
    else
    {
      *(_QWORD *)v242 = v198;
      *(_QWORD *)&v242[8] = sub_140191200;
      v252 = 1;
      sub_1416DAFA0(v231, &unk_141A9F314, v242);
      v38 = *(_QWORD *)&v231[8];
      v33 = *(_QWORD *)&v231[16];
    }
    v40 = 0;
    if ( *(_DWORD *)v181 != -2 )
      v40 = (__int64)v181;
    v236 = v38;
    sub_140EACC90((unsigned int)v190, (_DWORD)v179, (_DWORD)v180, v38, v33, v28, v40);
    if ( *(_QWORD *)v231 )
      sub_140001660(v236, *(_QWORD *)v231, 1);
    *(_QWORD *)&v231[48] = v175;
    *(_OWORD *)&v231[32] = v174;
    *(_OWORD *)&v231[16] = v173;
    *(_OWORD *)v231 = v172;
    v245[1] = 1;
    sub_1409349D0(&v185, v231);
    *(_OWORD *)&v231[80] = *(_OWORD *)&v190[80];
    *(_OWORD *)&v231[64] = *(_OWORD *)&v190[64];
    *(_OWORD *)&v231[48] = *(_OWORD *)&v190[48];
    *(_OWORD *)&v231[32] = *(_OWORD *)&v190[32];
    *(_OWORD *)&v231[16] = *(_OWORD *)&v190[16];
    *(_OWORD *)v231 = *(_OWORD *)v190;
    v235 = v189;
    v234 = v188;
    v233 = v187;
    v232 = v186;
    *(__m256i *)&v231[96] = v185;
    if ( *(_QWORD *)v190 == -1 )
    {
      if ( *(_QWORD *)&v231[96] != -1 )
      {
        v193 = *(_QWORD *)v231;
        v230 = v189;
        v229 = v188;
        v228 = v187;
        v227 = v186;
        v226 = v185;
        *(_QWORD *)v238 = 0;
        *(_QWORD *)&v238[8] = 1;
        *(_QWORD *)&v238[16] = 0;
        *(_QWORD *)&v242[16] = 1610612768;
        *(_QWORD *)v242 = v238;
        *(_QWORD *)&v242[8] = &off_141AA1A90;
        if ( (unsigned __int8)sub_140D76130(&v226, v242) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v253,
            (unsigned int)&unk_141A9F540,
            (__int64)&off_141AA1B48);
        v249 = *(_QWORD *)v238;
        v151 = *(_QWORD *)&v238[16];
        v243 = *(__int64 **)&v238[8];
        v146 = *(_QWORD *)&v238[8];
        v137 = v225;
        sub_1407D7360((__int128 *)v238, a2, v257);
        if ( *(_DWORD *)v238 != -1 )
        {
          *(_OWORD *)&v242[80] = *(_OWORD *)&v238[80];
          *(_OWORD *)&v242[64] = *(_OWORD *)&v238[64];
          *(_OWORD *)&v242[48] = *(_OWORD *)&v238[48];
          *(_OWORD *)&v242[32] = *(_OWORD *)&v238[32];
          *(_OWORD *)&v242[16] = *(_OWORD *)&v238[16];
          *(_OWORD *)v242 = *(_OWORD *)v238;
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            *(_QWORD *)&v200 = v242;
            *((_QWORD *)&v200 + 1) = sub_140D76130;
            *(_QWORD *)&v219 = aCodexmateLibCo_49;
            *((_QWORD *)&v219 + 1) = 45;
            *(_QWORD *)v220 = aCodexmateLibCo_49;
            *(_QWORD *)&v220[8] = 45;
            *(_QWORD *)&v220[16] = &off_141AA1958;
            sub_140AF72B0(&unk_141AA1920, &v200, 2, &v219);
          }
          sub_140D8A3A0(v242);
        }
        if ( v249 )
          sub_140001660(v243, v249, 1);
        *(_QWORD *)v242 = &v256;
        *(_QWORD *)&v242[8] = sub_1416E8600;
        *(_QWORD *)&v242[16] = &v226;
        *(_QWORD *)&v242[24] = sub_140D76130;
        sub_1416DAFA0(v155, &unk_141A9B8A8, v242);
        sub_140DB20C0(v257, aSettleFailed, 13, v155, 6, v137, *((_QWORD *)&v137 + 1), v146, v151);
        *(_OWORD *)(a1 + 80) = v230;
        *(_OWORD *)(a1 + 64) = v229;
        v18 = *(_OWORD *)v226.m256i_i8;
        v89 = *(_OWORD *)&v226.m256i_u64[2];
        v90 = v227;
        *(_OWORD *)(a1 + 48) = v228;
        *(_OWORD *)(a1 + 32) = v90;
        *(_OWORD *)(a1 + 16) = v89;
        *(_OWORD *)a1 = v18;
        v91 = v256;
        *(_BYTE *)(a1 + 96) = 3;
        *(_BYTE *)(a1 + 97) = v91;
        sub_140D8A7D0(&v231[8]);
        sub_1402346F0(&v231[72]);
        v92 = *(_QWORD *)&v231[72];
        if ( !*(_QWORD *)&v231[72] )
          goto LABEL_254;
        v93 = *(_QWORD *)&v231[80];
        goto LABEL_198;
      }
      *(_QWORD *)&v205 = *(_QWORD *)&v190[88];
      v204 = *(_OWORD *)&v190[72];
      v203 = *(_OWORD *)&v190[56];
      v202 = *(_OWORD *)&v190[40];
      v201 = *(_OWORD *)&v190[24];
      v200 = *(_OWORD *)&v190[8];
      v223 = *(_DWORD *)&v231[104];
      v224 = v231[108];
      v45 = *v184;
      v46 = *(_QWORD *)(v182 + 24);
      v241 = 1;
      v240 = 1;
      sub_140EAD220((unsigned int)&v215, v46, v183, v45, (*(_DWORD *)&v231[104] == 0) & (v231[108] ^ 1));
      v47 = v217;
      if ( !v217 )
      {
        if ( (v223 || (v224 & 1) != 0) && *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)v231 = &v257;
          *(_QWORD *)&v231[8] = sub_140ED78B0;
          *(_QWORD *)&v231[16] = &v256;
          *(_QWORD *)&v231[24] = sub_1416E8600;
          *(_QWORD *)&v231[32] = &v223;
          *(_QWORD *)&v231[40] = sub_1416EACD0;
          *(_QWORD *)&v231[48] = &v224;
          *(_QWORD *)&v231[56] = sub_1416EBC20;
          *(_QWORD *)v242 = aCodexmateLibCo_49;
          *(_QWORD *)&v242[8] = 45;
          *(_QWORD *)&v242[16] = aCodexmateLibCo_49;
          *(_QWORD *)&v242[24] = 45;
          *(_QWORD *)&v242[32] = &off_141A9B7A0;
          v248 = 1;
          v247 = 1;
          sub_140AF72B0(&unk_141A9B728, v231, 2, v242);
        }
        *(_QWORD *)&v222 = v205;
        v221 = v204;
        *(_OWORD *)&v220[32] = v203;
        *(_OWORD *)&v220[16] = v202;
        *(_OWORD *)v220 = v201;
        v219 = v200;
        LOBYTE(v19) = v257;
        v94 = v225;
        v207 = v225;
        v255 = 1;
        v254 = 1;
        v213 = sub_1416AEBD0();
        v214 = v95;
        v255 = 1;
        v254 = 1;
        sub_1407D5A90((unsigned int)v231, (_DWORD)a2, (_DWORD)v19, v94, *((__int64 *)&v94 + 1));
        if ( *(_DWORD *)v231 != -1 )
        {
          v230 = *(_OWORD *)&v231[80];
          v229 = *(_OWORD *)&v231[64];
          v228 = *(_OWORD *)&v231[48];
          v227 = *(_OWORD *)&v231[32];
          v226 = *(__m256i *)v231;
          goto LABEL_200;
        }
        *(_QWORD *)v242 = &v219;
        *(_OWORD *)&v242[8] = v161;
        v102 = *a12;
        v255 = 1;
        v254 = 1;
        sub_140EA2DA0((unsigned int)&v226, a11, v219, v220[40], v102, (__int64)&v242[8]);
        if ( v226.m256i_i64[0] != -1 )
        {
LABEL_200:
          *(_OWORD *)&v238[80] = v230;
          *(_OWORD *)&v238[64] = v229;
          *(_OWORD *)&v238[48] = v228;
          *(_OWORD *)&v238[32] = v227;
          *(__m256i *)v238 = v226;
          v103 = v207;
          *(_QWORD *)v242 = 0;
          *(_QWORD *)&v242[8] = 1;
          *(_QWORD *)&v242[16] = 0;
          *(_QWORD *)&v231[16] = 1610612768;
          *(_QWORD *)v231 = v242;
          *(_QWORD *)&v231[8] = &off_141AA1A90;
          if ( (unsigned __int8)sub_140D76130(v238, v231) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v253,
              (unsigned int)&unk_141A9F540,
              (__int64)&off_141AA1B48);
          v243 = *(__int64 **)&v242[8];
          v249 = *(_QWORD *)v242;
          v147 = *(_OWORD *)&v242[8];
          sub_1407D7360((__int128 *)v242, a2, (unsigned int)v19);
          if ( *(_DWORD *)v242 != -1 )
          {
            *(_OWORD *)&v231[80] = *(_OWORD *)&v242[80];
            *(_OWORD *)&v231[64] = *(_OWORD *)&v242[64];
            *(_OWORD *)&v231[48] = *(_OWORD *)&v242[48];
            *(_OWORD *)&v231[32] = *(_OWORD *)&v242[32];
            *(_OWORD *)&v231[16] = *(_OWORD *)&v242[16];
            *(_OWORD *)v231 = *(_OWORD *)v242;
            if ( *(_QWORD *)off_14223FF10 >= 2u )
            {
              v208[0] = v231;
              v208[1] = sub_140D76130;
              *(_QWORD *)&v209 = aCodexmateLibCo_49;
              *((_QWORD *)&v209 + 1) = 45;
              *(_QWORD *)&v210 = aCodexmateLibCo_49;
              *((_QWORD *)&v210 + 1) = 45;
              *(_QWORD *)&v211 = &off_141AA1958;
              sub_140AF72B0(&unk_141AA1920, v208, 2, &v209);
            }
            sub_140D8A3A0(v231);
          }
          if ( v249 )
            sub_140001660(v243, v249, 1);
          *(_QWORD *)v231 = &v207;
          *(_QWORD *)&v231[8] = sub_140191200;
          *(_QWORD *)&v231[16] = v238;
          *(_QWORD *)&v231[24] = sub_140D76130;
          sub_1416DAFA0(v242, &unk_141A9B651, v231);
          sub_140DB20C0(
            (unsigned int)v19,
            aCommitFailed,
            13,
            v242,
            13,
            v103,
            *((_QWORD *)&v103 + 1),
            v147,
            *((_QWORD *)&v147 + 1));
          v105 = *(_QWORD *)&v238[8];
          v104 = *(_QWORD *)v238;
          v107 = *(_QWORD *)&v238[24];
          v106 = *(_OWORD **)&v238[16];
          v209 = *(_OWORD *)&v238[32];
          v210 = *(_OWORD *)&v238[48];
          v211 = *(_OWORD *)&v238[64];
          v212 = *(_OWORD *)&v238[80];
          sub_140D8A7D0(&v219);
          v108 = 1;
          goto LABEL_208;
        }
        v255 = 1;
        v254 = 1;
        v112 = sub_1407B92D0(v226.m256i_i64[1]);
        if ( v112 )
        {
          v115 = v112 & 3;
          v249 = v112;
          switch ( v112 & 3 )
          {
            case 0uLL:
              LOBYTE(v112) = *(_BYTE *)(v112 + 16);
              break;
            case 1uLL:
              LOBYTE(v112) = *(_BYTE *)(v112 + 31);
              break;
            case 2uLL:
              v246 = 1;
              v118 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v114, v113) + 8);
              v246 = 1;
              LOBYTE(v112) = v118(HIDWORD(v249));
              break;
            case 3uLL:
              v112 >>= 32;
              break;
          }
          v242[0] = v112;
          *(_QWORD *)v231 = v242;
          *(_QWORD *)&v231[8] = sub_140EDB0F0;
          v246 = 1;
          sub_1416DAFA0(v195, &unk_141A9B46E, v231);
          v246 = 1;
          sub_140DB20C0((unsigned int)v19, aCommitSyncUnco, 23, v195, v131, v138, v140, v142, v148);
          v119 = *((_QWORD *)a2 + 97);
          v120 = *((_QWORD *)a2 + 98);
          v246 = 1;
          sub_1407D3B80(
            v119,
            v120,
            (_DWORD)v19,
            (unsigned int)&unk_141A4A03B,
            23,
            v207,
            *((__int64 *)&v207 + 1),
            (__int64)&unk_141A4A42A,
            28);
          v226.m256i_i64[2] = v222;
          *(_OWORD *)v226.m256i_i8 = v221;
          sub_1407D7410(v231);
          *(_QWORD *)v238 = 0;
          *(_QWORD *)&v238[8] = 1;
          *(_QWORD *)&v238[16] = 0;
          *(_QWORD *)&v242[16] = 1610612768;
          *(_QWORD *)v242 = v238;
          *(_QWORD *)&v242[8] = &off_141AA1A90;
          if ( (unsigned __int8)sub_140D76130(v231, v242) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v253,
              (unsigned int)&unk_141A9F540,
              (__int64)&off_141AA1B48);
          v218 = *(_QWORD *)&v238[8];
          v243 = *(__int64 **)v238;
          v121 = *(_QWORD *)&v238[16];
          v122 = v226.m256i_i64[2];
          if ( v226.m256i_i64[2] == v226.m256i_i64[0] )
            sub_141939F90(&v226);
          v123 = v226.m256i_i64[1];
          v124 = 3 * v122;
          *(_QWORD *)(v226.m256i_i64[1] + 8 * v124) = v243;
          *(_QWORD *)(v123 + 8 * v124 + 8) = v218;
          *(_QWORD *)(v123 + 8 * v124 + 16) = v121;
          v226.m256i_i64[2] = v122 + 1;
          sub_140D8A3A0(v231);
          v209 = v219;
          v210 = *(_OWORD *)v220;
          v211 = *(_OWORD *)&v220[16];
          v212 = *(_OWORD *)&v220[32];
          v106 = (_OWORD *)v226.m256i_i64[1];
          v105 = v226.m256i_i64[0];
          v107 = v226.m256i_i64[2];
          if ( (unsigned int)(v115 - 2) >= 2 && v115 )
          {
            *(_QWORD *)&v231[8] = v249 - 1;
            v231[0] = 3;
            v255 = 0;
            v254 = 0;
            sub_1416EBAD0(&v231[8]);
          }
          v104 = 2;
          goto LABEL_234;
        }
        if ( (_QWORD)v222 )
        {
          v255 = 1;
          v254 = 1;
          sub_1406C5480((unsigned int)v231, DWORD2(v221), v222, (unsigned int)&unk_141A9B28E, 3);
          v243 = *(__int64 **)&v231[8];
          v249 = *(_QWORD *)v231;
          sub_1407D7100(
            (unsigned int)v242,
            (_DWORD)a2,
            (_DWORD)v19,
            v207,
            *((__int64 *)&v207 + 1),
            *(__int64 *)&v231[8],
            *(__int64 *)&v231[16]);
          if ( *(_DWORD *)v242 != -1 )
          {
            *(_OWORD *)&v231[80] = *(_OWORD *)&v242[80];
            *(_OWORD *)&v231[64] = *(_OWORD *)&v242[64];
            *(_OWORD *)&v231[48] = *(_OWORD *)&v242[48];
            *(_OWORD *)&v231[32] = *(_OWORD *)&v242[32];
            *(_OWORD *)&v231[16] = *(_OWORD *)&v242[16];
            *(_OWORD *)v231 = *(_OWORD *)v242;
            if ( *(_QWORD *)off_14223FF10 >= 2u )
            {
              v226.m256i_i64[0] = (__int64)v231;
              v226.m256i_i64[1] = (__int64)sub_140D76130;
              *(_QWORD *)v238 = aCodexmateLibCo_49;
              *(_QWORD *)&v238[8] = 45;
              *(_QWORD *)&v238[16] = aCodexmateLibCo_49;
              *(_QWORD *)&v238[24] = 45;
              *(_QWORD *)&v238[32] = &off_141A9B5E8;
              sub_140AF72B0(&unk_141A9B5A6, &v226, 2, v238);
            }
            sub_140D8A3A0(v231);
          }
          if ( v249 )
            sub_140001660(v243, v249, 1);
          v255 = 1;
          v254 = 1;
          v116 = sub_1416AED20(&v213);
          *(_OWORD *)v242 = 0x3E8 * (unsigned __int128)(unsigned __int64)v116 + v117 / 0xF4240uLL;
          *(_QWORD *)v238 = v222;
          *(_QWORD *)v231 = &v207;
          *(_QWORD *)&v231[8] = sub_140191200;
          *(_QWORD *)&v231[16] = v242;
          *(_QWORD *)&v231[24] = sub_1416E85A0;
          *(_QWORD *)&v231[32] = v238;
          *(_QWORD *)&v231[40] = sub_1416EBAE0;
          v255 = 1;
          v254 = 1;
          sub_1416DAFA0(v194, &unk_141A9B600, v231);
          v255 = 1;
          v254 = 1;
          sub_140DB20C0((unsigned int)v19, aDegraded, 8, v194, v132, v139, v141, v142, v148);
          v212 = *(_OWORD *)&v220[32];
          v211 = *(_OWORD *)&v220[16];
          v210 = *(_OWORD *)v220;
          v209 = v219;
          v106 = *((_OWORD **)&v221 + 1);
          v105 = v221;
          v104 = 1;
          v107 = v222;
          goto LABEL_234;
        }
        v255 = 1;
        v254 = 1;
        sub_1407D2600(v242, a2, (unsigned int)v19);
        if ( *(_DWORD *)v242 == -1 )
        {
          v255 = 1;
          v254 = 1;
          v127 = sub_1416AED20(&v213);
          *(_OWORD *)v242 = 0x3E8 * (unsigned __int128)(unsigned __int64)v127 + v128 / 0xF4240uLL;
          *(_QWORD *)v231 = &v207;
          *(_QWORD *)&v231[8] = sub_140191200;
          *(_QWORD *)&v231[16] = v242;
          *(_QWORD *)&v231[24] = sub_1416E85A0;
          v255 = 1;
          v254 = 1;
          sub_1416DAFA0(v206, &unk_141A9B581, v231);
          v255 = 1;
          v254 = 1;
          sub_140DB20C0((unsigned int)v19, aStable, 6, v206, v131, v138, v140, v142, v148);
          v106 = *((_OWORD **)&v219 + 1);
          v105 = v219;
          v107 = *(_QWORD *)v220;
          v209 = *(_OWORD *)&v220[8];
          v210 = *(_OWORD *)&v220[24];
          *(_QWORD *)&v211 = *(_QWORD *)&v220[40];
          sub_1400290B0(&v221);
          v104 = 0;
          goto LABEL_234;
        }
        *(_OWORD *)&v231[80] = *(_OWORD *)&v242[80];
        *(_OWORD *)&v231[64] = *(_OWORD *)&v242[64];
        *(_OWORD *)&v231[48] = *(_OWORD *)&v242[48];
        *(_OWORD *)&v231[32] = *(_OWORD *)&v242[32];
        *(_OWORD *)&v231[16] = *(_OWORD *)&v242[16];
        *(_OWORD *)v231 = *(_OWORD *)v242;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          v226.m256i_i64[0] = (__int64)v231;
          v226.m256i_i64[1] = (__int64)sub_140D76130;
          *(_QWORD *)v238 = aCodexmateLibCo_49;
          *(_QWORD *)&v238[8] = 45;
          *(_QWORD *)&v238[16] = aCodexmateLibCo_49;
          *(_QWORD *)&v238[24] = 45;
          *(_QWORD *)&v238[32] = &off_141A9B500;
          v239 = 1;
          sub_140AF72B0(&unk_141A9B48D, &v226, 2, v238);
        }
        *(_OWORD *)&v238[48] = *(_OWORD *)&v220[32];
        *(_OWORD *)&v238[32] = *(_OWORD *)&v220[16];
        *(_OWORD *)&v238[16] = *(_OWORD *)v220;
        *(_OWORD *)v238 = v219;
        v249 = sub_14017AA90();
        v226.m256i_i64[0] = (__int64)v231;
        v226.m256i_i64[1] = (__int64)sub_140D76130;
        sub_1416DAFA0(&v196, &unk_141A9B545, &v226);
        v106 = (_OWORD *)v249;
        *(_QWORD *)(v249 + 16) = v197;
        *v106 = v196;
        v209 = *(_OWORD *)v238;
        v210 = *(_OWORD *)&v238[16];
        v211 = *(_OWORD *)&v238[32];
        v212 = *(_OWORD *)&v238[48];
        v255 = 0;
        v254 = 1;
        sub_140D8A3A0(v231);
        v105 = 1;
        v108 = 0;
        v107 = 1;
        v104 = 1;
LABEL_208:
        sub_1402346F0(&v221);
        if ( (_QWORD)v221 )
          sub_140001660(*((_QWORD *)&v221 + 1), 24 * v221, 8);
        if ( v108 )
        {
          v18 = v209;
          v109 = v210;
          v110 = v211;
          *(_OWORD *)(a1 + 80) = v212;
          *(_OWORD *)(a1 + 64) = v110;
          *(_OWORD *)(a1 + 48) = v109;
          *(_OWORD *)(a1 + 32) = v18;
          v111 = v256;
          *(_QWORD *)a1 = v104;
          *(_QWORD *)(a1 + 8) = v105;
          *(_QWORD *)(a1 + 16) = v106;
          *(_QWORD *)(a1 + 24) = v107;
          *(_BYTE *)(a1 + 96) = 5;
          *(_BYTE *)(a1 + 97) = v111;
        }
        else
        {
LABEL_234:
          v18 = v209;
          v125 = v210;
          v126 = v211;
          *(_OWORD *)(a1 + 88) = v212;
          *(_OWORD *)(a1 + 72) = v126;
          *(_OWORD *)(a1 + 56) = v125;
          *(_OWORD *)(a1 + 40) = v18;
          *(_QWORD *)(a1 + 8) = v104;
          *(_QWORD *)(a1 + 16) = v105;
          *(_QWORD *)(a1 + 24) = v106;
          *(_QWORD *)(a1 + 32) = v107;
          *(_QWORD *)a1 = -1;
        }
        sub_140234510(&v215);
        if ( !v215 )
          goto LABEL_254;
        v93 = v216;
        v101 = 32 * v215;
LABEL_237:
        *(double *)&v18 = sub_140001660(v93, v101, 8);
        goto LABEL_254;
      }
      v248 = 1;
      v247 = 1;
      v236 = v216;
      sub_140226C80(v242, v216, v216 + 32 * v217);
      v48 = *(_QWORD *)&v242[8];
      v49 = *(_QWORD *)&v242[16];
      sub_1406C5480((unsigned int)v231, *(_DWORD *)&v242[8], *(_DWORD *)&v242[16], (unsigned int)&unk_141A9B28E, 3);
      v226.m256i_i64[2] = *(_QWORD *)&v231[16];
      *(_OWORD *)v226.m256i_i8 = *(_OWORD *)v231;
      if ( v49 )
      {
        v50 = (_QWORD *)(v48 + 8);
        do
        {
          v51 = *(v50 - 1);
          if ( v51 )
            sub_140001660(*v50, v51, 1);
          v50 += 3;
          --v49;
        }
        while ( v49 );
      }
      if ( *(_QWORD *)v242 )
        sub_140001660(v48, 24LL * *(_QWORD *)v242, 8);
      v251 = 1;
      v250 = 1;
      v52 = sub_1416AEBD0();
      v54 = v245[0];
      if ( v245[0] )
      {
        *(_QWORD *)&v238[16] = *(_QWORD *)&v190[88];
        *(_OWORD *)v238 = *(_OWORD *)&v190[72];
        *(_QWORD *)v231 = &v226;
        *(_QWORD *)&v231[8] = sub_1400015F0;
        v244 = 1;
        sub_1416DAFA0(v153, &unk_141A9B806, v231);
        v244 = 1;
        sub_1401E7610(v238, v153);
        *(_OWORD *)&v242[48] = *(_OWORD *)&v190[56];
        *(_OWORD *)&v242[32] = *(_OWORD *)&v190[40];
        *(_OWORD *)&v242[16] = *(_OWORD *)&v190[24];
        *(_OWORD *)v242 = *(_OWORD *)&v190[8];
        *(_OWORD *)&v242[64] = *(_OWORD *)v238;
        *(_QWORD *)&v242[80] = *(_QWORD *)&v238[16];
        v244 = 0;
        sub_140DB3370(
          (unsigned int)v231,
          (_DWORD)a2,
          v257,
          v225,
          *((__int64 *)&v225 + 1),
          (__int64)v242,
          a11,
          (__int64)a12,
          (__int64)&v161);
        v88 = v236;
        if ( v231[0] )
        {
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v231[88];
          *(_OWORD *)(a1 + 64) = *(_OWORD *)&v231[72];
          v18 = *(_OWORD *)&v231[8];
          v96 = *(_OWORD *)&v231[24];
          v97 = *(_OWORD *)&v231[40];
          *(_OWORD *)(a1 + 48) = *(_OWORD *)&v231[56];
          *(_OWORD *)(a1 + 32) = v97;
          *(_OWORD *)(a1 + 16) = v96;
          *(_OWORD *)a1 = v18;
          v98 = v256;
          *(_BYTE *)(a1 + 96) = 5;
          *(_BYTE *)(a1 + 97) = v98;
        }
        else
        {
          *(_OWORD *)(a1 + 88) = *(_OWORD *)&v231[88];
          *(_OWORD *)(a1 + 72) = *(_OWORD *)&v231[72];
          v18 = *(_OWORD *)&v231[8];
          v99 = *(_OWORD *)&v231[24];
          v100 = *(_OWORD *)&v231[40];
          *(_OWORD *)(a1 + 56) = *(_OWORD *)&v231[56];
          *(_OWORD *)(a1 + 40) = v100;
          *(_OWORD *)(a1 + 24) = v99;
          *(_OWORD *)(a1 + 8) = v18;
          *(_QWORD *)a1 = -1;
        }
        goto LABEL_191;
      }
      if ( v223 )
      {
        if ( (unsigned __int8)v256 > 2u )
          goto LABEL_170;
      }
      else if ( (unsigned __int8)v256 > 2u || (v224 & 1) == 0 )
      {
        goto LABEL_170;
      }
      if ( (_DWORD)v249 == -1 )
      {
        v251 = 1;
        v250 = 1;
        v199 = sub_1416D0210(v52, v53, 12, 0, (__int64)&off_141AA1908);
        LODWORD(v249) = v61;
      }
      else
      {
        v59 = v53 < (unsigned int)v249;
        v60 = v52 < v199;
        if ( v52 == v199 )
          v60 = v59;
        if ( !v60 )
        {
LABEL_170:
          *(_QWORD *)v231 = &v257;
          *(_QWORD *)&v231[8] = sub_140ED78B0;
          *(_QWORD *)&v231[16] = &v226;
          *(_QWORD *)&v231[24] = sub_1400015F0;
          v251 = 1;
          v250 = 1;
          sub_1416DAFA0(&v157, &unk_141A9B7B8, v231);
          *(_OWORD *)&v231[8] = v157;
          *(_QWORD *)&v231[24] = v158;
          *(_QWORD *)v231 = 10;
          sub_140EDA570(v242, v231);
          v136 = *(_QWORD *)&v242[16];
          v249 = *(_QWORD *)&v242[8];
          v130 = *(_QWORD *)&v242[8];
          sub_140ED3800(a2);
          if ( *(_QWORD *)v242 )
            sub_140001660(v249, *(_QWORD *)v242, 1);
          *(_QWORD *)v238 = v47;
          *(_QWORD *)v242 = &v256;
          *(_QWORD *)&v242[8] = sub_1416E8600;
          *(_QWORD *)&v242[16] = v238;
          *(_QWORD *)&v242[24] = sub_1416EBAE0;
          sub_1416DAFA0(v152, &unk_141A9B7D9, v242);
          sub_140DB20C0(v257, aPostconditionF, 20, v152, v130, v136, v140, v142, v148);
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v231[80];
          *(_OWORD *)(a1 + 64) = *(_OWORD *)&v231[64];
          v18 = *(_OWORD *)v231;
          v85 = *(_OWORD *)&v231[16];
          v86 = *(_OWORD *)&v231[32];
          *(_OWORD *)(a1 + 48) = *(_OWORD *)&v231[48];
          *(_OWORD *)(a1 + 32) = v86;
          *(_OWORD *)(a1 + 16) = v85;
          *(_OWORD *)a1 = v18;
          v87 = v256;
          *(_BYTE *)(a1 + 96) = 4;
          *(_BYTE *)(a1 + 97) = v87;
          v88 = v236;
LABEL_191:
          if ( v226.m256i_i64[0] )
            *(double *)&v18 = sub_140001660(v226.m256i_i64[1], v226.m256i_i64[0], 1);
          sub_140234510(&v215);
          if ( v215 )
            *(double *)&v18 = sub_140001660(v88, 32 * v215, 8);
          if ( v54 )
            goto LABEL_254;
          sub_140D8A7D0(&v200);
          sub_1402346F0(&v204);
          v92 = v204;
          if ( !(_QWORD)v204 )
            goto LABEL_254;
          v93 = *((_QWORD *)&v204 + 1);
LABEL_198:
          v101 = 24 * v92;
          goto LABEL_237;
        }
      }
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)v242 = &v257;
        *(_QWORD *)&v242[8] = sub_140ED78B0;
        *(_QWORD *)&v242[16] = &v256;
        *(_QWORD *)&v242[24] = sub_1416E8600;
        *(_QWORD *)&v242[32] = &v226;
        *(_QWORD *)&v242[40] = sub_1400015F0;
        *(_QWORD *)&v231[48] = 2;
        *(_QWORD *)&v231[56] = aCodexmateLibCo_49;
        *(_QWORD *)&v231[64] = 45;
        *(_QWORD *)&v231[80] = &unk_141A9B843;
        *(_QWORD *)&v231[88] = v242;
        *(_QWORD *)v231 = 0;
        *(_QWORD *)&v231[8] = aCodexmateLibCo_49;
        *(_OWORD *)&v231[16] = 0x2Du;
        *(_QWORD *)&v231[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v231[40] = 35;
        *(_QWORD *)&v231[72] = 0x17D00000001LL;
        v251 = 1;
        v250 = 1;
        sub_141503E20(&v253, v231);
      }
      v251 = 1;
      v250 = 1;
      sub_1407D2B10(
        (unsigned int)v231,
        (_DWORD)a2,
        v257,
        (unsigned int)&unk_141A9B8A0,
        8,
        v225,
        *((__int64 *)&v225 + 1),
        v226.m256i_i64[1],
        v226.m256i_i64[2],
        0);
      if ( *(_QWORD *)v231 == -1 )
      {
        v251 = 1;
        v250 = 1;
        sub_1407B9160(*(_QWORD *)&v231[8]);
      }
      else
      {
        *(_QWORD *)&v242[88] = *(_QWORD *)&v231[88];
        *(_OWORD *)&v242[72] = *(_OWORD *)&v231[72];
        *(_OWORD *)&v242[56] = *(_OWORD *)&v231[56];
        *(_OWORD *)&v242[40] = *(_OWORD *)&v231[40];
        *(_OWORD *)&v242[24] = *(_OWORD *)&v231[24];
        *(_OWORD *)&v242[8] = *(_OWORD *)&v231[8];
        *(_QWORD *)v242 = *(_QWORD *)v231;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)v238 = v242;
          *(_QWORD *)&v238[8] = sub_140D76130;
          *(_QWORD *)&v231[48] = 2;
          *(_QWORD *)&v231[56] = aCodexmateLibCo_49;
          *(_QWORD *)&v231[64] = 45;
          *(_QWORD *)&v231[80] = &unk_141AA1920;
          *(_QWORD *)&v231[88] = v238;
          *(_QWORD *)v231 = 0;
          *(_QWORD *)&v231[8] = aCodexmateLibCo_49;
          *(_OWORD *)&v231[16] = 0x2Du;
          *(_QWORD *)&v231[32] = aSrcCoreRelayRo_1;
          *(_QWORD *)&v231[40] = 35;
          *(_QWORD *)&v231[72] = 0x22E00000001LL;
          sub_141503E20(&v253, v231);
        }
        v251 = 1;
        v250 = 1;
        sub_140D8A3A0(v242);
      }
      v62 = v236;
      if ( v226.m256i_i64[0] )
        sub_140001660(v226.m256i_i64[1], v226.m256i_i64[0], 1);
      v63 = (_QWORD *)(v62 + 8);
      do
      {
        v64 = *(v63 - 1);
        if ( v64 )
          sub_140001660(*v63, v64, 1);
        v63 += 4;
        --v47;
      }
      while ( v47 );
      if ( v215 )
        sub_140001660(v62, 32 * v215, 8);
      sub_140D8A7D0(&v200);
      v65 = *((_QWORD *)&v204 + 1);
      v66 = v205;
      if ( (_QWORD)v205 )
      {
        v67 = (_QWORD *)(*((_QWORD *)&v204 + 1) + 8LL);
        do
        {
          v20 = (__int64 *)*(v67 - 1);
          if ( v20 )
            sub_140001660(*v67, v20, 1);
          v67 += 3;
          --v66;
        }
        while ( v66 );
      }
      if ( (_QWORD)v204 )
        sub_140001660(v65, 24 * v204, 8);
      v23 = v218;
      v22 = v249;
      v24 = (char)v243;
    }
    else
    {
      v193 = *(_QWORD *)v231;
      if ( *(_QWORD *)&v231[96] != -1 )
      {
        v205 = *(_OWORD *)&v190[80];
        v204 = *(_OWORD *)&v190[64];
        v203 = *(_OWORD *)&v190[48];
        v202 = *(_OWORD *)&v190[32];
        v201 = *(_OWORD *)&v190[16];
        v200 = *(_OWORD *)v190;
        v222 = v189;
        v221 = v188;
        *(_OWORD *)&v220[32] = v187;
        *(_OWORD *)&v220[16] = v186;
        *(_OWORD *)v220 = *(_OWORD *)&v185.m256i_u64[2];
        v219 = *(_OWORD *)v185.m256i_i8;
        *(_QWORD *)v242 = &v200;
        *(_QWORD *)&v242[8] = sub_140D76130;
        *(_QWORD *)&v242[16] = &v219;
        *(_QWORD *)&v242[24] = sub_140D76130;
        sub_1416DAFA0(&v159, &unk_141A9B944, v242);
        *(_OWORD *)&v226.m256i_u64[1] = v159;
        v226.m256i_i64[3] = v160;
        v226.m256i_i64[0] = 10;
        *(_QWORD *)v238 = 0;
        *(_QWORD *)&v238[8] = 1;
        *(_QWORD *)&v238[16] = 0;
        *(_QWORD *)&v242[16] = 1610612768;
        *(_QWORD *)v242 = v238;
        *(_QWORD *)&v242[8] = &off_141AA1A90;
        if ( (unsigned __int8)sub_140D76130(&v226, v242) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v253,
            (unsigned int)&unk_141A9F540,
            (__int64)&off_141AA1B48);
        v243 = *(__int64 **)&v238[8];
        v249 = *(_QWORD *)v238;
        v145 = *(_OWORD *)&v238[8];
        v135 = v225;
        sub_1407D7360((__int128 *)v238, a2, v257);
        if ( *(_DWORD *)v238 != -1 )
        {
          *(_OWORD *)&v242[80] = *(_OWORD *)&v238[80];
          *(_OWORD *)&v242[64] = *(_OWORD *)&v238[64];
          *(_OWORD *)&v242[48] = *(_OWORD *)&v238[48];
          *(_OWORD *)&v242[32] = *(_OWORD *)&v238[32];
          *(_OWORD *)&v242[16] = *(_OWORD *)&v238[16];
          *(_OWORD *)v242 = *(_OWORD *)v238;
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            v206[0] = v242;
            v206[1] = sub_140D76130;
            *(_QWORD *)&v209 = aCodexmateLibCo_49;
            *((_QWORD *)&v209 + 1) = 45;
            *(_QWORD *)&v210 = aCodexmateLibCo_49;
            *((_QWORD *)&v210 + 1) = 45;
            *(_QWORD *)&v211 = &off_141AA1958;
            sub_140AF72B0(&unk_141AA1920, v206, 2, &v209);
          }
          sub_140D8A3A0(v242);
        }
        if ( v249 )
          sub_140001660(v243, v249, 1);
        *(_QWORD *)v242 = &v256;
        *(_QWORD *)&v242[8] = sub_1416E8600;
        *(_QWORD *)&v242[16] = &v226;
        *(_QWORD *)&v242[24] = sub_140D76130;
        sub_1416DAFA0(v154, &unk_141A9B8A8, v242);
        sub_140DB20C0(v257, aReconcileFaile, 16, v154, 6, v135, *((_QWORD *)&v135 + 1), v145, *((_QWORD *)&v145 + 1));
        *(_OWORD *)(a1 + 80) = v230;
        *(_OWORD *)(a1 + 64) = v229;
        v18 = *(_OWORD *)v226.m256i_i8;
        v79 = *(_OWORD *)&v226.m256i_u64[2];
        v80 = v227;
        *(_OWORD *)(a1 + 48) = v228;
        *(_OWORD *)(a1 + 32) = v80;
        *(_OWORD *)(a1 + 16) = v79;
        *(_OWORD *)a1 = v18;
        v81 = v256;
        *(_BYTE *)(a1 + 96) = 2;
        *(_BYTE *)(a1 + 97) = v81;
        sub_140D8A3A0(&v219);
        sub_140D8A3A0(&v200);
        goto LABEL_254;
      }
      v230 = *(_OWORD *)&v190[80];
      v229 = *(_OWORD *)&v190[64];
      v228 = *(_OWORD *)&v190[48];
      v227 = *(_OWORD *)&v190[32];
      v226 = *(__m256i *)v190;
      v41 = *(_DWORD *)&v231[104];
      v42 = v231[108];
      v43 = sub_1416AEBD0();
      if ( v245[0] )
        goto LABEL_133;
      if ( v41 )
      {
        if ( (unsigned __int8)v256 > 2u )
          goto LABEL_133;
      }
      else if ( (unsigned __int8)v256 > 2u || !v42 )
      {
        goto LABEL_133;
      }
      if ( (_DWORD)v249 == -1 )
      {
        v199 = sub_1416D0210(v43, v44, 12, 0, (__int64)&off_141AA1908);
        LODWORD(v249) = v57;
      }
      else
      {
        v55 = v44 < (unsigned int)v249;
        v56 = v43 < v199;
        if ( v43 == v199 )
          v56 = v55;
        if ( !v56 )
        {
LABEL_133:
          *(_QWORD *)v238 = 0;
          *(_QWORD *)&v238[8] = 1;
          *(_QWORD *)&v238[16] = 0;
          *(_QWORD *)&v242[16] = 1610612768;
          *(_QWORD *)v242 = v238;
          *(_QWORD *)&v242[8] = &off_141AA1A90;
          if ( (unsigned __int8)sub_140D76130(&v226, v242) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v253,
              (unsigned int)&unk_141A9F540,
              (__int64)&off_141AA1B48);
          v243 = *(__int64 **)&v238[8];
          v249 = *(_QWORD *)v238;
          sub_1407D2B10(
            (unsigned int)v242,
            (_DWORD)a2,
            v257,
            (unsigned int)aFailed_2,
            6,
            v225,
            *((__int64 *)&v225 + 1),
            *(__int64 *)&v238[8],
            *(__int64 *)&v238[16],
            0);
          if ( *(_QWORD *)v242 == -1 )
          {
            sub_1407B9160(*(_QWORD *)&v242[8]);
          }
          else
          {
            *(_QWORD *)&v238[88] = *(_QWORD *)&v242[88];
            *(_OWORD *)&v238[72] = *(_OWORD *)&v242[72];
            *(_OWORD *)&v238[56] = *(_OWORD *)&v242[56];
            *(_OWORD *)&v238[40] = *(_OWORD *)&v242[40];
            *(_OWORD *)&v238[24] = *(_OWORD *)&v242[24];
            *(_OWORD *)&v238[8] = *(_OWORD *)&v242[8];
            *(_QWORD *)v238 = *(_QWORD *)v242;
            if ( *(_QWORD *)off_14223FF10 >= 2u )
            {
              *(_QWORD *)&v219 = v238;
              *((_QWORD *)&v219 + 1) = sub_140D76130;
              *(_QWORD *)v242 = aCodexmateLibCo_49;
              *(_QWORD *)&v242[8] = 45;
              *(_QWORD *)&v242[16] = aCodexmateLibCo_49;
              *(_QWORD *)&v242[24] = 45;
              *(_QWORD *)&v242[32] = &off_141AA1958;
              sub_140AF72B0(&unk_141AA1920, &v219, 2, v242);
            }
            sub_140D8A3A0(v238);
          }
          if ( v249 )
            sub_140001660(v243, v249, 1);
          *(_QWORD *)v242 = &v256;
          *(_QWORD *)&v242[8] = sub_1416E8600;
          *(_QWORD *)&v242[16] = &v226;
          *(_QWORD *)&v242[24] = sub_140D76130;
          sub_1416DAFA0(&v162, &unk_141A9B8A8, v242);
          LOBYTE(v200) = v257;
          v249 = v163;
          v219 = v163;
          *(_QWORD *)v242 = &v200;
          *(_QWORD *)&v242[8] = sub_140ED78B0;
          *(_QWORD *)&v242[16] = &v219;
          *(_QWORD *)&v242[24] = sub_140191200;
          sub_1416DAFA0(v238, &unk_141A9B450, v242);
          sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aReconcileFaile, 16, (__int64)v238);
          if ( v162 )
            sub_140001660(v249, v162, 1);
          *(_OWORD *)(a1 + 80) = v230;
          *(_OWORD *)(a1 + 64) = v229;
          v18 = *(_OWORD *)v226.m256i_i8;
          v82 = *(_OWORD *)&v226.m256i_u64[2];
          v83 = v227;
          *(_OWORD *)(a1 + 48) = v228;
          *(_OWORD *)(a1 + 32) = v83;
          *(_OWORD *)(a1 + 16) = v82;
          *(_OWORD *)a1 = v18;
          v84 = v256;
          *(_BYTE *)(a1 + 96) = 2;
          *(_BYTE *)(a1 + 97) = v84;
          goto LABEL_254;
        }
      }
      *(_QWORD *)v238 = 0;
      *(_QWORD *)&v238[8] = 1;
      *(_QWORD *)&v238[16] = 0;
      *(_QWORD *)&v242[16] = 1610612768;
      *(_QWORD *)v242 = v238;
      *(_QWORD *)&v242[8] = &off_141AA1A90;
      v58 = sub_140D76130(&v226, v242);
      v24 = (char)v243;
      if ( v58 )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v253,
          (unsigned int)&unk_141A9F540,
          (__int64)&off_141AA1B48);
      *(_QWORD *)v220 = *(_QWORD *)&v238[16];
      v219 = *(_OWORD *)v238;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)v238 = &v257;
        *(_QWORD *)&v238[8] = sub_140ED78B0;
        *(_QWORD *)&v238[16] = &v256;
        *(_QWORD *)&v238[24] = sub_1416E8600;
        *(_QWORD *)&v238[32] = &v219;
        *(_QWORD *)&v238[40] = sub_1400015F0;
        *(_QWORD *)&v242[48] = 2;
        *(_QWORD *)&v242[56] = aCodexmateLibCo_49;
        *(_QWORD *)&v242[64] = 45;
        *(_QWORD *)&v242[80] = &unk_141A9B8D9;
        *(_QWORD *)&v242[88] = v238;
        *(_QWORD *)v242 = 0;
        *(_QWORD *)&v242[8] = aCodexmateLibCo_49;
        *(_OWORD *)&v242[16] = 0x2Du;
        *(_QWORD *)&v242[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v242[40] = 35;
        *(_QWORD *)&v242[72] = 0x12E00000001LL;
        sub_141503E20(&v253, v242);
      }
      sub_1407D2B10(
        (unsigned int)v242,
        (_DWORD)a2,
        v257,
        (unsigned int)&unk_141A9B8A0,
        8,
        v225,
        *((__int64 *)&v225 + 1),
        *((__int64 *)&v219 + 1),
        *(__int64 *)v220,
        0);
      if ( *(_QWORD *)v242 == -1 )
      {
        sub_1407B9160(*(_QWORD *)&v242[8]);
      }
      else
      {
        *(_QWORD *)&v238[88] = *(_QWORD *)&v242[88];
        *(_OWORD *)&v238[72] = *(_OWORD *)&v242[72];
        *(_OWORD *)&v238[56] = *(_OWORD *)&v242[56];
        *(_OWORD *)&v238[40] = *(_OWORD *)&v242[40];
        *(_OWORD *)&v238[24] = *(_OWORD *)&v242[24];
        *(_OWORD *)&v238[8] = *(_OWORD *)&v242[8];
        *(_QWORD *)v238 = *(_QWORD *)v242;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)&v200 = v238;
          *((_QWORD *)&v200 + 1) = sub_140D76130;
          *(_QWORD *)&v242[48] = 2;
          *(_QWORD *)&v242[56] = aCodexmateLibCo_49;
          *(_QWORD *)&v242[64] = 45;
          *(_QWORD *)&v242[80] = &unk_141AA1920;
          *(_QWORD *)&v242[88] = &v200;
          *(_QWORD *)v242 = 0;
          *(_QWORD *)&v242[8] = aCodexmateLibCo_49;
          *(_OWORD *)&v242[16] = 0x2Du;
          *(_QWORD *)&v242[32] = aSrcCoreRelayRo_1;
          *(_QWORD *)&v242[40] = 35;
          *(_QWORD *)&v242[72] = 0x22E00000001LL;
          sub_141503E20(&v253, v242);
        }
        sub_140D8A3A0(v238);
      }
      *(_QWORD *)v242 = &v256;
      *(_QWORD *)&v242[8] = sub_1416E8600;
      *(_QWORD *)&v242[16] = &v219;
      *(_QWORD *)&v242[24] = sub_1400015F0;
      sub_1416DAFA0(&v164, &unk_141A9B8A8, v242);
      LOBYTE(v209) = v257;
      v236 = v165;
      v200 = v165;
      *(_QWORD *)v242 = &v209;
      *(_QWORD *)&v242[8] = sub_140ED78B0;
      *(_QWORD *)&v242[16] = &v200;
      *(_QWORD *)&v242[24] = sub_140191200;
      sub_1416DAFA0(v238, &unk_141A9B450, v242);
      sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aReconcileRetry, 15, (__int64)v238);
      v22 = v249;
      if ( v164 )
        sub_140001660(v236, v164, 1);
      if ( (_QWORD)v219 )
        sub_140001660(*((_QWORD *)&v219 + 1), v219, 1);
      sub_140D8A3A0(&v226);
      v23 = v218;
    }
  }
  nullsub_1(v21, v20);
  v71 = (_OWORD *)sub_140001650(109, 1);
  if ( !v71 )
    sub_14196B2DB(1, 109);
  *(_OWORD *)((char *)v71 + 93) = *(__int128 *)((char *)&xmmword_141A9B6B4 + 13);
  v71[5] = xmmword_141A9B6B4;
  v71[4] = xmmword_141A9B6A4;
  v71[3] = xmmword_141A9B694;
  v71[2] = xmmword_141A9B684;
  qmemcpy(v71, "CODEX_TRANSITION_REENTRY_TIMEOUT", 32);
  *(_QWORD *)&v238[8] = 109;
  *(_QWORD *)&v238[16] = v71;
  *(_QWORD *)&v238[24] = 109;
  *(_QWORD *)v238 = 10;
  *(_QWORD *)v242 = 0;
  *(_QWORD *)&v242[8] = 1;
  *(_QWORD *)&v242[16] = 0;
  *(_QWORD *)&v231[16] = 1610612768;
  *(_QWORD *)v231 = v242;
  *(_QWORD *)&v231[8] = &off_141AA1A90;
  if ( (unsigned __int8)sub_140D76130(v238, v231) )
    sub_14196B5F0(
      (unsigned int)aADisplayImplem_11,
      55,
      (unsigned int)&v253,
      (unsigned int)&unk_141A9F540,
      (__int64)&off_141AA1B48);
  v249 = *(_QWORD *)v242;
  v149 = *(_QWORD *)&v242[16];
  v243 = *(__int64 **)&v242[8];
  v143 = *(_QWORD *)&v242[8];
  v133 = v225;
  sub_1407D7360((__int128 *)v242, a2, v257);
  if ( *(_DWORD *)v242 != -1 )
  {
    *(_OWORD *)&v231[80] = *(_OWORD *)&v242[80];
    *(_OWORD *)&v231[64] = *(_OWORD *)&v242[64];
    *(_OWORD *)&v231[48] = *(_OWORD *)&v242[48];
    *(_OWORD *)&v231[32] = *(_OWORD *)&v242[32];
    *(_OWORD *)&v231[16] = *(_OWORD *)&v242[16];
    *(_OWORD *)v231 = *(_OWORD *)v242;
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      *(_QWORD *)&v219 = v231;
      *((_QWORD *)&v219 + 1) = sub_140D76130;
      v226.m256i_i64[0] = (__int64)aCodexmateLibCo_49;
      v226.m256i_i64[1] = 45;
      v226.m256i_i64[2] = (__int64)aCodexmateLibCo_49;
      v226.m256i_i64[3] = 45;
      *(_QWORD *)&v227 = &off_141AA1958;
      sub_140AF72B0(&unk_141AA1920, &v219, 2, &v226);
    }
    sub_140D8A3A0(v231);
  }
  if ( v249 )
    sub_140001660(v243, v249, 1);
  *(_QWORD *)v242 = 0;
  *(_QWORD *)&v242[8] = 1;
  *(_QWORD *)&v242[16] = 0;
  *(_QWORD *)&v231[16] = 1610612768;
  *(_QWORD *)v231 = v242;
  *(_QWORD *)&v231[8] = &off_141AA1A90;
  if ( (unsigned __int8)sub_140D76130(v238, v231) )
    sub_14196B5F0(
      (unsigned int)aADisplayImplem_11,
      55,
      (unsigned int)&v253,
      (unsigned int)&unk_141A9F540,
      (__int64)&off_141AA1B48);
  v226.m256i_i64[2] = *(_QWORD *)&v242[16];
  *(_OWORD *)v226.m256i_i8 = *(_OWORD *)v242;
  sub_140DB20C0(v257, aRetryExhausted, 15, &v226, 6, v133, *((_QWORD *)&v133 + 1), v143, v149);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)&v238[80];
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v238[64];
  v18 = *(_OWORD *)v238;
  v72 = *(_OWORD *)&v238[16];
  v73 = *(_OWORD *)&v238[32];
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v238[48];
  *(_OWORD *)(a1 + 32) = v73;
  *(_OWORD *)(a1 + 16) = v72;
  *(_OWORD *)a1 = v18;
  *(_WORD *)(a1 + 96) = 772;
LABEL_254:
  *(_QWORD *)&result = v18;
  return result;
}
