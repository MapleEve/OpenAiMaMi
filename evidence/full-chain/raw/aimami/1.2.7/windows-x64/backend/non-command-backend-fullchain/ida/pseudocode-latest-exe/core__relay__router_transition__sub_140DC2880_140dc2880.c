// win 1.2.7 latest-exe | module src/core/relay/router_transition.rs | ea 0x140dc2880 | successor of pre-update 0x140bceb80 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.678, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
double __fastcall sub_140DC2880(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        unsigned __int8 a4,
        char a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int128 v14; // kr00_16
  __int128 v15; // kr10_16
  __int128 v16; // kr20_16
  __int128 v17; // kr30_16
  __int128 v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // al
  char v22; // r14
  int v23; // esi
  __int128 v24; // kr40_16
  int v25; // edx
  __int64 v26; // rax
  unsigned int v27; // edx
  __int64 v28; // rbx
  int v29; // r14d
  char v30; // bl
  unsigned __int64 v31; // rax
  unsigned int v32; // edx
  __int64 v33; // r12
  __int64 v34; // r15
  __int64 v35; // rbx
  __int64 v36; // r14
  _QWORD *v37; // r13
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  unsigned int v40; // edx
  char v41; // bl
  bool v42; // cl
  bool v43; // dl
  unsigned int v44; // edx
  char v45; // al
  bool v46; // cl
  bool v47; // dl
  unsigned int v48; // edx
  _QWORD *v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rbx
  __int64 v52; // r14
  _QWORD *v53; // r12
  _OWORD *v54; // rax
  __int128 v55; // xmm1
  __int128 v56; // xmm2
  char v57; // al
  __int64 v58; // rsi
  __int64 v59; // rax
  unsigned int v60; // edx
  __int128 v61; // xmm1
  __int128 v62; // xmm2
  unsigned __int8 v63; // al
  __int128 v64; // xmm1
  __int128 v65; // xmm2
  __int128 v66; // xmm1
  __int128 v67; // xmm2
  unsigned __int8 v68; // al
  __int128 v69; // xmm1
  __int128 v70; // xmm2
  unsigned __int8 v71; // al
  __int128 v72; // xmm1
  __int128 v73; // xmm2
  unsigned __int8 v74; // al
  __int128 v75; // xmm1
  __int128 v76; // xmm2
  unsigned __int8 v77; // al
  __int64 v78; // rax
  __int64 v79; // rcx
  __int128 v80; // krA0_16
  int v81; // edx
  __int128 v82; // xmm1
  __int128 v83; // xmm2
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int128 v86; // xmm1
  __int128 v87; // xmm2
  char v88; // al
  __int128 v89; // krB0_16
  __int64 v90; // rbx
  __int64 v91; // rdi
  _OWORD *v92; // r12
  __int64 v93; // r14
  char v94; // r15
  __int128 v95; // xmm1
  __int128 v96; // xmm2
  unsigned __int8 v97; // al
  unsigned __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  unsigned __int64 v101; // rdi
  __int64 v102; // rax
  unsigned int v103; // edx
  __int64 (__fastcall *v104)(unsigned __int64); // rax
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // r14
  __int64 v108; // rbx
  __int64 v109; // rax
  __int64 v110; // rcx
  __int128 v111; // xmm1
  __int128 v112; // xmm2
  __int64 v113; // rax
  unsigned int v114; // edx
  double result; // xmm0_8
  __int64 v116; // [rsp+20h] [rbp-60h]
  __int64 v117; // [rsp+20h] [rbp-60h]
  __int64 v118; // [rsp+20h] [rbp-60h]
  __int128 v119; // [rsp+28h] [rbp-58h]
  __int128 v120; // [rsp+28h] [rbp-58h]
  __int128 v121; // [rsp+28h] [rbp-58h]
  __int64 v122; // [rsp+28h] [rbp-58h]
  __int128 v123; // [rsp+28h] [rbp-58h]
  __int64 v124; // [rsp+28h] [rbp-58h]
  __int64 v125; // [rsp+28h] [rbp-58h]
  __int64 v126; // [rsp+30h] [rbp-50h]
  __int64 v127; // [rsp+30h] [rbp-50h]
  __int64 v128; // [rsp+38h] [rbp-48h]
  __int64 v129; // [rsp+38h] [rbp-48h]
  __int64 v130; // [rsp+38h] [rbp-48h]
  __int128 v131; // [rsp+38h] [rbp-48h]
  __int64 v132; // [rsp+38h] [rbp-48h]
  __int128 v133; // [rsp+38h] [rbp-48h]
  __int64 v134; // [rsp+40h] [rbp-40h]
  __int64 v135; // [rsp+40h] [rbp-40h]
  __int64 v136; // [rsp+40h] [rbp-40h]
  __int64 v137; // [rsp+40h] [rbp-40h]
  _BYTE v138[24]; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v139[24]; // [rsp+70h] [rbp-10h] BYREF
  _BYTE v140[24]; // [rsp+88h] [rbp+8h] BYREF
  _BYTE v141[24]; // [rsp+A0h] [rbp+20h] BYREF
  _BYTE v142[24]; // [rsp+B8h] [rbp+38h] BYREF
  __int128 v143; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v144; // [rsp+E0h] [rbp+60h]
  __int128 v145; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v146; // [rsp+F8h] [rbp+78h]
  __int128 v147; // [rsp+100h] [rbp+80h] BYREF
  __int64 v148; // [rsp+110h] [rbp+90h] BYREF
  __int128 v149; // [rsp+118h] [rbp+98h]
  __int64 v150; // [rsp+128h] [rbp+A8h] BYREF
  __int128 v151; // [rsp+130h] [rbp+B0h]
  __int64 v152; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v153; // [rsp+148h] [rbp+C8h]
  __int64 v154; // [rsp+158h] [rbp+D8h] BYREF
  __int128 v155; // [rsp+160h] [rbp+E0h]
  __int64 v156; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v157; // [rsp+178h] [rbp+F8h]
  __int128 v158; // [rsp+188h] [rbp+108h]
  __int128 v159; // [rsp+198h] [rbp+118h]
  __int128 v160; // [rsp+1A8h] [rbp+128h]
  __int64 v161; // [rsp+1B8h] [rbp+138h]
  __int64 v162; // [rsp+1C0h] [rbp+140h] BYREF
  int v163; // [rsp+1C8h] [rbp+148h]
  __int64 v164; // [rsp+1D0h] [rbp+150h]
  __int64 v165; // [rsp+1D8h] [rbp+158h]
  __m256i v166; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v167; // [rsp+200h] [rbp+180h]
  __int128 v168; // [rsp+210h] [rbp+190h]
  __int128 v169; // [rsp+220h] [rbp+1A0h]
  __int128 v170; // [rsp+230h] [rbp+1B0h]
  __int64 v171; // [rsp+240h] [rbp+1C0h]
  __int64 v172; // [rsp+248h] [rbp+1C8h]
  __int64 v173; // [rsp+250h] [rbp+1D0h]
  _BYTE v174[96]; // [rsp+258h] [rbp+1D8h]
  _BYTE v175[21]; // [rsp+2B8h] [rbp+238h] BYREF
  _BYTE v176[21]; // [rsp+2D0h] [rbp+250h] BYREF
  __int128 v177; // [rsp+2E8h] [rbp+268h] BYREF
  __int64 v178; // [rsp+2F8h] [rbp+278h]
  __int128 *v179; // [rsp+300h] [rbp+280h]
  __int64 v180; // [rsp+308h] [rbp+288h]
  __int64 v181; // [rsp+310h] [rbp+290h]
  unsigned __int64 v182; // [rsp+318h] [rbp+298h]
  __int128 v183; // [rsp+320h] [rbp+2A0h] BYREF
  __int128 v184; // [rsp+330h] [rbp+2B0h]
  __int128 v185; // [rsp+340h] [rbp+2C0h]
  __int128 v186; // [rsp+350h] [rbp+2D0h]
  __int128 v187; // [rsp+360h] [rbp+2E0h] BYREF
  __int128 v188; // [rsp+370h] [rbp+2F0h]
  _QWORD v189[3]; // [rsp+388h] [rbp+308h] BYREF
  __int128 v190; // [rsp+3A0h] [rbp+320h] BYREF
  _QWORD v191[2]; // [rsp+3B0h] [rbp+330h] BYREF
  __int128 v192; // [rsp+3C0h] [rbp+340h] BYREF
  __int128 v193; // [rsp+3D0h] [rbp+350h]
  __int128 v194; // [rsp+3E0h] [rbp+360h]
  __int128 v195; // [rsp+3F0h] [rbp+370h]
  __int64 v196; // [rsp+408h] [rbp+388h] BYREF
  int v197; // [rsp+410h] [rbp+390h]
  __int64 v198; // [rsp+418h] [rbp+398h] BYREF
  __int64 v199; // [rsp+420h] [rbp+3A0h]
  __int64 v200; // [rsp+428h] [rbp+3A8h]
  __int128 v201; // [rsp+430h] [rbp+3B0h] BYREF
  _BYTE v202[48]; // [rsp+440h] [rbp+3C0h]
  __int128 v203; // [rsp+470h] [rbp+3F0h] BYREF
  __int128 v204; // [rsp+480h] [rbp+400h]
  int v205; // [rsp+498h] [rbp+418h] BYREF
  char v206; // [rsp+49Ch] [rbp+41Ch] BYREF
  __int64 v207; // [rsp+4A0h] [rbp+420h]
  unsigned int v208; // [rsp+4ACh] [rbp+42Ch]
  __int128 v209; // [rsp+4B0h] [rbp+430h] BYREF
  __m256i v210; // [rsp+4C0h] [rbp+440h] BYREF
  __int128 v211; // [rsp+4E0h] [rbp+460h]
  __int128 v212; // [rsp+4F0h] [rbp+470h]
  __int128 v213; // [rsp+500h] [rbp+480h]
  __int128 v214; // [rsp+510h] [rbp+490h]
  _BYTE v215[128]; // [rsp+520h] [rbp+4A0h] BYREF
  __int128 v216; // [rsp+5A0h] [rbp+520h]
  __int128 v217; // [rsp+5B0h] [rbp+530h]
  __int128 v218; // [rsp+5C0h] [rbp+540h]
  __int128 v219; // [rsp+5D0h] [rbp+550h]
  char v220; // [rsp+5EFh] [rbp+56Fh] BYREF
  _BYTE v221[96]; // [rsp+5F0h] [rbp+570h] BYREF
  char v222; // [rsp+65Ch] [rbp+5DCh]
  char v223; // [rsp+65Dh] [rbp+5DDh]
  char v224; // [rsp+65Eh] [rbp+5DEh]
  unsigned __int8 v225; // [rsp+65Fh] [rbp+5DFh]
  _BYTE v226[96]; // [rsp+660h] [rbp+5E0h] BYREF
  __int64 v227; // [rsp+6C8h] [rbp+648h]
  char v228; // [rsp+6D5h] [rbp+655h]
  _BYTE v229[2]; // [rsp+6D6h] [rbp+656h] BYREF
  unsigned __int64 v230; // [rsp+6D8h] [rbp+658h]
  char v231; // [rsp+6E5h] [rbp+665h]
  char v232; // [rsp+6E6h] [rbp+666h]
  char v233; // [rsp+6E7h] [rbp+667h]
  char v234; // [rsp+6E8h] [rbp+668h]
  char v235; // [rsp+6E9h] [rbp+669h]
  char v236; // [rsp+6EAh] [rbp+66Ah]
  char v237; // [rsp+6EBh] [rbp+66Bh] BYREF
  char v238; // [rsp+6ECh] [rbp+66Ch]
  char v239; // [rsp+6EDh] [rbp+66Dh]
  unsigned __int8 v240; // [rsp+6EEh] [rbp+66Eh] BYREF
  unsigned __int8 v241; // [rsp+6EFh] [rbp+66Fh] BYREF
  __int64 v242; // [rsp+6F0h] [rbp+670h]

  v242 = -2;
  v241 = 0;
  v229[0] = 0;
  *(_QWORD *)&v209 = aNativeoffCompe;
  *((_QWORD *)&v209 + 1) = 22;
  sub_1407D5CC0(v215);
  v14 = *(_OWORD *)&v215[32];
  *(_OWORD *)v221 = *(_OWORD *)&v215[48];
  *(_OWORD *)&v221[16] = *(_OWORD *)&v215[64];
  if ( *(_QWORD *)v215 != -1 )
  {
    *(_OWORD *)&v226[80] = *(_OWORD *)&v215[80];
    *(_QWORD *)&v226[16] = *(_QWORD *)&v215[16];
    *(_OWORD *)&v226[24] = *(_OWORD *)&v215[24];
    *(_QWORD *)&v226[40] = *(_QWORD *)&v215[40];
    *(_OWORD *)&v226[48] = *(_OWORD *)v221;
    *(_OWORD *)&v226[64] = *(_OWORD *)&v221[16];
    *(_OWORD *)v226 = *(_OWORD *)v215;
LABEL_3:
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v226[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v226[64];
    v15 = *(_OWORD *)v226;
    v16 = *(_OWORD *)&v226[16];
    v17 = *(_OWORD *)&v226[32];
    *(_QWORD *)&v18 = *(_QWORD *)&v226[48];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v226[48];
    *(_OWORD *)(a1 + 32) = v17;
    *(_OWORD *)(a1 + 16) = v16;
    *(_OWORD *)a1 = v15;
LABEL_4:
    *(_WORD *)(a1 + 96) = 0;
    goto LABEL_252;
  }
  if ( *(_QWORD *)&v215[8] != -1 )
  {
    if ( *(_QWORD *)&v215[8] )
      sub_140001660(*(_QWORD *)&v215[16], *(_QWORD *)&v215[8], 1);
    if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(*((_QWORD *)&v14 + 1), v14, 1);
  }
  sub_1407E52E0(v215);
  if ( *(_DWORD *)v215 == -1 )
  {
    sub_1408D1F30(v226, a2);
    if ( *(_QWORD *)v226 != -1 )
      goto LABEL_3;
  }
  else
  {
    *(_OWORD *)&v226[80] = *(_OWORD *)&v215[80];
    *(_OWORD *)&v226[64] = *(_OWORD *)&v215[64];
    *(_OWORD *)&v226[48] = *(_OWORD *)&v215[48];
    *(_OWORD *)&v226[32] = *(_OWORD *)&v215[32];
    *(_OWORD *)&v226[16] = *(_OWORD *)&v215[16];
    *(_OWORD *)v226 = *(_OWORD *)v215;
    if ( *(_QWORD *)v215 != -1 )
      goto LABEL_3;
  }
  v225 = a4;
  sub_141597890(&v147);
  *(_QWORD *)v215 = v229;
  *(_QWORD *)&v215[8] = sub_140EDAE50;
  *(_QWORD *)&v215[16] = &v209;
  *(_QWORD *)&v215[24] = sub_140191200;
  sub_1416DAFA0(&v156, &unk_141A9B638, v215);
  v210.m256i_i8[0] = v241;
  v230 = v157;
  *(_OWORD *)v221 = v157;
  *(_QWORD *)v215 = &v210;
  *(_QWORD *)&v215[8] = sub_140ED78B0;
  *(_QWORD *)&v215[16] = v221;
  *(_QWORD *)&v215[24] = sub_140191200;
  sub_1416DAFA0(v226, &unk_141A9B450, v215);
  sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStart_2, 5, (__int64)v226);
  v19 = v156;
  if ( v156 )
    sub_140001660(v230, v156, 1);
  if ( !v229[0] )
  {
    sub_14080DD30(&v210, a3, 0);
    if ( v210.m256i_i32[0] != -1 )
    {
      *(_OWORD *)&v221[80] = v214;
      *(_OWORD *)&v221[64] = v213;
      *(_OWORD *)&v221[48] = v212;
      *(_OWORD *)&v221[32] = v211;
      *(__m256i *)v221 = v210;
      *(_QWORD *)v226 = 0;
      *(_QWORD *)&v226[8] = 1;
      *(_QWORD *)&v226[16] = 0;
      *(_QWORD *)&v215[16] = 1610612768;
      *(_QWORD *)v215 = v226;
      *(_QWORD *)&v215[8] = &off_141AA1A90;
      if ( (unsigned __int8)sub_140D76130(v221, v215) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v237,
          (unsigned int)&unk_141A9F540,
          (__int64)&off_141AA1B48);
      v227 = *(_QWORD *)&v226[8];
      v230 = *(_QWORD *)v226;
      sub_1407D2B10(
        (unsigned int)v215,
        (_DWORD)a2,
        v241,
        (unsigned int)aFailed_2,
        6,
        v209,
        *((__int64 *)&v209 + 1),
        *(__int64 *)&v226[8],
        *(__int64 *)&v226[16],
        0);
      if ( *(_QWORD *)v215 == -1 )
      {
        sub_1407B9160(*(_QWORD *)&v215[8]);
      }
      else
      {
        *(_QWORD *)&v226[88] = *(_QWORD *)&v215[88];
        *(_OWORD *)&v226[72] = *(_OWORD *)&v215[72];
        *(_OWORD *)&v226[56] = *(_OWORD *)&v215[56];
        *(_OWORD *)&v226[40] = *(_OWORD *)&v215[40];
        *(_OWORD *)&v226[24] = *(_OWORD *)&v215[24];
        *(_OWORD *)&v226[8] = *(_OWORD *)&v215[8];
        *(_QWORD *)v226 = *(_QWORD *)v215;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)&v201 = v226;
          *((_QWORD *)&v201 + 1) = sub_140D76130;
          *(_QWORD *)v215 = aCodexmateLibCo_49;
          *(_QWORD *)&v215[8] = 45;
          *(_QWORD *)&v215[16] = aCodexmateLibCo_49;
          *(_QWORD *)&v215[24] = 45;
          *(_QWORD *)&v215[32] = &off_141AA1958;
          sub_140AF72B0(&unk_141AA1920, &v201, 2, v215);
        }
        sub_140D8A3A0(v226);
      }
      if ( v230 )
        sub_140001660(v227, v230, 1);
      *(_QWORD *)v215 = &v209;
      *(_QWORD *)&v215[8] = sub_140191200;
      *(_QWORD *)&v215[16] = v221;
      *(_QWORD *)&v215[24] = sub_140D76130;
      sub_1416DAFA0(&v154, &unk_141A9B651, v215);
      LOBYTE(v183) = v241;
      v230 = v155;
      v201 = v155;
      *(_QWORD *)v215 = &v183;
      *(_QWORD *)&v215[8] = sub_140ED78B0;
      *(_QWORD *)&v215[16] = &v201;
      *(_QWORD *)&v215[24] = sub_140191200;
      sub_1416DAFA0(v226, &unk_141A9B450, v215);
      sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aPreflightFaile, 16, (__int64)v226);
      if ( v154 )
        sub_140001660(v230, v154, 1);
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v221[80];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v221[64];
      v18 = *(_OWORD *)v221;
      v64 = *(_OWORD *)&v221[16];
      v65 = *(_OWORD *)&v221[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v221[48];
      *(_OWORD *)(a1 + 32) = v65;
      *(_OWORD *)(a1 + 16) = v64;
      *(_OWORD *)a1 = v18;
      goto LABEL_4;
    }
  }
  v164 = 2LL * ((v225 & 1) == 0) + 3;
  v165 = *a6;
  v180 = a6[1];
  v20 = a6[2];
  v171 = v20;
  v172 = a6[3];
  v208 = -1;
  v21 = 1;
  v22 = 0;
  v181 = a1;
  v179 = a2;
  while ( (v22 & 1) == 0 && (unsigned __int8)v21 <= 3u )
  {
    LOBYTE(v19) = v21 == 3;
    LODWORD(v230) = v19;
    v23 = (unsigned __int8)(v21 + 1);
    if ( v21 == 3 )
      v23 = 3;
    v240 = v21;
    v24 = v209;
    sub_1407D2B10(
      (unsigned int)v215,
      (_DWORD)a2,
      v241,
      (unsigned int)aStoppingCodex,
      14,
      v209,
      *((__int64 *)&v209 + 1),
      v209,
      *((__int64 *)&v209 + 1),
      0);
    LODWORD(v227) = v23;
    if ( *(_QWORD *)v215 == -1 )
    {
      sub_1407B9160(*(_QWORD *)&v215[8]);
    }
    else
    {
      *(_QWORD *)&v226[88] = *(_QWORD *)&v215[88];
      *(_OWORD *)&v226[72] = *(_OWORD *)&v215[72];
      *(_OWORD *)&v226[56] = *(_OWORD *)&v215[56];
      *(_OWORD *)&v226[40] = *(_OWORD *)&v215[40];
      *(_OWORD *)&v226[24] = *(_OWORD *)&v215[24];
      *(_OWORD *)&v226[8] = *(_OWORD *)&v215[8];
      *(_QWORD *)v226 = *(_QWORD *)v215;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)v221 = v226;
        *(_QWORD *)&v221[8] = sub_140D76130;
        *(_QWORD *)&v215[48] = 2;
        *(_QWORD *)&v215[56] = aCodexmateLibCo_49;
        *(_QWORD *)&v215[64] = 45;
        *(_QWORD *)&v215[80] = &unk_141AA1920;
        *(_QWORD *)&v215[88] = v221;
        *(_QWORD *)v215 = 0;
        *(_QWORD *)&v215[8] = aCodexmateLibCo_49;
        *(_OWORD *)&v215[16] = 0x2Du;
        *(_QWORD *)&v215[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v215[40] = 35;
        *(_QWORD *)&v215[72] = 0x22E00000001LL;
        sub_141503E20(&v237, v215);
      }
      sub_140D8A3A0(v226);
    }
    v162 = sub_1416AEBD0();
    v163 = v25;
    sub_140933FA0((unsigned int)v215, v164, 0, v225, a5);
    *(_DWORD *)&v226[3] = *(_DWORD *)&v215[12];
    *(_DWORD *)v226 = *(_DWORD *)&v215[9];
    *(__int32 *)((char *)v210.m256i_i32 + 3) = *(_DWORD *)&v215[20];
    v210.m256i_i32[0] = *(_DWORD *)&v215[17];
    *(_DWORD *)((char *)&v201 + 3) = *(_DWORD *)&v215[28];
    LODWORD(v201) = *(_DWORD *)&v215[25];
    LODWORD(v183) = *(_DWORD *)&v215[33];
    *(_DWORD *)((char *)&v183 + 3) = *(_DWORD *)&v215[36];
    *(__int32 *)((char *)v166.m256i_i32 + 3) = *(_DWORD *)&v215[44];
    v166.m256i_i32[0] = *(_DWORD *)&v215[41];
    *(_DWORD *)&v174[3] = *(_DWORD *)&v215[52];
    *(_DWORD *)v174 = *(_DWORD *)&v215[49];
    *(_DWORD *)((char *)&v192 + 3) = *(_DWORD *)&v215[60];
    LODWORD(v192) = *(_DWORD *)&v215[57];
    if ( *(_QWORD *)v215 != -1 )
    {
      LODWORD(v196) = *(_DWORD *)&v215[65];
      *(_DWORD *)((char *)&v196 + 3) = *(_DWORD *)&v215[68];
      *(_QWORD *)&v221[88] = *(_QWORD *)&v215[88];
      *(_OWORD *)&v221[72] = *(_OWORD *)&v215[72];
      *(_DWORD *)&v221[9] = *(_DWORD *)v226;
      *(_DWORD *)&v221[12] = *(_DWORD *)&v226[3];
      LODWORD(v189[0]) = v210.m256i_i32[0];
      *(_DWORD *)((char *)v189 + 3) = *(__int32 *)((char *)v210.m256i_i32 + 3);
      *(_DWORD *)((char *)&v177 + 3) = *(_DWORD *)((char *)&v201 + 3);
      LODWORD(v177) = v201;
      *(_DWORD *)&v175[3] = *(_DWORD *)((char *)&v183 + 3);
      *(_DWORD *)v175 = v183;
      *(_DWORD *)&v176[3] = *(__int32 *)((char *)v166.m256i_i32 + 3);
      *(_DWORD *)v176 = v166.m256i_i32[0];
      *(_DWORD *)((char *)&v198 + 3) = *(_DWORD *)&v174[3];
      LODWORD(v198) = *(_DWORD *)v174;
      *(_DWORD *)((char *)v191 + 3) = *(_DWORD *)((char *)&v192 + 3);
      LODWORD(v191[0]) = v192;
      *(_QWORD *)v221 = *(_QWORD *)v215;
      v221[8] = v215[8];
      v221[16] = v215[16];
      *(_DWORD *)&v221[20] = *(__int32 *)((char *)v210.m256i_i32 + 3);
      *(_DWORD *)&v221[17] = v189[0];
      v221[24] = v215[24];
      *(_DWORD *)&v221[28] = *(_DWORD *)((char *)&v177 + 3);
      *(_DWORD *)&v221[25] = v201;
      v221[32] = v215[32];
      *(_DWORD *)&v221[36] = *(_DWORD *)&v175[3];
      *(_DWORD *)&v221[33] = v183;
      v221[40] = v215[40];
      *(_DWORD *)&v221[44] = *(_DWORD *)&v176[3];
      *(_DWORD *)&v221[41] = v166.m256i_i32[0];
      v221[48] = v215[48];
      *(_DWORD *)&v221[52] = *(_DWORD *)((char *)&v198 + 3);
      *(_DWORD *)&v221[49] = *(_DWORD *)v174;
      v221[56] = v215[56];
      *(_DWORD *)&v221[60] = *(_DWORD *)((char *)v191 + 3);
      *(_DWORD *)&v221[57] = v192;
      v221[64] = v215[64];
      *(_DWORD *)&v221[68] = *(_DWORD *)&v215[68];
      *(_DWORD *)&v221[65] = v196;
      *(_QWORD *)v226 = 0;
      *(_QWORD *)&v226[8] = 1;
      *(_QWORD *)&v226[16] = 0;
      *(_QWORD *)&v215[16] = 1610612768;
      *(_QWORD *)v215 = v226;
      *(_QWORD *)&v215[8] = &off_141AA1A90;
      v57 = sub_140D76130(v221, v215);
      v58 = v181;
      if ( v57 )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v237,
          (unsigned int)&unk_141A9F540,
          (__int64)&off_141AA1B48);
      v230 = *(_QWORD *)v226;
      v136 = *(_QWORD *)&v226[16];
      v227 = *(_QWORD *)&v226[8];
      v130 = *(_QWORD *)&v226[8];
      v120 = v209;
      sub_1407D7360((__int128 *)v226, v179, v241);
      if ( *(_DWORD *)v226 != -1 )
      {
        *(_OWORD *)&v215[80] = *(_OWORD *)&v226[80];
        *(_OWORD *)&v215[64] = *(_OWORD *)&v226[64];
        *(_OWORD *)&v215[48] = *(_OWORD *)&v226[48];
        *(_OWORD *)&v215[32] = *(_OWORD *)&v226[32];
        *(_OWORD *)&v215[16] = *(_OWORD *)&v226[16];
        *(_OWORD *)v215 = *(_OWORD *)v226;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)&v201 = v215;
          *((_QWORD *)&v201 + 1) = sub_140D76130;
          v210.m256i_i64[0] = (__int64)aCodexmateLibCo_49;
          v210.m256i_i64[1] = 45;
          v210.m256i_i64[2] = (__int64)aCodexmateLibCo_49;
          v210.m256i_i64[3] = 45;
          *(_QWORD *)&v211 = &off_141AA1958;
          sub_140AF72B0(&unk_141AA1920, &v201, 2, &v210);
        }
        sub_140D8A3A0(v215);
      }
      if ( v230 )
        sub_140001660(v227, v230, 1);
      v59 = sub_1416AED20(&v162);
      *(_OWORD *)v226 = 0x3E8 * (unsigned __int128)(unsigned __int64)v59 + v60 / 0xF4240uLL;
      *(_QWORD *)v215 = &v240;
      *(_QWORD *)&v215[8] = sub_1416E8600;
      *(_QWORD *)&v215[16] = v226;
      *(_QWORD *)&v215[24] = sub_1416E85A0;
      *(_QWORD *)&v215[32] = v221;
      *(_QWORD *)&v215[40] = sub_140D76130;
      sub_1416DAFA0(v142, &unk_141A9B96F, v215);
      sub_140DB20C0(v241, aStopFailed, 11, v142, 6, v120, *((_QWORD *)&v120 + 1), v130, v136);
      *(_OWORD *)(v58 + 80) = *(_OWORD *)&v221[80];
      *(_OWORD *)(v58 + 64) = *(_OWORD *)&v221[64];
      v18 = *(_OWORD *)v221;
      v61 = *(_OWORD *)&v221[16];
      v62 = *(_OWORD *)&v221[32];
      *(_OWORD *)(v58 + 48) = *(_OWORD *)&v221[48];
      *(_OWORD *)(v58 + 32) = v62;
      *(_OWORD *)(v58 + 16) = v61;
      *(_OWORD *)v58 = v18;
      v63 = v240;
      *(_BYTE *)(v58 + 96) = 1;
      *(_BYTE *)(v58 + 97) = v63;
      goto LABEL_252;
    }
    LODWORD(v189[0]) = *(_DWORD *)v226;
    *(_DWORD *)((char *)v189 + 3) = *(_DWORD *)&v226[3];
    LODWORD(v177) = v210.m256i_i32[0];
    *(_DWORD *)((char *)&v177 + 3) = *(__int32 *)((char *)v210.m256i_i32 + 3);
    *(_DWORD *)v175 = v201;
    *(_DWORD *)&v175[3] = *(_DWORD *)((char *)&v201 + 3);
    *(_DWORD *)v176 = v183;
    *(_DWORD *)&v176[3] = *(_DWORD *)((char *)&v183 + 3);
    *(_DWORD *)((char *)&v198 + 3) = *(__int32 *)((char *)v166.m256i_i32 + 3);
    LODWORD(v198) = v166.m256i_i32[0];
    *(_DWORD *)((char *)v191 + 3) = *(_DWORD *)&v174[3];
    LODWORD(v191[0]) = *(_DWORD *)v174;
    LODWORD(v196) = v192;
    *(_DWORD *)((char *)&v196 + 3) = *(_DWORD *)((char *)&v192 + 3);
    DWORD1(v158) = *(_DWORD *)&v226[3];
    *(_DWORD *)((char *)&v158 + 1) = v189[0];
    HIDWORD(v158) = *(__int32 *)((char *)v210.m256i_i32 + 3);
    *(_DWORD *)((char *)&v158 + 9) = v177;
    DWORD1(v159) = *(_DWORD *)((char *)&v201 + 3);
    *(_DWORD *)((char *)&v159 + 1) = *(_DWORD *)v175;
    HIDWORD(v159) = *(_DWORD *)((char *)&v183 + 3);
    *(_DWORD *)((char *)&v159 + 9) = *(_DWORD *)v176;
    DWORD1(v160) = *(_DWORD *)((char *)&v198 + 3);
    *(_DWORD *)((char *)&v160 + 1) = v166.m256i_i32[0];
    HIDWORD(v160) = *(_DWORD *)((char *)v191 + 3);
    *(_DWORD *)((char *)&v160 + 9) = *(_DWORD *)v174;
    HIDWORD(v161) = *(_DWORD *)((char *)&v192 + 3);
    *(_DWORD *)((char *)&v161 + 1) = v196;
    v220 = v215[56];
    LOBYTE(v158) = v215[8];
    BYTE8(v158) = v215[16];
    LOBYTE(v159) = v215[24];
    BYTE8(v159) = v215[32];
    LOBYTE(v160) = v215[40];
    BYTE8(v160) = v215[48];
    LOBYTE(v161) = v215[56];
    v236 = 1;
    v26 = sub_1416AED20(&v162);
    a1 = v181;
    a2 = v179;
    *(_OWORD *)v226 = 0x3E8 * (unsigned __int128)(unsigned __int64)v26 + v27 / 0xF4240uLL;
    *(_QWORD *)v215 = &v240;
    *(_QWORD *)&v215[8] = sub_1416E8600;
    *(_QWORD *)&v215[16] = v226;
    *(_QWORD *)&v215[24] = sub_1416E85A0;
    *(_QWORD *)&v215[32] = &v220;
    *(_QWORD *)&v215[40] = sub_1416EBC20;
    v236 = 1;
    sub_1416DAFA0(&v152, &unk_141A9B6EE, v215);
    v210.m256i_i8[0] = v241;
    v207 = v153;
    *(_OWORD *)v221 = v153;
    *(_QWORD *)v215 = &v210;
    *(_QWORD *)&v215[8] = sub_140ED78B0;
    *(_QWORD *)&v215[16] = v221;
    *(_QWORD *)&v215[24] = sub_140191200;
    sub_1416DAFA0(v226, &unk_141A9B450, v215);
    sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStopComplete, 13, (__int64)v226);
    if ( v152 )
      sub_140001660(v207, v152, 1);
    v236 = 1;
    sub_1407D2B10(
      (unsigned int)v215,
      (_DWORD)a2,
      v241,
      (unsigned int)&unk_141A9B71D,
      11,
      v209,
      *((__int64 *)&v209 + 1),
      v24,
      *((__int64 *)&v24 + 1),
      0);
    if ( *(_QWORD *)v215 == -1 )
    {
      v236 = 1;
      sub_1407B9160(*(_QWORD *)&v215[8]);
    }
    else
    {
      *(_QWORD *)&v226[88] = *(_QWORD *)&v215[88];
      *(_OWORD *)&v226[72] = *(_OWORD *)&v215[72];
      *(_OWORD *)&v226[56] = *(_OWORD *)&v215[56];
      *(_OWORD *)&v226[40] = *(_OWORD *)&v215[40];
      *(_OWORD *)&v226[24] = *(_OWORD *)&v215[24];
      *(_OWORD *)&v226[8] = *(_OWORD *)&v215[8];
      *(_QWORD *)v226 = *(_QWORD *)v215;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)v221 = v226;
        *(_QWORD *)&v221[8] = sub_140D76130;
        *(_QWORD *)&v215[48] = 2;
        *(_QWORD *)&v215[56] = aCodexmateLibCo_49;
        *(_QWORD *)&v215[64] = 45;
        *(_QWORD *)&v215[80] = &unk_141AA1920;
        *(_QWORD *)&v215[88] = v221;
        *(_QWORD *)v215 = 0;
        *(_QWORD *)&v215[8] = aCodexmateLibCo_49;
        *(_OWORD *)&v215[16] = 0x2Du;
        *(_QWORD *)&v215[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v215[40] = 35;
        *(_QWORD *)&v215[72] = 0x22E00000001LL;
        sub_141503E20(&v237, v215);
      }
      v236 = 1;
      sub_140D8A3A0(v226);
    }
    LODWORD(v28) = v240;
    if ( !*(_BYTE *)(v165 + 382) || (v236 = 1, sub_1407EC850(v215, v180), *(_QWORD *)v215 == -1) )
    {
      if ( (_BYTE)v28 == 1 )
      {
        v236 = 1;
        sub_1401B9E10((__int128 *)v215, v180, v171, v172, (__int128 *)aNativeoffCompe, 22, 0);
        v28 = *(_QWORD *)v215;
        *(_OWORD *)v221 = *(_OWORD *)&v215[8];
        *(_OWORD *)&v221[16] = *(_OWORD *)&v215[24];
        *(_OWORD *)&v221[32] = *(_OWORD *)&v215[40];
        *(_QWORD *)&v221[48] = *(_QWORD *)&v215[56];
        if ( *(_QWORD *)v215 == -1 )
        {
LABEL_45:
          v210 = *(__m256i *)v221;
          v211 = *(_OWORD *)&v221[32];
          *(_QWORD *)&v212 = *(_QWORD *)&v221[48];
          sub_14022C070(v221, &v210.m256i_u64[3]);
          *(_QWORD *)&v215[48] = v212;
          *(_OWORD *)&v215[32] = v211;
          *(__m256i *)v215 = v210;
          *(_QWORD *)&v215[72] = *(_QWORD *)&v221[16];
          *(_OWORD *)&v215[56] = *(_OWORD *)v221;
          *(__m256i *)v226 = v210;
          *(_OWORD *)&v226[32] = v211;
          *(_OWORD *)&v226[48] = *(_OWORD *)&v215[48];
          *(_OWORD *)&v226[64] = *(_OWORD *)&v215[64];
LABEL_46:
          *(_QWORD *)&v174[88] = *(_QWORD *)&v226[72];
          *(_OWORD *)&v174[72] = *(_OWORD *)&v226[56];
          *(_QWORD *)&v174[64] = *(_QWORD *)&v226[48];
          *(_OWORD *)&v174[48] = *(_OWORD *)&v226[32];
          *(_OWORD *)&v174[32] = *(_OWORD *)&v226[16];
          *(_OWORD *)&v174[16] = *(_OWORD *)v226;
          *(_QWORD *)&v174[8] = 0;
          goto LABEL_47;
        }
      }
      else
      {
        v236 = 1;
        sub_1401B9E10((__int128 *)v215, v180, v171, v172, (__int128 *)aNativeoffCompe_0, 31, 0);
        v28 = *(_QWORD *)v215;
        *(_OWORD *)v221 = *(_OWORD *)&v215[8];
        *(_OWORD *)&v221[16] = *(_OWORD *)&v215[24];
        *(_OWORD *)&v221[32] = *(_OWORD *)&v215[40];
        *(_QWORD *)&v221[48] = *(_QWORD *)&v215[56];
        if ( *(_QWORD *)v215 == -1 )
          goto LABEL_45;
      }
      *(_OWORD *)&v226[72] = *(_OWORD *)&v215[80];
      *(_OWORD *)&v226[56] = *(_OWORD *)&v215[64];
      *(_OWORD *)v226 = *(_OWORD *)v221;
      *(_OWORD *)&v226[16] = *(_OWORD *)&v221[16];
      *(_OWORD *)&v226[32] = *(_OWORD *)&v221[32];
      *(_QWORD *)&v226[48] = *(_QWORD *)&v221[48];
      if ( (_DWORD)v28 == -1 )
        goto LABEL_46;
      *(_QWORD *)&v174[88] = *(_QWORD *)&v226[80];
      *(_OWORD *)&v174[72] = *(_OWORD *)&v226[64];
      *(_OWORD *)&v174[56] = *(_OWORD *)&v226[48];
      *(_OWORD *)&v174[40] = *(_OWORD *)&v226[32];
      *(_OWORD *)&v174[24] = *(_OWORD *)&v226[16];
      *(_OWORD *)&v174[8] = *(_OWORD *)v226;
LABEL_47:
      *(_QWORD *)v174 = v28;
      goto LABEL_48;
    }
    *(_OWORD *)&v174[80] = *(_OWORD *)&v215[80];
    *(_OWORD *)&v174[64] = *(_OWORD *)&v215[64];
    *(_OWORD *)&v174[48] = *(_OWORD *)&v215[48];
    *(_QWORD *)v174 = *(_QWORD *)v215;
    *(_OWORD *)&v174[8] = *(_OWORD *)&v215[8];
    *(_OWORD *)&v174[24] = *(_OWORD *)&v215[24];
    *(_QWORD *)&v174[40] = *(_QWORD *)&v215[40];
