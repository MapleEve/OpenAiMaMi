// win 1.2.7 latest-exe | module src/core/relay/router_transition.rs | ea 0x140dbc3e0 | successor of pre-update 0x140bc9880 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.739, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
double __fastcall sub_140DBC3E0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5,
        char a6,
        __int64 *a7,
        __int64 *a8,
        __int64 a9,
        char *a10)
{
  __int128 v13; // kr00_16
  __int128 v14; // kr10_16
  __int128 v15; // kr20_16
  __int128 v16; // kr30_16
  __int128 v17; // xmm0
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // al
  char v21; // bl
  int v22; // esi
  __int128 v23; // kr40_16
  int v24; // edx
  char v25; // r14
  __int64 v26; // rax
  unsigned int v27; // edx
  int v28; // r13d
  __int8 v29; // r13
  int v30; // ebx
  int v31; // edx
  int v32; // r15d
  int v33; // r14d
  _BYTE *v34; // r15
  int v35; // r14d
  char v36; // bl
  unsigned __int64 v37; // rax
  unsigned int v38; // edx
  int v39; // r9d
  __int64 v40; // rdx
  __int64 v41; // rbx
  __int64 v42; // r15
  __int64 v43; // r14
  _QWORD *v44; // r13
  __int64 v45; // rdx
  unsigned __int64 v46; // rax
  unsigned int v47; // edx
  char v48; // r14
  bool v49; // cl
  bool v50; // dl
  unsigned int v51; // edx
  bool v52; // cl
  bool v53; // dl
  unsigned int v54; // edx
  __int64 v55; // r15
  _QWORD *v56; // r14
  __int64 v57; // rdx
  __int64 v58; // rbx
  __int64 v59; // r14
  _QWORD *v60; // r15
  _OWORD *v61; // rax
  __int128 v62; // xmm1
  __int128 v63; // xmm2
  char v64; // al
  __int64 v65; // rsi
  __int64 v66; // rax
  unsigned int v67; // edx
  __int128 v68; // xmm1
  __int128 v69; // xmm2
  __int8 v70; // al
  __int128 v71; // xmm1
  __int128 v72; // xmm2
  __int128 v73; // xmm1
  __int128 v74; // xmm2
  __int8 v75; // al
  __int128 v76; // xmm1
  __int128 v77; // xmm2
  __int8 v78; // al
  __int128 v79; // xmm1
  __int128 v80; // xmm2
  __int8 v81; // al
  __int64 v82; // rdi
  __int128 v83; // xmm1
  __int128 v84; // xmm2
  __int8 v85; // al
  __int64 v86; // rax
  __int64 v87; // rcx
  __int128 v88; // krA0_16
  int v89; // edx
  __int128 v90; // xmm1
  __int128 v91; // xmm2
  __int8 v92; // al
  __int128 v93; // xmm1
  __int128 v94; // xmm2
  __int64 v95; // rdx
  char v96; // al
  __int128 v97; // krB0_16
  __int64 v98; // rbx
  __int64 v99; // rdi
  _OWORD *v100; // r12
  __int64 v101; // r14
  char v102; // r15
  __int128 v103; // xmm1
  __int128 v104; // xmm2
  __int8 v105; // al
  unsigned __int64 v106; // rax
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
  void *v134; // [rsp+38h] [rbp-48h]
  __int64 v135; // [rsp+38h] [rbp-48h]
  __int64 v136; // [rsp+38h] [rbp-48h]
  __int128 v137; // [rsp+38h] [rbp-48h]
  __int64 v138; // [rsp+38h] [rbp-48h]
  __int128 v139; // [rsp+38h] [rbp-48h]
  __int64 v140; // [rsp+40h] [rbp-40h]
  __int64 v141; // [rsp+40h] [rbp-40h]
  __int64 v142; // [rsp+40h] [rbp-40h]
  __int64 v143; // [rsp+40h] [rbp-40h]
  _BYTE v144[24]; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v145[24]; // [rsp+70h] [rbp-10h] BYREF
  _BYTE v146[24]; // [rsp+88h] [rbp+8h] BYREF
  _BYTE v147[24]; // [rsp+A0h] [rbp+20h] BYREF
  _BYTE v148[24]; // [rsp+B8h] [rbp+38h] BYREF
  __int128 v149; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v150; // [rsp+E0h] [rbp+60h]
  __int128 v151; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v152; // [rsp+F8h] [rbp+78h]
  __int128 v153; // [rsp+100h] [rbp+80h] BYREF
  __int64 v154; // [rsp+110h] [rbp+90h] BYREF
  __int128 v155; // [rsp+118h] [rbp+98h]
  __int64 v156; // [rsp+128h] [rbp+A8h] BYREF
  __int128 v157; // [rsp+130h] [rbp+B0h]
  __int64 v158; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v159; // [rsp+148h] [rbp+C8h]
  __int64 v160; // [rsp+158h] [rbp+D8h] BYREF
  __int128 v161; // [rsp+160h] [rbp+E0h]
  __int64 v162; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v163; // [rsp+178h] [rbp+F8h]
  __int128 v164; // [rsp+188h] [rbp+108h]
  __int128 v165; // [rsp+198h] [rbp+118h]
  __int128 v166; // [rsp+1A8h] [rbp+128h]
  __int64 v167; // [rsp+1B8h] [rbp+138h]
  __int64 v168; // [rsp+1C0h] [rbp+140h] BYREF
  int v169; // [rsp+1C8h] [rbp+148h]
  __int64 v170; // [rsp+1D0h] [rbp+150h]
  __int64 v171; // [rsp+1D8h] [rbp+158h]
  __int64 v172; // [rsp+1E0h] [rbp+160h]
  __int64 v173; // [rsp+1E8h] [rbp+168h]
  unsigned __int8 *v174; // [rsp+1F0h] [rbp+170h]
  __int64 v175; // [rsp+1F8h] [rbp+178h]
  __m256i v176; // [rsp+200h] [rbp+180h] BYREF
  __int128 v177; // [rsp+220h] [rbp+1A0h]
  __int128 v178; // [rsp+230h] [rbp+1B0h]
  __int128 v179; // [rsp+240h] [rbp+1C0h]
  __int128 v180; // [rsp+250h] [rbp+1D0h]
  _BYTE v181[96]; // [rsp+260h] [rbp+1E0h]
  _DWORD *v182; // [rsp+2C8h] [rbp+248h]
  _BYTE *v183; // [rsp+2D0h] [rbp+250h]
  __int64 v184; // [rsp+2D8h] [rbp+258h]
  __int64 v185; // [rsp+2E0h] [rbp+260h]
  __int64 v186; // [rsp+2E8h] [rbp+268h]
  _BYTE v187[21]; // [rsp+2F0h] [rbp+270h] BYREF
  _BYTE v188[21]; // [rsp+308h] [rbp+288h] BYREF
  __int128 v189; // [rsp+320h] [rbp+2A0h] BYREF
  __int64 v190; // [rsp+330h] [rbp+2B0h]
  __int64 v191; // [rsp+338h] [rbp+2B8h]
  unsigned __int64 v192; // [rsp+340h] [rbp+2C0h]
  _QWORD v193[3]; // [rsp+348h] [rbp+2C8h] BYREF
  __int128 v194; // [rsp+360h] [rbp+2E0h] BYREF
  __int128 v195; // [rsp+370h] [rbp+2F0h]
  __int128 v196; // [rsp+380h] [rbp+300h]
  __int128 v197; // [rsp+390h] [rbp+310h]
  __int128 v198; // [rsp+3A0h] [rbp+320h] BYREF
  __int128 v199; // [rsp+3B0h] [rbp+330h]
  __int128 v200; // [rsp+3C8h] [rbp+348h] BYREF
  __int64 v201; // [rsp+3D8h] [rbp+358h]
  _QWORD v202[2]; // [rsp+3E0h] [rbp+360h] BYREF
  __int128 v203; // [rsp+3F0h] [rbp+370h] BYREF
  __int128 v204; // [rsp+400h] [rbp+380h]
  __int128 v205; // [rsp+410h] [rbp+390h]
  __int128 v206; // [rsp+420h] [rbp+3A0h]
  __int64 v207; // [rsp+438h] [rbp+3B8h] BYREF
  int v208; // [rsp+440h] [rbp+3C0h]
  __int64 v209; // [rsp+448h] [rbp+3C8h] BYREF
  __int64 v210; // [rsp+450h] [rbp+3D0h]
  __int64 v211; // [rsp+458h] [rbp+3D8h]
  int v212; // [rsp+460h] [rbp+3E0h] BYREF
  char v213; // [rsp+464h] [rbp+3E4h] BYREF
  __int64 v214; // [rsp+468h] [rbp+3E8h]
  __int128 v215; // [rsp+470h] [rbp+3F0h] BYREF
  _BYTE v216[48]; // [rsp+480h] [rbp+400h] BYREF
  __int128 v217; // [rsp+4B0h] [rbp+430h] BYREF
  __int128 v218; // [rsp+4C0h] [rbp+440h]
  unsigned int v219; // [rsp+4D4h] [rbp+454h]
  __int128 v220; // [rsp+4D8h] [rbp+458h] BYREF
  __int64 v221; // [rsp+4E8h] [rbp+468h]
  __m256i v222; // [rsp+4F0h] [rbp+470h] BYREF
  __int128 v223; // [rsp+510h] [rbp+490h]
  __int128 v224; // [rsp+520h] [rbp+4A0h]
  __int128 v225; // [rsp+530h] [rbp+4B0h]
  __int128 v226; // [rsp+540h] [rbp+4C0h]
  _BYTE v227[128]; // [rsp+550h] [rbp+4D0h] BYREF
  __int128 v228; // [rsp+5D0h] [rbp+550h]
  __int128 v229; // [rsp+5E0h] [rbp+560h]
  __int128 v230; // [rsp+5F0h] [rbp+570h]
  __int128 v231; // [rsp+600h] [rbp+580h]
  char v232; // [rsp+61Fh] [rbp+59Fh] BYREF
  _BYTE v233[96]; // [rsp+620h] [rbp+5A0h] BYREF
  char v234; // [rsp+68Dh] [rbp+60Dh]
  char v235; // [rsp+68Eh] [rbp+60Eh]
  char v236; // [rsp+68Fh] [rbp+60Fh]
  _BYTE v237[96]; // [rsp+690h] [rbp+610h] BYREF
  char v238; // [rsp+6FFh] [rbp+67Fh]
  __int64 v239; // [rsp+700h] [rbp+680h]
  _BYTE v240[2]; // [rsp+70Eh] [rbp+68Eh] BYREF
  unsigned __int64 v241; // [rsp+710h] [rbp+690h]
  char v242; // [rsp+71Dh] [rbp+69Dh]
  char v243; // [rsp+71Eh] [rbp+69Eh]
  char v244; // [rsp+71Fh] [rbp+69Fh]
  char v245; // [rsp+720h] [rbp+6A0h]
  char v246; // [rsp+721h] [rbp+6A1h]
  char v247; // [rsp+722h] [rbp+6A2h] BYREF
  char v248; // [rsp+723h] [rbp+6A3h]
  char v249; // [rsp+724h] [rbp+6A4h]
  char v250; // [rsp+725h] [rbp+6A5h]
  __int8 v251; // [rsp+726h] [rbp+6A6h] BYREF
  unsigned __int8 v252; // [rsp+727h] [rbp+6A7h] BYREF
  __int64 v253; // [rsp+728h] [rbp+6A8h]

  v253 = -2;
  v252 = a3;
  v240[0] = 0;
  *(_QWORD *)&v220 = aRouterToggle_1;
  *((_QWORD *)&v220 + 1) = 13;
  sub_1407D5CC0(v227);
  v13 = *(_OWORD *)&v227[32];
  *(_OWORD *)v233 = *(_OWORD *)&v227[48];
  *(_OWORD *)&v233[16] = *(_OWORD *)&v227[64];
  if ( *(_QWORD *)v227 != -1 )
  {
    *(_OWORD *)&v237[80] = *(_OWORD *)&v227[80];
    *(_QWORD *)&v237[16] = *(_QWORD *)&v227[16];
    *(_OWORD *)&v237[24] = *(_OWORD *)&v227[24];
    *(_QWORD *)&v237[40] = *(_QWORD *)&v227[40];
    *(_OWORD *)&v237[48] = *(_OWORD *)v233;
    *(_OWORD *)&v237[64] = *(_OWORD *)&v233[16];
    *(_OWORD *)v237 = *(_OWORD *)v227;
LABEL_3:
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v237[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v237[64];
    v14 = *(_OWORD *)v237;
    v15 = *(_OWORD *)&v237[16];
    v16 = *(_OWORD *)&v237[32];
    *(_QWORD *)&v17 = *(_QWORD *)&v237[48];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v237[48];
    *(_OWORD *)(a1 + 32) = v16;
    *(_OWORD *)(a1 + 16) = v15;
    *(_OWORD *)a1 = v14;
LABEL_4:
    *(_WORD *)(a1 + 96) = 0;
    goto LABEL_254;
  }
  if ( *(_QWORD *)&v227[8] != -1 )
  {
    if ( *(_QWORD *)&v227[8] )
      sub_140001660(*(_QWORD *)&v227[16], *(_QWORD *)&v227[8], 1);
    if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(*((_QWORD *)&v13 + 1), v13, 1);
  }
  sub_1407E52E0(v227);
  if ( *(_DWORD *)v227 == -1 )
  {
    sub_1408D1F30(v237, a2);
    if ( *(_QWORD *)v237 != -1 )
      goto LABEL_3;
  }
  else
  {
    *(_OWORD *)&v237[80] = *(_OWORD *)&v227[80];
    *(_OWORD *)&v237[64] = *(_OWORD *)&v227[64];
    *(_OWORD *)&v237[48] = *(_OWORD *)&v227[48];
    *(_OWORD *)&v237[32] = *(_OWORD *)&v227[32];
    *(_OWORD *)&v237[16] = *(_OWORD *)&v227[16];
    *(_OWORD *)v237 = *(_OWORD *)v227;
    if ( *(_QWORD *)v227 != -1 )
      goto LABEL_3;
  }
  sub_141597890(&v153);
  *(_QWORD *)v227 = v240;
  *(_QWORD *)&v227[8] = sub_140EDAE50;
  *(_QWORD *)&v227[16] = &v220;
  *(_QWORD *)&v227[24] = sub_140191200;
  sub_1416DAFA0(&v162, &unk_141A9B638, v227);
  v222.m256i_i8[0] = v252;
  v241 = v163;
  *(_OWORD *)v233 = v163;
  *(_QWORD *)v227 = &v222;
  *(_QWORD *)&v227[8] = sub_140ED78B0;
  *(_QWORD *)&v227[16] = v233;
  *(_QWORD *)&v227[24] = sub_140191200;
  sub_1416DAFA0(v237, &unk_141A9B450, v227);
  sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStart_2, 5, (__int64)v237);
  if ( v162 )
    sub_140001660(v241, v162, 1);
  if ( !v240[0] )
  {
    sub_14080DD30(&v222, a4, 0);
    if ( v222.m256i_i32[0] != -1 )
    {
      *(_OWORD *)&v233[80] = v226;
      *(_OWORD *)&v233[64] = v225;
      *(_OWORD *)&v233[48] = v224;
      *(_OWORD *)&v233[32] = v223;
      *(__m256i *)v233 = v222;
      *(_QWORD *)v237 = 0;
      *(_QWORD *)&v237[8] = 1;
      *(_QWORD *)&v237[16] = 0;
      *(_QWORD *)&v227[16] = 1610612768;
      *(_QWORD *)v227 = v237;
      *(_QWORD *)&v227[8] = &off_141AA1A90;
      if ( (unsigned __int8)sub_140D76130(v233, v227) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v247,
          (unsigned int)&unk_141A9F540,
          (__int64)&off_141AA1B48);
      v239 = *(_QWORD *)&v237[8];
      v241 = *(_QWORD *)v237;
      sub_1407D2B10(
        (unsigned int)v227,
        a2,
        v252,
        (unsigned int)aFailed_2,
        6,
        v220,
        *((__int64 *)&v220 + 1),
        *(__int64 *)&v237[8],
        *(__int64 *)&v237[16],
        0);
      if ( *(_QWORD *)v227 == -1 )
      {
        sub_1407B9160(*(_QWORD *)&v227[8]);
      }
      else
      {
        *(_QWORD *)&v237[88] = *(_QWORD *)&v227[88];
        *(_OWORD *)&v237[72] = *(_OWORD *)&v227[72];
        *(_OWORD *)&v237[56] = *(_OWORD *)&v227[56];
        *(_OWORD *)&v237[40] = *(_OWORD *)&v227[40];
        *(_OWORD *)&v237[24] = *(_OWORD *)&v227[24];
        *(_OWORD *)&v237[8] = *(_OWORD *)&v227[8];
        *(_QWORD *)v237 = *(_QWORD *)v227;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)&v215 = v237;
          *((_QWORD *)&v215 + 1) = sub_140D76130;
          *(_QWORD *)v227 = aCodexmateLibCo_49;
          *(_QWORD *)&v227[8] = 45;
          *(_QWORD *)&v227[16] = aCodexmateLibCo_49;
          *(_QWORD *)&v227[24] = 45;
          *(_QWORD *)&v227[32] = &off_141AA1958;
          sub_140AF72B0(&unk_141AA1920, &v215, 2, v227);
        }
        sub_140D8A3A0(v237);
      }
      if ( v241 )
        sub_140001660(v239, v241, 1);
      *(_QWORD *)v227 = &v220;
      *(_QWORD *)&v227[8] = sub_140191200;
      *(_QWORD *)&v227[16] = v233;
      *(_QWORD *)&v227[24] = sub_140D76130;
      sub_1416DAFA0(&v160, &unk_141A9B651, v227);
      LOBYTE(v194) = v252;
      v241 = v161;
      v215 = v161;
      *(_QWORD *)v227 = &v194;
      *(_QWORD *)&v227[8] = sub_140ED78B0;
      *(_QWORD *)&v227[16] = &v215;
      *(_QWORD *)&v227[24] = sub_140191200;
      sub_1416DAFA0(v237, &unk_141A9B450, v227);
      sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aPreflightFaile, 16, (__int64)v237);
      if ( v160 )
        sub_140001660(v241, v160, 1);
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v233[80];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v233[64];
      v17 = *(_OWORD *)v233;
      v71 = *(_OWORD *)&v233[16];
      v72 = *(_OWORD *)&v233[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v233[48];
      *(_OWORD *)(a1 + 32) = v72;
      *(_OWORD *)(a1 + 16) = v71;
      *(_OWORD *)a1 = v17;
      goto LABEL_4;
    }
  }
  v170 = 2LL * ((a5 & 1) == 0) + 3;
  v171 = *a7;
  v182 = (_DWORD *)a7[1];
  v184 = a7[2];
  v201 = a7[3];
  v185 = a7[4];
  v18 = a7[5];
  v175 = v18;
  v183 = (_BYTE *)a7[6];
  v172 = *a8;
  v19 = a8[1];
  v173 = v19;
  v174 = (unsigned __int8 *)a8[2];
  v219 = -1;
  v20 = 1;
  v21 = 0;
  v191 = a1;
  v241 = a2;
  while ( (v21 & 1) == 0 && (unsigned __int8)v20 <= 3u )
  {
    LOBYTE(v18) = v20 == 3;
    LODWORD(v239) = v18;
    v22 = (unsigned __int8)(v20 + 1);
    if ( v20 == 3 )
      v22 = 3;
    v251 = v20;
    v23 = v220;
    sub_1407D2B10(
      (unsigned int)v227,
      a2,
      v252,
      (unsigned int)aStoppingCodex,
      14,
      v220,
      *((__int64 *)&v220 + 1),
      v220,
      *((__int64 *)&v220 + 1),
      0);
    LODWORD(v214) = v22;
    if ( *(_QWORD *)v227 == -1 )
    {
      sub_1407B9160(*(_QWORD *)&v227[8]);
    }
    else
    {
      *(_QWORD *)&v237[88] = *(_QWORD *)&v227[88];
      *(_OWORD *)&v237[72] = *(_OWORD *)&v227[72];
      *(_OWORD *)&v237[56] = *(_OWORD *)&v227[56];
      *(_OWORD *)&v237[40] = *(_OWORD *)&v227[40];
      *(_OWORD *)&v237[24] = *(_OWORD *)&v227[24];
      *(_OWORD *)&v237[8] = *(_OWORD *)&v227[8];
      *(_QWORD *)v237 = *(_QWORD *)v227;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)v233 = v237;
        *(_QWORD *)&v233[8] = sub_140D76130;
        *(_QWORD *)&v227[48] = 2;
        *(_QWORD *)&v227[56] = aCodexmateLibCo_49;
        *(_QWORD *)&v227[64] = 45;
        *(_QWORD *)&v227[80] = &unk_141AA1920;
        *(_QWORD *)&v227[88] = v233;
        *(_QWORD *)v227 = 0;
        *(_QWORD *)&v227[8] = aCodexmateLibCo_49;
        *(_OWORD *)&v227[16] = 0x2Du;
        *(_QWORD *)&v227[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v227[40] = 35;
        *(_QWORD *)&v227[72] = 0x22E00000001LL;
        sub_141503E20(&v247, v227);
      }
      sub_140D8A3A0(v237);
    }
    v168 = sub_1416AEBD0();
    v169 = v24;
    sub_140933FA0((unsigned int)v227, v170, 0, a5, a6);
    *(_DWORD *)&v237[3] = *(_DWORD *)&v227[12];
    *(_DWORD *)v237 = *(_DWORD *)&v227[9];
    *(__int32 *)((char *)v222.m256i_i32 + 3) = *(_DWORD *)&v227[20];
    v222.m256i_i32[0] = *(_DWORD *)&v227[17];
    *(_DWORD *)((char *)&v215 + 3) = *(_DWORD *)&v227[28];
    LODWORD(v215) = *(_DWORD *)&v227[25];
    LODWORD(v194) = *(_DWORD *)&v227[33];
    *(_DWORD *)((char *)&v194 + 3) = *(_DWORD *)&v227[36];
    *(__int32 *)((char *)v176.m256i_i32 + 3) = *(_DWORD *)&v227[44];
    v176.m256i_i32[0] = *(_DWORD *)&v227[41];
    *(_DWORD *)&v181[3] = *(_DWORD *)&v227[52];
    *(_DWORD *)v181 = *(_DWORD *)&v227[49];
    v25 = v227[56];
    *(_DWORD *)((char *)&v203 + 3) = *(_DWORD *)&v227[60];
    LODWORD(v203) = *(_DWORD *)&v227[57];
    if ( *(_QWORD *)v227 != -1 )
    {
      LODWORD(v207) = *(_DWORD *)&v227[65];
      *(_DWORD *)((char *)&v207 + 3) = *(_DWORD *)&v227[68];
      *(_QWORD *)&v233[88] = *(_QWORD *)&v227[88];
      *(_OWORD *)&v233[72] = *(_OWORD *)&v227[72];
      *(_DWORD *)&v233[9] = *(_DWORD *)v237;
      *(_DWORD *)&v233[12] = *(_DWORD *)&v237[3];
      LODWORD(v193[0]) = v222.m256i_i32[0];
      *(_DWORD *)((char *)v193 + 3) = *(__int32 *)((char *)v222.m256i_i32 + 3);
      *(_DWORD *)((char *)&v189 + 3) = *(_DWORD *)((char *)&v215 + 3);
      LODWORD(v189) = v215;
      *(_DWORD *)&v187[3] = *(_DWORD *)((char *)&v194 + 3);
      *(_DWORD *)v187 = v194;
      *(_DWORD *)&v188[3] = *(__int32 *)((char *)v176.m256i_i32 + 3);
      *(_DWORD *)v188 = v176.m256i_i32[0];
      *(_DWORD *)((char *)&v209 + 3) = *(_DWORD *)&v181[3];
      LODWORD(v209) = *(_DWORD *)v181;
      *(_DWORD *)((char *)v202 + 3) = *(_DWORD *)((char *)&v203 + 3);
      LODWORD(v202[0]) = v203;
      *(_QWORD *)v233 = *(_QWORD *)v227;
      v233[8] = v227[8];
      v233[16] = v227[16];
      *(_DWORD *)&v233[20] = *(__int32 *)((char *)v222.m256i_i32 + 3);
      *(_DWORD *)&v233[17] = v193[0];
      v233[24] = v227[24];
      *(_DWORD *)&v233[28] = *(_DWORD *)((char *)&v189 + 3);
      *(_DWORD *)&v233[25] = v215;
      v233[32] = v227[32];
      *(_DWORD *)&v233[36] = *(_DWORD *)&v187[3];
      *(_DWORD *)&v233[33] = v194;
      v233[40] = v227[40];
      *(_DWORD *)&v233[44] = *(_DWORD *)&v188[3];
      *(_DWORD *)&v233[41] = v176.m256i_i32[0];
      v233[48] = v227[48];
      *(_DWORD *)&v233[52] = *(_DWORD *)((char *)&v209 + 3);
      *(_DWORD *)&v233[49] = *(_DWORD *)v181;
      v233[56] = v227[56];
      *(_DWORD *)&v233[60] = *(_DWORD *)((char *)v202 + 3);
      *(_DWORD *)&v233[57] = v203;
      v233[64] = v227[64];
      *(_DWORD *)&v233[68] = *(_DWORD *)&v227[68];
      *(_DWORD *)&v233[65] = v207;
      *(_QWORD *)v237 = 0;
      *(_QWORD *)&v237[8] = 1;
      *(_QWORD *)&v237[16] = 0;
      *(_QWORD *)&v227[16] = 1610612768;
      *(_QWORD *)v227 = v237;
      *(_QWORD *)&v227[8] = &off_141AA1A90;
      v64 = sub_140D76130(v233, v227);
      v65 = v191;
      if ( v64 )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v247,
          (unsigned int)&unk_141A9F540,
          (__int64)&off_141AA1B48);
      v239 = *(_QWORD *)v237;
      v142 = *(_QWORD *)&v237[16];
      v214 = *(_QWORD *)&v237[8];
      v136 = *(_QWORD *)&v237[8];
      v126 = v220;
      sub_1407D7360((__int128 *)v237, (__int128 *)v241, v252);
      if ( *(_DWORD *)v237 != -1 )
      {
        *(_OWORD *)&v227[80] = *(_OWORD *)&v237[80];
        *(_OWORD *)&v227[64] = *(_OWORD *)&v237[64];
        *(_OWORD *)&v227[48] = *(_OWORD *)&v237[48];
        *(_OWORD *)&v227[32] = *(_OWORD *)&v237[32];
        *(_OWORD *)&v227[16] = *(_OWORD *)&v237[16];
        *(_OWORD *)v227 = *(_OWORD *)v237;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)&v215 = v227;
          *((_QWORD *)&v215 + 1) = sub_140D76130;
          v222.m256i_i64[0] = (__int64)aCodexmateLibCo_49;
          v222.m256i_i64[1] = 45;
          v222.m256i_i64[2] = (__int64)aCodexmateLibCo_49;
          v222.m256i_i64[3] = 45;
          *(_QWORD *)&v223 = &off_141AA1958;
          sub_140AF72B0(&unk_141AA1920, &v215, 2, &v222);
        }
        sub_140D8A3A0(v227);
      }
      if ( v239 )
        sub_140001660(v214, v239, 1);
      v66 = sub_1416AED20(&v168);
      *(_OWORD *)v237 = 0x3E8 * (unsigned __int128)(unsigned __int64)v66 + v67 / 0xF4240uLL;
      *(_QWORD *)v227 = &v251;
      *(_QWORD *)&v227[8] = sub_1416E8600;
      *(_QWORD *)&v227[16] = v237;
      *(_QWORD *)&v227[24] = sub_1416E85A0;
      *(_QWORD *)&v227[32] = v233;
      *(_QWORD *)&v227[40] = sub_140D76130;
      sub_1416DAFA0(v148, &unk_141A9B96F, v227);
      sub_140DB20C0(v252, aStopFailed, 11, v148, 6, v126, *((_QWORD *)&v126 + 1), v136, v142);
      *(_OWORD *)(v65 + 80) = *(_OWORD *)&v233[80];
      *(_OWORD *)(v65 + 64) = *(_OWORD *)&v233[64];
      v17 = *(_OWORD *)v233;
      v68 = *(_OWORD *)&v233[16];
      v69 = *(_OWORD *)&v233[32];
      *(_OWORD *)(v65 + 48) = *(_OWORD *)&v233[48];
      *(_OWORD *)(v65 + 32) = v69;
      *(_OWORD *)(v65 + 16) = v68;
      *(_OWORD *)v65 = v17;
      v70 = v251;
      *(_BYTE *)(v65 + 96) = 1;
      *(_BYTE *)(v65 + 97) = v70;
      goto LABEL_254;
    }
    LODWORD(v193[0]) = *(_DWORD *)v237;
    *(_DWORD *)((char *)v193 + 3) = *(_DWORD *)&v237[3];
    LODWORD(v189) = v222.m256i_i32[0];
    *(_DWORD *)((char *)&v189 + 3) = *(__int32 *)((char *)v222.m256i_i32 + 3);
    *(_DWORD *)v187 = v215;
    *(_DWORD *)&v187[3] = *(_DWORD *)((char *)&v215 + 3);
    *(_DWORD *)v188 = v194;
    *(_DWORD *)&v188[3] = *(_DWORD *)((char *)&v194 + 3);
    *(_DWORD *)((char *)&v209 + 3) = *(__int32 *)((char *)v176.m256i_i32 + 3);
    LODWORD(v209) = v176.m256i_i32[0];
    *(_DWORD *)((char *)v202 + 3) = *(_DWORD *)&v181[3];
    LODWORD(v202[0]) = *(_DWORD *)v181;
    LODWORD(v207) = v203;
    *(_DWORD *)((char *)&v207 + 3) = *(_DWORD *)((char *)&v203 + 3);
    DWORD1(v164) = *(_DWORD *)&v237[3];
    *(_DWORD *)((char *)&v164 + 1) = v193[0];
    HIDWORD(v164) = *(__int32 *)((char *)v222.m256i_i32 + 3);
    *(_DWORD *)((char *)&v164 + 9) = v189;
    DWORD1(v165) = *(_DWORD *)((char *)&v215 + 3);
    *(_DWORD *)((char *)&v165 + 1) = *(_DWORD *)v187;
    HIDWORD(v165) = *(_DWORD *)((char *)&v194 + 3);
    *(_DWORD *)((char *)&v165 + 9) = *(_DWORD *)v188;
    DWORD1(v166) = *(_DWORD *)((char *)&v209 + 3);
    *(_DWORD *)((char *)&v166 + 1) = v176.m256i_i32[0];
    HIDWORD(v166) = *(_DWORD *)((char *)v202 + 3);
    *(_DWORD *)((char *)&v166 + 9) = *(_DWORD *)v181;
    HIDWORD(v167) = *(_DWORD *)((char *)&v203 + 3);
    *(_DWORD *)((char *)&v167 + 1) = v207;
    v232 = v227[56];
    LOBYTE(v164) = v227[8];
    BYTE8(v164) = v227[16];
    LOBYTE(v165) = v227[24];
    BYTE8(v165) = v227[32];
    LOBYTE(v166) = v227[40];
    BYTE8(v166) = v227[48];
    LOBYTE(v167) = v227[56];
    v250 = 1;
    v26 = sub_1416AED20(&v168);
    a1 = v191;
    *(_OWORD *)v237 = 0x3E8 * (unsigned __int128)(unsigned __int64)v26 + v27 / 0xF4240uLL;
    *(_QWORD *)v227 = &v251;
    *(_QWORD *)&v227[8] = sub_1416E8600;
    *(_QWORD *)&v227[16] = v237;
    *(_QWORD *)&v227[24] = sub_1416E85A0;
    *(_QWORD *)&v227[32] = &v232;
    *(_QWORD *)&v227[40] = sub_1416EBC20;
    v250 = 1;
    sub_1416DAFA0(&v158, &unk_141A9B6EE, v227);
    v222.m256i_i8[0] = v252;
    v221 = v159;
    *(_OWORD *)v233 = v159;
    *(_QWORD *)v227 = &v222;
    *(_QWORD *)&v227[8] = sub_140ED78B0;
    *(_QWORD *)&v227[16] = v233;
    *(_QWORD *)&v227[24] = sub_140191200;
    sub_1416DAFA0(v237, &unk_141A9B450, v227);
    sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStopComplete, 13, (__int64)v237);
    v28 = v241;
    if ( v158 )
      sub_140001660(v221, v158, 1);
    v250 = 1;
    sub_1407D2B10(
      (unsigned int)v227,
      v28,
      v252,
      (unsigned int)&unk_141A9B71D,
      11,
      v220,
      *((__int64 *)&v220 + 1),
      v23,
      *((__int64 *)&v23 + 1),
      0);
    if ( *(_QWORD *)v227 == -1 )
    {
      v250 = 1;
      sub_1407B9160(*(_QWORD *)&v227[8]);
    }
    else
    {
      *(_QWORD *)&v237[88] = *(_QWORD *)&v227[88];
      *(_OWORD *)&v237[72] = *(_OWORD *)&v227[72];
      *(_OWORD *)&v237[56] = *(_OWORD *)&v227[56];
      *(_OWORD *)&v237[40] = *(_OWORD *)&v227[40];
      *(_OWORD *)&v237[24] = *(_OWORD *)&v227[24];
      *(_OWORD *)&v237[8] = *(_OWORD *)&v227[8];
      *(_QWORD *)v237 = *(_QWORD *)v227;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)v233 = v237;
        *(_QWORD *)&v233[8] = sub_140D76130;
        *(_QWORD *)&v227[48] = 2;
        *(_QWORD *)&v227[56] = aCodexmateLibCo_49;
        *(_QWORD *)&v227[64] = 45;
        *(_QWORD *)&v227[80] = &unk_141AA1920;
        *(_QWORD *)&v227[88] = v233;
        *(_QWORD *)v227 = 0;
        *(_QWORD *)&v227[8] = aCodexmateLibCo_49;
        *(_OWORD *)&v227[16] = 0x2Du;
        *(_QWORD *)&v227[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v227[40] = 35;
        *(_QWORD *)&v227[72] = 0x22E00000001LL;
        sub_141503E20(&v247, v227);
      }
      v250 = 1;
      sub_140D8A3A0(v237);
    }
    v29 = v251;
    v176.m256i_i8[0] = v25 & 1;
    v176.m256i_i8[1] = v251;
    v250 = 1;
    v30 = sub_1416AEBD0();
    v32 = v31;
    if ( v29 == 1 )
    {
      *(_QWORD *)&v194 = v171;
      if ( *v182 != -2 )
      {
        v250 = 1;
        v134 = &unk_141A9F038;
        sub_1401B9E10((__int128 *)v227, v201, v184, (__int64)v182, (__int128 *)aToggle, 6, (__int64)&v194);
        v33 = *(_DWORD *)v227;
        v222 = *(__m256i *)&v227[8];
        v223 = *(_OWORD *)&v227[40];
        *(_QWORD *)&v224 = *(_QWORD *)&v227[56];
        if ( *(_QWORD *)v227 == -1 )
          goto LABEL_49;
LABEL_45:
        *(_OWORD *)&v233[72] = *(_OWORD *)&v227[80];
        *(_OWORD *)&v233[56] = *(_OWORD *)&v227[64];
        *(_QWORD *)&v233[48] = v224;
        *(__m256i *)v233 = v222;
        *(_OWORD *)&v233[32] = v223;
        *(_QWORD *)&v237[88] = *(_QWORD *)&v227[88];
        *(_OWORD *)&v237[72] = *(_OWORD *)&v233[64];
        *(_QWORD *)&v237[56] = v224;
        *(_QWORD *)&v237[64] = *(_QWORD *)&v227[64];
        *(_OWORD *)&v237[40] = v223;
        *(__m256i *)&v237[8] = v222;
        *(_QWORD *)v237 = *(_QWORD *)v227;
        goto LABEL_43;
      }
      v250 = 1;
      sub_140EB1C60((unsigned int)v227, v201, v185, (unsigned int)aToggle, 6, 0, v25, (__int64)&v194, v175);
    }
    else
    {
      if ( *v182 != -2 )
      {
        v250 = 1;
        sub_1401B9E10((__int128 *)v227, v201, v184, (__int64)v182, (__int128 *)&unk_141A9F096, 13, 0);
        v33 = *(_DWORD *)v227;
        v222 = *(__m256i *)&v227[8];
        v223 = *(_OWORD *)&v227[40];
        *(_QWORD *)&v224 = *(_QWORD *)&v227[56];
        if ( *(_QWORD *)v227 == -1 )
        {
LABEL_49:
          v215 = *(_OWORD *)v222.m256i_i8;
          *(_OWORD *)v216 = *(_OWORD *)&v222.m256i_u64[2];
          *(_OWORD *)&v216[16] = v223;
          *(_QWORD *)&v216[32] = v224;
          sub_14022C070(&v222, &v216[8]);
          *(_QWORD *)&v227[48] = *(_QWORD *)&v216[32];
          *(_OWORD *)&v227[32] = *(_OWORD *)&v216[16];
          *(_OWORD *)&v227[16] = *(_OWORD *)v216;
          *(_OWORD *)v227 = v215;
          *(_QWORD *)&v227[72] = v222.m256i_i64[2];
          *(_OWORD *)&v227[56] = *(_OWORD *)v222.m256i_i8;
          *(_OWORD *)v233 = v215;
          *(_OWORD *)&v233[16] = *(_OWORD *)v216;
          *(_OWORD *)&v233[32] = *(_OWORD *)&v216[16];
          *(_OWORD *)&v233[48] = *(_OWORD *)&v227[48];
          *(_OWORD *)&v233[64] = *(_OWORD *)&v227[64];
          *(_QWORD *)&v237[88] = v222.m256i_i64[2];
          *(_OWORD *)&v237[72] = *(_OWORD *)&v233[56];
          *(_QWORD *)&v237[64] = *(_QWORD *)&v216[32];
          *(_OWORD *)&v237[48] = *(_OWORD *)&v216[16];
          *(_OWORD *)&v237[32] = *(_OWORD *)v216;
          *(_OWORD *)&v237[16] = v215;
          *(_OWORD *)v237 = 0xFFFFFFFFFFFFFFFFuLL;
          goto LABEL_50;
        }
        goto LABEL_45;
      }
      v250 = 1;
      sub_140EB1C60((unsigned int)v227, v201, v185, (unsigned int)&unk_141A9F096, 13, 0, v25, 0, 0);
    }
    if ( *(_DWORD *)v227 == -1 )
    {
      *(_QWORD *)&v237[88] = *(_QWORD *)&v227[80];
      *(_OWORD *)&v237[72] = *(_OWORD *)&v227[64];
      *(_QWORD *)&v237[64] = *(_QWORD *)&v227[56];
      *(_OWORD *)&v237[48] = *(_OWORD *)&v227[40];
      *(_OWORD *)&v237[32] = *(_OWORD *)&v227[24];
      *(_OWORD *)&v237[16] = *(_OWORD *)&v227[8];
      *(_QWORD *)&v237[8] = 1;
      *(_QWORD *)v237 = -1;
      v33 = -1;
LABEL_50:
      LOBYTE(v33) = *v183;
      *(_QWORD *)&v215 = *(_QWORD *)&v237[32];
      v222.m256i_i64[0] = *(_QWORD *)&v237[88];
      *(_QWORD *)v227 = (char *)v176.m256i_i64 + 1;
      *(_QWORD *)&v227[8] = sub_1416E8600;
      *(_QWORD *)&v227[16] = &v176;
      *(_QWORD *)&v227[24] = sub_1416EBC20;
      *(_QWORD *)&v227[32] = &v215;
      *(_QWORD *)&v227[40] = sub_1416EBAE0;
      *(_QWORD *)&v227[48] = &v222;
      *(_QWORD *)&v227[56] = sub_1416EBAE0;
      sub_1416DAFA0(v233, &unk_141A9F0A3, v227);
      a2 = v241;
      sub_140DD9840(v33, (unsigned int)aReconcile, 9, v30, v32, (__int64)v233);
      goto LABEL_51;
    }
    *(_OWORD *)&v237[80] = *(_OWORD *)&v227[80];
    *(_OWORD *)&v237[64] = *(_OWORD *)&v227[64];
    *(_OWORD *)&v237[48] = *(_OWORD *)&v227[48];
    *(_OWORD *)&v237[32] = *(_OWORD *)&v227[32];
    *(_OWORD *)&v237[16] = *(_OWORD *)&v227[16];
    *(_OWORD *)v237 = *(_OWORD *)v227;
    v33 = *(_DWORD *)v227;
    if ( *(_QWORD *)v227 == -1 )
      goto LABEL_50;
LABEL_43:
    v222.m256i_i64[0] = (__int64)v237;
    LOBYTE(v33) = *v183;
    *(_QWORD *)v227 = (char *)v176.m256i_i64 + 1;
    *(_QWORD *)&v227[8] = sub_1416E8600;
    *(_QWORD *)&v227[16] = &v176;
    *(_QWORD *)&v227[24] = sub_1416EBC20;
    *(_QWORD *)&v227[32] = &v222;
    *(_QWORD *)&v227[40] = sub_140D743D0;
    sub_1416DAFA0(v233, &unk_141A9F0E2, v227);
    a2 = v241;
    sub_140DD9840(v33, (unsigned int)aReconcile, 9, v30, v32, (__int64)v233);
LABEL_51:
    *(_OWORD *)&v181[80] = *(_OWORD *)&v237[80];
    *(_OWORD *)&v181[64] = *(_OWORD *)&v237[64];
    *(_OWORD *)&v181[48] = *(_OWORD *)&v237[48];
    *(_OWORD *)&v181[32] = *(_OWORD *)&v237[32];
    *(_OWORD *)&v181[16] = *(_OWORD *)&v237[16];
    *(_OWORD *)v181 = *(_OWORD *)v237;
    *(_QWORD *)&v227[48] = v167;
    *(_OWORD *)&v227[32] = v166;
    *(_OWORD *)&v227[16] = v165;
    *(_OWORD *)v227 = v164;
    v240[1] = 1;
    sub_1409349D0(&v176, v227);
    *(_OWORD *)&v227[80] = *(_OWORD *)&v181[80];
    *(_OWORD *)&v227[64] = *(_OWORD *)&v181[64];
    *(_OWORD *)&v227[48] = *(_OWORD *)&v181[48];
    *(_OWORD *)&v227[32] = *(_OWORD *)&v181[32];
    *(_OWORD *)&v227[16] = *(_OWORD *)&v181[16];
    *(_OWORD *)v227 = *(_OWORD *)v181;
    v231 = v180;
    v230 = v179;
    v229 = v178;
    v228 = v177;
    *(__m256i *)&v227[96] = v176;
    v34 = v233;
    if ( *(_QWORD *)v181 == -1 )
    {
      if ( *(_QWORD *)&v227[96] != -1 )
      {
        v186 = *(_QWORD *)v227;
        v226 = v180;
        v225 = v179;
        v224 = v178;
        v223 = v177;
        v222 = v176;
        *(_QWORD *)v233 = 0;
        *(_QWORD *)&v233[8] = 1;
        *(_QWORD *)&v233[16] = 0;
        *(_QWORD *)&v237[16] = 1610612768;
        *(_QWORD *)v237 = v233;
        *(_QWORD *)&v237[8] = &off_141AA1A90;
        if ( (unsigned __int8)sub_140D76130(&v222, v237) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v247,
            (unsigned int)&unk_141A9F540,
            (__int64)&off_141AA1B48);
        v241 = *(_QWORD *)v233;
        v143 = *(_QWORD *)&v233[16];
        v239 = *(_QWORD *)&v233[8];
        v138 = *(_QWORD *)&v233[8];
        v129 = v220;
        sub_1407D7360((__int128 *)v233, (__int128 *)a2, v252);
        if ( *(_DWORD *)v233 != -1 )
        {
          *(_OWORD *)&v237[80] = *(_OWORD *)&v233[80];
          *(_OWORD *)&v237[64] = *(_OWORD *)&v233[64];
          *(_OWORD *)&v237[48] = *(_OWORD *)&v233[48];
          *(_OWORD *)&v237[32] = *(_OWORD *)&v233[32];
          *(_OWORD *)&v237[16] = *(_OWORD *)&v233[16];
          *(_OWORD *)v237 = *(_OWORD *)v233;
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            *(_QWORD *)&v194 = v237;
            *((_QWORD *)&v194 + 1) = sub_140D76130;
            *(_QWORD *)&v215 = aCodexmateLibCo_49;
            *((_QWORD *)&v215 + 1) = 45;
            *(_QWORD *)v216 = aCodexmateLibCo_49;
            *(_QWORD *)&v216[8] = 45;
            *(_QWORD *)&v216[16] = &off_141AA1958;
            sub_140AF72B0(&unk_141AA1920, &v194, 2, &v215);
          }
          sub_140D8A3A0(v237);
        }
        if ( v241 )
          sub_140001660(v239, v241, 1);
        *(_QWORD *)v237 = &v251;
        *(_QWORD *)&v237[8] = sub_1416E8600;
        *(_QWORD *)&v237[16] = &v222;
        *(_QWORD *)&v237[24] = sub_140D76130;
        sub_1416DAFA0(v147, &unk_141A9B8A8, v237);
        sub_140DB20C0(v252, aSettleFailed, 13, v147, 6, v129, *((_QWORD *)&v129 + 1), v138, v143);
        *(_OWORD *)(a1 + 80) = v226;
        *(_OWORD *)(a1 + 64) = v225;
        v17 = *(_OWORD *)v222.m256i_i8;
        v83 = *(_OWORD *)&v222.m256i_u64[2];
        v84 = v223;
        *(_OWORD *)(a1 + 48) = v224;
        *(_OWORD *)(a1 + 32) = v84;
        *(_OWORD *)(a1 + 16) = v83;
        *(_OWORD *)a1 = v17;
        v85 = v251;
        *(_BYTE *)(a1 + 96) = 3;
        *(_BYTE *)(a1 + 97) = v85;
        sub_140D8A7D0(&v227[8]);
        sub_1402346F0(&v227[72]);
        v86 = *(_QWORD *)&v227[72];
        if ( !*(_QWORD *)&v227[72] )
          goto LABEL_254;
        v87 = *(_QWORD *)&v227[80];
        goto LABEL_199;
      }
      *(_QWORD *)&v199 = *(_QWORD *)&v181[88];
      v198 = *(_OWORD *)&v181[72];
      v197 = *(_OWORD *)&v181[56];
      v196 = *(_OWORD *)&v181[40];
      v195 = *(_OWORD *)&v181[24];
      v194 = *(_OWORD *)&v181[8];
      v212 = *(_DWORD *)&v227[104];
      v213 = v227[108];
      v39 = *v174;
      v40 = *(_QWORD *)(v172 + 24);
      v236 = 1;
      v235 = 1;
      sub_140EAD220((unsigned int)&v209, v40, v173, v39, (*(_DWORD *)&v227[104] == 0) & (v227[108] ^ 1));
      v41 = v211;
      if ( !v211 )
      {
        if ( (v212 || (v213 & 1) != 0) && *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)v227 = &v252;
          *(_QWORD *)&v227[8] = sub_140ED78B0;
          *(_QWORD *)&v227[16] = &v251;
          *(_QWORD *)&v227[24] = sub_1416E8600;
          *(_QWORD *)&v227[32] = &v212;
          *(_QWORD *)&v227[40] = sub_1416EACD0;
          *(_QWORD *)&v227[48] = &v213;
          *(_QWORD *)&v227[56] = sub_1416EBC20;
          *(_QWORD *)v237 = aCodexmateLibCo_49;
          *(_QWORD *)&v237[8] = 45;
          *(_QWORD *)&v237[16] = aCodexmateLibCo_49;
          *(_QWORD *)&v237[24] = 45;
          *(_QWORD *)&v237[32] = &off_141A9B7A0;
          v244 = 1;
          v243 = 1;
          sub_140AF72B0(&unk_141A9B728, v227, 2, v237);
        }
        *(_QWORD *)&v218 = v199;
        v217 = v198;
        *(_OWORD *)&v216[32] = v197;
        *(_OWORD *)&v216[16] = v196;
        *(_OWORD *)v216 = v195;
        v215 = v194;
        LOBYTE(v34) = v252;
        v88 = v220;
        v200 = v220;
        v249 = 1;
        v248 = 1;
        v207 = sub_1416AEBD0();
        v208 = v89;
        v249 = 1;
        v248 = 1;
        sub_1407D5A90((unsigned int)v227, a2, (_DWORD)v34, v88, *((__int64 *)&v88 + 1));
        if ( *(_DWORD *)v227 != -1 )
        {
          v226 = *(_OWORD *)&v227[80];
          v225 = *(_OWORD *)&v227[64];
          v224 = *(_OWORD *)&v227[48];
          v223 = *(_OWORD *)&v227[32];
          v222 = *(__m256i *)v227;
          goto LABEL_201;
        }
        *(_QWORD *)v237 = &v215;
        *(_OWORD *)&v237[8] = v153;
        v96 = *a10;
        v249 = 1;
        v248 = 1;
        sub_140EA2DA0((unsigned int)&v222, a9, v215, v216[40], v96, (__int64)&v237[8]);
        if ( v222.m256i_i64[0] != -1 )
        {
LABEL_201:
          *(_OWORD *)&v233[80] = v226;
          *(_OWORD *)&v233[64] = v225;
          *(_OWORD *)&v233[48] = v224;
          *(_OWORD *)&v233[32] = v223;
          *(__m256i *)v233 = v222;
          v97 = v200;
          *(_QWORD *)v237 = 0;
          *(_QWORD *)&v237[8] = 1;
          *(_QWORD *)&v237[16] = 0;
          *(_QWORD *)&v227[16] = 1610612768;
          *(_QWORD *)v227 = v237;
          *(_QWORD *)&v227[8] = &off_141AA1A90;
          if ( (unsigned __int8)sub_140D76130(v233, v227) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v247,
              (unsigned int)&unk_141A9F540,
              (__int64)&off_141AA1B48);
          v239 = *(_QWORD *)&v237[8];
          v241 = *(_QWORD *)v237;
          v139 = *(_OWORD *)&v237[8];
          sub_1407D7360((__int128 *)v237, (__int128 *)a2, (unsigned int)v34);
          if ( *(_DWORD *)v237 != -1 )
          {
            *(_OWORD *)&v227[80] = *(_OWORD *)&v237[80];
            *(_OWORD *)&v227[64] = *(_OWORD *)&v237[64];
            *(_OWORD *)&v227[48] = *(_OWORD *)&v237[48];
            *(_OWORD *)&v227[32] = *(_OWORD *)&v237[32];
            *(_OWORD *)&v227[16] = *(_OWORD *)&v237[16];
            *(_OWORD *)v227 = *(_OWORD *)v237;
            if ( *(_QWORD *)off_14223FF10 >= 2u )
            {
              v202[0] = v227;
              v202[1] = sub_140D76130;
              *(_QWORD *)&v203 = aCodexmateLibCo_49;
              *((_QWORD *)&v203 + 1) = 45;
              *(_QWORD *)&v204 = aCodexmateLibCo_49;
              *((_QWORD *)&v204 + 1) = 45;
              *(_QWORD *)&v205 = &off_141AA1958;
              sub_140AF72B0(&unk_141AA1920, v202, 2, &v203);
            }
            sub_140D8A3A0(v227);
          }
          if ( v241 )
            sub_140001660(v239, v241, 1);
          *(_QWORD *)v227 = &v200;
          *(_QWORD *)&v227[8] = sub_140191200;
          *(_QWORD *)&v227[16] = v233;
          *(_QWORD *)&v227[24] = sub_140D76130;
          sub_1416DAFA0(v237, &unk_141A9B651, v227);
          sub_140DB20C0(
            (unsigned int)v34,
            aCommitFailed,
            13,
            v237,
            13,
            v97,
            *((_QWORD *)&v97 + 1),
            v139,
            *((_QWORD *)&v139 + 1));
          v98 = *(_QWORD *)&v233[8];
          v99 = *(_QWORD *)v233;
          v101 = *(_QWORD *)&v233[24];
          v100 = *(_OWORD **)&v233[16];
          v203 = *(_OWORD *)&v233[32];
          v204 = *(_OWORD *)&v233[48];
          v205 = *(_OWORD *)&v233[64];
          v206 = *(_OWORD *)&v233[80];
          sub_140D8A7D0(&v215);
          v102 = 1;
          goto LABEL_209;
        }
        v249 = 1;
        v248 = 1;
        v106 = sub_1407B92D0(v222.m256i_i64[1]);
        if ( v106 )
        {
          v107 = v106 & 3;
          v241 = v106;
          switch ( v106 & 3 )
          {
            case 0uLL:
              LOBYTE(v106) = *(_BYTE *)(v106 + 16);
              break;
            case 1uLL:
              LOBYTE(v106) = *(_BYTE *)(v106 + 31);
              break;
            case 2uLL:
              v242 = 1;
              v110 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0() + 8);
              v242 = 1;
              LOBYTE(v106) = v110(HIDWORD(v241));
              break;
            case 3uLL:
              v106 >>= 32;
              break;
          }
          v237[0] = v106;
          *(_QWORD *)v227 = v237;
          *(_QWORD *)&v227[8] = sub_140EDB0F0;
          v242 = 1;
          sub_1416DAFA0(v188, &unk_141A9B46E, v227);
          v242 = 1;
          sub_140DB20C0((unsigned int)v34, aCommitSyncUnco, 23, v188, v123, v130, v132, v134, v140);
          v111 = *(_QWORD *)(a2 + 776);
          v112 = *(_QWORD *)(a2 + 784);
          v242 = 1;
          sub_1407D3B80(
            v111,
            v112,
            (_DWORD)v34,
            (unsigned int)&unk_141A4A03B,
            23,
            v200,
            *((__int64 *)&v200 + 1),
            (__int64)&unk_141A4A42A,
            28);
          v222.m256i_i64[2] = v218;
          *(_OWORD *)v222.m256i_i8 = v217;
          sub_1407D7410(v227);
          *(_QWORD *)v233 = 0;
          *(_QWORD *)&v233[8] = 1;
          *(_QWORD *)&v233[16] = 0;
          *(_QWORD *)&v237[16] = 1610612768;
          *(_QWORD *)v237 = v233;
          *(_QWORD *)&v237[8] = &off_141AA1A90;
          if ( (unsigned __int8)sub_140D76130(v227, v237) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v247,
              (unsigned int)&unk_141A9F540,
              (__int64)&off_141AA1B48);
          v214 = *(_QWORD *)&v233[8];
          v239 = *(_QWORD *)v233;
          v113 = *(_QWORD *)&v233[16];
          v114 = v222.m256i_i64[2];
          if ( v222.m256i_i64[2] == v222.m256i_i64[0] )
            sub_141939F90(&v222);
          v115 = v222.m256i_i64[1];
          v116 = 3 * v114;
          *(_QWORD *)(v222.m256i_i64[1] + 8 * v116) = v239;
          *(_QWORD *)(v115 + 8 * v116 + 8) = v214;
          *(_QWORD *)(v115 + 8 * v116 + 16) = v113;
          v222.m256i_i64[2] = v114 + 1;
          sub_140D8A3A0(v227);
          v203 = v215;
          v204 = *(_OWORD *)v216;
          v205 = *(_OWORD *)&v216[16];
          v206 = *(_OWORD *)&v216[32];
          v100 = (_OWORD *)v222.m256i_i64[1];
          v98 = v222.m256i_i64[0];
          v101 = v222.m256i_i64[2];
          if ( (unsigned int)(v107 - 2) >= 2 && v107 )
          {
            *(_QWORD *)&v227[8] = v241 - 1;
            v227[0] = 3;
            v249 = 0;
            v248 = 0;
            sub_1416EBAD0(&v227[8]);
          }
          v99 = 2;
          goto LABEL_235;
        }
        if ( (_QWORD)v218 )
        {
          v249 = 1;
          v248 = 1;
          sub_1406C5480((unsigned int)v227, DWORD2(v217), v218, (unsigned int)&unk_141A9B28E, 3);
          v239 = *(_QWORD *)&v227[8];
          v241 = *(_QWORD *)v227;
          sub_1407D7100(
            (unsigned int)v237,
            a2,
            (_DWORD)v34,
            v200,
            *((__int64 *)&v200 + 1),
            *(__int64 *)&v227[8],
            *(__int64 *)&v227[16]);
          if ( *(_DWORD *)v237 != -1 )
          {
            *(_OWORD *)&v227[80] = *(_OWORD *)&v237[80];
            *(_OWORD *)&v227[64] = *(_OWORD *)&v237[64];
            *(_OWORD *)&v227[48] = *(_OWORD *)&v237[48];
            *(_OWORD *)&v227[32] = *(_OWORD *)&v237[32];
            *(_OWORD *)&v227[16] = *(_OWORD *)&v237[16];
            *(_OWORD *)v227 = *(_OWORD *)v237;
            if ( *(_QWORD *)off_14223FF10 >= 2u )
            {
              v222.m256i_i64[0] = (__int64)v227;
              v222.m256i_i64[1] = (__int64)sub_140D76130;
              *(_QWORD *)v233 = aCodexmateLibCo_49;
              *(_QWORD *)&v233[8] = 45;
              *(_QWORD *)&v233[16] = aCodexmateLibCo_49;
              *(_QWORD *)&v233[24] = 45;
              *(_QWORD *)&v233[32] = &off_141A9B5E8;
              sub_140AF72B0(&unk_141A9B5A6, &v222, 2, v233);
            }
            sub_140D8A3A0(v227);
          }
          if ( v241 )
            sub_140001660(v239, v241, 1);
          v249 = 1;
          v248 = 1;
          v108 = sub_1416AED20(&v207);
          *(_OWORD *)v237 = 0x3E8 * (unsigned __int128)(unsigned __int64)v108 + v109 / 0xF4240uLL;
          *(_QWORD *)v233 = v218;
          *(_QWORD *)v227 = &v200;
          *(_QWORD *)&v227[8] = sub_140191200;
          *(_QWORD *)&v227[16] = v237;
          *(_QWORD *)&v227[24] = sub_1416E85A0;
          *(_QWORD *)&v227[32] = v233;
          *(_QWORD *)&v227[40] = sub_1416EBAE0;
          v249 = 1;
          v248 = 1;
          sub_1416DAFA0(v187, &unk_141A9B600, v227);
          v249 = 1;
          v248 = 1;
          sub_140DB20C0((unsigned int)v34, aDegraded, 8, v187, v124, v131, v133, v134, v140);
          v206 = *(_OWORD *)&v216[32];
          v205 = *(_OWORD *)&v216[16];
          v204 = *(_OWORD *)v216;
          v203 = v215;
          v100 = *((_OWORD **)&v217 + 1);
          v98 = v217;
          v99 = 1;
          v101 = v218;
          goto LABEL_235;
        }
        v249 = 1;
        v248 = 1;
        sub_1407D2600(v237, a2, (unsigned int)v34);
        if ( *(_DWORD *)v237 == -1 )
        {
          v249 = 1;
          v248 = 1;
          v119 = sub_1416AED20(&v207);
          *(_OWORD *)v237 = 0x3E8 * (unsigned __int128)(unsigned __int64)v119 + v120 / 0xF4240uLL;
          *(_QWORD *)v227 = &v200;
          *(_QWORD *)&v227[8] = sub_140191200;
          *(_QWORD *)&v227[16] = v237;
          *(_QWORD *)&v227[24] = sub_1416E85A0;
          v249 = 1;
          v248 = 1;
          sub_1416DAFA0(v193, &unk_141A9B581, v227);
          v249 = 1;
          v248 = 1;
          sub_140DB20C0((unsigned int)v34, aStable, 6, v193, v123, v130, v132, v134, v140);
          v100 = *((_OWORD **)&v215 + 1);
          v98 = v215;
          v101 = *(_QWORD *)v216;
          v203 = *(_OWORD *)&v216[8];
          v204 = *(_OWORD *)&v216[24];
          *(_QWORD *)&v205 = *(_QWORD *)&v216[40];
          sub_1400290B0(&v217);
          v99 = 0;
          goto LABEL_235;
        }
        *(_OWORD *)&v227[80] = *(_OWORD *)&v237[80];
        *(_OWORD *)&v227[64] = *(_OWORD *)&v237[64];
        *(_OWORD *)&v227[48] = *(_OWORD *)&v237[48];
        *(_OWORD *)&v227[32] = *(_OWORD *)&v237[32];
        *(_OWORD *)&v227[16] = *(_OWORD *)&v237[16];
        *(_OWORD *)v227 = *(_OWORD *)v237;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          v222.m256i_i64[0] = (__int64)v227;
          v222.m256i_i64[1] = (__int64)sub_140D76130;
          *(_QWORD *)v233 = aCodexmateLibCo_49;
          *(_QWORD *)&v233[8] = 45;
          *(_QWORD *)&v233[16] = aCodexmateLibCo_49;
          *(_QWORD *)&v233[24] = 45;
          *(_QWORD *)&v233[32] = &off_141A9B500;
          v234 = 1;
          sub_140AF72B0(&unk_141A9B48D, &v222, 2, v233);
        }
        *(_OWORD *)&v233[48] = *(_OWORD *)&v216[32];
        *(_OWORD *)&v233[32] = *(_OWORD *)&v216[16];
        *(_OWORD *)&v233[16] = *(_OWORD *)v216;
        *(_OWORD *)v233 = v215;
        v241 = sub_14017AA90();
        v222.m256i_i64[0] = (__int64)v227;
        v222.m256i_i64[1] = (__int64)sub_140D76130;
        sub_1416DAFA0(&v189, &unk_141A9B545, &v222);
        v100 = (_OWORD *)v241;
        *(_QWORD *)(v241 + 16) = v190;
        *v100 = v189;
        v203 = *(_OWORD *)v233;
        v204 = *(_OWORD *)&v233[16];
        v205 = *(_OWORD *)&v233[32];
        v206 = *(_OWORD *)&v233[48];
        v249 = 0;
        v248 = 1;
        sub_140D8A3A0(v227);
        a1 = v191;
        v98 = 1;
        v102 = 0;
        v101 = 1;
        v99 = 1;