LABEL_48:
    *(_QWORD *)&v215[48] = v161;
    *(_OWORD *)&v215[32] = v160;
    *(_OWORD *)&v215[16] = v159;
    *(_OWORD *)v215 = v158;
    v229[1] = 1;
    sub_1409349D0(&v166, v215);
    *(_OWORD *)&v215[80] = *(_OWORD *)&v174[80];
    *(_OWORD *)&v215[64] = *(_OWORD *)&v174[64];
    *(_OWORD *)&v215[48] = *(_OWORD *)&v174[48];
    *(_OWORD *)&v215[32] = *(_OWORD *)&v174[32];
    *(_OWORD *)&v215[16] = *(_OWORD *)&v174[16];
    *(_OWORD *)v215 = *(_OWORD *)v174;
    v219 = v170;
    v218 = v169;
    v217 = v168;
    v216 = v167;
    *(__m256i *)&v215[96] = v166;
    if ( *(_QWORD *)v174 == -1 )
    {
      if ( *(_QWORD *)&v215[96] != -1 )
      {
        v173 = *(_QWORD *)v215;
        v214 = v170;
        v213 = v169;
        v212 = v168;
        v211 = v167;
        v210 = v166;
        *(_QWORD *)v221 = 0;
        *(_QWORD *)&v221[8] = 1;
        *(_QWORD *)&v221[16] = 0;
        *(_QWORD *)&v226[16] = 1610612768;
        *(_QWORD *)v226 = v221;
        *(_QWORD *)&v226[8] = &off_141AA1A90;
        if ( (unsigned __int8)sub_140D76130(&v210, v226) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v237,
            (unsigned int)&unk_141A9F540,
            (__int64)&off_141AA1B48);
        v230 = *(_QWORD *)v221;
        v137 = *(_QWORD *)&v221[16];
        v227 = *(_QWORD *)&v221[8];
        v132 = *(_QWORD *)&v221[8];
        v123 = v209;
        sub_1407D7360((__int128 *)v221, a2, v241);
        if ( *(_DWORD *)v221 != -1 )
        {
          *(_OWORD *)&v226[80] = *(_OWORD *)&v221[80];
          *(_OWORD *)&v226[64] = *(_OWORD *)&v221[64];
          *(_OWORD *)&v226[48] = *(_OWORD *)&v221[48];
          *(_OWORD *)&v226[32] = *(_OWORD *)&v221[32];
          *(_OWORD *)&v226[16] = *(_OWORD *)&v221[16];
          *(_OWORD *)v226 = *(_OWORD *)v221;
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            *(_QWORD *)&v183 = v226;
            *((_QWORD *)&v183 + 1) = sub_140D76130;
            *(_QWORD *)&v201 = aCodexmateLibCo_49;
            *((_QWORD *)&v201 + 1) = 45;
            *(_QWORD *)v202 = aCodexmateLibCo_49;
            *(_QWORD *)&v202[8] = 45;
            *(_QWORD *)&v202[16] = &off_141AA1958;
            sub_140AF72B0(&unk_141AA1920, &v183, 2, &v201);
          }
          sub_140D8A3A0(v226);
        }
        if ( v230 )
          sub_140001660(v227, v230, 1);
        *(_QWORD *)v226 = &v240;
        *(_QWORD *)&v226[8] = sub_1416E8600;
        *(_QWORD *)&v226[16] = &v210;
        *(_QWORD *)&v226[24] = sub_140D76130;
        sub_1416DAFA0(v141, &unk_141A9B8A8, v226);
        sub_140DB20C0(v241, aSettleFailed, 13, v141, 6, v123, *((_QWORD *)&v123 + 1), v132, v137);
        *(_OWORD *)(a1 + 80) = v214;
        *(_OWORD *)(a1 + 64) = v213;
        v18 = *(_OWORD *)v210.m256i_i8;
        v75 = *(_OWORD *)&v210.m256i_u64[2];
        v76 = v211;
        *(_OWORD *)(a1 + 48) = v212;
        *(_OWORD *)(a1 + 32) = v76;
        *(_OWORD *)(a1 + 16) = v75;
        *(_OWORD *)a1 = v18;
        v77 = v240;
        *(_BYTE *)(a1 + 96) = 3;
        *(_BYTE *)(a1 + 97) = v77;
        sub_140D8A7D0(&v215[8]);
        sub_1402346F0(&v215[72]);
        v78 = *(_QWORD *)&v215[72];
        if ( !*(_QWORD *)&v215[72] )
          goto LABEL_252;
        v79 = *(_QWORD *)&v215[80];
LABEL_195:
        v85 = 24 * v78;
        goto LABEL_236;
      }
      *(_QWORD *)&v188 = *(_QWORD *)&v174[88];
      v187 = *(_OWORD *)&v174[72];
      v186 = *(_OWORD *)&v174[56];
      v185 = *(_OWORD *)&v174[40];
      v184 = *(_OWORD *)&v174[24];
      v183 = *(_OWORD *)&v174[8];
      v205 = *(_DWORD *)&v215[104];
      v206 = v215[108];
      v224 = 1;
      v223 = 1;
      sub_140EAD220((unsigned int)&v198, a7, a8, 0, (*(_DWORD *)&v215[104] == 0) & (v215[108] ^ 1));
      v33 = v200;
      if ( !v200 )
      {
        if ( (v205 || (v206 & 1) != 0) && *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)v215 = &v241;
          *(_QWORD *)&v215[8] = sub_140ED78B0;
          *(_QWORD *)&v215[16] = &v240;
          *(_QWORD *)&v215[24] = sub_1416E8600;
          *(_QWORD *)&v215[32] = &v205;
          *(_QWORD *)&v215[40] = sub_1416EACD0;
          *(_QWORD *)&v215[48] = &v206;
          *(_QWORD *)&v215[56] = sub_1416EBC20;
          *(_QWORD *)v226 = aCodexmateLibCo_49;
          *(_QWORD *)&v226[8] = 45;
          *(_QWORD *)&v226[16] = aCodexmateLibCo_49;
          *(_QWORD *)&v226[24] = 45;
          *(_QWORD *)&v226[32] = &off_141A9B7A0;
          v233 = 1;
          v232 = 1;
          sub_140AF72B0(&unk_141A9B728, v215, 2, v226);
        }
        *(_QWORD *)&v204 = v188;
        v203 = v187;
        *(_OWORD *)&v202[32] = v186;
        *(_OWORD *)&v202[16] = v185;
        *(_OWORD *)v202 = v184;
        v201 = v183;
        LOBYTE(v28) = v241;
        v80 = v209;
        v190 = v209;
        v239 = 1;
        v238 = 1;
        v196 = sub_1416AEBD0();
        v197 = v81;
        v239 = 1;
        v238 = 1;
        sub_1407D5A90((unsigned int)v215, (_DWORD)a2, v28, v80, *((__int64 *)&v80 + 1));
        if ( *(_DWORD *)v215 != -1 )
        {
          v214 = *(_OWORD *)&v215[80];
          v213 = *(_OWORD *)&v215[64];
          v212 = *(_OWORD *)&v215[48];
          v211 = *(_OWORD *)&v215[32];
          v210 = *(__m256i *)v215;
          goto LABEL_199;
        }
        *(_QWORD *)v226 = &v201;
        *(_OWORD *)&v226[8] = v147;
        v88 = *(_BYTE *)(a10 + 382);
        v239 = 1;
        v238 = 1;
        sub_140EA2DA0((unsigned int)&v210, a9, v201, v202[40], v88, (__int64)&v226[8]);
        if ( v210.m256i_i64[0] != -1 )
        {
LABEL_199:
          *(_OWORD *)&v221[80] = v214;
          *(_OWORD *)&v221[64] = v213;
          *(_OWORD *)&v221[48] = v212;
          *(_OWORD *)&v221[32] = v211;
          *(__m256i *)v221 = v210;
          v89 = v190;
          *(_QWORD *)v226 = 0;
          *(_QWORD *)&v226[8] = 1;
          *(_QWORD *)&v226[16] = 0;
          *(_QWORD *)&v215[16] = 1610612768;
          *(_QWORD *)v215 = v226;
          *(_QWORD *)&v215[8] = &off_141AA1A90;
          if ( (unsigned __int8)sub_140D76130(v221, v215) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v237,
              (unsigned int)&unk_141A9F540,
              (__int64)&off_141AA1B48);
          v227 = *(_QWORD *)&v226[8];
          v230 = *(_QWORD *)v226;
          v133 = *(_OWORD *)&v226[8];
          sub_1407D7360((__int128 *)v226, a2, (unsigned int)v28);
          if ( *(_DWORD *)v226 != -1 )
          {
            *(_OWORD *)&v215[80] = *(_OWORD *)&v226[80];
            *(_OWORD *)&v215[64] = *(_OWORD *)&v226[64];
            *(_OWORD *)&v215[48] = *(_OWORD *)&v226[48];
            *(_OWORD *)&v215[32] = *(_OWORD *)&v226[32];
            *(_OWORD *)&v215[16] = *(_OWORD *)&v226[16];
            *(_OWORD *)v215 = *(_OWORD *)v226;
            if ( *(_QWORD *)off_14223FF10 >= 2u )
            {
              v191[0] = v215;
              v191[1] = sub_140D76130;
              *(_QWORD *)&v192 = aCodexmateLibCo_49;
              *((_QWORD *)&v192 + 1) = 45;
              *(_QWORD *)&v193 = aCodexmateLibCo_49;
              *((_QWORD *)&v193 + 1) = 45;
              *(_QWORD *)&v194 = &off_141AA1958;
              sub_140AF72B0(&unk_141AA1920, v191, 2, &v192);
            }
            sub_140D8A3A0(v215);
          }
          if ( v230 )
            sub_140001660(v227, v230, 1);
          *(_QWORD *)v215 = &v190;
          *(_QWORD *)&v215[8] = sub_140191200;
          *(_QWORD *)&v215[16] = v221;
          *(_QWORD *)&v215[24] = sub_140D76130;
          sub_1416DAFA0(v226, &unk_141A9B651, v215);
          sub_140DB20C0(
            (unsigned int)v28,
            aCommitFailed,
            13,
            v226,
            13,
            v89,
            *((_QWORD *)&v89 + 1),
            v133,
            *((_QWORD *)&v133 + 1));
          v90 = *(_QWORD *)&v221[8];
          v91 = *(_QWORD *)v221;
          v93 = *(_QWORD *)&v221[24];
          v92 = *(_OWORD **)&v221[16];
          v192 = *(_OWORD *)&v221[32];
          v193 = *(_OWORD *)&v221[48];
          v194 = *(_OWORD *)&v221[64];
          v195 = *(_OWORD *)&v221[80];
          sub_140D8A7D0(&v201);
          v94 = 1;
          goto LABEL_207;
        }
        v239 = 1;
        v238 = 1;
        v98 = sub_1407B92D0(v210.m256i_i64[1]);
        if ( v98 )
        {
          v101 = v98 & 3;
          v230 = v98;
          switch ( v98 & 3 )
          {
            case 0uLL:
              LOBYTE(v98) = *(_BYTE *)(v98 + 16);
              break;
            case 1uLL:
              LOBYTE(v98) = *(_BYTE *)(v98 + 31);
              break;
            case 2uLL:
              v231 = 1;
              v104 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v100, v99) + 8);
              v231 = 1;
              LOBYTE(v98) = v104(HIDWORD(v230));
              break;
            case 3uLL:
              v98 >>= 32;
              break;
          }
          v226[0] = v98;
          *(_QWORD *)v215 = v226;
          *(_QWORD *)&v215[8] = sub_140EDB0F0;
          v231 = 1;
          sub_1416DAFA0(v176, &unk_141A9B46E, v215);
          v231 = 1;
          sub_140DB20C0((unsigned int)v28, aCommitSyncUnco, 23, v176, v117, v124, v126, v128, v134);
          v105 = *((_QWORD *)a2 + 97);
          v106 = *((_QWORD *)a2 + 98);
          v231 = 1;
          sub_1407D3B80(
            v105,
            v106,
            v28,
            (unsigned int)&unk_141A4A03B,
            23,
            v190,
            *((__int64 *)&v190 + 1),
            (__int64)&unk_141A4A42A,
            28);
          v210.m256i_i64[2] = v204;
          *(_OWORD *)v210.m256i_i8 = v203;
          sub_1407D7410(v215);
          *(_QWORD *)v221 = 0;
          *(_QWORD *)&v221[8] = 1;
          *(_QWORD *)&v221[16] = 0;
          *(_QWORD *)&v226[16] = 1610612768;
          *(_QWORD *)v226 = v221;
          *(_QWORD *)&v226[8] = &off_141AA1A90;
          if ( (unsigned __int8)sub_140D76130(v215, v226) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v237,
              (unsigned int)&unk_141A9F540,
              (__int64)&off_141AA1B48);
          v207 = *(_QWORD *)&v221[8];
          v227 = *(_QWORD *)v221;
          v107 = *(_QWORD *)&v221[16];
          v108 = v210.m256i_i64[2];
          if ( v210.m256i_i64[2] == v210.m256i_i64[0] )
            sub_141939F90(&v210);
          v109 = v210.m256i_i64[1];
          v110 = 3 * v108;
          *(_QWORD *)(v210.m256i_i64[1] + 8 * v110) = v227;
          *(_QWORD *)(v109 + 8 * v110 + 8) = v207;
          *(_QWORD *)(v109 + 8 * v110 + 16) = v107;
          v210.m256i_i64[2] = v108 + 1;
          sub_140D8A3A0(v215);
          v192 = v201;
          v193 = *(_OWORD *)v202;
          v194 = *(_OWORD *)&v202[16];
          v195 = *(_OWORD *)&v202[32];
          v92 = (_OWORD *)v210.m256i_i64[1];
          v90 = v210.m256i_i64[0];
          v93 = v210.m256i_i64[2];
          if ( (unsigned int)(v101 - 2) >= 2 && v101 )
          {
            *(_QWORD *)&v215[8] = v230 - 1;
            v215[0] = 3;
            v239 = 0;
            v238 = 0;
            sub_1416EBAD0(&v215[8]);
          }
          v91 = 2;
          goto LABEL_233;
        }
        if ( (_QWORD)v204 )
        {
          v239 = 1;
          v238 = 1;
          sub_1406C5480((unsigned int)v215, DWORD2(v203), v204, (unsigned int)&unk_141A9B28E, 3);
          v227 = *(_QWORD *)&v215[8];
          v230 = *(_QWORD *)v215;
          sub_1407D7100(
            (unsigned int)v226,
            (_DWORD)a2,
            v28,
            v190,
            *((__int64 *)&v190 + 1),
            *(__int64 *)&v215[8],
            *(__int64 *)&v215[16]);
          if ( *(_DWORD *)v226 != -1 )
          {
            *(_OWORD *)&v215[80] = *(_OWORD *)&v226[80];
            *(_OWORD *)&v215[64] = *(_OWORD *)&v226[64];
            *(_OWORD *)&v215[48] = *(_OWORD *)&v226[48];
            *(_OWORD *)&v215[32] = *(_OWORD *)&v226[32];
            *(_OWORD *)&v215[16] = *(_OWORD *)&v226[16];
            *(_OWORD *)v215 = *(_OWORD *)v226;
            if ( *(_QWORD *)off_14223FF10 >= 2u )
            {
              v210.m256i_i64[0] = (__int64)v215;
              v210.m256i_i64[1] = (__int64)sub_140D76130;
              *(_QWORD *)v221 = aCodexmateLibCo_49;
              *(_QWORD *)&v221[8] = 45;
              *(_QWORD *)&v221[16] = aCodexmateLibCo_49;
              *(_QWORD *)&v221[24] = 45;
              *(_QWORD *)&v221[32] = &off_141A9B5E8;
              sub_140AF72B0(&unk_141A9B5A6, &v210, 2, v221);
            }
            sub_140D8A3A0(v215);
          }
          if ( v230 )
            sub_140001660(v227, v230, 1);
          v239 = 1;
          v238 = 1;
          v102 = sub_1416AED20(&v196);
          *(_OWORD *)v226 = 0x3E8 * (unsigned __int128)(unsigned __int64)v102 + v103 / 0xF4240uLL;
          *(_QWORD *)v221 = v204;
          *(_QWORD *)v215 = &v190;
          *(_QWORD *)&v215[8] = sub_140191200;
          *(_QWORD *)&v215[16] = v226;
          *(_QWORD *)&v215[24] = sub_1416E85A0;
          *(_QWORD *)&v215[32] = v221;
          *(_QWORD *)&v215[40] = sub_1416EBAE0;
          v239 = 1;
          v238 = 1;
          sub_1416DAFA0(v175, &unk_141A9B600, v215);
          v239 = 1;
          v238 = 1;
          sub_140DB20C0((unsigned int)v28, aDegraded, 8, v175, v118, v125, v127, v128, v134);
          v195 = *(_OWORD *)&v202[32];
          v194 = *(_OWORD *)&v202[16];
          v193 = *(_OWORD *)v202;
          v192 = v201;
          v92 = *((_OWORD **)&v203 + 1);
          v90 = v203;
          v91 = 1;
          v93 = v204;
          goto LABEL_233;
        }
        v239 = 1;
        v238 = 1;
        sub_1407D2600(v226, a2, (unsigned int)v28);
        if ( *(_DWORD *)v226 == -1 )
        {
          v239 = 1;
          v238 = 1;
          v113 = sub_1416AED20(&v196);
          *(_OWORD *)v226 = 0x3E8 * (unsigned __int128)(unsigned __int64)v113 + v114 / 0xF4240uLL;
          *(_QWORD *)v215 = &v190;
          *(_QWORD *)&v215[8] = sub_140191200;
          *(_QWORD *)&v215[16] = v226;
          *(_QWORD *)&v215[24] = sub_1416E85A0;
          v239 = 1;
          v238 = 1;
          sub_1416DAFA0(v189, &unk_141A9B581, v215);
          v239 = 1;
          v238 = 1;
          sub_140DB20C0((unsigned int)v28, aStable, 6, v189, v117, v124, v126, v128, v134);
          v92 = *((_OWORD **)&v201 + 1);
          v90 = v201;
          v93 = *(_QWORD *)v202;
          v192 = *(_OWORD *)&v202[8];
          v193 = *(_OWORD *)&v202[24];
          *(_QWORD *)&v194 = *(_QWORD *)&v202[40];
          sub_1400290B0(&v203);
          v91 = 0;
          goto LABEL_233;
        }
        *(_OWORD *)&v215[80] = *(_OWORD *)&v226[80];
        *(_OWORD *)&v215[64] = *(_OWORD *)&v226[64];
        *(_OWORD *)&v215[48] = *(_OWORD *)&v226[48];
        *(_OWORD *)&v215[32] = *(_OWORD *)&v226[32];
        *(_OWORD *)&v215[16] = *(_OWORD *)&v226[16];
        *(_OWORD *)v215 = *(_OWORD *)v226;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          v210.m256i_i64[0] = (__int64)v215;
          v210.m256i_i64[1] = (__int64)sub_140D76130;
          *(_QWORD *)v221 = aCodexmateLibCo_49;
          *(_QWORD *)&v221[8] = 45;
          *(_QWORD *)&v221[16] = aCodexmateLibCo_49;
          *(_QWORD *)&v221[24] = 45;
          *(_QWORD *)&v221[32] = &off_141A9B500;
          v222 = 1;
          sub_140AF72B0(&unk_141A9B48D, &v210, 2, v221);
        }
        *(_OWORD *)&v221[48] = *(_OWORD *)&v202[32];
        *(_OWORD *)&v221[32] = *(_OWORD *)&v202[16];
        *(_OWORD *)&v221[16] = *(_OWORD *)v202;
        *(_OWORD *)v221 = v201;
        v230 = sub_14017AA90();
        v210.m256i_i64[0] = (__int64)v215;
        v210.m256i_i64[1] = (__int64)sub_140D76130;
        sub_1416DAFA0(&v177, &unk_141A9B545, &v210);
        v92 = (_OWORD *)v230;
        *(_QWORD *)(v230 + 16) = v178;
        *v92 = v177;
        v192 = *(_OWORD *)v221;
        v193 = *(_OWORD *)&v221[16];
        v194 = *(_OWORD *)&v221[32];
        v195 = *(_OWORD *)&v221[48];
        v239 = 0;
        v238 = 1;
        sub_140D8A3A0(v215);
        a1 = v181;
        v90 = 1;
        v94 = 0;
        v93 = 1;
        v91 = 1;
LABEL_207:
        sub_1402346F0(&v203);
        if ( (_QWORD)v203 )
          sub_140001660(*((_QWORD *)&v203 + 1), 24 * v203, 8);
        if ( v94 )
        {
          v18 = v192;
          v95 = v193;
          v96 = v194;
          *(_OWORD *)(a1 + 80) = v195;
          *(_OWORD *)(a1 + 64) = v96;
          *(_OWORD *)(a1 + 48) = v95;
          *(_OWORD *)(a1 + 32) = v18;
          v97 = v240;
          *(_QWORD *)a1 = v91;
          *(_QWORD *)(a1 + 8) = v90;
          *(_QWORD *)(a1 + 16) = v92;
          *(_QWORD *)(a1 + 24) = v93;
          *(_BYTE *)(a1 + 96) = 5;
          *(_BYTE *)(a1 + 97) = v97;
        }
        else
        {
LABEL_233:
          v18 = v192;
          v111 = v193;
          v112 = v194;
          *(_OWORD *)(a1 + 88) = v195;
          *(_OWORD *)(a1 + 72) = v112;
          *(_OWORD *)(a1 + 56) = v111;
          *(_OWORD *)(a1 + 40) = v18;
          *(_QWORD *)(a1 + 8) = v91;
          *(_QWORD *)(a1 + 16) = v90;
          *(_QWORD *)(a1 + 24) = v92;
          *(_QWORD *)(a1 + 32) = v93;
          *(_QWORD *)a1 = -1;
        }
        sub_140234510(&v198);
        if ( !v198 )
          goto LABEL_252;
        v79 = v199;
        v85 = 32 * v198;