LABEL_209:
        sub_1402346F0(&v217);
        if ( (_QWORD)v217 )
          sub_140001660(*((_QWORD *)&v217 + 1), 24 * v217, 8);
        if ( v102 )
        {
          v17 = v203;
          v103 = v204;
          v104 = v205;
          *(_OWORD *)(a1 + 80) = v206;
          *(_OWORD *)(a1 + 64) = v104;
          *(_OWORD *)(a1 + 48) = v103;
          *(_OWORD *)(a1 + 32) = v17;
          v105 = v251;
          *(_QWORD *)a1 = v99;
          *(_QWORD *)(a1 + 8) = v98;
          *(_QWORD *)(a1 + 16) = v100;
          *(_QWORD *)(a1 + 24) = v101;
          *(_BYTE *)(a1 + 96) = 5;
          *(_BYTE *)(a1 + 97) = v105;
        }
        else
        {
LABEL_235:
          v17 = v203;
          v117 = v204;
          v118 = v205;
          *(_OWORD *)(a1 + 88) = v206;
          *(_OWORD *)(a1 + 72) = v118;
          *(_OWORD *)(a1 + 56) = v117;
          *(_OWORD *)(a1 + 40) = v17;
          *(_QWORD *)(a1 + 8) = v99;
          *(_QWORD *)(a1 + 16) = v98;
          *(_QWORD *)(a1 + 24) = v100;
          *(_QWORD *)(a1 + 32) = v101;
          *(_QWORD *)a1 = -1;
        }
        sub_140234510(&v209);
        if ( !v209 )
          goto LABEL_254;
        v87 = v210;
        v95 = 32 * v209;
LABEL_238:
        *(double *)&v17 = sub_140001660(v87, v95, 8);
        goto LABEL_254;
      }
      v244 = 1;
      v243 = 1;
      v221 = v210;
      sub_140226C80(v237, v210, v210 + 32 * v211);
      v42 = *(_QWORD *)&v237[8];
      v43 = *(_QWORD *)&v237[16];
      sub_1406C5480((unsigned int)v227, *(_DWORD *)&v237[8], *(_DWORD *)&v237[16], (unsigned int)&unk_141A9B28E, 3);
      v222.m256i_i64[2] = *(_QWORD *)&v227[16];
      *(_OWORD *)v222.m256i_i8 = *(_OWORD *)v227;
      if ( v43 )
      {
        v44 = (_QWORD *)(v42 + 8);
        do
        {
          v45 = *(v44 - 1);
          if ( v45 )
            sub_140001660(*v44, v45, 1);
          v44 += 3;
          --v43;
        }
        while ( v43 );
      }
      if ( *(_QWORD *)v237 )
        sub_140001660(v42, 24LL * *(_QWORD *)v237, 8);
      v246 = 1;
      v245 = 1;
      v46 = sub_1416AEBD0();
      a2 = v241;
      v48 = v240[0];
      if ( v240[0] )
      {
        *(_QWORD *)&v233[16] = *(_QWORD *)&v181[88];
        *(_OWORD *)v233 = *(_OWORD *)&v181[72];
        *(_QWORD *)v227 = &v222;
        *(_QWORD *)&v227[8] = sub_1400015F0;
        v238 = 1;
        sub_1416DAFA0(v145, &unk_141A9B806, v227);
        v238 = 1;
        sub_1401E7610(v233, v145);
        *(_OWORD *)&v237[48] = *(_OWORD *)&v181[56];
        *(_OWORD *)&v237[32] = *(_OWORD *)&v181[40];
        *(_OWORD *)&v237[16] = *(_OWORD *)&v181[24];
        *(_OWORD *)v237 = *(_OWORD *)&v181[8];
        *(_OWORD *)&v237[64] = *(_OWORD *)v233;
        *(_QWORD *)&v237[80] = *(_QWORD *)&v233[16];
        v238 = 0;
        sub_140DB3370(
          (unsigned int)v227,
          a2,
          v252,
          v220,
          *((__int64 *)&v220 + 1),
          (__int64)v237,
          a9,
          (__int64)a10,
          (__int64)&v153);
        v82 = v221;
        if ( v227[0] )
        {
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v227[88];
          *(_OWORD *)(a1 + 64) = *(_OWORD *)&v227[72];
          v17 = *(_OWORD *)&v227[8];
          v90 = *(_OWORD *)&v227[24];
          v91 = *(_OWORD *)&v227[40];
          *(_OWORD *)(a1 + 48) = *(_OWORD *)&v227[56];
          *(_OWORD *)(a1 + 32) = v91;
          *(_OWORD *)(a1 + 16) = v90;
          *(_OWORD *)a1 = v17;
          v92 = v251;
          *(_BYTE *)(a1 + 96) = 5;
          *(_BYTE *)(a1 + 97) = v92;
        }
        else
        {
          *(_OWORD *)(a1 + 88) = *(_OWORD *)&v227[88];
          *(_OWORD *)(a1 + 72) = *(_OWORD *)&v227[72];
          v17 = *(_OWORD *)&v227[8];
          v93 = *(_OWORD *)&v227[24];
          v94 = *(_OWORD *)&v227[40];
          *(_OWORD *)(a1 + 56) = *(_OWORD *)&v227[56];
          *(_OWORD *)(a1 + 40) = v94;
          *(_OWORD *)(a1 + 24) = v93;
          *(_OWORD *)(a1 + 8) = v17;
          *(_QWORD *)a1 = -1;
        }
        goto LABEL_192;
      }
      if ( v212 )
      {
        if ( (unsigned __int8)v251 > 2u )
          goto LABEL_171;
      }
      else if ( (unsigned __int8)v251 > 2u || (v213 & 1) == 0 )
      {
        goto LABEL_171;
      }
      if ( v219 == -1 )
      {
        v246 = 1;
        v245 = 1;
        v192 = sub_1416D0210(v46, v47, 12, 0, (__int64)&off_141AA1908);
        v219 = v54;
      }
      else
      {
        v52 = v47 < v219;
        v53 = v46 < v192;
        if ( v46 == v192 )
          v53 = v52;
        if ( !v53 )
        {
LABEL_171:
          *(_QWORD *)v227 = &v252;
          *(_QWORD *)&v227[8] = sub_140ED78B0;
          *(_QWORD *)&v227[16] = &v222;
          *(_QWORD *)&v227[24] = sub_1400015F0;
          v246 = 1;
          v245 = 1;
          sub_1416DAFA0(&v149, &unk_141A9B7B8, v227);
          *(_OWORD *)&v227[8] = v149;
          *(_QWORD *)&v227[24] = v150;
          *(_QWORD *)v227 = 10;
          sub_140EDA570(v237, v227);
          v128 = *(_QWORD *)&v237[16];
          v239 = *(_QWORD *)&v237[8];
          v122 = *(_QWORD *)&v237[8];
          sub_140ED3800((__int128 *)a2);
          if ( *(_QWORD *)v237 )
            sub_140001660(v239, *(_QWORD *)v237, 1);
          *(_QWORD *)v233 = v41;
          *(_QWORD *)v237 = &v251;
          *(_QWORD *)&v237[8] = sub_1416E8600;
          *(_QWORD *)&v237[16] = v233;
          *(_QWORD *)&v237[24] = sub_1416EBAE0;
          sub_1416DAFA0(v144, &unk_141A9B7D9, v237);
          sub_140DB20C0(v252, aPostconditionF, 20, v144, v122, v128, v132, v134, v140);
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v227[80];
          *(_OWORD *)(a1 + 64) = *(_OWORD *)&v227[64];
          v17 = *(_OWORD *)v227;
          v79 = *(_OWORD *)&v227[16];
          v80 = *(_OWORD *)&v227[32];
          *(_OWORD *)(a1 + 48) = *(_OWORD *)&v227[48];
          *(_OWORD *)(a1 + 32) = v80;
          *(_OWORD *)(a1 + 16) = v79;
          *(_OWORD *)a1 = v17;
          v81 = v251;
          *(_BYTE *)(a1 + 96) = 4;
          *(_BYTE *)(a1 + 97) = v81;
          v82 = v221;
LABEL_192:
          if ( v222.m256i_i64[0] )
            *(double *)&v17 = sub_140001660(v222.m256i_i64[1], v222.m256i_i64[0], 1);
          sub_140234510(&v209);
          if ( v209 )
            *(double *)&v17 = sub_140001660(v82, 32 * v209, 8);
          if ( v48 )
            goto LABEL_254;
          sub_140D8A7D0(&v194);
          sub_1402346F0(&v198);
          v86 = v198;
          if ( !(_QWORD)v198 )
            goto LABEL_254;
          v87 = *((_QWORD *)&v198 + 1);
LABEL_199:
          v95 = 24 * v86;
          goto LABEL_238;
        }
      }
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)v237 = &v252;
        *(_QWORD *)&v237[8] = sub_140ED78B0;
        *(_QWORD *)&v237[16] = &v251;
        *(_QWORD *)&v237[24] = sub_1416E8600;
        *(_QWORD *)&v237[32] = &v222;
        *(_QWORD *)&v237[40] = sub_1400015F0;
        *(_QWORD *)&v227[48] = 2;
        *(_QWORD *)&v227[56] = aCodexmateLibCo_49;
        *(_QWORD *)&v227[64] = 45;
        *(_QWORD *)&v227[80] = &unk_141A9B843;
        *(_QWORD *)&v227[88] = v237;
        *(_QWORD *)v227 = 0;
        *(_QWORD *)&v227[8] = aCodexmateLibCo_49;
        *(_OWORD *)&v227[16] = 0x2Du;
        *(_QWORD *)&v227[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v227[40] = 35;
        *(_QWORD *)&v227[72] = 0x17D00000001LL;
        v246 = 1;
        v245 = 1;
        sub_141503E20(&v247, v227);
      }
      v246 = 1;
      v245 = 1;
      sub_1407D2B10(
        (unsigned int)v227,
        a2,
        v252,
        (unsigned int)&unk_141A9B8A0,
        8,
        v220,
        *((__int64 *)&v220 + 1),
        v222.m256i_i64[1],
        v222.m256i_i64[2],
        0);
      if ( *(_QWORD *)v227 == -1 )
      {
        v246 = 1;
        v245 = 1;
        sub_1407B9160(*(_QWORD *)&v227[8]);
      }
      else
      {
        *(_QWORD *)&v237[88] = *(_QWORD *)&v227[88];
        *(_OWORD *)&v237[72] = *(_OWORD *)&v227[72];
        *(_OWORD *)&v237[56] = *(_OWORD *)&v227[56];
        *(_OWORD *)&v237[40] = *(_OWORD *)&v227[40];
        *(_OWORD *)&v237[24] = *(_OWORD *)&v227[24];
        *(_OWORD *)&v237[8] = *(_OWORD *)&v227[8];
        *(_QWORD *)v237 = *(_QWORD *)v227;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)v233 = v237;
          *(_QWORD *)&v233[8] = sub_140D76130;
          *(_QWORD *)&v227[48] = 2;
          *(_QWORD *)&v227[56] = aCodexmateLibCo_49;
          *(_QWORD *)&v227[64] = 45;
          *(_QWORD *)&v227[80] = &unk_141AA1920;
          *(_QWORD *)&v227[88] = v233;
          *(_QWORD *)v227 = 0;
          *(_QWORD *)&v227[8] = aCodexmateLibCo_49;
          *(_OWORD *)&v227[16] = 0x2Du;
          *(_QWORD *)&v227[32] = aSrcCoreRelayRo_1;
          *(_QWORD *)&v227[40] = 35;
          *(_QWORD *)&v227[72] = 0x22E00000001LL;
          sub_141503E20(&v247, v227);
        }
        v246 = 1;
        v245 = 1;
        sub_140D8A3A0(v237);
      }
      v55 = v221;
      if ( v222.m256i_i64[0] )
        sub_140001660(v222.m256i_i64[1], v222.m256i_i64[0], 1);
      v56 = (_QWORD *)(v55 + 8);
      do
      {
        v57 = *(v56 - 1);
        if ( v57 )
          sub_140001660(*v56, v57, 1);
        v56 += 4;
        --v41;
      }
      while ( v41 );
      if ( v209 )
        sub_140001660(v55, 32 * v209, 8);
      sub_140D8A7D0(&v194);
      v58 = *((_QWORD *)&v198 + 1);
      v59 = v199;
      if ( (_QWORD)v199 )
      {
        v60 = (_QWORD *)(*((_QWORD *)&v198 + 1) + 8LL);
        do
        {
          v18 = *(v60 - 1);
          if ( v18 )
            sub_140001660(*v60, v18, 1);
          v60 += 3;
          --v59;
        }
        while ( v59 );
      }
      if ( (_QWORD)v198 )
        sub_140001660(v58, 24 * v198, 8);
      v20 = v214;
      v21 = v239;
    }
    else
    {
      v186 = *(_QWORD *)v227;
      if ( *(_QWORD *)&v227[96] != -1 )
      {
        v199 = *(_OWORD *)&v181[80];
        v198 = *(_OWORD *)&v181[64];
        v197 = *(_OWORD *)&v181[48];
        v196 = *(_OWORD *)&v181[32];
        v195 = *(_OWORD *)&v181[16];
        v194 = *(_OWORD *)v181;
        v218 = v180;
        v217 = v179;
        *(_OWORD *)&v216[32] = v178;
        *(_OWORD *)&v216[16] = v177;
        *(_OWORD *)v216 = *(_OWORD *)&v176.m256i_u64[2];
        v215 = *(_OWORD *)v176.m256i_i8;
        *(_QWORD *)v237 = &v194;
        *(_QWORD *)&v237[8] = sub_140D76130;
        *(_QWORD *)&v237[16] = &v215;
        *(_QWORD *)&v237[24] = sub_140D76130;
        sub_1416DAFA0(&v151, &unk_141A9B944, v237);
        *(_OWORD *)&v222.m256i_u64[1] = v151;
        v222.m256i_i64[3] = v152;
        v222.m256i_i64[0] = 10;
        *(_QWORD *)v233 = 0;
        *(_QWORD *)&v233[8] = 1;
        *(_QWORD *)&v233[16] = 0;
        *(_QWORD *)&v237[16] = 1610612768;
        *(_QWORD *)v237 = v233;
        *(_QWORD *)&v237[8] = &off_141AA1A90;
        if ( (unsigned __int8)sub_140D76130(&v222, v237) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v247,
            (unsigned int)&unk_141A9F540,
            (__int64)&off_141AA1B48);
        v239 = *(_QWORD *)&v233[8];
        v241 = *(_QWORD *)v233;
        v137 = *(_OWORD *)&v233[8];
        v127 = v220;
        sub_1407D7360((__int128 *)v233, (__int128 *)a2, v252);
        if ( *(_DWORD *)v233 != -1 )
        {
          *(_OWORD *)&v237[80] = *(_OWORD *)&v233[80];
          *(_OWORD *)&v237[64] = *(_OWORD *)&v233[64];
          *(_OWORD *)&v237[48] = *(_OWORD *)&v233[48];
          *(_OWORD *)&v237[32] = *(_OWORD *)&v233[32];
          *(_OWORD *)&v237[16] = *(_OWORD *)&v233[16];
          *(_OWORD *)v237 = *(_OWORD *)v233;
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            v193[0] = v237;
            v193[1] = sub_140D76130;
            *(_QWORD *)&v203 = aCodexmateLibCo_49;
            *((_QWORD *)&v203 + 1) = 45;
            *(_QWORD *)&v204 = aCodexmateLibCo_49;
            *((_QWORD *)&v204 + 1) = 45;
            *(_QWORD *)&v205 = &off_141AA1958;
            sub_140AF72B0(&unk_141AA1920, v193, 2, &v203);
          }
          sub_140D8A3A0(v237);
        }
        if ( v241 )
          sub_140001660(v239, v241, 1);
        *(_QWORD *)v237 = &v251;
        *(_QWORD *)&v237[8] = sub_1416E8600;
        *(_QWORD *)&v237[16] = &v222;
        *(_QWORD *)&v237[24] = sub_140D76130;
        sub_1416DAFA0(v146, &unk_141A9B8A8, v237);
        sub_140DB20C0(v252, aReconcileFaile, 16, v146, 6, v127, *((_QWORD *)&v127 + 1), v137, *((_QWORD *)&v137 + 1));
        *(_OWORD *)(a1 + 80) = v226;
        *(_OWORD *)(a1 + 64) = v225;
        v17 = *(_OWORD *)v222.m256i_i8;
        v73 = *(_OWORD *)&v222.m256i_u64[2];
        v74 = v223;
        *(_OWORD *)(a1 + 48) = v224;
        *(_OWORD *)(a1 + 32) = v74;
        *(_OWORD *)(a1 + 16) = v73;
        *(_OWORD *)a1 = v17;
        v75 = v251;
        *(_BYTE *)(a1 + 96) = 2;
        *(_BYTE *)(a1 + 97) = v75;
        sub_140D8A3A0(&v215);
        sub_140D8A3A0(&v194);
        goto LABEL_254;
      }
      v226 = *(_OWORD *)&v181[80];
      v225 = *(_OWORD *)&v181[64];
      v224 = *(_OWORD *)&v181[48];
      v223 = *(_OWORD *)&v181[32];
      v222 = *(__m256i *)v181;
      v35 = *(_DWORD *)&v227[104];
      v36 = v227[108];
      v37 = sub_1416AEBD0();
      if ( v240[0] )
        goto LABEL_128;
      if ( v35 )
      {
        if ( (unsigned __int8)v251 > 2u )
          goto LABEL_128;
      }
      else if ( (unsigned __int8)v251 > 2u || !v36 )
      {
        goto LABEL_128;
      }
      if ( v219 == -1 )
      {
        v192 = sub_1416D0210(v37, v38, 12, 0, (__int64)&off_141AA1908);
        v219 = v51;
      }
      else
      {
        v49 = v38 < v219;
        v50 = v37 < v192;
        if ( v37 == v192 )
          v50 = v49;
        if ( !v50 )
        {
LABEL_128:
          *(_QWORD *)v233 = 0;
          *(_QWORD *)&v233[8] = 1;
          *(_QWORD *)&v233[16] = 0;
          *(_QWORD *)&v237[16] = 1610612768;
          *(_QWORD *)v237 = v233;
          *(_QWORD *)&v237[8] = &off_141AA1A90;
          if ( (unsigned __int8)sub_140D76130(&v222, v237) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v247,
              (unsigned int)&unk_141A9F540,
              (__int64)&off_141AA1B48);
          v239 = *(_QWORD *)&v233[8];
          v241 = *(_QWORD *)v233;
          sub_1407D2B10(
            (unsigned int)v237,
            a2,
            v252,
            (unsigned int)aFailed_2,
            6,
            v220,
            *((__int64 *)&v220 + 1),
            *(__int64 *)&v233[8],
            *(__int64 *)&v233[16],
            0);
          if ( *(_QWORD *)v237 == -1 )
          {
            sub_1407B9160(*(_QWORD *)&v237[8]);
          }
          else
          {
            *(_QWORD *)&v233[88] = *(_QWORD *)&v237[88];
            *(_OWORD *)&v233[72] = *(_OWORD *)&v237[72];
            *(_OWORD *)&v233[56] = *(_OWORD *)&v237[56];
            *(_OWORD *)&v233[40] = *(_OWORD *)&v237[40];
            *(_OWORD *)&v233[24] = *(_OWORD *)&v237[24];
            *(_OWORD *)&v233[8] = *(_OWORD *)&v237[8];
            *(_QWORD *)v233 = *(_QWORD *)v237;
            if ( *(_QWORD *)off_14223FF10 >= 2u )
            {
              *(_QWORD *)&v215 = v233;
              *((_QWORD *)&v215 + 1) = sub_140D76130;
              *(_QWORD *)v237 = aCodexmateLibCo_49;
              *(_QWORD *)&v237[8] = 45;
              *(_QWORD *)&v237[16] = aCodexmateLibCo_49;
              *(_QWORD *)&v237[24] = 45;
              *(_QWORD *)&v237[32] = &off_141AA1958;
              sub_140AF72B0(&unk_141AA1920, &v215, 2, v237);
            }
            sub_140D8A3A0(v233);
          }
          if ( v241 )
            sub_140001660(v239, v241, 1);
          *(_QWORD *)v237 = &v251;
          *(_QWORD *)&v237[8] = sub_1416E8600;
          *(_QWORD *)&v237[16] = &v222;
          *(_QWORD *)&v237[24] = sub_140D76130;
          sub_1416DAFA0(&v154, &unk_141A9B8A8, v237);
          LOBYTE(v194) = v252;
          v241 = v155;
          v215 = v155;
          *(_QWORD *)v237 = &v194;
          *(_QWORD *)&v237[8] = sub_140ED78B0;
          *(_QWORD *)&v237[16] = &v215;
          *(_QWORD *)&v237[24] = sub_140191200;
          sub_1416DAFA0(v233, &unk_141A9B450, v237);
          sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aReconcileFaile, 16, (__int64)v233);
          if ( v154 )
            sub_140001660(v241, v154, 1);
          *(_OWORD *)(a1 + 80) = v226;
          *(_OWORD *)(a1 + 64) = v225;
          v17 = *(_OWORD *)v222.m256i_i8;
          v76 = *(_OWORD *)&v222.m256i_u64[2];
          v77 = v223;
          *(_OWORD *)(a1 + 48) = v224;
          *(_OWORD *)(a1 + 32) = v77;
          *(_OWORD *)(a1 + 16) = v76;
          *(_OWORD *)a1 = v17;
          v78 = v251;
          *(_BYTE *)(a1 + 96) = 2;
          *(_BYTE *)(a1 + 97) = v78;
          goto LABEL_254;
        }
      }
      *(_QWORD *)v233 = 0;
      *(_QWORD *)&v233[8] = 1;
      *(_QWORD *)&v233[16] = 0;
      *(_QWORD *)&v237[16] = 1610612768;
      *(_QWORD *)v237 = v233;
      *(_QWORD *)&v237[8] = &off_141AA1A90;
      if ( (unsigned __int8)sub_140D76130(&v222, v237) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v247,
          (unsigned int)&unk_141A9F540,
          (__int64)&off_141AA1B48);
      *(_QWORD *)v216 = *(_QWORD *)&v233[16];
      v215 = *(_OWORD *)v233;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)v233 = &v252;
        *(_QWORD *)&v233[8] = sub_140ED78B0;
        *(_QWORD *)&v233[16] = &v251;
        *(_QWORD *)&v233[24] = sub_1416E8600;
        *(_QWORD *)&v233[32] = &v215;
        *(_QWORD *)&v233[40] = sub_1400015F0;
        *(_QWORD *)&v237[48] = 2;
        *(_QWORD *)&v237[56] = aCodexmateLibCo_49;
        *(_QWORD *)&v237[64] = 45;
        *(_QWORD *)&v237[80] = &unk_141A9B8D9;
        *(_QWORD *)&v237[88] = v233;
        *(_QWORD *)v237 = 0;
        *(_QWORD *)&v237[8] = aCodexmateLibCo_49;
        *(_OWORD *)&v237[16] = 0x2Du;
        *(_QWORD *)&v237[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v237[40] = 35;
        *(_QWORD *)&v237[72] = 0x12E00000001LL;
        sub_141503E20(&v247, v237);
      }
      sub_1407D2B10(
        (unsigned int)v237,
        a2,
        v252,
        (unsigned int)&unk_141A9B8A0,
        8,
        v220,
        *((__int64 *)&v220 + 1),
        *((__int64 *)&v215 + 1),
        *(__int64 *)v216,
        0);
      if ( *(_QWORD *)v237 == -1 )
      {
        sub_1407B9160(*(_QWORD *)&v237[8]);
      }
      else
      {
        *(_QWORD *)&v233[88] = *(_QWORD *)&v237[88];
        *(_OWORD *)&v233[72] = *(_OWORD *)&v237[72];
        *(_OWORD *)&v233[56] = *(_OWORD *)&v237[56];
        *(_OWORD *)&v233[40] = *(_OWORD *)&v237[40];
        *(_OWORD *)&v233[24] = *(_OWORD *)&v237[24];
        *(_OWORD *)&v233[8] = *(_OWORD *)&v237[8];
        *(_QWORD *)v233 = *(_QWORD *)v237;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)&v194 = v233;
          *((_QWORD *)&v194 + 1) = sub_140D76130;
          *(_QWORD *)&v237[48] = 2;
          *(_QWORD *)&v237[56] = aCodexmateLibCo_49;
          *(_QWORD *)&v237[64] = 45;
          *(_QWORD *)&v237[80] = &unk_141AA1920;
          *(_QWORD *)&v237[88] = &v194;
          *(_QWORD *)v237 = 0;
          *(_QWORD *)&v237[8] = aCodexmateLibCo_49;
          *(_OWORD *)&v237[16] = 0x2Du;
          *(_QWORD *)&v237[32] = aSrcCoreRelayRo_1;
          *(_QWORD *)&v237[40] = 35;
          *(_QWORD *)&v237[72] = 0x22E00000001LL;
          sub_141503E20(&v247, v237);
        }
        sub_140D8A3A0(v233);
      }
      *(_QWORD *)v237 = &v251;
      *(_QWORD *)&v237[8] = sub_1416E8600;
      *(_QWORD *)&v237[16] = &v215;
      *(_QWORD *)&v237[24] = sub_1400015F0;
      sub_1416DAFA0(&v156, &unk_141A9B8A8, v237);
      LOBYTE(v203) = v252;
      v221 = v157;
      v194 = v157;
      *(_QWORD *)v237 = &v203;
      *(_QWORD *)&v237[8] = sub_140ED78B0;
      *(_QWORD *)&v237[16] = &v194;
      *(_QWORD *)&v237[24] = sub_140191200;
      sub_1416DAFA0(v233, &unk_141A9B450, v237);
      sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aReconcileRetry, 15, (__int64)v233);
      v21 = v239;
      if ( v156 )
        sub_140001660(v221, v156, 1);
      if ( (_QWORD)v215 )
        sub_140001660(*((_QWORD *)&v215 + 1), v215, 1);
      sub_140D8A3A0(&v222);
      v20 = v214;
    }
  }
  nullsub_1(v19, v18);
  v61 = (_OWORD *)sub_140001650(109, 1);
  if ( !v61 )
    sub_14196B2DB(1, 109);
  *(_OWORD *)((char *)v61 + 93) = *(__int128 *)((char *)&xmmword_141A9B6B4 + 13);
  v61[5] = xmmword_141A9B6B4;
  v61[4] = xmmword_141A9B6A4;
  v61[3] = xmmword_141A9B694;
  v61[2] = xmmword_141A9B684;
  qmemcpy(v61, "CODEX_TRANSITION_REENTRY_TIMEOUT", 32);
  *(_QWORD *)&v233[8] = 109;
  *(_QWORD *)&v233[16] = v61;
  *(_QWORD *)&v233[24] = 109;
  *(_QWORD *)v233 = 10;
  *(_QWORD *)v237 = 0;
  *(_QWORD *)&v237[8] = 1;
  *(_QWORD *)&v237[16] = 0;
  *(_QWORD *)&v227[16] = 1610612768;
  *(_QWORD *)v227 = v237;
  *(_QWORD *)&v227[8] = &off_141AA1A90;
  if ( (unsigned __int8)sub_140D76130(v233, v227) )
    sub_14196B5F0(
      (unsigned int)aADisplayImplem_11,
      55,
      (unsigned int)&v247,
      (unsigned int)&unk_141A9F540,
      (__int64)&off_141AA1B48);
  v241 = *(_QWORD *)v237;
  v141 = *(_QWORD *)&v237[16];
  v239 = *(_QWORD *)&v237[8];
  v135 = *(_QWORD *)&v237[8];
  v125 = v220;
  sub_1407D7360((__int128 *)v237, (__int128 *)a2, v252);
  if ( *(_DWORD *)v237 != -1 )
  {
    *(_OWORD *)&v227[80] = *(_OWORD *)&v237[80];
    *(_OWORD *)&v227[64] = *(_OWORD *)&v237[64];
    *(_OWORD *)&v227[48] = *(_OWORD *)&v237[48];
    *(_OWORD *)&v227[32] = *(_OWORD *)&v237[32];
    *(_OWORD *)&v227[16] = *(_OWORD *)&v237[16];
    *(_OWORD *)v227 = *(_OWORD *)v237;
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      *(_QWORD *)&v215 = v227;
      *((_QWORD *)&v215 + 1) = sub_140D76130;
      v222.m256i_i64[0] = (__int64)aCodexmateLibCo_49;
      v222.m256i_i64[1] = 45;
      v222.m256i_i64[2] = (__int64)aCodexmateLibCo_49;
      v222.m256i_i64[3] = 45;
      *(_QWORD *)&v223 = &off_141AA1958;
      sub_140AF72B0(&unk_141AA1920, &v215, 2, &v222);
    }
    sub_140D8A3A0(v227);
  }
  if ( v241 )
    sub_140001660(v239, v241, 1);
  *(_QWORD *)v237 = 0;
  *(_QWORD *)&v237[8] = 1;
  *(_QWORD *)&v237[16] = 0;
  *(_QWORD *)&v227[16] = 1610612768;
  *(_QWORD *)v227 = v237;
  *(_QWORD *)&v227[8] = &off_141AA1A90;
  if ( (unsigned __int8)sub_140D76130(v233, v227) )
    sub_14196B5F0(
      (unsigned int)aADisplayImplem_11,
      55,
      (unsigned int)&v247,
      (unsigned int)&unk_141A9F540,
      (__int64)&off_141AA1B48);
  v222.m256i_i64[2] = *(_QWORD *)&v237[16];
  *(_OWORD *)v222.m256i_i8 = *(_OWORD *)v237;
  sub_140DB20C0(v252, aRetryExhausted, 15, &v222, 6, v125, *((_QWORD *)&v125 + 1), v135, v141);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)&v233[80];
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v233[64];
  v17 = *(_OWORD *)v233;
  v62 = *(_OWORD *)&v233[16];
  v63 = *(_OWORD *)&v233[32];
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v233[48];
  *(_OWORD *)(a1 + 32) = v63;
  *(_OWORD *)(a1 + 16) = v62;
  *(_OWORD *)a1 = v17;
  *(_WORD *)(a1 + 96) = 772;
LABEL_254:
  *(_QWORD *)&result = v17;
  return result;
}