LABEL_236:
        *(double *)&v18 = sub_140001660(v79, v85, 8);
        goto LABEL_252;
      }
      v34 = v199;
      v233 = 1;
      v232 = 1;
      sub_140226C80(v226, v199, v199 + 32 * v200);
      v35 = *(_QWORD *)&v226[8];
      v36 = *(_QWORD *)&v226[16];
      sub_1406C5480((unsigned int)v215, *(_DWORD *)&v226[8], *(_DWORD *)&v226[16], (unsigned int)&unk_141A9B28E, 3);
      v210.m256i_i64[2] = *(_QWORD *)&v215[16];
      *(_OWORD *)v210.m256i_i8 = *(_OWORD *)v215;
      if ( v36 )
      {
        v37 = (_QWORD *)(v35 + 8);
        do
        {
          v38 = *(v37 - 1);
          if ( v38 )
            sub_140001660(*v37, v38, 1);
          v37 += 3;
          --v36;
        }
        while ( v36 );
      }
      if ( *(_QWORD *)v226 )
        sub_140001660(v35, 24LL * *(_QWORD *)v226, 8);
      v235 = 1;
      v234 = 1;
      v39 = sub_1416AEBD0();
      a2 = v179;
      v41 = v229[0];
      if ( v229[0] )
      {
        *(_QWORD *)&v221[16] = *(_QWORD *)&v174[88];
        *(_OWORD *)v221 = *(_OWORD *)&v174[72];
        *(_QWORD *)v215 = &v210;
        *(_QWORD *)&v215[8] = sub_1400015F0;
        v228 = 1;
        sub_1416DAFA0(v139, &unk_141A9B806, v215);
        v228 = 1;
        sub_1401E7610(v221, v139);
        *(_OWORD *)&v226[48] = *(_OWORD *)&v174[56];
        *(_OWORD *)&v226[32] = *(_OWORD *)&v174[40];
        *(_OWORD *)&v226[16] = *(_OWORD *)&v174[24];
        *(_OWORD *)v226 = *(_OWORD *)&v174[8];
        *(_OWORD *)&v226[64] = *(_OWORD *)v221;
        *(_QWORD *)&v226[80] = *(_QWORD *)&v221[16];
        v228 = 0;
        sub_140DB4520(
          (unsigned int)v215,
          (_DWORD)a2,
          v241,
          v209,
          *((__int64 *)&v209 + 1),
          (__int64)v226,
          a9,
          a10,
          (__int64)&v147);
        if ( v215[0] )
        {
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v215[88];
          *(_OWORD *)(a1 + 64) = *(_OWORD *)&v215[72];
          v18 = *(_OWORD *)&v215[8];
          v82 = *(_OWORD *)&v215[24];
          v83 = *(_OWORD *)&v215[40];
          *(_OWORD *)(a1 + 48) = *(_OWORD *)&v215[56];
          *(_OWORD *)(a1 + 32) = v83;
          *(_OWORD *)(a1 + 16) = v82;
          *(_OWORD *)a1 = v18;
          v74 = v240;
          *(_BYTE *)(a1 + 96) = 5;
          goto LABEL_188;
        }
        *(_OWORD *)(a1 + 88) = *(_OWORD *)&v215[88];
        *(_OWORD *)(a1 + 72) = *(_OWORD *)&v215[72];
        v18 = *(_OWORD *)&v215[8];
        v86 = *(_OWORD *)&v215[24];
        v87 = *(_OWORD *)&v215[40];
        *(_OWORD *)(a1 + 56) = *(_OWORD *)&v215[56];
        *(_OWORD *)(a1 + 40) = v87;
        *(_OWORD *)(a1 + 24) = v86;
        *(_OWORD *)(a1 + 8) = v18;
        *(_QWORD *)a1 = -1;
        v84 = v210.m256i_i64[0];
        if ( !v210.m256i_i64[0] )
        {
LABEL_190:
          sub_140234510(&v198);
          if ( v198 )
            *(double *)&v18 = sub_140001660(v34, 32 * v198, 8);
          if ( v41 )
            goto LABEL_252;
          sub_140D8A7D0(&v183);
          sub_1402346F0(&v187);
          v78 = v187;
          if ( !(_QWORD)v187 )
            goto LABEL_252;
          v79 = *((_QWORD *)&v187 + 1);
          goto LABEL_195;
        }
LABEL_189:
        *(double *)&v18 = sub_140001660(v210.m256i_i64[1], v84, 1);
        goto LABEL_190;
      }
      if ( v205 )
      {
        if ( v240 > 2u )
          goto LABEL_168;
      }
      else if ( v240 > 2u || (v206 & 1) == 0 )
      {
        goto LABEL_168;
      }
      if ( v208 == -1 )
      {
        v235 = 1;
        v234 = 1;
        v182 = sub_1416D0210(v39, v40, 12, 0, (__int64)&off_141AA1908);
        v208 = v48;
        if ( *(_QWORD *)off_14223FF10 < 2u )
          goto LABEL_98;
LABEL_97:
        *(_QWORD *)v226 = &v241;
        *(_QWORD *)&v226[8] = sub_140ED78B0;
        *(_QWORD *)&v226[16] = &v240;
        *(_QWORD *)&v226[24] = sub_1416E8600;
        *(_QWORD *)&v226[32] = &v210;
        *(_QWORD *)&v226[40] = sub_1400015F0;
        *(_QWORD *)&v215[48] = 2;
        *(_QWORD *)&v215[56] = aCodexmateLibCo_49;
        *(_QWORD *)&v215[64] = 45;
        *(_QWORD *)&v215[80] = &unk_141A9B843;
        *(_QWORD *)&v215[88] = v226;
        *(_QWORD *)v215 = 0;
        *(_QWORD *)&v215[8] = aCodexmateLibCo_49;
        *(_OWORD *)&v215[16] = 0x2Du;
        *(_QWORD *)&v215[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v215[40] = 35;
        *(_QWORD *)&v215[72] = 0x17D00000001LL;
        v235 = 1;
        v234 = 1;
        sub_141503E20(&v237, v215);
        goto LABEL_98;
      }
      v46 = v40 < v208;
      v47 = v39 < v182;
      if ( v39 == v182 )
        v47 = v46;
      if ( !v47 )
      {
LABEL_168:
        *(_QWORD *)v215 = &v241;
        *(_QWORD *)&v215[8] = sub_140ED78B0;
        *(_QWORD *)&v215[16] = &v210;
        *(_QWORD *)&v215[24] = sub_1400015F0;
        v235 = 1;
        v234 = 1;
        sub_1416DAFA0(&v143, &unk_141A9B7B8, v215);
        *(_OWORD *)&v215[8] = v143;
        *(_QWORD *)&v215[24] = v144;
        *(_QWORD *)v215 = 10;
        sub_140EDA570(v226, v215);
        v122 = *(_QWORD *)&v226[16];
        v230 = *(_QWORD *)&v226[8];
        v116 = *(_QWORD *)&v226[8];
        sub_140ED3800(a2);
        if ( *(_QWORD *)v226 )
          sub_140001660(v230, *(_QWORD *)v226, 1);
        *(_QWORD *)v221 = v33;
        *(_QWORD *)v226 = &v240;
        *(_QWORD *)&v226[8] = sub_1416E8600;
        *(_QWORD *)&v226[16] = v221;
        *(_QWORD *)&v226[24] = sub_1416EBAE0;
        sub_1416DAFA0(v138, &unk_141A9B7D9, v226);
        sub_140DB20C0(v241, aPostconditionF, 20, v138, v116, v122, v126, v128, v134);
        *(_OWORD *)(a1 + 80) = *(_OWORD *)&v215[80];
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v215[64];
        v18 = *(_OWORD *)v215;
        v72 = *(_OWORD *)&v215[16];
        v73 = *(_OWORD *)&v215[32];
        *(_OWORD *)(a1 + 48) = *(_OWORD *)&v215[48];
        *(_OWORD *)(a1 + 32) = v73;
        *(_OWORD *)(a1 + 16) = v72;
        *(_OWORD *)a1 = v18;
        v74 = v240;
        *(_BYTE *)(a1 + 96) = 4;
LABEL_188:
        *(_BYTE *)(a1 + 97) = v74;
        v84 = v210.m256i_i64[0];
        if ( !v210.m256i_i64[0] )
          goto LABEL_190;
        goto LABEL_189;
      }
      if ( *(_QWORD *)off_14223FF10 >= 2u )
        goto LABEL_97;
LABEL_98:
      v235 = 1;
      v234 = 1;
      sub_1407D2B10(
        (unsigned int)v215,
        (_DWORD)a2,
        v241,
        (unsigned int)&unk_141A9B8A0,
        8,
        v209,
        *((__int64 *)&v209 + 1),
        v210.m256i_i64[1],
        v210.m256i_i64[2],
        0);
      if ( *(_QWORD *)v215 == -1 )
      {
        v235 = 1;
        v234 = 1;
        sub_1407B9160(*(_QWORD *)&v215[8]);
      }
      else
      {
        *(_QWORD *)&v226[88] = *(_QWORD *)&v215[88];
        *(_OWORD *)&v226[72] = *(_OWORD *)&v215[72];
        *(_OWORD *)&v226[56] = *(_OWORD *)&v215[56];
        *(_OWORD *)&v226[40] = *(_OWORD *)&v215[40];
        *(_OWORD *)&v226[24] = *(_OWORD *)&v215[24];
        *(_OWORD *)&v226[8] = *(_OWORD *)&v215[8];
        *(_QWORD *)v226 = *(_QWORD *)v215;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)v221 = v226;
          *(_QWORD *)&v221[8] = sub_140D76130;
          *(_QWORD *)&v215[48] = 2;
          *(_QWORD *)&v215[56] = aCodexmateLibCo_49;
          *(_QWORD *)&v215[64] = 45;
          *(_QWORD *)&v215[80] = &unk_141AA1920;
          *(_QWORD *)&v215[88] = v221;
          *(_QWORD *)v215 = 0;
          *(_QWORD *)&v215[8] = aCodexmateLibCo_49;
          *(_OWORD *)&v215[16] = 0x2Du;
          *(_QWORD *)&v215[32] = aSrcCoreRelayRo_1;
          *(_QWORD *)&v215[40] = 35;
          *(_QWORD *)&v215[72] = 0x22E00000001LL;
          sub_141503E20(&v237, v215);
        }
        v235 = 1;
        v234 = 1;
        sub_140D8A3A0(v226);
      }
      if ( v210.m256i_i64[0] )
        sub_140001660(v210.m256i_i64[1], v210.m256i_i64[0], 1);
      v49 = (_QWORD *)(v34 + 8);
      do
      {
        v50 = *(v49 - 1);
        if ( v50 )
          sub_140001660(*v49, v50, 1);
        v49 += 4;
        --v33;
      }
      while ( v33 );
      if ( v198 )
        sub_140001660(v34, 32 * v198, 8);
      sub_140D8A7D0(&v183);
      v51 = *((_QWORD *)&v187 + 1);
      v52 = v188;
      if ( (_QWORD)v188 )
      {
        v53 = (_QWORD *)(*((_QWORD *)&v187 + 1) + 8LL);
        do
        {
          v19 = *(v53 - 1);
          if ( v19 )
            sub_140001660(*v53, v19, 1);
          v53 += 3;
          --v52;
        }
        while ( v52 );
      }
      if ( (_QWORD)v187 )
        sub_140001660(v51, 24 * v187, 8);
      v21 = v227;
      v22 = v230;
    }
    else
    {
      v173 = *(_QWORD *)v215;
      if ( *(_QWORD *)&v215[96] != -1 )
      {
        v188 = *(_OWORD *)&v174[80];
        v187 = *(_OWORD *)&v174[64];
        v186 = *(_OWORD *)&v174[48];
        v185 = *(_OWORD *)&v174[32];
        v184 = *(_OWORD *)&v174[16];
        v183 = *(_OWORD *)v174;
        v204 = v170;
        v203 = v169;
        *(_OWORD *)&v202[32] = v168;
        *(_OWORD *)&v202[16] = v167;
        *(_OWORD *)v202 = *(_OWORD *)&v166.m256i_u64[2];
        v201 = *(_OWORD *)v166.m256i_i8;
        *(_QWORD *)v226 = &v183;
        *(_QWORD *)&v226[8] = sub_140D76130;
        *(_QWORD *)&v226[16] = &v201;
        *(_QWORD *)&v226[24] = sub_140D76130;
        sub_1416DAFA0(&v145, &unk_141A9B944, v226);
        *(_OWORD *)&v210.m256i_u64[1] = v145;
        v210.m256i_i64[3] = v146;
        v210.m256i_i64[0] = 10;
        *(_QWORD *)v221 = 0;
        *(_QWORD *)&v221[8] = 1;
        *(_QWORD *)&v221[16] = 0;
        *(_QWORD *)&v226[16] = 1610612768;
        *(_QWORD *)v226 = v221;
        *(_QWORD *)&v226[8] = &off_141AA1A90;
        if ( (unsigned __int8)sub_140D76130(&v210, v226) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v237,
            (unsigned int)&unk_141A9F540,
            (__int64)&off_141AA1B48);
        v227 = *(_QWORD *)&v221[8];
        v230 = *(_QWORD *)v221;
        v131 = *(_OWORD *)&v221[8];
        v121 = v209;
        sub_1407D7360((__int128 *)v221, a2, v241);
        if ( *(_DWORD *)v221 != -1 )
        {
          *(_OWORD *)&v226[80] = *(_OWORD *)&v221[80];
          *(_OWORD *)&v226[64] = *(_OWORD *)&v221[64];
          *(_OWORD *)&v226[48] = *(_OWORD *)&v221[48];
          *(_OWORD *)&v226[32] = *(_OWORD *)&v221[32];
          *(_OWORD *)&v226[16] = *(_OWORD *)&v221[16];
          *(_OWORD *)v226 = *(_OWORD *)v221;
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            v189[0] = v226;
            v189[1] = sub_140D76130;
            *(_QWORD *)&v192 = aCodexmateLibCo_49;
            *((_QWORD *)&v192 + 1) = 45;
            *(_QWORD *)&v193 = aCodexmateLibCo_49;
            *((_QWORD *)&v193 + 1) = 45;
            *(_QWORD *)&v194 = &off_141AA1958;
            sub_140AF72B0(&unk_141AA1920, v189, 2, &v192);
          }
          sub_140D8A3A0(v226);
        }
        if ( v230 )
          sub_140001660(v227, v230, 1);
        *(_QWORD *)v226 = &v240;
        *(_QWORD *)&v226[8] = sub_1416E8600;
        *(_QWORD *)&v226[16] = &v210;
        *(_QWORD *)&v226[24] = sub_140D76130;
        sub_1416DAFA0(v140, &unk_141A9B8A8, v226);
        sub_140DB20C0(v241, aReconcileFaile, 16, v140, 6, v121, *((_QWORD *)&v121 + 1), v131, *((_QWORD *)&v131 + 1));
        *(_OWORD *)(a1 + 80) = v214;
        *(_OWORD *)(a1 + 64) = v213;
        v18 = *(_OWORD *)v210.m256i_i8;
        v66 = *(_OWORD *)&v210.m256i_u64[2];
        v67 = v211;
        *(_OWORD *)(a1 + 48) = v212;
        *(_OWORD *)(a1 + 32) = v67;
        *(_OWORD *)(a1 + 16) = v66;
        *(_OWORD *)a1 = v18;
        v68 = v240;
        *(_BYTE *)(a1 + 96) = 2;
        *(_BYTE *)(a1 + 97) = v68;
        sub_140D8A3A0(&v201);
        sub_140D8A3A0(&v183);
        goto LABEL_252;
      }
      v214 = *(_OWORD *)&v174[80];
      v213 = *(_OWORD *)&v174[64];
      v212 = *(_OWORD *)&v174[48];
      v211 = *(_OWORD *)&v174[32];
      v210 = *(__m256i *)v174;
      v29 = *(_DWORD *)&v215[104];
      v30 = v215[108];
      v31 = sub_1416AEBD0();
      if ( v229[0] )
        goto LABEL_125;
      if ( v29 )
      {
        if ( v240 > 2u )
          goto LABEL_125;
      }
      else if ( v240 > 2u || !v30 )
      {
        goto LABEL_125;
      }
      if ( v208 == -1 )
      {
        v182 = sub_1416D0210(v31, v32, 12, 0, (__int64)&off_141AA1908);
        v208 = v44;
      }
      else
      {
        v42 = v32 < v208;
        v43 = v31 < v182;
        if ( v31 == v182 )
          v43 = v42;
        if ( !v43 )
        {
LABEL_125:
          *(_QWORD *)v221 = 0;
          *(_QWORD *)&v221[8] = 1;
          *(_QWORD *)&v221[16] = 0;
          *(_QWORD *)&v226[16] = 1610612768;
          *(_QWORD *)v226 = v221;
          *(_QWORD *)&v226[8] = &off_141AA1A90;
          if ( (unsigned __int8)sub_140D76130(&v210, v226) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v237,
              (unsigned int)&unk_141A9F540,
              (__int64)&off_141AA1B48);
          v227 = *(_QWORD *)&v221[8];
          v230 = *(_QWORD *)v221;
          sub_1407D2B10(
            (unsigned int)v226,
            (_DWORD)a2,
            v241,
            (unsigned int)aFailed_2,
            6,
            v209,
            *((__int64 *)&v209 + 1),
            *(__int64 *)&v221[8],
            *(__int64 *)&v221[16],
            0);
          if ( *(_QWORD *)v226 == -1 )
          {
            sub_1407B9160(*(_QWORD *)&v226[8]);
          }
          else
          {
            *(_QWORD *)&v221[88] = *(_QWORD *)&v226[88];
            *(_OWORD *)&v221[72] = *(_OWORD *)&v226[72];
            *(_OWORD *)&v221[56] = *(_OWORD *)&v226[56];
            *(_OWORD *)&v221[40] = *(_OWORD *)&v226[40];
            *(_OWORD *)&v221[24] = *(_OWORD *)&v226[24];
            *(_OWORD *)&v221[8] = *(_OWORD *)&v226[8];
            *(_QWORD *)v221 = *(_QWORD *)v226;
            if ( *(_QWORD *)off_14223FF10 >= 2u )
            {
              *(_QWORD *)&v201 = v221;
              *((_QWORD *)&v201 + 1) = sub_140D76130;
              *(_QWORD *)v226 = aCodexmateLibCo_49;
              *(_QWORD *)&v226[8] = 45;
              *(_QWORD *)&v226[16] = aCodexmateLibCo_49;
              *(_QWORD *)&v226[24] = 45;
              *(_QWORD *)&v226[32] = &off_141AA1958;
              sub_140AF72B0(&unk_141AA1920, &v201, 2, v226);
            }
            sub_140D8A3A0(v221);
          }
          if ( v230 )
            sub_140001660(v227, v230, 1);
          *(_QWORD *)v226 = &v240;
          *(_QWORD *)&v226[8] = sub_1416E8600;
          *(_QWORD *)&v226[16] = &v210;
          *(_QWORD *)&v226[24] = sub_140D76130;
          sub_1416DAFA0(&v148, &unk_141A9B8A8, v226);
          LOBYTE(v183) = v241;
          v230 = v149;
          v201 = v149;
          *(_QWORD *)v226 = &v183;
          *(_QWORD *)&v226[8] = sub_140ED78B0;
          *(_QWORD *)&v226[16] = &v201;
          *(_QWORD *)&v226[24] = sub_140191200;
          sub_1416DAFA0(v221, &unk_141A9B450, v226);
          sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aReconcileFaile, 16, (__int64)v221);
          if ( v148 )
            sub_140001660(v230, v148, 1);
          *(_OWORD *)(a1 + 80) = v214;
          *(_OWORD *)(a1 + 64) = v213;
          v18 = *(_OWORD *)v210.m256i_i8;
          v69 = *(_OWORD *)&v210.m256i_u64[2];
          v70 = v211;
          *(_OWORD *)(a1 + 48) = v212;
          *(_OWORD *)(a1 + 32) = v70;
          *(_OWORD *)(a1 + 16) = v69;
          *(_OWORD *)a1 = v18;
          v71 = v240;
          *(_BYTE *)(a1 + 96) = 2;
          *(_BYTE *)(a1 + 97) = v71;
          goto LABEL_252;
        }
      }
      *(_QWORD *)v221 = 0;
      *(_QWORD *)&v221[8] = 1;
      *(_QWORD *)&v221[16] = 0;
      *(_QWORD *)&v226[16] = 1610612768;
      *(_QWORD *)v226 = v221;
      *(_QWORD *)&v226[8] = &off_141AA1A90;
      v45 = sub_140D76130(&v210, v226);
      v22 = v230;
      if ( v45 )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v237,
          (unsigned int)&unk_141A9F540,
          (__int64)&off_141AA1B48);
      *(_QWORD *)v202 = *(_QWORD *)&v221[16];
      v201 = *(_OWORD *)v221;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)v221 = &v241;
        *(_QWORD *)&v221[8] = sub_140ED78B0;
        *(_QWORD *)&v221[16] = &v240;
        *(_QWORD *)&v221[24] = sub_1416E8600;
        *(_QWORD *)&v221[32] = &v201;
        *(_QWORD *)&v221[40] = sub_1400015F0;
        *(_QWORD *)&v226[48] = 2;
        *(_QWORD *)&v226[56] = aCodexmateLibCo_49;
        *(_QWORD *)&v226[64] = 45;
        *(_QWORD *)&v226[80] = &unk_141A9B8D9;
        *(_QWORD *)&v226[88] = v221;
        *(_QWORD *)v226 = 0;
        *(_QWORD *)&v226[8] = aCodexmateLibCo_49;
        *(_OWORD *)&v226[16] = 0x2Du;
        *(_QWORD *)&v226[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v226[40] = 35;
        *(_QWORD *)&v226[72] = 0x12E00000001LL;
        sub_141503E20(&v237, v226);
      }
      sub_1407D2B10(
        (unsigned int)v226,
        (_DWORD)a2,
        v241,
        (unsigned int)&unk_141A9B8A0,
        8,
        v209,
        *((__int64 *)&v209 + 1),
        *((__int64 *)&v201 + 1),
        *(__int64 *)v202,
        0);
      if ( *(_QWORD *)v226 == -1 )
      {
        sub_1407B9160(*(_QWORD *)&v226[8]);
      }
      else
      {
        *(_QWORD *)&v221[88] = *(_QWORD *)&v226[88];
        *(_OWORD *)&v221[72] = *(_OWORD *)&v226[72];
        *(_OWORD *)&v221[56] = *(_OWORD *)&v226[56];
        *(_OWORD *)&v221[40] = *(_OWORD *)&v226[40];
        *(_OWORD *)&v221[24] = *(_OWORD *)&v226[24];
        *(_OWORD *)&v221[8] = *(_OWORD *)&v226[8];
        *(_QWORD *)v221 = *(_QWORD *)v226;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)&v183 = v221;
          *((_QWORD *)&v183 + 1) = sub_140D76130;
          *(_QWORD *)&v226[48] = 2;
          *(_QWORD *)&v226[56] = aCodexmateLibCo_49;
          *(_QWORD *)&v226[64] = 45;
          *(_QWORD *)&v226[80] = &unk_141AA1920;
          *(_QWORD *)&v226[88] = &v183;
          *(_QWORD *)v226 = 0;
          *(_QWORD *)&v226[8] = aCodexmateLibCo_49;
          *(_OWORD *)&v226[16] = 0x2Du;
          *(_QWORD *)&v226[32] = aSrcCoreRelayRo_1;
          *(_QWORD *)&v226[40] = 35;
          *(_QWORD *)&v226[72] = 0x22E00000001LL;
          sub_141503E20(&v237, v226);
        }
        sub_140D8A3A0(v221);
      }
      *(_QWORD *)v226 = &v240;
      *(_QWORD *)&v226[8] = sub_1416E8600;
      *(_QWORD *)&v226[16] = &v201;
      *(_QWORD *)&v226[24] = sub_1400015F0;
      sub_1416DAFA0(&v150, &unk_141A9B8A8, v226);
      LOBYTE(v192) = v241;
      v207 = v151;
      v183 = v151;
      *(_QWORD *)v226 = &v192;
      *(_QWORD *)&v226[8] = sub_140ED78B0;
      *(_QWORD *)&v226[16] = &v183;
      *(_QWORD *)&v226[24] = sub_140191200;
      sub_1416DAFA0(v221, &unk_141A9B450, v226);
      sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aReconcileRetry, 15, (__int64)v221);
      if ( v150 )
        sub_140001660(v207, v150, 1);
      if ( (_QWORD)v201 )
        sub_140001660(*((_QWORD *)&v201 + 1), v201, 1);
      sub_140D8A3A0(&v210);
      v21 = v227;
    }
  }
  nullsub_1(v20, v19);
  v54 = (_OWORD *)sub_140001650(109, 1);
  if ( !v54 )
    sub_14196B2DB(1, 109);
  *(_OWORD *)((char *)v54 + 93) = *(__int128 *)((char *)&xmmword_141A9B6B4 + 13);
  v54[5] = xmmword_141A9B6B4;
  v54[4] = xmmword_141A9B6A4;
  v54[3] = xmmword_141A9B694;
  v54[2] = xmmword_141A9B684;
  qmemcpy(v54, "CODEX_TRANSITION_REENTRY_TIMEOUT", 32);
  *(_QWORD *)&v221[8] = 109;
  *(_QWORD *)&v221[16] = v54;
  *(_QWORD *)&v221[24] = 109;
  *(_QWORD *)v221 = 10;
  *(_QWORD *)v226 = 0;
  *(_QWORD *)&v226[8] = 1;
  *(_QWORD *)&v226[16] = 0;
  *(_QWORD *)&v215[16] = 1610612768;
  *(_QWORD *)v215 = v226;
  *(_QWORD *)&v215[8] = &off_141AA1A90;
  if ( (unsigned __int8)sub_140D76130(v221, v215) )
    sub_14196B5F0(
      (unsigned int)aADisplayImplem_11,
      55,
      (unsigned int)&v237,
      (unsigned int)&unk_141A9F540,
      (__int64)&off_141AA1B48);
  v230 = *(_QWORD *)v226;
  v135 = *(_QWORD *)&v226[16];
  v227 = *(_QWORD *)&v226[8];
  v129 = *(_QWORD *)&v226[8];
  v119 = v209;
  sub_1407D7360((__int128 *)v226, a2, v241);
  if ( *(_DWORD *)v226 != -1 )
  {
    *(_OWORD *)&v215[80] = *(_OWORD *)&v226[80];
    *(_OWORD *)&v215[64] = *(_OWORD *)&v226[64];
    *(_OWORD *)&v215[48] = *(_OWORD *)&v226[48];
    *(_OWORD *)&v215[32] = *(_OWORD *)&v226[32];
    *(_OWORD *)&v215[16] = *(_OWORD *)&v226[16];
    *(_OWORD *)v215 = *(_OWORD *)v226;
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      *(_QWORD *)&v201 = v215;
      *((_QWORD *)&v201 + 1) = sub_140D76130;
      v210.m256i_i64[0] = (__int64)aCodexmateLibCo_49;
      v210.m256i_i64[1] = 45;
      v210.m256i_i64[2] = (__int64)aCodexmateLibCo_49;
      v210.m256i_i64[3] = 45;
      *(_QWORD *)&v211 = &off_141AA1958;
      sub_140AF72B0(&unk_141AA1920, &v201, 2, &v210);
    }
    sub_140D8A3A0(v215);
  }
  if ( v230 )
    sub_140001660(v227, v230, 1);
  *(_QWORD *)v226 = 0;
  *(_QWORD *)&v226[8] = 1;
  *(_QWORD *)&v226[16] = 0;
  *(_QWORD *)&v215[16] = 1610612768;
  *(_QWORD *)v215 = v226;
  *(_QWORD *)&v215[8] = &off_141AA1A90;
  if ( (unsigned __int8)sub_140D76130(v221, v215) )
    sub_14196B5F0(
      (unsigned int)aADisplayImplem_11,
      55,
      (unsigned int)&v237,
      (unsigned int)&unk_141A9F540,
      (__int64)&off_141AA1B48);
  v210.m256i_i64[2] = *(_QWORD *)&v226[16];
  *(_OWORD *)v210.m256i_i8 = *(_OWORD *)v226;
  sub_140DB20C0(v241, aRetryExhausted, 15, &v210, 6, v119, *((_QWORD *)&v119 + 1), v129, v135);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)&v221[80];
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v221[64];
  v18 = *(_OWORD *)v221;
  v55 = *(_OWORD *)&v221[16];
  v56 = *(_OWORD *)&v221[32];
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v221[48];
  *(_OWORD *)(a1 + 32) = v56;
  *(_OWORD *)(a1 + 16) = v55;
  *(_OWORD *)a1 = v18;
  *(_WORD *)(a1 + 96) = 772;
LABEL_252:
  *(_QWORD *)&result = v18;
  return result;
}
